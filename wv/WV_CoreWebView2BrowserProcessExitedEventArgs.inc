
//constructor
function CoreWebView2BrowserProcessExitedEventArgs_Create(const aArgs: ICoreWebView2BrowserProcessExitedEventArgs): TCoreWebView2BrowserProcessExitedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2BrowserProcessExitedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserProcessExitedEventArgs_Initialized(AObj: TCoreWebView2BrowserProcessExitedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BrowserProcessExitedEventArgs_BaseIntf(AObj: TCoreWebView2BrowserProcessExitedEventArgs; var Result: ICoreWebView2BrowserProcessExitedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserProcessExitedEventArgs_BrowserProcessExitKind(AObj: TCoreWebView2BrowserProcessExitedEventArgs): TWVBrowserProcessExitKind; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserProcessExitKind'}
  handleExceptionBegin
  Result := AObj.BrowserProcessExitKind;
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserProcessExitedEventArgs_BrowserProcessId(AObj: TCoreWebView2BrowserProcessExitedEventArgs): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserProcessId'}
  handleExceptionBegin
  Result := AObj.BrowserProcessId;
  handleExceptionEnd
end;


exports
  CoreWebView2BrowserProcessExitedEventArgs_Create,
  CoreWebView2BrowserProcessExitedEventArgs_Initialized,
  CoreWebView2BrowserProcessExitedEventArgs_BaseIntf,
  CoreWebView2BrowserProcessExitedEventArgs_BrowserProcessExitKind,
  CoreWebView2BrowserProcessExitedEventArgs_BrowserProcessId;