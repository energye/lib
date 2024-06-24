
//constructor
function CustomRequestHandler_Create(const events: IChromiumEvents): TCustomRequestHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRequestHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomRequestHandler_RemoveReferences(AObj: TCustomRequestHandler); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CustomRequestHandler_Create,
  CustomRequestHandler_RemoveReferences;