// constructor
function TUpDown_Create(AOwner: TComponent): TUpDown; extdecl;
begin
  {$define handleExceptionID := 8600}
  handleExceptionBegin
  Result := TUpDown.Create(AOwner);
  handleExceptionEnd
end;

// property
function TUpDown_AlignButton(ASet: LongBool; AObj: TUpDown; AValue: TUDAlignButton): TUDAlignButton; extdecl;
begin
  {$define handleExceptionID := 8601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlignButton := AValue
  end else
    Result := AObj.AlignButton;
  handleExceptionEnd
end;

// property
function TUpDown_ArrowKeys(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ArrowKeys := AValue
  end else
    Result := AObj.ArrowKeys;
  handleExceptionEnd
end;

// property
function TUpDown_Associate(ASet: LongBool; AObj: TUpDown; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 8603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Associate := AValue
  end else
    Result := AObj.Associate;
  handleExceptionEnd
end;

// property
function TUpDown_Increment(ASet: LongBool; AObj: TUpDown; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Increment := AValue
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

// property
function TUpDown_Max(ASet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  {$define handleExceptionID := 8605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Max := AValue
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

// property
function TUpDown_Min(ASet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  {$define handleExceptionID := 8606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Min := AValue
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

// property
function TUpDown_MinRepeatInterval(ASet: LongBool; AObj: TUpDown; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 8607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinRepeatInterval := AValue
  end else
    Result := AObj.MinRepeatInterval;
  handleExceptionEnd
end;

// property
function TUpDown_Orientation(ASet: LongBool; AObj: TUpDown; AValue: TUDOrientation): TUDOrientation; extdecl;
begin
  {$define handleExceptionID := 8608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TUpDown_ParentColor(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TUpDown_ParentShowHint(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TUpDown_Position(ASet: LongBool; AObj: TUpDown; AValue: SmallInt): SmallInt; extdecl;
begin
  {$define handleExceptionID := 8611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TUpDown_Thousands(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Thousands := AValue
  end else
    Result := AObj.Thousands;
  handleExceptionEnd
end;

// property
function TUpDown_Flat(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TUpDown_Wrap(ASet: LongBool; AObj: TUpDown; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Wrap := AValue
  end else
    Result := AObj.Wrap;
  handleExceptionEnd
end;

// event
procedure TUpDown_OnChanging(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDChangingEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnChangingEx(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDChangingEventEx}
  {$DEFINE EventName := OnChangingEx}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnClickToUDClickEvent(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUDClickEvent}
  {$DEFINE EventName := OnClick}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnContextPopup(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseDown(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseEnter(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseLeave(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseMove(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseUp(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheel(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheelDown(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheelUp(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheelHorz(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheelLeft(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TUpDown_OnMouseWheelRight(AObj: TUpDown; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function TUpDown_TClass(): TClass; extdecl;
begin
  Result := TUpDown;
end;

exports
  TUpDown_Create,
  TUpDown_AlignButton,
  TUpDown_ArrowKeys,
  TUpDown_Associate,
  TUpDown_Increment,
  TUpDown_Max,
  TUpDown_Min,
  TUpDown_MinRepeatInterval,
  TUpDown_Orientation,
  TUpDown_ParentColor,
  TUpDown_ParentShowHint,
  TUpDown_Position,
  TUpDown_Thousands,
  TUpDown_Flat,
  TUpDown_Wrap,
  TUpDown_OnChanging,
  TUpDown_OnChangingEx,
  TUpDown_OnClickToUDClickEvent,
  TUpDown_OnContextPopup,
  TUpDown_OnMouseDown,
  TUpDown_OnMouseEnter,
  TUpDown_OnMouseLeave,
  TUpDown_OnMouseMove,
  TUpDown_OnMouseUp,
  TUpDown_OnMouseWheel,
  TUpDown_OnMouseWheelDown,
  TUpDown_OnMouseWheelUp,
  TUpDown_OnMouseWheelHorz,
  TUpDown_OnMouseWheelLeft,
  TUpDown_OnMouseWheelRight,
  TUpDown_TClass;