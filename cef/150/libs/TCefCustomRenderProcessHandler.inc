// constructor
function TCefCustomRenderProcessHandler_Create(const aCefApp: TCefApplicationCore; out IntfRenderProcessHandler: ICefRenderProcessHandler): TCefCustomRenderProcessHandler; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TCefCustomRenderProcessHandler.Create(aCefApp);
  IntfRenderProcessHandler := Result as ICefRenderProcessHandler;
  handleExceptionEnd
end;

exports
  TCefCustomRenderProcessHandler_Create;
