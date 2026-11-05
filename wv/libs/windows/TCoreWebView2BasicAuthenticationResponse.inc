// constructor
function TCoreWebView2BasicAuthenticationResponse_Create(const aBaseIntf: ICoreWebView2BasicAuthenticationResponse): TCoreWebView2BasicAuthenticationResponse; extdecl;
begin
  {$define handleExceptionID := 4100}
  handleExceptionBegin
  Result := TCoreWebView2BasicAuthenticationResponse.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2BasicAuthenticationResponse_Initialized(AObj: TCoreWebView2BasicAuthenticationResponse): LongBool; extdecl;
begin
  {$define handleExceptionID := 4101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationResponse_BaseIntf(ASet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: ICoreWebView2BasicAuthenticationResponse; var Result: ICoreWebView2BasicAuthenticationResponse); extdecl;
begin
  {$define handleExceptionID := 4102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationResponse_UserName(ASet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserName := AValue
  end else
    StringBufferCreate(AObj.UserName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationResponse_Password(ASet: LongBool; AObj: TCoreWebView2BasicAuthenticationResponse; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Password := AValue
  end else
    StringBufferCreate(AObj.Password, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2BasicAuthenticationResponse_Create,
  TCoreWebView2BasicAuthenticationResponse_Initialized,
  TCoreWebView2BasicAuthenticationResponse_BaseIntf,
  TCoreWebView2BasicAuthenticationResponse_UserName,
  TCoreWebView2BasicAuthenticationResponse_Password;