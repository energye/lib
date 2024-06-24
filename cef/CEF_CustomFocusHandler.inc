
//constructor
function CustomFocusHandler_Create(const events: IChromiumEvents): TCustomFocusHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFocusHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomFocusHandler_Create;