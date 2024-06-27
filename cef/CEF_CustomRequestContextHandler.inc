
//constructor
function CustomRequestContextHandler_Create(const events: IChromiumEvents): TCustomRequestContextHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRequestContextHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomRequestContextHandler_AsInterface(AObj: TCustomRequestContextHandler; var Result: ICefRequestContextHandler); extdecl;
begin
  Result := AObj as ICefRequestContextHandler;
end;

//procedure
procedure CustomRequestContextHandler_RemoveReferences(AObj: TCustomRequestContextHandler); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CustomRequestContextHandler_Create,
  CustomRequestContextHandler_AsInterface,
  CustomRequestContextHandler_RemoveReferences;