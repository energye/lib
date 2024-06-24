
//constructor
function CustomScrollBar_Create(AOwner: TComponent): TCustomScrollBar; extdecl;
begin
  handleExceptionBegin
  Result := TCustomScrollBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomScrollBar_Kind(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarKind): TScrollBarKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Kind := AValue;
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CustomScrollBar_LargeChange(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LargeChange := AValue;
  end else
    Result := AObj.LargeChange;
  handleExceptionEnd
end;

//property
function CustomScrollBar_Max(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
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
function CustomScrollBar_Min(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
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
function CustomScrollBar_PageSize(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageSize := AValue;
  end else
    Result := AObj.PageSize;
  handleExceptionEnd
end;

//property
function CustomScrollBar_Position(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: Integer): Integer; extdecl;
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
function CustomScrollBar_SmallChange(AIsSet: LongBool; AObj: TCustomScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SmallChange := AValue;
  end else
    Result := AObj.SmallChange;
  handleExceptionEnd
end;

//function
function CustomScrollBar_Class(): TClass; extdecl;
begin
  Result := TCustomScrollBar;
end;

//procedure
procedure CustomScrollBar_SetParams(AObj: TCustomScrollBar; APosition, AMin, AMax, APageSize: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax, APageSize);
  handleExceptionEnd
end;

//procedure
procedure CustomScrollBar_SetParams1(AObj: TCustomScrollBar; APosition, AMin, AMax: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetParams(APosition, AMin, AMax);
  handleExceptionEnd
end;

//property event
procedure CustomScrollBar_SetOnChange(AObj: TCustomScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure CustomScrollBar_SetOnScroll(AObj: TCustomScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTScrollEvent}
  {$DEFINE EventName := OnScroll}
  EventMethodCode
end;


exports
  CustomScrollBar_Create,
  CustomScrollBar_Kind,
  CustomScrollBar_LargeChange,
  CustomScrollBar_Max,
  CustomScrollBar_Min,
  CustomScrollBar_PageSize,
  CustomScrollBar_Position,
  CustomScrollBar_SmallChange,
  CustomScrollBar_Class,
  CustomScrollBar_SetParams,
  CustomScrollBar_SetParams1,
  CustomScrollBar_SetOnChange,
  CustomScrollBar_SetOnScroll;