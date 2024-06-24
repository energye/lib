//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

function WVLoader_GlobalWebView2Loader(AOwner: TComponent): TWVLoader; extdecl;
begin
  if not assigned(GlobalWebView2Loader) then
    GlobalWebView2Loader := TWVLoader.Create(AOwner);
  Result := GlobalWebView2Loader;
end;

exports
  WVLoader_GlobalWebView2Loader;
