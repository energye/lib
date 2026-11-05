// constructor
function TCheckBox_Create(TheOwner: TComponent): TCheckBox; extdecl;
begin
  {$define handleExceptionID := 3300}
  handleExceptionBegin
  Result := TCheckBox.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCheckBox_Checked(ASet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TCheckBox_DragCursor(ASet: LongBool; AObj: TCheckBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 3302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCheckBox_DragKind(ASet: LongBool; AObj: TCheckBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 3303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCheckBox_DragMode(ASet: LongBool; AObj: TCheckBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 3304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCheckBox_ParentColor(ASet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCheckBox_ParentFont(ASet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCheckBox_ParentShowHint(ASet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TCheckBox_OnContextPopup(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnDragDrop(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnDragOver(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnEditingDone(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnEndDrag(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseDown(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseEnter(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseLeave(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseMove(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseUp(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseWheel(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseWheelDown(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnMouseWheelUp(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCheckBox_OnStartDrag(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TCheckBox_TClass(): TClass; extdecl;
begin
  Result := TCheckBox;
end;

exports
  TCheckBox_Create,
  TCheckBox_Checked,
  TCheckBox_DragCursor,
  TCheckBox_DragKind,
  TCheckBox_DragMode,
  TCheckBox_ParentColor,
  TCheckBox_ParentFont,
  TCheckBox_ParentShowHint,
  TCheckBox_OnContextPopup,
  TCheckBox_OnDragDrop,
  TCheckBox_OnDragOver,
  TCheckBox_OnEditingDone,
  TCheckBox_OnEndDrag,
  TCheckBox_OnMouseDown,
  TCheckBox_OnMouseEnter,
  TCheckBox_OnMouseLeave,
  TCheckBox_OnMouseMove,
  TCheckBox_OnMouseUp,
  TCheckBox_OnMouseWheel,
  TCheckBox_OnMouseWheelDown,
  TCheckBox_OnMouseWheelUp,
  TCheckBox_OnStartDrag,
  TCheckBox_TClass;