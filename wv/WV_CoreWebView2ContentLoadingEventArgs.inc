
//constructor
function CoreWebView2ContentLoadingEventArgs_Create(const aArgs: ICoreWebView2ContentLoadingEventArgs): TCoreWebView2ContentLoadingEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ContentLoadingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ContentLoadingEventArgs_Initialized(AObj: TCoreWebView2ContentLoadingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContentLoadingEventArgs_BaseIntf(AObj: TCoreWebView2ContentLoadingEventArgs; var Result: ICoreWebView2ContentLoadingEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ContentLoadingEventArgs_IsErrorPage(AObj: TCoreWebView2ContentLoadingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsErrorPage'}
  handleExceptionBegin
  Result := AObj.IsErrorPage;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContentLoadingEventArgs_NavigationId(AObj: TCoreWebView2ContentLoadingEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='NavigationId'}
  handleExceptionBegin
  Result := AObj.NavigationId;
  handleExceptionEnd
end;


exports
  CoreWebView2ContentLoadingEventArgs_Create,
  CoreWebView2ContentLoadingEventArgs_Initialized,
  CoreWebView2ContentLoadingEventArgs_BaseIntf,
  CoreWebView2ContentLoadingEventArgs_IsErrorPage,
  CoreWebView2ContentLoadingEventArgs_NavigationId;