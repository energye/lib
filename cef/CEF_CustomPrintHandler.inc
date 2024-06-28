
//constructor
function CustomPrintHandler_Create(const events: IChromiumEvents): TCustomPrintHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomPrintHandler.Create(events);
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