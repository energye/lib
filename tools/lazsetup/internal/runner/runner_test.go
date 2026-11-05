package runner

import (
	"strings"
	"testing"
)

func TestContainerCommandKeepsSession(t *testing.T) {
	got := ContainerCommand("docker", "ubuntu:20.04", "linux/amd64",
		"/home/runner/work/lib/lib", "/app", "/app", "/bin/sh", "lazsetup-linux-amd64",
		[]string{"apt-get update -q -y"},
		[]string{`cd "/app" && "/toolchain/lazbuild" -B "liblcl.lpi"`},
		nil,
		Mount{Host: "/home/runner/.lazsetup/lazarus", Guest: "/toolchain"})
	for _, want := range []string{
		"docker inspect lazsetup-linux-amd64",
		"docker run -d --name lazsetup-linux-amd64 --platform linux/amd64",
		"sleep infinity",
		"apt-get update -q -y",
		`docker exec -w "/app" lazsetup-linux-amd64 /bin/sh -c`,
		"lazbuild",
	} {
		if !strings.Contains(got, want) {
			t.Errorf("session command missing %q\n%s", want, got)
		}
	}
	if strings.Contains(got, "run --rm") {
		t.Errorf("named session must not be one-shot: %s", got)
	}
}

func TestContainerCommandOneShotWithoutName(t *testing.T) {
	got := ContainerCommand("docker", "ubuntu:20.04", "", "/host", "/app", "/app", "/bin/sh", "",
		[]string{"apt-get update"}, []string{"make all"}, nil)
	if !strings.Contains(got, "run --rm") || strings.Contains(got, "docker exec") {
		t.Errorf("unnamed container should stay one-shot: %s", got)
	}
}

// The i386 build container needs seccomp=unconfined: Docker's default seccomp
// profile denies the 32-bit socket syscalls glibc uses for DNS, so apt-get
// fails with "Temporary failure resolving archive.debian.org". Only targets
// that configure securityOpt should get the relaxed profile.
func TestContainerCommandSecurityOpt(t *testing.T) {
	got := ContainerCommand("docker", "i386/debian:11", "linux/386",
		"/host", "/app", "/app", "/bin/sh", "lazsetup-linux-386",
		[]string{"apt-get update"}, []string{"make all"},
		[]string{"seccomp=unconfined"})
	idx := strings.Index(got, "--security-opt 'seccomp=unconfined'")
	if idx < 0 {
		t.Fatalf("named container missing security opt: %s", got)
	}
	if create := strings.Index(got, "docker run -d"); idx < create {
		t.Errorf("security opt must belong to docker run -d: %s", got)
	}
	oneShot := ContainerCommand("docker", "i386/debian:11", "linux/386",
		"/host", "/app", "/app", "/bin/sh", "",
		[]string{"apt-get update"}, []string{"make all"},
		[]string{"seccomp=unconfined"})
	if !strings.Contains(oneShot, "--security-opt 'seccomp=unconfined'") {
		t.Errorf("one-shot container missing security opt: %s", oneShot)
	}
	plain := ContainerCommand("docker", "amd64/debian:11", "linux/amd64",
		"/host", "/app", "/app", "/bin/sh", "lazsetup-linux-amd64",
		[]string{"apt-get update"}, []string{"make all"}, nil)
	if strings.Contains(plain, "--security-opt") {
		t.Errorf("unconfigured container must not weaken seccomp: %s", plain)
	}
}
