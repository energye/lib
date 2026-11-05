// constructor
function TCefSelectClientCertificateCallbackRef_Create(data: Pointer; out IntfSelectClientCertificateCallback: ICefSelectClientCertificateCallback): TCefSelectClientCertificateCallbackRef; extdecl;
begin
  {$define handleExceptionID := 21000}
  handleExceptionBegin
  Result := TCefSelectClientCertificateCallbackRef.Create(data);
  IntfSelectClientCertificateCallback := Result as ICefSelectClientCertificateCallback;
  handleExceptionEnd
end;

// function static
procedure TCefSelectClientCertificateCallbackRef_UnWrap(data: Pointer; var Result: ICefSelectClientCertificateCallback); extdecl;
begin
  Result := TCefSelectClientCertificateCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefSelectClientCertificateCallbackRef_Select(AObj: ICefSelectClientCertificateCallback; const cert: ICefX509Certificate); extdecl;
begin
  {$define handleExceptionID := 21001}
  handleExceptionBegin
  AObj.Select(cert);
  handleExceptionEnd
end;

exports
  TCefSelectClientCertificateCallbackRef_Create,
  TCefSelectClientCertificateCallbackRef_UnWrap,
  TCefSelectClientCertificateCallbackRef_Select;