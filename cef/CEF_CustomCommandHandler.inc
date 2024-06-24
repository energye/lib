
//constructor
function CustomCommandHandler_Create(const events: IChromiumEvents): TCustomCommandHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomCommandHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomCommandHandler_Create;