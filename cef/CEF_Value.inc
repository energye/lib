
//function
procedure CefValue_UnWrap(data: Pointer; var Result: ICefValue); extdecl;
begin
  Result := TCefValueRef.UnWrap(data);
end;

//function
procedure CefValue_New(var Result: ICefValue); extdecl;
begin
  Result := TCefValueRef.New();
end;

//function
function CefValue_IsValid(AObj: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefValue_IsOwned(AObj: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

//function
function CefValue_IsReadOnly(AObj: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefValue_IsSame(AObj: ICefValue; const that: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefValue_IsEqual(AObj: ICefValue; const that: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

//function
procedure CefValue_Copy(AObj: ICefValue; var Result: ICefValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//function
function CefValue_GetType(AObj: ICefValue): TCefValueType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

//function
function CefValue_GetBool(AObj: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBool();
  handleExceptionEnd
end;

//function
function CefValue_GetInt(AObj: ICefValue): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetInt();
  handleExceptionEnd
end;

//function
procedure CefValue_GetDouble(AObj: ICefValue; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDouble();
  handleExceptionEnd
end;

//function
function CefValue_GetString(AObj: ICefValue): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetString());
  handleExceptionEnd
end;

//function
procedure CefValue_GetBinary(AObj: ICefValue; var Result: ICefBinaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBinary();
  handleExceptionEnd
end;

//function
procedure CefValue_GetDictionary(AObj: ICefValue; var Result: ICefDictionaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDictionary();
  handleExceptionEnd
end;

//function
procedure CefValue_GetList(AObj: ICefValue; var Result: ICefListValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetList();
  handleExceptionEnd
end;

//function
function CefValue_SetNull(AObj: ICefValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetNull();
  handleExceptionEnd
end;

//function
function CefValue_SetBool(AObj: ICefValue; value: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBool(value);
  handleExceptionEnd
end;

//function
function CefValue_SetInt(AObj: ICefValue; value: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetInt(value);
  handleExceptionEnd
end;

//function
function CefValue_SetDouble(AObj: ICefValue; var value: Double): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetDouble(value);
  handleExceptionEnd
end;

//function
function CefValue_SetString(AObj: ICefValue; const value: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetString(value);
  handleExceptionEnd
end;

//function
function CefValue_SetBinary(AObj: ICefValue; const value: ICefBinaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBinary(value);
  handleExceptionEnd
end;

//function
function CefValue_SetDictionary(AObj: ICefValue; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetDictionary(value);
  handleExceptionEnd
end;

//function
function CefValue_SetList(AObj: ICefValue; const value: ICefListValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetList(value);
  handleExceptionEnd
end;


exports
  CefValue_UnWrap,
  CefValue_New,
  CefValue_IsValid,
  CefValue_IsOwned,
  CefValue_IsReadOnly,
  CefValue_IsSame,
  CefValue_IsEqual,
  CefValue_Copy,
  CefValue_GetType,
  CefValue_GetBool,
  CefValue_GetInt,
  CefValue_GetDouble,
  CefValue_GetString,
  CefValue_GetBinary,
  CefValue_GetDictionary,
  CefValue_GetList,
  CefValue_SetNull,
  CefValue_SetBool,
  CefValue_SetInt,
  CefValue_SetDouble,
  CefValue_SetString,
  CefValue_SetBinary,
  CefValue_SetDictionary,
  CefValue_SetList;