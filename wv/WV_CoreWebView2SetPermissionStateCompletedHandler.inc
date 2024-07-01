
//constructor
function CoreWebView2SetPermissionStateCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2SetPermissionStateCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2SetPermissionStateCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2SetPermissionStateCompletedHandler_Create;