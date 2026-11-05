// constructor
function TCoreWebView2ClientCertificateRequestedEventArgs_Create(const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs): TCoreWebView2ClientCertificateRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificateRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateRequestedEventArgs_Initialized(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3201}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_BaseIntf(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2ClientCertificateRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 3202}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_Host(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3203}
  handleExceptionBegin
  StringBufferCreate(AObj.Host, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateRequestedEventArgs_Port(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): integer; extdecl;
begin
  {$define handleExceptionID := 3204}
  handleExceptionBegin
  Result := AObj.Port;
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateRequestedEventArgs_IsProxy(AObj: TCoreWebView2ClientCertificateRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3205}
  handleExceptionBegin
  Result := AObj.IsProxy;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_AllowedCertificateAuthorities(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2StringCollection); extdecl;
begin
  {$define handleExceptionID := 3206}
  handleExceptionBegin
  Result := AObj.AllowedCertificateAuthorities;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_MutuallyTrustedCertificates(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2ClientCertificateCollection); extdecl;
begin
  {$define handleExceptionID := 3207}
  handleExceptionBegin
  Result := AObj.MutuallyTrustedCertificates;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_SelectedCertificate(ASet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: ICoreWebView2ClientCertificate; var Result: ICoreWebView2ClientCertificate); extdecl;
begin
  {$define handleExceptionID := 3208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedCertificate := AValue
  end else
    Result := AObj.SelectedCertificate;
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateRequestedEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateRequestedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2ClientCertificateRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateRequestedEventArgs_Deferral(AObj: TCoreWebView2ClientCertificateRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3211}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2ClientCertificateRequestedEventArgs_Create,
  TCoreWebView2ClientCertificateRequestedEventArgs_Initialized,
  TCoreWebView2ClientCertificateRequestedEventArgs_BaseIntf,
  TCoreWebView2ClientCertificateRequestedEventArgs_Host,
  TCoreWebView2ClientCertificateRequestedEventArgs_Port,
  TCoreWebView2ClientCertificateRequestedEventArgs_IsProxy,
  TCoreWebView2ClientCertificateRequestedEventArgs_AllowedCertificateAuthorities,
  TCoreWebView2ClientCertificateRequestedEventArgs_MutuallyTrustedCertificates,
  TCoreWebView2ClientCertificateRequestedEventArgs_SelectedCertificate,
  TCoreWebView2ClientCertificateRequestedEventArgs_Cancel,
  TCoreWebView2ClientCertificateRequestedEventArgs_Handled,
  TCoreWebView2ClientCertificateRequestedEventArgs_Deferral;