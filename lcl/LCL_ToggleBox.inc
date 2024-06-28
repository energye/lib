
//constructor
function ToggleBox_Create(TheOwner: TComponent): TToggleBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TToggleBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ToggleBox_Checked(AIsSet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Checked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked := AValue;
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

//property
function ToggleBox_DragCursor(AIsSet: LongBool; AObj: TToggleBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='DragCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function ToggleBox_DragKind(AIsSet: LongBool; AObj: TToggleBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function ToggleBox_DragMode(AIsSet: LongBool; AObj: TToggleBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionFuncName :='DragMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function ToggleBox_ParentFont(AIsSet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function ToggleBox_ParentShowHint(AIsSet: LongBool; AObj: TToggleBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function ToggleBox_Class(): TClass; extdecl;
begin
  Result := TToggleBox;
end;

//property event
procedure ToggleBox_SetOnContextPopup(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnDragDrop(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnDragOver(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnEndDrag(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseDown(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseEnter(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseLeave(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseMove(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseUp(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseWheel(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseWheelDown(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnMouseWheelUp(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ToggleBox_SetOnStartDrag(AObj: TToggleBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ToggleBox_Create,
  ToggleBox_Checked,
  ToggleBox_DragCursor,
  ToggleBox_DragKind,
  ToggleBox_DragMode,
  ToggleBox_ParentFont,
  ToggleBox_ParentShowHint,
  ToggleBox_Class,
  ToggleBox_SetOnContextPopup,
  ToggleBox_SetOnDragDrop,
  ToggleBox_SetOnDragOver,
  ToggleBox_SetOnEndDrag,
  ToggleBox_SetOnMouseDown,
  ToggleBox_SetOnMouseEnter,
  ToggleBox_SetOnMouseLeave,
  ToggleBox_SetOnMouseMove,
  ToggleBox_SetOnMouseUp,
  ToggleBox_SetOnMouseWheel,
  ToggleBox_SetOnMouseWheelDown,
  ToggleBox_SetOnMouseWheelUp,
  ToggleBox_SetOnStartDrag;