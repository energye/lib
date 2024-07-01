//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

function WVLoader_GetGlobalWebView2Loader(): TWVLoader; extdecl;
begin
  Result := nil;
  if assigned(GlobalWebView2Loader) then
    Result := GlobalWebView2Loader;
end;

procedure WVLoader_SetGlobalWebView2Loader(AObj: TWVLoader); extdecl;
begin
  if not assigned(GlobalWebView2Loader) then
    GlobalWebView2Loader := AObj;
end;

procedure WVLoader_DestroyGlobalWebView2Loader(); extdecl;
begin
  DestroyGlobalWebView2Loader();
end;

procedure WVLoader_SetOnEnvironmentCreated(AEventData: Pointer); extdecl;
begin
  OnEnvironmentCreated_DataPtr := AEventData;
  GlobalWebView2Loader.OnEnvironmentCreated := WVLoader_OnEnvironmentCreated;
end;

procedure WVLoader_SetOnInitializationError(AEventData: Pointer); extdecl;
begin
  OnInitializationError_DataPtr := AEventData;
  GlobalWebView2Loader.OnInitializationError := WVLoader_OnInitializationError;
end;

procedure WVLoader_SetOnGetCustomSchemes(AEventData: Pointer); extdecl;
begin
  OnGetCustomSchemes_DataPtr := AEventData;
  GlobalWebView2Loader.OnGetCustomSchemes := WVLoader_OnGetCustomSchemes;
end;

procedure WVLoader_SetOnNewBrowserVersionAvailable(AEventData: Pointer); extdecl;
begin
  OnNewBrowserVersionAvailable_DataPtr := AEventData;
  GlobalWebView2Loader.OnNewBrowserVersionAvailable := WVLoader_OnNewBrowserVersionAvailable;
end;

procedure WVLoader_SetOnBrowserProcessExited(AEventData: Pointer); extdecl;
begin
  OnBrowserProcessExited_DataPtr := AEventData;
  GlobalWebView2Loader.OnBrowserProcessExited := WVLoader_OnBrowserProcessExited;
end;

procedure WVLoader_SetOnProcessInfosChanged(AEventData: Pointer); extdecl;
begin
  OnProcessInfosChanged_DataPtr := AEventData;
  GlobalWebView2Loader.OnProcessInfosChanged := WVLoader_OnProcessInfosChanged;
end;

exports
  WVLoader_GetGlobalWebView2Loader,
  WVLoader_SetGlobalWebView2Loader,
  WVLoader_DestroyGlobalWebView2Loader,
  WVLoader_SetOnEnvironmentCreated,
  WVLoader_SetOnInitializationError,
  WVLoader_SetOnGetCustomSchemes,
  WVLoader_SetOnNewBrowserVersionAvailable,
  WVLoader_SetOnBrowserProcessExited,
  WVLoader_SetOnProcessInfosChanged;
