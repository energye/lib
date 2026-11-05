// constructor
function TCoreWebView2WebResourceResponseView_Create(const aBaseIntf: ICoreWebView2WebResourceResponseView): TCoreWebView2WebResourceResponseView; extdecl;
begin
  {$define handleExceptionID := 7600}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseView.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceResponseView_GetContent(AObj: TCoreWebView2WebResourceResponseView; const aHandler: ICoreWebView2WebResourceResponseViewGetContentCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 7601}
  handleExceptionBegin
  Result := AObj.GetContent(aHandler);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponseView_Initialized(AObj: TCoreWebView2WebResourceResponseView): LongBool; extdecl;
begin
  {$define handleExceptionID := 7602}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseView_BaseIntf(AObj: TCoreWebView2WebResourceResponseView; var Result: ICoreWebView2WebResourceResponseView); extdecl;
begin
  {$define handleExceptionID := 7603}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponseView_StatusCode(AObj: TCoreWebView2WebResourceResponseView): integer; extdecl;
begin
  {$define handleExceptionID := 7604}
  handleExceptionBegin
  Result := AObj.StatusCode;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseView_ReasonPhrase(AObj: TCoreWebView2WebResourceResponseView; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7605}
  handleExceptionBegin
  StringBufferCreate(AObj.ReasonPhrase, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseView_Headers(AObj: TCoreWebView2WebResourceResponseView; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  {$define handleExceptionID := 7606}
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceResponseView_Create,
  TCoreWebView2WebResourceResponseView_GetContent,
  TCoreWebView2WebResourceResponseView_Initialized,
  TCoreWebView2WebResourceResponseView_BaseIntf,
  TCoreWebView2WebResourceResponseView_StatusCode,
  TCoreWebView2WebResourceResponseView_ReasonPhrase,
  TCoreWebView2WebResourceResponseView_Headers;