// Package build - darwin-only CEF4Delphi Cocoa compatibility.
//
// CEF4Delphi's uCEFLazarusCocoa.pas was written against old Lazarus versions.
// Two constructs no longer exist in Lazarus 4.8:
//  1. TCocoaApplication moved out of CocoaInt into its own CocoaApplication
//     unit, so the old uses clause leaves the type unresolved.
//  2. TCocoaWidgetSet no longer has an NSApp member; the global NSApp is
//     used instead (cocoaint.pas itself does TCocoaApplication(NSApp)).
//
// The owner does not want vendored lib source files changed or committed, so
// we apply these text substitutions only for the duration of a darwin build
// and restore the original bytes unconditionally.
package build

import (
	"bytes"
	"fmt"
	"os"
	"path/filepath"

	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

type cocoaFix struct {
	old string
	new string
}

var cocoaFixes = []cocoaFix{
	{
		old: "CocoaAll, CocoaInt, Cocoa_Extra,",
		new: "CocoaAll, CocoaInt, Cocoa_Extra, CocoaApplication,",
	},
	{
		old: "CocoaWidgetSet.NSApp",
		new: "NSApplication(NSApp)",
	},
}

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

// patchCocoaCompat applies the darwin CEF4Delphi compatibility fixes to every
// CEF Cocoa unit that still has the old form. It returns a restore function
// that the caller MUST defer: the repository content is never left modified,
// on success, failure or panic.
//
// Missing files, already-patched constructs and unknown file layouts are
// skipped, so a future CEF upgrade that fixes its own source remains a no-op.
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
		patched := data
		applied := 0
		for _, f := range cocoaFixes {
			if bytes.Contains(patched, []byte(f.new)) {
				continue
			}
			if !bytes.Contains(patched, []byte(f.old)) {
				rn.Logf("  cocoa compat: %s has no %q, skipping that fix", rel, f.old)
				continue
			}
			patched = bytes.Replace(patched, []byte(f.old), []byte(f.new), 1)
			applied++
		}
		if applied == 0 {
			continue
		}
		backups = append(backups, fileBackup{path: p, data: data})
		if err := os.WriteFile(p, patched, 0o644); err != nil {
			restore()
			return nil, fmt.Errorf("cocoa compat: write %s: %w", p, err)
		}
		rn.Logf("  cocoa compat: applied %d fix(es) to %s", applied, rel)
	}
	return restore, nil
}
