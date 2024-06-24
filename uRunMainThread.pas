//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uRunMainThread;

{$mode objfpc}{$H+}

{$I ExtDecl.inc}

interface

uses
  Classes,
  SysUtils;

type
  // 主线程同步回调
  TThreadSyncCallbackPtr = function: Pointer; extdecl;
  // 主线程异步回调
  TThreadAsyncCallbackPtr = function(id: NativeInt): Pointer; extdecl;

type

  //主线程异步回调类
  TRunMainThreadCallback = class
  protected class var
  public
    procedure RunMainThreadAsyncCall(Data: PtrInt);
  public
    class procedure RunMainThreadSyncCall();
  end;

var
  // 主线程 同步 回调
  GThreadSyncCallbackPtr: TThreadSyncCallbackPtr;
  // 主线程 异步 回调
  GThreadAsyncCallbackPtr: TThreadAsyncCallbackPtr;

implementation

//主线程异步回调
procedure TRunMainThreadCallback.RunMainThreadAsyncCall(Data: PtrInt);
begin
  if Assigned(GThreadAsyncCallbackPtr) then
    GThreadAsyncCallbackPtr(nativeuint(Data)); // uint32
end;

//主线程同步回调
class procedure TRunMainThreadCallback.RunMainThreadSyncCall();
begin
  if Assigned(GThreadSyncCallbackPtr) then
    GThreadSyncCallbackPtr();
end;

end.
