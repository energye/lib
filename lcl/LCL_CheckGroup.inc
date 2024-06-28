
//constructor
function CheckGroup_Create(TheOwner: TComponent): TCheckGroup; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCheckGroup.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CheckGroup_DragCursor(AIsSet: LongBool; AObj: TCheckGroup; AValue: TCursor): TCursor; extdecl;
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
function CheckGroup_DragMode(AIsSet: LongBool; AObj: TCheckGroup; AValue: TDragMode): TDragMode; extdecl;
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
function CheckGroup_ParentFont(AIsSet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
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
function CheckGroup_ParentColor(AIsSet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function CheckGroup_ParentShowHint(AIsSet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
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
function CheckGroup_Class(): TClass; extdecl;
begin
  Result := TCheckGroup;
end;

//property event
procedure CheckGroup_SetOnDblClick(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnDragDrop(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnDragOver(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnEndDrag(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseDown(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseEnter(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseLeave(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseMove(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseUp(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseWheel(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseWheelDown(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnMouseWheelUp(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CheckGroup_SetOnStartDrag(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  CheckGroup_Create,
  CheckGroup_DragCursor,
  CheckGroup_DragMode,
  CheckGroup_ParentFont,
  CheckGroup_ParentColor,
  CheckGroup_ParentShowHint,
  CheckGroup_Class,
  CheckGroup_SetOnDblClick,
  CheckGroup_SetOnDragDrop,
  CheckGroup_SetOnDragOver,
  CheckGroup_SetOnEndDrag,
  CheckGroup_SetOnMouseDown,
  CheckGroup_SetOnMouseEnter,
  CheckGroup_SetOnMouseLeave,
  CheckGroup_SetOnMouseMove,
  CheckGroup_SetOnMouseUp,
  CheckGroup_SetOnMouseWheel,
  CheckGroup_SetOnMouseWheelDown,
  CheckGroup_SetOnMouseWheelUp,
  CheckGroup_SetOnStartDrag;