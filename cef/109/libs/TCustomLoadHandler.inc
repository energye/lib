// constructor
function TCustomLoadHandler_Create(const events: IChromiumEvents; out IntfLoadHandler: ICefLoadHandler): TCustomLoadHandler; extdecl;
begin
  {$define handleExceptionID := 2600}
  handleExceptionBegin
  Result := TCustomLoadHandler.Create(events);
  IntfLoadHandler := Result as ICefLoadHandler;
  handleExceptionEnd
end;

exports
  TCustomLoadHandler_Create;
