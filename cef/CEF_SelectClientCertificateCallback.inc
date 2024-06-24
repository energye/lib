
//function
procedure CefSelectClientCertificateCallback_UnWrap(data: Pointer; var Result: ICefSelectClientCertificateCallback); extdecl;
begin
  Result := TCefSelectClientCertificateCallbackRef.UnWrap(data);
end;

//procedure
procedure CefSelectClientCertificateCallback_Select(AObj: ICefSelectClientCertificateCallback; const cert: ICefX509Certificate); extdecl;
begin
  handleExceptionBegin
  AObj.Select(cert);
  handleExceptionEnd
end;


exports
  CefSelectClientCertificateCallback_UnWrap,
  CefSelectClientCertificateCallback_Select;