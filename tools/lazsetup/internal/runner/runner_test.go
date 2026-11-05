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
		[]string{"apt-get update"}, []string{"make all"})
	if !strings.Contains(got, "run --rm") || strings.Contains(got, "docker exec") {
		t.Errorf("unnamed container should stay one-shot: %s", got)
	}
}
