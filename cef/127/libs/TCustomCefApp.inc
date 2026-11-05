// constructor
function TCustomCefApp_Create(const aCefApp: TCefApplicationCore; out IntfApp: ICefApp): TCustomCefApp; extdecl;
begin
  {$define handleExceptionID := 200}
  handleExceptionBegin
  Result := TCustomCefApp.Create(aCefApp);
  IntfApp := Result as ICefApp;
  handleExceptionEnd
end;

exports
  TCustomCefApp_Create;
