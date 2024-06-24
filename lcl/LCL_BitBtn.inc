
//constructor
function BitBtn_Create(TheOwner: TComponent): TBitBtn; extdecl;
begin
  handleExceptionBegin
  Result := TBitBtn.Create(TheOwner);
  handleExceptionEnd
end;

//property
function BitBtn_DragCursor(AIsSet: LongBool; AObj: TBitBtn; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function BitBtn_DragKind(AIsSet: LongBool; AObj: TBitBtn; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function BitBtn_DragMode(AIsSet: LongBool; AObj: TBitBtn; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function BitBtn_ParentFont(AIsSet: LongBool; AObj: TBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function BitBtn_ParentShowHint(AIsSet: LongBool; AObj: TBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function BitBtn_Class(): TClass; extdecl;
begin
  Result := TBitBtn;
end;

//property event
procedure BitBtn_SetOnContextPopup(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnDragDrop(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnDragOver(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnEndDrag(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseDown(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseEnter(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseLeave(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseMove(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseUp(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseWheel(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseWheelDown(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnMouseWheelUp(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure BitBtn_SetOnStartDrag(AObj: TBitBtn; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  BitBtn_Create,
  BitBtn_DragCursor,
  BitBtn_DragKind,
  BitBtn_DragMode,
  BitBtn_ParentFont,
  BitBtn_ParentShowHint,
  BitBtn_Class,
  BitBtn_SetOnContextPopup,
  BitBtn_SetOnDragDrop,
  BitBtn_SetOnDragOver,
  BitBtn_SetOnEndDrag,
  BitBtn_SetOnMouseDown,
  BitBtn_SetOnMouseEnter,
  BitBtn_SetOnMouseLeave,
  BitBtn_SetOnMouseMove,
  BitBtn_SetOnMouseUp,
  BitBtn_SetOnMouseWheel,
  BitBtn_SetOnMouseWheelDown,
  BitBtn_SetOnMouseWheelUp,
  BitBtn_SetOnStartDrag;