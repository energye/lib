// constructor
function TCustomPrintHandler_Create(const events: IChromiumEvents; out IntfPrintHandler: ICefPrintHandler): TCustomPrintHandler; extdecl;
begin
  {$define handleExceptionID := 10100}
  handleExceptionBegin
  Result := TCustomPrintHandler.Create(events);
  IntfPrintHandler := Result as ICefPrintHandler;
  handleExceptionEnd
end;

exports
  TCustomPrintHandler_Create;
