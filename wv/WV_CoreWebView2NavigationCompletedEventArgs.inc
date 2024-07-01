
//constructor
function CoreWebView2NavigationCompletedEventArgs_Create(const aArgs: ICoreWebView2NavigationCompletedEventArgs): TCoreWebView2NavigationCompletedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2NavigationCompletedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationCompletedEventArgs_Initialized(AObj: TCoreWebView2NavigationCompletedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NavigationCompletedEventArgs_BaseIntf(AObj: TCoreWebView2NavigationCompletedEventArgs; var Result: ICoreWebView2NavigationCompletedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationCompletedEventArgs_IsSuccess(AObj: TCoreWebView2NavigationCompletedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSuccess'}
  handleExceptionBegin
  Result := AObj.IsSuccess;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationCompletedEventArgs_WebErrorStatus(AObj: TCoreWebView2NavigationCompletedEventArgs): TWVWebErrorStatus; extdecl;
begin
  {$define handleExceptionFuncName :='WebErrorStatus'}
  handleExceptionBegin
  Result := AObj.WebErrorStatus;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NavigationCompletedEventArgs_NavigationID(AObj: TCoreWebView2NavigationCompletedEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='NavigationID'}
  handleExceptionBegin
  Result := AObj.NavigationID;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationCompletedEventArgs_HttpStatusCode(AObj: TCoreWebView2NavigationCompletedEventArgs): integer; extdecl;
begin
  {$define handleExceptionFuncName :='HttpStatusCode'}
  handleExceptionBegin
  Result := AObj.HttpStatusCode;
  handleExceptionEnd
end;


exports
  CoreWebView2NavigationCompletedEventArgs_Create,
  CoreWebView2NavigationCompletedEventArgs_Initialized,
  CoreWebView2NavigationCompletedEventArgs_BaseIntf,
  CoreWebView2NavigationCompletedEventArgs_IsSuccess,
  CoreWebView2NavigationCompletedEventArgs_WebErrorStatus,
  CoreWebView2NavigationCompletedEventArgs_NavigationID,
  CoreWebView2NavigationCompletedEventArgs_HttpStatusCode;