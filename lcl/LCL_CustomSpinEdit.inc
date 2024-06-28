
//constructor
function CustomSpinEdit_Create(TheOwner: TComponent): TCustomSpinEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomSpinEdit_ValueForInteger(AIsSet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ValueForInteger'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Value := AValue;
  end else
    Result := AObj.Value;
  handleExceptionEnd
end;

//property
function CustomSpinEdit_MinValueForInteger(AIsSet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MinValueForInteger'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinValue := AValue;
  end else
    Result := AObj.MinValue;
  handleExceptionEnd
end;

//property
function CustomSpinEdit_MaxValueForInteger(AIsSet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxValueForInteger'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxValue := AValue;
  end else
    Result := AObj.MaxValue;
  handleExceptionEnd
end;

//property
function CustomSpinEdit_IncrementForInteger(AIsSet: LongBool; AObj: TCustomSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IncrementForInteger'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Increment := AValue;
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

//function
function CustomSpinEdit_Class(): TClass; extdecl;
begin
  Result := TCustomSpinEdit;
end;


exports
  CustomSpinEdit_Create,
  CustomSpinEdit_ValueForInteger,
  CustomSpinEdit_MinValueForInteger,
  CustomSpinEdit_MaxValueForInteger,
  CustomSpinEdit_IncrementForInteger,
  CustomSpinEdit_Class;