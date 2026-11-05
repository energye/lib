// constructor
function TRadioGroup_Create(TheOwner: TComponent): TRadioGroup; extdecl;
begin
  {$define handleExceptionID := 5900}
  handleExceptionBegin
  Result := TRadioGroup.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TRadioGroup_DragCursor(ASet: LongBool; AObj: TRadioGroup; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 5901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TRadioGroup_DragMode(ASet: LongBool; AObj: TRadioGroup; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 5902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TRadioGroup_ParentFont(ASet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TRadioGroup_ParentColor(ASet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TRadioGroup_ParentShowHint(ASet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TRadioGroup_OnDblClick(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnDragDrop(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnDragOver(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnEndDrag(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseDown(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseEnter(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseLeave(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseMove(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseUp(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseWheel(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseWheelDown(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnMouseWheelUp(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TRadioGroup_OnStartDrag(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TRadioGroup_TClass(): TClass; extdecl;
begin
  Result := TRadioGroup;
end;

exports
  TRadioGroup_Create,
  TRadioGroup_DragCursor,
  TRadioGroup_DragMode,
  TRadioGroup_ParentFont,
  TRadioGroup_ParentColor,
  TRadioGroup_ParentShowHint,
  TRadioGroup_OnDblClick,
  TRadioGroup_OnDragDrop,
  TRadioGroup_OnDragOver,
  TRadioGroup_OnEndDrag,
  TRadioGroup_OnMouseDown,
  TRadioGroup_OnMouseEnter,
  TRadioGroup_OnMouseLeave,
  TRadioGroup_OnMouseMove,
  TRadioGroup_OnMouseUp,
  TRadioGroup_OnMouseWheel,
  TRadioGroup_OnMouseWheelDown,
  TRadioGroup_OnMouseWheelUp,
  TRadioGroup_OnStartDrag,
  TRadioGroup_TClass;