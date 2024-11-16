
//constructor
function CustomFocusHandler_Create(const events: IChromiumEvents): TCustomFocusHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomFocusHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomFocusHandler_AsInterface(AObj: TCustomFocusHandler; var Result: ICefFocusHandler); extdecl;
begin
  Result := AObj as ICefFocusHandler;
end;


exports
  CustomFocusHandler_Create,
  CustomFocusHandler_AsInterface;