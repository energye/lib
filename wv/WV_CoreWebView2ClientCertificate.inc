
//constructor
function CoreWebView2ClientCertificate_Create(const aBaseIntf: ICoreWebView2ClientCertificate): TCoreWebView2ClientCertificate; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificate.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_Initialized(AObj: TCoreWebView2ClientCertificate): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificate_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2ClientCertificate; AValue: ICoreWebView2ClientCertificate; var Result: ICoreWebView2ClientCertificate); extdecl;
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
function CoreWebView2ClientCertificate_Subject(AObj: TCoreWebView2ClientCertificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Subject);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_Issuer(AObj: TCoreWebView2ClientCertificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Issuer);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_ValidFrom(AObj: TCoreWebView2ClientCertificate): TDateTime; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValidFrom;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_ValidTo(AObj: TCoreWebView2ClientCertificate): TDateTime; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValidTo;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_DerEncodedSerialNumber(AObj: TCoreWebView2ClientCertificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DerEncodedSerialNumber);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_DisplayName(AObj: TCoreWebView2ClientCertificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DisplayName);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificate_PemEncodedIssuerCertificateChain(AObj: TCoreWebView2ClientCertificate; var Result: ICoreWebView2StringCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.PemEncodedIssuerCertificateChain;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificate_Kind(AObj: TCoreWebView2ClientCertificate): TWVClientCertificateKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//function
function CoreWebView2ClientCertificate_ToPemEncoding(AObj: TCoreWebView2ClientCertificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToPemEncoding());
  handleExceptionEnd
end;


exports
  CoreWebView2ClientCertificate_Create,
  CoreWebView2ClientCertificate_Initialized,
  CoreWebView2ClientCertificate_BaseIntf,
  CoreWebView2ClientCertificate_Subject,
  CoreWebView2ClientCertificate_Issuer,
  CoreWebView2ClientCertificate_ValidFrom,
  CoreWebView2ClientCertificate_ValidTo,
  CoreWebView2ClientCertificate_DerEncodedSerialNumber,
  CoreWebView2ClientCertificate_DisplayName,
  CoreWebView2ClientCertificate_PemEncodedIssuerCertificateChain,
  CoreWebView2ClientCertificate_Kind,
  CoreWebView2ClientCertificate_ToPemEncoding;