// constructor
function TEdit_Create(AOwner: TComponent): TEdit; extdecl;
begin
  {$define handleExceptionID := 2000}
  handleExceptionBegin
  Result := TEdit.Create(AOwner);
  handleExceptionEnd
end;

// property
function TEdit_AutoSelected(ASet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2001}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TEdit_AutoSelect(ASet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TEdit_DragCursor(ASet: LongBool; AObj: TEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 2003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TEdit_DragKind(ASet: LongBool; AObj: TEdit; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 2004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TEdit_DragMode(ASet: LongBool; AObj: TEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 2005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TEdit_ParentColor(ASet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TEdit_ParentFont(ASet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TEdit_ParentShowHint(ASet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TEdit_OnContextPopup(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnDblClick(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnDragDrop(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnDragOver(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnEditingDone(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnEndDrag(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseDown(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseEnter(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseLeave(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseMove(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseUp(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseWheel(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseWheelDown(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnMouseWheelUp(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TEdit_OnStartDrag(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TEdit_TClass(): TClass; extdecl;
begin
  Result := TEdit;
end;

exports
  TEdit_Create,
  TEdit_AutoSelected,
  TEdit_AutoSelect,
  TEdit_DragCursor,
  TEdit_DragKind,
  TEdit_DragMode,
  TEdit_ParentColor,
  TEdit_ParentFont,
  TEdit_ParentShowHint,
  TEdit_OnContextPopup,
  TEdit_OnDblClick,
  TEdit_OnDragDrop,
  TEdit_OnDragOver,
  TEdit_OnEditingDone,
  TEdit_OnEndDrag,
  TEdit_OnMouseDown,
  TEdit_OnMouseEnter,
  TEdit_OnMouseLeave,
  TEdit_OnMouseMove,
  TEdit_OnMouseUp,
  TEdit_OnMouseWheel,
  TEdit_OnMouseWheelDown,
  TEdit_OnMouseWheelUp,
  TEdit_OnStartDrag,
  TEdit_TClass;