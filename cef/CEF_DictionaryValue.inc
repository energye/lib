
//function
procedure CefDictionaryValue_UnWrap(data: Pointer; var Result: ICefDictionaryValue); extdecl;
begin
  Result := TCefDictionaryValueRef.UnWrap(data);
end;

//function
procedure CefDictionaryValue_New(var Result: ICefDictionaryValue); extdecl;
begin
  Result := TCefDictionaryValueRef.New();
end;

//function
function CefDictionaryValue_IsValid(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefDictionaryValue_IsOwned(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.isOwned();
  handleExceptionEnd
end;

//function
function CefDictionaryValue_IsReadOnly(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefDictionaryValue_IsSame(AObj: ICefDictionaryValue; const that: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_IsEqual(AObj: ICefDictionaryValue; const that: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_Copy(AObj: ICefDictionaryValue; excludeEmptyChildren: LongBool; var Result: ICefDictionaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Copy(excludeEmptyChildren);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetSize(AObj: ICefDictionaryValue): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function CefDictionaryValue_Clear(AObj: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

//function
function CefDictionaryValue_HasKey(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasKey(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetKeys(AObj: ICefDictionaryValue; const keys: TStrings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetKeys(keys);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_Remove(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Remove(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetType(AObj: ICefDictionaryValue; const key: PChar): TCefValueType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetType(key);
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_GetValue(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetValue(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetBool(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBool(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetInt(AObj: ICefDictionaryValue; const key: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetInt(key);
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_GetDouble(AObj: ICefDictionaryValue; const key: PChar; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDouble(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_GetString(AObj: ICefDictionaryValue; const key: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetString(key));
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_GetBinary(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefBinaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBinary(key);
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_GetDictionary(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefDictionaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDictionary(key);
  handleExceptionEnd
end;

//function
procedure CefDictionaryValue_GetList(AObj: ICefDictionaryValue; const key: PChar; var Result: ICefListValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetList(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetValue(AObj: ICefDictionaryValue; const key: PChar; const value: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetValue(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetNull(AObj: ICefDictionaryValue; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetNull(key);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetBool(AObj: ICefDictionaryValue; const key: PChar; value: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBool(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetInt(AObj: ICefDictionaryValue; const key: PChar; value: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetInt(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetDouble(AObj: ICefDictionaryValue; const key: PChar; var value: Double): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetDouble(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetString(AObj: ICefDictionaryValue; const key,  value: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetString(key,  value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetBinary(AObj: ICefDictionaryValue; const key: PChar; const value: ICefBinaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBinary(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetDictionary(AObj: ICefDictionaryValue; const key: PChar; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetDictionary(key, value);
  handleExceptionEnd
end;

//function
function CefDictionaryValue_SetList(AObj: ICefDictionaryValue; const key: PChar; const value: ICefListValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetList(key, value);
  handleExceptionEnd
end;


exports
  CefDictionaryValue_UnWrap,
  CefDictionaryValue_New,
  CefDictionaryValue_IsValid,
  CefDictionaryValue_IsOwned,
  CefDictionaryValue_IsReadOnly,
  CefDictionaryValue_IsSame,
  CefDictionaryValue_IsEqual,
  CefDictionaryValue_Copy,
  CefDictionaryValue_GetSize,
  CefDictionaryValue_Clear,
  CefDictionaryValue_HasKey,
  CefDictionaryValue_GetKeys,
  CefDictionaryValue_Remove,
  CefDictionaryValue_GetType,
  CefDictionaryValue_GetValue,
  CefDictionaryValue_GetBool,
  CefDictionaryValue_GetInt,
  CefDictionaryValue_GetDouble,
  CefDictionaryValue_GetString,
  CefDictionaryValue_GetBinary,
  CefDictionaryValue_GetDictionary,
  CefDictionaryValue_GetList,
  CefDictionaryValue_SetValue,
  CefDictionaryValue_SetNull,
  CefDictionaryValue_SetBool,
  CefDictionaryValue_SetInt,
  CefDictionaryValue_SetDouble,
  CefDictionaryValue_SetString,
  CefDictionaryValue_SetBinary,
  CefDictionaryValue_SetDictionary,
  CefDictionaryValue_SetList;