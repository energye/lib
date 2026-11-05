// constructor
function TFormatEtcArrayWrap_Create(ASize: integer): TFormatEtcArrayWrap; extdecl;
begin
  {$define handleExceptionID := 32400}
  handleExceptionBegin
  Result := TFormatEtcArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TFormatEtcArrayWrap_FormatEtcArrayData(AObj: TFormatEtcArrayWrap): PFormatEtcArray; extdecl;
begin
  {$define handleExceptionID := 32401}
  handleExceptionBegin
  Result := AObj.FormatEtcArrayData();
  handleExceptionEnd
end;

// function
function TFormatEtcArrayWrap_Size(AObj: TFormatEtcArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 32402}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TFormatEtcArrayWrap_GetValue(AObj: TFormatEtcArrayWrap; AIndex: integer): PFormatEtc; extdecl;
begin
  {$define handleExceptionID := 32403}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TFormatEtcArrayWrap_SetValue(AObj: TFormatEtcArrayWrap; AIndex: integer; AValue: PFormatEtc); extdecl;
begin
  {$define handleExceptionID := 32404}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TFormatEtcArrayWrap_Create,
  TFormatEtcArrayWrap_FormatEtcArrayData,
  TFormatEtcArrayWrap_Size,
  TFormatEtcArrayWrap_GetValue,
  TFormatEtcArrayWrap_SetValue;