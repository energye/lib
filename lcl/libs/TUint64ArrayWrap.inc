// constructor
function TUint64ArrayWrap_CreateWithInt(ASize: integer): TUint64ArrayWrap; extdecl;
begin
  {$define handleExceptionID := 31900}
  handleExceptionBegin
  Result := TUint64ArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TUint64ArrayWrap_Uint64ArrayData(AObj: TUint64ArrayWrap): PUint64Array; extdecl;
begin
  {$define handleExceptionID := 31901}
  handleExceptionBegin
  Result := AObj.Uint64ArrayData();
  handleExceptionEnd
end;

// function
function TUint64ArrayWrap_Size(AObj: TUint64ArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 31902}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
procedure TUint64ArrayWrap_GetValue(AObj: TUint64ArrayWrap; AIndex: integer; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 31903}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TUint64ArrayWrap_SetValue(AObj: TUint64ArrayWrap; AIndex: integer; var AValue: uint64); extdecl;
begin
  {$define handleExceptionID := 31904}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TUint64ArrayWrap_CreateWithInt,
  TUint64ArrayWrap_Uint64ArrayData,
  TUint64ArrayWrap_Size,
  TUint64ArrayWrap_GetValue,
  TUint64ArrayWrap_SetValue;