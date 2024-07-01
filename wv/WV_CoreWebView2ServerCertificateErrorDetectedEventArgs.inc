
//constructor
function CoreWebView2ServerCertificateErrorDetectedEventArgs_Create(const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs): TCoreWebView2ServerCertificateErrorDetectedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ServerCertificateErrorDetectedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ServerCertificateErrorDetectedEventArgs_Initialized(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ServerCertificateErrorDetectedEventArgs_BaseIntf(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2ServerCertificateErrorDetectedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ServerCertificateErrorDetectedEventArgs_ErrorStatus(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs): TWVWebErrorStatus; extdecl;
begin
  {$define handleExceptionFuncName :='ErrorStatus'}
  handleExceptionBegin
  Result := AObj.ErrorStatus;
  handleExceptionEnd
end;

//property
function CoreWebView2ServerCertificateErrorDetectedEventArgs_RequestUri(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='RequestUri'}
  handleExceptionBegin
  Result := ToPChar(AObj.RequestUri);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ServerCertificateErrorDetectedEventArgs_ServerCertificate(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2Certificate); extdecl;
begin
  {$define handleExceptionFuncName :='ServerCertificate'}
  handleExceptionBegin
  Result := AObj.ServerCertificate;
  handleExceptionEnd
end;

//property
function CoreWebView2ServerCertificateErrorDetectedEventArgs_Action(AIsSet: LongBool; AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; AValue: TWVServerCertificateErrorAction): TWVServerCertificateErrorAction; extdecl;
begin
  {$define handleExceptionFuncName :='Action'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Action := AValue;
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ServerCertificateErrorDetectedEventArgs_Deferral(AObj: TCoreWebView2ServerCertificateErrorDetectedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionFuncName :='Deferral'}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2ServerCertificateErrorDetectedEventArgs_Create,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_Initialized,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_BaseIntf,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_ErrorStatus,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_RequestUri,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_ServerCertificate,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_Action,
  CoreWebView2ServerCertificateErrorDetectedEventArgs_Deferral;