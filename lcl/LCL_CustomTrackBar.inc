
//constructor
function CustomTrackBar_Create(AOwner: TComponent): TCustomTrackBar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomTrackBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomTrackBar_Frequency(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Frequency'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Frequency := AValue;
  end else
    Result := AObj.Frequency;
  handleExceptionEnd
end;

//property
function CustomTrackBar_LineSize(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LineSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineSize := AValue;
  end else
    Result := AObj.LineSize;
  handleExceptionEnd
end;

//property
function CustomTrackBar_Max(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Max'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Max := AValue;
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

//property
function CustomTrackBar_Min(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Min'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Min := AValue;
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

//property
function CustomTrackBar_Orientation(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: TTrackBarOrientation): TTrackBarOrientation; extdecl;
begin
  {$define handleExceptionFuncName :='Orientation'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
function CustomTrackBar_PageSize(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageSize := AValue;
  end else
    Result := AObj.PageSize;
  handleExceptionEnd
end;

//property
function CustomTrackBar_Position(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function CustomTrackBar_Reversed(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Reversed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Reversed := AValue;
  end else
    Result := AObj.Reversed;
  handleExceptionEnd
end;

//property
function CustomTrackBar_ScalePos(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: TTrackBarScalePos): TTrackBarScalePos; extdecl;
begin
  {$define handleExceptionFuncName :='ScalePos'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScalePos := AValue;
  end else
    Result := AObj.ScalePos;
  handleExceptionEnd
end;

//property
function CustomTrackBar_SelEnd(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelEnd'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelEnd := AValue;
  end else
    Result := AObj.SelEnd;
  handleExceptionEnd
end;

//property
function CustomTrackBar_SelStart(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelStart'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelStart := AValue;
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

//property
function CustomTrackBar_ShowSelRange(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowSelRange'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowSelRange := AValue;
  end else
    Result := AObj.ShowSelRange;
  handleExceptionEnd
end;

//property
function CustomTrackBar_TickMarks(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: TTickMark): TTickMark; extdecl;
begin
  {$define handleExceptionFuncName :='TickMarks'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TickMarks := AValue;
  end else
    Result := AObj.TickMarks;
  handleExceptionEnd
end;

//property
function CustomTrackBar_TickStyle(AIsSet: LongBool; AObj: TCustomTrackBar; AValue: TTickStyle): TTickStyle; extdecl;
begin
  {$define handleExceptionFuncName :='TickStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TickStyle := AValue;
  end else
    Result := AObj.TickStyle;
  handleExceptionEnd
end;

//function
function CustomTrackBar_Class(): TClass; extdecl;
begin
  Result := TCustomTrackBar;
end;

//procedure
procedure CustomTrackBar_SetTick(AObj: TCustomTrackBar; Value: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetTick'}
  handleExceptionBegin
  AObj.SetTick(Value);
  handleExceptionEnd
end;

//procedure
procedure CustomTrackBar_SetParams(AObj: TCustomTrackBar; APosition, AMin, AMax: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetParams'}
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax);
  handleExceptionEnd
end;

//property event
procedure CustomTrackBar_SetOnChange(AObj: TCustomTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  CustomTrackBar_Create,
  CustomTrackBar_Frequency,
  CustomTrackBar_LineSize,
  CustomTrackBar_Max,
  CustomTrackBar_Min,
  CustomTrackBar_Orientation,
  CustomTrackBar_PageSize,
  CustomTrackBar_Position,
  CustomTrackBar_Reversed,
  CustomTrackBar_ScalePos,
  CustomTrackBar_SelEnd,
  CustomTrackBar_SelStart,
  CustomTrackBar_ShowSelRange,
  CustomTrackBar_TickMarks,
  CustomTrackBar_TickStyle,
  CustomTrackBar_Class,
  CustomTrackBar_SetTick,
  CustomTrackBar_SetParams,
  CustomTrackBar_SetOnChange;