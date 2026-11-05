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
	wantModes := map[string]bool{
		"win_amd64": false, "win_386": false,
		"linux_GTK2": false, "linux_GTK3": false,
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

// TestShippedModesHaveWidgetSet locks in the explicit --ws value for GTK2,
// GTK3 and Cocoa. liblcl.lpi's LCLWidgetType macro is not enough for lazbuild:
// without --ws=gtk3 lazbuild searches the gtk2 LCL unit directory and fails
// with "Can't find unit Gtk3Globals used by LazSynGtk3IMM". The old CI scripts
// always passed --ws explicitly.
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

// TestShippedContainerMounts verifies that every Linux target builds inside a
// container (Ubuntu 18/20 for the GTK2/GTK3 dependency baseline), mounts both
// the checkout and the toolchain directory, and uses a stable container name
// so FPC installed in /usr/local survives across the setup and build steps.
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
