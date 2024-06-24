//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uTypes;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
{$IFDEF LINUX}xlib,{$ENDIF}
{$IFnDEF MSWINDOWS}LCLType,{$ENDIF}
{$IFDEF MSWINDOWS}Windows,{$ENDIF}
  Classes, SysUtils, Graphics, Controls,
  uCEFInterfaces,
  uCEFTypes;

type
  // 结构内字段有复杂类型需要定义成指针传递
  // 结构字段
  //  Record    String   Double    Single     Cardinal
  //    |         |        |         |           |
  //  PRecord   PChar    PDouble   PSingle    PCardinal

  // 在这里定义没有的指针类型

  PCefRangeArray = ^TCefRangeArray;
  PCefCompositionUnderlineDynArray = ^TCefCompositionUnderlineDynArray;
  PCefBinaryValueArray = ^TCefBinaryValueArray;
  PCefX509CertificateArray = ^TCefX509CertificateArray;

  PCefWindowHandle = ^TCefWindowHandle;
  PHMENU = ^HMENU;
  PHWND = ^HWND;
  PTCefStringList = ^TCefStringList;


  // TCompositionUnderlineArray
  PCompositionUnderlineArray = ^TCompositionUnderlineArray;
  TCompositionUnderlineArray = array[0..(High(integer) div SizeOf(TCefCompositionUnderline)) - 1] of TCefCompositionUnderline;

  // TRangeArray
  PRangeArray = ^TRangeArray;
  TRangeArray = array[0..(High(integer) div SizeOf(TCefRange)) - 1] of TCefRange;
implementation


end.
