
//constructor
function CustomFrameHandler_Create(const events: IChromiumEvents): TCustomFrameHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFrameHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomFrameHandler_Create;