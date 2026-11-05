// constructor
function TLabeledEdit_Create(TheOwner: TComponent): TLabeledEdit; extdecl;
begin
  {$define handleExceptionID := 19600}
  handleExceptionBegin
  Result := TLabeledEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TLabeledEdit_AutoSelect(ASet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TLabeledEdit_DragCursor(ASet: LongBool; AObj: TLabeledEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 19602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TLabeledEdit_DragMode(ASet: LongBool; AObj: TLabeledEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 19603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TLabeledEdit_ParentColor(ASet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TLabeledEdit_ParentFont(ASet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TLabeledEdit_ParentShowHint(ASet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TLabeledEdit_OnContextPopup(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnDblClick(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnDragDrop(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnDragOver(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnEditingDone(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnEndDrag(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseDown(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseEnter(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseLeave(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseMove(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseUp(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseWheel(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseWheelDown(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnMouseWheelUp(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TLabeledEdit_OnStartDrag(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TLabeledEdit_TClass(): TClass; extdecl;
begin
  Result := TLabeledEdit;
end;

exports
  TLabeledEdit_Create,
  TLabeledEdit_AutoSelect,
  TLabeledEdit_DragCursor,
  TLabeledEdit_DragMode,
  TLabeledEdit_ParentColor,
  TLabeledEdit_ParentFont,
  TLabeledEdit_ParentShowHint,
  TLabeledEdit_OnContextPopup,
  TLabeledEdit_OnDblClick,
  TLabeledEdit_OnDragDrop,
  TLabeledEdit_OnDragOver,
  TLabeledEdit_OnEditingDone,
  TLabeledEdit_OnEndDrag,
  TLabeledEdit_OnMouseDown,
  TLabeledEdit_OnMouseEnter,
  TLabeledEdit_OnMouseLeave,
  TLabeledEdit_OnMouseMove,
  TLabeledEdit_OnMouseUp,
  TLabeledEdit_OnMouseWheel,
  TLabeledEdit_OnMouseWheelDown,
  TLabeledEdit_OnMouseWheelUp,
  TLabeledEdit_OnStartDrag,
  TLabeledEdit_TClass;