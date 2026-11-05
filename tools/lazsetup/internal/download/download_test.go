package download

import (
	"crypto/sha256"
	"encoding/hex"
	"io"
	"net/http"
	"net/http/httptest"
	"os"
	"testing"
	"time"
)

const payload = "lazsetup download test payload"

func testOptions(dir string) Options {
	return Options{CacheDir: dir, Retries: 3, Timeout: 5 * time.Second, Quiet: true}
}

func checksum(s string) string {
	sum := sha256.Sum256([]byte(s))
	return hex.EncodeToString(sum[:])
}

func TestFetchVerifiesAndCaches(t *testing.T) {
	var hits int
	srv := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		hits++
		_, _ = io.WriteString(w, payload)
	}))
	defer srv.Close()
	dir := t.TempDir()
	url := srv.URL + "/lazarus.zip"
	o := testOptions(dir)

	res, err := Fetch([]string{url}, checksum(payload), int64(len(payload)), o)
	if err != nil {
		t.Fatal(err)
	}
	if res.FromCache || res.SHA256 != checksum(payload) || res.Size != int64(len(payload)) {
		t.Fatalf("unexpected result: %+v", res)
	}
	if _, err := os.Stat(res.Path); err != nil {
		t.Fatalf("download not saved: %v", err)
	}
	res2, err := Fetch([]string{url}, checksum(payload), int64(len(payload)), o)
	if err != nil {
		t.Fatal(err)
	}
	if !res2.FromCache || hits != 1 {
		t.Fatalf("cache not used (FromCache=%v, hits=%d)", res2.FromCache, hits)
	}
}

func TestFetchRejectsWrongChecksum(t *testing.T) {
	srv := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		_, _ = io.WriteString(w, payload)
	}))
	defer srv.Close()
	o := testOptions(t.TempDir())
	if _, err := Fetch([]string{srv.URL + "/f"}, checksum("something else"), 0, o); err == nil {
		t.Fatal("expected sha256 mismatch error")
	}
}

func TestFetchRetriesServerError(t *testing.T) {
	var hits int
	srv := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		hits++
		if hits < 2 {
			w.WriteHeader(http.StatusInternalServerError)
			return
		}
		_, _ = io.WriteString(w, payload)
	}))
	defer srv.Close()
	o := testOptions(t.TempDir())
	o.Retries = 3
	res, err := Fetch([]string{srv.URL + "/f"}, checksum(payload), 0, o)
	if err != nil {
		t.Fatalf("expected retry to succeed: %v", err)
	}
	if hits != 2 || res.Size != int64(len(payload)) {
		t.Fatalf("unexpected hits=%d result=%+v", hits, res)
	}
}

func TestFetchFallsBackToNextURL(t *testing.T) {
	var hits int
	srv := httptest.NewServer(http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		hits++
		if r.URL.Path == "/missing" {
			w.WriteHeader(http.StatusNotFound)
			return
		}
		_, _ = io.WriteString(w, payload)
	}))
	defer srv.Close()
	o := testOptions(t.TempDir())
	res, err := Fetch([]string{srv.URL + "/missing", srv.URL + "/ok"}, checksum(payload), 0, o)
	if err != nil {
		t.Fatal(err)
	}
	if hits != 2 || res.Size != int64(len(payload)) {
		t.Fatalf("fallback failed: hits=%d result=%+v", hits, res)
	}
}

func TestFetchRequiresURL(t *testing.T) {
	if _, err := Fetch(nil, "", 0, testOptions(t.TempDir())); err == nil {
		t.Fatal("expected error for empty URL list")
	}
}

func TestVerifyExposed(t *testing.T) {
	dir := t.TempDir()
	p := dir + "/f"
	if err := os.WriteFile(p, []byte(payload), 0o644); err != nil {
		t.Fatal(err)
	}
	sum, n, err := Verify(p, checksum(payload), int64(len(payload)))
	if err != nil || sum != checksum(payload) || n != int64(len(payload)) {
		t.Fatalf("Verify = %s %d %v", sum, n, err)
	}
}
