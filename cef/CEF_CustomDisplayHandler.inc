
//constructor
function CustomDisplayHandler_Create(const events: IChromiumEvents): TCustomDisplayHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomDisplayHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomDisplayHandler_AsInterface(AObj: TCustomDisplayHandler; var Result: ICefDisplayHandler); extdecl;
begin
  Result := AObj as ICefDisplayHandler;
end;


exports
  CustomDisplayHandler_Create,
  CustomDisplayHandler_AsInterface;