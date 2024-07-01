
//constructor
function CoreWebView2ClientCertificateCollection_Create(const aBaseIntf: ICoreWebView2ClientCertificateCollection): TCoreWebView2ClientCertificateCollection; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ClientCertificateCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateCollection_Initialized(AObj: TCoreWebView2ClientCertificateCollection): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateCollection_BaseIntf(AObj: TCoreWebView2ClientCertificateCollection; var Result: ICoreWebView2ClientCertificateCollection); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ClientCertificateCollection_Count(AObj: TCoreWebView2ClientCertificateCollection): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ClientCertificateCollection_Items(AObj: TCoreWebView2ClientCertificateCollection; idx: uint32; var Result: ICoreWebView2ClientCertificate); extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2ClientCertificateCollection_Create,
  CoreWebView2ClientCertificateCollection_Initialized,
  CoreWebView2ClientCertificateCollection_BaseIntf,
  CoreWebView2ClientCertificateCollection_Count,
  CoreWebView2ClientCertificateCollection_Items;