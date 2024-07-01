
//constructor
function CoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ProfileGetBrowserExtensionsCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2ProfileGetBrowserExtensionsCompletedHandler_Create;