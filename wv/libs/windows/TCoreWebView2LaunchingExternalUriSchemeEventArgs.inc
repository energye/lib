// constructor
function TCoreWebView2LaunchingExternalUriSchemeEventArgs_Create(const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs): TCoreWebView2LaunchingExternalUriSchemeEventArgs; extdecl;
begin
  {$define handleExceptionID := 3600}
  handleExceptionBegin
  Result := TCoreWebView2LaunchingExternalUriSchemeEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2LaunchingExternalUriSchemeEventArgs_Initialized(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3601}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2LaunchingExternalUriSchemeEventArgs_BaseIntf(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; var Result: ICoreWebView2LaunchingExternalUriSchemeEventArgs); extdecl;
begin
  {$define handleExceptionID := 3602}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2LaunchingExternalUriSchemeEventArgs_Uri(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3603}
  handleExceptionBegin
  StringBufferCreate(AObj.Uri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2LaunchingExternalUriSchemeEventArgs_InitiatingOrigin(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3604}
  handleExceptionBegin
  StringBufferCreate(AObj.InitiatingOrigin, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2LaunchingExternalUriSchemeEventArgs_IsUserInitiated(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3605}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

// property
function TCoreWebView2LaunchingExternalUriSchemeEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2LaunchingExternalUriSchemeEventArgs_Deferral(AObj: TCoreWebView2LaunchingExternalUriSchemeEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3607}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_Create,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_Initialized,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_BaseIntf,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_Uri,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_InitiatingOrigin,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_IsUserInitiated,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_Cancel,
  TCoreWebView2LaunchingExternalUriSchemeEventArgs_Deferral;