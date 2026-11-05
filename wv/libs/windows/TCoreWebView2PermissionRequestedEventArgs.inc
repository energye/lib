// constructor
function TCoreWebView2PermissionRequestedEventArgs_Create(const aArgs: ICoreWebView2PermissionRequestedEventArgs): TCoreWebView2PermissionRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2400}
  handleExceptionBegin
  Result := TCoreWebView2PermissionRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// constructor
function TCoreWebView2PermissionRequestedEventArgs_CreateWithPermissionRequestedEventArgs2(const aArgs: ICoreWebView2PermissionRequestedEventArgs2): TCoreWebView2PermissionRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2401}
  handleExceptionBegin
  Result := TCoreWebView2PermissionRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_Initialized(AObj: TCoreWebView2PermissionRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2402}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionRequestedEventArgs_BaseIntf(AObj: TCoreWebView2PermissionRequestedEventArgs; var Result: ICoreWebView2PermissionRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2403}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionRequestedEventArgs_URI(AObj: TCoreWebView2PermissionRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2404}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_State(ASet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: TWVPermissionState): TWVPermissionState; extdecl;
begin
  {$define handleExceptionID := 2405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_PermissionKind(AObj: TCoreWebView2PermissionRequestedEventArgs): TWVPermissionKind; extdecl;
begin
  {$define handleExceptionID := 2406}
  handleExceptionBegin
  Result := AObj.PermissionKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_IsUserInitiated(AObj: TCoreWebView2PermissionRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2407}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionRequestedEventArgs_Deferral(AObj: TCoreWebView2PermissionRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 2408}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionRequestedEventArgs_SavesInProfile(ASet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SavesInProfile := AValue
  end else
    Result := AObj.SavesInProfile;
  handleExceptionEnd
end;

exports
  TCoreWebView2PermissionRequestedEventArgs_Create,
  TCoreWebView2PermissionRequestedEventArgs_CreateWithPermissionRequestedEventArgs2,
  TCoreWebView2PermissionRequestedEventArgs_Initialized,
  TCoreWebView2PermissionRequestedEventArgs_BaseIntf,
  TCoreWebView2PermissionRequestedEventArgs_URI,
  TCoreWebView2PermissionRequestedEventArgs_State,
  TCoreWebView2PermissionRequestedEventArgs_PermissionKind,
  TCoreWebView2PermissionRequestedEventArgs_IsUserInitiated,
  TCoreWebView2PermissionRequestedEventArgs_Deferral,
  TCoreWebView2PermissionRequestedEventArgs_Handled,
  TCoreWebView2PermissionRequestedEventArgs_SavesInProfile;