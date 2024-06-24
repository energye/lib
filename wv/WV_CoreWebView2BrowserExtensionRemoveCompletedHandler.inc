
//constructor
function CoreWebView2BrowserExtensionRemoveCompletedHandler_Create(const aEvents: IWVBrowserEvents; const aExtensionID: PChar): TCoreWebView2BrowserExtensionRemoveCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionRemoveCompletedHandler.Create(aEvents, aExtensionID);
  handleExceptionEnd
end;


exports
  CoreWebView2BrowserExtensionRemoveCompletedHandler_Create;