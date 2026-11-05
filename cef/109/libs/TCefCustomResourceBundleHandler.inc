// constructor
function TCefCustomResourceBundleHandler_Create(const aCefApp: TCefApplicationCore; out IntfResourceBundleHandler: ICefResourceBundleHandler): TCefCustomResourceBundleHandler; extdecl;
begin
  {$define handleExceptionID := 3500}
  handleExceptionBegin
  Result := TCefCustomResourceBundleHandler.Create(aCefApp);
  IntfResourceBundleHandler := Result as ICefResourceBundleHandler;
  handleExceptionEnd
end;

exports
  TCefCustomResourceBundleHandler_Create;
