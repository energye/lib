// constructor
function TCoreWebView2ProcessFailedEventArgs_Create(const aArgs: ICoreWebView2ProcessFailedEventArgs): TCoreWebView2ProcessFailedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2500}
  handleExceptionBegin
  Result := TCoreWebView2ProcessFailedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessFailedEventArgs_Initialized(AObj: TCoreWebView2ProcessFailedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2501}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessFailedEventArgs_BaseIntf(AObj: TCoreWebView2ProcessFailedEventArgs; var Result: ICoreWebView2ProcessFailedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2502}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessFailedEventArgs_ProcessFailedKind(AObj: TCoreWebView2ProcessFailedEventArgs): TWVProcessFailedKind; extdecl;
begin
  {$define handleExceptionID := 2503}
  handleExceptionBegin
  Result := AObj.ProcessFailedKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessFailedEventArgs_Reason(AObj: TCoreWebView2ProcessFailedEventArgs): TWVProcessFailedReason; extdecl;
begin
  {$define handleExceptionID := 2504}
  handleExceptionBegin
  Result := AObj.Reason;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessFailedEventArgs_ExtiCode(AObj: TCoreWebView2ProcessFailedEventArgs): integer; extdecl;
begin
  {$define handleExceptionID := 2505}
  handleExceptionBegin
  Result := AObj.ExtiCode;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessFailedEventArgs_ProcessDescription(AObj: TCoreWebView2ProcessFailedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2506}
  handleExceptionBegin
  StringBufferCreate(AObj.ProcessDescription, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessFailedEventArgs_FrameInfosForFailedProcess(AObj: TCoreWebView2ProcessFailedEventArgs; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  {$define handleExceptionID := 2507}
  handleExceptionBegin
  Result := AObj.FrameInfosForFailedProcess;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessFailedEventArgs_FailureSourceModulePath(AObj: TCoreWebView2ProcessFailedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2508}
  handleExceptionBegin
  StringBufferCreate(AObj.FailureSourceModulePath, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2ProcessFailedEventArgs_Create,
  TCoreWebView2ProcessFailedEventArgs_Initialized,
  TCoreWebView2ProcessFailedEventArgs_BaseIntf,
  TCoreWebView2ProcessFailedEventArgs_ProcessFailedKind,
  TCoreWebView2ProcessFailedEventArgs_Reason,
  TCoreWebView2ProcessFailedEventArgs_ExtiCode,
  TCoreWebView2ProcessFailedEventArgs_ProcessDescription,
  TCoreWebView2ProcessFailedEventArgs_FrameInfosForFailedProcess,
  TCoreWebView2ProcessFailedEventArgs_FailureSourceModulePath;