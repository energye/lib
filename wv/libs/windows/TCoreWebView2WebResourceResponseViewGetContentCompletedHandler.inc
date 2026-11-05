// constructor
function TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_Create(const aEvents: IWVBrowserEvents; aResourceID: integer; out IntfWebResourceResponseViewGetContentCompletedHandler: ICoreWebView2WebResourceResponseViewGetContentCompletedHandler): TCoreWebView2WebResourceResponseViewGetContentCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 10200}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseViewGetContentCompletedHandler.Create(aEvents, aResourceID);
  IntfWebResourceResponseViewGetContentCompletedHandler := Result as ICoreWebView2WebResourceResponseViewGetContentCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_Invoke(AObj: ICoreWebView2WebResourceResponseViewGetContentCompletedHandler; errorCode: HResult; const result_: IStream): HResult; extdecl;
begin
  {$define handleExceptionID := 10201}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_ResourceID(AObj: TCoreWebView2WebResourceResponseViewGetContentCompletedHandler): integer; extdecl;
begin
  {$define handleExceptionID := 10202}
  handleExceptionBegin
  Result := AObj.ResourceID;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_Create,
  TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_Invoke,
  TCoreWebView2WebResourceResponseViewGetContentCompletedHandler_ResourceID;