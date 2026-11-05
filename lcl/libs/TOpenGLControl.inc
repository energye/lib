// constructor
function TOpenGLControl_Create(TheOwner: TComponent): TOpenGLControl; extdecl;
begin
  {$define handleExceptionID := 30700}
  handleExceptionBegin
  Result := TOpenGLControl.Create(TheOwner);
  handleExceptionEnd
end;

// event
procedure TOpenGLControl_OnConstrainedResize(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnDblClick(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnDragDrop(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnDragOver(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseDown(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseEnter(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseLeave(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseMove(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseUp(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseWheel(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseWheelDown(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TOpenGLControl_OnMouseWheelUp(AObj: TOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

function TOpenGLControl_TClass(): TClass; extdecl;
begin
  Result := TOpenGLControl;
end;

exports
  TOpenGLControl_Create,
  TOpenGLControl_OnConstrainedResize,
  TOpenGLControl_OnDblClick,
  TOpenGLControl_OnDragDrop,
  TOpenGLControl_OnDragOver,
  TOpenGLControl_OnMouseDown,
  TOpenGLControl_OnMouseEnter,
  TOpenGLControl_OnMouseLeave,
  TOpenGLControl_OnMouseMove,
  TOpenGLControl_OnMouseUp,
  TOpenGLControl_OnMouseWheel,
  TOpenGLControl_OnMouseWheelDown,
  TOpenGLControl_OnMouseWheelUp,
  TOpenGLControl_TClass;