
//constructor
function CoreWebView2PrintToPdfStreamCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2PrintToPdfStreamCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2PrintToPdfStreamCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2PrintToPdfStreamCompletedHandler_Create;