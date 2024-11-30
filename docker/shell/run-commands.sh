#!/bin/bash
  
ws=$1				# widgetset: gtk2 gtk3
bm=$2				# build-mode
br=$3				# branch
# arch: i386 x86_64 armhf aarch64
arch=$(dpkg --print-architecture) 	
# osname: debian11 ubuntu18.04
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

ls -al /app

cd /app/lib && git config --global --add safe.directory /app/lib

echo "======================================================"
echo "CPU: $(uname -m)"
echo "OS-version: $(uname -r)"
echo "OS-name: $(uname -s)"
echo "OS-all: $(uname -a)"
echo -e "LDD\n$(ldd --version)"
echo -e "GTK3-INFO\n$(dpkg -l | grep libgtk-3-0)"
echo -e "GTK2-INFO\n$(dpkg -l | grep libglib2.0)"
echo "======================================================"

# cat /etc/os-release
# lscpu

echo "Run commands ARCH: $arch OSName: $osn Branch: $br WS: $ws BM: $bm"

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

echo "$outZIPFilename"

sh /app/shell/build-lib.sh $ws $bm $br



