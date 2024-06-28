
//constructor
function CustomRenderHandler_Create(const events: IChromiumEvents): TCustomRenderHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomRenderHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomRenderHandler_AsInterface(AObj: TCustomRenderHandler; var Result: ICefRenderHandler); extdecl;
begin
  Result := AObj as ICefRenderHandler;
end;


exports
  CustomRenderHandler_Create,
  CustomRenderHandler_AsInterface;