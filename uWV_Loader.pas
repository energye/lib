//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uWV_Loader;

{$mode objfpc}{$H+}
{$Z4+}

{$IFDEF MACOSX}
  {$UNDEF  USE_MULTI_THREAD_LOOP} // Will fail on Mac
  {$DEFINE USE_APP_HELPER}        // Required on Mac
{$ENDIF}

interface

uses
  SysUtils, Controls,
  uWVTypes, uWVTypeLibrary,
  uTools,
  uWV_EventCallback, uWV_RecordStruct;


// Loader events
procedure WVLoader_OnEnvironmentCreated(Sender: TObject);
procedure WVLoader_OnInitializationError(Sender: TObject);
procedure WVLoader_OnGetCustomSchemes(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
procedure WVLoader_OnNewBrowserVersionAvailable(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
procedure WVLoader_OnBrowserProcessExited(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
procedure WVLoader_OnProcessInfosChanged(Sender: TObject; const aEnvironment: ICoreWebView2Environment);

var
  OnEnvironmentCreated_DataPtr: Pointer;
  OnInitializationError_DataPtr: Pointer;
  OnGetCustomSchemes_DataPtr: Pointer;
  OnNewBrowserVersionAvailable_DataPtr: Pointer;
  OnBrowserProcessExited_DataPtr: Pointer;
  OnProcessInfosChanged_DataPtr: Pointer;

implementation

// Loader events
procedure WVLoader_OnEnvironmentCreated(Sender: TObject);
begin
  SendWVEventByPointer(OnEnvironmentCreated_DataPtr, [Sender]);
end;

procedure WVLoader_OnInitializationError(Sender: TObject);
begin
  SendWVEventByPointer(OnInitializationError_DataPtr, [Sender]);
end;

procedure WVLoader_OnGetCustomSchemes(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
var
  RetData, currentData: Pointer; // 数据指针
  RetSize: integer; // 数据个数
  idx, customSchemeInfoSizeOf: integer; // 遍历，和record大小
  customSchemePtr: TCustomSchemeInfoPtr;// 在指针地址取值
begin
  SendWVEventByPointer(OnGetCustomSchemes_DataPtr, [Sender, @RetData, @RetSize]);
  if RetSize > 0 then
  begin
    customSchemeInfoSizeOf := SizeOf(TCustomSchemeInfoPtr); // record大小
    SetLength(aCustomSchemes, RetSize); // 初始化数组大小
    for idx := 0 to RetSize - 1 do
    begin
      currentData := RetData + customSchemeInfoSizeOf * idx; // 当前数据指针
      customSchemePtr := PCustomSchemeInfoPtr(currentData)^; // 取出数据转成自定义URL协议record
      // 设置值
      aCustomSchemes[idx].SchemeName := PCharToUStr(customSchemePtr.SchemeName);
      aCustomSchemes[idx].TreatAsSecure := customSchemePtr.TreatAsSecure;
      aCustomSchemes[idx].AllowedDomains := PCharToUStr(customSchemePtr.AllowedDomains);
      aCustomSchemes[idx].HasAuthorityComponent := customSchemePtr.HasAuthorityComponent;
    end;
  end;
end;

procedure WVLoader_OnNewBrowserVersionAvailable(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  SendWVEventByPointer(OnNewBrowserVersionAvailable_DataPtr, [Sender, aEnvironment]);
end;

procedure WVLoader_OnBrowserProcessExited(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
begin
  SendWVEventByPointer(OnBrowserProcessExited_DataPtr, [Sender, aEnvironment, aArgs]);
end;

procedure WVLoader_OnProcessInfosChanged(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  SendWVEventByPointer(OnProcessInfosChanged_DataPtr, [Sender, aEnvironment]);
end;

end.
