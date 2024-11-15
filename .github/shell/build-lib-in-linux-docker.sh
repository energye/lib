#!/usr/bin/env bash

# CEF x64 GTK3: build-lib-in-linux-docker.sh CEF GTK3 x64
# CEF ARM64 GTK3: build-lib-in-linux-docker.sh CEF GTK3 ARM64
# WK2 x64 GTK3: build-lib-in-linux-docker.sh WK2 GTK3 x64
# WK2 ARM64 GTK3: build-lib-in-linux-docker.sh WK2 GTK3 ARM64

# CEF | WK | WK2
bm=$1
# GTK2 | GTK3
ws=$2
# x64 | ARM64
arch=$3
# zip out filename
zipFilename=""

# 检查参数
if [ "$bm" != "CEF" ] && [ "$bm" != "WK" ] && [ "$bm" != "WK2" ]; then
  echo "Build mode is not (CEF or WK or WK2)"
  exit 1
fi

if [ "$ws" != "GTK2" ] && [ "$ws" != "GTK3" ]; then
  echo "Build ws is not (GTK2 or GTK3)"
  exit 1
fi

if [ "$arch" != "x64" ] && [ "$arch" != "ARM64" ]; then
  echo "Build arch is not (x64 or ARM64)"
  exit 1
fi

# 判断构建参数
# GTK3 相关
if [ "$bm" = "CEF" ] && [ "$ws" = "GTK3" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 CEF"
    zipFilename="lcl_cef_binary_linux64.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 CEF"
    zipFilename="lcl_cef_binary_linuxarm64.zip"
  fi
fi

if [ "$bm" = "WK2" ] && [ "$ws" = "GTK3" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 WK2"
    zipFilename="lcl_wk2_binary_linux64.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 WK2"
    zipFilename="lcl_wk2_binary_linuxarm64.zip"
  fi
fi

# GTK2 相关
# coding ...

# 检查 zipFilename 如果为空，则上面的判断条件都未符合
if [ "$zipFilename" = "" ]; then
  echo "Build parameters check error"
  exit 1
fi

echo "Add Package ============================================="
cd /app/lib

git clean -xdf
ls -al
./.github/shell/add-package.sh "/app/lazarus"

echo "Build Dynamic library LCL CEF ============================================="
/app/lazarus/lazbuild -B --bm="$bm" --ws=$ws --lazarusdir="/app/lazarus" "liblcl.lpi"

echo "View liblcl.so ============================================="
objdump -p /app/lib/bin/liblcl.so

echo "ZIP liblcl.so ============================================="
mkdir /app/bins
zip -j /app/bins/$zipFilename /app/lib/bin/liblcl.so