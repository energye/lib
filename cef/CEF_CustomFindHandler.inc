
//constructor
function CustomFindHandler_Create(const events: IChromiumEvents): TCustomFindHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFindHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomFindHandler_Create;