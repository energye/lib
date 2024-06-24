
//constructor
function Memo_Create(AOwner: TComponent): TMemo; extdecl;
begin
  handleExceptionBegin
  Result := TMemo.Create(AOwner);
  handleExceptionEnd
end;

//property
function Memo_DragCursor(AIsSet: LongBool; AObj: TMemo; AValue: TCursor): TCursor; extdecl;
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
function Memo_DragKind(AIsSet: LongBool; AObj: TMemo; AValue: TDragKind): TDragKind; extdecl;
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
function Memo_DragMode(AIsSet: LongBool; AObj: TMemo; AValue: TDragMode): TDragMode; extdecl;
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
function Memo_ParentColor(AIsSet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function Memo_ParentFont(AIsSet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
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
function Memo_ParentShowHint(AIsSet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
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
function Memo_Class(): TClass; extdecl;
begin
  Result := TMemo;
end;

//property event
procedure Memo_SetOnContextPopup(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Memo_SetOnDblClick(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Memo_SetOnDragDrop(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Memo_SetOnDragOver(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Memo_SetOnEditingDone(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure Memo_SetOnEndDrag(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseDown(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseEnter(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseLeave(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseMove(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseUp(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheel(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheelDown(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheelUp(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheelHorz(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheelLeft(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Memo_SetOnMouseWheelRight(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Memo_SetOnStartDrag(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Memo_Create,
  Memo_DragCursor,
  Memo_DragKind,
  Memo_DragMode,
  Memo_ParentColor,
  Memo_ParentFont,
  Memo_ParentShowHint,
  Memo_Class,
  Memo_SetOnContextPopup,
  Memo_SetOnDblClick,
  Memo_SetOnDragDrop,
  Memo_SetOnDragOver,
  Memo_SetOnEditingDone,
  Memo_SetOnEndDrag,
  Memo_SetOnMouseDown,
  Memo_SetOnMouseEnter,
  Memo_SetOnMouseLeave,
  Memo_SetOnMouseMove,
  Memo_SetOnMouseUp,
  Memo_SetOnMouseWheel,
  Memo_SetOnMouseWheelDown,
  Memo_SetOnMouseWheelUp,
  Memo_SetOnMouseWheelHorz,
  Memo_SetOnMouseWheelLeft,
  Memo_SetOnMouseWheelRight,
  Memo_SetOnStartDrag;