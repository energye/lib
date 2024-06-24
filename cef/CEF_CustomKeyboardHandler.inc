
//constructor
function CustomKeyboardHandler_Create(const events: IChromiumEvents): TCustomKeyboardHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomKeyboardHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomKeyboardHandler_Create;