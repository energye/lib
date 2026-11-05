package archive

import (
	"archive/tar"
	"archive/zip"
	"compress/gzip"
	"os"
	"path/filepath"
	"strings"
	"testing"
)

func makeZip(t *testing.T, path string, entries map[string]string) {
	t.Helper()
	f, err := os.Create(path)
	if err != nil {
		t.Fatal(err)
	}
	defer f.Close()
	zw := zip.NewWriter(f)
	for name, content := range entries {
		w, err := zw.Create(name)
		if err != nil {
			t.Fatal(err)
		}
		if _, err := w.Write([]byte(content)); err != nil {
			t.Fatal(err)
		}
	}
	if err := zw.Close(); err != nil {
		t.Fatal(err)
	}
}

func makeTarGz(t *testing.T, path string, entries map[string]string) {
	t.Helper()
	f, err := os.Create(path)
	if err != nil {
		t.Fatal(err)
	}
	defer f.Close()
	gz := gzip.NewWriter(f)
	tw := tar.NewWriter(gz)
	for name, content := range entries {
		hdr := &tar.Header{Name: name, Mode: 0o644, Size: int64(len(content)), Typeflag: tar.TypeReg}
		if err := tw.WriteHeader(hdr); err != nil {
			t.Fatal(err)
		}
		if _, err := tw.Write([]byte(content)); err != nil {
			t.Fatal(err)
		}
	}
	if err := tw.Close(); err != nil {
		t.Fatal(err)
	}
	if err := gz.Close(); err != nil {
		t.Fatal(err)
	}
}

func TestExtractZip(t *testing.T) {
	dir := t.TempDir()
	src := filepath.Join(dir, "in.zip")
	dest := filepath.Join(dir, "out")
	makeZip(t, src, map[string]string{"pkg/readme.txt": "hello", "pkg/bin/tool": "binary"})
	if err := Extract("zip", src, dest, 0); err != nil {
		t.Fatal(err)
	}
	got, err := os.ReadFile(filepath.Join(dest, "pkg", "readme.txt"))
	if err != nil || string(got) != "hello" {
		t.Fatalf("unexpected content %q err=%v", got, err)
	}
}

func TestExtractZipRejectsTraversal(t *testing.T) {
	dir := t.TempDir()
	src := filepath.Join(dir, "evil.zip")
	makeZip(t, src, map[string]string{"../escaped.txt": "bad"})
	err := Extract("zip", src, filepath.Join(dir, "out"), 0)
	if err == nil || !strings.Contains(err.Error(), "unsafe") {
		t.Fatalf("expected unsafe path error, got %v", err)
	}
	if _, statErr := os.Stat(filepath.Join(dir, "escaped.txt")); statErr == nil {
		t.Fatal("archive escaped the destination directory")
	}
}

func TestExtractTarGzStrip(t *testing.T) {
	dir := t.TempDir()
	src := filepath.Join(dir, "in.tar.gz")
	dest := filepath.Join(dir, "out")
	makeTarGz(t, src, map[string]string{"lazarus/lazbuild.pas": "program", "lazarus/sub/u.pas": "unit"})
	if err := Extract("targz", src, dest, 1); err != nil {
		t.Fatal(err)
	}
	if _, err := os.Stat(filepath.Join(dest, "lazbuild.pas")); err != nil {
		t.Fatalf("strip did not remove top-level dir: %v", err)
	}
}

func TestZipOutput(t *testing.T) {
	dir := t.TempDir()
	src := filepath.Join(dir, "liblcl.so")
	if err := os.WriteFile(src, []byte("ELF"), 0o644); err != nil {
		t.Fatal(err)
	}
	out := filepath.Join(dir, "bins", "lcl.zip")
	if err := Zip(out, map[string]string{"liblcl.so": src}); err != nil {
		t.Fatal(err)
	}
	zr, err := zip.OpenReader(out)
	if err != nil {
		t.Fatal(err)
	}
	defer zr.Close()
	if len(zr.File) != 1 || zr.File[0].Name != "liblcl.so" {
		t.Fatalf("unexpected zip entries: %+v", zr.File)
	}
}

func TestUnsupportedKind(t *testing.T) {
	if err := Extract("rar", "x", "y", 0); err == nil {
		t.Fatal("expected error for unsupported kind")
	}
}
