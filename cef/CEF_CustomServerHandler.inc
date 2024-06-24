
//constructor
function CustomServerHandler_Create(const events: IServerEvents): TCustomServerHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomServerHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomServerHandler_Create;