//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

function GetGlobalWebView2Loader(AObj: TWVLoader) :TWVLoader ; extdecl;
begin
  Result := nil;
  if assigned(GlobalWebView2Loader) then
    Result := GlobalWebView2Loader;
end;

procedure SetGlobalWebView2Loader(AObj: TWVLoader); extdecl;
begin
  if not assigned(GlobalWebView2Loader) then
    GlobalWebView2Loader := AObj;
end;

procedure DestroyGlobalWebView2Loader(); extdecl;
begin
  uWVLoader.DestroyGlobalWebView2Loader();
end;


exports
  GetGlobalWebView2Loader,
  SetGlobalWebView2Loader,
  DestroyGlobalWebView2Loader;
