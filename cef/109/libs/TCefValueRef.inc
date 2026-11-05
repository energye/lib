// constructor
function TCefValueRef_Create(data: Pointer; out IntfValue: ICefValue): TCefValueRef; extdecl;
begin
  {$define handleExceptionID := 21700}
  handleExceptionBegin
  Result := TCefValueRef.Create(data);
  IntfValue := Result as ICefValue;
  handleExceptionEnd
end;

// function
function TCefValueRef_IsValid(AObj: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21701}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefValueRef_IsOwned(AObj: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21702}
  handleExceptionBegin
  Result := AObj.IsOwned();
  handleExceptionEnd
end;

// function
function TCefValueRef_IsReadOnly(AObj: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21703}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefValueRef_IsSame(AObj: ICefValue; const that: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21704}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefValueRef_IsEqual(AObj: ICefValue; const that: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21705}
  handleExceptionBegin
  Result := AObj.IsEqual(that);
  handleExceptionEnd
end;

// function
procedure TCefValueRef_Copy(AObj: ICefValue; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 21706}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// function
function TCefValueRef_GetType(AObj: ICefValue): TCefValueType; extdecl;
begin
  {$define handleExceptionID := 21707}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
function TCefValueRef_GetBool(AObj: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21708}
  handleExceptionBegin
  Result := AObj.GetBool();
  handleExceptionEnd
end;

// function
function TCefValueRef_GetInt(AObj: ICefValue): Integer; extdecl;
begin
  {$define handleExceptionID := 21709}
  handleExceptionBegin
  Result := AObj.GetInt();
  handleExceptionEnd
end;

// function
procedure TCefValueRef_GetDouble(AObj: ICefValue; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 21710}
  handleExceptionBegin
  Result := AObj.GetDouble();
  handleExceptionEnd
end;

// function
procedure TCefValueRef_GetString(AObj: ICefValue;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21711}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetString()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefValueRef_GetBinary(AObj: ICefValue; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 21712}
  handleExceptionBegin
  Result := AObj.GetBinary();
  handleExceptionEnd
end;

// function
procedure TCefValueRef_GetDictionary(AObj: ICefValue; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 21713}
  handleExceptionBegin
  Result := AObj.GetDictionary();
  handleExceptionEnd
end;

// function
procedure TCefValueRef_GetList(AObj: ICefValue; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionID := 21714}
  handleExceptionBegin
  Result := AObj.GetList();
  handleExceptionEnd
end;

// function
function TCefValueRef_SetNull(AObj: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21715}
  handleExceptionBegin
  Result := AObj.SetNull();
  handleExceptionEnd
end;

// function
function TCefValueRef_SetBool(AObj: ICefValue; value: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21716}
  handleExceptionBegin
  Result := AObj.SetBool(value);
  handleExceptionEnd
end;

// function
function TCefValueRef_SetInt(AObj: ICefValue; value: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 21717}
  handleExceptionBegin
  Result := AObj.SetInt(value);
  handleExceptionEnd
end;

// function
function TCefValueRef_SetDouble(AObj: ICefValue; var value: Double): LongBool; extdecl;
begin
  {$define handleExceptionID := 21718}
  handleExceptionBegin
  Result := AObj.SetDouble(value);
  handleExceptionEnd
end;

// function
function TCefValueRef_SetString(AObj: ICefValue; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21719}
  handleExceptionBegin
  Result := AObj.SetString(PCharToUStr(value));
  handleExceptionEnd
end;

// function
function TCefValueRef_SetBinary(AObj: ICefValue; const value: ICefBinaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21720}
  handleExceptionBegin
  Result := AObj.SetBinary(value);
  handleExceptionEnd
end;

// function
function TCefValueRef_SetDictionary(AObj: ICefValue; const value: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21721}
  handleExceptionBegin
  Result := AObj.SetDictionary(value);
  handleExceptionEnd
end;

// function
function TCefValueRef_SetList(AObj: ICefValue; const value: ICefListValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 21722}
  handleExceptionBegin
  Result := AObj.SetList(value);
  handleExceptionEnd
end;

// function static
procedure TCefValueRef_UnWrap(data: Pointer; var Result: ICefValue); extdecl;
begin
  Result := TCefValueRef.UnWrap(data);
end;

// function static
procedure TCefValueRef_New(var Result: ICefValue); extdecl;
begin
  Result := TCefValueRef.New();
end;

exports
  TCefValueRef_Create,
  TCefValueRef_IsValid,
  TCefValueRef_IsOwned,
  TCefValueRef_IsReadOnly,
  TCefValueRef_IsSame,
  TCefValueRef_IsEqual,
  TCefValueRef_Copy,
  TCefValueRef_GetType,
  TCefValueRef_GetBool,
  TCefValueRef_GetInt,
  TCefValueRef_GetDouble,
  TCefValueRef_GetString,
  TCefValueRef_GetBinary,
  TCefValueRef_GetDictionary,
  TCefValueRef_GetList,
  TCefValueRef_SetNull,
  TCefValueRef_SetBool,
  TCefValueRef_SetInt,
  TCefValueRef_SetDouble,
  TCefValueRef_SetString,
  TCefValueRef_SetBinary,
  TCefValueRef_SetDictionary,
  TCefValueRef_SetList,
  TCefValueRef_UnWrap,
  TCefValueRef_New;