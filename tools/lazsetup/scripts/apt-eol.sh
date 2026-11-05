#!/bin/sh
# Fix apt mirrors for EOL build images before installing the GTK/Lazarus
# build dependencies.
#
# The old build-linux-docker-*.yml workflows used debian:11 for x86 targets
# and arm64v8/ubuntu:18.04 for aarch64. Both releases have reached EOL: their
# default mirrors still serve the package indexes but the referenced .deb
# files are gone, so `apt-get install` fails with a wall of HTTP 404 (e.g.
# deb.debian.org/debian-security/.../libglib2.0-dev_...deb).
#
# The repository is mounted at /app inside the build container, so this
# script is invoked from container.install in toolchain.json as
#   /bin/sh /app/tools/lazsetup/scripts/apt-eol.sh && apt-get update -q -y

set -e
[ -r /etc/os-release ] || exit 0
. /etc/os-release

case "$ID" in
  debian)
    case "$VERSION_ID" in
      11*)
        cat > /etc/apt/sources.list <<'EOF'
deb http://archive.debian.org/debian bullseye main
deb http://archive.debian.org/debian-security bullseye-security main
EOF
        mkdir -p /etc/apt/apt.conf.d
        printf 'Acquire::Check-Valid-Until "false";\n' \
          > /etc/apt/apt.conf.d/99lazsetup-no-valid-until
        ;;
    esac
    ;;
  ubuntu)
    case "$VERSION_ID" in
      18.04*)
        if [ -f /etc/apt/sources.list ]; then
          sed -i 's|http://archive.ubuntu.com/ubuntu|http://old-releases.ubuntu.com/ubuntu|g; s|http://security.ubuntu.com/ubuntu|http://old-releases.ubuntu.com/ubuntu|g' /etc/apt/sources.list
        fi
        ;;
    esac
    ;;
esac
