
//constructor
function AccessibilityHandler_Create(): TAccessibilityHandler; extdecl;
begin
  handleExceptionBegin
  Result := TAccessibilityHandler.Create();
  handleExceptionEnd
end;

//procedure
procedure AccessibilityHandler_AsInterface(AObj: TAccessibilityHandler; var Result: ICefAccessibilityHandler); extdecl;
begin
  Result := AObj as ICefAccessibilityHandler;
end;

//property event
procedure AccessibilityHandler_SetOnTreeChange(AObj: TAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := AccessibilityHandler_OnTreeChange}
  {$DEFINE EventName := OnTreeChange}
  CEFEventMethodCode
end;

//property event
procedure AccessibilityHandler_SetOnLocationChange(AObj: TAccessibilityHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := AccessibilityHandler_OnLocationChange}
  {$DEFINE EventName := OnLocationChange}
  CEFEventMethodCode
end;


exports
  AccessibilityHandler_Create,
  AccessibilityHandler_AsInterface,
  AccessibilityHandler_SetOnTreeChange,
  AccessibilityHandler_SetOnLocationChange;