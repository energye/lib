
//constructor
function CoreWebView2BrowserExtensionEnableCompletedHandler_Create(const aEvents: IWVBrowserEvents; const aExtensionID: PChar): TCoreWebView2BrowserExtensionEnableCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionEnableCompletedHandler.Create(aEvents, aExtensionID);
  handleExceptionEnd
end;


exports
  CoreWebView2BrowserExtensionEnableCompletedHandler_Create;