
//constructor
function RadioGroup_Create(TheOwner: TComponent): TRadioGroup; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TRadioGroup.Create(TheOwner);
  handleExceptionEnd
end;

//property
function RadioGroup_DragCursor(AIsSet: LongBool; AObj: TRadioGroup; AValue: TCursor): TCursor; extdecl;
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
function RadioGroup_DragMode(AIsSet: LongBool; AObj: TRadioGroup; AValue: TDragMode): TDragMode; extdecl;
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
function RadioGroup_ParentFont(AIsSet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
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
function RadioGroup_ParentColor(AIsSet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
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
function RadioGroup_ParentShowHint(AIsSet: LongBool; AObj: TRadioGroup; AValue: LongBool): LongBool; extdecl;
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
function RadioGroup_Class(): TClass; extdecl;
begin
  Result := TRadioGroup;
end;

//property event
procedure RadioGroup_SetOnDblClick(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnDragDrop(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnDragOver(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnEndDrag(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseDown(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseEnter(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseLeave(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseMove(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseUp(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseWheel(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseWheelDown(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnMouseWheelUp(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure RadioGroup_SetOnStartDrag(AObj: TRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  RadioGroup_Create,
  RadioGroup_DragCursor,
  RadioGroup_DragMode,
  RadioGroup_ParentFont,
  RadioGroup_ParentColor,
  RadioGroup_ParentShowHint,
  RadioGroup_Class,
  RadioGroup_SetOnDblClick,
  RadioGroup_SetOnDragDrop,
  RadioGroup_SetOnDragOver,
  RadioGroup_SetOnEndDrag,
  RadioGroup_SetOnMouseDown,
  RadioGroup_SetOnMouseEnter,
  RadioGroup_SetOnMouseLeave,
  RadioGroup_SetOnMouseMove,
  RadioGroup_SetOnMouseUp,
  RadioGroup_SetOnMouseWheel,
  RadioGroup_SetOnMouseWheelDown,
  RadioGroup_SetOnMouseWheelUp,
  RadioGroup_SetOnStartDrag;