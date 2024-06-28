
//constructor
function CustomFindHandler_Create(const events: IChromiumEvents): TCustomFindHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomFindHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomFindHandler_AsInterface(AObj: TCustomFindHandler; var Result: ICefFindHandler); extdecl;
begin
  Result := AObj as ICefFindHandler;
end;


exports
  CustomFindHandler_Create,
  CustomFindHandler_AsInterface;