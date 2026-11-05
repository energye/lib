// constructor
function TButton_Create(TheOwner: TComponent): TButton; extdecl;
begin
  {$define handleExceptionID := 1700}
  handleExceptionBegin
  Result := TButton.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TButton_DragCursor(ASet: LongBool; AObj: TButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 1701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TButton_DragKind(ASet: LongBool; AObj: TButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 1702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TButton_DragMode(ASet: LongBool; AObj: TButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 1703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TButton_ParentFont(ASet: LongBool; AObj: TButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TButton_ParentShowHint(ASet: LongBool; AObj: TButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TButton_OnContextPopup(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TButton_OnDragDrop(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TButton_OnDragOver(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TButton_OnEndDrag(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseDown(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseEnter(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseLeave(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseMove(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseUp(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseWheel(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseWheelDown(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TButton_OnMouseWheelUp(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TButton_OnStartDrag(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TButton_TClass(): TClass; extdecl;
begin
  Result := TButton;
end;

exports
  TButton_Create,
  TButton_DragCursor,
  TButton_DragKind,
  TButton_DragMode,
  TButton_ParentFont,
  TButton_ParentShowHint,
  TButton_OnContextPopup,
  TButton_OnDragDrop,
  TButton_OnDragOver,
  TButton_OnEndDrag,
  TButton_OnMouseDown,
  TButton_OnMouseEnter,
  TButton_OnMouseLeave,
  TButton_OnMouseMove,
  TButton_OnMouseUp,
  TButton_OnMouseWheel,
  TButton_OnMouseWheelDown,
  TButton_OnMouseWheelUp,
  TButton_OnStartDrag,
  TButton_TClass;