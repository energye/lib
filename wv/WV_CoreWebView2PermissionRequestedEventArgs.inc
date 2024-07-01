
//constructor
function CoreWebView2PermissionRequestedEventArgs_Create(const aArgs: ICoreWebView2PermissionRequestedEventArgs): TCoreWebView2PermissionRequestedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PermissionRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_Initialized(AObj: TCoreWebView2PermissionRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PermissionRequestedEventArgs_BaseIntf(AObj: TCoreWebView2PermissionRequestedEventArgs; var Result: ICoreWebView2PermissionRequestedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_URI(AObj: TCoreWebView2PermissionRequestedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='URI'}
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_State(AIsSet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: TWVPermissionState): TWVPermissionState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State := AValue;
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_PermissionKind(AObj: TCoreWebView2PermissionRequestedEventArgs): TWVPermissionKind; extdecl;
begin
  {$define handleExceptionFuncName :='PermissionKind'}
  handleExceptionBegin
  Result := AObj.PermissionKind;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_IsUserInitiated(AObj: TCoreWebView2PermissionRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsUserInitiated'}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PermissionRequestedEventArgs_Deferral(AObj: TCoreWebView2PermissionRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionFuncName :='Deferral'}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Handled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionRequestedEventArgs_SavesInProfile(AIsSet: LongBool; AObj: TCoreWebView2PermissionRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SavesInProfile'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SavesInProfile := AValue;
  end else
    Result := AObj.SavesInProfile;
  handleExceptionEnd
end;


exports
  CoreWebView2PermissionRequestedEventArgs_Create,
  CoreWebView2PermissionRequestedEventArgs_Initialized,
  CoreWebView2PermissionRequestedEventArgs_BaseIntf,
  CoreWebView2PermissionRequestedEventArgs_URI,
  CoreWebView2PermissionRequestedEventArgs_State,
  CoreWebView2PermissionRequestedEventArgs_PermissionKind,
  CoreWebView2PermissionRequestedEventArgs_IsUserInitiated,
  CoreWebView2PermissionRequestedEventArgs_Deferral,
  CoreWebView2PermissionRequestedEventArgs_Handled,
  CoreWebView2PermissionRequestedEventArgs_SavesInProfile;