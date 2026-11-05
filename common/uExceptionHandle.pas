//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uExceptionHandle;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, Forms;

type
  // 自定义全局异常处理
  TExceptionHandlerCallbackPtr = function(AExceptionID: Integer; AErrorMsg: PChar): Pointer; extdecl;

var
  GExceptionHandlerCallbackPtr: TExceptionHandlerCallbackPtr;


  procedure CallException(E: Exception);
  procedure CallException(AExceptionID: Integer; E: Exception);

implementation

procedure CallException(E: Exception);
begin
  CallException(0, E);
end;

procedure CallException(AExceptionID: Integer; E: Exception);
begin
  // 1. 自定义全局异常处理
  if Assigned(GExceptionHandlerCallbackPtr) then
  begin
    GExceptionHandlerCallbackPtr(AExceptionID, PChar(E.Message));
    Exit;
  end;

  // 2. Application.OnException 事件
  if Assigned(Application) and Assigned(Application.OnException) then
  begin
    Application.OnException(Application, E);
    Exit;
  end;
end;

end.

