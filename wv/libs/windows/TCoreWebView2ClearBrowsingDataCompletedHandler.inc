// constructor
function TCoreWebView2ClearBrowsingDataCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfClearBrowsingDataCompletedHandler: ICoreWebView2ClearBrowsingDataCompletedHandler): TCoreWebView2ClearBrowsingDataCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9100}
  handleExceptionBegin
  Result := TCoreWebView2ClearBrowsingDataCompletedHandler.Create(aEvents);
  IntfClearBrowsingDataCompletedHandler := Result as ICoreWebView2ClearBrowsingDataCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2ClearBrowsingDataCompletedHandler_Invoke(AObj: ICoreWebView2ClearBrowsingDataCompletedHandler; errorCode: HResult): HResult; extdecl;
begin
  {$define handleExceptionID := 9101}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode);
  handleExceptionEnd
end;

exports
  TCoreWebView2ClearBrowsingDataCompletedHandler_Create,
  TCoreWebView2ClearBrowsingDataCompletedHandler_Invoke;