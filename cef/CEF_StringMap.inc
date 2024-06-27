
//constructor
function CefStringMap_Create(): TCefCustomStringMap; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomStringMap.Create();
  handleExceptionEnd
end;

//procedure
procedure CefStringMap_AsInterface(AObj: TCefCustomStringMap; var Result: ICefStringMap); extdecl;
begin
  Result := AObj as ICefStringMap;
end;

//function
procedure CefStringMap_GetHandle(AObj: ICefStringMap; var Result: TCefStringMap); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function CefStringMap_GetSize(AObj: ICefStringMap): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function CefStringMap_Find(AObj: ICefStringMap; const key: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Find(key));
  handleExceptionEnd
end;

//function
function CefStringMap_GetKey(AObj: ICefStringMap; index: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetKey(index));
  handleExceptionEnd
end;

//function
function CefStringMap_GetValue(AObj: ICefStringMap; index: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetValue(index));
  handleExceptionEnd
end;

//function
function CefStringMap_Append(AObj: ICefStringMap; const key,  value: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Append(key,  value);
  handleExceptionEnd
end;

//procedure
procedure CefStringMap_Clear(AObj: ICefStringMap); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;


exports
  CefStringMap_Create,
  CefStringMap_AsInterface,
  CefStringMap_GetHandle,
  CefStringMap_GetSize,
  CefStringMap_Find,
  CefStringMap_GetKey,
  CefStringMap_GetValue,
  CefStringMap_Append,
  CefStringMap_Clear;