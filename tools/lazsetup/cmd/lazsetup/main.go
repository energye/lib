// lazsetup prepares a Lazarus/FPC toolchain and builds the energy lib dynamic
// library. It is compiled on demand in CI and used identically on a local
// machine; no external GitHub Action is required.
package main

import (
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strings"

	"github.com/energye/lib/tools/lazsetup/internal/build"
	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/doctor"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
	"github.com/energye/lib/tools/lazsetup/internal/setup"
)

const version = "1.0.0"

type multiFlag []string

func (m *multiFlag) String() string { return strings.Join(*m, ",") }
func (m *multiFlag) Set(v string) error {
	for _, p := range strings.Split(v, ",") {
		if p = strings.TrimSpace(p); p != "" {
			*m = append(*m, p)
		}
	}
	return nil
}

type globalOpts struct {
	configs                multiFlag
	lazarus, fpc           string
	osName, arch           string
	prefix, cache, work    string
	repo                   string
	dryRun, github         bool
	verbose, noCache       bool
	noContainer            bool
}

type buildOpts struct {
	modes      multiFlag
	out        string
	lazbuild   string
	lazarusDir string
	noPackage  bool
}

func main() {
	if len(os.Args) < 2 {
		usage()
		os.Exit(2)
	}
	cmd := os.Args[1]
	switch cmd {
	case "version", "-v", "--version":
		fmt.Printf("lazsetup %s\n", version)
		return
	case "help", "-h", "--help":
		usage()
		return
	}

	fs := flag.NewFlagSet(cmd, flag.ExitOnError)
	g := &globalOpts{}
	b := &buildOpts{}
	addGlobalFlags(fs, g)
	var updateHashes, expand bool
	var jsonOut, network bool
	switch cmd {
	case "setup", "verify":
		fs.BoolVar(&updateHashes, "update-hashes", false, "download and print sha256/size for the config")
	case "doctor":
		fs.BoolVar(&network, "network", false, "probe download URLs over HTTP (may be blocked by Cloudflare)")
	case "build", "all":
		addBuildFlags(fs, b)
	case "list":
		fs.BoolVar(&expand, "expand", false, "show fully expanded URLs and commands for every target")
	case "env":
		fs.BoolVar(&jsonOut, "json", false, "print as KEY=VALUE lines instead of a table")
	}
	_ = fs.Parse(os.Args[2:])

	c, r, rn, err := loadAndResolve(g)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %v\n", err)
		os.Exit(1)
	}

	switch cmd {
	case "list":
		err = doList(c, g, expand)
	case "env":
		err = doEnv(r, jsonOut)
	case "doctor":
		var rep *doctor.Report
		rep, err = doctor.Run(doctor.Options{
			Config: c, Resolved: r, WorkDir: ".", Lazarus: g.lazarus, Network: network,
		})
		if err == nil {
			rep.Print(os.Stdout)
			if !rep.OK() {
				os.Exit(1)
			}
		}
	case "verify":
		_, err = setup.Setup(setup.Options{R: r, Runner: rn, NoCache: g.noCache, VerifyOnly: true, UpdateHashes: updateHashes})
	case "setup", "all":
		var res *setup.Result
		res, err = setup.Setup(setup.Options{
			R: r, Runner: rn, NoCache: g.noCache, GitHub: g.github,
			UpdateHashes: updateHashes,
		})
		if err == nil && cmd == "all" {
			_, err = doBuild(r, rn, b, res.Lazbuild)
		}
	case "build":
		_, err = doBuild(r, rn, b, "")
	default:
		usage()
		os.Exit(2)
	}
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %v\n", err)
		os.Exit(1)
	}
}

func addGlobalFlags(fs *flag.FlagSet, g *globalOpts) {
	fs.Var(&g.configs, "config", "JSON config path (repeatable or comma separated)")
	fs.StringVar(&g.lazarus, "lazarus", "", "Lazarus version (default from config)")
	fs.StringVar(&g.fpc, "fpc", "", "FPC version (default from release)")
	fs.StringVar(&g.osName, "os", "", "target OS: windows | linux | darwin")
	fs.StringVar(&g.arch, "arch", "", "target arch: 386 | amd64 | arm | arm64")
	fs.StringVar(&g.prefix, "prefix", "", "toolchain install directory")
	fs.StringVar(&g.cache, "cache", "", "download cache directory")
	fs.StringVar(&g.work, "work", "", "working directory")
	fs.StringVar(&g.repo, "repo", "", "repository root (default: current directory); used as container mount root")
	fs.BoolVar(&g.dryRun, "dry-run", false, "print actions without downloading or executing")
	fs.BoolVar(&g.github, "github", false, "write GITHUB_PATH / GITHUB_ENV (CI only)")
	fs.BoolVar(&g.verbose, "verbose", false, "verbose logging")
	fs.BoolVar(&g.noCache, "no-cache", false, "ignore the local download cache")
	fs.BoolVar(&g.noContainer, "no-container", false, "compile on this host instead of inside docker")
}

func addBuildFlags(fs *flag.FlagSet, b *buildOpts) {
	fs.Var(&b.modes, "mode", "build mode name (repeatable); default: all enabled modes")
	fs.StringVar(&b.out, "out", "", "output directory for artifacts")
	fs.StringVar(&b.lazbuild, "lazbuild", "", "path to lazbuild (default: $LAZBUILD or PATH)")
	fs.StringVar(&b.lazarusDir, "lazarus-dir", "", "pass --lazarusdir to lazbuild (source installs)")
	fs.BoolVar(&b.noPackage, "no-package", false, "skip third-party package registration")
}

func loadAndResolve(g *globalOpts) (*config.Config, *config.Resolved, *runner.Runner, error) {
	paths := []string(g.configs)
	if len(paths) == 0 {
		paths = defaultConfigs()
	}
	c, err := config.Load(paths...)
	if err != nil {
		return nil, nil, nil, err
	}
	r, err := c.Resolve(config.Options{
		Lazarus: g.lazarus, FPC: g.fpc, OS: g.osName, Arch: g.arch,
		Prefix: g.prefix, Cache: g.cache, Work: g.work, Repo: g.repo, NoContainer: g.noContainer,
	})
	if err != nil {
		return nil, nil, nil, err
	}
	rn := runner.New(os.Stdout)
	rn.DryRun = g.dryRun
	rn.Verbose = g.verbose
	return c, r, rn, nil
}

func defaultConfigs() []string {
	pairs := [][]string{
		{"tools/lazsetup/configs/toolchain.json", "tools/lazsetup/configs/energy-lib.json"},
		{"configs/toolchain.json", "configs/energy-lib.json"},
	}
	for _, pair := range pairs {
		if fileExists(pair[0]) {
			return pair
		}
	}
	if exe, err := os.Executable(); err == nil {
		dir := filepath.Join(filepath.Dir(exe), "configs")
		if p := filepath.Join(dir, "toolchain.json"); fileExists(p) {
			return []string{p, filepath.Join(dir, "energy-lib.json")}
		}
	}
	return pairs[0]
}

func fileExists(p string) bool {
	fi, err := os.Stat(p)
	return err == nil && !fi.IsDir()
}

func doBuild(r *config.Resolved, rn *runner.Runner, b *buildOpts, lazbuild string) (*build.Result, error) {
	if lazbuild != "" && b.lazbuild == "" {
		b.lazbuild = lazbuild
	}
	if b.lazarusDir != "" {
		r.Build.LazarusDir = b.lazarusDir
	}
	return build.Build(build.Options{
		R: r, Runner: rn, Lazbuild: b.lazbuild,
		Modes: []string(b.modes), OutDir: b.out, NoPackage: b.noPackage,
	})
}

func doList(c *config.Config, g *globalOpts, expand bool) error {
	fmt.Printf("lazsetup %s\n", version)
	fmt.Printf("config dir : %s\n", c.SourceDir())
	fmt.Printf("releases   : %s\n", strings.Join(c.ReleaseKeys(), ", "))
	fmt.Printf("targets    : %s\n", strings.Join(c.TargetKeys(), ", "))
	names := make([]string, 0, len(c.Build.Modes))
	for _, m := range c.Build.Modes {
		if !m.Disabled {
			names = append(names, m.Name)
		}
	}
	fmt.Printf("modes      : %s\n", strings.Join(names, ", "))
	if !expand {
		return nil
	}
	for _, key := range c.TargetKeys() {
		parts := strings.SplitN(key, "/", 2)
		if len(parts) != 2 {
			continue
		}
		r, err := c.Resolve(config.Options{Lazarus: g.lazarus, OS: parts[0], Arch: parts[1]})
		if err != nil {
			fmt.Printf("\n[%s] ERROR: %v\n", key, err)
			continue
		}
		fmt.Printf("\n[%s] laz=%s fpc=%s prefix=%s%s\n", key, r.Lazarus, r.FPC, r.Prefix, noteOf(r))
		for _, cp := range r.Components {
			if cp.URL != "" {
				fmt.Printf("  %-18s kind=%-9s %s\n", cp.ID, cp.Kind, cp.URL)
			} else {
				fmt.Printf("  %-18s kind=%-9s (commands)\n", cp.ID, cp.Kind)
			}
			if cp.Dest != "" {
				fmt.Printf("  %-18s dest=%s strip=%d\n", "", cp.Dest, cp.Strip)
			}
			for _, command := range cp.Commands {
				fmt.Printf("      $ %s\n", command)
			}
		}
		if r.Container != nil {
			fmt.Printf("  container: %s %s (%s)\n", r.Container.Engine, r.Container.Image, r.Container.Platform)
		}
	}
	return nil
}

func noteOf(r *config.Resolved) string {
	if r.Note != "" {
		return "  note=" + r.Note
	}
	return ""
}

func doEnv(r *config.Resolved, jsonOut bool) error {
	keys := make([]string, 0, len(r.Vars))
	for k := range r.Vars {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	fmt.Printf("target  : %s\n", r.Target.String())
	fmt.Printf("lazarus : %s\nfpc     : %s\n", r.Lazarus, r.FPC)
	fmt.Printf("prefix  : %s\nwork    : %s\ncache   : %s\n", r.Prefix, r.Work, r.Cache)
	fmt.Println("variables:")
	for _, k := range keys {
		if jsonOut {
			fmt.Printf("%s=%s\n", strings.ToUpper(k), r.Vars[k])
		} else {
			fmt.Printf("  %-18s = %s\n", k, r.Vars[k])
		}
	}
	return nil
}

func usage() {
	fmt.Fprintf(os.Stderr, `lazsetup %s - configure-driven Lazarus/FPC toolchain and energy lib builder

Usage:
  lazsetup <command> [flags]

Commands:
  setup     download, verify, install and (if configured) compile the toolchain
  build     register packages and build liblcl dynamic library per build mode
  all       setup followed by build
  list      show releases, targets and build modes (--expand shows resolved URLs)
  verify    download and checksum only, no install
  doctor    offline consistency check: config vs liblcl.lpi, packages, URLs
  env       show resolved variables for --os/--arch
  version   print version

Common flags:
  --config PATH      JSON config (repeatable; later files override earlier)
  --lazarus VER      Lazarus version, e.g. 4.8
  --fpc VER          FPC version override
  --os / --arch      target platform (default: host)
  --prefix/--work/--cache/--repo DIR
  --dry-run          print what would happen, no network, no commands
  --github           write GITHUB_PATH / GITHUB_ENV (CI only)
  --no-cache         force re-download
  --no-container     compile on the host instead of docker
  --update-hashes    verify: print sha256/size for the config
  --network          doctor: probe download URLs over HTTP
  --verbose

Build flags:
  --mode NAME        build mode (repeatable)
  --out DIR          artifact directory
  --lazbuild PATH    explicit lazbuild path
  --lazarus-dir PATH override --lazarusdir passed to lazbuild
  --no-package       skip third-party lpk registration

Examples:
  lazsetup list --expand
  lazsetup setup --lazarus 4.8 --arch amd64 --dry-run
  lazsetup setup --lazarus 4.8 --arch amd64 --github
  lazsetup build --mode Win64 --mode Win64_CEF --out ../bins
`, version)
}
