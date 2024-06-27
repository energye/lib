
//constructor
function CustomResourceRequestHandler_Create(const events: IChromiumEvents): TCustomResourceRequestHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomResourceRequestHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomResourceRequestHandler_AsInterface(AObj: TCustomResourceRequestHandler; var Result: ICefResourceRequestHandler); extdecl;
begin
  Result := AObj as ICefResourceRequestHandler;
end;

//procedure
procedure CustomResourceRequestHandler_RemoveReferences(AObj: TCustomResourceRequestHandler); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CustomResourceRequestHandler_Create,
  CustomResourceRequestHandler_AsInterface,
  CustomResourceRequestHandler_RemoveReferences;