// Package build - clean darwin unit output between combination builds.
//
// liblcl.lpi sends every unit to lib/$(TargetCPU)-$(TargetOS), so all four
// CEF versions share one output directory on a given target. CEF109 names its
// unit uCEFDownLoadItem.pas while CEF127/147/150 name it uCEFDownloadItem.pas.
// On macOS these collide in the case-insensitive output directory, and a PPU
// written by one CEF version is loaded by the next one. FPC then tries to
// verify the PPU's recorded source name (uCEFDownloadItem.pas) and fails with
// "Can't find unit uCEFDownloadItem used by uCEFDownloadHandler". Removing
// stale ppu/o before each darwin job keeps every combination self-contained.
package build

import (
	"os"
	"path/filepath"
	"strings"

	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

// clearDarwinUnits deletes compiled units from lib/*-darwin directories. It
// is intentionally limited to darwin output dirs, which CI creates at build
// time and which are not tracked in the repository.
func clearDarwinUnits(repo string, rn *runner.Runner) {
	dirs, err := filepath.Glob(filepath.Join(repo, "lib", "*-darwin"))
	if err != nil {
		rn.Logf("  darwin units: glob failed: %v", err)
		return
	}
	removed := 0
	for _, dir := range dirs {
		entries, err := os.ReadDir(dir)
		if err != nil {
			rn.Logf("  darwin units: read %s: %v", dir, err)
			continue
		}
		for _, e := range entries {
			if e.IsDir() {
				continue
			}
			ext := strings.ToLower(filepath.Ext(e.Name()))
			if ext != ".ppu" && ext != ".o" {
				continue
			}
			if err := os.Remove(filepath.Join(dir, e.Name())); err != nil {
				rn.Logf("  darwin units: remove %s: %v", e.Name(), err)
				continue
			}
			removed++
		}
	}
	if removed > 0 {
		rn.Logf("  darwin units: cleared %d stale compiled unit(s)", removed)
	}
}
