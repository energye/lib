// Package build drives lazbuild to produce the energy lib dynamic library.
package build

import (
	"fmt"
	"io"
	"io/fs"
	"os"
	"path"
	"path/filepath"
	"strings"

	"github.com/energye/lib/tools/lazsetup/internal/archive"
	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

type Options struct {
	R         *config.Resolved
	Runner    *runner.Runner
	Lazbuild  string
	Modes     []string
	OutDir    string
	NoPackage bool
}

type Result struct {
	Modes     []string
	Artifacts []string
}

// Build registers third-party packages and runs one lazbuild invocation per
// build mode, packaging each resulting library immediately.
func Build(o Options) (*Result, error) {
	if o.R == nil {
		return nil, fmt.Errorf("nil resolved config")
	}
	r := o.Runner
	if r == nil {
		r = runner.New(nil)
	}
	lazbuild := firstNonEmpty(o.Lazbuild, "lazbuild"+o.R.Vars["exe"])
	inContainer := o.R.Build.Container != nil && o.R.Build.Container.Engine != ""
	if inContainer && o.Lazbuild == "" {
		// A host-side LAZBUILD path is meaningless inside the container. Use
		// the toolchain volume's guest path instead.
		if guest := o.R.Vars["cprefix"]; guest != "" {
			lazbuild = path.Join(guest, "lazbuild"+o.R.Vars["exe"])
		}
	} else {
		lazbuild = firstNonEmpty(o.Lazbuild, os.Getenv("LAZBUILD"), "lazbuild"+o.R.Vars["exe"])
	}
	if !r.DryRun && !inContainer && !filepath.IsAbs(lazbuild) && !strings.ContainsAny(lazbuild, `/\`) {
		p, err := runner.LookPath(lazbuild, o.R.Prefix)
		if err != nil {
			return nil, fmt.Errorf("lazbuild not found (run `lazsetup setup` first or pass --lazbuild): %w", err)
		}
		lazbuild = p
	}
	lazQ := fmt.Sprintf("%q", lazbuild)
	ld := ""
	lazarusDir := o.R.Build.LazarusDir
	if lazarusDir == "" {
		sourceBuild := false
		for _, cp := range o.R.Components {
			if cp.ID == "build-lazarus" {
				sourceBuild = true
				break
			}
		}
		switch {
		case sourceBuild:
			// Linux: Lazarus was built from source inside the container, so the
			// guest-side toolchain path is the Lazarus root.
			lazarusDir = o.R.Vars["cprefix"]
		case o.R.Target.OS == "darwin":
			// The official macOS zip is unpacked into ${prefix}/lazarus and
			// lazbuild is symlinked into /usr/local/bin. `setup` resolves that
			// symlink and exports LAZARUSDIR as the real root; trust it whenever
			// the directory exists. Without --lazarusdir lazbuild falls back to
			// its baked-in /Developer/lazarus/ path and fails with
			// "Invalid Lazarus directory".
			if d := os.Getenv("LAZARUSDIR"); isDir(d) {
				lazarusDir = d
			} else if d := findLazarusRoot(o.R.Prefix); d != "" {
				lazarusDir = d
			} else {
				lazarusDir = o.R.Prefix
			}
		}
	}
	if lazarusDir != "" {
		ld = fmt.Sprintf(" --lazarusdir=%q", lazarusDir)
	}
	workDir := o.R.Build.WorkDir
	if workDir == "" {
		workDir = "."
	}
	outDir := firstNonEmpty(o.OutDir, o.R.Build.OutDir, ".")
	output := o.R.Build.Output
	if output == "" {
		output = filepath.Join("bin", "liblcl."+o.R.Vars["lib_ext"])
	}
	project := o.R.Build.Project
	if project == "" {
		project = "liblcl.lpi"
	}

	res := &Result{}
	selected := map[string]bool{}
	for _, m := range o.Modes {
		selected[m] = true
	}
	explicit := len(selected) > 0
	var modes []config.BuildMode
	for _, m := range o.R.Build.Modes {
		if m.Disabled || (explicit && !selected[m.Name]) {
			continue
		}
		if !explicit {
			if len(m.OS) > 0 && !contains(m.OS, o.R.Target.OS) {
				continue
			}
			if len(m.Arch) > 0 && !contains(m.Arch, o.R.Target.Arch) {
				continue
			}
		}
		modes = append(modes, m)
	}
	if len(modes) == 0 {
		return nil, fmt.Errorf("no build modes selected (available: %d configured)", len(o.R.Build.Modes))
	}

	firstCommand := true
	execCmd := func(command string) error {
		err := runOne(o, r, workDir, command, firstCommand)
		firstCommand = false
		return err
	}

	// Third-party packages are registered once. Inside a container they are
	// batched into a single docker run to avoid paying startup cost per lpk.
	if !o.NoPackage {
		var batch []string
		for _, p := range o.R.Build.Packages {
			if p.Link {
				batch = append(batch, fmt.Sprintf("%s%s --add-package-link %q", lazQ, ld, p.Path))
			}
			if p.Add {
				batch = append(batch, fmt.Sprintf("%s%s --add-package %q", lazQ, ld, p.Path))
			}
			if !p.SkipBuild {
				batch = append(batch, fmt.Sprintf("%s%s %q", lazQ, ld, p.Path))
			}
		}
		ct := o.R.Build.Container
		if ct != nil && ct.Engine != "" && len(batch) > 0 {
			if err := execCmd(strings.Join(batch, " && ")); err != nil {
				return nil, err
			}
		} else {
			for _, c := range batch {
				if err := execCmd(c); err != nil {
					return nil, err
				}
			}
		}
	}

	for _, m := range modes {
		cmd := lazQ + ld + " -B"
		if m.BM != "" {
			cmd += fmt.Sprintf(" --bm=%q", m.BM)
		}
		if m.WS != "" {
			cmd += " --ws=" + m.WS
		}
		if m.Extra != "" {
			cmd += " " + m.Extra
		}
		cmd += fmt.Sprintf(" %q", project)
		r.Logf("[mode %s]", m.Name)
		if err := execCmd(cmd); err != nil {
			return nil, fmt.Errorf("build mode %s: %w", m.Name, err)
		}
		res.Modes = append(res.Modes, m.Name)
		if r.DryRun {
			continue
		}
		artifact, err := packageOutput(r, workDir, outDir, output, m)
		if err != nil {
			return nil, err
		}
		if artifact != "" {
			res.Artifacts = append(res.Artifacts, artifact)
		}
	}
	return res, nil
}

// runOne executes one command either on the host or inside the configured
// cross-architecture container.
func runOne(o Options, r *runner.Runner, workDir, command string, withInstall bool) error {
	ct := o.R.Build.Container
	if ct == nil || ct.Engine == "" {
		return r.Run(command, runner.WithDir(workDir))
	}
	cmds := []string{}
	targetDir := o.R.Build.ContainerDir
	if targetDir == "" && workDir != "" && workDir != "." {
		targetDir = workDir
	}
	if targetDir != "" {
		mapped := strings.ReplaceAll(targetDir, ct.HostPath, ct.GuestPath)
		cmds = append(cmds, "cd "+fmt.Sprintf("%q", mapped))
	}
	cmds = append(cmds, command)
	install := []string(nil)
	if withInstall {
		install = ct.Install
	}
	var mounts []runner.Mount
	for _, m := range ct.Mounts {
		mounts = append(mounts, runner.Mount{Host: m.Host, Guest: m.Guest})
	}
	wrapped := runner.ContainerCommand(ct.Engine, ct.Image, ct.Platform,
		ct.HostPath, ct.GuestPath, ct.Workdir, ct.Shell, ct.Name, install, cmds,
		ct.SecurityOpt, mounts...)
	return r.Run(wrapped)
}

func packageOutput(r *runner.Runner, workDir, outDir, output string, m config.BuildMode) (string, error) {
	src := output
	if m.Artifact != "" {
		src = m.Artifact
	}
	if !filepath.IsAbs(src) {
		src = filepath.Join(workDir, src)
	}
	if _, err := os.Stat(src); err != nil {
		return "", fmt.Errorf("build mode %q produced no artifact at %s: %w "+
			"(check Target/Filename in the .lpi and the mode's \"artifact\" in energy-lib.json)",
			m.Name, src, err)
	}
	name := m.Output
	if name == "" {
		name = filepath.Base(src)
	}
	if err := os.MkdirAll(outDir, 0o755); err != nil {
		return "", err
	}
	dst := filepath.Join(outDir, name)
	if strings.HasSuffix(strings.ToLower(name), ".zip") {
		if err := archive.Zip(dst, map[string]string{filepath.Base(src): src}); err != nil {
			return "", err
		}
	} else {
		if err := copyFile(src, dst); err != nil {
			return "", err
		}
	}
	r.Logf("  artifact: %s", dst)
	return dst, nil
}

func copyFile(src, dst string) error {
	in, err := os.Open(src)
	if err != nil {
		return err
	}
	defer in.Close()
	out, err := os.OpenFile(dst, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0o644)
	if err != nil {
		return err
	}
	defer out.Close()
	_, err = io.Copy(out, in)
	return err
}

// isDir reports whether p is an existing directory.
func isDir(p string) bool {
	if p == "" {
		return false
	}
	fi, err := os.Stat(p)
	return err == nil && fi.IsDir()
}

// hasLazarusRoot reports whether dir looks like a Lazarus installation root
// (the directory that contains lcl/, components/, ide/ ...).
func hasLazarusRoot(dir string) bool {
	return isDir(dir) && isDir(filepath.Join(dir, "lcl"))
}

// findLazarusRoot locates the real Lazarus root below prefix. The macOS zip
// adds a top-level lazarus/ directory (and may nest an .app bundle), so the
// prefix itself is not necessarily the root.
func findLazarusRoot(prefix string) string {
	if prefix == "" || hasLazarusRoot(prefix) {
		return prefix
	}
	if _, err := os.Stat(prefix); err != nil {
		return ""
	}
	found := ""
	_ = filepath.WalkDir(prefix, func(p string, d fs.DirEntry, err error) error {
		if err != nil || !d.IsDir() {
			return nil
		}
		rel, _ := filepath.Rel(prefix, p)
		if rel != "." && strings.Count(rel, string(os.PathSeparator)) > 3 {
			return fs.SkipDir
		}
		if hasLazarusRoot(p) {
			found = p
			return fs.SkipAll
		}
		return nil
	})
	return found
}

func contains(list []string, value string) bool {
	for _, v := range list {
		if strings.EqualFold(v, value) {
			return true
		}
	}
	return false
}

func firstNonEmpty(values ...string) string {
	for _, v := range values {
		if v != "" {
			return v
		}
	}
	return ""
}
