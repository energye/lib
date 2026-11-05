//go:build windows

package runner

import (
	"os/exec"
	"syscall"
)

// prepareCmd bypasses Go's Windows argument escaping.
//
// exec.Command("cmd.exe", "/C", command) would escape the inner double quotes
// as \", which cmd.exe does not understand, so a quoted executable path such
// as "C:\...\lazbuild.exe" ends up being treated as part of the command name.
// Supplying CmdLine directly lets /S strip only our outer quotes and leaves
// the command's own quoting intact.
func prepareCmd(command string) *exec.Cmd {
	cmd := exec.Command("cmd.exe")
	cmd.SysProcAttr = &syscall.SysProcAttr{
		CmdLine: `cmd.exe /D /S /C "` + command + `"`,
	}
	return cmd
}
