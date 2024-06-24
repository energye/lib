
//constructor
function CoreWebView2FrameCreatedEventArgs_Create(const aArgs: ICoreWebView2FrameCreatedEventArgs): TCoreWebView2FrameCreatedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2FrameCreatedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2FrameCreatedEventArgs_Initialized(AObj: TCoreWebView2FrameCreatedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameCreatedEventArgs_BaseIntf(AObj: TCoreWebView2FrameCreatedEventArgs; var Result: ICoreWebView2FrameCreatedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameCreatedEventArgs_Frame(AObj: TCoreWebView2FrameCreatedEventArgs; var Result: ICoreWebView2Frame); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Frame;
  handleExceptionEnd
end;


exports
  CoreWebView2FrameCreatedEventArgs_Create,
  CoreWebView2FrameCreatedEventArgs_Initialized,
  CoreWebView2FrameCreatedEventArgs_BaseIntf,
  CoreWebView2FrameCreatedEventArgs_Frame;