
//constructor
function CoreWebView2LaunchingExternalUriSchemeEventArgs_Create(const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs): TCoreWebView2LaunchingExternalUriSchemeEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2LaunchingExternalUriSchemeEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2LaunchingExternalUriSchemeEventArgs_Initialized(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2LaunchingExternalUriSchemeEventArgs_BaseIntf(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; var Result: ICoreWebView2LaunchingExternalUriSchemeEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2LaunchingExternalUriSchemeEventArgs_Uri(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Uri);
  handleExceptionEnd
end;

//property
function CoreWebView2LaunchingExternalUriSchemeEventArgs_InitiatingOrigin(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.InitiatingOrigin);
  handleExceptionEnd
end;

//property
function CoreWebView2LaunchingExternalUriSchemeEventArgs_IsUserInitiated(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

//property
function CoreWebView2LaunchingExternalUriSchemeEventArgs_Cancel(AIsSet: LongBool; AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; AValue: LongBool): LongBool; extdecl;
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
procedure CoreWebView2LaunchingExternalUriSchemeEventArgs_Deferral(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2LaunchingExternalUriSchemeEventArgs_Create,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_Initialized,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_BaseIntf,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_Uri,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_InitiatingOrigin,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_IsUserInitiated,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_Cancel,
  CoreWebView2LaunchingExternalUriSchemeEventArgs_Deferral;