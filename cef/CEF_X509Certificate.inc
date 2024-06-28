
//function
procedure CefX509Certificate_UnWrap(data: Pointer; var Result: ICefX509Certificate); extdecl;
begin
  Result := TCEFX509CertificateRef.UnWrap(data);
end;

//function
procedure CefX509Certificate_GetSubject(AObj: ICefX509Certificate; var Result: ICefX509CertPrincipal); extdecl;
begin
  {$define handleExceptionFuncName :='GetSubject'}
  handleExceptionBegin
  Result := AObj.GetSubject();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetIssuer(AObj: ICefX509Certificate; var Result: ICefX509CertPrincipal); extdecl;
begin
  {$define handleExceptionFuncName :='GetIssuer'}
  handleExceptionBegin
  Result := AObj.GetIssuer();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetSerialNumber(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetSerialNumber'}
  handleExceptionBegin
  Result := AObj.GetSerialNumber();
  handleExceptionEnd
end;

//function
function CefX509Certificate_GetValidStart(AObj: ICefX509Certificate): TCefBaseTime; extdecl;
begin
  {$define handleExceptionFuncName :='GetValidStart'}
  handleExceptionBegin
  Result := AObj.GetValidStart();
  handleExceptionEnd
end;

//function
function CefX509Certificate_GetValidExpiry(AObj: ICefX509Certificate): TCefBaseTime; extdecl;
begin
  {$define handleExceptionFuncName :='GetValidExpiry'}
  handleExceptionBegin
  Result := AObj.GetValidExpiry();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetValidStartAsDateTime(AObj: ICefX509Certificate; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='GetValidStartAsDateTime'}
  handleExceptionBegin
  Result := AObj.GetValidStartAsDateTime();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetValidExpiryAsDateTime(AObj: ICefX509Certificate; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='GetValidExpiryAsDateTime'}
  handleExceptionBegin
  Result := AObj.GetValidExpiryAsDateTime();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetDerEncoded(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetDerEncoded'}
  handleExceptionBegin
  Result := AObj.GetDerEncoded();
  handleExceptionEnd
end;

//function
procedure CefX509Certificate_GetPemEncoded(AObj: ICefX509Certificate; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetPemEncoded'}
  handleExceptionBegin
  Result := AObj.GetPemEncoded();
  handleExceptionEnd
end;

//function
function CefX509Certificate_GetIssuerChainSize(AObj: ICefX509Certificate): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetIssuerChainSize'}
  handleExceptionBegin
  Result := AObj.GetIssuerChainSize();
  handleExceptionEnd
end;


exports
  CefX509Certificate_UnWrap,
  CefX509Certificate_GetSubject,
  CefX509Certificate_GetIssuer,
  CefX509Certificate_GetSerialNumber,
  CefX509Certificate_GetValidStart,
  CefX509Certificate_GetValidExpiry,
  CefX509Certificate_GetValidStartAsDateTime,
  CefX509Certificate_GetValidExpiryAsDateTime,
  CefX509Certificate_GetDerEncoded,
  CefX509Certificate_GetPemEncoded,
  CefX509Certificate_GetIssuerChainSize;