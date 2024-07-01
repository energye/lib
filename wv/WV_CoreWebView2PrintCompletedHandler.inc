
//constructor
function CoreWebView2PrintCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2PrintCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PrintCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2PrintCompletedHandler_Create;