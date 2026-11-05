//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uControlPatchs;

{$I ExtDecl.inc}
{$mode objfpc}{$H+}


interface

uses
  InterfaceBase,
  Classes, SysUtils, Graphics, ComCtrls, LMessages,
  {$IFDEF WINDOWS}ExtCtrls, CommCtrl,{$ENDIF}
  Forms, Controls, DateUtils;


type
  // 重定定义
  TUnixDateTime = type Int64; // LongInt Int64 改为LongInt。只精确到秒

  TApplicationHelper = class helper for TApplication
  public class var
    // 定义运行过程指针
    FRunLoopReceivedPtr: Pointer;
  private
    procedure MyRunLoop;
  public
    procedure RestoreTopMosts;
    procedure MyRun;
    procedure SetRunLoopReceived(AProc: Pointer);
  end;

  function ToUnixTime(ADateTime: TDateTime): TUnixDateTime; inline;
  function UnixToTime(ADateTime: TUnixDateTime): TDateTime; inline;

  procedure Application_SetRunLoopReceived(AObj: TApplication; AProc: Pointer); extdecl;

  procedure Control_WindowProc(AControl: TControl; var AMsg: TLMessage); extdecl;

implementation

function ToUnixTime(ADateTime: TDateTime): TUnixDateTime; inline;
begin
  Result := DateTimeToUnix(LocalTimeToUniversal(ADateTime));
end;

function UnixToTime(ADateTime: TUnixDateTime): TDateTime; inline;
begin
  Result := UniversalTimeToLocal(UnixToDateTime(ADateTime));
end;

procedure Application_SetRunLoopReceived(AObj: TApplication; AProc: Pointer); extdecl;
begin
  AObj.SetRunLoopReceived(AProc);
end;

procedure Control_WindowProc(AControl: TControl; var AMsg: TLMessage); extdecl;
begin
  AControl.WindowProc(AMsg);
end;

procedure TApplicationHelper.RestoreTopMosts;
begin
  Self.RestoreStayOnTop(False);
end;

procedure TApplicationHelper.MyRunLoop;
type TRunLoopReceivedProc = function(data: Pointer): Pointer; extdecl; // 实际返回值未使用，主要是为了兼容些
begin
  repeat
    if TRunLoopReceivedProc(FRunLoopReceivedPtr)(Self) = nil then
    begin
      if CaptureExceptions then
        try
          HandleMessage;
        except
          HandleException(Self);
        end
      else
        HandleMessage;
    end;
  until Terminated;
end;

procedure TApplicationHelper.MyRun;
begin
  if Assigned(FRunLoopReceivedPtr) then
  begin
    if (MainForm <> nil) and ShowMainForm then
      MainForm.Show;
    WidgetSet.AppRun(@MyRunLoop);
  end else
    Run();
end;

procedure TApplicationHelper.SetRunLoopReceived(AProc: Pointer);
begin
  FRunLoopReceivedPtr := AProc;
end;

// 兼容版，因为内部Lazarus2.0起后有个兼容版本，但实际使用中并不兼容。
// TLVCompare = function(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall;
function DefaultListViewSortProc(Item1, Item2: TListItem; AOptionalParam: PtrInt): Integer stdcall;
begin
  with Item1 do
    if Assigned(TListView(ListView).OnCompare) then
      TListView(ListView).OnCompare(ListView, Item1, Item2, AOptionalParam, Result)
    else
      Result := CompareText(Item1.Caption, Item2.Caption);
end;

end.

