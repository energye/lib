
//constructor
function CefStringMultimap_Create(): TCefCustomStringMultimap; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomStringMultimap.Create();
  handleExceptionEnd
end;

//procedure
procedure CefStringMultimap_AsInterface(AObj: TCefCustomStringMultimap; var Result: ICefStringMultimap); extdecl;
begin
  Result := AObj as ICefStringMultimap;
end;

//function
procedure CefStringMultimap_GetHandle(AObj: ICefStringMultimap; var Result: TCefStringMultimap); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function CefStringMultimap_GetSize(AObj: ICefStringMultimap): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function CefStringMultimap_FindCount(AObj: ICefStringMultimap; const key: PChar): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindCount(key);
  handleExceptionEnd
end;

//function
function CefStringMultimap_GetEnumerate(AObj: ICefStringMultimap; const key: PChar; valueIndex: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetEnumerate(key, valueIndex));
  handleExceptionEnd
end;

//function
function CefStringMultimap_GetKey(AObj: ICefStringMultimap; index: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetKey(index));
  handleExceptionEnd
end;

//function
function CefStringMultimap_GetValue(AObj: ICefStringMultimap; index: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetValue(index));
  handleExceptionEnd
end;

//function
function CefStringMultimap_Append(AObj: ICefStringMultimap; const key,  value: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Append(key,  value);
  handleExceptionEnd
end;

//procedure
procedure CefStringMultimap_Clear(AObj: ICefStringMultimap); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;


exports
  CefStringMultimap_Create,
  CefStringMultimap_AsInterface,
  CefStringMultimap_GetHandle,
  CefStringMultimap_GetSize,
  CefStringMultimap_FindCount,
  CefStringMultimap_GetEnumerate,
  CefStringMultimap_GetKey,
  CefStringMultimap_GetValue,
  CefStringMultimap_Append,
  CefStringMultimap_Clear;