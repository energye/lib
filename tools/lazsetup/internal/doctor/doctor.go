// Package doctor performs offline consistency checks between the lazsetup
// configuration and the actual energy/lib checkout. It exists so a CI run can
// fail fast (before downloading hundreds of MB) when the .lpi or the source
// tree no longer matches energy-lib.json.
package doctor

import (
	"crypto/tls"
	"fmt"
	"io"
	"net/http"
	"net/url"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"time"

	"github.com/energye/lib/tools/lazsetup/internal/config"
)

type Level int

const (
	Pass Level = iota
	Warn
	Fail
)

func (l Level) String() string {
	switch l {
	case Pass:
		return "PASS"
	case Warn:
		return "WARN"
	default:
		return "FAIL"
	}
}

type Check struct {
	Level  Level
	Name   string
	Detail string
}

type Report struct {
	Checks []Check
}

func (r *Report) add(l Level, name, format string, args ...interface{}) {
	r.Checks = append(r.Checks, Check{Level: l, Name: name, Detail: fmt.Sprintf(format, args...)})
}

func (r *Report) OK() bool {
	for _, c := range r.Checks {
		if c.Level == Fail {
			return false
		}
	}
	return true
}

func (r *Report) Counts() (pass, warn, fail int) {
	for _, c := range r.Checks {
		switch c.Level {
		case Pass:
			pass++
		case Warn:
			warn++
		case Fail:
			fail++
		}
	}
	return
}

func (r *Report) Print(w io.Writer) {
	for _, c := range r.Checks {
		fmt.Fprintf(w, "[%-4s] %-34s %s\n", c.Level, c.Name, c.Detail)
	}
	p, wn, f := r.Counts()
	fmt.Fprintf(w, "\nsummary: %d passed, %d warnings, %d failures\n", p, wn, f)
}

type Options struct {
	Config   *config.Config
	Resolved *config.Resolved
	WorkDir  string
	Lazarus  string
	Network  bool
}

var (
	reBuildModes  = regexp.MustCompile(`(?s)<BuildModes[^>]*>(.*?)</BuildModes>`)
	reModeItem    = regexp.MustCompile(`<Item\s+Name="([^"]+)"`)
	reUnitFiles   = regexp.MustCompile(`<OtherUnitFiles\s+Value="([^"]*)"`)
	reUnresolved  = regexp.MustCompile(`\$\{[^}]+\}`)
	reArtifactExt = regexp.MustCompile(`\.(dll|so|dylib)$`)
)

// Run executes every check and returns a report. A non-nil error means the
// checks themselves could not be performed (e.g. config is nil).
func Run(o Options) (*Report, error) {
	if o.Config == nil || o.Resolved == nil {
		return nil, fmt.Errorf("doctor requires a loaded config and a resolved target")
	}
	rep := &Report{}
	root := o.WorkDir
	if root == "" {
		root = "."
	}

	// 1. The Lazarus project file must exist and be readable.
	project := o.Resolved.Build.Project
	if project == "" {
		project = "liblcl.lpi"
	}
	projectPath := filepath.Join(root, project)
	lpiData, err := os.ReadFile(projectPath)
	if err != nil {
		rep.add(Fail, "project file", "%s: %v", projectPath, err)
		return rep, nil
	}
	rep.add(Pass, "project file", "%s (%d bytes)", projectPath, len(lpiData))

	// 2. Build modes declared by the .lpi are the ground truth.
	modesBlock := reBuildModes.FindSubmatch(lpiData)
	if modesBlock == nil {
		rep.add(Fail, "lpi BuildModes", "no <BuildModes> section found in %s", project)
		return rep, nil
	}
	lpiModes := map[string]bool{}
	for _, m := range reModeItem.FindAllSubmatch(modesBlock[1], -1) {
		lpiModes[string(m[1])] = true
	}
	names := make([]string, 0, len(lpiModes))
	for n := range lpiModes {
		names = append(names, n)
	}
	sortStrings(names)
	rep.add(Pass, "lpi BuildModes", "%d modes: %s", len(lpiModes), strings.Join(names, ", "))

	checkedMode := map[string]bool{}
	for _, m := range o.Config.Build.Modes {
		if m.Disabled || checkedMode[m.BM] {
			continue
		}
		checkedMode[m.BM] = true
		if m.BM == "" {
			rep.add(Warn, "mode "+m.Name, "empty bm; lazbuild will use the .lpi default mode")
			continue
		}
		if !lpiModes[m.BM] {
			rep.add(Fail, "mode "+m.Name, "bm=%q does not exist in liblcl.lpi (available: %s)", m.BM, strings.Join(names, ", "))
		} else {
			rep.add(Pass, "mode "+m.Name, "bm=%q found in liblcl.lpi", m.BM)
		}
		if m.Artifact == "" {
			rep.add(Warn, "mode "+m.Name+" artifact", "not set; falling back to build.output")
		} else if reUnresolved.MatchString(m.Artifact) {
			rep.add(Fail, "mode "+m.Name+" artifact", "unresolved variable in %q", m.Artifact)
		} else if !reArtifactExt.MatchString(strings.ToLower(m.Artifact)) {
			rep.add(Warn, "mode "+m.Name+" artifact", "%q has no dll/so/dylib extension", m.Artifact)
		}
	}

	// 3. Every third-party lpk referenced by the config must exist.
	if len(o.Config.Build.Packages) == 0 {
		rep.add(Pass, "third-party lpk", "none configured (liblcl.lpi uses OtherUnitFiles source paths)")
	}
	for _, p := range o.Config.Build.Packages {
		pth := p.Path
		if !filepath.IsAbs(pth) {
			pth = filepath.Join(root, pth)
		}
		if _, err := os.Stat(pth); err != nil {
			rep.add(Fail, "package "+filepath.Base(p.Path), "%s: %v", p.Path, err)
		} else {
			rep.add(Pass, "package "+filepath.Base(p.Path), p.Path)
		}
	}

	// 4. OtherUnitFiles source directories are resolved by FPC at build time.
	dirs := map[string]bool{}
	for _, m := range reUnitFiles.FindAllSubmatch(lpiData, -1) {
		for _, d := range strings.Split(string(m[1]), ";") {
			d = strings.TrimSpace(strings.ReplaceAll(d, "\\", "/"))
			if d != "" && !strings.Contains(d, "$") {
				dirs[d] = true
			}
		}
	}
	dirNames := make([]string, 0, len(dirs))
	for d := range dirs {
		dirNames = append(dirNames, d)
	}
	sortStrings(dirNames)
	missing := 0
	for _, d := range dirNames {
		if _, err := os.Stat(filepath.Join(root, filepath.FromSlash(d))); err != nil {
			missing++
			rep.add(Fail, "unit path "+d, "directory missing")
		}
	}
	if missing == 0 {
		rep.add(Pass, "lpi OtherUnitFiles", "all %d source directories exist", len(dirNames))
	}

	// 5. Resolve every declared target and validate its download plan.
	targets := o.Config.TargetKeys()
	targetErrs := 0
	for _, key := range targets {
		parts := strings.SplitN(key, "/", 2)
		if len(parts) != 2 {
			rep.add(Fail, "target "+key, "invalid target key")
			targetErrs++
			continue
		}
		r, err := o.Config.Resolve(config.Options{
			Lazarus: o.Lazarus, OS: parts[0], Arch: parts[1],
			Prefix: o.Resolved.Prefix, Work: o.Resolved.Work, Cache: o.Resolved.Cache,
			NoContainer: true,
		})
		if err != nil {
			rep.add(Fail, "target "+key, "%v", err)
			targetErrs++
			continue
		}
		bad := 0
		for _, cp := range r.Components {
			if cp.URL == "" {
				continue
			}
			u, e := url.Parse(cp.URL)
			if e != nil || (u.Scheme != "https" && u.Scheme != "http") ||
				strings.Contains(cp.URL, " ") || reUnresolved.MatchString(cp.URL) {
				rep.add(Fail, "target "+key+" / "+cp.ID, "invalid or unresolved URL: %s", cp.URL)
				bad++
			}
			for _, alt := range cp.URLs {
				if reUnresolved.MatchString(alt) {
					rep.add(Fail, "target "+key+" / "+cp.ID, "unresolved mirror URL: %s", alt)
					bad++
				}
			}
			if cp.SHA256 == "" {
				bad += 0 // reported as a single warning below
			}
		}
		if bad > 0 {
			targetErrs++
		} else {
			downloads := 0
			for _, cp := range r.Components {
				if cp.URL != "" {
					downloads++
				}
			}
			rep.add(Pass, "target "+key, "%d components, %d downloads, profile resolved", len(r.Components), downloads)
		}
	}
	if targetErrs == 0 {
		rep.add(Pass, "target matrix", "all %d targets resolve", len(targets))
	}
	unhashed := 0
	for _, cp := range o.Resolved.Components {
		if cp.URL != "" && cp.SHA256 == "" {
			unhashed++
		}
	}
	if unhashed > 0 {
		rep.add(Warn, "checksums", "%d components of the current target have no sha256 (size-only verification)", unhashed)
	}

	// 6. Combination matrix: every platform mode must name a real .lpi build
	// mode, the lazbuild wrapper config must exist, and the versioned Lazarus
	// patch must be discoverable (a missing patch is legal - setup just skips).
	if len(o.Config.Build.Combinations) == 0 || len(o.Config.Build.PlatformModes) == 0 {
		// A minimal config may legitimately only use the original build-mode
		// path. Combination builds are opt-in, so this is not a failure.
		rep.add(Warn, "combination matrix", "no combinations/platformModes configured (legacy build-mode path only)")
	} else {
		bad := 0
		for _, pm := range o.Config.Build.PlatformModes {
			if !lpiModes[pm.BM] {
				rep.add(Fail, "combo mode "+pm.BM, "bm does not exist in liblcl.lpi")
				bad++
			}
		}
		for _, cb := range o.Config.Build.Combinations {
			if cb.Name == "" {
				rep.add(Fail, "combination", "unnamed combination")
				bad++
			}
			if strings.Contains(cb.Name, "webview") {
				for _, ws := range cb.WidgetSets {
					if strings.EqualFold(ws, "gtk2") {
						rep.add(Fail, "combination "+cb.Name, "gtk2 has no webkit2gtk")
						bad++
					}
				}
			}
		}
		if bad == 0 {
			rep.add(Pass, "combination matrix", "%d combinations, %d platform modes, %d CEF versions",
				len(o.Config.Build.Combinations), len(o.Config.Build.PlatformModes), len(o.Config.Build.CEFVersions))
		}
	}
	conf := o.Resolved.Build.LazbuildConf
	if conf == "" {
		rep.add(Warn, "lazbuild conf", "build.lazbuildConf is not configured (combination builds unavailable)")
	} else if _, err := os.Stat(conf); err != nil {
		rep.add(Fail, "lazbuild conf", "%s: %v", conf, err)
	} else {
		rep.add(Pass, "lazbuild conf", conf)
	}
	if o.Resolved.Target.OS == "linux" {
		patch := o.Resolved.Build.PatchDir
		if st, err := os.Stat(patch); err == nil && st.IsDir() {
			rep.add(Pass, "lazarus patch", "%s (applied before make clean all)", patch)
		} else {
			rep.add(Warn, "lazarus patch", "%s missing; setup will skip the patch", patch)
		}
	}

	// 7. Optional live reachability probe for the current target only.
	if o.Network {
		probeNetwork(rep, o.Resolved)
	} else {
		rep.add(Warn, "network probe", "skipped (use doctor --network to check download URLs)")
	}
	return rep, nil
}

func probeNetwork(rep *Report, r *config.Resolved) {
	client := &http.Client{
		Timeout: 20 * time.Second,
		Transport: &http.Transport{
			Proxy:           http.ProxyFromEnvironment,
			TLSClientConfig: &tls.Config{InsecureSkipVerify: false},
		},
	}
	for _, cp := range r.Components {
		if cp.URL == "" {
			continue
		}
		all := append([]string{cp.URL}, cp.URLs...)
		best := ""
		for _, raw := range all {
			req, err := http.NewRequest(http.MethodGet, raw, nil)
			if err != nil {
				continue
			}
			req.Header.Set("User-Agent", "Mozilla/5.0 (compatible; lazsetup-doctor/1.0)")
			req.Header.Set("Range", "bytes=0-255")
			resp, err := client.Do(req)
			if err != nil {
				best = fmt.Sprintf("%s -> %v", hostOf(raw), err)
				continue
			}
			buf := make([]byte, 256)
			n, _ := io.ReadFull(resp.Body, buf)
			resp.Body.Close()
			prefix := strings.ToLower(string(buf[:max(0, n)]))
			isHTML := strings.Contains(resp.Header.Get("Content-Type"), "text/html") ||
				strings.Contains(prefix, "<!doctype") || strings.Contains(prefix, "<html")
			status := fmt.Sprintf("HTTP %d, %s", resp.StatusCode, resp.Header.Get("Content-Type"))
			if resp.StatusCode >= 200 && resp.StatusCode < 400 && !isHTML {
				rep.add(Pass, "network "+cp.ID, "%s (%s)", status, hostOf(raw))
				best = ""
				break
			}
			if isHTML {
				best = fmt.Sprintf("%s returned an HTML page (%s) - likely a Cloudflare/bot challenge, not the installer", hostOf(raw), status)
			} else {
				best = fmt.Sprintf("%s returned %s", hostOf(raw), status)
			}
		}
		if best != "" {
			rep.add(Warn, "network "+cp.ID, best)
		}
	}
}

func hostOf(raw string) string {
	u, err := url.Parse(raw)
	if err != nil || u.Host == "" {
		return raw
	}
	return u.Host
}

func sortStrings(s []string) {
	for i := 1; i < len(s); i++ {
		for j := i; j > 0 && s[j] < s[j-1]; j-- {
			s[j], s[j-1] = s[j-1], s[j]
		}
	}
}
