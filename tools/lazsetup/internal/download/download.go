// Package download implements a resumable, checksum-verifying HTTP downloader
// with a local content cache. It deliberately uses only the standard library.
package download

import (
	"crypto/sha256"
	"encoding/hex"
	"errors"
	"fmt"
	"io"
	"net/http"
	"net/url"
	"os"
	"path"
	"path/filepath"
	"strings"
	"time"
)

type Options struct {
	CacheDir string
	Retries  int
	Timeout  time.Duration
	NoCache  bool
	Headers  map[string]string
	Out      io.Writer
	DryRun   bool
	Quiet    bool
}

type Result struct {
	Path      string
	Size      int64
	SHA256    string
	FromCache bool
}

type statusError struct{ code int }

func (e *statusError) Error() string { return fmt.Sprintf("HTTP %d", e.code) }

// htmlError means the server returned a web page (bot challenge / 404 page)
// instead of the requested artifact. Retrying the same URL cannot help, but
// switching to the next mirror can, so it is non-retryable per URL.
type htmlError struct{ detail string }

func (e *htmlError) Error() string { return e.detail }

func retryable(err error) bool {
	var se *statusError
	if errors.As(err, &se) {
		return se.code >= 500 || se.code == 408 || se.code == 429
	}
	var he *htmlError
	if errors.As(err, &he) {
		return false
	}
	return true
}

type progressWriter struct {
	total int64
	next  int64
	out   io.Writer
	quiet bool
}

func (p *progressWriter) Write(b []byte) (int, error) {
	n := len(b)
	p.total += int64(n)
	if !p.quiet && p.total >= p.next {
		fmt.Fprintf(p.out, "    downloaded %s\n", humanBytes(p.total))
		p.next = p.total + 10<<20
	}
	return n, nil
}

func humanBytes(n int64) string {
	const unit = 1024
	if n < unit {
		return fmt.Sprintf("%d B", n)
	}
	div, exp := int64(unit), 0
	for v := n / unit; v >= unit; v /= unit {
		div *= unit
		exp++
	}
	return fmt.Sprintf("%.1f %cB", float64(n)/float64(div), "KMGTPE"[exp])
}

// Fetch downloads the first usable URL into CacheDir and verifies the result.
// When CacheDir already holds a matching file, no network request is made.
func Fetch(urls []string, expectedSHA string, expectedSize int64, o Options) (Result, error) {
	clean := make([]string, 0, len(urls))
	for _, u := range urls {
		if strings.TrimSpace(u) != "" {
			clean = append(clean, strings.TrimSpace(u))
		}
	}
	if len(clean) == 0 {
		return Result{}, fmt.Errorf("no download URL configured")
	}
	if o.Out == nil {
		o.Out = io.Discard
	}
	if o.Retries <= 0 {
		o.Retries = 3
	}
	if o.Timeout <= 0 {
		o.Timeout = 30 * time.Minute
	}
	if o.CacheDir == "" {
		o.CacheDir = filepath.Join(os.TempDir(), "lazsetup-cache")
	}
	if err := os.MkdirAll(o.CacheDir, 0o755); err != nil {
		return Result{}, err
	}
	final, err := cachePath(o.CacheDir, clean[0])
	if err != nil {
		return Result{}, err
	}
	if !o.NoCache {
		if sum, n, err := verify(final, expectedSHA, expectedSize); err == nil {
			fmt.Fprintf(o.Out, "  cache hit: %s (%s)\n", filepath.Base(final), humanBytes(n))
			return Result{Path: final, Size: n, SHA256: sum, FromCache: true}, nil
		}
	}
	if o.DryRun {
		fmt.Fprintf(o.Out, "  [dry-run] GET %s -> %s\n", clean[0], final)
		return Result{Path: final}, nil
	}
	if expectedSHA == "" && !o.Quiet {
		fmt.Fprintf(o.Out, "  warning: no sha256 configured for %s; verifying size only\n", path.Base(clean[0]))
	}

	client := &http.Client{
		Timeout: o.Timeout,
		Transport: &http.Transport{
			Proxy: http.ProxyFromEnvironment,
		},
	}
	part := final + ".part"
	var lastErr error
	for _, rawURL := range clean {
		for attempt := 0; attempt < o.Retries; attempt++ {
			if attempt > 0 {
				wait := time.Duration(1<<uint(attempt-1)) * time.Second
				fmt.Fprintf(o.Out, "  retry %d/%d in %s (%v)\n", attempt+1, o.Retries, wait, lastErr)
				time.Sleep(wait)
			}
			if err := attemptDownload(client, rawURL, part, o); err != nil {
				lastErr = err
				if !retryable(err) {
					break
				}
				continue
			}
			sum, n, err := verify(part, expectedSHA, expectedSize)
			if err != nil {
				lastErr = err
				_ = os.Remove(part)
				break
			}
			if err := os.Rename(part, final); err != nil {
				return Result{}, err
			}
			fmt.Fprintf(o.Out, "  saved: %s (%s, sha256=%s)\n", final, humanBytes(n), sum[:12])
			return Result{Path: final, Size: n, SHA256: sum}, nil
		}
	}
	return Result{}, fmt.Errorf("download failed for %s: %w", clean[0], lastErr)
}

func attemptDownload(client *http.Client, rawURL, part string, o Options) error {
	req, err := http.NewRequest(http.MethodGet, rawURL, nil)
	if err != nil {
		return err
	}
	req.Header.Set("User-Agent", "Mozilla/5.0 (compatible; lazsetup/1.0; +https://github.com/energye/lib)")
	req.Header.Set("Accept", "*/*")
	if u, e := url.Parse(rawURL); e == nil {
		req.Header.Set("Referer", u.Scheme+"://"+u.Host+"/")
	}
	for k, v := range o.Headers {
		req.Header.Set(k, v)
	}
	var offset int64
	if fi, err := os.Stat(part); err == nil && fi.Size() > 0 {
		offset = fi.Size()
		req.Header.Set("Range", fmt.Sprintf("bytes=%d-", offset))
	}
	resp, err := client.Do(req)
	if err != nil {
		return err
	}
	defer resp.Body.Close()
	switch resp.StatusCode {
	case http.StatusOK:
		offset = 0
	case http.StatusPartialContent:
	case http.StatusRequestedRangeNotSatisfiable:
		return nil
	default:
		return &statusError{code: resp.StatusCode}
	}
	if ct := strings.ToLower(resp.Header.Get("Content-Type")); strings.Contains(ct, "text/html") {
		return &htmlError{detail: fmt.Sprintf("server returned an HTML page (Content-Type %s) instead of the installer; likely a bot challenge or 404 page", ct)}
	}
	flags := os.O_CREATE | os.O_WRONLY
	if offset > 0 {
		flags |= os.O_APPEND
	} else {
		flags |= os.O_TRUNC
	}
	f, err := os.OpenFile(part, flags, 0o644)
	if err != nil {
		return err
	}
	defer f.Close()
	pw := &progressWriter{out: o.Out, quiet: o.Quiet, next: 10 << 20}
	_, err = io.Copy(io.MultiWriter(f, pw), resp.Body)
	return err
}

func verify(file, expectedSHA string, expectedSize int64) (string, int64, error) {
	f, err := os.Open(file)
	if err != nil {
		return "", 0, err
	}
	defer f.Close()
	h := sha256.New()
	n, err := io.Copy(h, f)
	if err != nil {
		return "", 0, err
	}
	sum := hex.EncodeToString(h.Sum(nil))
	// A cached or mislabelled HTML challenge page must never reach the
	// installer. Check the leading bytes as well as Content-Type, because some
	// CDNs omit or lie about the latter.
	if n > 0 {
		if _, err := f.Seek(0, io.SeekStart); err == nil {
			head := make([]byte, 512)
			m, _ := f.Read(head)
			low := strings.ToLower(string(head[:m]))
			if strings.Contains(low, "<!doctype html") || strings.Contains(low, "<html") ||
				strings.Contains(low, "just a moment") {
				return sum, n, &htmlError{detail: "downloaded file is an HTML page, not an installer (bot challenge / 404 / mirror error)"}
			}
		}
	}
	if expectedSize > 0 && n != expectedSize {
		return sum, n, fmt.Errorf("size mismatch: got %d, want %d", n, expectedSize)
	}
	if expectedSHA != "" && !strings.EqualFold(sum, expectedSHA) {
		return sum, n, fmt.Errorf("sha256 mismatch: got %s, want %s", sum, expectedSHA)
	}
	return sum, n, nil
}

// Verify exposes checksum verification for the "verify" command.
func Verify(file, expectedSHA string, expectedSize int64) (string, int64, error) {
	return verify(file, expectedSHA, expectedSize)
}

func cachePath(dir, rawURL string) (string, error) {
	u, err := url.Parse(rawURL)
	if err != nil {
		return "", err
	}
	name := path.Base(u.Path)
	if name == "" || name == "." || name == "/" {
		name = "download.bin"
	}
	name = sanitize(name)
	sum := sha256.Sum256([]byte(rawURL))
	return filepath.Join(dir, hex.EncodeToString(sum[:8])+"-"+name), nil
}

func sanitize(name string) string {
	replacer := strings.NewReplacer("/", "_", "\\", "_", ":", "_", "*", "_", "?", "_", "\"", "_", "<", "_", ">", "_", "|", "_")
	return replacer.Replace(name)
}
