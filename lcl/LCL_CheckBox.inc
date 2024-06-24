
//constructor
function CheckBox_Create(TheOwner: TComponent): TCheckBox; extdecl;
begin
  handleExceptionBegin
  Result := TCheckBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CheckBox_Checked(AIsSet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked := AValue;
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

//property
function CheckBox_DragCursor(AIsSet: LongBool; AObj: TCheckBox; AValue: TCursor): TCursor; extdecl;
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
function CheckBox_DragKind(AIsSet: LongBool; AObj: TCheckBox; AValue: TDragKind): TDragKind; extdecl;
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
function CheckBox_DragMode(AIsSet: LongBool; AObj: TCheckBox; AValue: TDragMode): TDragMode; extdecl;
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
function CheckBox_ParentColor(AIsSet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
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
function CheckBox_ParentFont(AIsSet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
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
function CheckBox_ParentShowHint(AIsSet: LongBool; AObj: TCheckBox; AValue: LongBool): LongBool; extdecl;
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
function CheckBox_Class(): TClass; extdecl;
begin
  Result := TCheckBox;
end;

//property event
procedure CheckBox_SetOnContextPopup(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnDragDrop(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnDragOver(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnEditingDone(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnEndDrag(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseDown(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseEnter(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseLeave(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseMove(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseUp(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseWheel(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseWheelDown(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnMouseWheelUp(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CheckBox_SetOnStartDrag(AObj: TCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  CheckBox_Create,
  CheckBox_Checked,
  CheckBox_DragCursor,
  CheckBox_DragKind,
  CheckBox_DragMode,
  CheckBox_ParentColor,
  CheckBox_ParentFont,
  CheckBox_ParentShowHint,
  CheckBox_Class,
  CheckBox_SetOnContextPopup,
  CheckBox_SetOnDragDrop,
  CheckBox_SetOnDragOver,
  CheckBox_SetOnEditingDone,
  CheckBox_SetOnEndDrag,
  CheckBox_SetOnMouseDown,
  CheckBox_SetOnMouseEnter,
  CheckBox_SetOnMouseLeave,
  CheckBox_SetOnMouseMove,
  CheckBox_SetOnMouseUp,
  CheckBox_SetOnMouseWheel,
  CheckBox_SetOnMouseWheelDown,
  CheckBox_SetOnMouseWheelUp,
  CheckBox_SetOnStartDrag;