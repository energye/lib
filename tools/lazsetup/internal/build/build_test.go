package build

import (
	"bytes"
	"fmt"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

func TestFindLazarusRoot(t *testing.T) {
	tmp := t.TempDir()
	nested := filepath.Join(tmp, "lazarus")
	if err := os.MkdirAll(filepath.Join(nested, "lcl", "units"), 0o755); err != nil {
		t.Fatal(err)
	}
	if hasLazarusRoot(tmp) {
		t.Error("prefix itself must not be mistaken for a Lazarus root")
	}
	if !hasLazarusRoot(nested) {
		t.Error("nested lazarus/ directory must be recognized as a Lazarus root")
	}
	if got := findLazarusRoot(tmp); got != nested {
		t.Errorf("findLazarusRoot = %q, want %q", got, nested)
	}
}

// TestDarwinBuildCommand pins the two flags the official macOS zip needs:
// --lazarusdir (lazbuild otherwise falls back to /Developer/lazarus/) and
// --ws=cocoa (the lpi's LCLWidgetType macro alone is not enough).
func TestDarwinBuildCommand(t *testing.T) {
	root := filepath.Join("..", "..", "configs")
	c, err := config.Load(filepath.Join(root, "toolchain.json"), filepath.Join(root, "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	prefix := t.TempDir()
	lazRoot := filepath.Join(prefix, "lazarus")
	if err := os.MkdirAll(filepath.Join(lazRoot, "lcl"), 0o755); err != nil {
		t.Fatal(err)
	}
	t.Setenv("LAZARUSDIR", lazRoot)
	t.Setenv("LAZBUILD", "")
	r, err := c.Resolve(config.Options{Lazarus: c.Defaults.Lazarus, OS: "darwin", Arch: "arm64", Prefix: prefix})
	if err != nil {
		t.Fatal(err)
	}
	var buf bytes.Buffer
	rr := &runner.Runner{DryRun: true, Out: &buf}
	if _, err := Build(Options{R: r, Runner: rr}); err != nil {
		t.Fatal(err)
	}
	out := buf.String()
	for _, want := range []string{`--bm="darwin_arm64"`, "--ws=cocoa", "--lazarusdir=" + fmt.Sprintf("%q", lazRoot)} {
		if !strings.Contains(out, want) {
			t.Errorf("darwin build command missing %s\n%s", want, out)
		}
	}
}

// TestDarwinTrustsExportedLazarusDir covers the real CI shape: the macOS zip
// unpacks to ${prefix}/lazarus, which has a config/ directory but does not
// necessarily carry the full lcl/ source tree. `setup` already resolved the
// lazbuild symlink, so that root must be passed through unchanged.
func TestDarwinTrustsExportedLazarusDir(t *testing.T) {
	root := filepath.Join("..", "..", "configs")
	c, err := config.Load(filepath.Join(root, "toolchain.json"), filepath.Join(root, "energy-lib.json"))
	if err != nil {
		t.Fatal(err)
	}
	prefix := t.TempDir()
	lazRoot := filepath.Join(prefix, "lazarus")
	if err := os.MkdirAll(filepath.Join(lazRoot, "config"), 0o755); err != nil {
		t.Fatal(err)
	}
	t.Setenv("LAZARUSDIR", lazRoot)
	t.Setenv("LAZBUILD", "")
	r, err := c.Resolve(config.Options{Lazarus: c.Defaults.Lazarus, OS: "darwin", Arch: "arm64", Prefix: prefix})
	if err != nil {
		t.Fatal(err)
	}
	var buf bytes.Buffer
	rr := &runner.Runner{DryRun: true, Out: &buf}
	if _, err := Build(Options{R: r, Runner: rr}); err != nil {
		t.Fatal(err)
	}
	want := "--lazarusdir=" + fmt.Sprintf("%q", lazRoot)
	if !strings.Contains(buf.String(), want) {
		t.Errorf("darwin build command missing %s\n%s", want, buf.String())
	}
}
