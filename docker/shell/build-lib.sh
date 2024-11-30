#!/bin/bash

ws=$1				# widgetset: gtk2 gtk3
bm=$2				# build-mode
br=$3				# branch
# arch: i386 amd64 armhf arm64
arch=$(dpkg --print-architecture) 	
# osname: DebianGNULinux11(bullseye) Ubuntu18.04.6LTS
osn=$(grep '^PRETTY_NAME=' /etc/os-release | cut -d'=' -f2 | sed 's/"//g' | tr -d '[:space:]|/')

if [ "$ws" != "gtk2" ] && [ "$ws" != "gtk3" ]; then
  echo "widgetset error args[1]: is not (gtk2 gtk3)"
  exit 1
elif [ "$bm" = "" ]; then
  echo "build-mode error args[2]: is nil"
  exit 1
elif [ "$br" = "" ]; then
  echo "branch error args[3]: is nil"
  exit 1
fi

echo "Build Lazarus ARCH: $arch WS: $ws BM: $bm OSName: $osn"

workDIR="/app/$osn/$arch"
libDIR="/app/lib"
shellDIR="/app/shell"
lazarusDIR="$workDIR/lazarus"
libBins="/app/bins"

echo "======================================================"
echo "Build Lazarus workDIR   : $workDIR"
echo "Build Lazarus libDIR    : $libDIR"
echo "Build Lazarus shellDIR  : $shellDIR"
echo "Build Lazarus lazarusDIR: $lazarusDIR"
echo "Build Lazarus libBins   : $libBins"
echo "======================================================"

get_value() {
    local key=$1
    grep "^$key=" "/app/shell/outzipname.txt" | cut -d'=' -f2
}

# 从配置文件获取当前构建的liblcl压缩包名称
outZIPFilename=$(get_value $br-$ws-$arch-$bm)

if [ "$outZIPFilename" = "" ]; then
  echo "Build liblcl error: get out zip filename is nil. key: $br-$ws-$arch-$bm"
  exit 1
fi

if ! test -d "$workDIR"; then
  mkdir -p $workDIR
fi


if ! test -d "$lazarusDIR"; then
  tar -xvf /app/lazarus-3.6-0.tar.gz -C $workDIR
fi

# build lazarus
echo "Build Lazarus lazbuild: $lazarusDIR/lazbuild"

if ! test -f "$lazarusDIR/lazbuild"; then
  tempArch=$arch
  if [ "$tempArch" = "armhf" ]; then
		tempArch="arm"
	fi
  if [ "$tempArch" = "arm64" ]; then
		tempArch="aarch64"
	fi
  if [ "$tempArch" = "amd64" ]; then
		tempArch="x86_64"
	fi
  echo "tar -xvf /app/fpc-3.2.2.$tempArch-linux.tar"
  tar -xvf /app/fpc-3.2.2.$tempArch-linux.tar -C $lazarusDIR
  tar -xvf /app/fpc-3.2.2.source.tar.gz -C $lazarusDIR
  cd $lazarusDIR/fpc-3.2.2.$tempArch-linux && -y | ./install.sh
  cd $lazarusDIR && make clean all
  objdump -p $lazarusDIR/lazbuild
fi

echo "Lazarus version: $($lazarusDIR/lazbuild --v)"

echo "Add Package lib DIR: $libDIR"

# clean 仓库
echo "$libDIR: git clean -xdf"
cd $libDIR && git clean -xdf

# 检出仓库分支
echo "git -c credential.helper= -c core.quotepath=false -c log.showSignature=false checkout -B $br origin/$br --"
git -c credential.helper= -c core.quotepath=false -c log.showSignature=false checkout -B $br origin/$br --

# 添加三方软件包
echo "======================================================"
sh $shellDIR/add-package.sh $lazarusDIR
echo "======================================================"

echo "======================================================"

echo "Build liblcl ARCH: $arch OSName: $osn Branch: $br WS: $ws BM: $bm"

if ! test -d "$libBins"; then
  mkdir $libBins
fi

# 构建 lib 
$lazarusDIR/lazbuild -B --bm="$bm" --ws=$ws --lazarusdir="$lazarusDIR" "liblcl.lpi"

objdump -p ./bin/liblcl.so
rm -rf $libBins/$outZIPFilename
echo "zip $libBins/$outZIPFilename ./bin/liblcl.so"
zip -j $libBins/$outZIPFilename ./bin/liblcl.so
rm -rf ./bin/liblcl.so

echo "======================================================"
if ! test -f "$libBins/$outZIPFilename"; then
  echo "Build liblcl fail."
  exit 1
fi
echo "Build liblcl END ARCH: $arch OSName: $osn Branch: $br WS: $ws BM: $bm"



