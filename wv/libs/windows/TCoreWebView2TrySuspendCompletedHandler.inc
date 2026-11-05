// constructor
function TCoreWebView2TrySuspendCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfTrySuspendCompletedHandler: ICoreWebView2TrySuspendCompletedHandler): TCoreWebView2TrySuspendCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 10100}
  handleExceptionBegin
  Result := TCoreWebView2TrySuspendCompletedHandler.Create(aEvents);
  IntfTrySuspendCompletedHandler := Result as ICoreWebView2TrySuspendCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2TrySuspendCompletedHandler_Invoke(AObj: ICoreWebView2TrySuspendCompletedHandler; errorCode: HResult; result_: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 10101}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2TrySuspendCompletedHandler_Create,
  TCoreWebView2TrySuspendCompletedHandler_Invoke;