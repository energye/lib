// constructor
function TCefCustomBrowserProcessHandler_Create(const aCefApp: TCefApplicationCore; out IntfBrowserProcessHandler: ICefBrowserProcessHandler): TCefCustomBrowserProcessHandler; extdecl;
begin
  {$define handleExceptionID := 500}
  handleExceptionBegin
  Result := TCefCustomBrowserProcessHandler.Create(aCefApp);
  IntfBrowserProcessHandler := Result as ICefBrowserProcessHandler;
  handleExceptionEnd
end;

exports
  TCefCustomBrowserProcessHandler_Create;
