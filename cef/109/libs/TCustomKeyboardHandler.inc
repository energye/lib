// constructor
function TCustomKeyboardHandler_Create(const events: IChromiumEvents; out IntfKeyboardHandler: ICefKeyboardHandler): TCustomKeyboardHandler; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TCustomKeyboardHandler.Create(events);
  IntfKeyboardHandler := Result as ICefKeyboardHandler;
  handleExceptionEnd
end;

exports
  TCustomKeyboardHandler_Create;
