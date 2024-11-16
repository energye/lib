
//constructor
function CustomExtensionHandler_Create(const events: IChromiumEvents): TCustomExtensionHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomExtensionHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomExtensionHandler_AsInterface(AObj: TCustomExtensionHandler; var Result: ICefExtensionHandler); extdecl;
begin
  Result := AObj as ICefExtensionHandler;
end;


exports
  CustomExtensionHandler_Create,
  CustomExtensionHandler_AsInterface;