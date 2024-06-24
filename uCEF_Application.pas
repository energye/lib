//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uCEF_Application;

{$MODE OBJFPC}{$H+}

{$IFNDEF TARGET_64BITS}{$ALIGN ON}{$ENDIF}
{$MINENUMSIZE 4}

{$Z4+}

{.$DEFINE USE_MULTI_THREAD_LOOP}// Only Windows/Linux
{.$DEFINE USE_APP_HELPER}// Optional on Windows/Linux

{$IFDEF MACOSX}
  {$UNDEF  USE_MULTI_THREAD_LOOP} // Will fail on Mac
  {$DEFINE USE_APP_HELPER}        // Required on Mac
{$ENDIF}

interface

uses
  SysUtils, Controls, uCEFSchemeRegistrar, uCEFPreferenceRegistrar,
  uCEFWorkScheduler,
  uCEFInterfaces, uCEFTypes,
  uTools, uCEF_EventCallback;


// 渲染进程回调事件函数
// ICefApp
procedure ApplicationCore_OnRegCustomSchemes(const registrar: TCefSchemeRegistrarRef);

// ICefBrowserProcessHandler
procedure ApplicationCore_OnRegisterCustomPreferences(type_: TCefPreferencesType; const registrar: TCefPreferenceRegistrarRef);
procedure ApplicationCore_OnContextInitialized;
procedure ApplicationCore_OnBeforeChildProcessLaunch(const commandLine: ICefCommandLine);
procedure ApplicationCore_OnGetDefaultClient(var aClient: ICefClient);

// ICefResourceBundleHandler
procedure ApplicationCore_OnGetLocalizedString(stringId: Integer; out stringVal: ustring; var aResult : Boolean);
procedure ApplicationCore_OnGetDataResource(resourceId: Integer; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
procedure ApplicationCore_OnGetDataResourceForScale(resourceId: Integer; scaleFactor: TCefScaleFactor; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);

// ICefRenderProcessHandler
procedure ApplicationCore_OnWebKitInitialized;
procedure ApplicationCore_OnBrowserCreated(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
procedure ApplicationCore_OnBrowserDestroyed(const browser: ICefBrowser);
procedure ApplicationCore_OnContextCreated(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
procedure ApplicationCore_OnContextReleased(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
procedure ApplicationCore_OnUncaughtException(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
procedure ApplicationCore_OnFocusedNodeChanged(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
procedure ApplicationCore_OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage; var aHandled: boolean);

// ICefLoadHandler
procedure ApplicationCore_OnLoadingStateChange(const browser: ICefBrowser; isLoading, canGoBack, canGoForward: boolean);
procedure ApplicationCore_OnLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
procedure ApplicationCore_OnLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: integer);
procedure ApplicationCore_OnLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);

// ScheduleMessagePumpWork
procedure ApplicationCore_OnScheduleMessagePumpWork(const aDelayMS: int64);

var
  // ICefApp
  OnRegCustomSchemes_DataPtr: Pointer;

  // ICefBrowserProcessHandler
  OnRegisterCustomPreferences_DataPtr: Pointer;
  OnContextInitialized_DataPtr: Pointer;
  OnBeforeChildProcessLaunch_DataPtr: Pointer;
  OnScheduleMessagePumpWork_DataPtr: Pointer;
  OnGetDefaultClient_DataPtr: Pointer;

  // ICefResourceBundleHandler
  OnGetLocalizedString_DataPtr: Pointer;
  OnGetDataResource_DataPtr: Pointer;
  OnGetDataResourceForScale_DataPtr: Pointer;

  // ICefRenderProcessHandler
  OnWebKitInitialized_DataPtr: Pointer;
  OnBrowserCreated_DataPtr: Pointer;
  OnBrowserDestroyed_DataPtr: Pointer;
  OnContextCreated_DataPtr: Pointer;
  OnContextReleased_DataPtr: Pointer;
  OnUncaughtException_DataPtr: Pointer;
  OnFocusedNodeChanged_DataPtr: Pointer;
  OnProcessMessageReceived_DataPtr: Pointer;

  // ICefLoadHandler
  OnLoadingStateChange_DataPtr: Pointer;
  OnLoadStart_DataPtr: Pointer;
  OnLoadEnd_DataPtr: Pointer;
  OnLoadError_DataPtr: Pointer;

implementation

// ICefApp
procedure ApplicationCore_OnRegCustomSchemes(const registrar: TCefSchemeRegistrarRef);
begin
  SendCEFEventByPointer(OnRegCustomSchemes_DataPtr, [registrar]);
end;

// ICefBrowserProcessHandler
procedure ApplicationCore_OnRegisterCustomPreferences(type_: TCefPreferencesType; const registrar: TCefPreferenceRegistrarRef);
begin
  SendCEFEventByPointer(OnRegisterCustomPreferences_DataPtr, [Integer(type_), registrar]);
end;

procedure ApplicationCore_OnContextInitialized;
begin
  SendCEFEventByPointer(OnContextInitialized_DataPtr, []);
end;

procedure ApplicationCore_OnBeforeChildProcessLaunch(const commandLine: ICefCommandLine);
begin
  SendCEFEventByPointer(OnBeforeChildProcessLaunch_DataPtr, [commandLine]);
end;

procedure ApplicationCore_OnGetDefaultClient(var aClient: ICefClient);
begin
  SendCEFEventByPointer(OnGetDefaultClient_DataPtr, [aClient]);
end;

// ICefResourceBundleHandler
procedure ApplicationCore_OnGetLocalizedString(stringId: Integer; out stringVal: ustring; var aResult : Boolean);
var
  RetVal: PChar;
begin
  SendCEFEventByPointer(OnGetLocalizedString_DataPtr, [stringId, @RetVal, @aResult]);
  stringVal := PCharToUStr(RetVal);
  RetVal := nil;
end;

procedure ApplicationCore_OnGetDataResource(resourceId: Integer; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
begin
  SendCEFEventByPointer(OnGetDataResource_DataPtr, [resourceId, @data, @dataSize, @aResult]);
end;

procedure ApplicationCore_OnGetDataResourceForScale(resourceId: Integer; scaleFactor: TCefScaleFactor; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
begin
  SendCEFEventByPointer(OnGetDataResourceForScale_DataPtr, [resourceId, Integer(scaleFactor), @data, @dataSize, @aResult]);
end;


// ICefRenderProcessHandler
procedure ApplicationCore_OnWebKitInitialized;
begin
  SendCEFEventByPointer(OnWebKitInitialized_DataPtr, []);
end;

procedure ApplicationCore_OnBrowserCreated(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
begin
  SendCEFEventByPointer(OnBrowserCreated_DataPtr, [browser, extra_info]);
end;

procedure ApplicationCore_OnBrowserDestroyed(const browser: ICefBrowser);
begin
  SendCEFEventByPointer(OnBrowserDestroyed_DataPtr, [browser]);
end;

procedure ApplicationCore_OnContextCreated(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  SendCEFEventByPointer(OnContextCreated_DataPtr, [browser, frame, context]);
end;

procedure ApplicationCore_OnContextReleased(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  SendCEFEventByPointer(OnContextReleased_DataPtr, [browser, frame, context]);
end;

procedure ApplicationCore_OnUncaughtException(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
begin
  SendCEFEventByPointer(OnUncaughtException_DataPtr, [browser, frame, context, exception, stackTrace]);
end;

procedure ApplicationCore_OnFocusedNodeChanged(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
begin
  SendCEFEventByPointer(OnFocusedNodeChanged_DataPtr, [browser, frame, node]);
end;

procedure ApplicationCore_OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage; var aHandled: boolean);
begin
  SendCEFEventByPointer(OnProcessMessageReceived_DataPtr, [browser, frame, sourceProcess, aMessage, @aHandled]);
end;

// ICefLoadHandler
procedure ApplicationCore_OnLoadingStateChange(const browser: ICefBrowser; isLoading, canGoBack, canGoForward: boolean);
begin
  SendCEFEventByPointer(OnLoadingStateChange_DataPtr, [browser, isLoading, canGoBack, canGoForward]);
end;

procedure ApplicationCore_OnLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  SendCEFEventByPointer(OnLoadStart_DataPtr, [browser, frame, transitionType]);
end;

procedure ApplicationCore_OnLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: integer);
begin
  SendCEFEventByPointer(OnLoadEnd_DataPtr, [browser, frame, httpStatusCode]);
end;

procedure ApplicationCore_OnLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);
begin
  SendCEFEventByPointer(OnLoadError_DataPtr, [browser, frame, errorCode, PChar(string(errorText)), PChar(string(failedUrl))]);
end;

// ScheduleMessagePumpWork
procedure ApplicationCore_OnScheduleMessagePumpWork(const aDelayMS: int64);
begin
  // callback ptr OnScheduleMessagePumpWork_DataPtr
  if (GlobalCEFWorkScheduler <> nil) then
  begin
    GlobalCEFWorkScheduler.ScheduleMessagePumpWork(aDelayMS);
    if OnScheduleMessagePumpWork_DataPtr <> nil then
       SendCEFEventByPointer(OnScheduleMessagePumpWork_DataPtr, [@aDelayMS]);
  end;
end;

end.
