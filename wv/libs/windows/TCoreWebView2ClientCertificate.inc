// constructor
function TCoreWebView2ClientCertificate_Create(const aBaseIntf: ICoreWebView2ClientCertificate): TCoreWebView2ClientCertificate; extdecl;
begin
  {$define handleExceptionID := 3700}
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificate.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2ClientCertificate_ToPemEncoding(AObj: TCoreWebView2ClientCertificate;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3701}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToPemEncoding()), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificate_Initialized(AObj: TCoreWebView2ClientCertificate): LongBool; extdecl;
begin
  {$define handleExceptionID := 3702}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_BaseIntf(ASet: LongBool; AObj: TCoreWebView2ClientCertificate; AValue: ICoreWebView2ClientCertificate; var Result: ICoreWebView2ClientCertificate); extdecl;
begin
  {$define handleExceptionID := 3703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_Subject(AObj: TCoreWebView2ClientCertificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3704}
  handleExceptionBegin
  StringBufferCreate(AObj.Subject, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_Issuer(AObj: TCoreWebView2ClientCertificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3705}
  handleExceptionBegin
  StringBufferCreate(AObj.Issuer, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_ValidFrom(AObj: TCoreWebView2ClientCertificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 3706}
  handleExceptionBegin
  Result := AObj.ValidFrom;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_ValidTo(AObj: TCoreWebView2ClientCertificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 3707}
  handleExceptionBegin
  Result := AObj.ValidTo;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_DerEncodedSerialNumber(AObj: TCoreWebView2ClientCertificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3708}
  handleExceptionBegin
  StringBufferCreate(AObj.DerEncodedSerialNumber, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_DisplayName(AObj: TCoreWebView2ClientCertificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3709}
  handleExceptionBegin
  StringBufferCreate(AObj.DisplayName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificate_PemEncodedIssuerCertificateChain(AObj: TCoreWebView2ClientCertificate; var Result: ICoreWebView2StringCollection); extdecl;
begin
  {$define handleExceptionID := 3710}
  handleExceptionBegin
  Result := AObj.PemEncodedIssuerCertificateChain;
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificate_Kind(AObj: TCoreWebView2ClientCertificate): TWVClientCertificateKind; extdecl;
begin
  {$define handleExceptionID := 3711}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

exports
  TCoreWebView2ClientCertificate_Create,
  TCoreWebView2ClientCertificate_ToPemEncoding,
  TCoreWebView2ClientCertificate_Initialized,
  TCoreWebView2ClientCertificate_BaseIntf,
  TCoreWebView2ClientCertificate_Subject,
  TCoreWebView2ClientCertificate_Issuer,
  TCoreWebView2ClientCertificate_ValidFrom,
  TCoreWebView2ClientCertificate_ValidTo,
  TCoreWebView2ClientCertificate_DerEncodedSerialNumber,
  TCoreWebView2ClientCertificate_DisplayName,
  TCoreWebView2ClientCertificate_PemEncodedIssuerCertificateChain,
  TCoreWebView2ClientCertificate_Kind;