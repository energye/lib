// constructor
function TCoreWebView2BrowserProcessExitedEventArgs_Create(const aArgs: ICoreWebView2BrowserProcessExitedEventArgs): TCoreWebView2BrowserProcessExitedEventArgs; extdecl;
begin
  {$define handleExceptionID := 1600}
  handleExceptionBegin
  Result := TCoreWebView2BrowserProcessExitedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserProcessExitedEventArgs_Initialized(AObj: TCoreWebView2BrowserProcessExitedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1601}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserProcessExitedEventArgs_BaseIntf(AObj: TCoreWebView2BrowserProcessExitedEventArgs; var Result: ICoreWebView2BrowserProcessExitedEventArgs); extdecl;
begin
  {$define handleExceptionID := 1602}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserProcessExitedEventArgs_BrowserProcessExitKind(AObj: TCoreWebView2BrowserProcessExitedEventArgs): TWVBrowserProcessExitKind; extdecl;
begin
  {$define handleExceptionID := 1603}
  handleExceptionBegin
  Result := AObj.BrowserProcessExitKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserProcessExitedEventArgs_BrowserProcessId(AObj: TCoreWebView2BrowserProcessExitedEventArgs): cardinal; extdecl;
begin
  {$define handleExceptionID := 1604}
  handleExceptionBegin
  Result := AObj.BrowserProcessId;
  handleExceptionEnd
end;

exports
  TCoreWebView2BrowserProcessExitedEventArgs_Create,
  TCoreWebView2BrowserProcessExitedEventArgs_Initialized,
  TCoreWebView2BrowserProcessExitedEventArgs_BaseIntf,
  TCoreWebView2BrowserProcessExitedEventArgs_BrowserProcessExitKind,
  TCoreWebView2BrowserProcessExitedEventArgs_BrowserProcessId;