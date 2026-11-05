// constructor
function TBrushPatternWrap_CreateToBrushPatternWrap(): TBrushPatternWrap; extdecl;
begin
  {$define handleExceptionID := 32200}
  handleExceptionBegin
  Result := TBrushPatternWrap.Create();
  handleExceptionEnd
end;

// function
function TBrushPatternWrap_BrushPatternData(AObj: TBrushPatternWrap): PBrushPattern; extdecl;
begin
  {$define handleExceptionID := 32201}
  handleExceptionBegin
  Result := AObj.BrushPatternData();
  handleExceptionEnd
end;

// function
function TBrushPatternWrap_Size(AObj: TBrushPatternWrap): integer; extdecl;
begin
  {$define handleExceptionID := 32202}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TBrushPatternWrap_GetValue(AObj: TBrushPatternWrap; AIndex: integer): longword; extdecl;
begin
  {$define handleExceptionID := 32203}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TBrushPatternWrap_SetValue(AObj: TBrushPatternWrap; AIndex: integer; AValue: longword); extdecl;
begin
  {$define handleExceptionID := 32204}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TBrushPatternWrap_CreateToBrushPatternWrap,
  TBrushPatternWrap_BrushPatternData,
  TBrushPatternWrap_Size,
  TBrushPatternWrap_GetValue,
  TBrushPatternWrap_SetValue;