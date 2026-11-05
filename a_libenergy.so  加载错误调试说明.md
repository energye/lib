记录 linux 加载动态连接库 so 加载失败问题
编译 so 需要 debug 模式 -g 参数

gdb ./designer_debug
# 崩溃后执行：
(gdb) thread apply all bt   # 查看所有线程调用栈
(gdb) info registers         # 查看CPU寄存器，分析崩溃点
(gdb) x/10i $rip-20         # 显示崩溃点附近的汇编指令
(gdb) info proc mappings    # 查看内存映射，确认.so加载地址
(gdb) disas $rip-32, $rip+32 # 反汇编崩溃点周围代码

```c
1. 新建 test.c 文件, 写入下面代码
vi test.c
or
nano test.c

#include <dlfcn.h>
#include <stdio.h>

int main() {
    void* h = dlopen("./libenergy-gtk2.so", RTLD_NOW);
    if (!h) {
        printf("error: %s\n", dlerror());
    } else {
        printf("success\n");
    }
}

2. 执行编译命令， 编译出 test 执行文件
gcc test.c -o test -ldl -g

3. 执行调试命令
gdb ./test

4. 进入 gdb 模式，执行 
run

5. 执行 bt 查看结果
bt

6. 退出 gdb, 按键 q
q
```

- 方式二，右键直接运行打不开程序
```c
#!/bin/bash

# 把所有输出保存到日志文件
exec >> /tmp/debug_run.log 2>&1

echo "======== 调试开始 ========"
echo "当前目录: $(pwd)"
echo "用户: $(whoami)"
echo "DISPLAY: $DISPLAY"
echo "XAUTHORITY: $XAUTHORITY"
echo "LD_LIBRARY_PATH: $LD_LIBRARY_PATH"
echo "=========================="

# 运行你的程序（把这里换成你的二进制名）
./go_build_synedit_go
```