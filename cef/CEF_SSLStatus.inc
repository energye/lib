
//function
procedure CefSSLStatus_UnWrap(data: Pointer; var Result: ICefSSLStatus); extdecl;
begin
  Result := TCefSSLStatusRef.UnWrap(data);
end;

//function
function CefSSLStatus_IsSecureConnection(AObj: ICefSSLStatus): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSecureConnection'}
  handleExceptionBegin
  Result := AObj.IsSecureConnection();
  handleExceptionEnd
end;

//function
function CefSSLStatus_GetCertStatus(AObj: ICefSSLStatus): TCefCertStatus; extdecl;
begin
  {$define handleExceptionFuncName :='GetCertStatus'}
  handleExceptionBegin
  Result := AObj.GetCertStatus();
  handleExceptionEnd
end;

//function
function CefSSLStatus_GetSSLVersion(AObj: ICefSSLStatus): TCefSSLVersion; extdecl;
begin
  {$define handleExceptionFuncName :='GetSSLVersion'}
  handleExceptionBegin
  Result := AObj.GetSSLVersion();
  handleExceptionEnd
end;

//function
function CefSSLStatus_GetContentStatus(AObj: ICefSSLStatus): TCefSSLContentStatus; extdecl;
begin
  {$define handleExceptionFuncName :='GetContentStatus'}
  handleExceptionBegin
  Result := AObj.GetContentStatus();
  handleExceptionEnd
end;

//function
procedure CefSSLStatus_GetX509Certificate(AObj: ICefSSLStatus; var Result: ICefX509Certificate); extdecl;
begin
  {$define handleExceptionFuncName :='GetX509Certificate'}
  handleExceptionBegin
  Result := AObj.GetX509Certificate();
  handleExceptionEnd
end;


exports
  CefSSLStatus_UnWrap,
  CefSSLStatus_IsSecureConnection,
  CefSSLStatus_GetCertStatus,
  CefSSLStatus_GetSSLVersion,
  CefSSLStatus_GetContentStatus,
  CefSSLStatus_GetX509Certificate;