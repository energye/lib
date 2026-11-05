// constructor
function TCoreWebView2ScreenCaptureStartingEventArgs_Create(const aArgs: ICoreWebView2ScreenCaptureStartingEventArgs): TCoreWebView2ScreenCaptureStartingEventArgs; extdecl;
begin
  {$define handleExceptionID := 8000}
  handleExceptionBegin
  Result := TCoreWebView2ScreenCaptureStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ScreenCaptureStartingEventArgs_Initialized(AObj: TCoreWebView2ScreenCaptureStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 8001}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScreenCaptureStartingEventArgs_BaseIntf(AObj: TCoreWebView2ScreenCaptureStartingEventArgs; var Result: ICoreWebView2ScreenCaptureStartingEventArgs); extdecl;
begin
  {$define handleExceptionID := 8002}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ScreenCaptureStartingEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2ScreenCaptureStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
function TCoreWebView2ScreenCaptureStartingEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2ScreenCaptureStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScreenCaptureStartingEventArgs_OriginalSourceFrameInfo(AObj: TCoreWebView2ScreenCaptureStartingEventArgs; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionID := 8005}
  handleExceptionBegin
  Result := AObj.OriginalSourceFrameInfo;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScreenCaptureStartingEventArgs_Deferral(AObj: TCoreWebView2ScreenCaptureStartingEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 8006}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2ScreenCaptureStartingEventArgs_Create,
  TCoreWebView2ScreenCaptureStartingEventArgs_Initialized,
  TCoreWebView2ScreenCaptureStartingEventArgs_BaseIntf,
  TCoreWebView2ScreenCaptureStartingEventArgs_Cancel,
  TCoreWebView2ScreenCaptureStartingEventArgs_Handled,
  TCoreWebView2ScreenCaptureStartingEventArgs_OriginalSourceFrameInfo,
  TCoreWebView2ScreenCaptureStartingEventArgs_Deferral;