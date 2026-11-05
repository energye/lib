// constructor
function TShape_Create(TheOwner: TComponent): TShape; extdecl;
begin
  {$define handleExceptionID := 17200}
  handleExceptionBegin
  Result := TShape.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TShape_DragCursor(ASet: LongBool; AObj: TShape; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 17201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TShape_DragKind(ASet: LongBool; AObj: TShape; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 17202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TShape_DragMode(ASet: LongBool; AObj: TShape; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 17203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TShape_ParentShowHint(ASet: LongBool; AObj: TShape; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TShape_OnDragDrop(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TShape_OnDragOver(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TShape_OnEndDock(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TShape_OnEndDrag(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseDown(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseEnter(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseLeave(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseMove(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseUp(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheel(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheelDown(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheelUp(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheelHorz(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheelLeft(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TShape_OnMouseWheelRight(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TShape_OnPaint(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TShape_OnStartDock(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TShape_OnStartDrag(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TShape_TClass(): TClass; extdecl;
begin
  Result := TShape;
end;

exports
  TShape_Create,
  TShape_DragCursor,
  TShape_DragKind,
  TShape_DragMode,
  TShape_ParentShowHint,
  TShape_OnDragDrop,
  TShape_OnDragOver,
  TShape_OnEndDock,
  TShape_OnEndDrag,
  TShape_OnMouseDown,
  TShape_OnMouseEnter,
  TShape_OnMouseLeave,
  TShape_OnMouseMove,
  TShape_OnMouseUp,
  TShape_OnMouseWheel,
  TShape_OnMouseWheelDown,
  TShape_OnMouseWheelUp,
  TShape_OnMouseWheelHorz,
  TShape_OnMouseWheelLeft,
  TShape_OnMouseWheelRight,
  TShape_OnPaint,
  TShape_OnStartDock,
  TShape_OnStartDrag,
  TShape_TClass;