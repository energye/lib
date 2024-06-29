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
  Classes, SysUtils, Forms, Dialogs;

type
  // 自定义全局异常处理
  TExceptionHandlerCallbackPtr = function(AFuncName, AErrorMsg: PChar): Pointer; extdecl;

var
  GExceptionHandlerCallbackPtr: TExceptionHandlerCallbackPtr;


  procedure CallException(E: Exception);
  procedure CallException(FuncName: string; E: Exception);

implementation

procedure CallException(E: Exception);
begin
  CallException('', E);
end;

procedure CallException(FuncName: string; E: Exception);
begin
  // 1. 自定义全局异常处理
  if Assigned(GExceptionHandlerCallbackPtr) then
  begin
    GExceptionHandlerCallbackPtr(PChar(FuncName), PChar(E.Message));
    Exit;
  end;

  // 2. Application.OnException 事件
  if Assigned(Application) and Assigned(Application.OnException) then
  begin
    Application.OnException(Application, E);
    Exit;
  end;

  // 3. 都没有, 弹出错误对话框
  MessageDlg(E.Message,  mtError, [mbOK], 0);
end;

end.

