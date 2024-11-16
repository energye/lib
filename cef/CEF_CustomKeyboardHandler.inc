
//constructor
function CustomKeyboardHandler_Create(const events: IChromiumEvents): TCustomKeyboardHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomKeyboardHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomKeyboardHandler_AsInterface(AObj: TCustomKeyboardHandler; var Result: ICefKeyboardHandler); extdecl;
begin
  Result := AObj as ICefKeyboardHandler;
end;


exports
  CustomKeyboardHandler_Create,
  CustomKeyboardHandler_AsInterface;