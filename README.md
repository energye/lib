## lib lcl dll


### CEF_101.0.18

- 组件: Win32 GTK2 cocoa
- 架构: i386 x86_64 arm aarch64
- 自定义选项: 无
- 构建模式

| OS      | Mode                                     | Options |
|---------|------------------------------------------|---------|
| Windows | Win32    Win64                           | 无       |
| Linux   | Linux32 Linux64  LinuxARM32   LinuxARM64 | 无       |
| MacOS   | MacOSx64 MacOSARM64                      | 无       |

### CEF_106.1.1
- 组件: Win32 GTK2 cocoa
- 架构: i386 x86_64 arm aarch64
- 自定义选项: 无
- 构建模式

| OS      | Mode                             | Options |
|---------|----------------------------------|---------|
| Windows | Win32    Win64                   | 无       |
| Linux   | Linux64  LinuxARM32   LinuxARM64 | 无       |
| MacOS   | MacOSx64 MacOSARM64              | 无       |

### CEF_109.1.18
- 组件: Win32 GTK3 cocoa
- 架构: i386 x86_64 arm aarch64
- 自定义选项: 无
- 构建模式

| OS      | Mode                             | Options |
|---------|----------------------------------|---------|
| Windows | Win32    Win64                   | 无       |
| Linux   | Linux64  LinuxARM32   LinuxARM64 | 无       |
| MacOS   | MacOSx64 MacOSARM64              | 无       |

### main
- 组件: Win32 GTK2 GTK3 cocoa
- 架构: i386 x86_64 arm aarch64
- 自定义选项: -dCEF -dWV2 -dWK2 -dWK
- 构建模式 四类

一、LCL + CEF`GTK3`

| OS      | Mode                                         | Options |
|---------|----------------------------------------------|---------|
| Windows | Win32_CEF     Win64_CEF                      | -dCEF   |
| Linux   | Linux64_CEF   LinuxARM32_CEF  LinuxARM64_CEF | -dCEF   |
| MacOS   | MacOSx64_CEF  MacOSARM64_CEF                 | -dCEF   |

二、LCL + Webview2, Webkit2`GTK3`

| OS      | Mode                                                        | Options |
|---------|-------------------------------------------------------------|---------|
| Windows | Win32_WV2     Win64_WV2                                     | -dWV2   |
| Linux   | Linux32_WK2   Linux64_WK2   LinuxARM32_WK2   LinuxARM64_WK2 | -dWK2   |
| MacOS   | MacOSx64_WK2  MacOSARM64_WK2                                | -dWK2   |

三、LCL + Webkit1`GTK2`

| OS    | Mode                                                 | Options |
|-------|------------------------------------------------------|---------|
| Linux | Linux32_WK  Linux64_WK  LinuxARM32_WK  LinuxARM64_WK | -dWK    |

四、LCL`GTK2`

| OS      | Mode                                        | Options |
|---------|---------------------------------------------|---------|
| Windows | Win32     Win64                             | 无       |
| Linux   | Linux32   Linux64   LinuxARM32   LinuxARM64 | 无       |
| MacOS   | MacOSx64  MacOSARM64                        | 无       |

注意: MacOS 构建后执行构建命令: `install_name_tool -id "@loader_path\liblcl.dylib" ".\bin\liblcl.dylib"`