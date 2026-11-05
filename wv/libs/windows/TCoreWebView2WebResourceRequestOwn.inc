// constructor
function TCoreWebView2WebResourceRequestOwn_Create(const aURI: PChar; const aMethod: PChar; const aContent: IStream; const aHeaders: ICoreWebView2HttpRequestHeaders; out IntfWebResourceRequest: ICoreWebView2WebResourceRequest): TCoreWebView2WebResourceRequestOwn; extdecl;
begin
  {$define handleExceptionID := 8700}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceRequestOwn.Create(aURI, aMethod, aContent, aHeaders);
  IntfWebResourceRequest := Result as ICoreWebView2WebResourceRequest;
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Get_uri(AObj: ICoreWebView2WebResourceRequest; var uri: PChar): HResult; extdecl;
var
  Outuri: PWideChar;
begin
  {$define handleExceptionID := 8701}
  handleExceptionBegin
  Result := AObj.Get_uri(Outuri);
  uri := ToPChar(Outuri);
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Set_uri(AObj: ICoreWebView2WebResourceRequest; uri: PChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8702}
  handleExceptionBegin
  Result := AObj.Set_uri(PCharToPWChar(uri));
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Get_Method(AObj: ICoreWebView2WebResourceRequest; var Method: PChar): HResult; extdecl;
var
  OutMethod: PWideChar;
begin
  {$define handleExceptionID := 8703}
  handleExceptionBegin
  Result := AObj.Get_Method(OutMethod);
  Method := ToPChar(OutMethod);
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Set_Method(AObj: ICoreWebView2WebResourceRequest; Method: PChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8704}
  handleExceptionBegin
  Result := AObj.Set_Method(PCharToPWChar(Method));
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Get_Content(AObj: ICoreWebView2WebResourceRequest; var Content: IStream): HResult; extdecl;
var
  OutContent: IStream = nil;
begin
  {$define handleExceptionID := 8705}
  handleExceptionBegin
  Result := AObj.Get_Content(OutContent);
  Content := OutContent;
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Set_Content(AObj: ICoreWebView2WebResourceRequest; const Content: IStream): HResult; extdecl;
begin
  {$define handleExceptionID := 8706}
  handleExceptionBegin
  Result := AObj.Set_Content(Content);
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceRequestOwn_Get_Headers(AObj: ICoreWebView2WebResourceRequest; var Headers: ICoreWebView2HttpRequestHeaders): HResult; extdecl;
var
  OutHeaders: ICoreWebView2HttpRequestHeaders = nil;
begin
  {$define handleExceptionID := 8707}
  handleExceptionBegin
  Result := AObj.Get_Headers(OutHeaders);
  Headers := OutHeaders;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceRequestOwn_Create,
  TCoreWebView2WebResourceRequestOwn_Get_uri,
  TCoreWebView2WebResourceRequestOwn_Set_uri,
  TCoreWebView2WebResourceRequestOwn_Get_Method,
  TCoreWebView2WebResourceRequestOwn_Set_Method,
  TCoreWebView2WebResourceRequestOwn_Get_Content,
  TCoreWebView2WebResourceRequestOwn_Set_Content,
  TCoreWebView2WebResourceRequestOwn_Get_Headers;