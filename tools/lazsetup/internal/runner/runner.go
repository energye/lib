// Package runner executes external commands with logging, dry-run support and
// GitHub Actions environment-file output.
package runner

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"os/exec"
	"runtime"
	"sort"
	"strings"
)

// Runner executes command lines through the platform shell.
type Runner struct {
	DryRun  bool
	Verbose bool
	Out     io.Writer
	Dir     string
	Env     []string
}

func New(out io.Writer) *Runner {
	if out == nil {
		out = os.Stdout
	}
	return &Runner{Out: out}
}

func (r *Runner) Logf(format string, a ...any) { fmt.Fprintf(r.Out, format+"\n", a...) }

func (r *Runner) Debugf(format string, a ...any) {
	if r.Verbose {
		r.Logf("  [debug] "+format, a...)
	}
}

// Shell returns the shell command used to interpret a command line.
func (r *Runner) Shell() (string, []string) {
	if runtime.GOOS == "windows" {
		return "cmd.exe", []string{"/C"}
	}
	return "/bin/sh", []string{"-c"}
}

// ExecOption customizes the underlying exec.Cmd.
type ExecOption func(*exec.Cmd)

func WithDir(dir string) ExecOption { return func(c *exec.Cmd) { c.Dir = dir } }

func WithEnv(env ...string) ExecOption {
	return func(c *exec.Cmd) { c.Env = append(c.Env, env...) }
}

func (r *Runner) prepare(command string, opts ...ExecOption) *exec.Cmd {
	shell, args := r.Shell()
	args = append(args, command)
	cmd := exec.Command(shell, args...)
	cmd.Env = append(os.Environ(), r.Env...)
	cmd.Stdout = r.Out
	cmd.Stderr = r.Out
	if r.Dir != "" {
		cmd.Dir = r.Dir
	}
	for _, o := range opts {
		o(cmd)
	}
	return cmd
}

// Run executes a command line and streams output.
func (r *Runner) Run(command string, opts ...ExecOption) error {
	if strings.TrimSpace(command) == "" {
		return nil
	}
	r.Logf("  $ %s", command)
	if r.DryRun {
		return nil
	}
	if err := r.prepare(command, opts...).Run(); err != nil {
		return fmt.Errorf("command failed (%s): %w", command, err)
	}
	return nil
}

// Output executes a command line and returns trimmed stdout.
func (r *Runner) Output(command string, opts ...ExecOption) (string, error) {
	r.Debugf("$ %s", command)
	if r.DryRun {
		r.Logf("  $ %s", command)
		return "", nil
	}
	var buf strings.Builder
	cmd := r.prepare(command, opts...)
	cmd.Stdout = &buf
	if err := cmd.Run(); err != nil {
		return "", fmt.Errorf("command failed (%s): %w", command, err)
	}
	return strings.TrimSpace(buf.String()), nil
}

// LookPath resolves an executable, checking extraPaths first.
func LookPath(name string, extraPaths ...string) (string, error) {
	for _, dir := range extraPaths {
		if dir == "" {
			continue
		}
		for _, candidate := range []string{name, name + ".exe"} {
			p := dir + string(os.PathSeparator) + candidate
			if fi, err := os.Stat(p); err == nil && !fi.IsDir() {
				return p, nil
			}
		}
	}
	if p, err := exec.LookPath(name); err == nil {
		return p, nil
	}
	return "", fmt.Errorf("%s not found (searched PATH and %v)", name, extraPaths)
}

func appendLines(path string, lines []string) error {
	if path == "" || len(lines) == 0 {
		return nil
	}
	f, err := os.OpenFile(path, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644)
	if err != nil {
		return err
	}
	defer f.Close()
	w := bufio.NewWriter(f)
	for _, line := range lines {
		if _, err := fmt.Fprintln(w, line); err != nil {
			return err
		}
	}
	return w.Flush()
}

// AppendGitHubPath adds directories to the GITHUB_PATH file.
func AppendGitHubPath(paths []string, githubPath string) error {
	return appendLines(githubPath, paths)
}

// AppendGitHubEnv writes KEY=VALUE pairs to the GITHUB_ENV file.
func AppendGitHubEnv(values map[string]string, githubEnv string) error {
	keys := make([]string, 0, len(values))
	for k := range values {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	lines := make([]string, 0, len(keys))
	for _, k := range keys {
		v := values[k]
		if strings.Contains(v, "\n") {
			delim := "LAZSETUP_EOF"
			lines = append(lines, fmt.Sprintf("%s<<%s", k, delim), v, delim)
		} else {
			lines = append(lines, k+"="+v)
		}
	}
	return appendLines(githubEnv, lines)
}

// ContainerCommand wraps commands into one docker run invocation, mapping host
// paths to the container mount and running prerequisite installers first.
// Mount is an additional host:guest volume. Windows drive letters are kept in
// Host, so callers must not try to split a "host:guest" string on ":".
type Mount struct {
	Host  string
	Guest string
}

func ContainerCommand(engine, image, platform, hostPath, guestPath, workdir, shell string, install, cmds []string, mounts ...Mount) string {
	combined := append(append([]string{}, install...), cmds...)
	mapped := make([]string, 0, len(combined))
	for _, c := range combined {
		s := strings.ReplaceAll(c, hostPath, guestPath)
		for _, m := range mounts {
			if m.Host != "" && m.Guest != "" {
				s = strings.ReplaceAll(s, m.Host, m.Guest)
			}
		}
		mapped = append(mapped, s)
	}
	inner := strings.Join(mapped, " && ")
	quoted := "'" + strings.ReplaceAll(inner, "'", `'\''`) + "'"
	parts := []string{engine, "run", "--rm"}
	if platform != "" {
		parts = append(parts, "--platform", platform)
	}
	parts = append(parts, "-v", fmt.Sprintf(`"%s:%s"`, hostPath, guestPath))
	for _, m := range mounts {
		if m.Host != "" && m.Guest != "" {
			parts = append(parts, "-v", fmt.Sprintf(`"%s:%s"`, m.Host, m.Guest))
		}
	}
	parts = append(parts, "-w", fmt.Sprintf(`"%s"`, workdir))
	if image != "" {
		parts = append(parts, image)
	}
	if shell != "" {
		parts = append(parts, shell, "-c", quoted)
	}
	return strings.Join(parts, " ")
}
