// constructor
function TCustomAccessibilityHandler_Create(out IntfAccessibilityHandler: ICefAccessibilityHandler): TCustomAccessibilityHandler; extdecl;
begin
  {$define handleExceptionID := 100}
  handleExceptionBegin
  Result := TCustomAccessibilityHandler.Create();
  IntfAccessibilityHandler := Result as ICefAccessibilityHandler;
  handleExceptionEnd
end;

// event
procedure TCustomAccessibilityHandler_OnTreeChange(AObj: TCustomAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCustomAccessibilityHandler_TOnAccessibilityEvent}
  {$DEFINE EventName := OnTreeChange}
  CEFEventMethodCode
end;

// event
procedure TCustomAccessibilityHandler_OnLocationChange(AObj: TCustomAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCustomAccessibilityHandler_TOnAccessibilityEvent}
  {$DEFINE EventName := OnLocationChange}
  CEFEventMethodCode
end;

exports
  TCustomAccessibilityHandler_Create,
  TCustomAccessibilityHandler_OnTreeChange,
  TCustomAccessibilityHandler_OnLocationChange;