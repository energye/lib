
//constructor
function CustomDialogHandler_Create(const events: IChromiumEvents): TCustomDialogHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDialogHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomDialogHandler_Create;