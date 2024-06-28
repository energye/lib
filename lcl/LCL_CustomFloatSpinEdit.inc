
//constructor
function CustomFloatSpinEdit_Create(TheOwner: TComponent): TCustomFloatSpinEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomFloatSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomFloatSpinEdit_DecimalPlaces(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DecimalPlaces'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DecimalPlaces := AValue;
  end else
    Result := AObj.DecimalPlaces;
  handleExceptionEnd
end;

//property
function CustomFloatSpinEdit_EditorEnabled(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EditorEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditorEnabled := AValue;
  end else
    Result := AObj.EditorEnabled;
  handleExceptionEnd
end;

//property
procedure CustomFloatSpinEdit_Increment(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='Increment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Increment := AValue;
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

//property
procedure CustomFloatSpinEdit_MinValue(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='MinValue'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinValue := AValue;
  end else
    Result := AObj.MinValue;
  handleExceptionEnd
end;

//property
procedure CustomFloatSpinEdit_MaxValue(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='MaxValue'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxValue := AValue;
  end else
    Result := AObj.MaxValue;
  handleExceptionEnd
end;

//property
procedure CustomFloatSpinEdit_Value(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='Value'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Value := AValue;
  end else
    Result := AObj.Value;
  handleExceptionEnd
end;

//property
function CustomFloatSpinEdit_ValueEmpty(AIsSet: LongBool; AObj: TCustomFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ValueEmpty'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValueEmpty := AValue;
  end else
    Result := AObj.ValueEmpty;
  handleExceptionEnd
end;

//function
procedure CustomFloatSpinEdit_GetLimitedValue(AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='GetLimitedValue'}
  handleExceptionBegin
  Result := AObj.GetLimitedValue(AValue);
  handleExceptionEnd
end;

//function
function CustomFloatSpinEdit_ValueToStr(AObj: TCustomFloatSpinEdit; var AValue: Double): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ValueToStr'}
  handleExceptionBegin
  Result := ToPChar(AObj.ValueToStr(AValue));
  handleExceptionEnd
end;

//function
procedure CustomFloatSpinEdit_StrToValue(AObj: TCustomFloatSpinEdit; const S: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='StrToValue'}
  handleExceptionBegin
  Result := AObj.StrToValue(S);
  handleExceptionEnd
end;

//function
function CustomFloatSpinEdit_Class(): TClass; extdecl;
begin
  Result := TCustomFloatSpinEdit;
end;


exports
  CustomFloatSpinEdit_Create,
  CustomFloatSpinEdit_DecimalPlaces,
  CustomFloatSpinEdit_EditorEnabled,
  CustomFloatSpinEdit_Increment,
  CustomFloatSpinEdit_MinValue,
  CustomFloatSpinEdit_MaxValue,
  CustomFloatSpinEdit_Value,
  CustomFloatSpinEdit_ValueEmpty,
  CustomFloatSpinEdit_GetLimitedValue,
  CustomFloatSpinEdit_ValueToStr,
  CustomFloatSpinEdit_StrToValue,
  CustomFloatSpinEdit_Class;