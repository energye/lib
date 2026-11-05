// constructor
function TCoreWebView2PrintToPdfCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfPrintToPdfCompletedHandler: ICoreWebView2PrintToPdfCompletedHandler): TCoreWebView2PrintToPdfCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9600}
  handleExceptionBegin
  Result := TCoreWebView2PrintToPdfCompletedHandler.Create(aEvents);
  IntfPrintToPdfCompletedHandler := Result as ICoreWebView2PrintToPdfCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2PrintToPdfCompletedHandler_Invoke(AObj: ICoreWebView2PrintToPdfCompletedHandler; errorCode: HResult; result_: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 9601}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2PrintToPdfCompletedHandler_Create,
  TCoreWebView2PrintToPdfCompletedHandler_Invoke;