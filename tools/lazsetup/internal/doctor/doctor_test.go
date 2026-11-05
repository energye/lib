package doctor

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/config"
)

const lpiFixture = `<?xml version="1.0" encoding="UTF-8"?>
<CONFIG>
  <ProjectOptions>
    <BuildModes Active="win_amd64">
      <Item Name="win_amd64" Default="True">
        <CompilerOptions>
          <OtherUnitFiles Value="common;src\synedit"/>
          <Target><Filename Value="libenergy-amd64"/></Target>
        </CompilerOptions>
      </Item>
      <Item Name="linux_GTK2">
        <CompilerOptions>
          <OtherUnitFiles Value="common;src\webkit2_linux"/>
        </CompilerOptions>
      </Item>
    </BuildModes>
  </ProjectOptions>
</CONFIG>
`

func fixture(t *testing.T, buildJSON string) (*config.Config, *config.Resolved, string) {
	t.Helper()
	dir := t.TempDir()
	for _, sub := range []string{"common", "src/synedit", "src/webkit2_linux"} {
		if err := os.MkdirAll(filepath.Join(dir, filepath.FromSlash(sub)), 0o755); err != nil {
			t.Fatal(err)
		}
	}
	if err := os.WriteFile(filepath.Join(dir, "liblcl.lpi"), []byte(lpiFixture), 0o644); err != nil {
		t.Fatal(err)
	}
	cfg := fmt.Sprintf(`{
  "schema": 1,
  "defaults": { "lazarus": "4.8", "work": %q, "prefix": %q, "cache": %q },
  "releases": { "4.8": { "fpc": "3.2.2" } },
  "profiles": { "test": { "os": ["windows"], "arch": ["amd64"], "components": [
      { "id": "lazarus", "url": "https://example.invalid/lazarus.exe", "kind": "inno", "dest": "${prefix}" }
  ] } },
  "targets": { "windows/amd64": { "profile": "test" } }%s
}`,
		filepath.ToSlash(filepath.Join(dir, "work")),
		filepath.ToSlash(filepath.Join(dir, "prefix")),
		filepath.ToSlash(filepath.Join(dir, "cache")),
		buildJSON)
	cfgPath := filepath.Join(dir, "toolchain.json")
	if err := os.WriteFile(cfgPath, []byte(cfg), 0o644); err != nil {
		t.Fatal(err)
	}
	c, err := config.Load(cfgPath)
	if err != nil {
		t.Fatal(err)
	}
	r, err := c.Resolve(config.Options{OS: "windows", Arch: "amd64", Lazarus: "4.8"})
	if err != nil {
		t.Fatal(err)
	}
	return c, r, dir
}

func run(t *testing.T, c *config.Config, r *config.Resolved, dir string) *Report {
	t.Helper()
	rep, err := Run(Options{Config: c, Resolved: r, WorkDir: dir, Lazarus: "4.8"})
	if err != nil {
		t.Fatalf("doctor.Run: %v", err)
	}
	return rep
}

func hasFailure(rep *Report, name string) bool {
	for _, c := range rep.Checks {
		if c.Level == Fail && (name == "" || c.Name == name || strings.Contains(c.Detail, name)) {
			return true
		}
	}
	return false
}

func TestDoctorPassesOnConsistentConfig(t *testing.T) {
	c, r, dir := fixture(t, `, "build": {
    "project": "liblcl.lpi", "packages": [],
    "modes": [ { "name": "win_amd64", "bm": "win_amd64", "artifact": "libenergy-amd64.dll" } ]
  }`)
	rep := run(t, c, r, dir)
	if !rep.OK() {
		rep.Print(os.Stdout)
		t.Fatal("expected a clean report")
	}
}

func TestDoctorDetectsUnknownBuildMode(t *testing.T) {
	c, r, dir := fixture(t, `, "build": {
    "project": "liblcl.lpi", "packages": [],
    "modes": [ { "name": "win_amd64", "bm": "Win64_CEF", "artifact": "libenergy-amd64.dll" } ]
  }`)
	rep := run(t, c, r, dir)
	if rep.OK() || !hasFailure(rep, "bm=") {
		rep.Print(os.Stdout)
		t.Fatal("doctor must reject a bm that is absent from liblcl.lpi")
	}
}

func TestDoctorDetectsMissingPackage(t *testing.T) {
	c, r, dir := fixture(t, `, "build": {
    "project": "liblcl.lpi",
    "packages": [ { "path": "./3rd-party/richmemo/richmemopackage.lpk", "link": true } ],
    "modes": [ { "name": "win_amd64", "bm": "win_amd64", "artifact": "libenergy-amd64.dll" } ]
  }`)
	rep := run(t, c, r, dir)
	if rep.OK() || !hasFailure(rep, "richmemopackage.lpk") {
		rep.Print(os.Stdout)
		t.Fatal("doctor must reject a non-existent lpk path")
	}
}

func TestDoctorDetectsMissingUnitPath(t *testing.T) {
	c, r, dir := fixture(t, ``)
	if err := os.RemoveAll(filepath.Join(dir, "common")); err != nil {
		t.Fatal(err)
	}
	rep := run(t, c, r, dir)
	if rep.OK() || !hasFailure(rep, "unit path common") {
		rep.Print(os.Stdout)
		t.Fatal("doctor must reject a missing OtherUnitFiles directory")
	}
}

func TestDoctorDetectsMissingProject(t *testing.T) {
	c, r, dir := fixture(t, ``)
	if err := os.Remove(filepath.Join(dir, "liblcl.lpi")); err != nil {
		t.Fatal(err)
	}
	rep := run(t, c, r, dir)
	if rep.OK() || !hasFailure(rep, "project file") {
		rep.Print(os.Stdout)
		t.Fatal("doctor must reject a missing .lpi")
	}
}
