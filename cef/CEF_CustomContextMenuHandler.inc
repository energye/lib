
//constructor
function CustomContextMenuHandler_Create(const events: IChromiumEvents): TCustomContextMenuHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomContextMenuHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomContextMenuHandler_Create;