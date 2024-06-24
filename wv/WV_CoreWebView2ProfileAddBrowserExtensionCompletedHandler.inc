
//constructor
function CoreWebView2ProfileAddBrowserExtensionCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2ProfileAddBrowserExtensionCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ProfileAddBrowserExtensionCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2ProfileAddBrowserExtensionCompletedHandler_Create;