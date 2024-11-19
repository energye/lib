
//constructor
function CustomPrintHandler_Create(const aCefApp: TCefApplicationCore): TCustomPrintHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomPrintHandler.Create(aCefApp);
  handleExceptionEnd
end;

//procedure
procedure CustomPrintHandler_AsInterface(AObj: TCustomPrintHandler; var Result: ICefPrintHandler); extdecl;
begin
  Result := AObj as ICefPrintHandler;
end;


exports
  CustomPrintHandler_Create,
  CustomPrintHandler_AsInterface;