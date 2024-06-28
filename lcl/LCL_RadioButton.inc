
//constructor
function RadioButton_Create(TheOwner: TComponent): TRadioButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TRadioButton.Create(TheOwner);
  handleExceptionEnd
end;

//property
function RadioButton_Checked(AIsSet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
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
function RadioButton_DragCursor(AIsSet: LongBool; AObj: TRadioButton; AValue: TCursor): TCursor; extdecl;
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
function RadioButton_DragKind(AIsSet: LongBool; AObj: TRadioButton; AValue: TDragKind): TDragKind; extdecl;
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
function RadioButton_DragMode(AIsSet: LongBool; AObj: TRadioButton; AValue: TDragMode): TDragMode; extdecl;
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
function RadioButton_ParentColor(AIsSet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
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
function RadioButton_ParentFont(AIsSet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
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
function RadioButton_ParentShowHint(AIsSet: LongBool; AObj: TRadioButton; AValue: LongBool): LongBool; extdecl;
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
function RadioButton_Class(): TClass; extdecl;
begin
  Result := TRadioButton;
end;

//property event
procedure RadioButton_SetOnContextPopup(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnDragDrop(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnDragOver(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnEndDrag(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseDown(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseEnter(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseLeave(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseMove(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseUp(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseWheel(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseWheelDown(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnMouseWheelUp(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure RadioButton_SetOnStartDrag(AObj: TRadioButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  RadioButton_Create,
  RadioButton_Checked,
  RadioButton_DragCursor,
  RadioButton_DragKind,
  RadioButton_DragMode,
  RadioButton_ParentColor,
  RadioButton_ParentFont,
  RadioButton_ParentShowHint,
  RadioButton_Class,
  RadioButton_SetOnContextPopup,
  RadioButton_SetOnDragDrop,
  RadioButton_SetOnDragOver,
  RadioButton_SetOnEndDrag,
  RadioButton_SetOnMouseDown,
  RadioButton_SetOnMouseEnter,
  RadioButton_SetOnMouseLeave,
  RadioButton_SetOnMouseMove,
  RadioButton_SetOnMouseUp,
  RadioButton_SetOnMouseWheel,
  RadioButton_SetOnMouseWheelDown,
  RadioButton_SetOnMouseWheelUp,
  RadioButton_SetOnStartDrag;