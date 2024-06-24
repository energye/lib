
//constructor
function CoreWebView2DOMContentLoadedEventArgs_Create(const aArgs: ICoreWebView2DOMContentLoadedEventArgs): TCoreWebView2DOMContentLoadedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2DOMContentLoadedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2DOMContentLoadedEventArgs_Initialized(AObj: TCoreWebView2DOMContentLoadedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DOMContentLoadedEventArgs_BaseIntf(AObj: TCoreWebView2DOMContentLoadedEventArgs; var Result: ICoreWebView2DOMContentLoadedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DOMContentLoadedEventArgs_NavigationId(AObj: TCoreWebView2DOMContentLoadedEventArgs; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigationId;
  handleExceptionEnd
end;


exports
  CoreWebView2DOMContentLoadedEventArgs_Create,
  CoreWebView2DOMContentLoadedEventArgs_Initialized,
  CoreWebView2DOMContentLoadedEventArgs_BaseIntf,
  CoreWebView2DOMContentLoadedEventArgs_NavigationId;