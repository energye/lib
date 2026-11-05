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

`.github/workflows/debug-lazsetup.yml` 是**唯一的验证入口**（`workflow_dispatch`）。**真实下载、工具链安装/编译、动态库编译全部在 Actions runner 上执行**；本机只做 `go build` / `go vet` / `go test` 这类编译级验证。

一次触发会依次跑：`go build` → 单元测试（含离线端到端）→ `doctor` 离线一致性检查 → 下载 URL 可达性诊断 → 8 个平台的 `setup`/`build` dry-run → **真实 setup + build** → 上传产物。`run_setup` / `run_build` 默认都是 `true`；只想看配置时把它们取消勾选即可。CI 上通过 `inputs.runner`、`target_os`、`target_arch` 选择要验证的组合。

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
--mode NAME          build/all 的模式（可重复）
--out DIR            产物目录
--lazbuild PATH      指定 lazbuild
--lazarus-dir PATH   覆盖 --lazarusdir
--no-package         跳过三方包注册
```

不带 `--mode` 时，`build` 只运行配置里 `os`/`arch` 匹配当前目标、且未标记 `disabled` 的模式。

> **当前验证范围**：`linux_GTK3` 与 `linux_GTK2` 是同一条构建流水线，配置完全对称，差别只有 `--ws=gtk3` 和将来使用的 docker / 工具链环境（Lazarus 5.0）；目前标记 `disabled: true` 暂不编译，Linux 只产出 `libenergy-gtk2.so`。启用时去掉 `disabled`、把工具链切到 `5.0RC1` 并配好对应容器即可，lib 库源码无需改动。

## 下载源

主源是 Lazarus / FPC 官方镜像，配置在 `toolchain.json` 的 `vars` 里：

- `https://download.lazarus-ide.org/` — Windows exe、macOS dmg/zip、Linux 源码 tarball
- `https://downloads.freepascal.org/fpc/dist/<fpc>/` — 各架构 FPC 编译器 tar 与 `source/`

SourceForge 只作为 `urls` 备用源保留：GitHub-hosted runner（以及部分网络出口）访问它一律返回 Cloudflare 403 HTML 页面，下载器会识别 HTML 并自动切下一个源。**不要把 SourceForge 写回主 `url`**，`config` 包里有回归测试守着这一点。

Linux 编译一律在 docker 容器里完成（宿主 runner 用最新 Ubuntu）：`amd64` 用 `ubuntu:20.04`、`arm64` 沿用旧 CI 的 `arm64v8/ubuntu:18.04`、`386`/`arm` 沿用 `debian:11` 系列。选择 18/20 是因为 22.04 之后已移除 `libgtk2.0-dev`，而 lib 的 GTK2/GTK3 产物需要稳定的低版本 glibc/GTK 基线。容器用固定名字 + `docker exec` 复用，保证 `install.sh` 装进 `/usr/local` 的 FPC 在 `make`、`lazbuild` 两个步骤之间不会随 `docker run --rm` 消失。

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
