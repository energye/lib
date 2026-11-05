// constructor
function TCustomSpinEdit_Create(TheOwner: TComponent): TCustomSpinEdit; extdecl;
begin
  {$define handleExceptionID := 14500}
  handleExceptionBegin
  Result := TCustomSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomSpinEdit_ValueToInt(ASet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    Result := AObj.Value;
  handleExceptionEnd
end;

// property
function TCustomSpinEdit_MinValueToInt(ASet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinValue := AValue
  end else
    Result := AObj.MinValue;
  handleExceptionEnd
end;

// property
function TCustomSpinEdit_MaxValueToInt(ASet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxValue := AValue
  end else
    Result := AObj.MaxValue;
  handleExceptionEnd
end;

// property
function TCustomSpinEdit_IncrementToInt(ASet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Increment := AValue
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

function TCustomSpinEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomSpinEdit;
end;

exports
  TCustomSpinEdit_Create,
  TCustomSpinEdit_ValueToInt,
  TCustomSpinEdit_MinValueToInt,
  TCustomSpinEdit_MaxValueToInt,
  TCustomSpinEdit_IncrementToInt,
  TCustomSpinEdit_TClass;