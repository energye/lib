package config

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
)

// TestShippedConfigResolves guards the two JSON files that ship with the
// repository. CI compiles the Go code locally and then acts on these configs,
// so a typo here must be caught at compile/test time, not after a 500 MB
// download on a runner.
func TestShippedConfigResolves(t *testing.T) {
	root := filepath.Join("..", "..", "configs")
	toolchain := filepath.Join(root, "toolchain.json")
	libCfg := filepath.Join(root, "energy-lib.json")
	for _, p := range []string{toolchain, libCfg} {
		if _, err := os.Stat(p); err != nil {
			t.Fatalf("missing shipped config %s: %v", p, err)
		}
	}
	c, err := Load(toolchain, libCfg)
	if err != nil {
		t.Fatalf("load shipped configs: %v", err)
	}
	if len(c.Targets) != 8 {
		t.Errorf("expected 8 platform targets, got %d", len(c.Targets))
	}
	// linux_GTK3 is intentionally staged out; TestLinuxCurrentlyBuildsGTK2Only
	// checks that it stays configured but disabled.
	wantModes := map[string]bool{
		"win_amd64": false, "win_386": false,
		"linux_GTK2": false,
		"darwin_amd64": false, "darwin_arm64": false,
	}
	for _, m := range c.Build.Modes {
		if _, ok := wantModes[m.Name]; ok && !m.Disabled {
			wantModes[m.Name] = true
			if m.Artifact == "" {
				t.Errorf("mode %s has no artifact", m.Name)
			}
		}
	}
	for name, found := range wantModes {
		if !found {
			t.Errorf("required enabled build mode %q missing", name)
		}
	}
	for _, key := range c.TargetKeys() {
		parts := strings.SplitN(key, "/", 2)
		if len(parts) != 2 {
			t.Errorf("bad target key %q", key)
			continue
		}
		r, err := c.Resolve(Options{Lazarus: c.Defaults.Lazarus, OS: parts[0], Arch: parts[1]})
		if err != nil {
			t.Errorf("resolve %s: %v", key, err)
			continue
		}
		if strings.Contains(r.Prefix, "${") || strings.Contains(r.Prefix, "..") {
			t.Errorf("target %s has unresolved prefix %q", key, r.Prefix)
		}
		downloads := 0
		for _, cp := range r.Components {
			if cp.URL == "" {
				continue
			}
			downloads++
			if strings.Contains(cp.URL, "${") || !strings.HasPrefix(cp.URL, "https://") {
				t.Errorf("target %s component %s has bad URL %q", key, cp.ID, cp.URL)
			}
			if len(cp.URLs) == 0 {
				t.Errorf("target %s component %s has no mirror URL", key, cp.ID)
			}
		}
		if downloads == 0 {
			t.Errorf("target %s has no download components", key)
		}
		if r.Container != nil && r.Container.HostPath == "" {
			t.Errorf("target %s container has empty hostPath", key)
		}
	}
}

// TestDarwinArm64UsesLLDShim pins the linker workaround. FPC 3.2.4rc1a emits
// Objective-C protocol method lists that Apple ld (Xcode 15+) rejects for
// aarch64-darwin; FPC 3.2.4-rc2 fixes the emitter. Until the toolchain moves
// to Lazarus 5.0, darwin_arm64 must hand -FD<shim dir> to fpc through
// lazbuild --opt=. The shim lives at tools/lazsetup/scripts/darwin-lld/ld.
func TestDarwinArm64UsesLLDShim(t *testing.T) {
	root := filepath.Join("..", "..", "configs")
	c, err := Load(filepath.Join(root, "toolchain.json"), filepath.Join(root, "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	var m *BuildMode
	for i := range c.Build.Modes {
		if c.Build.Modes[i].Name == "darwin_arm64" {
			m = &c.Build.Modes[i]
		}
	}
	if m == nil {
		t.Fatal("darwin_arm64 mode missing")
	}
	if !strings.Contains(m.Extra, "--opt=-FD") || !strings.Contains(m.Extra, "darwin-lld") {
		t.Errorf("darwin_arm64 extra = %q, want --opt=-FD<shim dir>", m.Extra)
	}
	repo := filepath.Join(t.TempDir(), "repo")
	r, err := c.Resolve(Options{Lazarus: c.Defaults.Lazarus, OS: "darwin", Arch: "arm64", Repo: repo})
	if err != nil {
		t.Fatal(err)
	}
	found := ""
	for _, rm := range r.Build.Modes {
		if rm.Name == "darwin_arm64" {
			found = rm.Extra
		}
	}
	if !strings.Contains(found, repo) || !strings.Contains(found, "darwin-lld") {
		t.Errorf("resolved darwin_arm64 extra = %q, want the repo-relative shim directory under %s", found, repo)
	}
}

// TestShippedModesHaveWidgetSet locks in the explicit --ws value for GTK2,
// GTK3 and Cocoa. liblcl.lpi's LCLWidgetType macro is not enough for lazbuild:
// without --ws=gtk3 lazbuild searches the gtk2 LCL unit directory instead of
// the gtk3 one. The old CI scripts always passed --ws explicitly.
func TestShippedModesHaveWidgetSet(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	want := map[string]string{
		"linux_GTK2":   "gtk2",
		"linux_GTK3":   "gtk3",
		"darwin_amd64": "cocoa",
		"darwin_arm64": "cocoa",
	}
	for _, m := range c.Build.Modes {
		if ws, ok := want[m.Name]; ok {
			if m.WS != ws {
				t.Errorf("mode %s: ws=%q, want %q", m.Name, m.WS, ws)
			}
			delete(want, m.Name)
		}
	}
	for name := range want {
		t.Errorf("required widgetset mode %q missing", name)
	}
}

// TestBothLinuxWidgetSetsEnabled records the current decision: GTK2 and GTK3
// are both built. GTK3 used to be staged out because Lazarus 4.8 lacks
// Gtk3Globals; the repository now ships patch/lazarus4.8/{gtk3,synedit},
// which setup applies to the toolchain before `make clean all`.
func TestBothLinuxWidgetSetsEnabled(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	var gtk2, gtk3 *BuildMode
	for i := range c.Build.Modes {
		switch c.Build.Modes[i].Name {
		case "linux_GTK2":
			gtk2 = &c.Build.Modes[i]
		case "linux_GTK3":
			gtk3 = &c.Build.Modes[i]
		}
	}
	if gtk2 == nil || gtk2.Disabled {
		t.Fatal("linux_GTK2 must stay enabled")
	}
	if gtk3 == nil {
		t.Fatal("linux_GTK3 configuration must be kept")
	}
	if gtk3.Disabled {
		t.Error("linux_GTK3 must be enabled now that the Lazarus patch is applied")
	}
	if gtk3.WS != "gtk3" || gtk3.Artifact != "libenergy-gtk3.so" || gtk3.Output == "" {
		t.Errorf("linux_GTK3 must stay fully configured, got %+v", *gtk3)
	}
}

// TestCombinationConfigIsComplete guards the data the new matrix builder
// depends on: four CEF versions, four combinations, and a platform mode for
// every (os, arch, widgetset) pair used by the shipped targets.
func TestCombinationConfigIsComplete(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	if len(c.Build.CEFVersions) != 4 {
		t.Errorf("expected 4 CEF versions, got %d", len(c.Build.CEFVersions))
	}
	if len(c.Build.Combinations) != 4 {
		t.Errorf("expected 4 combinations, got %d", len(c.Build.Combinations))
	}
	if c.Build.LazbuildWrapper == "" || c.Build.LazbuildConf == "" {
		t.Error("lazbuildWrapper / lazbuildConf must be configured")
	}
	seen := map[string]bool{}
	for _, pm := range c.Build.PlatformModes {
		if pm.BM == "" || pm.WS == "" || pm.Artifact == "" {
			t.Errorf("incomplete platform mode: %+v", pm)
		}
		seen[pm.OS+"/"+pm.Arch+"/"+pm.WSTag] = true
	}
	for _, want := range []string{
		"windows/amd64/", "windows/386/",
		"linux/386/gtk2", "linux/386/gtk3",
		"linux/amd64/gtk2", "linux/amd64/gtk3",
		"linux/arm/gtk2", "linux/arm/gtk3",
		"linux/arm64/gtk2", "linux/arm64/gtk3",
		"darwin/amd64/", "darwin/arm64/",
	} {
		if !seen[want] {
			t.Errorf("missing platform mode for %s", want)
		}
	}
	// gtk2 has no webkit2gtk: Webview combinations must exclude it.
	for _, cb := range c.Build.Combinations {
		if strings.Contains(cb.Name, "webview") {
			for _, ws := range cb.WidgetSets {
				if ws == "gtk2" {
					t.Errorf("combination %s must not target gtk2", cb.Name)
				}
			}
		}
	}
}

// TestPatchDirFollowsLazarusVersion pins the patch source path. Only Linux
// targets apply it, and only when patch/lazarus<version> exists.
func TestPatchDirFollowsLazarusVersion(t *testing.T) {
	c, err := Load(
		filepath.Join("..", "..", "configs", "toolchain.json"),
		filepath.Join("..", "..", "configs", "energy-lib.json"),
	)
	if err != nil {
		t.Fatal(err)
	}
	repo := filepath.Join(t.TempDir(), "repo")
	r, err := c.Resolve(Options{Lazarus: "4.8", OS: "linux", Arch: "amd64", Repo: repo})
	if err != nil {
		t.Fatal(err)
	}
	if !strings.Contains(r.Build.PatchDir, "patch/lazarus4.8") {
		t.Errorf("patchDir = %q, want patch/lazarus4.8", r.Build.PatchDir)
	}
	if !strings.HasPrefix(r.Vars["cpatch"], "/app/patch/lazarus4.8") {
		t.Errorf("container patch path = %q, want /app/patch/lazarus4.8", r.Vars["cpatch"])
	}
	found := false
	for _, cp := range r.Components {
		if cp.ID == "lazarus-patch" {
			found = true
			if len(cp.Commands) != 2 {
				t.Errorf("lazarus-patch must cover gtk3 and synedit, got %d commands", len(cp.Commands))
			}
			for _, cmd := range cp.Commands {
				if !strings.Contains(cmd, "/app/patch/lazarus4.8") {
					t.Errorf("patch command does not point at the container patch dir: %s", cmd)
				}
				if !strings.Contains(cmd, "if [ -d") {
					t.Errorf("patch command must skip when the directory is absent: %s", cmd)
				}
			}
		}
	}
	if !found {
		t.Error("linux-source profile is missing the lazarus-patch component")
	}
	// The patch must be applied before Lazarus itself is compiled.
	patchIdx, buildIdx := -1, -1
	for i, cp := range r.Components {
		switch cp.ID {
		case "lazarus-patch":
			patchIdx = i
		case "build-lazarus":
			buildIdx = i
		}
	}
	if patchIdx < 0 || buildIdx < 0 || patchIdx > buildIdx {
		t.Errorf("lazarus-patch (%d) must run before build-lazarus (%d)", patchIdx, buildIdx)
	}
}

// TestLegacyLinuxContainerImages pins the image assignment of the old
// build-linux-docker-*.yml workflows: x86 (amd64/i386) built in debian:11,
// aarch64 in arm64v8/ubuntu:18.04. Old CI built GTK2 and GTK3 modes
// sequentially inside the SAME container, so there is no per-widgetset image.
// linux/arm is an extension (the old CI had no arm32 job) and stays on
// debian:11 like the other 32-bit/x86 targets.
// TestI386ContainerRelaxesSeccomp locks in the fix for i386/debian:11:
// Docker's default seccomp profile denies the 32-bit socket syscalls glibc
// uses for DNS, so every apt-get fails with "Temporary failure resolving
// archive.debian.org" unless the container runs with seccomp=unconfined.
// Only the 32-bit x86 container needs this; other targets keep the default
// profile.
func TestI386ContainerRelaxesSeccomp(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "toolchain.json"))
	if err != nil {
		t.Fatal(err)
	}
	ct := c.Targets["linux/386"].Container
	if ct == nil {
		t.Fatal("linux/386 has no container")
	}
	found := false
	for _, s := range ct.SecurityOpt {
		if s == "seccomp=unconfined" {
			found = true
		}
	}
	if !found {
		t.Errorf("linux/386 container needs seccomp=unconfined, got %v", ct.SecurityOpt)
	}
	for key, td := range c.Targets {
		if key == "linux/386" || td.Container == nil {
			continue
		}
		for _, s := range td.Container.SecurityOpt {
			t.Errorf("%s unexpectedly weakens seccomp with %q", key, s)
		}
	}
}

func TestLegacyLinuxContainerImages(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "toolchain.json"))
	if err != nil {
		t.Fatal(err)
	}
	want := map[string]string{
		"linux/386":   "i386/debian:11",
		"linux/amd64": "amd64/debian:11",
		"linux/arm":   "arm32v7/debian:11",
		"linux/arm64": "arm64v8/ubuntu:18.04",
	}
	for key, image := range want {
		td := c.Targets[key]
		if td.Container == nil {
			t.Errorf("%s has no container", key)
			continue
		}
		if td.Container.Image != image {
			t.Errorf("%s image = %q, want %q (old CI assignment)", key, td.Container.Image, image)
		}
		// debian:11 / ubuntu:18.04 are EOL: their default apt mirrors 404 on
		// package download. Every Linux container must run the mirror fix
		// before installing the GTK build dependencies.
		hasMirrorFix := false
		for _, cmd := range td.Container.Install {
			if strings.Contains(cmd, "apt-eol.sh") {
				hasMirrorFix = true
			}
		}
		if !hasMirrorFix {
			t.Errorf("%s container install does not run apt-eol.sh", key)
		}
	}
}

// TestShippedContainerMounts verifies that every Linux target builds inside a
// container (old CI's debian:11 / ubuntu:18.04 GTK2+GTK3 dependency baseline),
// mounts both the checkout and the toolchain directory, and uses a stable
// container name so FPC installed in /usr/local survives across the setup and
// build steps.
func TestShippedContainerMounts(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "toolchain.json"))
	if err != nil {
		t.Fatal(err)
	}
	for _, key := range []string{"linux/386", "linux/amd64", "linux/arm", "linux/arm64"} {
		td := c.Targets[key]
		if td.Container == nil {
			t.Errorf("%s has no container", key)
			continue
		}
		if td.Container.PrefixGuest == "" || len(td.Container.Mounts) == 0 {
			t.Errorf("%s container lacks prefixGuest or mounts", key)
		}
		if td.Container.Image == "" {
			t.Errorf("%s container has no image", key)
		}
	}
	// A named session is mandatory: one-shot `docker run --rm` would discard
	// the FPC installation before `make` / `lazbuild` run.
	parts := strings.SplitN("linux/amd64", "/", 2)
	r, err := c.Resolve(Options{Lazarus: c.Defaults.Lazarus, OS: parts[0], Arch: parts[1]})
	if err != nil {
		t.Fatal(err)
	}
	if r.Container == nil || r.Container.Name == "" {
		t.Error("linux/amd64 resolved container has no stable name")
	}
}

// TestShippedURLsAvoidSourceForge locks in the official mirrors: every
// SourceForge endpoint returns a Cloudflare 403 page on GitHub-hosted runners.
func TestShippedURLsAvoidSourceForge(t *testing.T) {
	c, err := Load(filepath.Join("..", "..", "configs", "toolchain.json"))
	if err != nil {
		t.Fatal(err)
	}
	for _, key := range c.TargetKeys() {
		parts := strings.SplitN(key, "/", 2)
		r, err := c.Resolve(Options{Lazarus: c.Defaults.Lazarus, OS: parts[0], Arch: parts[1]})
		if err != nil {
			t.Fatalf("resolve %s: %v", key, err)
		}
		for _, cp := range r.Components {
			if cp.URL == "" {
				continue
			}
			if strings.Contains(cp.URL, "sourceforge.net") {
				t.Errorf("%s component %s primary URL still points at SourceForge: %s", key, cp.ID, cp.URL)
			}
		}
	}
}
