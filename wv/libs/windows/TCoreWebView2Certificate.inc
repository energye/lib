// constructor
function TCoreWebView2Certificate_Create(const aBaseIntf: ICoreWebView2Certificate): TCoreWebView2Certificate; extdecl;
begin
  {$define handleExceptionID := 7300}
  handleExceptionBegin
  Result := TCoreWebView2Certificate.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2Certificate_ToPemEncoding(AObj: TCoreWebView2Certificate;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7301}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToPemEncoding()), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Certificate_Initialized(AObj: TCoreWebView2Certificate): LongBool; extdecl;
begin
  {$define handleExceptionID := 7302}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_BaseIntf(ASet: LongBool; AObj: TCoreWebView2Certificate; AValue: ICoreWebView2Certificate; var Result: ICoreWebView2Certificate); extdecl;
begin
  {$define handleExceptionID := 7303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_Subject(AObj: TCoreWebView2Certificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7304}
  handleExceptionBegin
  StringBufferCreate(AObj.Subject, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_Issuer(AObj: TCoreWebView2Certificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7305}
  handleExceptionBegin
  StringBufferCreate(AObj.Issuer, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_ValidFrom(AObj: TCoreWebView2Certificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 7306}
  handleExceptionBegin
  Result := AObj.ValidFrom;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_ValidTo(AObj: TCoreWebView2Certificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 7307}
  handleExceptionBegin
  Result := AObj.ValidTo;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_DerEncodedSerialNumber(AObj: TCoreWebView2Certificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7308}
  handleExceptionBegin
  StringBufferCreate(AObj.DerEncodedSerialNumber, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_DisplayName(AObj: TCoreWebView2Certificate; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7309}
  handleExceptionBegin
  StringBufferCreate(AObj.DisplayName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Certificate_PemEncodedIssuerCertificateChain(AObj: TCoreWebView2Certificate; var Result: ICoreWebView2StringCollection); extdecl;
begin
  {$define handleExceptionID := 7310}
  handleExceptionBegin
  Result := AObj.PemEncodedIssuerCertificateChain;
  handleExceptionEnd
end;

exports
  TCoreWebView2Certificate_Create,
  TCoreWebView2Certificate_ToPemEncoding,
  TCoreWebView2Certificate_Initialized,
  TCoreWebView2Certificate_BaseIntf,
  TCoreWebView2Certificate_Subject,
  TCoreWebView2Certificate_Issuer,
  TCoreWebView2Certificate_ValidFrom,
  TCoreWebView2Certificate_ValidTo,
  TCoreWebView2Certificate_DerEncodedSerialNumber,
  TCoreWebView2Certificate_DisplayName,
  TCoreWebView2Certificate_PemEncodedIssuerCertificateChain;