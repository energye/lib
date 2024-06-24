
//constructor
function CoreWebView2ClearBrowsingDataCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2ClearBrowsingDataCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ClearBrowsingDataCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2ClearBrowsingDataCompletedHandler_Create;