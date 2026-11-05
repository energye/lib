lazbuild 命令参数说明

参数列表

┌───────────┬────────┬──────┬────────────┬──────────────────────────────────────────────────────┐
│   参数    │  类型  │ 必填 │   默认值   │                         说明                         │
├───────────┼────────┼──────┼────────────┼──────────────────────────────────────────────────────┤
│ -bm       │ string │ ✅   │ 无         │ build mode 名称，对应 lpi 文件中的 <Item Name="xxx"> │
├───────────┼────────┼──────┼────────────┼──────────────────────────────────────────────────────┤
│ -ws       │ string │ ✅   │ 无         │ widget set，如 win32、gtk2、gtk3、cocoa              │
├───────────┼────────┼──────┼────────────┼──────────────────────────────────────────────────────┤
│ -lazbuild │ string │ ❌   │ ""         │ lazbuild.exe 路径，为空则跳过编译                    │
├───────────┼────────┼──────┼────────────┼──────────────────────────────────────────────────────┤
│ -lpi      │ string │ ❌   │ liblcl.lpi │ lpi 文件路径，支持相对路径和绝对路径                 │
├───────────┼────────┼──────┼────────────┼──────────────────────────────────────────────────────┤
│ -d        │ string │ ❌   │ ""         │ 自定义宏，多个用逗号分隔，如 CEF147,ENABLE_LOG       │
└───────────┴────────┴──────┴────────────┴──────────────────────────────────────────────────────┘

执行逻辑

1. 校验 -bm、-ws 必填
2. 读取 lpi 文件
3. 如果 -d 不为空：
   a. 找到 <Item Name="-bm的值"> 区域
   b. 检查已有 CustomOptions 中的宏
   c. 只追加不存在的宏（去重）
   d. 写入 lpi 文件
4. 如果 -lazbuild 不为空：
   a. 执行 lazbuild -B --bm=xxx --ws=xxx liblcl.lpi
   b. 实时输出编译日志
5. 无论编译成功或失败，恢复 lpi 文件原始内容

使用示例

# 完整编译：注入宏 + 执行编译
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32 -d "CEF147,ENABLE_LOG"

# 只注入宏不编译（调试用）
./tools/lazbuild/lazbuild-windows-amd64.exe -bm win_amd64 -ws win32 -d "CEF147"

# 不注入宏，直接编译
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32

# 指定 lpi 文件路径
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -lpi "path\to\liblcl.lpi" -bm win_amd64 -ws win32 -d "CEF147"

# 编译 linux 平台
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "/usr/local/bin/lazbuild" -bm linux_GTK3 -ws gtk3 -d "CEF147"

# 编译 macOS 平台
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "/Applications/lazarus/lazbuild" -bm darwin_arm64 -ws cocoa -d "CEF147"

# 编译指定 CEF 版本示例
windows:
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32 -d "CEF109"
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32 -d "CEF127"
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32 -d "CEF147"
./tools/lazbuild/lazbuild-windows-amd64.exe -lazbuild "C:\lazarus4.6\lazbuild.exe" -bm win_amd64 -ws win32 -d "CEF150"

linux:
./tools/lazbuild/lazbuild-linux-amd64 -lazbuild "/usr/share/lazarus/4.4.0/lazbuild" -bm linux_GTK3 -ws gtk3 -d "CEF109"
./tools/lazbuild/lazbuild-linux-amd64 -lazbuild "/usr/share/lazarus/4.4.0/lazbuild" -bm linux_GTK3 -ws gtk3 -d "CEF127"
./tools/lazbuild/lazbuild-linux-amd64 -lazbuild "/usr/share/lazarus/4.4.0/lazbuild" -bm linux_GTK3 -ws gtk3 -d "CEF150"

---

lpi 文件中的 CustomOptions 处理规则

┌─────────────────────────────────────────────┬─────────────────────────────────────────────┐
│                  原始状态                   │                  处理方式                   │
├─────────────────────────────────────────────┼─────────────────────────────────────────────┤
│ 有 <Other><CustomOptions Value="-dCEF127"/> │ 追加新宏到 Value                            │
├─────────────────────────────────────────────┼─────────────────────────────────────────────┤
│ 有 <Other> 无 <CustomOptions>               │ 在 <Other> 内插入 <CustomOptions>           │
├─────────────────────────────────────────────┼─────────────────────────────────────────────┤
│ 无 <Other> 有 <CompilerOptions>             │ 在 </CompilerOptions> 前插入完整 <Other> 块 │
├─────────────────────────────────────────────┼─────────────────────────────────────────────┤
│ 无 <CompilerOptions>                        │ 在 </Item> 前插入完整 <CompilerOptions> 块  │
└─────────────────────────────────────────────┴─────────────────────────────────────────────┘

编译产物

程序会执行 lazbuild 的实际编译命令：
lazbuild.exe -B --bm=win_amd64 --ws=win32 liblcl.lpi

- -B：强制重新编译
- --bm：build mode
- --ws：widget set
- 工作目录自动设为 lpi 文件所在目录
