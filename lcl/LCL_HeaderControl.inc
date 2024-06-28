
//constructor
function HeaderControl_Create(AOwner: TComponent): THeaderControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := THeaderControl.Create(AOwner);
  handleExceptionEnd
end;

//property
function HeaderControl_DragCursor(AIsSet: LongBool; AObj: THeaderControl; AValue: TCursor): TCursor; extdecl;
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
function HeaderControl_DragKind(AIsSet: LongBool; AObj: THeaderControl; AValue: TDragKind): TDragKind; extdecl;
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
function HeaderControl_DragMode(AIsSet: LongBool; AObj: THeaderControl; AValue: TDragMode): TDragMode; extdecl;
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
function HeaderControl_ParentFont(AIsSet: LongBool; AObj: THeaderControl; AValue: LongBool): LongBool; extdecl;
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
function HeaderControl_ParentShowHint(AIsSet: LongBool; AObj: THeaderControl; AValue: LongBool): LongBool; extdecl;
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
function HeaderControl_Class(): TClass; extdecl;
begin
  Result := THeaderControl;
end;

//property event
procedure HeaderControl_SetOnContextPopup(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnDragDrop(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnDragOver(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnEndDock(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnEndDrag(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseDown(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseEnter(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseLeave(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseMove(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseUp(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheel(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheelDown(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheelUp(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheelHorz(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheelLeft(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure HeaderControl_SetOnMouseWheelRight(AObj: THeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  HeaderControl_Create,
  HeaderControl_DragCursor,
  HeaderControl_DragKind,
  HeaderControl_DragMode,
  HeaderControl_ParentFont,
  HeaderControl_ParentShowHint,
  HeaderControl_Class,
  HeaderControl_SetOnContextPopup,
  HeaderControl_SetOnDragDrop,
  HeaderControl_SetOnDragOver,
  HeaderControl_SetOnEndDock,
  HeaderControl_SetOnEndDrag,
  HeaderControl_SetOnMouseDown,
  HeaderControl_SetOnMouseEnter,
  HeaderControl_SetOnMouseLeave,
  HeaderControl_SetOnMouseMove,
  HeaderControl_SetOnMouseUp,
  HeaderControl_SetOnMouseWheel,
  HeaderControl_SetOnMouseWheelDown,
  HeaderControl_SetOnMouseWheelUp,
  HeaderControl_SetOnMouseWheelHorz,
  HeaderControl_SetOnMouseWheelLeft,
  HeaderControl_SetOnMouseWheelRight;