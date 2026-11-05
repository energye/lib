// constructor
function TWkCookie_Create(aCookie: PSoupCookie): TWkCookie; extdecl;
begin
  {$define handleExceptionID := 3900}
  handleExceptionBegin
  Result := TWkCookie.Create(aCookie);
  handleExceptionEnd
end;

// function
function TWkCookie_Data(AObj: TWkCookie): PSoupCookie; extdecl;
begin
  {$define handleExceptionID := 3901}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkCookie_NewCookie(aName: PChar; aValue: PChar; aDomain: PChar; aPath: PChar; aMaxAge: Integer): TWkCookie; extdecl;
begin
  Result := TWkCookie.NewCookie(aName, aValue, aDomain, aPath, aMaxAge);
end;

// procedure
procedure TWkCookie_SetMaxAge(AObj: TWkCookie; aValue: Integer); extdecl;
begin
  {$define handleExceptionID := 3902}
  handleExceptionBegin
  AObj.SetMaxAge(aValue);
  handleExceptionEnd
end;

// property
procedure TWkCookie_Name(ASet: LongBool; AObj: TWkCookie; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Name := AValue
  end else
    StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkCookie_Value(ASet: LongBool; AObj: TWkCookie; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    StringBufferCreate(AObj.Value, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkCookie_Domain(ASet: LongBool; AObj: TWkCookie; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Domain := AValue
  end else
    StringBufferCreate(AObj.Domain, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkCookie_Path(ASet: LongBool; AObj: TWkCookie; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Path := AValue
  end else
    StringBufferCreate(AObj.Path, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWkCookie_HttpOnly(ASet: LongBool; AObj: TWkCookie; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HttpOnly := AValue
  end else
    Result := AObj.HttpOnly;
  handleExceptionEnd
end;

// property
function TWkCookie_Secure(ASet: LongBool; AObj: TWkCookie; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Secure := AValue
  end else
    Result := AObj.Secure;
  handleExceptionEnd
end;

// property
function TWkCookie_Expires(ASet: LongBool; AObj: TWkCookie; AValue: PWkDateTime): PWkDateTime; extdecl;
begin
  {$define handleExceptionID := 3909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Expires := AValue
  end else
    Result := AObj.Expires;
  handleExceptionEnd
end;

exports
  TWkCookie_Create,
  TWkCookie_Data,
  TWkCookie_NewCookie,
  TWkCookie_SetMaxAge,
  TWkCookie_Name,
  TWkCookie_Value,
  TWkCookie_Domain,
  TWkCookie_Path,
  TWkCookie_HttpOnly,
  TWkCookie_Secure,
  TWkCookie_Expires;