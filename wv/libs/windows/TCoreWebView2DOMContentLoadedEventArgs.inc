// constructor
function TCoreWebView2DOMContentLoadedEventArgs_Create(const aArgs: ICoreWebView2DOMContentLoadedEventArgs): TCoreWebView2DOMContentLoadedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TCoreWebView2DOMContentLoadedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2DOMContentLoadedEventArgs_Initialized(AObj: TCoreWebView2DOMContentLoadedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DOMContentLoadedEventArgs_BaseIntf(AObj: TCoreWebView2DOMContentLoadedEventArgs; var Result: ICoreWebView2DOMContentLoadedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2902}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DOMContentLoadedEventArgs_NavigationId(AObj: TCoreWebView2DOMContentLoadedEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 2903}
  handleExceptionBegin
  Result := AObj.NavigationId;
  handleExceptionEnd
end;

exports
  TCoreWebView2DOMContentLoadedEventArgs_Create,
  TCoreWebView2DOMContentLoadedEventArgs_Initialized,
  TCoreWebView2DOMContentLoadedEventArgs_BaseIntf,
  TCoreWebView2DOMContentLoadedEventArgs_NavigationId;