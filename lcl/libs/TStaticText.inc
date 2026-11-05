// constructor
function TStaticText_Create(AOwner: TComponent): TStaticText; extdecl;
begin
  {$define handleExceptionID := 6100}
  handleExceptionBegin
  Result := TStaticText.Create(AOwner);
  handleExceptionEnd
end;

// property
function TStaticText_DragCursor(ASet: LongBool; AObj: TStaticText; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 6101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TStaticText_DragKind(ASet: LongBool; AObj: TStaticText; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 6102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TStaticText_DragMode(ASet: LongBool; AObj: TStaticText; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 6103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TStaticText_ParentFont(ASet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TStaticText_ParentColor(ASet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TStaticText_ParentShowHint(ASet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TStaticText_OnContextPopup(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnDblClick(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnDragDrop(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnDragOver(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnEndDrag(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseDown(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseEnter(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseLeave(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseMove(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseUp(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheel(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheelDown(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheelUp(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheelHorz(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheelLeft(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnMouseWheelRight(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TStaticText_OnStartDrag(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TStaticText_TClass(): TClass; extdecl;
begin
  Result := TStaticText;
end;

exports
  TStaticText_Create,
  TStaticText_DragCursor,
  TStaticText_DragKind,
  TStaticText_DragMode,
  TStaticText_ParentFont,
  TStaticText_ParentColor,
  TStaticText_ParentShowHint,
  TStaticText_OnContextPopup,
  TStaticText_OnDblClick,
  TStaticText_OnDragDrop,
  TStaticText_OnDragOver,
  TStaticText_OnEndDrag,
  TStaticText_OnMouseDown,
  TStaticText_OnMouseEnter,
  TStaticText_OnMouseLeave,
  TStaticText_OnMouseMove,
  TStaticText_OnMouseUp,
  TStaticText_OnMouseWheel,
  TStaticText_OnMouseWheelDown,
  TStaticText_OnMouseWheelUp,
  TStaticText_OnMouseWheelHorz,
  TStaticText_OnMouseWheelLeft,
  TStaticText_OnMouseWheelRight,
  TStaticText_OnStartDrag,
  TStaticText_TClass;