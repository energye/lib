//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uLCLSortMethods;

{$MACRO ON}
{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  Classes,
  ComCtrls,
  ComboEx, laz.VirtualTrees,
  uLCLEventCallback;

{
  排序方法回调函数, 作用在 LCL 一些组件排序功能上
  自定义, 按生成规则使用
}

type

  PStringListSortCompare = ^TStringListSortCompare;

  // 排序相关回调类
  TSortEventMethod = class
  public // 函数指针定义, 规则: 类名+Ptr 静态: static; 注册时通过初始化全局注册一次
    TCollectionSortComparePtr: Pointer; static;
    TLVComparePtr: Pointer; static;
    TListSortComparePtr: Pointer; static;
    ListSortEventPtr: Pointer; static;
    TListItemsComparePtr: Pointer; static;
    TStringListSortComparePtr: Pointer; static;
    TVTGetNodeProcPtr: Pointer; static;
    TTreeNodeComparePtr: Pointer; static;
  public // 回调方法定义, 静态: static
    class function OnTCollectionSortCompare(Item1, Item2: TCollectionItem): integer; static;
    class function OnTLVCompare(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall; static;
    class function OnTListSortCompare(Item1, Item2: Pointer): Integer; static;
    class function OnTListItemsCompare(AList: TListControlItems; AItem1, AItem2: Integer): Integer; static;
    class function OnTStringListSortCompare(List: TStringList; Index1, Index2: Integer): Integer; static;
  public // 回调方法定义 of object
    procedure OnTVTGetNodeProc(Sender: TBaseVirtualTree; Node: PVirtualNode; Data: Pointer; var Abort: Boolean);
    function OnTTreeNodeCompare(Node1, Node2: TTreeNode): integer;
  public
    constructor Create();
    destructor Destroy; override;
  end;

var
  // 全局对象方法
  GSortEventMethod: TSortEventMethod = nil;

implementation

constructor TSortEventMethod.Create();
begin
  inherited Create();
end;

destructor TSortEventMethod.Destroy;
begin

end;

class function TSortEventMethod.OnTCollectionSortCompare(Item1, Item2: TCollectionItem): integer;
begin
  LCLSendEventByPointer(TCollectionSortComparePtr, [Item1, Item2, @Result]);
end;

class function TSortEventMethod.OnTLVCompare(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall;
begin
  LCLSendEventByPointer(TLVComparePtr, [Item1, Item2, Integer(AOptionalParam), @Result]);
end;

class function TSortEventMethod.OnTListSortCompare(Item1, Item2: Pointer): Integer;
begin
  LCLSendEventByPointer(TListSortComparePtr, [Item1, Item2, @Result]);
end;

class function TSortEventMethod.OnTListItemsCompare(AList: TListControlItems; AItem1, AItem2: Integer): Integer;
begin
  LCLSendEventByPointer(TListItemsComparePtr, [AList, AItem1, AItem2, @Result]);
end;

class function TSortEventMethod.OnTStringListSortCompare(List: TStringList; Index1, Index2: Integer): Integer;
begin
  LCLSendEventByPointer(TStringListSortComparePtr, [List, Index1, Index2, @Result]);
end;

procedure TSortEventMethod.OnTVTGetNodeProc(Sender: TBaseVirtualTree; Node: PVirtualNode; Data: Pointer; var Abort: Boolean);
begin
  LCLSendEventByPointer(TVTGetNodeProcPtr, [Sender, Node, Data, @Abort]);
end;

function TSortEventMethod.OnTTreeNodeCompare(Node1, Node2: TTreeNode): integer;
begin
  LCLSendEventByPointer(TTreeNodeComparePtr, [Node1, Node2, @Result]);
end;

initialization
  GSortEventMethod := TSortEventMethod.Create();

finalization
  GSortEventMethod.Free;
  GSortEventMethod := nil;

end.
