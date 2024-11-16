
//constructor
function CustomRenderLoadHandler_Create(const aCefApp: TCefApplicationCore): TCustomRenderLoadHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomRenderLoadHandler.Create(aCefApp);
  handleExceptionEnd
end;

//procedure
procedure CustomRenderLoadHandler_AsInterface(AObj: TCustomRenderLoadHandler; var Result: ICefLoadHandler); extdecl;
begin
  Result := AObj as ICefLoadHandler;
end;


exports
  CustomRenderLoadHandler_Create,
  CustomRenderLoadHandler_AsInterface;