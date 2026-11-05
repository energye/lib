// constructor
function TCoreWebView2FrameCreatedEventArgs_Create(const aArgs: ICoreWebView2FrameCreatedEventArgs): TCoreWebView2FrameCreatedEventArgs; extdecl;
begin
  {$define handleExceptionID := 3000}
  handleExceptionBegin
  Result := TCoreWebView2FrameCreatedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameCreatedEventArgs_Initialized(AObj: TCoreWebView2FrameCreatedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3001}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameCreatedEventArgs_BaseIntf(AObj: TCoreWebView2FrameCreatedEventArgs; var Result: ICoreWebView2FrameCreatedEventArgs); extdecl;
begin
  {$define handleExceptionID := 3002}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameCreatedEventArgs_Frame(AObj: TCoreWebView2FrameCreatedEventArgs; var Result: ICoreWebView2Frame); extdecl;
begin
  {$define handleExceptionID := 3003}
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;

exports
  TCoreWebView2FrameCreatedEventArgs_Create,
  TCoreWebView2FrameCreatedEventArgs_Initialized,
  TCoreWebView2FrameCreatedEventArgs_BaseIntf,
  TCoreWebView2FrameCreatedEventArgs_Frame;