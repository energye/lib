
//constructor
function WkCookie_Create(aCookie: PSoupCookie): TWkCookie; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookie.Create(aCookie);
  handleExceptionEnd
end;

//function
function WkCookie_NewCookie(aName,  aValue,  aDomain,  aPath: PChar; aMaxAge: LongInt): TWkCookie; extdecl;
begin
  Result := TWkCookie.NewCookie(aName,  aValue,  aDomain,  aPath, aMaxAge);
end;

//property
function WkCookie_Name(AIsSet: LongBool; AObj: TWkCookie; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Name := AValue;
  end else
    Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function WkCookie_Value(AIsSet: LongBool; AObj: TWkCookie; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Value := AValue;
  end else
    Result := ToPChar(AObj.Value);
  handleExceptionEnd
end;

//property
function WkCookie_Domain(AIsSet: LongBool; AObj: TWkCookie; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Domain := AValue;
  end else
    Result := ToPChar(AObj.Domain);
  handleExceptionEnd
end;

//property
function WkCookie_Path(AIsSet: LongBool; AObj: TWkCookie; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Path := AValue;
  end else
    Result := ToPChar(AObj.Path);
  handleExceptionEnd
end;

//property
function WkCookie_HttpOnly(AIsSet: LongBool; AObj: TWkCookie; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HttpOnly := AValue;
  end else
    Result := AObj.HttpOnly;
  handleExceptionEnd
end;

//property
function WkCookie_Secure(AIsSet: LongBool; AObj: TWkCookie; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Secure := AValue;
  end else
    Result := AObj.Secure;
  handleExceptionEnd
end;

//property
function WkCookie_Expires(AIsSet: LongBool; AObj: TWkCookie; AValue: PSoupDate): PSoupDate; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Expires := AValue;
  end else
    Result := AObj.Expires;
  handleExceptionEnd
end;

//function
function WkCookie_Data(AObj: TWkCookie): PSoupCookie; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WkCookie_SetMaxAge(AObj: TWkCookie; aValue: LongInt); extdecl;
begin
  handleExceptionBegin
  AObj.SetMaxAge(aValue);
  handleExceptionEnd
end;


exports
  WkCookie_Create,
  WkCookie_NewCookie,
  WkCookie_Name,
  WkCookie_Value,
  WkCookie_Domain,
  WkCookie_Path,
  WkCookie_HttpOnly,
  WkCookie_Secure,
  WkCookie_Expires,
  WkCookie_Data,
  WkCookie_SetMaxAge;