#!/bin/bash
# lazbuild 多平台编译脚本 (Unix/Linux/macOS)
set -e
export CGO_ENABLED=0

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC="$SCRIPT_DIR/lazbuild.go"

echo "Source File: $SRC"
echo ""

targets=(
    "windows amd64 .exe"
    "windows 386   .exe"
    "linux   amd64"
    "linux   386"
    "linux   arm64"
    "linux   arm"
    "darwin  amd64"
    "darwin  arm64"
)

for t in "${targets[@]}"; do
    read -r os arch ext <<< "$t"
    export GOOS=$os
    export GOARCH=$arch
    name="lazbuild-${os}-${arch}${ext}"
    output="$SCRIPT_DIR/$name"
    echo "Build: $name"
    go build -ldflags "-s -w" -o "$output" "$SRC"
done

echo ""
echo "Build Complete:"
ls -lh "$SCRIPT_DIR"/lazbuild-* 2>/dev/null | awk '{print $5, $NF}'
