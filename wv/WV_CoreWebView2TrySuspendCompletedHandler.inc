
//constructor
function CoreWebView2TrySuspendCompletedHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2TrySuspendCompletedHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2TrySuspendCompletedHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2TrySuspendCompletedHandler_Create;