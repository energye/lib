// constructor
function TCoreWebView2NavigationCompletedEventArgs_Create(const aArgs: ICoreWebView2NavigationCompletedEventArgs): TCoreWebView2NavigationCompletedEventArgs; extdecl;
begin
  {$define handleExceptionID := 1800}
  handleExceptionBegin
  Result := TCoreWebView2NavigationCompletedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationCompletedEventArgs_Initialized(AObj: TCoreWebView2NavigationCompletedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1801}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationCompletedEventArgs_BaseIntf(AObj: TCoreWebView2NavigationCompletedEventArgs; var Result: ICoreWebView2NavigationCompletedEventArgs); extdecl;
begin
  {$define handleExceptionID := 1802}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationCompletedEventArgs_IsSuccess(AObj: TCoreWebView2NavigationCompletedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1803}
  handleExceptionBegin
  Result := AObj.IsSuccess;
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationCompletedEventArgs_WebErrorStatus(AObj: TCoreWebView2NavigationCompletedEventArgs): TWVWebErrorStatus; extdecl;
begin
  {$define handleExceptionID := 1804}
  handleExceptionBegin
  Result := AObj.WebErrorStatus;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationCompletedEventArgs_NavigationID(AObj: TCoreWebView2NavigationCompletedEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 1805}
  handleExceptionBegin
  Result := AObj.NavigationID;
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationCompletedEventArgs_HttpStatusCode(AObj: TCoreWebView2NavigationCompletedEventArgs): integer; extdecl;
begin
  {$define handleExceptionID := 1806}
  handleExceptionBegin
  Result := AObj.HttpStatusCode;
  handleExceptionEnd
end;

exports
  TCoreWebView2NavigationCompletedEventArgs_Create,
  TCoreWebView2NavigationCompletedEventArgs_Initialized,
  TCoreWebView2NavigationCompletedEventArgs_BaseIntf,
  TCoreWebView2NavigationCompletedEventArgs_IsSuccess,
  TCoreWebView2NavigationCompletedEventArgs_WebErrorStatus,
  TCoreWebView2NavigationCompletedEventArgs_NavigationID,
  TCoreWebView2NavigationCompletedEventArgs_HttpStatusCode;