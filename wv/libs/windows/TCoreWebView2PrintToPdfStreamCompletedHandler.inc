// constructor
function TCoreWebView2PrintToPdfStreamCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfPrintToPdfStreamCompletedHandler: ICoreWebView2PrintToPdfStreamCompletedHandler): TCoreWebView2PrintToPdfStreamCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9700}
  handleExceptionBegin
  Result := TCoreWebView2PrintToPdfStreamCompletedHandler.Create(aEvents);
  IntfPrintToPdfStreamCompletedHandler := Result as ICoreWebView2PrintToPdfStreamCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2PrintToPdfStreamCompletedHandler_Invoke(AObj: ICoreWebView2PrintToPdfStreamCompletedHandler; errorCode: HResult; const result_: IStream): HResult; extdecl;
begin
  {$define handleExceptionID := 9701}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2PrintToPdfStreamCompletedHandler_Create,
  TCoreWebView2PrintToPdfStreamCompletedHandler_Invoke;