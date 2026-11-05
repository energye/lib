// constructor
function TCefDictionaryValueRef_Create(data: Pointer; out IntfDictionaryValue: ICefDictionaryValue): TCefDictionaryValueRef; extdecl;
begin
  {$define handleExceptionID := 18000}
  handleExceptionBegin
  Result := TCefDictionaryValueRef.Create(data);
  IntfDictionaryValue := Result as ICefDictionaryValue;
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_IsValid(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18001}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_isOwned(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18002}
  handleExceptionBegin
  Result := AObj.isOwned();
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_IsReadOnly(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18003}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_IsSame(AObj: ICefDictionaryValue; const that: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18004}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_IsEqual(AObj: ICefDictionaryValue; const that: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18005}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_Copy(AObj: ICefDictionaryValue; excludeEmptyChildren: LongBool; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 18006}
  handleExceptionBegin
  Result := AObj.Copy(excludeEmptyChildren);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_GetSize(AObj: ICefDictionaryValue): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 18007}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_Clear(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18008}
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_HasKey(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18009}
  handleExceptionBegin
  Result := AObj.HasKey(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_GetKeys(AObj: ICefDictionaryValue; const keys: TStrings): LongBool; extdecl;
begin
  {$define handleExceptionID := 18010}
  handleExceptionBegin
  Result := AObj.GetKeys(keys);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_Remove(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18011}
  handleExceptionBegin
  Result := AObj.Remove(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_GetType(AObj: ICefDictionaryValue; const key: PChar): TCefValueType; extdecl;
begin
  {$define handleExceptionID := 18012}
  handleExceptionBegin
  Result := AObj.GetType(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetValue(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 18013}
  handleExceptionBegin
  Result := AObj.GetValue(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_GetBool(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18014}
  handleExceptionBegin
  Result := AObj.GetBool(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_GetInt(AObj: ICefDictionaryValue; const key: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 18015}
  handleExceptionBegin
  Result := AObj.GetInt(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetDouble(AObj: ICefDictionaryValue; const key: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18016}
  handleExceptionBegin
  Result := AObj.GetDouble(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetString(AObj: ICefDictionaryValue; const key: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18017}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetString(PCharToUStr(key))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetBinary(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 18018}
  handleExceptionBegin
  Result := AObj.GetBinary(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetDictionary(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 18019}
  handleExceptionBegin
  Result := AObj.GetDictionary(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefDictionaryValueRef_GetList(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionID := 18020}
  handleExceptionBegin
  Result := AObj.GetList(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetValue(AObj: ICefDictionaryValue; const key: PChar; const value: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18021}
  handleExceptionBegin
  Result := AObj.SetValue(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetNull(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18022}
  handleExceptionBegin
  Result := AObj.SetNull(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetBool(AObj: ICefDictionaryValue; const key: PChar; value: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18023}
  handleExceptionBegin
  Result := AObj.SetBool(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetInt(AObj: ICefDictionaryValue; const key: PChar; value: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 18024}
  handleExceptionBegin
  Result := AObj.SetInt(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetDouble(AObj: ICefDictionaryValue; const key: PChar; var value: Double): LongBool; extdecl;
begin
  {$define handleExceptionID := 18025}
  handleExceptionBegin
  Result := AObj.SetDouble(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetString(AObj: ICefDictionaryValue; const key: PChar; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18026}
  handleExceptionBegin
  Result := AObj.SetString(PCharToUStr(key), PCharToUStr(value));
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetBinary(AObj: ICefDictionaryValue; const key: PChar; const value: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18027}
  handleExceptionBegin
  Result := AObj.SetBinary(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetDictionary(AObj: ICefDictionaryValue; const key: PChar; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18028}
  handleExceptionBegin
  Result := AObj.SetDictionary(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function
function TCefDictionaryValueRef_SetList(AObj: ICefDictionaryValue; const key: PChar; const value: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 18029}
  handleExceptionBegin
  Result := AObj.SetList(PCharToUStr(key), value);
  handleExceptionEnd
end;

// function static
procedure TCefDictionaryValueRef_UnWrap(data: Pointer; var Result: ICefDictionaryValue); extdecl;
begin
  Result := TCefDictionaryValueRef.UnWrap(data);
end;

// function static
procedure TCefDictionaryValueRef_New(var Result: ICefDictionaryValue); extdecl;
begin
  Result := TCefDictionaryValueRef.New();
end;

exports
  TCefDictionaryValueRef_Create,
  TCefDictionaryValueRef_IsValid,
  TCefDictionaryValueRef_isOwned,
  TCefDictionaryValueRef_IsReadOnly,
  TCefDictionaryValueRef_IsSame,
  TCefDictionaryValueRef_IsEqual,
  TCefDictionaryValueRef_Copy,
  TCefDictionaryValueRef_GetSize,
  TCefDictionaryValueRef_Clear,
  TCefDictionaryValueRef_HasKey,
  TCefDictionaryValueRef_GetKeys,
  TCefDictionaryValueRef_Remove,
  TCefDictionaryValueRef_GetType,
  TCefDictionaryValueRef_GetValue,
  TCefDictionaryValueRef_GetBool,
  TCefDictionaryValueRef_GetInt,
  TCefDictionaryValueRef_GetDouble,
  TCefDictionaryValueRef_GetString,
  TCefDictionaryValueRef_GetBinary,
  TCefDictionaryValueRef_GetDictionary,
  TCefDictionaryValueRef_GetList,
  TCefDictionaryValueRef_SetValue,
  TCefDictionaryValueRef_SetNull,
  TCefDictionaryValueRef_SetBool,
  TCefDictionaryValueRef_SetInt,
  TCefDictionaryValueRef_SetDouble,
  TCefDictionaryValueRef_SetString,
  TCefDictionaryValueRef_SetBinary,
  TCefDictionaryValueRef_SetDictionary,
  TCefDictionaryValueRef_SetList,
  TCefDictionaryValueRef_UnWrap,
  TCefDictionaryValueRef_New;