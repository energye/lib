
//constructor
function CoreWebView2ClientCertificateRequestedEventArgs_Create(const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs): TCoreWebView2ClientCertificateRequestedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificateRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_Initialized(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateRequestedEventArgs_BaseIntf(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2ClientCertificateRequestedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_Host(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Host);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_Port(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Port;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_IsProxy(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsProxy;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateRequestedEventArgs_AllowedCertificateAuthorities(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2StringCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowedCertificateAuthorities;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateRequestedEventArgs_MutuallyTrustedCertificates(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2ClientCertificateCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MutuallyTrustedCertificates;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateRequestedEventArgs_SelectedCertificate(AIsSet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: ICoreWebView2ClientCertificate; var Result: ICoreWebView2ClientCertificate); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedCertificate := AValue;
  end else
    Result := AObj.SelectedCertificate;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_Cancel(AIsSet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cancel := AValue;
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateRequestedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateRequestedEventArgs_Deferral(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2ClientCertificateRequestedEventArgs_Create,
  CoreWebView2ClientCertificateRequestedEventArgs_Initialized,
  CoreWebView2ClientCertificateRequestedEventArgs_BaseIntf,
  CoreWebView2ClientCertificateRequestedEventArgs_Host,
  CoreWebView2ClientCertificateRequestedEventArgs_Port,
  CoreWebView2ClientCertificateRequestedEventArgs_IsProxy,
  CoreWebView2ClientCertificateRequestedEventArgs_AllowedCertificateAuthorities,
  CoreWebView2ClientCertificateRequestedEventArgs_MutuallyTrustedCertificates,
  CoreWebView2ClientCertificateRequestedEventArgs_SelectedCertificate,
  CoreWebView2ClientCertificateRequestedEventArgs_Cancel,
  CoreWebView2ClientCertificateRequestedEventArgs_Handled,
  CoreWebView2ClientCertificateRequestedEventArgs_Deferral;