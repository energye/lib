//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uLCL_SortMethods;

{$MACRO ON}
{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  Classes,
  ComCtrls,
  ComboEx,
  uLCL_EventCallback;

{
  排序方法回调函数, 作用在 LCL 一些组件排序功能上
}

type
  // 排序相关回调类
  TSortEventMethod = class
  public // 函数指针定义, 规则, 去除T, 类名+函数名+EventPtr， 静态: static;
    CollectionSortEventPtr: Pointer; static;
    CustomListViewCustomSortEventPtr: Pointer; static;
    FPListSortEventPtr: Pointer; static;
    ListSortEventPtr: Pointer; static;
    ListControlItemsCustomSortEventPtr: Pointer; static;
    StringListCustomSortEventPtr: Pointer; static;
  public // 回调方法定义, 静态: static;
    class function OnTCollectionSortCompare(Item1, Item2: TCollectionItem): integer; static;
    class function OnTLVCompare(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall; static;
    class function OnTListSortCompare(Item1, Item2: Pointer): Integer; static;
    class function OnTListItemsCompare(AList: TListControlItems; AItem1, AItem2: Integer): Integer; static;
    class function OnTStringListSortCompare (List: TStringList; Index1, Index2: Integer): Integer; static;
  end;


implementation

class function TSortEventMethod.OnTCollectionSortCompare(Item1, Item2: TCollectionItem): integer;
begin
  Result := 0;
  if Assigned(CollectionSortEventPtr) then
    SendEventByPointer(CollectionSortEventPtr, [Item1, Item2, @Result]);
end;

class function TSortEventMethod.OnTLVCompare(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall;
var
  InItem1: TListItem;
  InItem2: TListItem;
  InOptionalParam: Integer;
  InResult: Integer;
begin
  Result := 0;
  if Assigned(CustomListViewCustomSortEventPtr) then
  begin
    InItem1 := Item1;
    InItem2 := Item2;
    InOptionalParam := Integer(AOptionalParam);
    SendEventByPointer(CustomListViewCustomSortEventPtr, [InItem1, InItem2, InOptionalParam, @InResult]);
    Result := InResult;
  end;
end;

class function TSortEventMethod.OnTListSortCompare(Item1, Item2: Pointer): Integer;
begin
  Result := 0;
  if Assigned(FPListSortEventPtr) then
  begin
    SendEventByPointer(FPListSortEventPtr, [Item1, Item2, @Result]);
  end
  else if Assigned(ListSortEventPtr) then
  begin
    SendEventByPointer(ListSortEventPtr, [Item1, Item2, @Result]);
  end;
end;

class function TSortEventMethod.OnTListItemsCompare(AList: TListControlItems; AItem1, AItem2: Integer): Integer;
begin
  Result := 0;
  if Assigned(ListControlItemsCustomSortEventPtr) then
    SendEventByPointer(ListControlItemsCustomSortEventPtr, [AList, AItem1, AItem2, @Result]);
end;

class function TSortEventMethod.OnTStringListSortCompare (List: TStringList; Index1, Index2: Integer): Integer;
begin
  Result := 0;
  if Assigned(StringListCustomSortEventPtr) then
    SendEventByPointer(StringListCustomSortEventPtr, [List, Index1, Index2, @Result]);
end;

end.
