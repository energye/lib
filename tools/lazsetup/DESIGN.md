# lazsetup 设计说明

## 1. 目标与边界

`lazsetup` 在 `energy/lib` 仓库内自带，用来在 **GitHub Actions 和本机** 准备 Lazarus/FPC 工具链，并直接构建 `liblcl` 动态库（`.dll` / `.so` / `.dylib`）。

刻意遵守的边界：

- 代码只放在本仓库的 `tools/lazsetup/`，**不发布成独立 Action**；CI 里 `go build` 现场编译出二进制再调用。
- 不 `uses:` 任何自定义 Action（包括 `energye/setup-lazarus`），只使用 runner 自带的 `actions/checkout`、`actions/setup-go`。
- 纯 Go 标准库，**零第三方依赖**，不需要 `go mod download`，离线也能编译。
- 版本、架构、走源码还是安装包、下载地址、编译命令，全部由 JSON 配置驱动。

## 2. 下载机制（与旧 JS Action 对照）

| 项目 | `energye/setup-lazarus` | `lazsetup` |
| --- | --- | --- |
| HTTP | `@actions/tool-cache.downloadTool` → `@actions/http-client` → Node `https`，自动跟随 SourceForge 302 | `net/http`，`ProxyFromEnvironment`，自动跟随 302 |
| 重试 | 3 次，仅 5xx/408/429，10~20 秒退避 | 可配置（默认 3 次），指数退避，同样按状态码判定 |
| 写入 | `stream.pipeline` 到 `$RUNNER_TEMP/installers/<name>` | 流式写 `.part`，支持 HTTP Range 断点续传，成功后原子改名 |
| 完整性 | **无校验**，URL 硬编码在 `version.ts` | sha256 + size 双重校验（配置里的 `sha256` / `size`） |
| 缓存 | GitHub Cache Service 恢复整个 installers 目录 | 本地按 URL 哈希缓存；CI 可选 `actions/cache` 缓存该目录 |
| 备用源 | 无 | 组件支持 `urls` 数组依次回退 |
| 解压/安装 | exe / deb / pkg / dmg / zip，源码模式只下载解压 | 同上，并新增 tar/tar.gz/deb(ar) 解包、`commands` 编译步骤 |

`lazsetup verify` 只下载并校验，不安装；`--update-hashes` 会把实际 sha256/size 打印成可直接粘回配置的片段。当前配置里的 `sha256` 留空（SourceForge 没有官方校验清单），因此**只按文件大小校验并给出告警**；建议首次验证跑一次 `--update-hashes` 把值补齐。

## 3. 配置模型

两份 JSON 按顺序加载，后者覆盖前者：

- `configs/toolchain.json` — `vars` / `defaults` / `releases` / `profiles` / `targets`
- `configs/energy-lib.json` — `build`（三方包、build modes、产物）

可用模板变量：

| 变量 | 含义 |
| --- | --- |
| `${os}` `${arch}` | 归一化后的目标平台（windows/linux/darwin；386/amd64/arm/arm64） |
| `${laz}` `${fpc}` | 版本；`${laz}` 由 `--lazarus` 或 `defaults.lazarus` 决定 |
| `${win_bits}` `${win_tag}` | 32/64、win32/win64 |
| `${fpc_arch}` `${fpc_suffix}` | i386/x86_64/aarch64/arm、`<arch>-linux` |
| `${mac_arch}` `${mac_dir}` | x86_64/aarch64、x86-64/aarch64（SourceForge 目录名） |
| `${lib_ext}` `${exe}` | dll/so/dylib、.exe/空 |
| `${work}` `${prefix}` `${cache}` | 工作目录、工具链根目录、下载缓存目录 |
| `${cwork}` `${cprefix}` | 容器内对应路径（无容器时等于 work/prefix） |
| `${home}` `${env.NAME}` | 用户目录、进程环境变量 |
| 自定义别名（`releases.*.aliases`） | 每个版本的文件名片段，如 `laz_src` / `laz_win` / `laz_mac_zip`，**换版本只改这里** |

`profiles[].components[]` 字段：`id / url / urls / sha256 / size / kind / dest / strip / sudo / commands / provides / optional`。
`kind` 支持：`zip`、`tar`、`targz`、`deb`（解包，不需 root）、`raw`、`inno`（Windows 静默安装）、`dpkg`、`pkg`、`dmg`（macOS 挂载后安装 .pkg）、`commands`（纯命令步骤，无 URL）。

`targets` 用 `os/arch` 映射到 profile，可用 `byRelease` 按 Lazarus 版本切换 profile、`overrides` 按组件 id 打补丁、`container` 声明跨架构容器。

## 4. 两条工具链路径

### binary（Windows / macOS）

- Windows 386 / amd64：`Lazarus Windows <32|64> bits/Lazarus <ver>/lazarus-<ver>-fpc-<fpc>-win<32|64>.exe`，InnoSetup `/VERYSILENT /SP- /DIR=`。
- macOS amd64 / arm64：**官方 dmg + zip 组合**。目录由 `${mac_dir}` 与 `${laz}` 拼出，例如 4.8 arm64 对应
  `https://sourceforge.net/projects/lazarus/files/Lazarus%20macOS%20aarch64/Lazarus%204.8/`，
  文件为 `fpc-3.2.4rc1a.intelarm64-macosx.dmg` + `lazarus-darwin-aarch64-4.8.zip`。
  换版本只需在 `releases` 里改 `mac_fpc_dmg` / `laz_mac_zip` 两个别名（3.8/4.0 已给出示例）。
  zip 解压到 `/Applications` 后用 `ln -sfn` 建立 `lazbuild` 链接（`-f` 保证重复执行不失败）。

### source（Linux 全部架构）

按需求，**Linux 386 / amd64 / arm / arm64 全部走源码编译**，不再使用 deb：

1. `lazarus-<ver>-0.tar.gz` → 解压到 `${work}`（tar 内顶层目录为 `lazarus`，即 `${prefix}`）
2. `fpc-<fpc>.<arch>-linux.tar` → 官方预编译编译器，解压到 `${prefix}`
3. `fpc-<fpc>.source.tar.gz` → RTL/FCL 源码，解压到 `${prefix}`
4. `cd ${cprefix}/fpc-<fpc>.<fpc_suffix> && ./install.sh`
5. `cd ${cprefix} && make clean all` → 产出 `lazbuild`

FPC **不需要从零自举**：官方 tar 里已经是可运行的编译器和 `install.sh`，只有 Lazarus 需要 `make`。这与旧 workflow 中 `run-on-arch-action` 容器里做的事一致，现在由配置里的 `commands` 编排。

`linux/386`、`linux/arm`、`linux/arm64` 在 x86 runner 上通过 `container` 段用 docker/qemu 执行上述编译；`linux/amd64` 默认直接在 runner 上编译。任何目标都可以用 `--no-container` 强制在宿主机编译。

## 5. 构建 lib 动态库

`lazsetup build` 把原先分散在 `.github/shell/add-package.*` 和 5 个 workflow 里的内容配置化：

- `build.packages` — 第三方 lpk 的 `--add-package-link` / `--add-package` 注册与编译
- `build.modes` — 每个模式的 `--bm`、`--ws`、`extra`、产物 zip 名，并用 `os` / `arch` 限定适用范围
- 源码模式下自动追加 `--lazarusdir=${cprefix}`
- 每个模式编译后立即把 `bin/liblcl.<ext>` 打包成 zip（Go 原生 `archive/zip`，不依赖 7z/zip 命令）

默认只跑适合当前目标平台的模式；`--mode NAME` 可显式指定多个。

## 6. 环境导出与缓存

- CI：`--github` 把工具链目录写入 `GITHUB_PATH`，把 `LAZBUILD` / `LAZARUSDIR` / `FPCDIR` 等写入 `GITHUB_ENV`，后续步骤直接可用。
- 本机：打印 PowerShell / bash 的环境变量设置语句。
- 下载缓存目录默认 `${home}/.cache/lazsetup`；CI 里可用 `actions/cache` 缓存它（加速项，不是依赖）。

## 7. 已知限制

- `macOS arm64` 当前走官方 4.8 aarch64 包。仓库里的《a_libenergy.dylib 编译说明.md》提到 arm64 可能需要 fpcupdeluxe 安装的 FPC 3.3.1 trunk 与 `-WM11.0 -dUseCthreads`，x86_64 用 `-WM10.15`。若实际编译报架构/SDK 错，需要新增一个 `mac-trunk` profile 并在 `targets.darwin/arm64.byRelease` 中切换。
- FPC 的 `install.sh` 是交互式脚本，配置里用 `printf "\n...\n" | ./install.sh` 提供默认答案；不同版本若提示项数量变化需要调整。非 root 的本机 Linux 需自行给命令加 `sudo` 或改用容器。
- `build.packages` 的 `./3rd-party/...` 路径沿用了现有 `add-package.sh`；若仓库实际目录不同，直接改配置。
- deb/pkg 安装需要管理员权限；Windows InnoSetup 需要可写目录。
- SourceForge 没有统一 checksum 清单，`sha256` 需要按 2. 的方式自己维护。
- 本机若处于某个 `go.work` 工作区（例如 `E:\app\workspace\go.work` 不含本模块），编译时加 `GOWORK=off`；CI 无此文件，debug workflow 已显式设置。

## 8. 实施状态

- 已完成：配置解析/展开、下载校验缓存、归档解压、平台映射、安装与源码编译编排、build 模式、CLI、单元测试、debug workflow、旧 workflow 停用。
- 下一步（debug workflow 验证通过后）：补齐 sha256、按真实容器路径微调 `containerDir`、恢复并改造 5 个正式 workflow、本机 Windows amd64 冒烟编译 `liblcl.dll`。
