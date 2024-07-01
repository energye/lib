
//constructor
function CoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Create;