
//constructor
function CustomDragHandler_Create(const events: IChromiumEvents): TCustomDragHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDragHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomDragHandler_Create;