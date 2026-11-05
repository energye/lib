// constructor
function TCoreWebView2ServerCertificateErrorDetectedEventArgs_Create(const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs): TCoreWebView2ServerCertificateErrorDetectedEventArgs; extdecl;
begin
  {$define handleExceptionID := 3500}
  handleExceptionBegin
  Result := TCoreWebView2ServerCertificateErrorDetectedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ServerCertificateErrorDetectedEventArgs_Initialized(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3501}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ServerCertificateErrorDetectedEventArgs_BaseIntf(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2ServerCertificateErrorDetectedEventArgs); extdecl;
begin
  {$define handleExceptionID := 3502}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ServerCertificateErrorDetectedEventArgs_ErrorStatus(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs): TWVWebErrorStatus; extdecl;
begin
  {$define handleExceptionID := 3503}
  handleExceptionBegin
  Result := AObj.ErrorStatus;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ServerCertificateErrorDetectedEventArgs_RequestUri(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3504}
  handleExceptionBegin
  StringBufferCreate(AObj.RequestUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ServerCertificateErrorDetectedEventArgs_ServerCertificate(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2Certificate); extdecl;
begin
  {$define handleExceptionID := 3505}
  handleExceptionBegin
  Result := AObj.ServerCertificate;
  handleExceptionEnd
end;

// property
function TCoreWebView2ServerCertificateErrorDetectedEventArgs_Action(ASet: LongBool; AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; AValue: TWVServerCertificateErrorAction): TWVServerCertificateErrorAction; extdecl;
begin
  {$define handleExceptionID := 3506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Action := AValue
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ServerCertificateErrorDetectedEventArgs_Deferral(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3507}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_Create,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_Initialized,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_BaseIntf,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_ErrorStatus,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_RequestUri,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_ServerCertificate,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_Action,
  TCoreWebView2ServerCertificateErrorDetectedEventArgs_Deferral;