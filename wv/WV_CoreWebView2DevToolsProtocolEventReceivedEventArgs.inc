
//constructor
function CoreWebView2DevToolsProtocolEventReceivedEventArgs_Create(const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs): TCoreWebView2DevToolsProtocolEventReceivedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2DevToolsProtocolEventReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2DevToolsProtocolEventReceivedEventArgs_Initialized(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DevToolsProtocolEventReceivedEventArgs_BaseIntf(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs; var Result: ICoreWebView2DevToolsProtocolEventReceivedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2DevToolsProtocolEventReceivedEventArgs_ParameterObjectAsJson(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ParameterObjectAsJson'}
  handleExceptionBegin
  Result := ToPChar(AObj.ParameterObjectAsJson);
  handleExceptionEnd
end;

//property
function CoreWebView2DevToolsProtocolEventReceivedEventArgs_SessionId(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='SessionId'}
  handleExceptionBegin
  Result := ToPChar(AObj.SessionId);
  handleExceptionEnd
end;


exports
  CoreWebView2DevToolsProtocolEventReceivedEventArgs_Create,
  CoreWebView2DevToolsProtocolEventReceivedEventArgs_Initialized,
  CoreWebView2DevToolsProtocolEventReceivedEventArgs_BaseIntf,
  CoreWebView2DevToolsProtocolEventReceivedEventArgs_ParameterObjectAsJson,
  CoreWebView2DevToolsProtocolEventReceivedEventArgs_SessionId;