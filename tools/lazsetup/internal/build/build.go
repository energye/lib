// Package build drives lazbuild to produce the energy lib dynamic library.
package build

import (
	"fmt"
	"io"
	"os"
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
	lazbuild := firstNonEmpty(o.Lazbuild, os.Getenv("LAZBUILD"), "lazbuild"+o.R.Vars["exe"])
	if !r.DryRun && !filepath.IsAbs(lazbuild) && !strings.ContainsAny(lazbuild, `/\`) {
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
		for _, cp := range o.R.Components {
			if cp.ID == "build-lazarus" {
				lazarusDir = o.R.Vars["cprefix"]
				break
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
	wrapped := runner.ContainerCommand(ct.Engine, ct.Image, ct.Platform,
		ct.HostPath, ct.GuestPath, ct.Workdir, ct.Shell, install, cmds)
	return r.Run(wrapped)
}

func packageOutput(r *runner.Runner, workDir, outDir, output string, m config.BuildMode) (string, error) {
	src := output
	if !filepath.IsAbs(src) {
		src = filepath.Join(workDir, src)
	}
	if _, err := os.Stat(src); err != nil {
		r.Logf("  warning: expected output %s not found, skipped", src)
		return "", nil
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
