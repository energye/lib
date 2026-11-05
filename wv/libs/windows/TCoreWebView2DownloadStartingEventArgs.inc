// constructor
function TCoreWebView2DownloadStartingEventArgs_Create(const aArgs: ICoreWebView2DownloadStartingEventArgs): TCoreWebView2DownloadStartingEventArgs; extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  Result := TCoreWebView2DownloadStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadStartingEventArgs_Initialized(AObj: TCoreWebView2DownloadStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadStartingEventArgs_BaseIntf(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2DownloadStartingEventArgs); extdecl;
begin
  {$define handleExceptionID := 3102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadStartingEventArgs_DownloadOperation(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2DownloadOperation); extdecl;
begin
  {$define handleExceptionID := 3103}
  handleExceptionBegin
  Result := AObj.DownloadOperation;
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadStartingEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadStartingEventArgs_ResultFilePath(ASet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResultFilePath := AValue
  end else
    StringBufferCreate(AObj.ResultFilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadStartingEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadStartingEventArgs_Deferral(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3107}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2DownloadStartingEventArgs_Create,
  TCoreWebView2DownloadStartingEventArgs_Initialized,
  TCoreWebView2DownloadStartingEventArgs_BaseIntf,
  TCoreWebView2DownloadStartingEventArgs_DownloadOperation,
  TCoreWebView2DownloadStartingEventArgs_Cancel,
  TCoreWebView2DownloadStartingEventArgs_ResultFilePath,
  TCoreWebView2DownloadStartingEventArgs_Handled,
  TCoreWebView2DownloadStartingEventArgs_Deferral;