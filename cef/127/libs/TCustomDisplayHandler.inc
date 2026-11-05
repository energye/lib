// constructor
function TCustomDisplayHandler_Create(const events: IChromiumEvents; out IntfDisplayHandler: ICefDisplayHandler): TCustomDisplayHandler; extdecl;
begin
  {$define handleExceptionID := 1700}
  handleExceptionBegin
  Result := TCustomDisplayHandler.Create(events);
  IntfDisplayHandler := Result as ICefDisplayHandler;
  handleExceptionEnd
end;

exports
  TCustomDisplayHandler_Create;
