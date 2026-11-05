// constructor
function TTrackBar_Create(AOwner: TComponent): TTrackBar; extdecl;
begin
  {$define handleExceptionID := 8100}
  handleExceptionBegin
  Result := TTrackBar.Create(AOwner);
  handleExceptionEnd
end;

// property
function TTrackBar_DragCursor(ASet: LongBool; AObj: TTrackBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 8101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TTrackBar_DragMode(ASet: LongBool; AObj: TTrackBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 8102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TTrackBar_ParentColor(ASet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TTrackBar_ParentFont(ASet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TTrackBar_ParentShowHint(ASet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TTrackBar_OnContextPopup(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnDragDrop(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnDragOver(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnEndDrag(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseDown(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseEnter(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseLeave(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseMove(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseUp(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheel(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheelDown(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheelUp(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheelHorz(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheelLeft(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnMouseWheelRight(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TTrackBar_OnStartDrag(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TTrackBar_TClass(): TClass; extdecl;
begin
  Result := TTrackBar;
end;

exports
  TTrackBar_Create,
  TTrackBar_DragCursor,
  TTrackBar_DragMode,
  TTrackBar_ParentColor,
  TTrackBar_ParentFont,
  TTrackBar_ParentShowHint,
  TTrackBar_OnContextPopup,
  TTrackBar_OnDragDrop,
  TTrackBar_OnDragOver,
  TTrackBar_OnEndDrag,
  TTrackBar_OnMouseDown,
  TTrackBar_OnMouseEnter,
  TTrackBar_OnMouseLeave,
  TTrackBar_OnMouseMove,
  TTrackBar_OnMouseUp,
  TTrackBar_OnMouseWheel,
  TTrackBar_OnMouseWheelDown,
  TTrackBar_OnMouseWheelUp,
  TTrackBar_OnMouseWheelHorz,
  TTrackBar_OnMouseWheelLeft,
  TTrackBar_OnMouseWheelRight,
  TTrackBar_OnStartDrag,
  TTrackBar_TClass;