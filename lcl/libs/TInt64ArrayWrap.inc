// constructor
function TInt64ArrayWrap_CreateWithInt(ASize: integer): TInt64ArrayWrap; extdecl;
begin
  {$define handleExceptionID := 32000}
  handleExceptionBegin
  Result := TInt64ArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TInt64ArrayWrap_Int64ArrayData(AObj: TInt64ArrayWrap): PInt64Array; extdecl;
begin
  {$define handleExceptionID := 32001}
  handleExceptionBegin
  Result := AObj.Int64ArrayData();
  handleExceptionEnd
end;

// function
function TInt64ArrayWrap_Size(AObj: TInt64ArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 32002}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
procedure TInt64ArrayWrap_GetValue(AObj: TInt64ArrayWrap; AIndex: integer; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 32003}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TInt64ArrayWrap_SetValue(AObj: TInt64ArrayWrap; AIndex: integer; var AValue: int64); extdecl;
begin
  {$define handleExceptionID := 32004}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TInt64ArrayWrap_CreateWithInt,
  TInt64ArrayWrap_Int64ArrayData,
  TInt64ArrayWrap_Size,
  TInt64ArrayWrap_GetValue,
  TInt64ArrayWrap_SetValue;