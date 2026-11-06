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

两个入口：`.github/workflows/release.yml` 是**正式发布**（仅 `push: tags: ['v*']` 触发，8 个 matrix job 并行编完 100 个 zip，再由 `publish` job 汇总上传到 GitHub Release）；`.github/workflows/debug-lazsetup.yml` 是**手动调试入口**（`workflow_dispatch`，单 target，不触发发布）。**真实下载、工具链安装/编译、动态库编译全部在 Actions runner 上执行**；本机只做 `go build` / `go vet` / `go test` 这类编译级验证。旧的 5 个基于 Lazarus 3.6 的构建 workflow 已删除。

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

正式发布不再走旧的 5 个构建 workflow（已删除）：`release.yml` 一次 tag push 并行跑 8 个 target，全部成功后由 `publish` job 把 100 个 zip 和 `SHA256SUMS.txt` 传到 GitHub Release；`debug-lazsetup.yml` 保持纯手动，用于单 target 调试和演练。

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

**CEF 源码已按 Lazarus 4.8 统一修正**（不再是构建期补丁）：四个 `src/3rd/CEF/*/source/uceflazaruscocoa.pas` 的 uses 段补上 `CocoaApplication`（4.8 把 `TCocoaApplication` 从 `CocoaInt` 拆到了该单元），并把已删除的 `CocoaWidgetSet.NSApp` 改为 `NSApplication(NSApp)`；CEF109 的 `uCEFDownLoadItem.pas` 统一重命名为 `uCEFDownloadItem.pas` 并同步所有引用，消除四个 CEF 版本共用 `lib/$(TargetCPU)-$(TargetOS)` 时因文件名大小写不同导致的 PPU 源名冲突。构建时不再对 CEF 源码做任何运行时改写。

最小闭环：`linux/amd64` × gtk2+gtk3 × 四个组合（CEF 取 109）= 6 个 zip；全矩阵（不含 loong64）共 100 个 zip。

## 下载源

主源是 Lazarus / FPC 官方镜像，配置在 `toolchain.json` 的 `vars` 里：

- `https://download.lazarus-ide.org/` — Windows exe、macOS dmg/zip、Linux 源码 tarball
- `https://downloads.freepascal.org/fpc/dist/<fpc>/` — 各架构 FPC 编译器 tar 与 `source/`

SourceForge 只作为 `urls` 备用源保留：GitHub-hosted runner（以及部分网络出口）访问它一律返回 Cloudflare 403 HTML 页面，下载器会识别 HTML 并自动切下一个源。**不要把 SourceForge 写回主 `url`**，`config` 包里有回归测试守着这一点。

Linux 编译一律在 docker 容器里完成（宿主 runner 用最新 Ubuntu），镜像按旧 `build-linux-docker-*.yml` 的分配：**x86 用 `debian:11`**（`amd64` → `amd64/debian:11`、`386` → `i386/debian:11`、`arm` → `arm32v7/debian:11`），**arm64 用 `arm64v8/ubuntu:18.04`**；22.04 之后已移除 `libgtk2.0-dev`，所以编译容器固定用 18.04 / debian:11 这条低版本 GTK 基线。旧 CI 中 GTK2 与 GTK3 的各模式在**同一个容器里依次编译**，镜像不按 widgetset 区分；`linux_GTK3` 启用后也复用该架构容器。容器用固定名字 + `docker exec` 复用，保证 `install.sh` 装进 `/usr/local` 的 FPC 在 `make`、`lazbuild` 两个步骤之间不会随 `docker run --rm` 消失。`linux/386` 另外配置了 `securityOpt: ["seccomp=unconfined"]`：Docker 默认 seccomp 会拦掉 32 位容器 DNS 所需的 socket 系统调用，否则 `i386/debian:11` 里 `apt-get` 一律报 `Temporary failure resolving ...`。

macOS arm64（4.8 工具链）需要 `brew install lld`：FPC 3.2.4rc1a 生成的 Objective-C 方法表会被 Xcode 15+ 的 `ld` 拒绝，`energy-lib.json` 里 `darwin_arm64` 的 `extra` 会把 FPC 指向 `tools/lazsetup/scripts/darwin-lld/ld` shim，改用 `ld64.lld` 链接；x86_64 不需要。等工具链切到 Lazarus 5.0（FPC 3.2.4-rc2+）后可移除这段绕法。

## Lazarus 版本与工具链编译方式

这一节是**版本配置的主说明**。先直接回答两个常被问到的能力：

| 需求 | 支持情况 | 实现方式 |
| --- | --- | --- |
| 指定 Lazarus 版本 | ✅ 完全支持 | `--lazarus 4.8`，或 `defaults.lazarus` |
| **不同平台 / 架构用不同 Lazarus 版本** | ✅ 支持，**但在编排层** | 每次调用 / 每个 CI job 各传一个 `--lazarus`；单份 JSON 不按 target 存版本 |
| 同一 target 按版本切换安装方式 | ✅ 支持 | `targets.<os/arch>.byRelease`（代码已实现，当前配置未启用） |
| **Linux 用源码编译 Lazarus** | ✅ **默认且唯一的内置方式** | `linux-source` profile，4 个架构全在 docker 容器内 `make clean all` |
| Windows / macOS 也用源码编译 | ⚠️ 机制上可扩展，**无内置配方、未在 CI 验证** | 自定义 profile + `byRelease` 切换 |
| 单独覆盖 FPC 版本 | ✅ 支持 | `--fpc 3.2.2`，或 `releases.<ver>.fpc` |

### 版本从哪来、怎么生效

`Resolve` 的取值优先级：

```
--lazarus  >  defaults.lazarus ("4.8")  >  兜底 "4.8"
--fpc      >  releases.<ver>.fpc        >  兜底 "3.2.2"
```

版本**必须是 `releases` 里的键**，否则直接报错 `lazarus version "x" not in config (available: [...])`。当前内置 `4.8` / `4.0` / `3.8` 三个版本，但**只有 `4.8` 在 Actions 上做过 8 target / 100 zip 的全矩阵验证**（即 `v3.0.1`）。

版本会变成 `${laz}`、`${fpc}` 注入所有模板：下载 URL、`releases.<ver>.aliases` 里的四个文件名（`laz_src` / `laz_win` / `laz_mac_zip` / `mac_fpc_dmg`）、macOS 的 `${mac_dir}` 目录，以及 `patch/lazarus${laz}` 补丁目录。所以**换版本只需在 `releases` 加一项并写对这四个别名**，URL 模板不用改。

换版本后先用四个不联网、不安装的命令自查：

```bash
./lazsetup.exe list --expand --lazarus 4.0                       # 每个 target 展开后的 URL / 命令
./lazsetup.exe env --lazarus 4.0 --os darwin --arch arm64        # 全部变量，含 laz/fpc/别名
./lazsetup.exe doctor --lazarus 4.0 --os linux --arch amd64      # 补丁目录缺失会 Warn
./lazsetup.exe setup --lazarus 4.0 --os linux --arch amd64 --dry-run
```

### 关键限制：一次运行只解析一个版本

`Resolve` 只算出一个 `laz`，`targets` 里**没有**「这个 target 用哪个 Lazarus 版本」这样的字段——它只描述 `profile` / `container` / `overrides` / `byRelease`。因此「同一份 JSON 里 windows 用 4.0、linux 用 4.8」不是直接支持的配置方式。

「不同平台用不同版本」要在**调用层**做，三种场景：

**1）本机分两次调用**

```bash
./lazsetup.exe setup --lazarus 4.0 --os windows --arch amd64 --dry-run
./lazsetup.exe setup --lazarus 4.8 --os linux   --arch amd64 --dry-run
```

**2）debug workflow**：`lazarus` 本来就是 `workflow_dispatch` 的 input，一次一个 target 一个版本，天然支持。

**3）release.yml**：8 个 matrix job 各自独立运行 `lazsetup`，给每行加版本即可：

```yaml
strategy:
  matrix:
    include:
      - { os: windows, arch: amd64, runner: windows-latest, zips: 10, lazarus: '4.0' }
      - { os: linux,   arch: amd64, runner: ubuntu-latest,  zips: 15, lazarus: '4.8' }
      # ...其余 6 行
env:
  LAZ: ${{ matrix.lazarus }}     # 原来是写死的 LAZ: '4.8'
```

⚠️ 当前 `release.yml` 有两处硬编码：job env 的 `LAZ: '4.8'`，以及下载缓存 key 里的 `lazsetup-dl-${{ runner.os }}-4.8-${{ matrix.os }}-${{ matrix.arch }}-v1`（restore 与 save 各一处）。**按平台分版本时必须同步把这两处 `4.8` 换成 `${{ matrix.lazarus }}`**，否则不同版本的下载件会互相命中/污染同一个缓存。

### 按版本切换安装方式：`byRelease`

`targets.<os/arch>.byRelease` 在 `Resolve` 里优先于 `profile`：

```go
profileName := td.Profile
if v, exists := td.ByRelease[laz]; exists { profileName = v }
```

例如「4.8 走源码编译、4.0 走某个二进制 profile」：

```json
"linux/amd64": {
  "profile": "linux-source",
  "byRelease": { "4.0": "linux-binary-legacy" },
  "container": { "...": "原有容器配置保持不变" }
}
```

`linux-binary-legacy` 需在 `profiles` 里自行定义（可用 `extends` 复用已有 profile）。**当前 `toolchain.json` 没有启用 `byRelease`**，8 个 target 都只写了 `profile`。

### 源码编译 Lazarus

**Linux（386 / amd64 / arm / arm64）默认就是源码编译**，也是仓库里唯一内置的源码编译实现。`linux-source` 的六个组件按顺序执行：

| # | 组件 | 动作 |
| --- | --- | --- |
| 1 | `lazarus-src` | Lazarus 源码 tarball → `${prefix}` |
| 2 | `fpc-bin` | 目标架构的 FPC 编译器 tar |
| 3 | `fpcsrc` | FPC 源码 |
| 4 | `build-fpc` | `install.sh`（把 FPC 装进容器 `/usr/local`） |
| 5 | `lazarus-patch` | 覆盖式打 `patch/lazarus${laz}/gtk3` 与 `synedit` |
| 6 | `build-lazarus` | `cd ${cprefix} && make clean all` |

全部在**命名 docker 容器**里执行（`${repo}:/app`、`${prefix}:/toolchain` 双挂载），所以 FPC 装进 `/usr/local` 后不会因 `docker run --rm` 丢失。之后 `build` 会给 `lazbuild` 传 `--lazarusdir /toolchain`；本机跑源码安装时可用 `--lazarus-dir PATH` 覆盖。`--no-container` 只用于调试（直接在宿主机编译），正式构建一律走容器。

**Windows / macOS 目前是官方二进制安装**：`win-binary`（Inno exe）、`mac-binary`（FPC dmg + Lazarus zip + 软链 `lazbuild`）。仓库里**没有**这两个平台的源码编译 profile，也没有在 CI 上验证过。

不过 profile 是纯 JSON 且 `components[].kind: "commands"` 可执行任意命令，所以源码编译在机制上是可扩展的。最小骨架（**示例，不是可用配方**）：

```json
"profiles": {
  "mac-source": {
    "os": ["darwin"],
    "arch": ["amd64", "arm64"],
    "components": [
      { "id": "laz-src", "kind": "targz", "url": "...", "dest": "${prefix}", "strip": 1 },
      { "id": "make", "kind": "commands", "commands": ["cd \"${prefix}\" && make clean all"] }
    ]
  }
},
"targets": {
  "darwin/arm64": { "profile": "mac-binary", "byRelease": { "4.0": "mac-source" } }
}
```

真要落地还需补齐 FPC 引导、Cocoa/SDK 依赖、`--lazarusdir`、链接器 shim 与签名，并且必须先在 Actions 上跑通再用于发版。

### 换版本时必须复核的连带项

- `releases.<ver>.aliases` 四个文件名要与官方发布包完全一致（含 `${win_tag}` / `${mac_arch}` 占位），否则 URL 404。
- `patch/lazarus<ver>/` 不存在时补丁会**直接跳过**；4.8 的补丁补了 `gtk3globals.pas`，**切到 4.0 / 3.8 很可能编不过 `linux_GTK3`**。`doctor` 对缺失补丁目录给 Warn 而不是 Fail。
- `mac_fpc_dmg` 在 4.8 是 `3.2.4rc1a`，在 4.0 / 3.8 是 `3.2.2`，别混用。
- `energy-lib.json` 里 `darwin_arm64.extra` 是 FPC 3.2.4rc1a + Apple ld 的 `ld64.lld` shim，换 FPC 版本后要重新判断是否需要。
- CEF 源码（`CocoaApplication` / `NSApplication(NSApp)` / `uCEFDownloadItem`）是按 Lazarus 4.8 修的，换到旧版 Lazarus 的兼容性未实测。
- workflow 与缓存 key 里硬编码的 `4.8`（见上）。

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

macOS 的下载地址就是靠 `${mac_dir}`（aarch64 / x86-64）和 `${laz}` 拼出 `.../Lazarus%20macOS%20aarch64/Lazarus%204.8/`，所以版本号只改 `releases` 就能切换目录和文件名。按平台分版本、源码编译、`byRelease` 等完整说明见上文《Lazarus 版本与工具链编译方式》。

**加新架构/新平台**：在 `targets` 增加 `os/arch → profile`，必要时用 `overrides` 覆盖某个组件的 URL，或用 `byRelease` 让不同版本走不同 profile。

**加 build 模式**：在 `energy-lib.json` 的 `build.modes` 增加 `{name, bm, os, arch, artifact, output}`。`bm` 必须是 `liblcl.lpi` 里 `<BuildModes><Item Name="...">` 的真实名称（当前为 `win_amd64`/`win_386`/`linux_GTK2`/`linux_GTK3`/`darwin_amd64`/`darwin_arm64` 以及 `Debug_CEF*`）；`artifact` 是该模式 `Target/Filename` 对应的产物文件，支持 `${laz_target}`、`${lib_ext}` 变量。改完先跑 `doctor`。

**补校验值**：`./lazsetup.exe verify --update-hashes --os linux --arch arm64`，把打印出的 `sha256` / `size` 填回对应组件。

更多设计细节与已知限制见 [DESIGN.md](DESIGN.md)。
