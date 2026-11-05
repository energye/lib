// constructor
function TToggleBox_Create(TheOwner: TComponent): TToggleBox; extdecl;
begin
  {$define handleExceptionID := 22700}
  handleExceptionBegin
  Result := TToggleBox.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TToggleBox_Checked(ASet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TToggleBox_DragCursor(ASet: LongBool; AObj: TToggleBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 22702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TToggleBox_DragKind(ASet: LongBool; AObj: TToggleBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 22703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TToggleBox_DragMode(ASet: LongBool; AObj: TToggleBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 22704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TToggleBox_ParentFont(ASet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TToggleBox_ParentShowHint(ASet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TToggleBox_OnContextPopup(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnDragDrop(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnDragOver(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnEndDrag(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseDown(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseEnter(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseLeave(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseMove(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseUp(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseWheel(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseWheelDown(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnMouseWheelUp(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TToggleBox_OnStartDrag(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TToggleBox_TClass(): TClass; extdecl;
begin
  Result := TToggleBox;
end;

exports
  TToggleBox_Create,
  TToggleBox_Checked,
  TToggleBox_DragCursor,
  TToggleBox_DragKind,
  TToggleBox_DragMode,
  TToggleBox_ParentFont,
  TToggleBox_ParentShowHint,
  TToggleBox_OnContextPopup,
  TToggleBox_OnDragDrop,
  TToggleBox_OnDragOver,
  TToggleBox_OnEndDrag,
  TToggleBox_OnMouseDown,
  TToggleBox_OnMouseEnter,
  TToggleBox_OnMouseLeave,
  TToggleBox_OnMouseMove,
  TToggleBox_OnMouseUp,
  TToggleBox_OnMouseWheel,
  TToggleBox_OnMouseWheelDown,
  TToggleBox_OnMouseWheelUp,
  TToggleBox_OnStartDrag,
  TToggleBox_TClass;