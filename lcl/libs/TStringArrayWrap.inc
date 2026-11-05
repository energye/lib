// constructor
function TStringArrayWrap_CreateWithInt(ASize: integer): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 32100}
  handleExceptionBegin
  Result := TStringArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TStringArrayWrap_StringArrayData(AObj: TStringArrayWrap): PStringArray; extdecl;
begin
  {$define handleExceptionID := 32101}
  handleExceptionBegin
  Result := AObj.StringArrayData();
  handleExceptionEnd
end;

// function
function TStringArrayWrap_Size(AObj: TStringArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 32102}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
procedure TStringArrayWrap_GetValue(AObj: TStringArrayWrap; AIndex: integer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32103}
  handleExceptionBegin
  StringBufferCreate(AObj.GetValue(AIndex), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TStringArrayWrap_SetValue(AObj: TStringArrayWrap; AIndex: integer; AValue: PChar); extdecl;
begin
  {$define handleExceptionID := 32104}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TStringArrayWrap_CreateWithInt,
  TStringArrayWrap_StringArrayData,
  TStringArrayWrap_Size,
  TStringArrayWrap_GetValue,
  TStringArrayWrap_SetValue;