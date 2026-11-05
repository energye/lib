// constructor
function TCoreWebView2BrowserExtensionRemoveCompletedHandler_Create(const aEvents: IWVBrowserEvents; const aExtensionID: PChar; out IntfBrowserExtensionRemoveCompletedHandler: ICoreWebView2BrowserExtensionRemoveCompletedHandler): TCoreWebView2BrowserExtensionRemoveCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9000}
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionRemoveCompletedHandler.Create(aEvents, aExtensionID);
  IntfBrowserExtensionRemoveCompletedHandler := Result as ICoreWebView2BrowserExtensionRemoveCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2BrowserExtensionRemoveCompletedHandler_Invoke(AObj: ICoreWebView2BrowserExtensionRemoveCompletedHandler; errorCode: HResult): HResult; extdecl;
begin
  {$define handleExceptionID := 9001}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode);
  handleExceptionEnd
end;

exports
  TCoreWebView2BrowserExtensionRemoveCompletedHandler_Create,
  TCoreWebView2BrowserExtensionRemoveCompletedHandler_Invoke;