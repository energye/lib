
//constructor
function VTFixedAreaConstraints_Create(AOwner: TVTHeader): TVTFixedAreaConstraints; extdecl;
begin
  handleExceptionBegin
  Result := TVTFixedAreaConstraints.Create(AOwner);
  handleExceptionEnd
end;

//property
function VTFixedAreaConstraints_MaxHeightPercent(AIsSet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxHeightPercent := AValue;
  end else
    Result := AObj.MaxHeightPercent;
  handleExceptionEnd
end;

//property
function VTFixedAreaConstraints_MaxWidthPercent(AIsSet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxWidthPercent := AValue;
  end else
    Result := AObj.MaxWidthPercent;
  handleExceptionEnd
end;

//property
function VTFixedAreaConstraints_MinHeightPercent(AIsSet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinHeightPercent := AValue;
  end else
    Result := AObj.MinHeightPercent;
  handleExceptionEnd
end;

//property
function VTFixedAreaConstraints_MinWidthPercent(AIsSet: LongBool; AObj: TVTFixedAreaConstraints; AValue: TVTConstraintPercent): TVTConstraintPercent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidthPercent := AValue;
  end else
    Result := AObj.MinWidthPercent;
  handleExceptionEnd
end;

//function
function VTFixedAreaConstraints_Class(): TClass; extdecl;
begin
  Result := TVTFixedAreaConstraints;
end;

//property event
procedure VTFixedAreaConstraints_SetOnChange(AObj: TVTFixedAreaConstraints; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  VTFixedAreaConstraints_Create,
  VTFixedAreaConstraints_MaxHeightPercent,
  VTFixedAreaConstraints_MaxWidthPercent,
  VTFixedAreaConstraints_MinHeightPercent,
  VTFixedAreaConstraints_MinWidthPercent,
  VTFixedAreaConstraints_Class,
  VTFixedAreaConstraints_SetOnChange;