package build

import (
	"bytes"
	"io"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

func shippedConfig(t *testing.T) *config.Config {
	t.Helper()
	root := filepath.Join("..", "..", "configs")
	c, err := config.Load(
		filepath.Join(root, "toolchain.json"),
		filepath.Join(root, "energy-lib.json"),
	)
	if err != nil {
		t.Fatalf("load shipped configs: %v", err)
	}
	return c
}

func resolveLinuxAMD64(t *testing.T, c *config.Config) *config.Resolved {
	t.Helper()
	r, err := c.Resolve(config.Options{Lazarus: c.Defaults.Lazarus, OS: "linux", Arch: "amd64"})
	if err != nil {
		t.Fatal(err)
	}
	return r
}

func TestZipName(t *testing.T) {
	cases := []struct {
		module, os, arch, ws, want string
	}{
		{"", "windows", "amd64", "", "libenergy-windows-amd64.zip"},
		{"", "linux", "amd64", "gtk2", "libenergy-linux-amd64-gtk2.zip"},
		{"webview", "darwin", "arm64", "", "libenergy-webview-darwin-arm64.zip"},
		{"cef109", "linux", "386", "gtk2", "libenergy-cef109-linux-386-gtk2.zip"},
		{"cef150-webview", "linux", "arm64", "gtk3", "libenergy-cef150-webview-linux-arm64-gtk3.zip"},
	}
	for _, tc := range cases {
		if got := ZipName(tc.module, tc.os, tc.arch, tc.ws); got != tc.want {
			t.Errorf("ZipName(%q,%q,%q,%q) = %q, want %q", tc.module, tc.os, tc.arch, tc.ws, got, tc.want)
		}
	}
}

// TestMinimalClosedLoop pins the first milestone: linux/amd64 x gtk2+gtk3 x
// four combinations, with only CEF109 selected, produces exactly six zips.
func TestMinimalClosedLoop(t *testing.T) {
	c := shippedConfig(t)
	r := resolveLinuxAMD64(t, c)
	jobs, err := ExpandCombos(ComboOptions{
		R: r, CEFVersions: []string{"CEF109"}, WidgetSets: []string{"gtk2", "gtk3"},
	})
	if err != nil {
		t.Fatal(err)
	}
	want := []string{
		"libenergy-linux-amd64-gtk2.zip",
		"libenergy-linux-amd64-gtk3.zip",
		"libenergy-webview-linux-amd64-gtk3.zip",
		"libenergy-cef109-linux-amd64-gtk2.zip",
		"libenergy-cef109-linux-amd64-gtk3.zip",
		"libenergy-cef109-webview-linux-amd64-gtk3.zip",
	}
	if len(jobs) != len(want) {
		t.Fatalf("got %d jobs, want %d: %v", len(jobs), len(want), jobs)
	}
	got := map[string]bool{}
	for _, j := range jobs {
		got[j.ZipName] = true
		if !strings.HasSuffix(j.ZipName, ".zip") {
			t.Errorf("job %q is not a zip", j.ZipName)
		}
	}
	for _, w := range want {
		if !got[w] {
			t.Errorf("missing job %s", w)
		}
	}
}

// TestGTK2HasNoWebview locks the platform capability: webkit2gtk only exists
// for gtk3, so gtk2 must produce lcl and cef variants only.
func TestGTK2HasNoWebview(t *testing.T) {
	c := shippedConfig(t)
	r := resolveLinuxAMD64(t, c)
	jobs, err := ExpandCombos(ComboOptions{R: r})
	if err != nil {
		t.Fatal(err)
	}
	if len(jobs) != 15 {
		t.Fatalf("linux/amd64 full matrix = %d jobs, want 15", len(jobs))
	}
	gtk2, gtk3 := 0, 0
	for _, j := range jobs {
		if j.WSTag == "gtk2" {
			gtk2++
			if strings.Contains(j.Module, "webview") || contains(j.Defines, "Webview") {
				t.Errorf("gtk2 must not build a Webview combination: %s (%v)", j.ZipName, j.Defines)
			}
		}
		if j.WSTag == "gtk3" {
			gtk3++
		}
	}
	if gtk2 != 5 || gtk3 != 10 {
		t.Errorf("gtk2=%d gtk3=%d, want 5 and 10", gtk2, gtk3)
	}
}

func TestCEFVersionsFanOut(t *testing.T) {
	c := shippedConfig(t)
	r := resolveLinuxAMD64(t, c)
	jobs, err := ExpandCombos(ComboOptions{R: r, Combos: []string{"cef"}})
	if err != nil {
		t.Fatal(err)
	}
	seen := map[string]bool{}
	for _, j := range jobs {
		seen[j.CEFName] = true
	}
	for _, v := range []string{"CEF109", "CEF127", "CEF147", "CEF150"} {
		if !seen[v] {
			t.Errorf("CEF version %s was not expanded", v)
		}
	}
	if len(jobs) != 8 {
		t.Errorf("cef combination = %d jobs, want 4 versions x 2 widgetsets", len(jobs))
	}
}

func TestComboCommandShape(t *testing.T) {
	c := shippedConfig(t)
	r := resolveLinuxAMD64(t, c)
	var buf bytes.Buffer
	rr := &runner.Runner{DryRun: true, Out: &buf}
	_, err := BuildCombos(ComboOptions{
		R: r, Runner: rr, Combos: []string{"cef-webview"},
		CEFVersions: []string{"CEF109"}, WidgetSets: []string{"gtk3"},
	})
	if err != nil {
		t.Fatal(err)
	}
	out := buf.String()
	for _, want := range []string{
		"-bm \"linux_GTK3\"", "-ws \"gtk3\"", `-d "CEF109,Webview"`,
		"-lazbuild", "-lpi", "-conf", "lazbuild.conf.json",
		"libenergy-cef109-webview-linux-amd64-gtk3.zip",
	} {
		if !strings.Contains(out, want) {
			t.Errorf("dry-run output missing %q\n%s", want, out)
		}
	}
}

// TestBuildCombosRestoresLPIOnFailure proves the lpi is backed up before the
// first compile and restored even when the very first command fails.
func TestBuildCombosRestoresLPIOnFailure(t *testing.T) {
	c := shippedConfig(t)
	repo := t.TempDir()
	lpi := filepath.Join(repo, "liblcl.lpi")
	original := []byte("<?xml version=\"1.0\"?><CONFIG>original</CONFIG>\n")
	if err := os.WriteFile(lpi, original, 0o644); err != nil {
		t.Fatal(err)
	}
	r, err := c.Resolve(config.Options{
		Lazarus: c.Defaults.Lazarus, OS: "windows", Arch: "amd64",
		Repo: repo, NoContainer: true,
	})
	if err != nil {
		t.Fatal(err)
	}
	rr := &runner.Runner{Out: io.Discard}
	_, err = BuildCombos(ComboOptions{
		R: r, Runner: rr, Combos: []string{"lcl"}, OutDir: filepath.Join(repo, "bins"),
	})
	if err == nil {
		t.Fatal("expected the missing lazbuild wrapper to fail the build")
	}
	got, err := os.ReadFile(lpi)
	if err != nil {
		t.Fatal(err)
	}
	if !bytes.Equal(got, original) {
		t.Errorf("liblcl.lpi was not restored after failure:\ngot  %q\nwant %q", got, original)
	}
}
