// constructor
function TCoreWebView2PrintCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfPrintCompletedHandler: ICoreWebView2PrintCompletedHandler): TCoreWebView2PrintCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9500}
  handleExceptionBegin
  Result := TCoreWebView2PrintCompletedHandler.Create(aEvents);
  IntfPrintCompletedHandler := Result as ICoreWebView2PrintCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2PrintCompletedHandler_Invoke(AObj: ICoreWebView2PrintCompletedHandler; errorCode: HResult; result_: COREWEBVIEW2_PRINT_STATUS): HResult; extdecl;
begin
  {$define handleExceptionID := 9501}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2PrintCompletedHandler_Create,
  TCoreWebView2PrintCompletedHandler_Invoke;