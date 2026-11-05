// constructor
function TCoreWebView2ContentLoadingEventArgs_Create(const aArgs: ICoreWebView2ContentLoadingEventArgs): TCoreWebView2ContentLoadingEventArgs; extdecl;
begin
  {$define handleExceptionID := 2000}
  handleExceptionBegin
  Result := TCoreWebView2ContentLoadingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContentLoadingEventArgs_Initialized(AObj: TCoreWebView2ContentLoadingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2001}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContentLoadingEventArgs_BaseIntf(AObj: TCoreWebView2ContentLoadingEventArgs; var Result: ICoreWebView2ContentLoadingEventArgs); extdecl;
begin
  {$define handleExceptionID := 2002}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContentLoadingEventArgs_IsErrorPage(AObj: TCoreWebView2ContentLoadingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2003}
  handleExceptionBegin
  Result := AObj.IsErrorPage;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContentLoadingEventArgs_NavigationId(AObj: TCoreWebView2ContentLoadingEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 2004}
  handleExceptionBegin
  Result := AObj.NavigationId;
  handleExceptionEnd
end;

exports
  TCoreWebView2ContentLoadingEventArgs_Create,
  TCoreWebView2ContentLoadingEventArgs_Initialized,
  TCoreWebView2ContentLoadingEventArgs_BaseIntf,
  TCoreWebView2ContentLoadingEventArgs_IsErrorPage,
  TCoreWebView2ContentLoadingEventArgs_NavigationId;