
//constructor
function CoreWebView2BasicAuthenticationResponse_Create(const aBaseIntf: ICoreWebView2BasicAuthenticationResponse): TCoreWebView2BasicAuthenticationResponse; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2BasicAuthenticationResponse.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationResponse_Initialized(AObj: TCoreWebView2BasicAuthenticationResponse): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BasicAuthenticationResponse_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: ICoreWebView2BasicAuthenticationResponse; var Result: ICoreWebView2BasicAuthenticationResponse); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationResponse_UserName(AIsSet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserName := AValue;
  end else
    Result := ToPChar(AObj.UserName);
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationResponse_Password(AIsSet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Password := AValue;
  end else
    Result := ToPChar(AObj.Password);
  handleExceptionEnd
end;


exports
  CoreWebView2BasicAuthenticationResponse_Create,
  CoreWebView2BasicAuthenticationResponse_Initialized,
  CoreWebView2BasicAuthenticationResponse_BaseIntf,
  CoreWebView2BasicAuthenticationResponse_UserName,
  CoreWebView2BasicAuthenticationResponse_Password;