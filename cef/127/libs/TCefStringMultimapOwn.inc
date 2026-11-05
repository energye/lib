// constructor
function TCefStringMultimapOwn_Create(out IntfStringMultimap: ICefStringMultimap): TCefStringMultimapOwn; extdecl;
begin
  {$define handleExceptionID := 21300}
  handleExceptionBegin
  Result := TCefStringMultimapOwn.Create();
  IntfStringMultimap := Result as ICefStringMultimap;
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_GetHandle(AObj: ICefStringMultimap): TCefStringMultimap; extdecl;
begin
  {$define handleExceptionID := 21301}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_GetSize(AObj: ICefStringMultimap): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21302}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_FindCount(AObj: ICefStringMultimap; const Key: PChar): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21303}
  handleExceptionBegin
  Result := AObj.FindCount(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetEnumerate(AObj: ICefStringMultimap; const Key: PChar; ValueIndex: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21304}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetEnumerate(PCharToUStr(Key), ValueIndex)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetKey(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21305}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetKey(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefStringMultimapOwn_GetValue(AObj: ICefStringMultimap; Index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21306}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue(Index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefStringMultimapOwn_Append(AObj: ICefStringMultimap; const Key: PChar; const Value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21307}
  handleExceptionBegin
  Result := AObj.Append(PCharToUStr(Key), PCharToUStr(Value));
  handleExceptionEnd
end;

// procedure
procedure TCefStringMultimapOwn_Clear(AObj: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 21308}
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