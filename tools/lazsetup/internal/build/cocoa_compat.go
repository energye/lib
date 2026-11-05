// Package build - darwin-only CEF4Delphi Cocoa compatibility.
//
// CEF4Delphi's uCEFLazarusCocoa.pas was written against old Lazarus versions
// where TCocoaApplication was visible through CocoaInt. Lazarus 4.8 moved the
// type into its own CocoaApplication unit, so compiling a CEF combination on
// macOS fails with "Identifier not found TCocoaApplication". Because the four
// vendored CEF snapshots all carry the same outdated uses clause, and because
// the owner does not want lib source files changed or committed, we patch the
// uses clause only for the duration of a darwin build and restore the original
// bytes unconditionally.
package build

import (
	"bytes"
	"fmt"
	"os"
	"path/filepath"

	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

const (
	cocoaUsesOld = "CocoaAll, CocoaInt, Cocoa_Extra,"
	cocoaUsesNew = "CocoaAll, CocoaInt, Cocoa_Extra, CocoaApplication,"
)

// cocoaCompatRel lists the CEF4Delphi Cocoa units shipped in this repository.
// Paths are slash separated and always resolved relative to the repo root.
var cocoaCompatRel = []string{
	"src/3rd/CEF/109.1.18/source/uceflazaruscocoa.pas",
	"src/3rd/CEF/127.3.5/source/uceflazaruscocoa.pas",
	"src/3rd/CEF/147.0.14/source/uceflazaruscocoa.pas",
	"src/3rd/CEF/150.0.14/source/uceflazaruscocoa.pas",
}

type fileBackup struct {
	path string
	data []byte
}

// patchCocoaCompat adds CocoaApplication to the uses clause of every CEF
// Cocoa unit that still has the old form. It returns a restore function that
// the caller MUST defer: the repository content is never left modified, on
// success, failure or panic.
//
// Missing files or already-patched files are skipped, so a future CEF upgrade
// that fixes its own uses clause remains a no-op.
func patchCocoaCompat(repo string, rn *runner.Runner) (func(), error) {
	var backups []fileBackup
	restore := func() {
		for _, b := range backups {
			if err := os.WriteFile(b.path, b.data, 0o644); err != nil {
				rn.Logf("  cocoa compat: ERROR restoring %s: %v", b.path, err)
			}
		}
		if len(backups) > 0 {
			rn.Logf("  cocoa compat: restored %d file(s)", len(backups))
		}
	}
	for _, rel := range cocoaCompatRel {
		p := filepath.Join(repo, filepath.FromSlash(rel))
		data, err := os.ReadFile(p)
		if err != nil {
			if os.IsNotExist(err) {
				rn.Logf("  cocoa compat: %s missing, skipping", rel)
				continue
			}
			restore()
			return nil, fmt.Errorf("cocoa compat: read %s: %w", p, err)
		}
		if bytes.Contains(data, []byte(cocoaUsesNew)) {
			continue
		}
		if !bytes.Contains(data, []byte(cocoaUsesOld)) {
			rn.Logf("  cocoa compat: %s has no known uses clause, skipping", rel)
			continue
		}
		backups = append(backups, fileBackup{path: p, data: data})
		patched := bytes.Replace(data, []byte(cocoaUsesOld), []byte(cocoaUsesNew), 1)
		if err := os.WriteFile(p, patched, 0o644); err != nil {
			restore()
			return nil, fmt.Errorf("cocoa compat: write %s: %w", p, err)
		}
		rn.Logf("  cocoa compat: added CocoaApplication to %s", rel)
	}
	return restore, nil
}
