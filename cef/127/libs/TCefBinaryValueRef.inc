// constructor
function TCefBinaryValueRef_Create(data: Pointer; out IntfBinaryValue: ICefBinaryValue): TCefBinaryValueRef; extdecl;
begin
  {$define handleExceptionID := 17800}
  handleExceptionBegin
  Result := TCefBinaryValueRef.Create(data);
  IntfBinaryValue := Result as ICefBinaryValue;
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_IsValid(AObj: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 17801}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_IsOwned(AObj: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 17802}
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_IsSame(AObj: ICefBinaryValue; const that: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 17803}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_IsEqual(AObj: ICefBinaryValue; const that: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 17804}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

// function
procedure TCefBinaryValueRef_Copy(AObj: ICefBinaryValue; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 17805}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_GetRawData(AObj: ICefBinaryValue): Pointer; extdecl;
begin
  {$define handleExceptionID := 17806}
  handleExceptionBegin
  Result := AObj.GetRawData();
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_GetSize(AObj: ICefBinaryValue): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 17807}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefBinaryValueRef_GetData(AObj: ICefBinaryValue; buffer: Pointer; bufferSize: NativeUInt; dataOffset: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 17808}
  handleExceptionBegin
  Result := AObj.GetData(buffer, bufferSize, dataOffset);
  handleExceptionEnd
end;

// function static
procedure TCefBinaryValueRef_UnWrap(data: Pointer; var Result: ICefBinaryValue); extdecl;
begin
  Result := TCefBinaryValueRef.UnWrap(data);
end;

// function static
procedure TCefBinaryValueRef_New(const data: Pointer; dataSize: NativeUInt; var Result: ICefBinaryValue); extdecl;
begin
  Result := TCefBinaryValueRef.New(data, dataSize);
end;

exports
  TCefBinaryValueRef_Create,
  TCefBinaryValueRef_IsValid,
  TCefBinaryValueRef_IsOwned,
  TCefBinaryValueRef_IsSame,
  TCefBinaryValueRef_IsEqual,
  TCefBinaryValueRef_Copy,
  TCefBinaryValueRef_GetRawData,
  TCefBinaryValueRef_GetSize,
  TCefBinaryValueRef_GetData,
  TCefBinaryValueRef_UnWrap,
  TCefBinaryValueRef_New;