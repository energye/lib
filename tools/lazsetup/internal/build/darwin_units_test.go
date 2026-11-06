package build

import (
	"io"
	"os"
	"path/filepath"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

func TestClearDarwinUnitsOnlyRemovesDarwinCompiledUnits(t *testing.T) {
	repo := t.TempDir()
	rn := runner.New(io.Discard)

	darwin := filepath.Join(repo, "lib", "aarch64-darwin")
	win := filepath.Join(repo, "lib", "x86_64-win64")
	for _, d := range []string{darwin, win} {
		if err := os.MkdirAll(d, 0o755); err != nil {
			t.Fatal(err)
		}
	}
	for _, p := range []string{
		filepath.Join(darwin, "uCEFDownLoadItem.ppu"),
		filepath.Join(darwin, "uCEFDownLoadItem.o"),
		filepath.Join(darwin, "keep.txt"),
		filepath.Join(win, "uCEFDownLoadItem.ppu"),
	} {
		if err := os.WriteFile(p, []byte("x"), 0o644); err != nil {
			t.Fatal(err)
		}
	}

	clearDarwinUnits(repo, rn)

	for _, p := range []string{
		filepath.Join(darwin, "uCEFDownLoadItem.ppu"),
		filepath.Join(darwin, "uCEFDownLoadItem.o"),
	} {
		if _, err := os.Stat(p); !os.IsNotExist(err) {
			t.Errorf("stale darwin unit should be gone: %s (err=%v)", p, err)
		}
	}
	for _, p := range []string{
		filepath.Join(darwin, "keep.txt"),
		filepath.Join(win, "uCEFDownLoadItem.ppu"),
	} {
		if _, err := os.Stat(p); err != nil {
			t.Errorf("unrelated file must be kept: %s (err=%v)", p, err)
		}
	}
}
