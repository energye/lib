//go:build !windows

package runner

import "os/exec"

func prepareCmd(command string) *exec.Cmd {
	return exec.Command("/bin/sh", "-c", command)
}
