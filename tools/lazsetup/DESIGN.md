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
| 主源 | SourceForge 硬编码在 `version.ts` | 官方镜像 `download.lazarus-ide.org` + `downloads.freepascal.org`（GitHub runner 访问 SourceForge 一律 403 Cloudflare 页面）；URL 由 JSON 模板生成 |
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
  `https://download.lazarus-ide.org/Lazarus%20macOS%20aarch64/Lazarus%204.8/`，
  文件为 `fpc-3.2.4rc1a.intelarm64-macosx.dmg` + `lazarus-darwin-aarch64-4.8.zip`。
  换版本只需在 `releases` 里改 `mac_fpc_dmg` / `laz_mac_zip` 两个别名（3.8/4.0 已给出示例）。
  dmg 挂载后用 `installer -package ... -target /` 安装 FPC；zip 解压到 `${prefix}`，`xattr -cr` 后
  `ln -sfn` 把 `lazbuild` 链接到 `/usr/local/bin`（`-f` 保证重复执行不失败）。

### source（Linux 全部架构）

按需求，**Linux 386 / amd64 / arm / arm64 全部走源码编译**，不再使用 deb：

1. `lazarus-<ver>-0.tar.gz` → `strip:1` 直接解压到 `${prefix}`
2. `fpc-<fpc>.<arch>-linux.tar` → 官方预编译编译器，解压到 `${prefix}`
3. `fpc-<fpc>.source.tar.gz` → RTL/FCL 源码，解压到 `${prefix}`
4. `cd ${cprefix}/fpc-<fpc>.<fpc_suffix> && printf '\n\n\n\n\n\n' | ./install.sh`（用默认答案，与旧 CI 一致）
5. `lazarus-patch` 组件（**仅 Linux、必须在 make 之前**）：按 `${laz}` 拼出 `patch/lazarus<版本>/`（容器内为 `${cpatch}`），目录存在就用 `cp -a "$P/gtk3/." "$T/"` 把 `gtk3/` 与 `synedit/` **按文件覆盖（overlay）**到 `${cprefix}/lcl/interfaces/gtk3` 与 `${cprefix}/components/synedit`；目录不存在直接跳过，不做任何版本比较或降级。补丁是**增量文件集**，不是完整源码树：`patch/lazarus4.8/synedit/` 里没有 `design/` 等原版目录，早期实现用 `rm -rf` 整目录替换会让 `components/Makefile` 的 `make -C synedit/design clean` 报 `No such file or directory` 并中断 `make clean all`，因此只能覆盖、不能删目标目录。4.8 的补丁补上了官方源码缺失的 `gtk3globals.pas`，这是 GTK3 能编译的关键。若放到 `make` 之后，LCL 单元已编译成 .ppu，覆盖源码不会生效。
6. `cd ${cprefix} && make clean all` → 产出 `lazbuild`。GTK2 与 GTK3 在**同一个容器**里依次编译，差别只有 `--ws=gtk2` / `--ws=gtk3`，镜像按架构分配而非按 widgetset。

补丁只有 4.8 一份；将来若换到 `patch/` 下没有对应目录的 Lazarus 版本，按规则不打补丁，GTK3 需要另备补丁目录。

FPC **不需要从零自举**：官方 tar 里已经是可运行的编译器和 `install.sh`，只有 Lazarus 需要 `make`。这与旧 workflow 中 `run-on-arch-action` 容器里做的事一致，现在由配置里的 `commands` 编排。

**宿主 runner 用最新 Ubuntu，但工具链编译和 lib 编译全部在 docker 容器里完成**。镜像严格按旧 `build-linux-docker-*.yml` 的分配：**x86 用 debian:11**（`linux/amd64` → `amd64/debian:11`、`linux/386` → `i386/debian:11`、`linux/arm` → `arm32v7/debian:11`，旧 CI 无 arm32 job 故沿用 debian:11），**aarch64 用 `arm64v8/ubuntu:18.04`**（22.04 之后已移除 `libgtk2.0-dev`，所以编译容器固定用 18.04 / debian:11 这条低版本 GTK 基线）。旧 CI 中 GTK2 与 GTK3 的各 build mode 是在**同一个容器里依次编译**的，镜像不按 widgetset 区分；`linux_GTK3` 启用后同样复用该架构的容器，只有 `--ws=gtk3` 不同。这两个发行版现已 EOL（默认 apt 源下载包时 404），所以每个 Linux 容器在安装依赖前先执行挂载进来的 `tools/lazsetup/scripts/apt-eol.sh`，把源切到 `archive.debian.org` / `old-releases.ubuntu.com`。

32 位 x86 容器还有一个独立坑：`i386/debian:11` 在 Docker 默认 seccomp 下无法解析任何域名（`getent` 失败、`apt-get` 报 `Temporary failure resolving ...`），换 host 网络或公共 DNS 都无效，只有 `--security-opt seccomp=unconfined` / `--privileged` 能恢复 —— 默认 profile 拦掉了 32 位 glibc 用于 DNS 的 socket 系统调用。因此 `linux/386` 的 container 配置里带 `securityOpt: ["seccomp=unconfined"]`，由 `runner.ContainerCommand` 同时作用于一次性与命名会话两种 `docker run`；其余架构保持默认 seccomp。

容器同时挂两个卷：`${repo}:/app` 放仓库源码，`${prefix}:/toolchain` 放工具链。关键点是**命名容器会话**：`docker run -d --name lazsetup-<os>-<arch> ... sleep infinity` 只创建一次，后续所有 `install.sh` / `make` / `lazbuild` 都通过 `docker exec` 进同一个容器。若沿用 `docker run --rm`，FPC 装进容器 `/usr/local` 后会随容器销毁，`make` 与 build 步骤必然失败。`--no-container` 仅用于本机调试，正式构建不用。

Lazarus 源码 tar 以 `strip: 1` 直接解压到 `${prefix}`，FPC 的 tar / source 也解压到 `${prefix}`，三者汇合到同一个目录，`cd ${cprefix} && make clean all` 才能找到 `Makefile`；不依赖 `prefix` 恰好叫 `work/lazarus`。

## 5. 构建 lib 动态库

`lazsetup build` 把原先分散在 `.github/shell/add-package.*` 和 5 个 workflow 里的内容配置化：

- `build.packages` — 第三方 lpk 的 `--add-package-link` / `--add-package` 注册与编译。当前 `liblcl.lpi` 通过 `OtherUnitFiles` 直接引用 `src/3rd/...` 源码，因此默认为空数组
- `build.modes` — 每个模式的 `--bm`、`--ws`、`extra`、`artifact`（产物文件）、`output`（zip 名），并用 `os` / `arch` 限定适用范围
- `bm` 必须匹配 `liblcl.lpi` 的 `<BuildModes><Item Name="...">`；`artifact` 对应该模式的 `Target/Filename`，例如 `win_amd64 → libenergy-amd64.dll`、`linux_GTK3 → libenergy-gtk3.so`、`Debug_CEF150 → libenergy-${laz_target}.${lib_ext}`
- 源码模式下自动追加 `--lazarusdir=${cprefix}`，容器模式下 `lazbuild` 用 `${cprefix}/lazbuild` 而不是宿主机路径
- **`ws` 必须显式配置**：`linux_GTK2 → gtk2`、`linux_GTK3 → gtk3`、`darwin_* → cocoa`、`win_* → win32`。`liblcl.lpi` 里的 `LCLWidgetType` 宏只供 IDE 使用，`lazbuild` 靠 `--ws` 决定去 `lcl/units/<cpu>-<os>/<widgetset>` 找 LCL 单元；不传会回落到默认 gtk2 单元目录
- 每个模式编译后立即把 `artifact` 打包成 zip（Go 原生 `archive/zip`）；产物不存在时**直接报错**，避免静默假成功

默认只跑适合当前目标平台的模式；`--mode NAME` 可显式指定多个。**这条是旧的 build-mode 路径**，由现有测试锁定，保持不变。

### 5.1 组合矩阵路径

带 `--all-combos` / `--combo` / `--cef` / `--ws` 任一项时，`build` 改走 `internal/build/combos.go`，不再直接用 `build.modes`：

- 配置在 `build.combinations` / `build.cefVersions` / `build.platformModes`。`ExpandCombos` 对 CEF 组合按 4 个版本扇出，并按 `widgetsets` 白名单过滤（**gtk2 没有 webkit2gtk，含 Webview 的组合不产 gtk2**），再按 `os/arch` 匹配 `platformModes` 得到 `bm`、`--ws`、产物文件名。
- 每个 job 调 `tools/lazbuild`（`package main` 单文件，CI 里用 `GOOS/GOARCH` 从 `lazsetup` module 现场交叉编译，放进挂载进容器的 `tools/lazbuild/lazbuild-<os>-<arch>`）。它把 `-d` 宏追加到目标 BuildMode 的 `CustomOptions`、按 `lazbuild.conf.json` 追加 `OtherUnitFiles` 目录，再执行 `lazbuild -B --bm --ws`，结束时恢复 lpi。
- `tools/lazbuild` 新增 `-lazarusdir`（源码编译必需，容器内传 `${cprefix}`、宿主传 `LAZARUSDIR`）和 `-extra`（macOS arm64 的 `--opt=-FD...` lld shim）两个透传参数。
- **lpi 一致性**：`BuildCombos` 在循环前备份 lpi，`defer` 无条件恢复；`tools/lazbuild` 自己也有一层恢复。所有 job 严格串行（同一工作树改写同一文件），临时改写不进 git。
- **macOS CEF 兼容补丁**：`Target.OS == "darwin"` 且非 dry-run 时，`patchCocoaCompat` 对四个 `src/3rd/CEF/*/source/uceflazaruscocoa.pas` 做两条临时替换。这些 CEF4Delphi 单元按 Lazarus 2.x 写成：① `TCocoaApplication` 当时由 `CocoaInt` 提供，4.8 已拆到独立单元 `CocoaApplication`，缺 uses 会报 `Identifier not found "TCocoaApplication"` 并连带 `sendEvent` / `terminate` 的 override 报错；② `CocoaWidgetSet.NSApp` 成员已被移除（4.8 的 `cocoaint.pas` 全程用全局 `NSApp`，并写 `TCocoaApplication(NSApp)`），会报 `identifier idents no member "NSApp"`。对应替换是 uses 段追加 `CocoaApplication`、`CocoaWidgetSet.NSApp` → `NSApplication(NSApp)`。加完第一条后 run #56 的 7 个错误全消失，只暴露出第二条，说明这两处就是全部阻塞点。循环结束 `defer` 无条件写回原始字节，已修复或缺失的文件跳过；与 lpi 一样不进 git，Windows / Linux 不受影响。
- **产物**：每个 job 编译完立刻打 zip，命名 `libenergy-[module-][os]-[arch]-[ws].zip`，随后删除原始库文件，避免下一个组合覆盖。`ws` 仅 Linux 有；`loong64` 只在 `reservedArches` 占位，不生成 target（FPC 3.2.2 不支持 loongarch64）。
- 容器命令里的 wrapper/lpi/conf/lazbuild 全部直接生成 guest 路径（`/app/...`、`/toolchain/lazbuild`），不依赖 `ContainerCommand` 对宿主路径的字符串替换 —— `%q` 会转义 Windows 反斜杠导致替换失效。

## 6. 环境导出与缓存

- CI：`--github` 把工具链目录写入 `GITHUB_PATH`，把 `LAZBUILD` / `LAZARUSDIR` / `FPCDIR` 等写入 `GITHUB_ENV`，后续步骤直接可用。
- 本机：打印 PowerShell / bash 的环境变量设置语句。
- 下载缓存目录默认 `${home}/.cache/lazsetup`；CI 里可用 `actions/cache` 缓存它（加速项，不是依赖）。

## 7. 已知限制

- `macOS arm64` 当前走官方 4.8 aarch64 包。仓库里的《a_libenergy.dylib 编译说明.md》提到 arm64 可能需要 fpcupdeluxe 安装的 FPC 3.3.1 trunk 与 `-WM11.0 -dUseCthreads`，x86_64 用 `-WM10.15`。若实际编译报架构/SDK 错，需要新增一个 `mac-trunk` profile 并在 `targets.darwin/arm64.byRelease` 中切换。
- **macOS arm64 链接器绕法**：官方 4.8 包里的 FPC 3.2.4rc1a 在 aarch64-darwin 生成的 Objective-C 协议方法表会被 Apple `ld`（Xcode 15+/ld-1167.5 起）拒绝 —— macOS 26 报 `ld: malformed method list atom ... fixups found beyond the number of method entries`，macOS 15 报 FPC `(9014) Can't call the linker`；x86_64 不受影响，换 runner 无效。`darwin_arm64` 的 `extra` 给 lazbuild 传 `--opt=-FD${repo}/tools/lazsetup/scripts/darwin-lld`，FPC 因此找到该目录下名为 `ld` 的 shim，改用 LLVM `ld64.lld` 链接；CI 里 `brew install lld` 提供链接器。FPC 3.2.4-rc2 已修复发射端，等工具链切到 Lazarus 5.0 后可去掉 `extra`、shim 与 brew 步骤。
- FPC 的 `install.sh` 是交互式脚本，配置里用 `./install.sh < /dev/null`（与现有 workflow 的空 here-doc 等价）让它取默认值。
- 旧 `.github/shell/add-package.*` 引用的 `./3rd-party/...` 在当前 main 分支已不存在；配置不再沿用。若将来 `liblcl.lpi` 改为依赖已安装的 IDE 包，在 `build.packages` 里填 `./src/3rd/...` 下真实存在的 lpk，`doctor` 会校验路径。
- 每个下载组件都带 2~3 个 SourceForge 备用镜像；下载器会识别 Cloudflare/404 返回的 HTML 页面并自动切换镜像，不会把网页当安装包交给静默安装器。
- deb/pkg 安装需要管理员权限；Windows InnoSetup 需要可写目录。
- SourceForge 没有统一 checksum 清单，`sha256` 需要按 2. 的方式自己维护。
- 本机若处于某个 `go.work` 工作区（例如 `E:\app\workspace\go.work` 不含本模块），编译时加 `GOWORK=off`；CI 无此文件，debug workflow 已显式设置。

## 8. 实施状态

- 已完成：配置解析/展开、下载校验缓存与 HTML 挑战页识别、归档解压、平台映射、安装与源码编译编排（含双卷容器挂载）、build 模式与逐模式产物、组合矩阵（4 组合 × 4 CEF 版本 × 平台/widgetset）、Lazarus 版本补丁、lpi 双保险恢复、`doctor` 一致性自检、CLI、单元测试、debug workflow、旧 workflow 停用。
- **测试策略**：真实下载 / 工具链编译 / 动态库编译全部在 GitHub Actions runner 上验证；本机只做 `go build` / `go vet` / `go test`。`debug-lazsetup.yml` 默认就是最小闭环（`combo_mode=true`、`cef_versions=CEF109`、`widgetsets=gtk2,gtk3`），一次触发产出 6 个 zip。
- 当前阶段：先让所有组合在 Actions 上编译成功，再扩全矩阵（全量 100 个 zip，不含 loong64）。
- 仍需决定：补齐 sha256；恢复并改造 5 个正式 workflow（**用户已明确暂停，未获同意不动**）；tag 触发时把 zip 传到 GitHub Release；loong64 需要 FPC 3.3.1 工具链。

## 9. doctor 自检项

`lazsetup doctor`（离线，不联网、不安装）逐项校验：项目文件可读 → 解析 `liblcl.lpi` 的 `BuildModes` → 每个启用模式的 `bm` 存在且 `artifact` 已展开 → 三方 lpk 路径存在 → `OtherUnitFiles` 的 16 个源码目录存在 → 8 个 target 全部能 Resolve 且 URL 合法、有备用镜像 → sha256 覆盖情况。`--network` 额外对当前 target 的下载 URL 做 256 字节探测，能诊断出 Cloudflare 挑战页。配置与 `.lpi` 不一致时返回非零退出码，CI 会在下载之前就失败。
