
//constructor
function CustomDisplayHandler_Create(const events: IChromiumEvents): TCustomDisplayHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDisplayHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomDisplayHandler_Create;