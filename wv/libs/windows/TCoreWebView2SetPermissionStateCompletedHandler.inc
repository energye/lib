// constructor
function TCoreWebView2SetPermissionStateCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfSetPermissionStateCompletedHandler: ICoreWebView2SetPermissionStateCompletedHandler): TCoreWebView2SetPermissionStateCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 10000}
  handleExceptionBegin
  Result := TCoreWebView2SetPermissionStateCompletedHandler.Create(aEvents);
  IntfSetPermissionStateCompletedHandler := Result as ICoreWebView2SetPermissionStateCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2SetPermissionStateCompletedHandler_Invoke(AObj: ICoreWebView2SetPermissionStateCompletedHandler; errorCode: HResult): HResult; extdecl;
begin
  {$define handleExceptionID := 10001}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode);
  handleExceptionEnd
end;

exports
  TCoreWebView2SetPermissionStateCompletedHandler_Create,
  TCoreWebView2SetPermissionStateCompletedHandler_Invoke;