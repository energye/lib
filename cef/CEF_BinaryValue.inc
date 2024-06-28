
//function
procedure CefBinaryValue_UnWrap(data: Pointer; var Result: ICefBinaryValue); extdecl;
begin
  Result := TCefBinaryValueRef.UnWrap(data);
end;

//function
procedure CefBinaryValue_New(const data: Pointer; dataSize: NativeUInt; var Result: ICefBinaryValue); extdecl;
begin
  Result := TCefBinaryValueRef.New(data, dataSize);
end;

//function
function CefBinaryValue_IsValid(AObj: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefBinaryValue_IsOwned(AObj: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsOwned'}
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

//function
function CefBinaryValue_IsSame(AObj: ICefBinaryValue; const that: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefBinaryValue_IsEqual(AObj: ICefBinaryValue; const that: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEqual'}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

//function
procedure CefBinaryValue_Copy(AObj: ICefBinaryValue; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//function
function CefBinaryValue_GetSize(AObj: ICefBinaryValue): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function CefBinaryValue_GetData(AObj: ICefBinaryValue; buffer: Pointer; bufferSize,  dataOffset: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetData'}
  handleExceptionBegin
  Result := AObj.GetData(buffer, bufferSize,  dataOffset);
  handleExceptionEnd
end;


exports
  CefBinaryValue_UnWrap,
  CefBinaryValue_New,
  CefBinaryValue_IsValid,
  CefBinaryValue_IsOwned,
  CefBinaryValue_IsSame,
  CefBinaryValue_IsEqual,
  CefBinaryValue_Copy,
  CefBinaryValue_GetSize,
  CefBinaryValue_GetData;