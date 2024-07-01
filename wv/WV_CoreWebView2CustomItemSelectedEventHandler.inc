
//constructor
function CoreWebView2CustomItemSelectedEventHandler_Create(const aEvents: IWVBrowserEvents): TCoreWebView2CustomItemSelectedEventHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2CustomItemSelectedEventHandler.Create(aEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2CustomItemSelectedEventHandler_Create;