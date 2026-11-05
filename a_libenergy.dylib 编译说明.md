MacOS 编译 libenergy.dylib 时麻烦

x86_64 架构和 arm64 架构编译时不同, 在低版本 MacOS 没试过交叉编译结果

目前: 在 macOS 15.7 上使用 lazarus 编译出的库需要使用不同的 lazarus 版本

x86_64 架构: 使用官方提供的安装包, 当前发布的最新版本 例如 4.4 4.6 等等

arm64 架构: 使用 fpcupdeluxe-aarch64-darwin-cocoa.app 安装, 选择对应的官方发布版本编译

lazarus 都使用脚本安装三方包
```cmd
add-package.sh /Users/yanghy/app/lazarus

amd64 架构编译 使用官方发布的 lazarus
./shell/build-mac.sh /Users/yanghy/app/lazarus darwin_amd64_127 cocoa

arm64 架构编译 使用 fpcupdeluxe-aarch64-darwin-cocoa.app 安装的 lazarus
./shell/build-mac.sh /Users/yanghy/app/lazarusup/lazarus4.6/lazarus darwin_arm64_127 cocoa
```

注意：编译选项里不使用"更小而不是更快"

- 编译 libenergy.dylib
- x85_64: 在自定义选项添加 -WM10.15 （FPC 3.2.x +）
- aarch64: 在自定义选项添加 -WM11.0,（FPC 3.3.1)（trunk分枝）

```
-WM11.0
-dUseCthreads 
```