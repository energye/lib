// constructor
function TCheckBoxThemed_Create(AOwner: TComponent): TCheckBoxThemed; extdecl;
begin
  {$define handleExceptionID := 34300}
  handleExceptionBegin
  Result := TCheckBoxThemed.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_DragCursor(ASet: LongBool; AObj: TCheckBoxThemed; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 34301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_DragKind(ASet: LongBool; AObj: TCheckBoxThemed; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 34302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_DragMode(ASet: LongBool; AObj: TCheckBoxThemed; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 34303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_ParentColor(ASet: LongBool; AObj: TCheckBoxThemed; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_ParentFont(ASet: LongBool; AObj: TCheckBoxThemed; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCheckBoxThemed_ParentShowHint(ASet: LongBool; AObj: TCheckBoxThemed; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TCheckBoxThemed_OnContextPopup(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnDragDrop(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnDragOver(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnEditingDone(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnEndDrag(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseDown(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseEnter(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseLeave(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseMove(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseUp(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseWheel(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseWheelDown(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnMouseWheelUp(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCheckBoxThemed_OnStartDrag(AObj: TCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TCheckBoxThemed_TClass(): TClass; extdecl;
begin
  Result := TCheckBoxThemed;
end;

exports
  TCheckBoxThemed_Create,
  TCheckBoxThemed_DragCursor,
  TCheckBoxThemed_DragKind,
  TCheckBoxThemed_DragMode,
  TCheckBoxThemed_ParentColor,
  TCheckBoxThemed_ParentFont,
  TCheckBoxThemed_ParentShowHint,
  TCheckBoxThemed_OnContextPopup,
  TCheckBoxThemed_OnDragDrop,
  TCheckBoxThemed_OnDragOver,
  TCheckBoxThemed_OnEditingDone,
  TCheckBoxThemed_OnEndDrag,
  TCheckBoxThemed_OnMouseDown,
  TCheckBoxThemed_OnMouseEnter,
  TCheckBoxThemed_OnMouseLeave,
  TCheckBoxThemed_OnMouseMove,
  TCheckBoxThemed_OnMouseUp,
  TCheckBoxThemed_OnMouseWheel,
  TCheckBoxThemed_OnMouseWheelDown,
  TCheckBoxThemed_OnMouseWheelUp,
  TCheckBoxThemed_OnStartDrag,
  TCheckBoxThemed_TClass;