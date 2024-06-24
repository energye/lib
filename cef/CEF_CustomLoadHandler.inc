
//constructor
function CustomLoadHandler_Create(const events: IChromiumEvents): TCustomLoadHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomLoadHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomLoadHandler_Create;