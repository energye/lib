// constructor
function THeaderControl_Create(AOwner: TComponent): THeaderControl; extdecl;
begin
  {$define handleExceptionID := 19200}
  handleExceptionBegin
  Result := THeaderControl.Create(AOwner);
  handleExceptionEnd
end;

// property
function THeaderControl_DragCursor(ASet: LongBool; AObj: THeaderControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 19201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function THeaderControl_DragKind(ASet: LongBool; AObj: THeaderControl; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 19202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function THeaderControl_DragMode(ASet: LongBool; AObj: THeaderControl; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 19203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function THeaderControl_ParentFont(ASet: LongBool; AObj: THeaderControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function THeaderControl_ParentShowHint(ASet: LongBool; AObj: THeaderControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure THeaderControl_OnContextPopup(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnDragDrop(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnDragOver(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnEndDock(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnEndDrag(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseDown(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseEnter(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseLeave(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseMove(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseUp(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheel(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheelDown(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheelUp(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheelHorz(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheelLeft(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure THeaderControl_OnMouseWheelRight(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function THeaderControl_TClass(): TClass; extdecl;
begin
  Result := THeaderControl;
end;

exports
  THeaderControl_Create,
  THeaderControl_DragCursor,
  THeaderControl_DragKind,
  THeaderControl_DragMode,
  THeaderControl_ParentFont,
  THeaderControl_ParentShowHint,
  THeaderControl_OnContextPopup,
  THeaderControl_OnDragDrop,
  THeaderControl_OnDragOver,
  THeaderControl_OnEndDock,
  THeaderControl_OnEndDrag,
  THeaderControl_OnMouseDown,
  THeaderControl_OnMouseEnter,
  THeaderControl_OnMouseLeave,
  THeaderControl_OnMouseMove,
  THeaderControl_OnMouseUp,
  THeaderControl_OnMouseWheel,
  THeaderControl_OnMouseWheelDown,
  THeaderControl_OnMouseWheelUp,
  THeaderControl_OnMouseWheelHorz,
  THeaderControl_OnMouseWheelLeft,
  THeaderControl_OnMouseWheelRight,
  THeaderControl_TClass;