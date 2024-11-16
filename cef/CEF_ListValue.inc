
//function
procedure CefListValue_UnWrap(data: Pointer; var Result: ICefListValue); extdecl;
begin
  Result := TCefListValueRef.UnWrap(data);
end;

//function
procedure CefListValue_New(var Result: ICefListValue); extdecl;
begin
  Result := TCefListValueRef.New();
end;

//function
function CefListValue_IsValid(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefListValue_IsOwned(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsOwned'}
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

//function
function CefListValue_IsReadOnly(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefListValue_IsSame(AObj: ICefListValue; const that: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefListValue_IsEqual(AObj: ICefListValue; const that: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEqual'}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

//function
procedure CefListValue_Copy(AObj: ICefListValue; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//function
function CefListValue_SetSize(AObj: ICefListValue; size: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  Result := AObj.SetSize(size);
  handleExceptionEnd
end;

//function
function CefListValue_GetSize(AObj: ICefListValue): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function CefListValue_Clear(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

//function
function CefListValue_Remove(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Remove'}
  handleExceptionBegin
  Result := AObj.Remove(index);
  handleExceptionEnd
end;

//function
function CefListValue_GetType(AObj: ICefListValue; index: NativeUInt): TCefValueType; extdecl;
begin
  {$define handleExceptionFuncName :='GetType'}
  handleExceptionBegin
  Result := AObj.GetType(index);
  handleExceptionEnd
end;

//function
procedure CefListValue_GetValue(AObj: ICefListValue; index: NativeUInt; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetValue'}
  handleExceptionBegin
  Result := AObj.GetValue(index);
  handleExceptionEnd
end;

//function
function CefListValue_GetBool(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetBool'}
  handleExceptionBegin
  Result := AObj.GetBool(index);
  handleExceptionEnd
end;

//function
function CefListValue_GetInt(AObj: ICefListValue; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetInt'}
  handleExceptionBegin
  Result := AObj.GetInt(index);
  handleExceptionEnd
end;

//function
procedure CefListValue_GetDouble(AObj: ICefListValue; index: NativeUInt; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='GetDouble'}
  handleExceptionBegin
  Result := AObj.GetDouble(index);
  handleExceptionEnd
end;

//function
procedure CefListValue_GetString(AObj: ICefListValue; index: NativeUInt; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetString'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetString(index));
  handleExceptionEnd
end;

//function
procedure CefListValue_GetBinary(AObj: ICefListValue; index: NativeUInt; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetBinary'}
  handleExceptionBegin
  Result := AObj.GetBinary(index);
  handleExceptionEnd
end;

//function
procedure CefListValue_GetDictionary(AObj: ICefListValue; index: NativeUInt; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetDictionary'}
  handleExceptionBegin
  Result := AObj.GetDictionary(index);
  handleExceptionEnd
end;

//function
procedure CefListValue_GetList(AObj: ICefListValue; index: NativeUInt; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetList'}
  handleExceptionBegin
  Result := AObj.GetList(index);
  handleExceptionEnd
end;

//function
function CefListValue_SetValue(AObj: ICefListValue; index: NativeUInt; const value: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetValue'}
  handleExceptionBegin
  Result := AObj.SetValue(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetNull(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetNull'}
  handleExceptionBegin
  Result := AObj.SetNull(index);
  handleExceptionEnd
end;

//function
function CefListValue_SetBool(AObj: ICefListValue; index: NativeUInt; value: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetBool'}
  handleExceptionBegin
  Result := AObj.SetBool(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetInt(AObj: ICefListValue; index: NativeUInt; value: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetInt'}
  handleExceptionBegin
  Result := AObj.SetInt(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetDouble(AObj: ICefListValue; index: NativeUInt; var value: Double): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetDouble'}
  handleExceptionBegin
  Result := AObj.SetDouble(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetString(AObj: ICefListValue; index: NativeUInt; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetString'}
  handleExceptionBegin
  Result := AObj.SetString(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetBinary(AObj: ICefListValue; index: NativeUInt; const value: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetBinary'}
  handleExceptionBegin
  Result := AObj.SetBinary(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetDictionary(AObj: ICefListValue; index: NativeUInt; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetDictionary'}
  handleExceptionBegin
  Result := AObj.SetDictionary(index, value);
  handleExceptionEnd
end;

//function
function CefListValue_SetList(AObj: ICefListValue; index: NativeUInt; const value: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetList'}
  handleExceptionBegin
  Result := AObj.SetList(index, value);
  handleExceptionEnd
end;


exports
  CefListValue_UnWrap,
  CefListValue_New,
  CefListValue_IsValid,
  CefListValue_IsOwned,
  CefListValue_IsReadOnly,
  CefListValue_IsSame,
  CefListValue_IsEqual,
  CefListValue_Copy,
  CefListValue_SetSize,
  CefListValue_GetSize,
  CefListValue_Clear,
  CefListValue_Remove,
  CefListValue_GetType,
  CefListValue_GetValue,
  CefListValue_GetBool,
  CefListValue_GetInt,
  CefListValue_GetDouble,
  CefListValue_GetString,
  CefListValue_GetBinary,
  CefListValue_GetDictionary,
  CefListValue_GetList,
  CefListValue_SetValue,
  CefListValue_SetNull,
  CefListValue_SetBool,
  CefListValue_SetInt,
  CefListValue_SetDouble,
  CefListValue_SetString,
  CefListValue_SetBinary,
  CefListValue_SetDictionary,
  CefListValue_SetList;