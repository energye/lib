// constructor
function TVTFixedAreaConstraints_Create(AOwner: TVTHeader): TVTFixedAreaConstraints; extdecl;
begin
  {$define handleExceptionID := 30400}
  handleExceptionBegin
  Result := TVTFixedAreaConstraints.Create(AOwner);
  handleExceptionEnd
end;

// property
function TVTFixedAreaConstraints_MaxHeightPercent(ASet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  {$define handleExceptionID := 30401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxHeightPercent := AValue
  end else
    Result := AObj.MaxHeightPercent;
  handleExceptionEnd
end;

// property
function TVTFixedAreaConstraints_MaxWidthPercent(ASet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  {$define handleExceptionID := 30402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxWidthPercent := AValue
  end else
    Result := AObj.MaxWidthPercent;
  handleExceptionEnd
end;

// property
function TVTFixedAreaConstraints_MinHeightPercent(ASet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  {$define handleExceptionID := 30403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinHeightPercent := AValue
  end else
    Result := AObj.MinHeightPercent;
  handleExceptionEnd
end;

// property
function TVTFixedAreaConstraints_MinWidthPercent(ASet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  {$define handleExceptionID := 30404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidthPercent := AValue
  end else
    Result := AObj.MinWidthPercent;
  handleExceptionEnd
end;

// event
procedure TVTFixedAreaConstraints_OnChange(AObj: TVTFixedAreaConstraints; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TVTFixedAreaConstraints_Create,
  TVTFixedAreaConstraints_MaxHeightPercent,
  TVTFixedAreaConstraints_MaxWidthPercent,
  TVTFixedAreaConstraints_MinHeightPercent,
  TVTFixedAreaConstraints_MinWidthPercent,
  TVTFixedAreaConstraints_OnChange;