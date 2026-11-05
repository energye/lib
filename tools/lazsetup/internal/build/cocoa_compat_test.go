package build

import (
	"io"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

func writeCocoaUnit(t *testing.T, repo, rel, uses, nsapp string) string {
	t.Helper()
	p := filepath.Join(repo, filepath.FromSlash(rel))
	if err := os.MkdirAll(filepath.Dir(p), 0o755); err != nil {
		t.Fatal(err)
	}
	content := "unit uCEFLazarusCocoa;\n\n{$IFDEF DARWIN}\nuses\n  " + uses +
		"\n  Classes, SysUtils;\n{$ENDIF}\n" +
		"procedure Stop;\nbegin\n  tryToTerminateApplication(" + nsapp + ");\nend;\n"
	if err := os.WriteFile(p, []byte(content), 0o644); err != nil {
		t.Fatal(err)
	}
	return p
}

func readCocoaUnit(t *testing.T, p string) string {
	t.Helper()
	data, err := os.ReadFile(p)
	if err != nil {
		t.Fatal(err)
	}
	return string(data)
}

func TestPatchCocoaCompatAddsUnitsAndRestores(t *testing.T) {
	repo := t.TempDir()
	rn := runner.New(io.Discard)

	old := cocoaCompatRel[0]
	newer := cocoaCompatRel[1]
	already := cocoaCompatRel[2]
	missing := cocoaCompatRel[3]

	pOld := writeCocoaUnit(t, repo, old, cocoaFixes[0].old, cocoaFixes[1].old)
	pNewer := writeCocoaUnit(t, repo, newer, cocoaFixes[0].old, cocoaFixes[1].old)
	pAlready := writeCocoaUnit(t, repo, already, cocoaFixes[0].new, cocoaFixes[1].new)
	beforeOld := readCocoaUnit(t, pOld)
	beforeNewer := readCocoaUnit(t, pNewer)
	beforeAlready := readCocoaUnit(t, pAlready)

	restore, err := patchCocoaCompat(repo, rn)
	if err != nil {
		t.Fatal(err)
	}
	for _, tc := range []struct {
		name string
		path string
	}{{"first CEF version", pOld}, {"second CEF version", pNewer}} {
		got := readCocoaUnit(t, tc.path)
		for _, f := range cocoaFixes {
			if !strings.Contains(got, f.new) {
				t.Errorf("%s missing fix %q: %s", tc.name, f.new, got)
			}
			if !strings.HasPrefix(f.new, f.old) && strings.Contains(got, f.old) {
				t.Errorf("%s still has %q: %s", tc.name, f.old, got)
			}
		}
	}
	if got := readCocoaUnit(t, pAlready); got != beforeAlready {
		t.Errorf("already-patched file must not be touched: %s", got)
	}
	if _, err := os.Stat(filepath.Join(repo, filepath.FromSlash(missing))); !os.IsNotExist(err) {
		t.Errorf("missing CEF unit must stay missing, got err=%v", err)
	}

	restore()
	if got := readCocoaUnit(t, pOld); got != beforeOld {
		t.Errorf("restore did not put back the original bytes: %s", got)
	}
	if got := readCocoaUnit(t, pNewer); got != beforeNewer {
		t.Errorf("restore did not put back the original bytes: %s", got)
	}

	// Patching twice must not append a fix twice.
	restore2, err := patchCocoaCompat(repo, rn)
	if err != nil {
		t.Fatal(err)
	}
	restore2()
	if got := readCocoaUnit(t, pOld); got != beforeOld {
		t.Errorf("second patch/restore changed the file: %s", got)
	}
}

func TestPatchCocoaCompatOnlyTouchesDarwin(t *testing.T) {
	data, err := os.ReadFile("combos.go")
	if err != nil {
		t.Fatal(err)
	}
	if !strings.Contains(string(data), `resolved.Target.OS == "darwin"`) {
		t.Error("cocoa compat must be gated to darwin builds")
	}
}
