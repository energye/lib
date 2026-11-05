// constructor
function TCoreWebView2DevToolsProtocolEventReceivedEventArgs_Create(const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs): TCoreWebView2DevToolsProtocolEventReceivedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2700}
  handleExceptionBegin
  Result := TCoreWebView2DevToolsProtocolEventReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2DevToolsProtocolEventReceivedEventArgs_Initialized(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2701}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DevToolsProtocolEventReceivedEventArgs_BaseIntf(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs; var Result: ICoreWebView2DevToolsProtocolEventReceivedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2702}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DevToolsProtocolEventReceivedEventArgs_ParameterObjectAsJson(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2703}
  handleExceptionBegin
  StringBufferCreate(AObj.ParameterObjectAsJson, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DevToolsProtocolEventReceivedEventArgs_SessionId(AObj: TCoreWebView2DevToolsProtocolEventReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2704}
  handleExceptionBegin
  StringBufferCreate(AObj.SessionId, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2DevToolsProtocolEventReceivedEventArgs_Create,
  TCoreWebView2DevToolsProtocolEventReceivedEventArgs_Initialized,
  TCoreWebView2DevToolsProtocolEventReceivedEventArgs_BaseIntf,
  TCoreWebView2DevToolsProtocolEventReceivedEventArgs_ParameterObjectAsJson,
  TCoreWebView2DevToolsProtocolEventReceivedEventArgs_SessionId;