
//constructor
function SpinEdit_Create(TheOwner: TComponent): TSpinEdit; extdecl;
begin
  handleExceptionBegin
  Result := TSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function SpinEdit_AutoSelected(AIsSet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function SpinEdit_AutoSelect(AIsSet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function SpinEdit_ParentColor(AIsSet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function SpinEdit_ParentFont(AIsSet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function SpinEdit_ParentShowHint(AIsSet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
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
function SpinEdit_Class(): TClass; extdecl;
begin
  Result := TSpinEdit;
end;

//property event
procedure SpinEdit_SetOnEditingDone(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseDown(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseEnter(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseLeave(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseMove(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseUp(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheel(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheelDown(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheelUp(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheelHorz(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheelLeft(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure SpinEdit_SetOnMouseWheelRight(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  SpinEdit_Create,
  SpinEdit_AutoSelected,
  SpinEdit_AutoSelect,
  SpinEdit_ParentColor,
  SpinEdit_ParentFont,
  SpinEdit_ParentShowHint,
  SpinEdit_Class,
  SpinEdit_SetOnEditingDone,
  SpinEdit_SetOnMouseDown,
  SpinEdit_SetOnMouseEnter,
  SpinEdit_SetOnMouseLeave,
  SpinEdit_SetOnMouseMove,
  SpinEdit_SetOnMouseUp,
  SpinEdit_SetOnMouseWheel,
  SpinEdit_SetOnMouseWheelDown,
  SpinEdit_SetOnMouseWheelUp,
  SpinEdit_SetOnMouseWheelHorz,
  SpinEdit_SetOnMouseWheelLeft,
  SpinEdit_SetOnMouseWheelRight;