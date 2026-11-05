// constructor
function TCefCustomStringMultimap_Create(out IntfStringMultimap: ICefStringMultimap): TCefCustomStringMultimap; extdecl;
begin
  {$define handleExceptionID := 21600}
  handleExceptionBegin
  Result := TCefCustomStringMultimap.Create();
  IntfStringMultimap := Result as ICefStringMultimap;
  handleExceptionEnd
end;

// function
function TCefCustomStringMultimap_GetHandle(AObj: ICefStringMultimap): TCefStringMultimap; extdecl;
begin
  {$define handleExceptionID := 21601}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TCefCustomStringMultimap_GetSize(AObj: ICefStringMultimap): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21602}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefCustomStringMultimap_FindCount(AObj: ICefStringMultimap; const Key: PChar): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21603}
  handleExceptionBegin
  Result := AObj.FindCount(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMultimap_GetEnumerate(AObj: ICefStringMultimap; const Key: PChar; ValueIndex: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21604}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetEnumerate(PCharToUStr(Key), ValueIndex)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMultimap_GetKey(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21605}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetKey(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefCustomStringMultimap_GetValue(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21606}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefCustomStringMultimap_Append(AObj: ICefStringMultimap; const Key: PChar; const Value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21607}
  handleExceptionBegin
  Result := AObj.Append(PCharToUStr(Key), PCharToUStr(Value));
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringMultimap_Clear(AObj: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 21608}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

exports
  TCefCustomStringMultimap_Create,
  TCefCustomStringMultimap_GetHandle,
  TCefCustomStringMultimap_GetSize,
  TCefCustomStringMultimap_FindCount,
  TCefCustomStringMultimap_GetEnumerate,
  TCefCustomStringMultimap_GetKey,
  TCefCustomStringMultimap_GetValue,
  TCefCustomStringMultimap_Append,
  TCefCustomStringMultimap_Clear;