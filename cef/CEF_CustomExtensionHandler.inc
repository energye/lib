
//constructor
function CustomExtensionHandler_Create(const events: IChromiumEvents): TCustomExtensionHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomExtensionHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomExtensionHandler_Create;