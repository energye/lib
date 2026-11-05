// constructor
function TCoreWebView2ClientCertificateCollection_Create(const aBaseIntf: ICoreWebView2ClientCertificateCollection): TCoreWebView2ClientCertificateCollection; extdecl;
begin
  {$define handleExceptionID := 3800}
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificateCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateCollection_Initialized(AObj: TCoreWebView2ClientCertificateCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 3801}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateCollection_BaseIntf(AObj: TCoreWebView2ClientCertificateCollection; var Result: ICoreWebView2ClientCertificateCollection); extdecl;
begin
  {$define handleExceptionID := 3802}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ClientCertificateCollection_Count(AObj: TCoreWebView2ClientCertificateCollection): cardinal; extdecl;
begin
  {$define handleExceptionID := 3803}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ClientCertificateCollection_Items(AObj: TCoreWebView2ClientCertificateCollection; idx: cardinal; var Result: ICoreWebView2ClientCertificate); extdecl;
begin
  {$define handleExceptionID := 3804}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2ClientCertificateCollection_Create,
  TCoreWebView2ClientCertificateCollection_Initialized,
  TCoreWebView2ClientCertificateCollection_BaseIntf,
  TCoreWebView2ClientCertificateCollection_Count,
  TCoreWebView2ClientCertificateCollection_Items;