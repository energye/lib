// Package build - combination matrix support.
//
// The energy lib is a collection of UI modules (LCL, CEF, WebView). A build
// "combination" picks one set of them by injecting -d defines into liblcl.lpi
// before calling Lazarus' lazbuild through tools/lazbuild. Because every
// build mode has a fixed Target/Filename, each library must be zipped
// immediately after its own compile, before the next combination overwrites it.
package build

import (
	"fmt"
	"os"
	"path"
	"path/filepath"
	"strings"

	"github.com/energye/lib/tools/lazsetup/internal/archive"
	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

// ComboOptions selects which combinations to build for the resolved target.
// Empty Combos/CEFVersions/WidgetSets means "all of them".
type ComboOptions struct {
	R           *config.Resolved
	Runner      *runner.Runner
	Lazbuild    string // Lazarus lazbuild executable on the host (non-container builds)
	OutDir      string
	Combos      []string // combination names, e.g. lcl / webview / cef / cef-webview
	CEFVersions []string // CEF109 or 109; empty = all four
	WidgetSets  []string // gtk2 / gtk3; empty = both on Linux
}

// ComboJob is one concrete lazbuild invocation plus the zip it must produce.
type ComboJob struct {
	Combo    string
	Module   string
	Defines  []string
	BM       string
	WS       string
	WSTag    string
	Artifact string
	Extra    string
	ZipName  string
	CEFName  string
}

// ZipName builds libenergy-[module-][os]-[arch]-[ws].zip. Only Linux carries a
// widgetset segment; module is omitted entirely for the LCL-only combination.
func ZipName(module, osName, arch, wsTag string) string {
	parts := []string{"libenergy"}
	if module != "" {
		parts = append(parts, module)
	}
	parts = append(parts, osName, arch)
	if wsTag != "" {
		parts = append(parts, wsTag)
	}
	return strings.Join(parts, "-") + ".zip"
}

// ExpandCombos turns the JSON combination declarations into concrete jobs for
// the resolved (os, arch). CEF combinations fan out over cefVersions; a
// combination's widgetsets list filters out unsupported widgetsets (gtk2 has
// no webkit2gtk, so Webview combinations never produce gtk2 artifacts).
func ExpandCombos(o ComboOptions) ([]ComboJob, error) {
	if o.R == nil {
		return nil, fmt.Errorf("nil resolved config")
	}
	r := o.R
	comboSel := boolSet(o.Combos)
	cefSel := boolSet(o.CEFVersions)
	wsSel := boolSet(o.WidgetSets)

	var jobs []ComboJob
	for _, cb := range r.Build.Combinations {
		if cb.Disabled || (len(comboSel) > 0 && !comboSel[cb.Name]) {
			continue
		}
		versions := []config.CEFVersion{{}}
		if cb.CEF {
			versions = nil
			for _, v := range r.Build.CEFVersions {
				if len(cefSel) > 0 && !cefSel[v.Name] && !cefSel[v.Num] {
					continue
				}
				versions = append(versions, v)
			}
			if len(versions) == 0 {
				return nil, fmt.Errorf("combination %q needs CEF versions, none selected", cb.Name)
			}
		}
		for _, v := range versions {
			repl := strings.NewReplacer("${cef}", v.Name, "${cefNum}", v.Num)
			module := repl.Replace(cb.Module)
			defines := make([]string, 0, len(cb.Defines))
			for _, d := range cb.Defines {
				if d = repl.Replace(d); d != "" {
					defines = append(defines, d)
				}
			}
			for _, pm := range r.Build.PlatformModes {
				if pm.Disabled || pm.OS != r.Target.OS || pm.Arch != r.Target.Arch {
					continue
				}
				// --ws only selects Linux widgetsets. Windows/macOS modes have
				// no wsTag and must stay in the matrix regardless.
				if len(wsSel) > 0 && pm.WSTag != "" && !wsSel[pm.WSTag] && !wsSel[pm.WS] {
					continue
				}
				if len(cb.WidgetSets) > 0 && !contains(cb.WidgetSets, pm.WS) {
					continue
				}
				jobs = append(jobs, ComboJob{
					Combo: cb.Name, Module: module, Defines: defines,
					BM: pm.BM, WS: pm.WS, WSTag: pm.WSTag,
					Artifact: pm.Artifact, Extra: pm.Extra, CEFName: v.Name,
					ZipName: ZipName(module, r.Target.OS, r.Target.Arch, pm.WSTag),
				})
			}
		}
	}
	if len(jobs) == 0 {
		return nil, fmt.Errorf("no combination jobs for %s (combos=%v cef=%v ws=%v)",
			r.Target.String(), o.Combos, o.CEFVersions, o.WidgetSets)
	}
	return jobs, nil
}

// BuildCombos runs every selected job. liblcl.lpi is backed up once up front
// and restored unconditionally on return (success, failure or panic), on top
// of tools/lazbuild's own restore. Jobs are strictly serial: they all mutate
// the same lpi in the same working tree.
func BuildCombos(o ComboOptions) (*Result, error) {
	jobs, err := ExpandCombos(o)
	if err != nil {
		return nil, err
	}
	r := o.Runner
	if r == nil {
		r = runner.New(nil)
	}
	resolved := o.R
	repo := resolved.Vars["repo"]
	project := firstNonEmpty(resolved.Build.Project, "liblcl.lpi")
	// lpiHost is always the host-side path: it is what BuildCombos backs up
	// and restores. lpiArg/wrapperArg/confArg are the paths handed to the
	// command, which must be container paths for Linux builds.
	lpiHost := filepath.Join(repo, project)
	wrapperArg := resolved.Build.LazbuildWrapper
	confArg := resolved.Build.LazbuildConf
	lpiArg := lpiHost
	if wrapperArg == "" || confArg == "" {
		return nil, fmt.Errorf("build.lazbuildWrapper / build.lazbuildConf are required for combination builds")
	}

	ct := resolved.Build.Container
	inContainer := ct != nil && ct.Engine != ""
	lazbuildArg := o.Lazbuild
	if inContainer {
		// Do not rely on ContainerCommand's host->guest string replacement:
		// Windows host paths contain backslashes that would be escaped by %q.
		// Emit guest paths directly. The checkout is mounted at ct.GuestPath.
		wrapperArg = guestPathOf(repo, wrapperArg, ct.GuestPath)
		confArg = guestPathOf(repo, confArg, ct.GuestPath)
		lpiArg = guestPathOf(repo, lpiHost, ct.GuestPath)
		lazbuildArg = path.Join(resolved.Vars["cprefix"], "lazbuild"+resolved.Vars["exe"])
	} else {
		lazbuildArg = firstNonEmpty(lazbuildArg, os.Getenv("LAZBUILD"), "lazbuild"+resolved.Vars["exe"])
	}
	// lazbuild needs an explicit --lazarusdir for source-built toolchains.
	// Inside a container that is the toolchain volume's guest path; on the
	// host, setup exported LAZARUSDIR through GITHUB_ENV.
	lazarusDir := ""
	if inContainer {
		lazarusDir = resolved.Vars["cprefix"]
	} else {
		lazarusDir = firstNonEmpty(os.Getenv("LAZARUSDIR"), resolved.Build.LazarusDir)
	}

	var backup []byte
	if !r.DryRun {
		backup, err = os.ReadFile(lpiHost)
		if err != nil {
			return nil, fmt.Errorf("backup %s: %w", lpiHost, err)
		}
		defer func() {
			if werr := os.WriteFile(lpiHost, backup, 0o644); werr != nil {
				r.Logf("  ERROR restoring %s: %v", lpiHost, werr)
			} else {
				r.Logf("  restored %s", lpiHost)
			}
		}()
		r.Logf("  backed up %s (%d bytes)", lpiHost, len(backup))
	}

	outDir := firstNonEmpty(o.OutDir, resolved.Build.OutDir, "bins")
	if !r.DryRun {
		if err := os.MkdirAll(outDir, 0o755); err != nil {
			return nil, err
		}
	}

	res := &Result{}
	for _, j := range jobs {
		r.Logf("[combo %s] bm=%s ws=%s defines=%v -> %s", j.Combo, j.BM, j.WS, j.Defines, j.ZipName)
		command := comboCommand(j, lpiArg, wrapperArg, confArg, lazbuildArg, lazarusDir)
		if err := runComboCommand(resolved, r, command); err != nil {
			return nil, fmt.Errorf("combination %q (%s): %w", j.Combo, j.ZipName, err)
		}
		res.Modes = append(res.Modes, j.Combo)
		if r.DryRun {
			continue
		}
		src := filepath.Join(repo, j.Artifact)
		if _, err := os.Stat(src); err != nil {
			return nil, fmt.Errorf("combination %q produced no %s: %w", j.Combo, src, err)
		}
		dst := filepath.Join(outDir, j.ZipName)
		if err := archive.Zip(dst, map[string]string{filepath.Base(src): src}); err != nil {
			return nil, fmt.Errorf("zip %s: %w", j.ZipName, err)
		}
		r.Logf("  artifact: %s", dst)
		// Remove the raw library so the next combination cannot be mistaken
		// for a successful rebuild of this one.
		if err := os.Remove(src); err != nil {
			r.Logf("  warning: could not remove %s: %v", src, err)
		}
		res.Artifacts = append(res.Artifacts, dst)
	}
	return res, nil
}

// comboCommand builds the tools/lazbuild invocation. Guest paths are already
// resolved for container builds; non-container builds use host paths.
func comboCommand(j ComboJob, lpi, wrapper, conf, lazbuild, lazarusDir string) string {
	parts := []string{
		shellDoubleQuote(wrapper),
		"-bm", shellDoubleQuote(j.BM),
		"-ws", shellDoubleQuote(j.WS),
	}
	if len(j.Defines) > 0 {
		parts = append(parts, "-d", shellDoubleQuote(strings.Join(j.Defines, ",")))
	}
	if lazarusDir != "" {
		parts = append(parts, "-lazarusdir", shellDoubleQuote(lazarusDir))
	}
	if j.Extra != "" {
		parts = append(parts, "-extra", shellDoubleQuote(j.Extra))
	}
	parts = append(parts,
		"-lazbuild", shellDoubleQuote(lazbuild),
		"-lpi", shellDoubleQuote(lpi),
		"-conf", shellDoubleQuote(conf),
	)
	return strings.Join(parts, " ")
}

// shellDoubleQuote quotes for sh / cmd.exe without escaping backslashes.
// fmt.Sprintf("%q") would turn C:\dir into C:\\dir, which breaks the
// host->guest path mapping in ContainerCommand and looks wrong in CI logs.
func shellDoubleQuote(s string) string {
	return `"` + strings.ReplaceAll(s, `"`, `\"`) + `"`
}

// guestPathOf maps a host path under repo into the container mount.
func guestPathOf(repo, hostPath, guestRoot string) string {
	s := filepath.ToSlash(hostPath)
	r := filepath.ToSlash(repo)
	if strings.HasPrefix(s, r) {
		rel := strings.TrimPrefix(strings.TrimPrefix(s, r), "/")
		return path.Join(guestRoot, rel)
	}
	return s
}

func runComboCommand(r *config.Resolved, rn *runner.Runner, command string) error {
	ct := r.Build.Container
	if ct == nil || ct.Engine == "" {
		return rn.Run(command, runner.WithDir(r.Vars["repo"]))
	}
	var mounts []runner.Mount
	for _, m := range ct.Mounts {
		mounts = append(mounts, runner.Mount{Host: m.Host, Guest: m.Guest})
	}
	// install=nil: setup already installed the GTK deps into the named
	// container session. Re-running apt here would waste minutes per combo.
	wrapped := runner.ContainerCommand(ct.Engine, ct.Image, ct.Platform,
		ct.HostPath, ct.GuestPath, ct.Workdir, ct.Shell, ct.Name, nil,
		[]string{command}, ct.SecurityOpt, mounts...)
	return rn.Run(wrapped)
}

func boolSet(values []string) map[string]bool {
	out := map[string]bool{}
	for _, v := range values {
		if v = strings.TrimSpace(v); v != "" {
			out[v] = true
		}
	}
	return out
}
