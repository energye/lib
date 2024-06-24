
//constructor
function CustomRenderHandler_Create(const events: IChromiumEvents): TCustomRenderHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRenderHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomRenderHandler_Create;