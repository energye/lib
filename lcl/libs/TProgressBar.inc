// constructor
function TProgressBar_Create(AOwner: TComponent): TProgressBar; extdecl;
begin
  {$define handleExceptionID := 8800}
  handleExceptionBegin
  Result := TProgressBar.Create(AOwner);
  handleExceptionEnd
end;

// property
function TProgressBar_DragCursor(ASet: LongBool; AObj: TProgressBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 8801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TProgressBar_DragKind(ASet: LongBool; AObj: TProgressBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 8802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TProgressBar_DragMode(ASet: LongBool; AObj: TProgressBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 8803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TProgressBar_ParentColor(ASet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TProgressBar_ParentFont(ASet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TProgressBar_ParentShowHint(ASet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TProgressBar_OnContextPopup(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnDragDrop(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnDragOver(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnEndDrag(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseDown(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseEnter(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseLeave(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseMove(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseUp(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseWheel(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseWheelDown(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnMouseWheelUp(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnStartDock(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TProgressBar_OnStartDrag(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TProgressBar_TClass(): TClass; extdecl;
begin
  Result := TProgressBar;
end;

exports
  TProgressBar_Create,
  TProgressBar_DragCursor,
  TProgressBar_DragKind,
  TProgressBar_DragMode,
  TProgressBar_ParentColor,
  TProgressBar_ParentFont,
  TProgressBar_ParentShowHint,
  TProgressBar_OnContextPopup,
  TProgressBar_OnDragDrop,
  TProgressBar_OnDragOver,
  TProgressBar_OnEndDrag,
  TProgressBar_OnMouseDown,
  TProgressBar_OnMouseEnter,
  TProgressBar_OnMouseLeave,
  TProgressBar_OnMouseMove,
  TProgressBar_OnMouseUp,
  TProgressBar_OnMouseWheel,
  TProgressBar_OnMouseWheelDown,
  TProgressBar_OnMouseWheelUp,
  TProgressBar_OnStartDock,
  TProgressBar_OnStartDrag,
  TProgressBar_TClass;