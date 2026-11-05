// constructor
function TCustomFloatSpinEdit_Create(TheOwner: TComponent): TCustomFloatSpinEdit; extdecl;
begin
  {$define handleExceptionID := 13800}
  handleExceptionBegin
  Result := TCustomFloatSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

// function
procedure TCustomFloatSpinEdit_GetLimitedValue(AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13801}
  handleExceptionBegin
  Result := AObj.GetLimitedValue(AValue);
  handleExceptionEnd
end;

// function
procedure TCustomFloatSpinEdit_ValueToStr(AObj: TCustomFloatSpinEdit; var AValue: Double;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 13802}
  handleExceptionBegin
  StringBufferCreate(AObj.ValueToStr(AValue), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomFloatSpinEdit_StrToValue(AObj: TCustomFloatSpinEdit; const S: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13803}
  handleExceptionBegin
  Result := AObj.StrToValue(S);
  handleExceptionEnd
end;

// property
function TCustomFloatSpinEdit_DecimalPlaces(ASet: LongBool; AObj: TCustomFloatSpinEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 13804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DecimalPlaces := AValue
  end else
    Result := AObj.DecimalPlaces;
  handleExceptionEnd
end;

// property
function TCustomFloatSpinEdit_EditorEnabled(ASet: LongBool; AObj: TCustomFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditorEnabled := AValue
  end else
    Result := AObj.EditorEnabled;
  handleExceptionEnd
end;

// property
procedure TCustomFloatSpinEdit_Increment(ASet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Increment := AValue
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

// property
procedure TCustomFloatSpinEdit_MinValue(ASet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinValue := AValue
  end else
    Result := AObj.MinValue;
  handleExceptionEnd
end;

// property
procedure TCustomFloatSpinEdit_MaxValue(ASet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxValue := AValue
  end else
    Result := AObj.MaxValue;
  handleExceptionEnd
end;

// property
procedure TCustomFloatSpinEdit_Value(ASet: LongBool; AObj: TCustomFloatSpinEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 13809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    Result := AObj.Value;
  handleExceptionEnd
end;

// property
function TCustomFloatSpinEdit_ValueEmpty(ASet: LongBool; AObj: TCustomFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValueEmpty := AValue
  end else
    Result := AObj.ValueEmpty;
  handleExceptionEnd
end;

function TCustomFloatSpinEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomFloatSpinEdit;
end;

exports
  TCustomFloatSpinEdit_Create,
  TCustomFloatSpinEdit_GetLimitedValue,
  TCustomFloatSpinEdit_ValueToStr,
  TCustomFloatSpinEdit_StrToValue,
  TCustomFloatSpinEdit_DecimalPlaces,
  TCustomFloatSpinEdit_EditorEnabled,
  TCustomFloatSpinEdit_Increment,
  TCustomFloatSpinEdit_MinValue,
  TCustomFloatSpinEdit_MaxValue,
  TCustomFloatSpinEdit_Value,
  TCustomFloatSpinEdit_ValueEmpty,
  TCustomFloatSpinEdit_TClass;