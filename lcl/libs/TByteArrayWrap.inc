// constructor
function TByteArrayWrap_CreateWithInt(ASize: integer): TByteArrayWrap; extdecl;
begin
  {$define handleExceptionID := 41500}
  handleExceptionBegin
  Result := TByteArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TByteArrayWrap_ByteArrayData(AObj: TByteArrayWrap): PByteArray; extdecl;
begin
  {$define handleExceptionID := 41501}
  handleExceptionBegin
  Result := AObj.ByteArrayData();
  handleExceptionEnd
end;

// function
function TByteArrayWrap_Size(AObj: TByteArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 41502}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TByteArrayWrap_GetValue(AObj: TByteArrayWrap; AIndex: integer): byte; extdecl;
begin
  {$define handleExceptionID := 41503}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TByteArrayWrap_SetValue(AObj: TByteArrayWrap; AIndex: integer; AValue: byte); extdecl;
begin
  {$define handleExceptionID := 41504}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TByteArrayWrap_CreateWithInt,
  TByteArrayWrap_ByteArrayData,
  TByteArrayWrap_Size,
  TByteArrayWrap_GetValue,
  TByteArrayWrap_SetValue;