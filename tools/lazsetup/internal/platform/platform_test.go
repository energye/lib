package platform

import "testing"

func TestNormalizeAliases(t *testing.T) {
	cases := []struct {
		os, arch string
		want     Target
	}{
		{"win64", "x64", Target{"windows", "amd64"}},
		{"macos", "aarch64", Target{"darwin", "arm64"}},
		{"linux", "arm32v7", Target{"linux", "arm"}},
		{"Windows", "i386", Target{"windows", "386"}},
		{"darwin", "x86_64", Target{"darwin", "amd64"}},
	}
	for _, c := range cases {
		got, err := Normalize(c.os, c.arch)
		if err != nil {
			t.Fatalf("Normalize(%q,%q): %v", c.os, c.arch, err)
		}
		if got != c.want {
			t.Errorf("Normalize(%q,%q) = %v, want %v", c.os, c.arch, got, c.want)
		}
	}
}

func TestNormalizeRejectsUnknown(t *testing.T) {
	if _, err := Normalize("plan9", "amd64"); err == nil {
		t.Error("expected error for unknown OS")
	}
	if _, err := Normalize("linux", "mips"); err == nil {
		t.Error("expected error for unknown arch")
	}
}

func TestNames(t *testing.T) {
	cases := []struct {
		target                  Target
		fpcArch, macDir, libExt string
	}{
		{Target{"linux", "386"}, "i386", "x86-64", "so"},
		{Target{"linux", "amd64"}, "x86_64", "x86-64", "so"},
		{Target{"linux", "arm"}, "arm", "x86-64", "so"},
		{Target{"linux", "arm64"}, "aarch64", "aarch64", "so"},
		{Target{"windows", "amd64"}, "x86_64", "x86-64", "dll"},
		{Target{"darwin", "arm64"}, "aarch64", "aarch64", "dylib"},
	}
	for _, c := range cases {
		n := c.target.Names()
		if n.FPCArch != c.fpcArch || n.MacDir != c.macDir || n.LibExt != c.libExt {
			t.Errorf("%s names = fpc:%s mac:%s lib:%s, want fpc:%s mac:%s lib:%s",
				c.target, n.FPCArch, n.MacDir, n.LibExt, c.fpcArch, c.macDir, c.libExt)
		}
		if n.FPCSuffix != n.FPCArch+"-linux" {
			t.Errorf("%s: FPCSuffix %q inconsistent with FPCArch %q", c.target, n.FPCSuffix, n.FPCArch)
		}
	}
}

func TestHostIsValid(t *testing.T) {
	h := Host()
	if h.OS == "" || h.Arch == "" {
		t.Fatalf("Host() returned incomplete target %v", h)
	}
	if _, err := Normalize(h.OS, h.Arch); err != nil {
		t.Fatalf("Host() target %v is not normalizable: %v", h, err)
	}
}
