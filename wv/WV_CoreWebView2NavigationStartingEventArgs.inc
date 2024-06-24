
//constructor
function CoreWebView2NavigationStartingEventArgs_Create(const aArgs: ICoreWebView2NavigationStartingEventArgs): TCoreWebView2NavigationStartingEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2NavigationStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_Initialized(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NavigationStartingEventArgs_BaseIntf(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: ICoreWebView2NavigationStartingEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_URI(AObj: TCoreWebView2NavigationStartingEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_IsUserInitiated(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_IsRedirected(AObj: TCoreWebView2NavigationStartingEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsRedirected;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_Cancel(AIsSet: LongBool; AObj: TCoreWebView2NavigationStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cancel := AValue;
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NavigationStartingEventArgs_NavigationID(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigationID;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NavigationStartingEventArgs_RequestHeaders(AObj: TCoreWebView2NavigationStartingEventArgs; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.RequestHeaders;
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_AdditionalAllowedFrameAncestors(AIsSet: LongBool; AObj: TCoreWebView2NavigationStartingEventArgs; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AdditionalAllowedFrameAncestors := AValue;
  end else
    Result := ToPChar(AObj.AdditionalAllowedFrameAncestors);
  handleExceptionEnd
end;

//property
function CoreWebView2NavigationStartingEventArgs_NavigationKind(AObj: TCoreWebView2NavigationStartingEventArgs): TWVNavigationKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigationKind;
  handleExceptionEnd
end;


exports
  CoreWebView2NavigationStartingEventArgs_Create,
  CoreWebView2NavigationStartingEventArgs_Initialized,
  CoreWebView2NavigationStartingEventArgs_BaseIntf,
  CoreWebView2NavigationStartingEventArgs_URI,
  CoreWebView2NavigationStartingEventArgs_IsUserInitiated,
  CoreWebView2NavigationStartingEventArgs_IsRedirected,
  CoreWebView2NavigationStartingEventArgs_Cancel,
  CoreWebView2NavigationStartingEventArgs_NavigationID,
  CoreWebView2NavigationStartingEventArgs_RequestHeaders,
  CoreWebView2NavigationStartingEventArgs_AdditionalAllowedFrameAncestors,
  CoreWebView2NavigationStartingEventArgs_NavigationKind;