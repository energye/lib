// constructor
function TRadioButton_Create(TheOwner: TComponent): TRadioButton; extdecl;
begin
  {$define handleExceptionID := 3400}
  handleExceptionBegin
  Result := TRadioButton.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TRadioButton_Checked(ASet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TRadioButton_DragCursor(ASet: LongBool; AObj: TRadioButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 3402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TRadioButton_DragKind(ASet: LongBool; AObj: TRadioButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 3403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TRadioButton_DragMode(ASet: LongBool; AObj: TRadioButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 3404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TRadioButton_ParentColor(ASet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TRadioButton_ParentFont(ASet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TRadioButton_ParentShowHint(ASet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TRadioButton_OnContextPopup(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnDragDrop(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnDragOver(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnEndDrag(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseDown(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseEnter(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseLeave(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseMove(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseUp(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseWheel(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseWheelDown(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnMouseWheelUp(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TRadioButton_OnStartDrag(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TRadioButton_TClass(): TClass; extdecl;
begin
  Result := TRadioButton;
end;

exports
  TRadioButton_Create,
  TRadioButton_Checked,
  TRadioButton_DragCursor,
  TRadioButton_DragKind,
  TRadioButton_DragMode,
  TRadioButton_ParentColor,
  TRadioButton_ParentFont,
  TRadioButton_ParentShowHint,
  TRadioButton_OnContextPopup,
  TRadioButton_OnDragDrop,
  TRadioButton_OnDragOver,
  TRadioButton_OnEndDrag,
  TRadioButton_OnMouseDown,
  TRadioButton_OnMouseEnter,
  TRadioButton_OnMouseLeave,
  TRadioButton_OnMouseMove,
  TRadioButton_OnMouseUp,
  TRadioButton_OnMouseWheel,
  TRadioButton_OnMouseWheelDown,
  TRadioButton_OnMouseWheelUp,
  TRadioButton_OnStartDrag,
  TRadioButton_TClass;