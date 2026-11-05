// constructor
function TEngRenderHandler_Create(out IntfRenderHandler: ICefRenderHandler): TEngRenderHandler; extdecl;
begin
  {$define handleExceptionID := 12700}
  handleExceptionBegin
  Result := TEngRenderHandler.Create();
  IntfRenderHandler := Result as ICefRenderHandler;
  handleExceptionEnd
end;

// event
procedure TEngRenderHandler_OnRenderGetRootScreenRect(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetRootScreenRectEvent}
  {$DEFINE EventName := OnRenderGetRootScreenRect}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderGetScreenPoint(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetScreenPointEvent}
  {$DEFINE EventName := OnRenderGetScreenPoint}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderGetScreenInfo(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetScreenInfoEvent}
  {$DEFINE EventName := OnRenderGetScreenInfo}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderStartDragging(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderStartDraggingEvent}
  {$DEFINE EventName := OnRenderStartDragging}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderGetAccessibilityHandler(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetAccessibilityHandlerEvent}
  {$DEFINE EventName := OnRenderGetAccessibilityHandler}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderGetViewRect(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetViewRectEvent}
  {$DEFINE EventName := OnRenderGetViewRect}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderPopupShow(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderPopupShowEvent}
  {$DEFINE EventName := OnRenderPopupShow}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderPopupSize(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderPopupSizeEvent}
  {$DEFINE EventName := OnRenderPopupSize}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderPaint(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderPaintEvent}
  {$DEFINE EventName := OnRenderPaint}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderAcceleratedPaint(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderAcceleratedPaintEvent}
  {$DEFINE EventName := OnRenderAcceleratedPaint}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderGetTouchHandleSize(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderGetTouchHandleSizeEvent}
  {$DEFINE EventName := OnRenderGetTouchHandleSize}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderTouchHandleStateChanged(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderTouchHandleStateChangedEvent}
  {$DEFINE EventName := OnRenderTouchHandleStateChanged}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderUpdateDragCursor(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderUpdateDragCursorEvent}
  {$DEFINE EventName := OnRenderUpdateDragCursor}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderScrollOffsetChanged(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderScrollOffsetChangedEvent}
  {$DEFINE EventName := OnRenderScrollOffsetChanged}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderIMECompositionRangeChanged(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderIMECompositionRangeChangedEvent}
  {$DEFINE EventName := OnRenderIMECompositionRangeChanged}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderTextSelectionChanged(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderTextSelectionChangedEvent}
  {$DEFINE EventName := OnRenderTextSelectionChanged}
  CEFEventMethodCode
end;

// event
procedure TEngRenderHandler_OnRenderVirtualKeyboardRequested(AObj: TEngRenderHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderHandler_TOnRenderVirtualKeyboardRequestedEvent}
  {$DEFINE EventName := OnRenderVirtualKeyboardRequested}
  CEFEventMethodCode
end;

exports
  TEngRenderHandler_Create,
  TEngRenderHandler_OnRenderGetRootScreenRect,
  TEngRenderHandler_OnRenderGetScreenPoint,
  TEngRenderHandler_OnRenderGetScreenInfo,
  TEngRenderHandler_OnRenderStartDragging,
  TEngRenderHandler_OnRenderGetAccessibilityHandler,
  TEngRenderHandler_OnRenderGetViewRect,
  TEngRenderHandler_OnRenderPopupShow,
  TEngRenderHandler_OnRenderPopupSize,
  TEngRenderHandler_OnRenderPaint,
  TEngRenderHandler_OnRenderAcceleratedPaint,
  TEngRenderHandler_OnRenderGetTouchHandleSize,
  TEngRenderHandler_OnRenderTouchHandleStateChanged,
  TEngRenderHandler_OnRenderUpdateDragCursor,
  TEngRenderHandler_OnRenderScrollOffsetChanged,
  TEngRenderHandler_OnRenderIMECompositionRangeChanged,
  TEngRenderHandler_OnRenderTextSelectionChanged,
  TEngRenderHandler_OnRenderVirtualKeyboardRequested;