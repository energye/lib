// constructor
function TCustomRenderLoadHandler_Create(const aCefApp: TCefApplicationCore; out IntfLoadHandler: ICefLoadHandler): TCustomRenderLoadHandler; extdecl;
begin
  {$define handleExceptionID := 2500}
  handleExceptionBegin
  Result := TCustomRenderLoadHandler.Create(aCefApp);
  IntfLoadHandler := Result as ICefLoadHandler;
  handleExceptionEnd
end;

exports
  TCustomRenderLoadHandler_Create;
