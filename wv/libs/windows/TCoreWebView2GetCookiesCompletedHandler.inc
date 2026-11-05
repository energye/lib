// constructor
function TCoreWebView2GetCookiesCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfGetCookiesCompletedHandler: ICoreWebView2GetCookiesCompletedHandler): TCoreWebView2GetCookiesCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9300}
  handleExceptionBegin
  Result := TCoreWebView2GetCookiesCompletedHandler.Create(aEvents);
  IntfGetCookiesCompletedHandler := Result as ICoreWebView2GetCookiesCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2GetCookiesCompletedHandler_Invoke(AObj: ICoreWebView2GetCookiesCompletedHandler; errorCode: HResult; const result_: ICoreWebView2CookieList): HResult; extdecl;
begin
  {$define handleExceptionID := 9301}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2GetCookiesCompletedHandler_Create,
  TCoreWebView2GetCookiesCompletedHandler_Invoke;