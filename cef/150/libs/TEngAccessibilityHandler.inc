// constructor
function TEngAccessibilityHandler_Create(out IntfAccessibilityHandler: ICefAccessibilityHandler): TEngAccessibilityHandler; extdecl;
begin
  {$define handleExceptionID := 17500}
  handleExceptionBegin
  Result := TEngAccessibilityHandler.Create();
  IntfAccessibilityHandler := Result as ICefAccessibilityHandler;
  handleExceptionEnd
end;

// event
procedure TEngAccessibilityHandler_OnAccessibilityAccessibilityTreeChange(AObj: TEngAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAccessibilityHandler_TOnAccessibilityAccessibilityTreeChangeEvent}
  {$DEFINE EventName := OnAccessibilityAccessibilityTreeChange}
  CEFEventMethodCode
end;

// event
procedure TEngAccessibilityHandler_OnAccessibilityAccessibilityLocationChange(AObj: TEngAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAccessibilityHandler_TOnAccessibilityAccessibilityLocationChangeEvent}
  {$DEFINE EventName := OnAccessibilityAccessibilityLocationChange}
  CEFEventMethodCode
end;

exports
  TEngAccessibilityHandler_Create,
  TEngAccessibilityHandler_OnAccessibilityAccessibilityTreeChange,
  TEngAccessibilityHandler_OnAccessibilityAccessibilityLocationChange;