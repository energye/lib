package setup

import (
	"archive/tar"
	"bytes"
	"compress/gzip"
	"crypto/sha256"
	"encoding/hex"
	"fmt"
	"io"
	"net/http"
	"net/http/httptest"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/energye/lib/tools/lazsetup/internal/config"
	"github.com/energye/lib/tools/lazsetup/internal/runner"
)

// makeTarGz builds a small archive with a single top-level directory, like the
// official lazarus-<ver>-0.tar.gz. strip=1 must flatten it into prefix.
func makeTarGz(t *testing.T) []byte {
	t.Helper()
	var buf bytes.Buffer
	gz := gzip.NewWriter(&buf)
	tw := tar.NewWriter(gz)
	files := map[string]string{
		"lazarus/Makefile":     "all:\n\techo ok\n",
		"lazarus/lazbuild.sh":  "#!/bin/sh\necho lazbuild\n",
		"lazarus/ide/main.pas": "unit main;\n",
	}
	for name, body := range files {
		if err := tw.WriteHeader(&tar.Header{
			Name: name, Mode: 0o644, Size: int64(len(body)), Typeflag: tar.TypeReg,
		}); err != nil {
			t.Fatal(err)
		}
		if _, err := tw.Write([]byte(body)); err != nil {
			t.Fatal(err)
		}
	}
	if err := tw.Close(); err != nil {
		t.Fatal(err)
	}
	if err := gz.Close(); err != nil {
		t.Fatal(err)
	}
	return buf.Bytes()
}

func writeConfig(t *testing.T, dir, url, sum string, size int64) string {
	t.Helper()
	cfg := fmt.Sprintf(`{
  "schema": 1,
  "defaults": {
    "lazarus": "4.8", "work": %q, "prefix": %q, "cache": %q,
    "retries": 1, "timeout": "1m"
  },
  "releases": { "4.8": { "fpc": "3.2.2" } },
  "profiles": {
    "test": {
      "os": ["windows"], "arch": ["amd64"],
      "components": [
        { "id": "lazarus-src", "url": %q, "kind": "targz",
          "dest": "${prefix}", "strip": 1, "sha256": %q, "size": %d }
      ]
    }
  },
  "targets": { "windows/amd64": { "profile": "test" } }
}`,
		filepath.ToSlash(filepath.Join(dir, "work")),
		filepath.ToSlash(filepath.Join(dir, "prefix")),
		filepath.ToSlash(filepath.Join(dir, "cache")),
		url, sum, size)
	p := filepath.Join(dir, "toolchain.json")
	if err := os.WriteFile(p, []byte(cfg), 0o644); err != nil {
		t.Fatal(err)
	}
	return p
}

func resolve(t *testing.T, cfgPath string) *config.Resolved {
	t.Helper()
	c, err := config.Load(cfgPath)
	if err != nil {
		t.Fatal(err)
	}
	r, err := c.Resolve(config.Options{Lazarus: "4.8", OS: "windows", Arch: "amd64"})
	if err != nil {
		t.Fatal(err)
	}
	return r
}

// TestSetupEndToEnd exercises download -> sha256/size verification -> tar.gz
// extraction with strip -> cache reuse, entirely against a local HTTP server.
func TestSetupEndToEnd(t *testing.T) {
	payload := makeTarGz(t)
	sum := sha256.Sum256(payload)
	hexSum := hex.EncodeToString(sum[:])

	server := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, req *http.Request) {
		if req.Header.Get("Range") != "" {
			w.WriteHeader(http.StatusPartialContent)
		}
		w.Header().Set("Content-Type", "application/gzip")
		_, _ = w.Write(payload)
	}))
	defer server.Close()

	dir := t.TempDir()
	cfgPath := writeConfig(t, dir, server.URL+"/lazarus-4.8-0.tar.gz", hexSum, int64(len(payload)))
	r := resolve(t, cfgPath)
	rn := runner.New(io.Discard)

	res, err := Setup(Options{R: r, Runner: rn})
	if err != nil {
		t.Fatalf("setup failed: %v", err)
	}
	if len(res.Files) != 1 {
		t.Fatalf("expected 1 downloaded file, got %d", len(res.Files))
	}
	if res.Files[0].SHA256 != hexSum {
		t.Fatalf("sha256 mismatch: %s", res.Files[0].SHA256)
	}
	for _, name := range []string{"Makefile", "lazbuild.sh", filepath.Join("ide", "main.pas")} {
		if _, err := os.Stat(filepath.Join(r.Prefix, name)); err != nil {
			t.Errorf("extracted file missing (%s): %v", name, err)
		}
	}
	if _, err := os.Stat(filepath.Join(r.Prefix, "lazarus", "Makefile")); err == nil {
		t.Error("strip=1 did not flatten the top-level lazarus/ directory")
	}

	// A second run must be served from the local cache without an HTTP request.
	requests := 0
	server.Config.Handler = http.HandlerFunc(func(w http.ResponseWriter, req *http.Request) {
		requests++
		w.WriteHeader(http.StatusInternalServerError)
	})
	res2, err := Setup(Options{R: r, Runner: runner.New(io.Discard)})
	if err != nil {
		t.Fatalf("second setup (cache) failed: %v", err)
	}
	if !res2.Files[0].FromCache || requests != 0 {
		t.Errorf("expected cache hit without HTTP, fromCache=%v requests=%d", res2.Files[0].FromCache, requests)
	}
}

// TestSetupRejectsHTMLChallenge makes sure a Cloudflare / 404 HTML page can
// never be handed to the installer as if it were an .exe or .tar.gz.
func TestSetupRejectsHTMLChallenge(t *testing.T) {
	html := []byte("<!DOCTYPE html><html><title>Just a moment...</title></html>")
	server := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, req *http.Request) {
		w.Header().Set("Content-Type", "text/html; charset=utf-8")
		_, _ = w.Write(html)
	}))
	defer server.Close()

	dir := t.TempDir()
	cfgPath := writeConfig(t, dir, server.URL+"/lazarus-4.8-0.tar.gz", "", 0)
	r := resolve(t, cfgPath)
	_, err := Setup(Options{R: r, Runner: runner.New(io.Discard)})
	if err == nil {
		t.Fatal("expected setup to reject an HTML challenge page")
	}
	if !strings.Contains(err.Error(), "HTML") {
		t.Fatalf("unexpected error: %v", err)
	}
}

// TestSetupRejectsChecksumMismatch verifies that a corrupted download is not
// silently installed when sha256 is configured.
func TestSetupRejectsChecksumMismatch(t *testing.T) {
	payload := makeTarGz(t)
	server := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, req *http.Request) {
		w.Header().Set("Content-Type", "application/gzip")
		_, _ = w.Write(payload)
	}))
	defer server.Close()

	dir := t.TempDir()
	cfgPath := writeConfig(t, dir, server.URL+"/lazarus.tar.gz", strings.Repeat("0", 64), int64(len(payload)))
	r := resolve(t, cfgPath)
	_, err := Setup(Options{R: r, Runner: runner.New(io.Discard)})
	if err == nil || !strings.Contains(err.Error(), "sha256 mismatch") {
		t.Fatalf("expected sha256 mismatch, got %v", err)
	}
}
