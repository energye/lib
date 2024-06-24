
//constructor
function CustomJsDialogHandler_Create(const events: IChromiumEvents): TCustomJsDialogHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomJsDialogHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomJsDialogHandler_Create;