// constructor
function TCustomPrintHandler_Create(const events: IChromiumEvents; out IntfPrintHandler: ICefPrintHandler): TCustomPrintHandler; extdecl;
begin
  {$define handleExceptionID := 9400}
  handleExceptionBegin
  Result := TCustomPrintHandler.Create(events);
  IntfPrintHandler := Result as ICefPrintHandler;
  handleExceptionEnd
end;

exports
  TCustomPrintHandler_Create;
