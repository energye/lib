// Package setup turns a resolved plan into an installed Lazarus/FPC toolchain.
package setup

import (
	"fmt"
	"io/fs"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"

	"github.com/energye/lib/tools/lazsetup/internal/archive"
	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/download"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

type Options struct {
	R            *config.Resolved
	Runner       *runner.Runner
	NoCache      bool
	GitHub       bool
	VerifyOnly   bool
	UpdateHashes bool
	Headers      map[string]string
}

type FileInfo struct {
	ID, URL, Path, SHA256 string
	Size                  int64
	FromCache             bool
}

type Result struct {
	Lazbuild string
	FPC      string
	Paths    []string
	Env      map[string]string
	Files    []FileInfo
}

// Setup downloads, verifies, installs and (for source profiles) compiles the
// toolchain, then exports the environment for subsequent steps.
func Setup(o Options) (*Result, error) {
	if o.R == nil {
		return nil, fmt.Errorf("nil resolved config")
	}
	r := o.Runner
	if r == nil {
		r = runner.New(nil)
	}
	res := &Result{Env: map[string]string{}}
	for _, dir := range []string{o.R.Prefix, o.R.Cache, o.R.Work} {
		if dir != "" && !r.DryRun {
			if err := os.MkdirAll(dir, 0o755); err != nil {
				return nil, err
			}
		}
	}

	for _, cp := range o.R.Components {
		if cp.URL == "" {
			if o.VerifyOnly {
				continue
			}
			r.Logf("[%s] commands", cp.ID)
			if err := o.runCommands(cp.Commands); err != nil {
				return nil, fmt.Errorf("component %s: %w", cp.ID, err)
			}
			continue
		}
		urls := append([]string{cp.URL}, cp.URLs...)
		r.Logf("[%s] %s", cp.ID, cp.URL)
		d, err := download.Fetch(urls, cp.SHA256, cp.Size, download.Options{
			CacheDir: o.R.Cache, Retries: o.R.Retries, Timeout: o.R.Timeout,
			NoCache: o.NoCache, Headers: o.Headers, Out: r.Out, DryRun: r.DryRun,
		})
		if err != nil {
			if cp.Optional {
				r.Logf("  optional component skipped: %v", err)
				continue
			}
			return nil, fmt.Errorf("component %s: %w", cp.ID, err)
		}
		res.Files = append(res.Files, FileInfo{
			ID: cp.ID, URL: cp.URL, Path: d.Path, SHA256: d.SHA256,
			Size: d.Size, FromCache: d.FromCache,
		})
		if o.UpdateHashes {
			fmt.Printf("  \"%s\": { \"sha256\": \"%s\", \"size\": %d },\n", cp.ID, d.SHA256, d.Size)
			continue
		}
		if o.VerifyOnly || r.DryRun {
			continue
		}
		if err := o.install(cp, d.Path); err != nil {
			return nil, fmt.Errorf("install component %s: %w", cp.ID, err)
		}
		if err := o.runCommands(cp.Commands); err != nil {
			return nil, fmt.Errorf("component %s commands: %w", cp.ID, err)
		}
	}
	if o.VerifyOnly || o.UpdateHashes {
		return res, nil
	}
	if r.DryRun {
		r.Logf("[dry-run] skipped locating lazbuild, environment export")
		return res, nil
	}

	lazbuild := firstExisting(
		func() string { p, _ := runner.LookPath("lazbuild" + o.R.Vars["exe"]); return p }(),
		findBinary(o.R.Prefix, "lazbuild"),
		findBinary(o.R.Work, "lazbuild"),
	)
	fpc := firstExisting(
		func() string { p, _ := runner.LookPath("fpc" + o.R.Vars["exe"]); return p }(),
		findBinary(o.R.Prefix, "fpc"),
	)
	res.Lazbuild, res.FPC = lazbuild, fpc

	paths := uniquePaths([]string{
		parentOf(lazbuild), o.R.Prefix,
	})
	if matches, err := filepath.Glob(filepath.Join(o.R.Prefix, "fpc", "*", "bin", "*")); err == nil {
		for _, m := range matches {
			if fi, err := os.Stat(m); err == nil && fi.IsDir() {
				paths = uniquePaths(append(paths, m))
			}
		}
	}
	res.Paths = paths
	res.Env = map[string]string{
		"LAZSETUP_PREFIX": o.R.Prefix,
		"LAZSETUP_WORK":   o.R.Work,
		"LAZSETUP_CACHE":  o.R.Cache,
	}
	if lazbuild != "" {
		res.Env["LAZBUILD"] = lazbuild
		res.Env["LAZARUSDIR"] = parentOf(lazbuild)
	}
	if fpc != "" {
		res.Env["FPCDIR"] = parentOf(fpc)
	}
	for k, v := range o.R.Env {
		res.Env[k] = v
	}

	if o.GitHub {
		if err := runner.AppendGitHubPath(paths, os.Getenv("GITHUB_PATH")); err != nil {
			return nil, err
		}
		if err := runner.AppendGitHubEnv(res.Env, os.Getenv("GITHUB_ENV")); err != nil {
			return nil, err
		}
		r.Logf("  wrote GITHUB_PATH / GITHUB_ENV")
	} else {
		printLocalEnv(r, paths, res.Env)
	}
	if lazbuild == "" {
		r.Logf("  warning: lazbuild not found; check the install commands in the profile")
	} else {
		r.Logf("  lazbuild: %s", lazbuild)
	}
	return res, nil
}

func (o Options) install(cp config.Component, file string) error {
	r := o.Runner
	dest := cp.Dest
	if dest == "" {
		dest = o.R.Prefix
	}
	sudo := ""
	if cp.Sudo && runtime.GOOS != "windows" {
		sudo = "sudo "
	}
	switch strings.ToLower(cp.Kind) {
	case "", "raw", "zip", "tar", "targz", "tar.gz", "deb":
		return archive.Extract(cp.Kind, file, dest, cp.Strip)
	case "commands":
		return nil
	case "inno":
		if !r.DryRun {
			if err := os.MkdirAll(dest, 0o755); err != nil {
				return err
			}
		}
		return o.runDirect(file, "/VERYSILENT", "/SP-", "/DIR="+dest)
	case "dpkg":
		return r.Run(sudo + fmt.Sprintf("dpkg -i %q", file))
	case "pkg":
		return r.Run(sudo + fmt.Sprintf("installer -package %q -target /", file))
	case "dmg":
		return o.installDMG(file, sudo)
	default:
		return fmt.Errorf("unsupported component kind %q", cp.Kind)
	}
}

func (o Options) installDMG(file, sudo string) error {
	r := o.Runner
	out, err := r.Output(fmt.Sprintf("hdiutil attach -nobrowse -readonly %q", file))
	if err != nil {
		return err
	}
	mount := ""
	for _, line := range strings.Split(out, "\n") {
		if i := strings.Index(line, "/Volumes/"); i >= 0 {
			mount = strings.TrimSpace(line[i:])
		}
	}
	if mount == "" {
		return fmt.Errorf("could not determine DMG mount point from: %s", out)
	}
	defer r.Run(fmt.Sprintf("hdiutil detach %q", mount))
	entries, err := os.ReadDir(mount)
	if err != nil {
		return err
	}
	for _, e := range entries {
		if strings.HasSuffix(e.Name(), ".pkg") || strings.HasSuffix(e.Name(), ".mpkg") {
			pkg := filepath.Join(mount, e.Name())
			return r.Run(sudo + fmt.Sprintf("installer -package %q -target /", pkg))
		}
	}
	return fmt.Errorf("no .pkg/.mpkg found inside DMG %s", file)
}

func (o Options) runCommands(cmds []string) error {
	if len(cmds) == 0 {
		return nil
	}
	if ct := o.R.Container; ct != nil && ct.Engine != "" {
		command := runner.ContainerCommand(ct.Engine, ct.Image, ct.Platform,
			ct.HostPath, ct.GuestPath, ct.Workdir, ct.Shell, ct.Install, cmds,
			mountsOf(ct)...)
		return o.Runner.Run(command)
	}
	for _, c := range cmds {
		if err := o.Runner.Run(c); err != nil {
			return err
		}
	}
	return nil
}

func mountsOf(ct *config.Container) []runner.Mount {
	if ct == nil {
		return nil
	}
	out := make([]runner.Mount, 0, len(ct.Mounts))
	for _, m := range ct.Mounts {
		out = append(out, runner.Mount{Host: m.Host, Guest: m.Guest})
	}
	return out
}

func (o Options) runDirect(name string, args ...string) error {
	r := o.Runner
	r.Logf("  $ %s %v", name, args)
	if r.DryRun {
		return nil
	}
	cmd := exec.Command(name, args...)
	cmd.Env = append(os.Environ(), r.Env...)
	cmd.Stdout, cmd.Stderr = r.Out, r.Out
	if r.Dir != "" {
		cmd.Dir = r.Dir
	}
	return cmd.Run()
}

func findBinary(root, name string) string {
	if root == "" {
		return ""
	}
	if _, err := os.Stat(root); err != nil {
		return ""
	}
	suffix := ""
	if runtime.GOOS == "windows" {
		suffix = ".exe"
	}
	found := ""
	_ = filepath.WalkDir(root, func(p string, d fs.DirEntry, err error) error {
		if err != nil {
			return nil
		}
		if d.IsDir() {
			rel, _ := filepath.Rel(root, p)
			if strings.Count(rel, string(os.PathSeparator)) > 6 {
				return fs.SkipDir
			}
			return nil
		}
		if strings.EqualFold(d.Name(), name) || strings.EqualFold(d.Name(), name+suffix) {
			found = p
			return fs.SkipAll
		}
		return nil
	})
	return found
}

func parentOf(p string) string {
	if p == "" {
		return ""
	}
	return filepath.Dir(p)
}

func firstExisting(values ...string) string {
	for _, v := range values {
		if v != "" {
			return v
		}
	}
	return ""
}

func uniquePaths(in []string) []string {
	seen := map[string]bool{}
	out := make([]string, 0, len(in))
	for _, p := range in {
		if p == "" || seen[p] {
			continue
		}
		seen[p] = true
		out = append(out, p)
	}
	return out
}

func printLocalEnv(r *runner.Runner, paths []string, env map[string]string) {
	sep := ":"
	if runtime.GOOS == "windows" {
		sep = ";"
	}
	r.Logf("\nAdd to your environment:")
	for k, v := range env {
		if runtime.GOOS == "windows" {
			r.Logf("  PowerShell: $env:%s = %q", k, v)
		} else {
			r.Logf("  export %s=%q", k, v)
		}
	}
	if runtime.GOOS == "windows" {
		r.Logf("  PowerShell: $env:PATH = %q + $env:PATH", strings.Join(paths, sep)+sep)
	} else {
		r.Logf("  export PATH=%q:$PATH", strings.Join(paths, sep))
	}
}
