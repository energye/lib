// constructor
function TCEFX509CertificateRef_Create(data: Pointer; out IntfX509Certificate: ICefX509Certificate): TCEFX509CertificateRef; extdecl;
begin
  {$define handleExceptionID := 21900}
  handleExceptionBegin
  Result := TCEFX509CertificateRef.Create(data);
  IntfX509Certificate := Result as ICefX509Certificate;
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetSubject(AObj: ICefX509Certificate; var Result: ICefX509CertPrincipal); extdecl;
begin
  {$define handleExceptionID := 21901}
  handleExceptionBegin
  Result := AObj.GetSubject();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetIssuer(AObj: ICefX509Certificate; var Result: ICefX509CertPrincipal); extdecl;
begin
  {$define handleExceptionID := 21902}
  handleExceptionBegin
  Result := AObj.GetIssuer();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetSerialNumber(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 21903}
  handleExceptionBegin
  Result := AObj.GetSerialNumber();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetValidStart(AObj: ICefX509Certificate; var Result: TCefBaseTime); extdecl;
begin
  {$define handleExceptionID := 21904}
  handleExceptionBegin
  Result := AObj.GetValidStart();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetValidExpiry(AObj: ICefX509Certificate; var Result: TCefBaseTime); extdecl;
begin
  {$define handleExceptionID := 21905}
  handleExceptionBegin
  Result := AObj.GetValidExpiry();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetValidStartAsDateTime(AObj: ICefX509Certificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 21906}
  handleExceptionBegin
  Result := AObj.GetValidStartAsDateTime();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetValidExpiryAsDateTime(AObj: ICefX509Certificate; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 21907}
  handleExceptionBegin
  Result := AObj.GetValidExpiryAsDateTime();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetDerEncoded(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 21908}
  handleExceptionBegin
  Result := AObj.GetDerEncoded();
  handleExceptionEnd
end;

// function
procedure TCEFX509CertificateRef_GetPemEncoded(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 21909}
  handleExceptionBegin
  Result := AObj.GetPemEncoded();
  handleExceptionEnd
end;

// function
function TCEFX509CertificateRef_GetIssuerChainSize(AObj: ICefX509Certificate): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21910}
  handleExceptionBegin
  Result := AObj.GetIssuerChainSize();
  handleExceptionEnd
end;

// function static
procedure TCEFX509CertificateRef_UnWrap(data: Pointer; var Result: ICefX509Certificate); extdecl;
begin
  Result := TCEFX509CertificateRef.UnWrap(data);
end;

// procedure
procedure TCEFX509CertificateRef_GetDEREncodedIssuerChain(AObj: ICefX509Certificate; chainCount: NativeUInt; var chain: TCefBinaryValueArray); extdecl;
var
  Outchain: TCefBinaryValueArray = nil;
begin
  {$define handleExceptionID := 21911}
  handleExceptionBegin
  AObj.GetDEREncodedIssuerChain(chainCount, Outchain);
  chainCount := Length(Outchain);
  chain := Outchain;
  handleExceptionEnd
end;

// procedure
procedure TCEFX509CertificateRef_GetPEMEncodedIssuerChain(AObj: ICefX509Certificate; chainCount: NativeUInt; var chain: TCefBinaryValueArray); extdecl;
var
  Outchain: TCefBinaryValueArray = nil;
begin
  {$define handleExceptionID := 21912}
  handleExceptionBegin
  AObj.GetPEMEncodedIssuerChain(chainCount, Outchain);
  chainCount := Length(Outchain);
  chain := Outchain;
  handleExceptionEnd
end;

exports
  TCEFX509CertificateRef_Create,
  TCEFX509CertificateRef_GetSubject,
  TCEFX509CertificateRef_GetIssuer,
  TCEFX509CertificateRef_GetSerialNumber,
  TCEFX509CertificateRef_GetValidStart,
  TCEFX509CertificateRef_GetValidExpiry,
  TCEFX509CertificateRef_GetValidStartAsDateTime,
  TCEFX509CertificateRef_GetValidExpiryAsDateTime,
  TCEFX509CertificateRef_GetDerEncoded,
  TCEFX509CertificateRef_GetPemEncoded,
  TCEFX509CertificateRef_GetIssuerChainSize,
  TCEFX509CertificateRef_UnWrap,
  TCEFX509CertificateRef_GetDEREncodedIssuerChain,
  TCEFX509CertificateRef_GetPEMEncodedIssuerChain;