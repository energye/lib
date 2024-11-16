#!/usr/bin/env bash

# CEF x64 gtk3: build-lib-in-linux-docker.sh CEF gtk3 x64
# CEF ARM64 gtk3: build-lib-in-linux-docker.sh CEF gtk3 ARM64
# WK2 x64 gtk3: build-lib-in-linux-docker.sh WK2 gtk3 x64
# WK2 ARM64 gtk3: build-lib-in-linux-docker.sh WK2 gtk3 ARM64

# CEF | WK | WK2 | none
bm=$1
# gtk2 | gtk3
ws=$2
# x64 | ARM64 | i386
arch=$3
# zip out filename
zipFilename=""

# 检查参数
if [ "$bm" != "CEF" ] && [ "$bm" != "WK" ] && [ "$bm" != "WK2" ] && [ "$bm" != "none" ]; then
  echo "Build mode is not (CEF or WK or WK2 or none)"
  exit 1
fi

if [ "$ws" != "gtk2" ] && [ "$ws" != "gtk3" ]; then
  echo "Build ws is not (gtk2 or gtk3)"
  exit 1
fi

if [ "$arch" != "x64" ] && [ "$arch" != "ARM64" ] && [ "$ws" = "i386" ]; then
  echo "Build arch is not (x64 or ARM64 or i386)"
  exit 1
fi

# 判断构建参数
# gtk3 相关
if [ "$bm" = "CEF" ] && [ "$ws" = "gtk3" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 CEF"
    zipFilename="lcl_cef_binary_linux64.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 CEF"
    zipFilename="lcl_cef_binary_linuxarm64.zip"
  fi
fi

if [ "$bm" = "WK2" ] && [ "$ws" = "gtk3" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 WK2"
    zipFilename="lcl_wk2_binary_linux64.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 WK2"
    zipFilename="lcl_wk2_binary_linuxarm64.zip"
  fi
fi

# gtk2 相关
# coding ... 还未增加对 webkit1 支持

# gtk2 需要 CEF <= 106 以下版本
if [ "$bm" = "CEF" ] && [ "$ws" = "gtk2" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 GTK2 CEF"
    zipFilename="lcl_cef_binary_linux64_gtk2.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 GTK2 CEF"
    zipFilename="lcl_cef_binary_linuxarm64_gtk2.zip"
  fi
fi

if [ "$bm" = "WK" ] && [ "$ws" = "gtk2" ]; then
  if [ "$arch" = "x64" ]; then
    bm="Linux64 GTK2 WK"
    zipFilename="lcl_wk_binary_linux64_gtk2.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64 GTK2 WK"
    zipFilename="lcl_wk_binary_linuxarm64_gtk2.zip"
  fi
fi

if [ "$bm" = "none" ] && [ "$ws" = "gtk2" ]; then
  if [ "$arch" = "i386" ]; then
    bm="Linux32"
    zipFilename="lcl_binary_linux32.zip"
  elif [ "$arch" = "x64" ]; then
    bm="Linux64"
    zipFilename="lcl_binary_linux64.zip"
  elif [ "$arch" = "ARM64" ]; then
    bm="LinuxARM64"
    zipFilename="lcl_binary_linuxarm64.zip"
  fi
fi

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

echo "Build Dynamic library: bm=$bm, ws=$ws ============================================="
/app/lazarus/lazbuild -B --bm="$bm" --ws=$ws --lazarusdir="/app/lazarus" "liblcl.lpi"

echo "View liblcl.so ============================================="
objdump -p /app/lib/bin/liblcl.so

echo "ZIP liblcl.so ============================================="
mkdir /app/bins
zip -j /app/bins/$zipFilename /app/lib/bin/liblcl.so