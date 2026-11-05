//go:build windows

package runner

import (
	"io"
	"strings"
	"testing"
)

// A quoted absolute executable followed by quoted arguments is exactly the
// shape of a lazbuild command line. cmd.exe /C used to mangle it because Go
// escapes the inner quotes as \".
func TestPrepareCmdQuotedExecutable(t *testing.T) {
	r := New(io.Discard)
	out, err := r.Output(`"C:\Windows\System32\where.exe" cmd.exe`)
	if err != nil {
		t.Fatalf("quoted executable failed: %v", err)
	}
	if !strings.Contains(strings.ToLower(out), "cmd.exe") {
		t.Fatalf("unexpected output: %q", out)
	}
}
