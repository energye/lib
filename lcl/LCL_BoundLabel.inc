
//constructor
function BoundLabel_Create(TheOwner: TComponent): TBoundLabel; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TBoundLabel.Create(TheOwner);
  handleExceptionEnd
end;

//property
function BoundLabel_FocusControl(AIsSet: LongBool; AObj: TBoundLabel; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='FocusControl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusControl := AValue;
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

//property
function BoundLabel_DragCursor(AIsSet: LongBool; AObj: TBoundLabel; AValue: TCursor): TCursor; extdecl;
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
function BoundLabel_DragMode(AIsSet: LongBool; AObj: TBoundLabel; AValue: TDragMode): TDragMode; extdecl;
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
function BoundLabel_ParentColor(AIsSet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
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
function BoundLabel_ParentFont(AIsSet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
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
function BoundLabel_ParentShowHint(AIsSet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
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

//property
function BoundLabel_ShowAccelChar(AIsSet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowAccelChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAccelChar := AValue;
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

//property
function BoundLabel_Layout(AIsSet: LongBool; AObj: TBoundLabel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function BoundLabel_WordWrap(AIsSet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='WordWrap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WordWrap := AValue;
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

//function
function BoundLabel_Class(): TClass; extdecl;
begin
  Result := TBoundLabel;
end;

//property event
procedure BoundLabel_SetOnDblClick(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnDragDrop(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnDragOver(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnEndDrag(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseDown(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseEnter(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseLeave(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseMove(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseUp(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseWheel(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseWheelDown(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnMouseWheelUp(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure BoundLabel_SetOnStartDrag(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  BoundLabel_Create,
  BoundLabel_FocusControl,
  BoundLabel_DragCursor,
  BoundLabel_DragMode,
  BoundLabel_ParentColor,
  BoundLabel_ParentFont,
  BoundLabel_ParentShowHint,
  BoundLabel_ShowAccelChar,
  BoundLabel_Layout,
  BoundLabel_WordWrap,
  BoundLabel_Class,
  BoundLabel_SetOnDblClick,
  BoundLabel_SetOnDragDrop,
  BoundLabel_SetOnDragOver,
  BoundLabel_SetOnEndDrag,
  BoundLabel_SetOnMouseDown,
  BoundLabel_SetOnMouseEnter,
  BoundLabel_SetOnMouseLeave,
  BoundLabel_SetOnMouseMove,
  BoundLabel_SetOnMouseUp,
  BoundLabel_SetOnMouseWheel,
  BoundLabel_SetOnMouseWheelDown,
  BoundLabel_SetOnMouseWheelUp,
  BoundLabel_SetOnStartDrag;