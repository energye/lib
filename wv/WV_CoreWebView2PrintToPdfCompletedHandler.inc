
//constructor
function CoreWebView2PrintToPdfCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2PrintToPdfCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2PrintToPdfCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2PrintToPdfCompletedHandler_Create;