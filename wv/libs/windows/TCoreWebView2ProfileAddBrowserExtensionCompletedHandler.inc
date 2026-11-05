// constructor
function TCoreWebView2ProfileAddBrowserExtensionCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfProfileAddBrowserExtensionCompletedHandler: ICoreWebView2ProfileAddBrowserExtensionCompletedHandler): TCoreWebView2ProfileAddBrowserExtensionCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9800}
  handleExceptionBegin
  Result := TCoreWebView2ProfileAddBrowserExtensionCompletedHandler.Create(aEvents);
  IntfProfileAddBrowserExtensionCompletedHandler := Result as ICoreWebView2ProfileAddBrowserExtensionCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2ProfileAddBrowserExtensionCompletedHandler_Invoke(AObj: ICoreWebView2ProfileAddBrowserExtensionCompletedHandler; errorCode: HResult; const result_: ICoreWebView2BrowserExtension): HResult; extdecl;
begin
  {$define handleExceptionID := 9801}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2ProfileAddBrowserExtensionCompletedHandler_Create,
  TCoreWebView2ProfileAddBrowserExtensionCompletedHandler_Invoke;