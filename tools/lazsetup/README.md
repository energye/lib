# lazsetup

在 `energy/lib` 仓库里自带的一套 Go 工具：按 JSON 配置下载/校验/安装 Lazarus 与 FPC，并直接构建 `liblcl` 动态库。GitHub Actions 里现场 `go build` 后调用，本机用同一个二进制，**不依赖任何自定义 Action**。

## 本机使用

在仓库根目录执行（PowerShell / Git Bash 均可）：

```bash
go -C tools/lazsetup build -o ../../lazsetup.exe ./cmd/lazsetup   # Linux/macOS 去掉 .exe
./lazsetup.exe list --expand                            # 先看每个平台解析出的 URL 和命令
./lazsetup.exe setup --lazarus 4.8 --arch amd64 --dry-run
./lazsetup.exe setup --lazarus 4.8 --arch amd64          # 真正安装
./lazsetup.exe build --mode Win64 --out ../bins          # 编译并打包
```

本机若处于父级 `go.work` 工作区且该 work 不含本模块，编译时加 `GOWORK=off`：

```bash
GOWORK=off go -C tools/lazsetup build -o ../../lazsetup.exe ./cmd/lazsetup
```

`setup` 结束后会打印 PowerShell / bash 的环境变量设置语句；CI 里改用 `--github`，它写 `GITHUB_PATH` / `GITHUB_ENV`。

## GitHub Actions

`.github/workflows/debug-lazsetup.yml` 是**新增的手动调试 workflow**（`workflow_dispatch`），用于验证配置展开、编译、下载和构建。默认所有安装/构建步骤都是 dry-run，需要真实执行时勾选对应输入。

CI 中的最小形态：

```yaml
- uses: actions/checkout@v4
- uses: actions/setup-go@v5
  with: { go-version: '1.21' }
- run: go -C tools/lazsetup build -o ../../lazsetup ./cmd/lazsetup
  shell: bash
- run: ./lazsetup setup --lazarus 4.8 --os linux --arch arm64 --github
  shell: bash
- run: ./lazsetup build --mode LinuxARM64_CEF --out ../bins
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
| `env` | 显示指定平台解析出的全部变量 |
| `version` | 版本号 |

常用参数：

```
--config PATH        配置文件（可重复；后加载的覆盖先加载的）
--lazarus VER        Lazarus 版本，默认 4.8
--fpc VER            覆盖该 release 的 FPC 版本
--os / --arch        目标平台，默认本机
--prefix/--work/--cache DIR
--dry-run            只打印，不联网、不执行命令
--github             CI：写 GITHUB_PATH / GITHUB_ENV
--no-cache           强制重新下载
--no-container       宿主机直接编译，不用 docker（同架构时推荐）
--mode NAME          build/all 的模式（可重复）
--out DIR            产物目录
--lazbuild PATH      指定 lazbuild
--lazarus-dir PATH   覆盖 --lazarusdir
--no-package         跳过三方包注册
```

不带 `--mode` 时，`build` 只运行配置里 `os`/`arch` 匹配当前目标的模式。

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

**加 build 模式**：在 `energy-lib.json` 的 `build.modes` 增加 `{name, bm, ws, os, arch, output}`。

**补校验值**：`./lazsetup.exe verify --update-hashes --os linux --arch arm64`，把打印出的 `sha256` / `size` 填回对应组件。

更多设计细节与已知限制见 [DESIGN.md](DESIGN.md)。
