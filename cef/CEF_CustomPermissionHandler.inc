
//constructor
function CustomPermissionHandler_Create(const events: IChromiumEvents): TCustomPermissionHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPermissionHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomPermissionHandler_Create;