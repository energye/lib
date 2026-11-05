// constructor
function TCoreWebView2BrowserExtensionEnableCompletedHandler_Create(const aEvents: IWVBrowserEvents; const aExtensionID: PChar; out IntfBrowserExtensionEnableCompletedHandler: ICoreWebView2BrowserExtensionEnableCompletedHandler): TCoreWebView2BrowserExtensionEnableCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 8900}
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionEnableCompletedHandler.Create(aEvents, aExtensionID);
  IntfBrowserExtensionEnableCompletedHandler := Result as ICoreWebView2BrowserExtensionEnableCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2BrowserExtensionEnableCompletedHandler_Invoke(AObj: ICoreWebView2BrowserExtensionEnableCompletedHandler; errorCode: HResult): HResult; extdecl;
begin
  {$define handleExceptionID := 8901}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode);
  handleExceptionEnd
end;

exports
  TCoreWebView2BrowserExtensionEnableCompletedHandler_Create,
  TCoreWebView2BrowserExtensionEnableCompletedHandler_Invoke;