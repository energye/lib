// constructor
function TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfProfileGetBrowserExtensionsCompletedHandler: ICoreWebView2ProfileGetBrowserExtensionsCompletedHandler): TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9900}
  handleExceptionBegin
  Result := TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler.Create(aEvents);
  IntfProfileGetBrowserExtensionsCompletedHandler := Result as ICoreWebView2ProfileGetBrowserExtensionsCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Invoke(AObj: ICoreWebView2ProfileGetBrowserExtensionsCompletedHandler; errorCode: HResult; const result_: ICoreWebView2BrowserExtensionList): HResult; extdecl;
begin
  {$define handleExceptionID := 9901}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Create,
  TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Invoke;