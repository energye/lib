// constructor
function TCefListValueRef_Create(data: Pointer; out IntfListValue: ICefListValue): TCefListValueRef; extdecl;
begin
  {$define handleExceptionID := 19800}
  handleExceptionBegin
  Result := TCefListValueRef.Create(data);
  IntfListValue := Result as ICefListValue;
  handleExceptionEnd
end;

// function
function TCefListValueRef_IsValid(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19801}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefListValueRef_IsOwned(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19802}
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

// function
function TCefListValueRef_IsReadOnly(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19803}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefListValueRef_IsSame(AObj: ICefListValue; const that: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19804}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefListValueRef_IsEqual(AObj: ICefListValue; const that: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19805}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_Copy(AObj: ICefListValue; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionID := 19806}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetSize(AObj: ICefListValue; size: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19807}
  handleExceptionBegin
  Result := AObj.SetSize(size);
  handleExceptionEnd
end;

// function
function TCefListValueRef_GetSize(AObj: ICefListValue): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 19808}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefListValueRef_Clear(AObj: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19809}
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

// function
function TCefListValueRef_Remove(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19810}
  handleExceptionBegin
  Result := AObj.Remove(index);
  handleExceptionEnd
end;

// function
function TCefListValueRef_GetType(AObj: ICefListValue; index: NativeUInt): TCefValueType; extdecl;
begin
  {$define handleExceptionID := 19811}
  handleExceptionBegin
  Result := AObj.GetType(index);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetValue(AObj: ICefListValue; index: NativeUInt; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 19812}
  handleExceptionBegin
  Result := AObj.GetValue(index);
  handleExceptionEnd
end;

// function
function TCefListValueRef_GetBool(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19813}
  handleExceptionBegin
  Result := AObj.GetBool(index);
  handleExceptionEnd
end;

// function
function TCefListValueRef_GetInt(AObj: ICefListValue; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionID := 19814}
  handleExceptionBegin
  Result := AObj.GetInt(index);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetDouble(AObj: ICefListValue; index: NativeUInt; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 19815}
  handleExceptionBegin
  Result := AObj.GetDouble(index);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetString(AObj: ICefListValue; index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19816}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetString(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetBinary(AObj: ICefListValue; index: NativeUInt; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 19817}
  handleExceptionBegin
  Result := AObj.GetBinary(index);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetDictionary(AObj: ICefListValue; index: NativeUInt; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 19818}
  handleExceptionBegin
  Result := AObj.GetDictionary(index);
  handleExceptionEnd
end;

// function
procedure TCefListValueRef_GetList(AObj: ICefListValue; index: NativeUInt; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionID := 19819}
  handleExceptionBegin
  Result := AObj.GetList(index);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetValue(AObj: ICefListValue; index: NativeUInt; const value: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19820}
  handleExceptionBegin
  Result := AObj.SetValue(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetNull(AObj: ICefListValue; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19821}
  handleExceptionBegin
  Result := AObj.SetNull(index);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetBool(AObj: ICefListValue; index: NativeUInt; value: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19822}
  handleExceptionBegin
  Result := AObj.SetBool(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetInt(AObj: ICefListValue; index: NativeUInt; value: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19823}
  handleExceptionBegin
  Result := AObj.SetInt(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetDouble(AObj: ICefListValue; index: NativeUInt; var value: Double): LongBool; extdecl;
begin
  {$define handleExceptionID := 19824}
  handleExceptionBegin
  Result := AObj.SetDouble(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetString(AObj: ICefListValue; index: NativeUInt; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19825}
  handleExceptionBegin
  Result := AObj.SetString(index, PCharToUStr(value));
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetBinary(AObj: ICefListValue; index: NativeUInt; const value: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19826}
  handleExceptionBegin
  Result := AObj.SetBinary(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetDictionary(AObj: ICefListValue; index: NativeUInt; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19827}
  handleExceptionBegin
  Result := AObj.SetDictionary(index, value);
  handleExceptionEnd
end;

// function
function TCefListValueRef_SetList(AObj: ICefListValue; index: NativeUInt; const value: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 19828}
  handleExceptionBegin
  Result := AObj.SetList(index, value);
  handleExceptionEnd
end;

// function static
procedure TCefListValueRef_UnWrap(data: Pointer; var Result: ICefListValue); extdecl;
begin
  Result := TCefListValueRef.UnWrap(data);
end;

// function static
procedure TCefListValueRef_New(var Result: ICefListValue); extdecl;
begin
  Result := TCefListValueRef.New();
end;

exports
  TCefListValueRef_Create,
  TCefListValueRef_IsValid,
  TCefListValueRef_IsOwned,
  TCefListValueRef_IsReadOnly,
  TCefListValueRef_IsSame,
  TCefListValueRef_IsEqual,
  TCefListValueRef_Copy,
  TCefListValueRef_SetSize,
  TCefListValueRef_GetSize,
  TCefListValueRef_Clear,
  TCefListValueRef_Remove,
  TCefListValueRef_GetType,
  TCefListValueRef_GetValue,
  TCefListValueRef_GetBool,
  TCefListValueRef_GetInt,
  TCefListValueRef_GetDouble,
  TCefListValueRef_GetString,
  TCefListValueRef_GetBinary,
  TCefListValueRef_GetDictionary,
  TCefListValueRef_GetList,
  TCefListValueRef_SetValue,
  TCefListValueRef_SetNull,
  TCefListValueRef_SetBool,
  TCefListValueRef_SetInt,
  TCefListValueRef_SetDouble,
  TCefListValueRef_SetString,
  TCefListValueRef_SetBinary,
  TCefListValueRef_SetDictionary,
  TCefListValueRef_SetList,
  TCefListValueRef_UnWrap,
  TCefListValueRef_New;