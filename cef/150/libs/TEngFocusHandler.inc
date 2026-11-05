// constructor
function TEngFocusHandler_Create(out IntfFocusHandler: ICefFocusHandler): TEngFocusHandler; extdecl;
begin
  {$define handleExceptionID := 12700}
  handleExceptionBegin
  Result := TEngFocusHandler.Create();
  IntfFocusHandler := Result as ICefFocusHandler;
  handleExceptionEnd
end;

// event
procedure TEngFocusHandler_OnFocusSetFocus(AObj: TEngFocusHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFocusHandler_TOnFocusSetFocusEvent}
  {$DEFINE EventName := OnFocusSetFocus}
  CEFEventMethodCode
end;

// event
procedure TEngFocusHandler_OnFocusTakeFocus(AObj: TEngFocusHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFocusHandler_TOnFocusTakeFocusEvent}
  {$DEFINE EventName := OnFocusTakeFocus}
  CEFEventMethodCode
end;

// event
procedure TEngFocusHandler_OnFocusGotFocus(AObj: TEngFocusHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFocusHandler_TOnFocusGotFocusEvent}
  {$DEFINE EventName := OnFocusGotFocus}
  CEFEventMethodCode
end;

exports
  TEngFocusHandler_Create,
  TEngFocusHandler_OnFocusSetFocus,
  TEngFocusHandler_OnFocusTakeFocus,
  TEngFocusHandler_OnFocusGotFocus;