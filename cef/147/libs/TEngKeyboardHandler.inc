// constructor
function TEngKeyboardHandler_Create(out IntfKeyboardHandler: ICefKeyboardHandler): TEngKeyboardHandler; extdecl;
begin
  {$define handleExceptionID := 12900}
  handleExceptionBegin
  Result := TEngKeyboardHandler.Create();
  IntfKeyboardHandler := Result as ICefKeyboardHandler;
  handleExceptionEnd
end;

// event
procedure TEngKeyboardHandler_OnKeyboardPreKey(AObj: TEngKeyboardHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngKeyboardHandler_TOnKeyboardPreKeyEvent}
  {$DEFINE EventName := OnKeyboardPreKey}
  CEFEventMethodCode
end;

// event
procedure TEngKeyboardHandler_OnKeyboardKey(AObj: TEngKeyboardHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngKeyboardHandler_TOnKeyboardKeyEvent}
  {$DEFINE EventName := OnKeyboardKey}
  CEFEventMethodCode
end;

exports
  TEngKeyboardHandler_Create,
  TEngKeyboardHandler_OnKeyboardPreKey,
  TEngKeyboardHandler_OnKeyboardKey;