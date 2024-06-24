
//constructor
function CustomRenderLoadHandler_Create(const aCefApp: TCefApplicationCore): TCustomRenderLoadHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRenderLoadHandler.Create(aCefApp);
  handleExceptionEnd
end;


exports
  CustomRenderLoadHandler_Create;