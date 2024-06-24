
//constructor
function CustomPrintHandler_Create(const events: IChromiumEvents): TCustomPrintHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPrintHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomPrintHandler_Create;