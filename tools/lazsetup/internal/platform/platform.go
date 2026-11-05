// Package platform normalizes OS/arch names and derives the naming variants
// used by Lazarus, FPC, SourceForge and Docker.
package platform

import (
	"fmt"
	"runtime"
	"strings"
)

// Target is a normalized OS/Arch pair using Go naming.
type Target struct {
	OS   string
	Arch string
}

func (t Target) String() string { return t.OS + "/" + t.Arch }

var osAliases = map[string]string{
	"windows": "windows", "win": "windows", "win32": "windows", "win64": "windows",
	"linux": "linux", "gnu/linux": "linux",
	"darwin": "darwin", "macos": "darwin", "mac": "darwin", "osx": "darwin",
}

var archAliases = map[string]string{
	"386": "386", "i386": "386", "i686": "386", "x86": "386", "win32": "386",
	"amd64": "amd64", "x64": "amd64", "x86_64": "amd64", "x86-64": "amd64", "win64": "amd64",
	"arm64": "arm64", "aarch64": "arm64", "arm64v8": "arm64",
	"arm": "arm", "armv7": "arm", "arm32v7": "arm", "armhf": "arm",
}

// Names holds every derived naming variant used by configuration templates.
type Names struct {
	OS, Arch        string
	WinBits         string // 32 | 64
	WinTag          string // win32 | win64
	FPCArch         string // i386 | x86_64 | aarch64 | arm
	FPCSuffix       string // i386-linux | x86_64-linux | ...
	MacArch         string // x86_64 | aarch64
	MacDir          string // x86-64 | aarch64 (SourceForge directory name)
	DebArch         string // i386 | amd64 | arm64 | armhf
	LibExt          string // dll | so | dylib
	LazTarget       string // x86_64-win64 | aarch64-linux | ... ($(TargetCPU)-$(TargetOS))
	ExeSuffix       string // .exe | ""
	PathSep         string // ; | :
	DockerPlatform  string // linux/amd64 | linux/arm64 | ...
	ContainerPrefix string // i386/ | arm64v8/ | ...
}

// Normalize converts user supplied names into Go GOOS/GOARCH names. Empty
// values fall back to the host platform.
func Normalize(osName, archName string) (Target, error) {
	if osName == "" {
		osName = runtime.GOOS
	}
	if archName == "" {
		archName = runtime.GOARCH
	}
	normOS, ok := osAliases[strings.ToLower(strings.TrimSpace(osName))]
	if !ok {
		return Target{}, fmt.Errorf("unsupported OS %q (use windows, linux or darwin)", osName)
	}
	normArch, ok := archAliases[strings.ToLower(strings.TrimSpace(archName))]
	if !ok {
		return Target{}, fmt.Errorf("unsupported architecture %q (use 386, amd64, arm or arm64)", archName)
	}
	return Target{OS: normOS, Arch: normArch}, nil
}

// Host returns the normalized platform this binary runs on.
func Host() Target {
	t, _ := Normalize(runtime.GOOS, runtime.GOARCH)
	return t
}

// Names derives all naming variants of a target.
func (t Target) Names() Names {
	n := Names{
		OS: t.OS, Arch: t.Arch,
		MacArch: "x86_64", MacDir: "x86-64",
		DebArch: "amd64", FPCArch: "x86_64",
		LibExt: "so", PathSep: ":",
	}
	switch t.Arch {
	case "386":
		n.WinBits, n.WinTag = "32", "win32"
		n.FPCArch, n.DebArch = "i386", "i386"
		n.MacArch, n.MacDir = "x86_64", "x86-64"
		n.DockerPlatform, n.ContainerPrefix = "linux/386", "i386/"
	case "amd64":
		n.WinBits, n.WinTag = "64", "win64"
		n.DockerPlatform = "linux/amd64"
	case "arm64":
		n.WinBits, n.WinTag = "64", "win64"
		n.FPCArch, n.DebArch = "aarch64", "arm64"
		n.MacArch, n.MacDir = "aarch64", "aarch64"
		n.DockerPlatform, n.ContainerPrefix = "linux/arm64", "arm64v8/"
	case "arm":
		n.WinBits, n.WinTag = "32", "win32"
		n.FPCArch, n.DebArch = "arm", "armhf"
		n.DockerPlatform, n.ContainerPrefix = "linux/arm/v7", "arm32v7/"
	}
	n.FPCSuffix = n.FPCArch + "-linux"
	// Lazarus expands $(TargetCPU)-$(TargetOS) into these values. They appear
	// in the .lpi Target/Filename of the Debug_* build modes.
	cpu := map[string]string{"386": "i386", "amd64": "x86_64", "arm": "arm", "arm64": "aarch64"}[t.Arch]
	lazOS := map[string]string{"windows": "win", "linux": "linux", "darwin": "darwin"}[t.OS]
	if t.OS == "windows" {
		lazOS = map[string]string{"386": "win32", "amd64": "win64"}[t.Arch]
	}
	n.LazTarget = cpu + "-" + lazOS
	switch t.OS {
	case "windows":
		n.LibExt, n.ExeSuffix, n.PathSep = "dll", ".exe", ";"
		n.DockerPlatform = ""
	case "darwin":
		n.LibExt = "dylib"
		n.DockerPlatform = ""
	}
	return n
}
