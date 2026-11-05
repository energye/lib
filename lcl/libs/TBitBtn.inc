// constructor
function TBitBtn_Create(TheOwner: TComponent): TBitBtn; extdecl;
begin
  {$define handleExceptionID := 10300}
  handleExceptionBegin
  Result := TBitBtn.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TBitBtn_DragCursor(ASet: LongBool; AObj: TBitBtn; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 10301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TBitBtn_DragKind(ASet: LongBool; AObj: TBitBtn; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 10302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TBitBtn_DragMode(ASet: LongBool; AObj: TBitBtn; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 10303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TBitBtn_ParentFont(ASet: LongBool; AObj: TBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TBitBtn_ParentShowHint(ASet: LongBool; AObj: TBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TBitBtn_OnContextPopup(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnDragDrop(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnDragOver(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnEndDrag(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseDown(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseEnter(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseLeave(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseMove(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseUp(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseWheel(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseWheelDown(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnMouseWheelUp(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TBitBtn_OnStartDrag(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TBitBtn_TClass(): TClass; extdecl;
begin
  Result := TBitBtn;
end;

exports
  TBitBtn_Create,
  TBitBtn_DragCursor,
  TBitBtn_DragKind,
  TBitBtn_DragMode,
  TBitBtn_ParentFont,
  TBitBtn_ParentShowHint,
  TBitBtn_OnContextPopup,
  TBitBtn_OnDragDrop,
  TBitBtn_OnDragOver,
  TBitBtn_OnEndDrag,
  TBitBtn_OnMouseDown,
  TBitBtn_OnMouseEnter,
  TBitBtn_OnMouseLeave,
  TBitBtn_OnMouseMove,
  TBitBtn_OnMouseUp,
  TBitBtn_OnMouseWheel,
  TBitBtn_OnMouseWheelDown,
  TBitBtn_OnMouseWheelUp,
  TBitBtn_OnStartDrag,
  TBitBtn_TClass;