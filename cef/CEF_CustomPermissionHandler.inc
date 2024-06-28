
//constructor
function CustomPermissionHandler_Create(const events: IChromiumEvents): TCustomPermissionHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomPermissionHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomPermissionHandler_AsInterface(AObj: TCustomPermissionHandler; var Result: ICefPermissionHandler); extdecl;
begin
  Result := AObj as ICefPermissionHandler;
end;


exports
  CustomPermissionHandler_Create,
  CustomPermissionHandler_AsInterface;