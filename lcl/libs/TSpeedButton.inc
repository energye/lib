// constructor
function TSpeedButton_Create(AOwner: TComponent): TSpeedButton; extdecl;
begin
  {$define handleExceptionID := 5500}
  handleExceptionBegin
  Result := TSpeedButton.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSpeedButton_DragCursor(ASet: LongBool; AObj: TSpeedButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 5501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TSpeedButton_DragKind(ASet: LongBool; AObj: TSpeedButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 5502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TSpeedButton_DragMode(ASet: LongBool; AObj: TSpeedButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 5503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TSpeedButton_ParentFont(ASet: LongBool; AObj: TSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TSpeedButton_ParentShowHint(ASet: LongBool; AObj: TSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TSpeedButton_OnContextPopup(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnDblClick(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnDragDrop(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnDragOver(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnEndDrag(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseDown(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseEnter(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseLeave(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseMove(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseUp(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseWheel(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseWheelDown(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnMouseWheelUp(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnPaint(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TSpeedButton_OnStartDrag(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TSpeedButton_TClass(): TClass; extdecl;
begin
  Result := TSpeedButton;
end;

exports
  TSpeedButton_Create,
  TSpeedButton_DragCursor,
  TSpeedButton_DragKind,
  TSpeedButton_DragMode,
  TSpeedButton_ParentFont,
  TSpeedButton_ParentShowHint,
  TSpeedButton_OnContextPopup,
  TSpeedButton_OnDblClick,
  TSpeedButton_OnDragDrop,
  TSpeedButton_OnDragOver,
  TSpeedButton_OnEndDrag,
  TSpeedButton_OnMouseDown,
  TSpeedButton_OnMouseEnter,
  TSpeedButton_OnMouseLeave,
  TSpeedButton_OnMouseMove,
  TSpeedButton_OnMouseUp,
  TSpeedButton_OnMouseWheel,
  TSpeedButton_OnMouseWheelDown,
  TSpeedButton_OnMouseWheelUp,
  TSpeedButton_OnPaint,
  TSpeedButton_OnStartDrag,
  TSpeedButton_TClass;