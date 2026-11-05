// constructor
function TCefStringMultimapOwn_Create(out IntfStringMultimap: ICefStringMultimap): TCefStringMultimapOwn; extdecl;
begin
  {$define handleExceptionID := 20700}
  handleExceptionBegin
  Result := TCefStringMultimapOwn.Create();
  IntfStringMultimap := Result as ICefStringMultimap;
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_GetHandle(AObj: ICefStringMultimap): TCefStringMultimap; extdecl;
begin
  {$define handleExceptionID := 20701}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_GetSize(AObj: ICefStringMultimap): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20702}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_FindCount(AObj: ICefStringMultimap; const Key: PChar): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20703}
  handleExceptionBegin
  Result := AObj.FindCount(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetEnumerate(AObj: ICefStringMultimap; const Key: PChar; ValueIndex: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20704}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetEnumerate(PCharToUStr(Key), ValueIndex)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetKey(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20705}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetKey(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetValue(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20706}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_Append(AObj: ICefStringMultimap; const Key: PChar; const Value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 20707}
  handleExceptionBegin
  Result := AObj.Append(PCharToUStr(Key), PCharToUStr(Value));
  handleExceptionEnd
end;

// procedure
procedure TCefStringMultimapOwn_Clear(AObj: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 20708}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

exports
  TCefStringMultimapOwn_Create,
  TCefStringMultimapOwn_GetHandle,
  TCefStringMultimapOwn_GetSize,
  TCefStringMultimapOwn_FindCount,
  TCefStringMultimapOwn_GetEnumerate,
  TCefStringMultimapOwn_GetKey,
  TCefStringMultimapOwn_GetValue,
  TCefStringMultimapOwn_Append,
  TCefStringMultimapOwn_Clear;