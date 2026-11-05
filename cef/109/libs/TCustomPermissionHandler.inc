// constructor
function TCustomPermissionHandler_Create(const events: IChromiumEvents; out IntfPermissionHandler: ICefPermissionHandler): TCustomPermissionHandler; extdecl;
begin
  {$define handleExceptionID := 9900}
  handleExceptionBegin
  Result := TCustomPermissionHandler.Create(events);
  IntfPermissionHandler := Result as ICefPermissionHandler;
  handleExceptionEnd
end;

exports
  TCustomPermissionHandler_Create;
