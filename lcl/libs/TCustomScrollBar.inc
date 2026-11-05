// constructor
function TCustomScrollBar_Create(AOwner: TComponent): TCustomScrollBar; extdecl;
begin
  {$define handleExceptionID := 16800}
  handleExceptionBegin
  Result := TCustomScrollBar.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomScrollBar_SetParamsWithIntX4(AObj: TCustomScrollBar; APosition: Integer; AMin: Integer; AMax: Integer; APageSize: Integer); extdecl;
begin
  {$define handleExceptionID := 16801}
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax, APageSize);
  handleExceptionEnd
end;

// procedure
procedure TCustomScrollBar_SetParamsWithIntX3(AObj: TCustomScrollBar; APosition: Integer; AMin: Integer; AMax: Integer); extdecl;
begin
  {$define handleExceptionID := 16802}
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax);
  handleExceptionEnd
end;

// property
function TCustomScrollBar_Kind(ASet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarKind): TScrollBarKind; extdecl;
begin
  {$define handleExceptionID := 16803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Kind := AValue
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_LargeChange(ASet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionID := 16804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LargeChange := AValue
  end else
    Result := AObj.LargeChange;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_Max(ASet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Max := AValue
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_Min(ASet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Min := AValue
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_PageSize(ASet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageSize := AValue
  end else
    Result := AObj.PageSize;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_Position(ASet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TCustomScrollBar_SmallChange(ASet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionID := 16809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SmallChange := AValue
  end else
    Result := AObj.SmallChange;
  handleExceptionEnd
end;

// event
procedure TCustomScrollBar_OnChange(AObj: TCustomScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCustomScrollBar_OnScroll(AObj: TCustomScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTScrollEvent}
  {$DEFINE EventName := OnScroll}
  LCLEventMethodCode
end;

function TCustomScrollBar_TClass(): TClass; extdecl;
begin
  Result := TCustomScrollBar;
end;

exports
  TCustomScrollBar_Create,
  TCustomScrollBar_SetParamsWithIntX4,
  TCustomScrollBar_SetParamsWithIntX3,
  TCustomScrollBar_Kind,
  TCustomScrollBar_LargeChange,
  TCustomScrollBar_Max,
  TCustomScrollBar_Min,
  TCustomScrollBar_PageSize,
  TCustomScrollBar_Position,
  TCustomScrollBar_SmallChange,
  TCustomScrollBar_OnChange,
  TCustomScrollBar_OnScroll,
  TCustomScrollBar_TClass;