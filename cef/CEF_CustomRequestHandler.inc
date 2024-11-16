
//constructor
function CustomRequestHandler_Create(const events: IChromiumEvents): TCustomRequestHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomRequestHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomRequestHandler_AsInterface(AObj: TCustomRequestHandler; var Result: ICefRequestHandler); extdecl;
begin
  Result := AObj as ICefRequestHandler;
end;

//procedure
procedure CustomRequestHandler_RemoveReferences(AObj: TCustomRequestHandler); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveReferences'}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CustomRequestHandler_Create,
  CustomRequestHandler_AsInterface,
  CustomRequestHandler_RemoveReferences;