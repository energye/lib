
//constructor
function CoreWebView2PrintToPdfStreamCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2PrintToPdfStreamCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PrintToPdfStreamCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2PrintToPdfStreamCompletedHandler_Create;