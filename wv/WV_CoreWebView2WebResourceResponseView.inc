
//constructor
function CoreWebView2WebResourceResponseView_Create(const aBaseIntf: ICoreWebView2WebResourceResponseView): TCoreWebView2WebResourceResponseView; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseView.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponseView_Initialized(AObj: TCoreWebView2WebResourceResponseView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponseView_BaseIntf(AObj: TCoreWebView2WebResourceResponseView; var Result: ICoreWebView2WebResourceResponseView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponseView_StatusCode(AObj: TCoreWebView2WebResourceResponseView): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StatusCode;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponseView_ReasonPhrase(AObj: TCoreWebView2WebResourceResponseView): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ReasonPhrase);
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponseView_Headers(AObj: TCoreWebView2WebResourceResponseView; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;

//function
function CoreWebView2WebResourceResponseView_GetContent(AObj: TCoreWebView2WebResourceResponseView; const aHandler: ICoreWebView2WebResourceResponseViewGetContentCompletedHandler): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetContent(aHandler);
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceResponseView_Create,
  CoreWebView2WebResourceResponseView_Initialized,
  CoreWebView2WebResourceResponseView_BaseIntf,
  CoreWebView2WebResourceResponseView_StatusCode,
  CoreWebView2WebResourceResponseView_ReasonPhrase,
  CoreWebView2WebResourceResponseView_Headers,
  CoreWebView2WebResourceResponseView_GetContent;