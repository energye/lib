// constructor
function TCoreWebView2CustomItemSelectedEventHandler_Create(const aEvents: IWVBrowserEvents; out IntfCustomItemSelectedEventHandler: ICoreWebView2CustomItemSelectedEventHandler): TCoreWebView2CustomItemSelectedEventHandler; extdecl;
begin
  {$define handleExceptionID := 9200}
  handleExceptionBegin
  Result := TCoreWebView2CustomItemSelectedEventHandler.Create(aEvents);
  IntfCustomItemSelectedEventHandler := Result as ICoreWebView2CustomItemSelectedEventHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomItemSelectedEventHandler_Invoke(AObj: ICoreWebView2CustomItemSelectedEventHandler; const sender: ICoreWebView2ContextMenuItem; const args: IUnknown): HResult; extdecl;
begin
  {$define handleExceptionID := 9201}
  handleExceptionBegin
  Result := AObj.Invoke(sender, args);
  handleExceptionEnd
end;

exports
  TCoreWebView2CustomItemSelectedEventHandler_Create,
  TCoreWebView2CustomItemSelectedEventHandler_Invoke;