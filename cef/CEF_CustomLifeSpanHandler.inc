
//constructor
function CustomLifeSpanHandler_Create(const events: IChromiumEvents): TCustomLifeSpanHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomLifeSpanHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomLifeSpanHandler_Create;