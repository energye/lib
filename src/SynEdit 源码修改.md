
### synedit 组件库 （修改）

```text
需同步升级
  来自 lazarus components/SynEdit 组件库
  升级 lazarus 需要同步对应版本

解决 linux 初始化 libenergy.so 库问题
修改 SynEdit 组件库相关 initialization 初始化函数

1. 修改 [syntextdrawer.pp](synedit/syntextdrawer.pp) 单元 
// 新增
procedure InitializeLeadBytes;

initialization
  SynTextDrawerFinalization:=false;
{$IFNDEF HE_LEADBYTES}
  // 新增 修改该函数在 linux 初始化流程, 非linux 自动初始化, linux 手动初始化
  {$IFnDEF Linux} 
  InitializeLeadBytes;
  {$ENDIF}
{$ENDIF} 

2. 修改 [synedit.pp](synedit/synedit.pp) 单元
// 新增
procedure InitSynDefaultFont;

initialization
  // 新增 修改该函数在 linux 初始化流程, 非linux 自动初始化, linux 手动初始化
  {$IFnDEF Linux} 
  InitSynDefaultFont;
  {$ENDIF}
  Register;
```

新增
    lazsyngtk3imm.pas

修改
    SynEdit.pp 
```
uses
  {$IFDEF LCLGTK3}
  LazSynGtk3IMM,
  {$ENDIF}
```