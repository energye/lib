# lazsetup

在 `energy/lib` 仓库里自带的一套 Go 工具：按 JSON 配置下载/校验/安装 Lazarus 与 FPC，并直接构建 `liblcl` 动态库。GitHub Actions 里现场 `go build` 后调用，本机用同一个二进制，**不依赖任何自定义 Action**。

## 本机使用

在仓库根目录执行（PowerShell / Git Bash 均可）：

```bash
go -C tools/lazsetup build -o ../../lazsetup.exe ./cmd/lazsetup   # Linux/macOS 去掉 .exe
./lazsetup.exe list --expand                            # 先看每个平台解析出的 URL 和命令
./lazsetup.exe doctor                                   # 离线一致性自检（配置 vs liblcl.lpi）
./lazsetup.exe setup --lazarus 4.8 --arch amd64 --dry-run
./lazsetup.exe setup --lazarus 4.8 --arch amd64          # 真正安装（建议交给 CI）
./lazsetup.exe build --mode win_amd64 --out bins         # 编译并打包
```

本机若处于父级 `go.work` 工作区且该 work 不含本模块，编译时加 `GOWORK=off`：

```bash
GOWORK=off go -C tools/lazsetup build -o ../../lazsetup.exe ./cmd/lazsetup
```

`setup` 结束后会打印 PowerShell / bash 的环境变量设置语句；CI 里改用 `--github`，它写 `GITHUB_PATH` / `GITHUB_ENV`。

## GitHub Actions

`.github/workflows/debug-lazsetup.yml` 是**唯一的验证入口**（`workflow_dispatch`）。**真实下载、工具链安装/编译、动态库编译全部在 Actions runner 上执行**；本机只做 `go build` / `go vet` / `go test` 这类编译级验证。原有 5 个正式构建 workflow 仍是 `if: false`，未经明确同意不恢复。

一次触发会依次跑：`go build` 两个 Go 程序（`lazsetup` + 按目标平台交叉编译的 `tools/lazbuild`）→ 单元测试 → `doctor` → 8 个平台 dry-run → 打印组合计划 → **真实 setup（含 Lazarus 补丁）+ 组合编译** → 逐个 zip 校验 → 上传产物。

`combo_mode` 默认开启，默认参数就是最小闭环：`cef_versions=CEF109`、`widgetsets=gtk2,gtk3`、组合全选。扩全矩阵时把 `cef_versions` 清空（4 个版本全编）即可。

CI 中的最小形态：

```yaml
- uses: actions/checkout@v4
- uses: actions/setup-go@v5
  with: { go-version: '1.24' }  # 1.21 在最新 macOS 上会因缺少 LC_UUID 导致测试二进制被 dyld 拒绝
- run: go -C tools/lazsetup build -o ../../lazsetup ./cmd/lazsetup
  shell: bash
- run: ./lazsetup setup --lazarus 4.8 --os linux --arch arm64 --github
  shell: bash
- run: ./lazsetup build --mode linux_GTK2 --repo "$GITHUB_WORKSPACE" --out bins
  shell: bash
```

原有 5 个构建 workflow 目前已被 `if: false` 停用，等 debug workflow 验证通过后再逐个改造、恢复。

## 命令

| 命令 | 说明 |
| --- | --- |
| `setup` | 下载 → 校验 → 解压/安装 → 源码模式执行 `install.sh` + `make clean all` → 导出环境 |
| `build` | 注册三方 lpk，按 build mode 逐个 `lazbuild -B`，每个模式立即打包产物 |
| `all` | `setup` + `build` |
| `combos` | 列出当前目标的组合编译计划（zip 名 / bm / ws / 注入宏），不联网不编译 |
| `list` / `list --expand` | 列出版本/目标/模式；`--expand` 显示每个目标完全展开的 URL 与命令（排查配置首选） |
| `verify` | 只下载并校验 sha256/size，不安装 |
| `doctor` | 离线自检：build mode 是否存在于 `liblcl.lpi`、三方 lpk / `OtherUnitFiles` 路径、8 个 target 的 URL 与容器挂载；`--network` 额外探测下载源 |
| `env` | 显示指定平台解析出的全部变量 |
| `version` | 版本号 |

常用参数：

```
--config PATH        配置文件（可重复；后加载的覆盖先加载的）
--lazarus VER        Lazarus 版本，默认 4.8
--fpc VER            覆盖该 release 的 FPC 版本
--os / --arch        目标平台，默认本机
--prefix/--work/--cache/--repo DIR
--dry-run            只打印，不联网、不执行命令
--github             CI：写 GITHUB_PATH / GITHUB_ENV
--network            doctor：探测下载 URL（可能遇到 Cloudflare 挑战页）
--no-cache           强制重新下载
--no-container       仅调试用：跳过 docker，直接在宿主机编译（正式构建统一走容器）
--mode NAME          build/all 的模式（可重复，旧 build-mode 路径）
--out DIR            产物目录
--all-combos         启用组合矩阵编译
--combo NAME         组合名（可重复）：lcl / webview / cef / cef-webview
--cef VERSION        CEF 版本（可重复）：CEF109 / CEF127 / CEF147 / CEF150
--ws TAG             Linux widgetset（可重复）：gtk2 / gtk3
--lazbuild PATH      指定 lazbuild
--lazarus-dir PATH   覆盖 --lazarusdir
--no-package         跳过三方包注册
```

不带 `--mode` 时，`build` 只运行配置里 `os`/`arch` 匹配当前目标、且未标记 `disabled` 的模式。

## 组合矩阵

库是多个 UI 模块的集合：LCL 基座 + CEF + WebView（Windows 用 WebView2、Linux 用 webkit2gtk、macOS 用 WKWebView）。四种组合靠注入 `liblcl.lpi` 的 `-d` 宏区分，每种都要出全平台产物：

| 组合 | `-d` 宏 | zip 中的 module 段 |
| --- | --- | --- |
| 仅 LCL | 无 | 省略 |
| LCL + WebView | `Webview` | `webview` |
| LCL + CEF | `CEF109` / `127` / `147` / `150` | `cef109` / … / `cef150` |
| LCL + CEF + WebView | `CEFxxx,Webview` | `cef109-webview` / … |

产物名 `libenergy-[module-][os]-[arch]-[ws].zip`，`ws` 仅 Linux 有（`gtk2` / `gtk3`）。**gtk2 没有 webkit2gtk，所以只产 LCL 与 CEF**。每个组合编译完立即打包：6 个平台 BuildMode 的 `Target/Filename` 是固定的，不打包就会被下一个组合覆盖。`arch` 里 `loong64` 只是预留枚举位，不生成 target（FPC 3.2.2 不支持 loongarch64，需要 3.3.1）。

编译时 `lazsetup` 不再直接调 Lazarus，而是调用 `tools/lazbuild` 包装器：它把 `-d` 宏写进目标 BuildMode 的 `CustomOptions`、按 `lazbuild.conf.json` 追加 `OtherUnitFiles` 目录，再执行 `lazbuild -B --bm --ws`，结束后恢复 lpi。`lazsetup` 自己在循环开始前也备份 lpi，并 `defer` 无条件恢复（双保险）；所有临时改写都不进 git。

**只用 6 个平台 BuildMode**（`win_amd64` / `win_386` / `linux_GTK2` / `linux_GTK3` / `darwin_amd64` / `darwin_arm64`），`Debug*` 四个不使用。Linux 的 `-ws=gtk2|gtk3` 靠参数控制。

**Lazarus 补丁**（仅 Linux）：`setup` 在 `make clean all` 之前检查 `patch/lazarus<版本>/`，存在就把 `gtk3/` 与 `synedit/` **以文件覆盖（overlay）方式**复制到 `lcl/interfaces/gtk3` 与 `components/synedit`；不存在直接跳过。补丁是增量文件集，**不能整目录删除后替换**——`patch/lazarus4.8/synedit/` 里没有 `design/` 等原版目录，删掉目标目录会让 `make clean` 在 `synedit/design: No such file or directory` 处中断。4.8 的补丁补齐了 `gtk3globals.pas`，这是 GTK3 能编译的关键。将来若切到没有补丁目录的 Lazarus 版本，GTK3 会失去补丁。

**macOS CEF 兼容补丁**（仅 darwin）：CEF4Delphi 的 `src/3rd/CEF/*/source/uceflazaruscocoa.pas` 是按 Lazarus 2.x 写的，在 4.8 上有两处过时 API：① uses 段只有 `CocoaAll, CocoaInt, Cocoa_Extra`，而 `TCocoaApplication` 已移到独立单元 `CocoaApplication`，导致 `Identifier not found "TCocoaApplication"` 并连带 `sendEvent` / `terminate` 的 override 报错；② `CocoaWidgetSet.NSApp` 已不存在（4.8 的 `cocoaint.pas` 全程用全局 `NSApp`），报 `identifier idents no member "NSApp"`。`BuildCombos` 只在 `Target.OS == "darwin"` 且非 dry-run 时，临时给四个 CEF 版本做两条替换：uses 段补 `CocoaApplication`、`CocoaWidgetSet.NSApp` → `NSApplication(NSApp)`；循环结束 `defer` 无条件写回原始字节，文件已修复或不存在就跳过。与 lpi 一样属于运行时改写，**不提交、不留痕**，Windows / Linux 完全不受影响。此外 darwin 每个组合编译前会清掉 `lib/*-darwin/` 里的 `.ppu/.o`：四个 CEF 版本共用同一个 `UnitOutputDirectory`，而 109 的 `uCEFDownLoadItem.pas` 与 127+ 的 `uCEFDownloadItem.pas` 在 macOS 输出目录里冲突，残留的 PPU 会让 `cef-webview` 组合报 `Can't find unit uCEFDownloadItem`。

最小闭环：`linux/amd64` × gtk2+gtk3 × 四个组合（CEF 取 109）= 6 个 zip；全矩阵（不含 loong64）共 100 个 zip。

## 下载源

主源是 Lazarus / FPC 官方镜像，配置在 `toolchain.json` 的 `vars` 里：

- `https://download.lazarus-ide.org/` — Windows exe、macOS dmg/zip、Linux 源码 tarball
- `https://downloads.freepascal.org/fpc/dist/<fpc>/` — 各架构 FPC 编译器 tar 与 `source/`

SourceForge 只作为 `urls` 备用源保留：GitHub-hosted runner（以及部分网络出口）访问它一律返回 Cloudflare 403 HTML 页面，下载器会识别 HTML 并自动切下一个源。**不要把 SourceForge 写回主 `url`**，`config` 包里有回归测试守着这一点。

Linux 编译一律在 docker 容器里完成（宿主 runner 用最新 Ubuntu），镜像按旧 `build-linux-docker-*.yml` 的分配：**x86 用 `debian:11`**（`amd64` → `amd64/debian:11`、`386` → `i386/debian:11`、`arm` → `arm32v7/debian:11`），**arm64 用 `arm64v8/ubuntu:18.04`**；22.04 之后已移除 `libgtk2.0-dev`，所以编译容器固定用 18.04 / debian:11 这条低版本 GTK 基线。旧 CI 中 GTK2 与 GTK3 的各模式在**同一个容器里依次编译**，镜像不按 widgetset 区分；`linux_GTK3` 启用后也复用该架构容器。容器用固定名字 + `docker exec` 复用，保证 `install.sh` 装进 `/usr/local` 的 FPC 在 `make`、`lazbuild` 两个步骤之间不会随 `docker run --rm` 消失。`linux/386` 另外配置了 `securityOpt: ["seccomp=unconfined"]`：Docker 默认 seccomp 会拦掉 32 位容器 DNS 所需的 socket 系统调用，否则 `i386/debian:11` 里 `apt-get` 一律报 `Temporary failure resolving ...`。

macOS arm64（4.8 工具链）需要 `brew install lld`：FPC 3.2.4rc1a 生成的 Objective-C 方法表会被 Xcode 15+ 的 `ld` 拒绝，`energy-lib.json` 里 `darwin_arm64` 的 `extra` 会把 FPC 指向 `tools/lazsetup/scripts/darwin-lld/ld` shim，改用 `ld64.lld` 链接；x86_64 不需要。等工具链切到 Lazarus 5.0（FPC 3.2.4-rc2+）后可移除这段绕法。

## 改配置

两份配置按顺序合并：`configs/toolchain.json`（工具链）+ `configs/energy-lib.json`（构建）。

**换 Lazarus 版本**：在 `releases` 增加一项并给出文件名别名即可，URL 模板不用动。例如：

```json
"4.8": {
  "fpc": "3.2.2",
  "aliases": {
    "laz_src": "lazarus-4.8-0.tar.gz",
    "laz_win": "lazarus-4.8-fpc-3.2.2-${win_tag}.exe",
    "laz_mac_zip": "lazarus-darwin-${mac_arch}-4.8.zip",
    "mac_fpc_dmg": "fpc-3.2.4rc1a.intelarm64-macosx.dmg"
  }
}
```

macOS 的下载地址就是靠 `${mac_dir}`（aarch64 / x86-64）和 `${laz}` 拼出 `.../Lazarus%20macOS%20aarch64/Lazarus%204.8/`，所以版本号只改 `releases` 就能切换目录和文件名。

**加新架构/新平台**：在 `targets` 增加 `os/arch → profile`，必要时用 `overrides` 覆盖某个组件的 URL，或用 `byRelease` 让不同版本走不同 profile。

**加 build 模式**：在 `energy-lib.json` 的 `build.modes` 增加 `{name, bm, os, arch, artifact, output}`。`bm` 必须是 `liblcl.lpi` 里 `<BuildModes><Item Name="...">` 的真实名称（当前为 `win_amd64`/`win_386`/`linux_GTK2`/`linux_GTK3`/`darwin_amd64`/`darwin_arm64` 以及 `Debug_CEF*`）；`artifact` 是该模式 `Target/Filename` 对应的产物文件，支持 `${laz_target}`、`${lib_ext}` 变量。改完先跑 `doctor`。

**补校验值**：`./lazsetup.exe verify --update-hashes --os linux --arch arm64`，把打印出的 `sha256` / `size` 填回对应组件。

更多设计细节与已知限制见 [DESIGN.md](DESIGN.md)。
