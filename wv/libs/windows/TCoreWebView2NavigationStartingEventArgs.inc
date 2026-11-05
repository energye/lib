// constructor
function TCoreWebView2NavigationStartingEventArgs_Create(const aArgs: ICoreWebView2NavigationStartingEventArgs): TCoreWebView2NavigationStartingEventArgs; extdecl;
begin
  {$define handleExceptionID := 1700}
  handleExceptionBegin
  Result := TCoreWebView2NavigationStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationStartingEventArgs_Initialized(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1701}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationStartingEventArgs_BaseIntf(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: ICoreWebView2NavigationStartingEventArgs); extdecl;
begin
  {$define handleExceptionID := 1702}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationStartingEventArgs_URI(AObj: TCoreWebView2NavigationStartingEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1703}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationStartingEventArgs_IsUserInitiated(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1704}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationStartingEventArgs_IsRedirected(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1705}
  handleExceptionBegin
  Result := AObj.IsRedirected;
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationStartingEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2NavigationStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationStartingEventArgs_NavigationID(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 1707}
  handleExceptionBegin
  Result := AObj.NavigationID;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationStartingEventArgs_RequestHeaders(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  {$define handleExceptionID := 1708}
  handleExceptionBegin
  Result := AObj.RequestHeaders;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NavigationStartingEventArgs_AdditionalAllowedFrameAncestors(ASet: LongBool; AObj: TCoreWebView2NavigationStartingEventArgs; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AdditionalAllowedFrameAncestors := AValue
  end else
    StringBufferCreate(AObj.AdditionalAllowedFrameAncestors, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2NavigationStartingEventArgs_NavigationKind(AObj: TCoreWebView2NavigationStartingEventArgs): TWVNavigationKind; extdecl;
begin
  {$define handleExceptionID := 1710}
  handleExceptionBegin
  Result := AObj.NavigationKind;
  handleExceptionEnd
end;

exports
  TCoreWebView2NavigationStartingEventArgs_Create,
  TCoreWebView2NavigationStartingEventArgs_Initialized,
  TCoreWebView2NavigationStartingEventArgs_BaseIntf,
  TCoreWebView2NavigationStartingEventArgs_URI,
  TCoreWebView2NavigationStartingEventArgs_IsUserInitiated,
  TCoreWebView2NavigationStartingEventArgs_IsRedirected,
  TCoreWebView2NavigationStartingEventArgs_Cancel,
  TCoreWebView2NavigationStartingEventArgs_NavigationID,
  TCoreWebView2NavigationStartingEventArgs_RequestHeaders,
  TCoreWebView2NavigationStartingEventArgs_AdditionalAllowedFrameAncestors,
  TCoreWebView2NavigationStartingEventArgs_NavigationKind;