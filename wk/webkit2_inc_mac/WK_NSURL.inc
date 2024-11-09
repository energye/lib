
//constructor
function NSURL_Create(aData: NSURL): TNSURL; extdecl;
begin
  handleExceptionBegin
  Result := TNSURL.Create(aData);
  handleExceptionEnd
end;

//function
function NSURL_New(): TNSURL; extdecl;
begin
  Result := TNSURL.New();
end;

//function
function NSURL_URLWithString(uRLString: PChar): TNSURL; extdecl;
begin
  Result := TNSURL.URLWithString(uRLString);
end;

//function
function NSURL_URLWithStringRelativeToURL(uRLString: PChar; baseURL: NSURL): TNSURL; extdecl;
begin
  Result := TNSURL.URLWithStringRelativeToURL(uRLString, baseURL);
end;

//function
function NSURL_Data(AObj: TNSURL): NSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function NSURL_AbsoluteString(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.AbsoluteString());
  handleExceptionEnd
end;

//function
function NSURL_RelativeString(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.RelativeString());
  handleExceptionEnd
end;

//function
function NSURL_BaseURL(AObj: TNSURL): TNSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseURL();
  handleExceptionEnd
end;

//function
function NSURL_AbsoluteURL(AObj: TNSURL): TNSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AbsoluteURL();
  handleExceptionEnd
end;

//function
function NSURL_Scheme(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Scheme());
  handleExceptionEnd
end;

//function
function NSURL_Host(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Host());
  handleExceptionEnd
end;

//function
function NSURL_Port(AObj: TNSURL): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Port();
  handleExceptionEnd
end;

//function
function NSURL_User(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.User());
  handleExceptionEnd
end;

//function
function NSURL_Password(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Password());
  handleExceptionEnd
end;

//function
function NSURL_Path(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Path());
  handleExceptionEnd
end;

//function
function NSURL_Fragment(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Fragment());
  handleExceptionEnd
end;

//function
function NSURL_ParameterString(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ParameterString());
  handleExceptionEnd
end;

//function
function NSURL_Query(AObj: TNSURL): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Query());
  handleExceptionEnd
end;

//procedure
procedure NSURL_Release(AObj: TNSURL); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  NSURL_Create,
  NSURL_New,
  NSURL_URLWithString,
  NSURL_URLWithStringRelativeToURL,
  NSURL_Data,
  NSURL_AbsoluteString,
  NSURL_RelativeString,
  NSURL_BaseURL,
  NSURL_AbsoluteURL,
  NSURL_Scheme,
  NSURL_Host,
  NSURL_Port,
  NSURL_User,
  NSURL_Password,
  NSURL_Path,
  NSURL_Fragment,
  NSURL_ParameterString,
  NSURL_Query,
  NSURL_Release;