// constructor
function TCefSSLStatusRef_Create(data: Pointer; out IntfSSLStatus: ICefSSLStatus): TCefSSLStatusRef; extdecl;
begin
  {$define handleExceptionID := 21000}
  handleExceptionBegin
  Result := TCefSSLStatusRef.Create(data);
  IntfSSLStatus := Result as ICefSSLStatus;
  handleExceptionEnd
end;

// function
function TCefSSLStatusRef_IsSecureConnection(AObj: ICefSSLStatus): LongBool; extdecl;
begin
  {$define handleExceptionID := 21001}
  handleExceptionBegin
  Result := AObj.IsSecureConnection();
  handleExceptionEnd
end;

// function
function TCefSSLStatusRef_GetCertStatus(AObj: ICefSSLStatus): TCefCertStatus; extdecl;
begin
  {$define handleExceptionID := 21002}
  handleExceptionBegin
  Result := AObj.GetCertStatus();
  handleExceptionEnd
end;

// function
function TCefSSLStatusRef_GetSSLVersion(AObj: ICefSSLStatus): TCefSSLVersion; extdecl;
begin
  {$define handleExceptionID := 21003}
  handleExceptionBegin
  Result := AObj.GetSSLVersion();
  handleExceptionEnd
end;

// function
function TCefSSLStatusRef_GetContentStatus(AObj: ICefSSLStatus): TCefSSLContentStatus; extdecl;
begin
  {$define handleExceptionID := 21004}
  handleExceptionBegin
  Result := AObj.GetContentStatus();
  handleExceptionEnd
end;

// function
procedure TCefSSLStatusRef_GetX509Certificate(AObj: ICefSSLStatus; var Result: ICefX509Certificate); extdecl;
begin
  {$define handleExceptionID := 21005}
  handleExceptionBegin
  Result := AObj.GetX509Certificate();
  handleExceptionEnd
end;

// function static
procedure TCefSSLStatusRef_UnWrap(data: Pointer; var Result: ICefSSLStatus); extdecl;
begin
  Result := TCefSSLStatusRef.UnWrap(data);
end;

exports
  TCefSSLStatusRef_Create,
  TCefSSLStatusRef_IsSecureConnection,
  TCefSSLStatusRef_GetCertStatus,
  TCefSSLStatusRef_GetSSLVersion,
  TCefSSLStatusRef_GetContentStatus,
  TCefSSLStatusRef_GetX509Certificate,
  TCefSSLStatusRef_UnWrap;