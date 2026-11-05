// constructor
function TCustomLifeSpanHandler_Create(const events: IChromiumEvents; out IntfLifeSpanHandler: ICefLifeSpanHandler): TCustomLifeSpanHandler; extdecl;
begin
  {$define handleExceptionID := 2400}
  handleExceptionBegin
  Result := TCustomLifeSpanHandler.Create(events);
  IntfLifeSpanHandler := Result as ICefLifeSpanHandler;
  handleExceptionEnd
end;

exports
  TCustomLifeSpanHandler_Create;
