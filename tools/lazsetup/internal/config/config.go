// Package config loads the JSON toolchain/build configuration and resolves it
// into a concrete plan for one (OS, arch, version) combination.
package config

import (
	"encoding/json"
	"fmt"
	"os"
	"path"
	"path/filepath"
	"regexp"
	"sort"
	"strings"
	"time"

	"github.com/energye/lib/tools/lazsetup/internal/platform"
)

// Config is the merged representation of one or more JSON config files.
type Config struct {
	Schema   int                 `json:"schema"`
	Vars     map[string]string   `json:"vars"`
	Defaults Defaults            `json:"defaults"`
	Releases map[string]Release  `json:"releases"`
	Profiles map[string]Profile  `json:"profiles"`
	Targets  map[string]TargetDef `json:"targets"`
	Build    BuildConfig         `json:"build"`

	sourceDir string
}

type Defaults struct {
	Lazarus string `json:"lazarus"`
	Prefix  string `json:"prefix"`
	Cache   string `json:"cache"`
	Work    string `json:"work"`
	Retries int    `json:"retries"`
	Timeout string `json:"timeout"`
}

type Release struct {
	FPC     string            `json:"fpc"`
	Aliases map[string]string `json:"aliases"`
}

type Profile struct {
	OS         []string          `json:"os"`
	Arch       []string          `json:"arch"`
	Extends    string            `json:"extends"`
	Components []Component       `json:"components"`
	Env        map[string]string `json:"env"`
}

// Component is either a downloadable artifact (URL set) or a pure command
// step (Kind "commands" with no URL).
type Component struct {
	ID       string   `json:"id"`
	URL      string   `json:"url"`
	URLs     []string `json:"urls"`
	SHA256   string   `json:"sha256"`
	Size     int64    `json:"size"`
	Kind     string   `json:"kind"`
	Dest     string   `json:"dest"`
	Strip    int      `json:"strip"`
	Sudo     bool     `json:"sudo"`
	Commands []string `json:"commands"`
	Provides []string `json:"provides"`
	Optional bool     `json:"optional"`
}

type TargetDef struct {
	Profile   string            `json:"profile"`
	ByRelease map[string]string `json:"byRelease"`
	Overrides []Component       `json:"overrides"`
	Container *Container        `json:"container"`
	Note      string            `json:"note"`
}

type Container struct {
	Engine      string         `json:"engine"`
	Image       string         `json:"image"`
	Name        string         `json:"name"`
	Platform    string         `json:"platform"`
	HostPath    string         `json:"hostPath"`
	GuestPath   string         `json:"guestPath"`
	PrefixGuest string         `json:"prefixGuest"`
	Workdir     string         `json:"workdir"`
	Shell       string         `json:"shell"`
	Install     []string       `json:"install"`
	Mounts      []VolumeMount  `json:"mounts"`
	// SecurityOpt is passed to `docker run` as --security-opt flags. A 32-bit
	// i386 container needs seccomp=unconfined: Docker's default seccomp
	// profile blocks the i386 socket syscalls glibc uses for DNS, so apt
	// fails with "Temporary failure resolving ..." even with public DNS.
	SecurityOpt []string `json:"securityOpt"`
}

// VolumeMount binds an extra host directory into the container. Host is a
// template (usually ${prefix} or ${repo}); Guest is a container path.
type VolumeMount struct {
	Host  string `json:"host"`
	Guest string `json:"guest"`
}

type BuildConfig struct {
	Project      string            `json:"project"`
	WorkDir      string            `json:"workDir"`
	ContainerDir string            `json:"containerDir"`
	LazarusDir   string            `json:"lazarusDir"`
	Packages   []BuildPkg        `json:"packages"`
	Modes     []BuildMode       `json:"modes"`
	Output    string            `json:"output"`
	OutDir    string            `json:"outDir"`
	Container *Container        `json:"container"`
	Env       map[string]string `json:"env"`

	// Combination builder. A "combination" is one UI module set (lcl,
	// webview, cef, cef-webview); each is compiled for every matching
	// platform mode and zipped immediately under its own name.
	LazbuildWrapper string         `json:"lazbuildWrapper"`
	LazbuildConf    string         `json:"lazbuildConf"`
	PatchDir        string         `json:"patchDir"`
	CEFVersions     []CEFVersion   `json:"cefVersions"`
	Combinations    []Combination  `json:"combinations"`
	PlatformModes   []PlatformMode `json:"platformModes"`
	ReservedArches  []string       `json:"reservedArches"`
}

// CEFVersion is one selectable CEF branch. Name is the -d define (CEF109),
// Num is the short form used in artifact names (109).
type CEFVersion struct {
	Name string `json:"name"`
	Num  string `json:"num"`
}

// Combination declares the macros injected into liblcl.lpi and the module
// segment of the zip name. WidgetSets limits which LCL widgetsets can build
// it (gtk2 has no webkit2gtk, so Webview combinations exclude it).
// ${cef} / ${cefNum} are substituted for each CEFVersion when CEF is true.
type Combination struct {
	Name       string   `json:"name"`
	Module     string   `json:"module"`
	Defines    []string `json:"defines"`
	WidgetSets []string `json:"widgetsets"`
	CEF        bool     `json:"cef"`
	Disabled   bool     `json:"disabled"`
}

// PlatformMode maps one (os, arch, widgetset) to a real liblcl.lpi BuildMode
// name, the --ws value and the library file that lazbuild will produce.
// WSTag is the widgetset segment of the zip name; it stays empty on Windows
// and macOS, where only Linux carries gtk2/gtk3 in artifact names.
type PlatformMode struct {
	OS       string `json:"os"`
	Arch     string `json:"arch"`
	WS       string `json:"ws"`
	WSTag    string `json:"wsTag"`
	BM       string `json:"bm"`
	Artifact string `json:"artifact"`
	Extra    string `json:"extra"`
	Disabled bool   `json:"disabled"`
}

type BuildPkg struct {
	Path      string `json:"path"`
	Link      bool   `json:"link"`
	Add       bool   `json:"add"`
	SkipBuild bool   `json:"skipBuild"`
}

type BuildMode struct {
	Name     string   `json:"name"`
	BM       string   `json:"bm"`
	WS       string   `json:"ws"`
	Extra    string   `json:"extra"`
	Output   string   `json:"output"`
	Artifact string   `json:"artifact"`
	OS       []string `json:"os"`
	Arch     []string `json:"arch"`
	Disabled bool     `json:"disabled"`
}

// Load reads config files in order; later files override earlier ones.
func Load(paths ...string) (*Config, error) {
	merged := &Config{
		Vars: map[string]string{}, Releases: map[string]Release{},
		Profiles: map[string]Profile{}, Targets: map[string]TargetDef{},
	}
	for _, p := range paths {
		b, err := os.ReadFile(p)
		if err != nil {
			return nil, fmt.Errorf("read config %s: %w", p, err)
		}
		var c Config
		if err := json.Unmarshal(b, &c); err != nil {
			return nil, fmt.Errorf("parse config %s: %w", p, err)
		}
		merge(merged, &c)
		merged.sourceDir = filepath.Dir(p)
	}
	return merged, nil
}

func (c *Config) SourceDir() string { return c.sourceDir }

func (c *Config) TargetKeys() []string {
	keys := make([]string, 0, len(c.Targets))
	for k := range c.Targets {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	return keys
}

func (c *Config) ReleaseKeys() []string {
	keys := make([]string, 0, len(c.Releases))
	for k := range c.Releases {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	return keys
}

func merge(dst, src *Config) {
	if src.Schema != 0 {
		dst.Schema = src.Schema
	}
	for k, v := range src.Vars {
		dst.Vars[k] = v
	}
	if src.Defaults.Lazarus != "" {
		dst.Defaults.Lazarus = src.Defaults.Lazarus
	}
	if src.Defaults.Prefix != "" {
		dst.Defaults.Prefix = src.Defaults.Prefix
	}
	if src.Defaults.Cache != "" {
		dst.Defaults.Cache = src.Defaults.Cache
	}
	if src.Defaults.Work != "" {
		dst.Defaults.Work = src.Defaults.Work
	}
	if src.Defaults.Retries != 0 {
		dst.Defaults.Retries = src.Defaults.Retries
	}
	if src.Defaults.Timeout != "" {
		dst.Defaults.Timeout = src.Defaults.Timeout
	}
	for k, v := range src.Releases {
		dst.Releases[k] = v
	}
	for k, v := range src.Profiles {
		dst.Profiles[k] = v
	}
	for k, v := range src.Targets {
		dst.Targets[k] = v
	}
	if src.Build.Project != "" {
		dst.Build.Project = src.Build.Project
	}
	if src.Build.WorkDir != "" {
		dst.Build.WorkDir = src.Build.WorkDir
	}
	if src.Build.ContainerDir != "" {
		dst.Build.ContainerDir = src.Build.ContainerDir
	}
	if src.Build.LazarusDir != "" {
		dst.Build.LazarusDir = src.Build.LazarusDir
	}
	if src.Build.Output != "" {
		dst.Build.Output = src.Build.Output
	}
	if src.Build.OutDir != "" {
		dst.Build.OutDir = src.Build.OutDir
	}
	if len(src.Build.Packages) > 0 {
		dst.Build.Packages = src.Build.Packages
	}
	if len(src.Build.Modes) > 0 {
		dst.Build.Modes = src.Build.Modes
	}
	if src.Build.LazbuildWrapper != "" {
		dst.Build.LazbuildWrapper = src.Build.LazbuildWrapper
	}
	if src.Build.LazbuildConf != "" {
		dst.Build.LazbuildConf = src.Build.LazbuildConf
	}
	if src.Build.PatchDir != "" {
		dst.Build.PatchDir = src.Build.PatchDir
	}
	if len(src.Build.CEFVersions) > 0 {
		dst.Build.CEFVersions = src.Build.CEFVersions
	}
	if len(src.Build.Combinations) > 0 {
		dst.Build.Combinations = src.Build.Combinations
	}
	if len(src.Build.PlatformModes) > 0 {
		dst.Build.PlatformModes = src.Build.PlatformModes
	}
	if len(src.Build.ReservedArches) > 0 {
		dst.Build.ReservedArches = src.Build.ReservedArches
	}
	if src.Build.Container != nil {
		dst.Build.Container = src.Build.Container
	}
	if len(src.Build.Env) > 0 {
		if dst.Build.Env == nil {
			dst.Build.Env = map[string]string{}
		}
		for k, v := range src.Build.Env {
			dst.Build.Env[k] = v
		}
	}
}

var varPattern = regexp.MustCompile(`\$\{([A-Za-z0-9_.]+)\}`)

// Expand replaces ${name} placeholders. ${env.X} reads the process
// environment. Unknown names are left untouched so shell variables survive.
func Expand(s string, vars map[string]string) string {
	for i := 0; i < 8; i++ {
		next := varPattern.ReplaceAllStringFunc(s, func(match string) string {
			key := match[2 : len(match)-1]
			if strings.HasPrefix(key, "env.") {
				return os.Getenv(key[4:])
			}
			if v, ok := vars[key]; ok {
				return v
			}
			return match
		})
		if next == s {
			break
		}
		s = next
	}
	return s
}

// Options are the CLI overrides applied on top of the config defaults.
type Options struct {
	Lazarus     string
	FPC         string
	OS          string
	Arch        string
	Prefix      string
	Cache       string
	Work        string
	Repo        string
	NoContainer bool
}

// Resolved is a fully expanded, executable plan.
type Resolved struct {
	Target     platform.Target
	Lazarus    string
	FPC        string
	Vars       map[string]string
	Prefix     string
	Cache      string
	Work       string
	Components []Component
	Env        map[string]string
	Container  *Container
	Build      BuildConfig
	Retries    int
	Timeout    time.Duration
	Note       string
}

// Resolve selects a target profile and expands every template in it.
func (c *Config) Resolve(o Options) (*Resolved, error) {
	t, err := platform.Normalize(o.OS, o.Arch)
	if err != nil {
		return nil, err
	}
	laz := firstNonEmpty(o.Lazarus, c.Defaults.Lazarus, "4.8")
	rel, ok := c.Releases[laz]
	if !ok {
		return nil, fmt.Errorf("lazarus version %q not in config (available: %v)", laz, c.ReleaseKeys())
	}
	fpc := firstNonEmpty(o.FPC, rel.FPC, "3.2.2")

	td, ok := c.Targets[t.String()]
	if !ok {
		return nil, fmt.Errorf("target %q not in config (available: %v)", t.String(), c.TargetKeys())
	}
	profileName := td.Profile
	if v, exists := td.ByRelease[laz]; exists {
		profileName = v
	}
	profile, err := c.resolveProfile(profileName)
	if err != nil {
		return nil, err
	}

	vars := c.buildVars(t, laz, fpc, rel.Aliases)
	home, _ := os.UserHomeDir()
	work := firstNonEmpty(o.Work, c.Defaults.Work, filepath.Join(home, ".lazsetup"))
	cache := firstNonEmpty(o.Cache, c.Defaults.Cache, filepath.Join(home, ".cache", "lazsetup"))
	prefix := firstNonEmpty(o.Prefix, c.Defaults.Prefix, filepath.Join(work, "lazarus"))
	vars["work"] = filepath.Clean(Expand(work, vars))
	vars["cache"] = filepath.Clean(Expand(cache, vars))
	vars["prefix"] = filepath.Clean(Expand(prefix, vars))
	repo := o.Repo
	if repo == "" {
		if wd, err := os.Getwd(); err == nil {
			repo = wd
		}
	}
	vars["repo"] = filepath.Clean(repo)
	// patchDir follows the Lazarus version: only apply the bundled LCL patch
	// when patch/lazarus<version>/ actually exists in the checkout.
	patchSub := filepath.ToSlash(filepath.Join("patch", "lazarus"+laz))
	vars["patch_dir"] = filepath.ToSlash(filepath.Join(vars["repo"], patchSub))

	container := expandContainer(td.Container, vars)
	if o.NoContainer {
		container = nil
	}
	guestWork, guestPrefix := vars["work"], vars["prefix"]
	if container != nil && container.GuestPath != "" {
		guestWork = container.GuestPath
		guestPrefix = container.GuestPath
		// When the toolchain is bind-mounted separately, its in-container path
		// is fixed by prefixGuest; otherwise derive it from the repo/work mount.
		if container.PrefixGuest != "" {
			guestPrefix = container.PrefixGuest
		} else if rel, err := filepath.Rel(vars["work"], vars["prefix"]); err == nil &&
			rel != "." && !strings.HasPrefix(rel, "..") {
			guestPrefix = path.Join(container.GuestPath, filepath.ToSlash(rel))
		}
	}
	vars["cwork"], vars["cprefix"] = guestWork, guestPrefix
	vars["cpatch"] = vars["patch_dir"]
	if container != nil {
		// The checkout is bind-mounted at guestPath, so the patch sources are
		// visible inside the container at <guestPath>/patch/lazarus<version>.
		vars["cpatch"] = path.Join(guestWork, patchSub)
	}

	components := append([]Component(nil), profile.Components...)
	for _, ov := range td.Overrides {
		found := false
		for i := range components {
			if components[i].ID == ov.ID {
				components[i] = mergeComponent(components[i], ov)
				found = true
				break
			}
		}
		if !found {
			components = append(components, ov)
		}
	}
	for i := range components {
		components[i] = expandComponent(components[i], vars)
		if components[i].URL != "" && strings.Contains(components[i].URL, "${") {
			return nil, fmt.Errorf("component %q has unresolved variables in URL: %s", components[i].ID, components[i].URL)
		}
	}

	retries := c.Defaults.Retries
	if retries <= 0 {
		retries = 3
	}
	timeout := 30 * time.Minute
	if c.Defaults.Timeout != "" {
		if d, err := time.ParseDuration(c.Defaults.Timeout); err == nil {
			timeout = d
		} else {
			return nil, fmt.Errorf("invalid defaults.timeout %q: %w", c.Defaults.Timeout, err)
		}
	}

	r := &Resolved{
		Target: t, Lazarus: laz, FPC: fpc, Vars: vars,
		Prefix: vars["prefix"], Cache: vars["cache"], Work: vars["work"],
		Components: components, Container: container,
		Build: expandBuild(c.Build, vars), Env: map[string]string{},
		Retries: retries, Timeout: timeout, Note: td.Note,
	}
	if r.Build.Container == nil {
		r.Build.Container = container
	}
	for k, v := range profile.Env {
		r.Env[k] = Expand(v, vars)
	}
	return r, nil
}

func (c *Config) resolveProfile(name string) (Profile, error) {
	seen := map[string]bool{}
	var collect func(string) (Profile, error)
	collect = func(n string) (Profile, error) {
		if n == "" {
			return Profile{}, fmt.Errorf("empty profile name")
		}
		if seen[n] {
			return Profile{}, fmt.Errorf("cyclic profile extends: %s", n)
		}
		seen[n] = true
		p, ok := c.Profiles[n]
		if !ok {
			return Profile{}, fmt.Errorf("profile %q not in config", n)
		}
		if p.Extends == "" {
			return p, nil
		}
		base, err := collect(p.Extends)
		if err != nil {
			return Profile{}, err
		}
		components := append([]Component(nil), base.Components...)
		for _, ov := range p.Components {
			found := false
			for i := range components {
				if components[i].ID == ov.ID {
					components[i] = mergeComponent(components[i], ov)
					found = true
					break
				}
			}
			if !found {
				components = append(components, ov)
			}
		}
		base.Components = components
		if len(p.OS) > 0 {
			base.OS = p.OS
		}
		if len(p.Arch) > 0 {
			base.Arch = p.Arch
		}
		if len(p.Env) > 0 {
			if base.Env == nil {
				base.Env = map[string]string{}
			}
			for k, v := range p.Env {
				base.Env[k] = v
			}
		}
		return base, nil
	}
	return collect(name)
}

func mergeComponent(base, over Component) Component {
	if over.URL != "" {
		base.URL = over.URL
	}
	if len(over.URLs) > 0 {
		base.URLs = over.URLs
	}
	if over.SHA256 != "" {
		base.SHA256 = over.SHA256
	}
	if over.Size != 0 {
		base.Size = over.Size
	}
	if over.Kind != "" {
		base.Kind = over.Kind
	}
	if over.Dest != "" {
		base.Dest = over.Dest
	}
	if over.Strip != 0 {
		base.Strip = over.Strip
	}
	if over.Sudo {
		base.Sudo = true
	}
	if over.Optional {
		base.Optional = true
	}
	if len(over.Commands) > 0 {
		base.Commands = over.Commands
	}
	if len(over.Provides) > 0 {
		base.Provides = over.Provides
	}
	return base
}

func expandComponent(cp Component, vars map[string]string) Component {
	cp.URL = Expand(cp.URL, vars)
	cp.Dest = Expand(cp.Dest, vars)
	cp.SHA256 = Expand(cp.SHA256, vars)
	if len(cp.URLs) > 0 {
		cp.URLs = append([]string(nil), cp.URLs...)
	}
	if len(cp.Commands) > 0 {
		cp.Commands = append([]string(nil), cp.Commands...)
	}
	if len(cp.Provides) > 0 {
		cp.Provides = append([]string(nil), cp.Provides...)
	}
	for i := range cp.URLs {
		cp.URLs[i] = Expand(cp.URLs[i], vars)
	}
	for i := range cp.Commands {
		cp.Commands[i] = Expand(cp.Commands[i], vars)
	}
	for i := range cp.Provides {
		cp.Provides[i] = Expand(cp.Provides[i], vars)
	}
	return cp
}

func expandContainer(ct *Container, vars map[string]string) *Container {
	if ct == nil {
		return nil
	}
	out := *ct
	if len(out.Install) > 0 {
		out.Install = append([]string(nil), out.Install...)
	}
	if len(out.Mounts) > 0 {
		out.Mounts = append([]VolumeMount(nil), out.Mounts...)
	}
	if len(out.SecurityOpt) > 0 {
		out.SecurityOpt = append([]string(nil), out.SecurityOpt...)
	}
	out.Engine = Expand(out.Engine, vars)
	out.Image = Expand(out.Image, vars)
	out.Name = Expand(out.Name, vars)
	out.Platform = Expand(out.Platform, vars)
	out.HostPath = Expand(out.HostPath, vars)
	out.GuestPath = Expand(out.GuestPath, vars)
	out.PrefixGuest = Expand(out.PrefixGuest, vars)
	out.Workdir = Expand(out.Workdir, vars)
	for i := range out.Install {
		out.Install[i] = Expand(out.Install[i], vars)
	}
	for i := range out.Mounts {
		out.Mounts[i].Host = Expand(out.Mounts[i].Host, vars)
		out.Mounts[i].Guest = Expand(out.Mounts[i].Guest, vars)
	}
	for i := range out.SecurityOpt {
		out.SecurityOpt[i] = Expand(out.SecurityOpt[i], vars)
	}
	if out.Engine == "" {
		out.Engine = "docker"
	}
	if out.GuestPath == "" {
		out.GuestPath = "/app"
	}
	if out.HostPath == "" {
		out.HostPath = vars["work"]
	}
	if out.Workdir == "" {
		out.Workdir = out.GuestPath
	}
	if out.Shell == "" {
		out.Shell = "/bin/sh"
	}
	if out.Name == "" {
		// A stable name keeps the toolchain (FPC installed in /usr/local)
		// alive across setup commands and the separate build step.
		out.Name = "lazsetup-" + vars["os"] + "-" + vars["arch"]
	}
	return &out
}

func expandBuild(b BuildConfig, vars map[string]string) BuildConfig {
	b.Project = Expand(b.Project, vars)
	b.WorkDir = Expand(b.WorkDir, vars)
	b.ContainerDir = Expand(b.ContainerDir, vars)
	b.LazarusDir = Expand(b.LazarusDir, vars)
	b.Output = Expand(b.Output, vars)
	b.OutDir = Expand(b.OutDir, vars)
	b.LazbuildWrapper = Expand(b.LazbuildWrapper, vars)
	b.LazbuildConf = Expand(b.LazbuildConf, vars)
	b.PatchDir = Expand(b.PatchDir, vars)
	if len(b.Packages) > 0 {
		b.Packages = append([]BuildPkg(nil), b.Packages...)
	}
	if len(b.CEFVersions) > 0 {
		b.CEFVersions = append([]CEFVersion(nil), b.CEFVersions...)
	}
	if len(b.Combinations) > 0 {
		cs := append([]Combination(nil), b.Combinations...)
		for i := range cs {
			cs[i].Defines = append([]string(nil), cs[i].Defines...)
			cs[i].WidgetSets = append([]string(nil), cs[i].WidgetSets...)
		}
		b.Combinations = cs
	}
	if len(b.PlatformModes) > 0 {
		b.PlatformModes = append([]PlatformMode(nil), b.PlatformModes...)
	}
	if len(b.ReservedArches) > 0 {
		b.ReservedArches = append([]string(nil), b.ReservedArches...)
	}
	if len(b.Modes) > 0 {
		modes := make([]BuildMode, len(b.Modes))
		copy(modes, b.Modes)
		for i := range modes {
			if len(modes[i].OS) > 0 {
				modes[i].OS = append([]string(nil), modes[i].OS...)
			}
			if len(modes[i].Arch) > 0 {
				modes[i].Arch = append([]string(nil), modes[i].Arch...)
			}
		}
		b.Modes = modes
	}
	if len(b.Env) > 0 {
		env := make(map[string]string, len(b.Env))
		for k, v := range b.Env {
			env[k] = Expand(v, vars)
		}
		b.Env = env
	}
	return expandBuildTail(b, vars)
}

func expandBuildTail(b BuildConfig, vars map[string]string) BuildConfig {
	for i := range b.Packages {
		b.Packages[i].Path = Expand(b.Packages[i].Path, vars)
	}
	for i := range b.Modes {
		b.Modes[i].Name = Expand(b.Modes[i].Name, vars)
		b.Modes[i].BM = Expand(b.Modes[i].BM, vars)
		b.Modes[i].WS = Expand(b.Modes[i].WS, vars)
		b.Modes[i].Extra = Expand(b.Modes[i].Extra, vars)
		b.Modes[i].Output = Expand(b.Modes[i].Output, vars)
		b.Modes[i].Artifact = Expand(b.Modes[i].Artifact, vars)
		for j := range b.Modes[i].OS {
			b.Modes[i].OS[j] = Expand(b.Modes[i].OS[j], vars)
		}
		for j := range b.Modes[i].Arch {
			b.Modes[i].Arch[j] = Expand(b.Modes[i].Arch[j], vars)
		}
	}
	for i := range b.CEFVersions {
		b.CEFVersions[i].Name = Expand(b.CEFVersions[i].Name, vars)
		b.CEFVersions[i].Num = Expand(b.CEFVersions[i].Num, vars)
	}
	// Combination.Module / Combination.Defines intentionally keep ${cef} and
	// ${cefNum}; they are substituted per CEF version by the build expander.
	for i := range b.PlatformModes {
		pm := &b.PlatformModes[i]
		pm.OS = Expand(pm.OS, vars)
		pm.Arch = Expand(pm.Arch, vars)
		pm.WS = Expand(pm.WS, vars)
		pm.WSTag = Expand(pm.WSTag, vars)
		pm.BM = Expand(pm.BM, vars)
		pm.Artifact = Expand(pm.Artifact, vars)
		pm.Extra = Expand(pm.Extra, vars)
	}
	b.Container = expandContainer(b.Container, vars)
	return b
}

func (c *Config) buildVars(t platform.Target, laz, fpc string, aliases map[string]string) map[string]string {
	n := t.Names()
	home, _ := os.UserHomeDir()
	vars := map[string]string{
		"os": t.OS, "arch": t.Arch,
		"laz": laz, "fpc": fpc,
		"win_bits": n.WinBits, "win_tag": n.WinTag,
		"fpc_arch": n.FPCArch, "fpc_suffix": n.FPCSuffix,
		"mac_arch": n.MacArch, "mac_dir": n.MacDir,
		"deb_arch": n.DebArch, "lib_ext": n.LibExt,
		"laz_target": n.LazTarget,
		"exe": n.ExeSuffix, "path_sep": n.PathSep,
		"docker_platform": n.DockerPlatform, "container_prefix": n.ContainerPrefix,
		"home": home,
	}
	for k, v := range c.Vars {
		vars[k] = Expand(v, vars)
	}
	for k, v := range aliases {
		vars[k] = Expand(v, vars)
	}
	return vars
}

func firstNonEmpty(values ...string) string {
	for _, v := range values {
		if v != "" {
			return v
		}
	}
	return ""
}
