// constructor
function TCustomTrackBar_Create(AOwner: TComponent): TCustomTrackBar; extdecl;
begin
  {$define handleExceptionID := 8000}
  handleExceptionBegin
  Result := TCustomTrackBar.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomTrackBar_SetTick(AObj: TCustomTrackBar; Value: Integer); extdecl;
begin
  {$define handleExceptionID := 8001}
  handleExceptionBegin
  AObj.SetTick(Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomTrackBar_SetParams(AObj: TCustomTrackBar; APosition: Integer; AMin: Integer; AMax: Integer); extdecl;
begin
  {$define handleExceptionID := 8002}
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax);
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Frequency(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Frequency := AValue
  end else
    Result := AObj.Frequency;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_LineSize(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineSize := AValue
  end else
    Result := AObj.LineSize;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Max(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Max := AValue
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Min(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Min := AValue
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Orientation(ASet: LongBool; AObj: TCustomTrackBar; AValue: TTrackBarOrientation): TTrackBarOrientation; extdecl;
begin
  {$define handleExceptionID := 8007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_PageSize(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageSize := AValue
  end else
    Result := AObj.PageSize;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Position(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_Reversed(ASet: LongBool; AObj: TCustomTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Reversed := AValue
  end else
    Result := AObj.Reversed;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_ScalePos(ASet: LongBool; AObj: TCustomTrackBar; AValue: TTrackBarScalePos): TTrackBarScalePos; extdecl;
begin
  {$define handleExceptionID := 8011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScalePos := AValue
  end else
    Result := AObj.ScalePos;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_SelEnd(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelEnd := AValue
  end else
    Result := AObj.SelEnd;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_SelStart(ASet: LongBool; AObj: TCustomTrackBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelStart := AValue
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_ShowSelRange(ASet: LongBool; AObj: TCustomTrackBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowSelRange := AValue
  end else
    Result := AObj.ShowSelRange;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_TickMarks(ASet: LongBool; AObj: TCustomTrackBar; AValue: TTickMark): TTickMark; extdecl;
begin
  {$define handleExceptionID := 8015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TickMarks := AValue
  end else
    Result := AObj.TickMarks;
  handleExceptionEnd
end;

// property
function TCustomTrackBar_TickStyle(ASet: LongBool; AObj: TCustomTrackBar; AValue: TTickStyle): TTickStyle; extdecl;
begin
  {$define handleExceptionID := 8016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TickStyle := AValue
  end else
    Result := AObj.TickStyle;
  handleExceptionEnd
end;

// event
procedure TCustomTrackBar_OnChange(AObj: TCustomTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCustomTrackBar_TClass(): TClass; extdecl;
begin
  Result := TCustomTrackBar;
end;

exports
  TCustomTrackBar_Create,
  TCustomTrackBar_SetTick,
  TCustomTrackBar_SetParams,
  TCustomTrackBar_Frequency,
  TCustomTrackBar_LineSize,
  TCustomTrackBar_Max,
  TCustomTrackBar_Min,
  TCustomTrackBar_Orientation,
  TCustomTrackBar_PageSize,
  TCustomTrackBar_Position,
  TCustomTrackBar_Reversed,
  TCustomTrackBar_ScalePos,
  TCustomTrackBar_SelEnd,
  TCustomTrackBar_SelStart,
  TCustomTrackBar_ShowSelRange,
  TCustomTrackBar_TickMarks,
  TCustomTrackBar_TickStyle,
  TCustomTrackBar_OnChange,
  TCustomTrackBar_TClass;