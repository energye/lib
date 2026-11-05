package config

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
)

const testToolchainJSON = `{
  "schema": 1,
  "vars": { "SF": "https://example.invalid/files" },
  "defaults": {
    "lazarus": "4.8",
    "work": "${home}/work",
    "prefix": "${work}/lazarus",
    "cache": "${home}/cache",
    "retries": 2,
    "timeout": "5m"
  },
  "releases": {
    "4.8": { "fpc": "3.2.2", "aliases": { "laz_src": "lazarus-4.8-0.tar.gz" } }
  },
  "profiles": {
    "linux-source": {
      "components": [
        { "id": "laz", "url": "${SF}/Lazarus%20${laz}/${laz_src}", "kind": "targz", "dest": "${work}" },
        { "id": "fpc", "url": "${SF}/fpc-${fpc}.${fpc_arch}-linux.tar", "kind": "tar", "dest": "${prefix}" },
        { "id": "build", "kind": "commands", "commands": ["cd \"${cprefix}/fpc-${fpc}.${fpc_suffix}\" && make"] }
      ]
    },
    "win-binary": {
      "components": [
        { "id": "laz", "url": "${SF}/win-${win_tag}.exe", "kind": "inno", "dest": "${prefix}" }
      ]
    },
    "broken": {
      "components": [
        { "id": "laz", "url": "${SF}/${not_defined}", "kind": "raw" }
      ]
    }
  },
  "targets": {
    "linux/amd64": { "profile": "linux-source" },
    "linux/arm64": {
      "profile": "linux-source",
      "container": { "engine": "docker", "image": "arm64v8/test", "platform": "linux/arm64", "hostPath": "${work}", "guestPath": "/app" }
    },
    "windows/386": { "profile": "win-binary" },
    "windows/amd64": { "profile": "win-binary" },
    "linux/arm": { "profile": "broken" }
  }
}`

const testBuildJSON = `{
  "defaults": { "retries": 5 },
  "build": {
    "project": "liblcl.lpi",
    "output": "bin/liblcl.${lib_ext}",
    "modes": [ { "name": "LinuxARM64", "bm": "LinuxARM64", "os": ["linux"] } ]
  }
}`

func writeJSON(t *testing.T, dir, name, content string) string {
	t.Helper()
	p := filepath.Join(dir, name)
	if err := os.WriteFile(p, []byte(content), 0o644); err != nil {
		t.Fatal(err)
	}
	return p
}

func testConfig(t *testing.T) *Config {
	t.Helper()
	dir := t.TempDir()
	p1 := writeJSON(t, dir, "toolchain.json", testToolchainJSON)
	p2 := writeJSON(t, dir, "build.json", testBuildJSON)
	c, err := Load(p1, p2)
	if err != nil {
		t.Fatalf("Load: %v", err)
	}
	return c
}

func commandOf(r *Resolved, id string) string {
	for _, cp := range r.Components {
		if cp.ID == id && len(cp.Commands) > 0 {
			return cp.Commands[0]
		}
	}
	return ""
}

func TestLoadMergesConfigs(t *testing.T) {
	c := testConfig(t)
	if c.Defaults.Lazarus != "4.8" {
		t.Errorf("defaults.lazarus should survive the merge, got %q", c.Defaults.Lazarus)
	}
	if c.Defaults.Retries != 5 {
		t.Errorf("later file should override defaults.retries, got %d", c.Defaults.Retries)
	}
	if c.Build.Project != "liblcl.lpi" || len(c.Build.Modes) != 1 {
		t.Errorf("build config not merged: %+v", c.Build)
	}
	if got := c.TargetKeys(); len(got) != 5 {
		t.Errorf("expected 5 targets, got %v", got)
	}
}

func TestResolveIsIndependentPerTarget(t *testing.T) {
	c := testConfig(t)
	arm64, err := c.Resolve(Options{OS: "linux", Arch: "arm64"})
	if err != nil {
		t.Fatal(err)
	}
	if got := commandOf(arm64, "build"); !strings.Contains(got, "aarch64-linux") || !strings.Contains(got, "/app/lazarus") {
		t.Fatalf("arm64 command not expanded correctly: %s", got)
	}
	amd64, err := c.Resolve(Options{OS: "linux", Arch: "amd64"})
	if err != nil {
		t.Fatal(err)
	}
	if got := commandOf(amd64, "build"); !strings.Contains(got, "x86_64-linux") {
		t.Fatalf("amd64 command leaked from a previous resolve: %s", got)
	}
	if amd64.Container != nil {
		t.Error("linux/amd64 should not have a container")
	}
	again, err := c.Resolve(Options{OS: "linux", Arch: "arm64"})
	if err != nil {
		t.Fatal(err)
	}
	if got := commandOf(again, "build"); !strings.Contains(got, "aarch64-linux") {
		t.Fatalf("second arm64 resolve changed: %s", got)
	}
	if arm64.Vars["cprefix"] != again.Vars["cprefix"] {
		t.Errorf("cprefix unstable: %q vs %q", arm64.Vars["cprefix"], again.Vars["cprefix"])
	}
}

func TestNoContainer(t *testing.T) {
	c := testConfig(t)
	r, err := c.Resolve(Options{OS: "linux", Arch: "arm64", NoContainer: true})
	if err != nil {
		t.Fatal(err)
	}
	if r.Container != nil || r.Build.Container != nil {
		t.Fatal("NoContainer should clear the container")
	}
	if r.Vars["cprefix"] != r.Prefix {
		t.Errorf("cprefix %q should equal prefix %q without container", r.Vars["cprefix"], r.Prefix)
	}
	if got := commandOf(r, "build"); strings.Contains(got, "/app/") {
		t.Errorf("host command should not use container path: %s", got)
	}
}

func TestExpand(t *testing.T) {
	t.Setenv("LAZSETUP_TEST_ENV", "from-env")
	vars := map[string]string{"os": "linux", "nested": "${os}-${arch}", "arch": "arm64"}
	if got := Expand("${nested}", vars); got != "linux-arm64" {
		t.Errorf("nested expansion = %q", got)
	}
	if got := Expand("${env.LAZSETUP_TEST_ENV}", vars); got != "from-env" {
		t.Errorf("env expansion = %q", got)
	}
	if got := Expand("keep ${unknown}", vars); got != "keep ${unknown}" {
		t.Errorf("unknown variable should be preserved, got %q", got)
	}
}

func TestResolveErrors(t *testing.T) {
	c := testConfig(t)
	if _, err := c.Resolve(Options{Lazarus: "9.9"}); err == nil {
		t.Error("expected error for unknown lazarus version")
	}
	if _, err := c.Resolve(Options{OS: "darwin", Arch: "386"}); err == nil {
		t.Error("expected error for unconfigured target")
	}
	if _, err := c.Resolve(Options{OS: "linux", Arch: "arm"}); err == nil {
		t.Error("expected error for unresolved URL variable")
	}
	if _, err := c.Resolve(Options{OS: "bogus", Arch: "amd64"}); err == nil {
		t.Error("expected error for unknown OS")
	}
}

func TestWindowsURLs(t *testing.T) {
	c := testConfig(t)
	r32, err := c.Resolve(Options{OS: "windows", Arch: "386"})
	if err != nil {
		t.Fatal(err)
	}
	r64, err := c.Resolve(Options{OS: "windows", Arch: "amd64"})
	if err != nil {
		t.Fatal(err)
	}
	if !strings.HasSuffix(r32.Components[0].URL, "win-win32.exe") {
		t.Errorf("win32 URL = %s", r32.Components[0].URL)
	}
	if !strings.HasSuffix(r64.Components[0].URL, "win-win64.exe") {
		t.Errorf("win64 URL = %s", r64.Components[0].URL)
	}
}
