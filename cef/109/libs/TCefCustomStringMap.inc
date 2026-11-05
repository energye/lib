// constructor
function TCefCustomStringMap_Create(out IntfStringMap: ICefStringMap): TCefCustomStringMap; extdecl;
begin
  {$define handleExceptionID := 25300}
  handleExceptionBegin
  Result := TCefCustomStringMap.Create();
  IntfStringMap := Result as ICefStringMap;
  handleExceptionEnd
end;

// function
function TCefCustomStringMap_GetHandle(AObj: ICefStringMap): TCefStringMap; extdecl;
begin
  {$define handleExceptionID := 25301}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TCefCustomStringMap_GetSize(AObj: ICefStringMap): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 25302}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMap_Find(AObj: ICefStringMap; const key: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25303}
  handleExceptionBegin
  StringBufferCreate(string(AObj.Find(PCharToUStr(key))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMap_GetKey(AObj: ICefStringMap; index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25304}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetKey(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMap_GetValue(AObj: ICefStringMap; index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25305}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefCustomStringMap_Append(AObj: ICefStringMap; const key: PChar; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25306}
  handleExceptionBegin
  Result := AObj.Append(PCharToUStr(key), PCharToUStr(value));
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringMap_Clear(AObj: ICefStringMap); extdecl;
begin
  {$define handleExceptionID := 25307}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

exports
  TCefCustomStringMap_Create,
  TCefCustomStringMap_GetHandle,
  TCefCustomStringMap_GetSize,
  TCefCustomStringMap_Find,
  TCefCustomStringMap_GetKey,
  TCefCustomStringMap_GetValue,
  TCefCustomStringMap_Append,
  TCefCustomStringMap_Clear;