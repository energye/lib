
//constructor
function CoreWebView2GetCookiesCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2GetCookiesCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2GetCookiesCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2GetCookiesCompletedHandler_Create;