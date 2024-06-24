
//constructor
function UpDown_Create(AOwner: TComponent): TUpDown; extdecl;
begin
  handleExceptionBegin
  Result := TUpDown.Create(AOwner);
  handleExceptionEnd
end;

//property
function UpDown_AlignButton(AIsSet: LongBool; AObj: TUpDown; AValue: TUDAlignButton): TUDAlignButton; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlignButton := AValue;
  end else
    Result := AObj.AlignButton;
  handleExceptionEnd
end;

//property
function UpDown_ArrowKeys(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ArrowKeys := AValue;
  end else
    Result := AObj.ArrowKeys;
  handleExceptionEnd
end;

//property
function UpDown_Associate(AIsSet: LongBool; AObj: TUpDown; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Associate := AValue;
  end else
    Result := AObj.Associate;
  handleExceptionEnd
end;

//property
function UpDown_Increment(AIsSet: LongBool; AObj: TUpDown; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Increment := AValue;
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

//property
function UpDown_Max(AIsSet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Max := AValue;
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

//property
function UpDown_Min(AIsSet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Min := AValue;
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

//property
function UpDown_MinRepeatInterval(AIsSet: LongBool; AObj: TUpDown; AValue: Byte): Byte; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinRepeatInterval := AValue;
  end else
    Result := AObj.MinRepeatInterval;
  handleExceptionEnd
end;

//property
function UpDown_Orientation(AIsSet: LongBool; AObj: TUpDown; AValue: TUDOrientation): TUDOrientation; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
function UpDown_ParentColor(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
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
function UpDown_ParentShowHint(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function UpDown_Position(AIsSet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function UpDown_Thousands(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Thousands := AValue;
  end else
    Result := AObj.Thousands;
  handleExceptionEnd
end;

//property
function UpDown_Flat(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flat := AValue;
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

//property
function UpDown_Wrap(AIsSet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Wrap := AValue;
  end else
    Result := AObj.Wrap;
  handleExceptionEnd
end;

//function
function UpDown_Class(): TClass; extdecl;
begin
  Result := TUpDown;
end;

//property event
procedure UpDown_SetOnChanging(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDChangingEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnChangingEx(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDChangingEventEx}
  {$DEFINE EventName := OnChangingEx}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnClickForUDClickEvent(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDClickEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnContextPopup(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseDown(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseEnter(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseLeave(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseMove(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseUp(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheel(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheelDown(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheelUp(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheelHorz(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheelLeft(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure UpDown_SetOnMouseWheelRight(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  UpDown_Create,
  UpDown_AlignButton,
  UpDown_ArrowKeys,
  UpDown_Associate,
  UpDown_Increment,
  UpDown_Max,
  UpDown_Min,
  UpDown_MinRepeatInterval,
  UpDown_Orientation,
  UpDown_ParentColor,
  UpDown_ParentShowHint,
  UpDown_Position,
  UpDown_Thousands,
  UpDown_Flat,
  UpDown_Wrap,
  UpDown_Class,
  UpDown_SetOnChanging,
  UpDown_SetOnChangingEx,
  UpDown_SetOnClickForUDClickEvent,
  UpDown_SetOnContextPopup,
  UpDown_SetOnMouseDown,
  UpDown_SetOnMouseEnter,
  UpDown_SetOnMouseLeave,
  UpDown_SetOnMouseMove,
  UpDown_SetOnMouseUp,
  UpDown_SetOnMouseWheel,
  UpDown_SetOnMouseWheelDown,
  UpDown_SetOnMouseWheelUp,
  UpDown_SetOnMouseWheelHorz,
  UpDown_SetOnMouseWheelLeft,
  UpDown_SetOnMouseWheelRight;