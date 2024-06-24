
//constructor
function FloatSpinEdit_Create(TheOwner: TComponent): TFloatSpinEdit; extdecl;
begin
  handleExceptionBegin
  Result := TFloatSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function FloatSpinEdit_AutoSelected(AIsSet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelected := AValue;
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

//property
function FloatSpinEdit_AutoSelect(AIsSet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function FloatSpinEdit_ParentColor(AIsSet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function FloatSpinEdit_ParentFont(AIsSet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function FloatSpinEdit_ParentShowHint(AIsSet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function FloatSpinEdit_Class(): TClass; extdecl;
begin
  Result := TFloatSpinEdit;
end;

//property event
procedure FloatSpinEdit_SetOnEditingDone(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseDown(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseEnter(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseLeave(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseMove(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseUp(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheel(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheelDown(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheelUp(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheelHorz(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheelLeft(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure FloatSpinEdit_SetOnMouseWheelRight(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  FloatSpinEdit_Create,
  FloatSpinEdit_AutoSelected,
  FloatSpinEdit_AutoSelect,
  FloatSpinEdit_ParentColor,
  FloatSpinEdit_ParentFont,
  FloatSpinEdit_ParentShowHint,
  FloatSpinEdit_Class,
  FloatSpinEdit_SetOnEditingDone,
  FloatSpinEdit_SetOnMouseDown,
  FloatSpinEdit_SetOnMouseEnter,
  FloatSpinEdit_SetOnMouseLeave,
  FloatSpinEdit_SetOnMouseMove,
  FloatSpinEdit_SetOnMouseUp,
  FloatSpinEdit_SetOnMouseWheel,
  FloatSpinEdit_SetOnMouseWheelDown,
  FloatSpinEdit_SetOnMouseWheelUp,
  FloatSpinEdit_SetOnMouseWheelHorz,
  FloatSpinEdit_SetOnMouseWheelLeft,
  FloatSpinEdit_SetOnMouseWheelRight;