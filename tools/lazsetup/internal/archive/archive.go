// Package archive extracts the artifact kinds used by Lazarus/FPC installers
// and creates release zip files. Standard library only.
package archive

import (
	"archive/tar"
	"archive/zip"
	"compress/gzip"
	"fmt"
	"io"
	"os"
	"os/exec"
	"path/filepath"
	"strconv"
	"strings"
)

// Extract unpacks src into dest. kind: raw|zip|tar|targz|deb.
func Extract(kind, src, dest string, strip int) error {
	switch strings.ToLower(kind) {
	case "", "raw", "none":
		return copyFile(src, dest)
	case "zip":
		return extractZip(src, dest, strip)
	case "tar":
		return extractTar(src, dest, strip, false)
	case "targz", "tar.gz":
		return extractTar(src, dest, strip, true)
	case "deb":
		return extractDeb(src, dest, strip)
	default:
		return fmt.Errorf("unsupported archive kind %q", kind)
	}
}

func copyFile(src, dest string) error {
	if fi, err := os.Stat(dest); err == nil && fi.IsDir() {
		dest = filepath.Join(dest, filepath.Base(src))
	} else if strings.HasSuffix(dest, "/") || strings.HasSuffix(dest, `\`) {
		if err := os.MkdirAll(dest, 0o755); err != nil {
			return err
		}
		dest = filepath.Join(dest, filepath.Base(src))
	}
	if err := os.MkdirAll(filepath.Dir(dest), 0o755); err != nil {
		return err
	}
	in, err := os.Open(src)
	if err != nil {
		return err
	}
	defer in.Close()
	out, err := os.OpenFile(dest, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0o644)
	if err != nil {
		return err
	}
	defer out.Close()
	_, err = io.Copy(out, in)
	return err
}

func stripPath(name string, strip int) string {
	name = strings.ReplaceAll(name, `\`, "/")
	parts := make([]string, 0, 8)
	for _, p := range strings.Split(name, "/") {
		if p == "" || p == "." {
			continue
		}
		parts = append(parts, p)
	}
	if strip >= len(parts) {
		return ""
	}
	return strings.Join(parts[strip:], "/")
}

// safeJoin prevents path traversal (zip slip / tar slip).
func safeJoin(dest, name string) (string, error) {
	if name == "" {
		return "", fmt.Errorf("empty archive entry")
	}
	name = filepath.FromSlash(name)
	if filepath.IsAbs(name) || strings.HasPrefix(name, "/") || (len(name) > 1 && name[1] == ':') {
		return "", fmt.Errorf("unsafe absolute path in archive: %s", name)
	}
	clean := filepath.Clean(name)
	if clean == ".." || strings.HasPrefix(clean, ".."+string(os.PathSeparator)) {
		return "", fmt.Errorf("unsafe parent path in archive: %s", name)
	}
	return filepath.Join(dest, clean), nil
}

func extractZip(src, dest string, strip int) error {
	zr, err := zip.OpenReader(src)
	if err != nil {
		return err
	}
	defer zr.Close()
	if err := os.MkdirAll(dest, 0o755); err != nil {
		return err
	}
	for _, f := range zr.File {
		name := stripPath(f.Name, strip)
		if name == "" {
			continue
		}
		target, err := safeJoin(dest, name)
		if err != nil {
			return err
		}
		if f.FileInfo().IsDir() {
			if err := os.MkdirAll(target, 0o755); err != nil {
				return err
			}
			continue
		}
		if err := os.MkdirAll(filepath.Dir(target), 0o755); err != nil {
			return err
		}
		rc, err := f.Open()
		if err != nil {
			return err
		}
		mode := f.Mode().Perm()
		if mode == 0 {
			mode = 0o644
		}
		out, err := os.OpenFile(target, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, mode)
		if err != nil {
			rc.Close()
			return err
		}
		_, err = io.Copy(out, rc)
		out.Close()
		rc.Close()
		if err != nil {
			return err
		}
	}
	return nil
}

func extractTar(src, dest string, strip int, gzipped bool) error {
	f, err := os.Open(src)
	if err != nil {
		return err
	}
	defer f.Close()
	var reader io.Reader = f
	if gzipped {
		gz, err := gzip.NewReader(f)
		if err != nil {
			return err
		}
		defer gz.Close()
		reader = gz
	}
	tr := tar.NewReader(reader)
	if err := os.MkdirAll(dest, 0o755); err != nil {
		return err
	}
	for {
		hdr, err := tr.Next()
		if err == io.EOF {
			break
		}
		if err != nil {
			return err
		}
		name := stripPath(hdr.Name, strip)
		if name == "" {
			continue
		}
		target, err := safeJoin(dest, name)
		if err != nil {
			return err
		}
		switch hdr.Typeflag {
		case tar.TypeDir:
			if err := os.MkdirAll(target, 0o755); err != nil {
				return err
			}
		case tar.TypeReg, tar.TypeRegA:
			if err := os.MkdirAll(filepath.Dir(target), 0o755); err != nil {
				return err
			}
			mode := hdr.FileInfo().Mode().Perm()
			if mode == 0 {
				mode = 0o644
			}
			out, err := os.OpenFile(target, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, mode)
			if err != nil {
				return err
			}
			_, err = io.Copy(out, tr)
			out.Close()
			if err != nil {
				return err
			}
		case tar.TypeSymlink:
			link := hdr.Linkname
			if filepath.IsAbs(link) || strings.HasPrefix(link, "..") {
				return fmt.Errorf("unsafe symlink in archive: %s -> %s", hdr.Name, link)
			}
			_ = os.MkdirAll(filepath.Dir(target), 0o755)
			_ = os.Remove(target)
			_ = os.Symlink(link, target)
		}
	}
	return nil
}

// extractDeb reads the `ar` container and unpacks data.tar.* without root.
// Use kind "dpkg" (handled by setup) when a real system install is wanted.
func extractDeb(src, dest string, strip int) error {
	f, err := os.Open(src)
	if err != nil {
		return err
	}
	defer f.Close()
	magic := make([]byte, 8)
	if _, err := io.ReadFull(f, magic); err != nil || string(magic) != "!<arch>\n" {
		return fmt.Errorf("%s is not a Debian ar archive", src)
	}
	for {
		header := make([]byte, 60)
		if _, err := io.ReadFull(f, header); err == io.EOF {
			break
		} else if err != nil {
			return err
		}
		name := strings.TrimSuffix(strings.TrimSpace(string(header[:16])), "/")
		size, err := strconv.ParseInt(strings.TrimSpace(string(header[48:58])), 10, 64)
		if err != nil {
			return fmt.Errorf("invalid ar member size for %s: %w", name, err)
		}
		if strings.HasPrefix(name, "data.tar") {
			tmp, err := os.CreateTemp("", "lazsetup-deb-*.tar")
			if err != nil {
				return err
			}
			tmpPath := tmp.Name()
			if _, err := io.CopyN(tmp, f, size); err != nil {
				tmp.Close()
				os.Remove(tmpPath)
				return err
			}
			tmp.Close()
			defer os.Remove(tmpPath)
			switch {
			case strings.HasSuffix(name, ".gz"):
				return extractTar(tmpPath, dest, strip, true)
			case strings.HasSuffix(name, ".xz"), strings.HasSuffix(name, ".zst"):
				cmd := exec.Command("tar", "-xf", tmpPath, "-C", dest)
				cmd.Stdout, cmd.Stderr = os.Stdout, os.Stderr
				return cmd.Run()
			default:
				return extractTar(tmpPath, dest, strip, false)
			}
		}
		if _, err := io.CopyN(io.Discard, f, size); err != nil {
			return err
		}
		if size%2 == 1 {
			_, _ = io.CopyN(io.Discard, f, 1)
		}
	}
	return fmt.Errorf("no data.tar.* member found in %s (use kind=dpkg for a system install)", src)
}

// Zip writes entries (zip name -> local file path) into out.
func Zip(out string, entries map[string]string) error {
	if err := os.MkdirAll(filepath.Dir(out), 0o755); err != nil {
		return err
	}
	f, err := os.Create(out)
	if err != nil {
		return err
	}
	defer f.Close()
	zw := zip.NewWriter(f)
	for name, src := range entries {
		in, err := os.Open(src)
		if err != nil {
			zw.Close()
			return err
		}
		w, err := zw.Create(name)
		if err != nil {
			in.Close()
			zw.Close()
			return err
		}
		_, err = io.Copy(w, in)
		in.Close()
		if err != nil {
			zw.Close()
			return err
		}
	}
	return zw.Close()
}
