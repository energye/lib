// constructor
function TPointArrayWrap_CreateWithInt(ASize: integer): TPointArrayWrap; extdecl;
begin
  {$define handleExceptionID := 32300}
  handleExceptionBegin
  Result := TPointArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TPointArrayWrap_PointArrayData(AObj: TPointArrayWrap): PPointArray; extdecl;
begin
  {$define handleExceptionID := 32301}
  handleExceptionBegin
  Result := AObj.PointArrayData();
  handleExceptionEnd
end;

// function
function TPointArrayWrap_Size(AObj: TPointArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 32302}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
procedure TPointArrayWrap_GetValue(AObj: TPointArrayWrap; AIndex: integer; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 32303}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TPointArrayWrap_SetValue(AObj: TPointArrayWrap; AIndex: integer; var AValue: TPoint); extdecl;
begin
  {$define handleExceptionID := 32304}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TPointArrayWrap_CreateWithInt,
  TPointArrayWrap_PointArrayData,
  TPointArrayWrap_Size,
  TPointArrayWrap_GetValue,
  TPointArrayWrap_SetValue;