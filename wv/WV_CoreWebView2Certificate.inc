
//constructor
function CoreWebView2Certificate_Create(const aBaseIntf: ICoreWebView2Certificate): TCoreWebView2Certificate; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Certificate.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Certificate_Initialized(AObj: TCoreWebView2Certificate): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Certificate_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2Certificate; AValue: ICoreWebView2Certificate; var Result: ICoreWebView2Certificate); extdecl;
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
function CoreWebView2Certificate_Subject(AObj: TCoreWebView2Certificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Subject);
  handleExceptionEnd
end;

//property
function CoreWebView2Certificate_Issuer(AObj: TCoreWebView2Certificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Issuer);
  handleExceptionEnd
end;

//property
procedure CoreWebView2Certificate_ValidFrom(AObj: TCoreWebView2Certificate; var Result: TDateTime); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValidFrom;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Certificate_ValidTo(AObj: TCoreWebView2Certificate; var Result: TDateTime); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValidTo;
  handleExceptionEnd
end;

//property
function CoreWebView2Certificate_DerEncodedSerialNumber(AObj: TCoreWebView2Certificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DerEncodedSerialNumber);
  handleExceptionEnd
end;

//property
function CoreWebView2Certificate_DisplayName(AObj: TCoreWebView2Certificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DisplayName);
  handleExceptionEnd
end;

//property
procedure CoreWebView2Certificate_PemEncodedIssuerCertificateChain(AObj: TCoreWebView2Certificate; var Result: ICoreWebView2StringCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.PemEncodedIssuerCertificateChain;
  handleExceptionEnd
end;

//function
function CoreWebView2Certificate_ToPemEncoding(AObj: TCoreWebView2Certificate): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToPemEncoding());
  handleExceptionEnd
end;


exports
  CoreWebView2Certificate_Create,
  CoreWebView2Certificate_Initialized,
  CoreWebView2Certificate_BaseIntf,
  CoreWebView2Certificate_Subject,
  CoreWebView2Certificate_Issuer,
  CoreWebView2Certificate_ValidFrom,
  CoreWebView2Certificate_ValidTo,
  CoreWebView2Certificate_DerEncodedSerialNumber,
  CoreWebView2Certificate_DisplayName,
  CoreWebView2Certificate_PemEncodedIssuerCertificateChain,
  CoreWebView2Certificate_ToPemEncoding;