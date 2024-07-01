
//constructor
function CoreWebView2ProcessFailedEventArgs_Create(const aArgs: ICoreWebView2ProcessFailedEventArgs): TCoreWebView2ProcessFailedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ProcessFailedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessFailedEventArgs_Initialized(AObj: TCoreWebView2ProcessFailedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessFailedEventArgs_BaseIntf(AObj: TCoreWebView2ProcessFailedEventArgs; var Result: ICoreWebView2ProcessFailedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessFailedEventArgs_ProcessFailedKind(AObj: TCoreWebView2ProcessFailedEventArgs): TWVProcessFailedKind; extdecl;
begin
  {$define handleExceptionFuncName :='ProcessFailedKind'}
  handleExceptionBegin
  Result := AObj.ProcessFailedKind;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessFailedEventArgs_Reason(AObj: TCoreWebView2ProcessFailedEventArgs): TWVProcessFailedReason; extdecl;
begin
  {$define handleExceptionFuncName :='Reason'}
  handleExceptionBegin
  Result := AObj.Reason;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessFailedEventArgs_ExtiCode(AObj: TCoreWebView2ProcessFailedEventArgs): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ExtiCode'}
  handleExceptionBegin
  Result := AObj.ExtiCode;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessFailedEventArgs_ProcessDescription(AObj: TCoreWebView2ProcessFailedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProcessDescription'}
  handleExceptionBegin
  Result := ToPChar(AObj.ProcessDescription);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessFailedEventArgs_FrameInfosForFailedProcess(AObj: TCoreWebView2ProcessFailedEventArgs; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  {$define handleExceptionFuncName :='FrameInfosForFailedProcess'}
  handleExceptionBegin
  Result := AObj.FrameInfosForFailedProcess;
  handleExceptionEnd
end;


exports
  CoreWebView2ProcessFailedEventArgs_Create,
  CoreWebView2ProcessFailedEventArgs_Initialized,
  CoreWebView2ProcessFailedEventArgs_BaseIntf,
  CoreWebView2ProcessFailedEventArgs_ProcessFailedKind,
  CoreWebView2ProcessFailedEventArgs_Reason,
  CoreWebView2ProcessFailedEventArgs_ExtiCode,
  CoreWebView2ProcessFailedEventArgs_ProcessDescription,
  CoreWebView2ProcessFailedEventArgs_FrameInfosForFailedProcess;