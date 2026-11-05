# 动态链接库
ldconfig -p | grep webkit2gtk-4.1
ldconfig -p | grep webkit2gtk-4.0
ldconfig -p | grep javascriptcoregtk-4.0
ldconfig -p | grep javascriptcoregtk-4.1
ldconfig -p | grep libsoup-2.4
ldconfig -p | grep libsoup-3.0

Linux GTK3 最低要求: GTK >= 3.24.24 and Glib2.0 >= 2.66
GTK3: dpkg -l | grep libgtk-3-0
Glib: dpkg -l | grep libglib2.0
ldd --version

# 安装 4.0 开发包
sudo apt install libwebkit2gtk-4.0-dev

# 安装 4.1 开发包
sudo apt install libwebkit2gtk-4.1-dev

# 运行时/库文件版本 (Runtime)
apt list --installed | grep webkit

# 查看已安装包的详细信息。dpkg -l | grep webkit: 
dpkg -l | grep -i webkit

# 这会直接返回对应的开发文件版本。pkg-config --modversion webkit2gtk-4.0: 
pkg-config --modversion webkit2gtk-4.0

# 查看特定软件包的版本详情。 dpkg -s <package_name> | grep Version: 
dpkg -s libwebkit2gtk-4.0-37 | grep Version

# 开发包版本 (Development)
pkg-config --modversion <pkg_name>: Linux 下检查开发库标准的、与发行版无关的方法。直接告诉你会链接哪个版本的头文件和库。

pkg-config --modversion webkit2gtk-4.0
pkg-config --modversion webkit2gtk-4.1

# 针对Ubuntu with aptitude installed。更快的时间的？依赖检查所有已安装的开发包。
aptitude search '?installed (?and (?name webkit) ?name (-dev))': 

aptitude search '?installed (?and (?name webkit) ?term (-dev))'


objdump -p local_load | grep NEEDED | grep soup

---
# 动态跟踪运行时真正加载的 所有库

strace -e trace=openat -o strace.log ./local_load

# libsoup 2.4 and 3.0 docs api
## 2.4:

## 3.0:
- https://libsoup.gnome.org//libsoup-3.0/
- https://gnome.pages.gitlab.gnome.org/libsoup/libsoup-3.0
- https://gitlab.gnome.org/GNOME/libsoup