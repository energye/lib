// constructor
function TCoreWebView2Settings_Create(const aBaseIntf: ICoreWebView2Settings): TCoreWebView2Settings; extdecl;
begin
  {$define handleExceptionID := 900}
  handleExceptionBegin
  Result := TCoreWebView2Settings.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_Initialized(AObj: TCoreWebView2Settings): LongBool; extdecl;
begin
  {$define handleExceptionID := 901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Settings_BaseIntf(AObj: TCoreWebView2Settings; var Result: ICoreWebView2Settings); extdecl;
begin
  {$define handleExceptionID := 902}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsBuiltInErrorPageEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsBuiltInErrorPageEnabled := AValue
  end else
    Result := AObj.IsBuiltInErrorPageEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_AreDefaultContextMenusEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreDefaultContextMenusEnabled := AValue
  end else
    Result := AObj.AreDefaultContextMenusEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_AreDefaultScriptDialogsEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreDefaultScriptDialogsEnabled := AValue
  end else
    Result := AObj.AreDefaultScriptDialogsEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_AreDevToolsEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreDevToolsEnabled := AValue
  end else
    Result := AObj.AreDevToolsEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsScriptEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsScriptEnabled := AValue
  end else
    Result := AObj.IsScriptEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsStatusBarEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsStatusBarEnabled := AValue
  end else
    Result := AObj.IsStatusBarEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsWebMessageEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsWebMessageEnabled := AValue
  end else
    Result := AObj.IsWebMessageEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsZoomControlEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsZoomControlEnabled := AValue
  end else
    Result := AObj.IsZoomControlEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_AreHostObjectsAllowed(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreHostObjectsAllowed := AValue
  end else
    Result := AObj.AreHostObjectsAllowed;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Settings_UserAgent(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserAgent := AValue
  end else
    StringBufferCreate(AObj.UserAgent, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_AreBrowserAcceleratorKeysEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreBrowserAcceleratorKeysEnabled := AValue
  end else
    Result := AObj.AreBrowserAcceleratorKeysEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsPasswordAutosaveEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsPasswordAutosaveEnabled := AValue
  end else
    Result := AObj.IsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsGeneralAutofillEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsGeneralAutofillEnabled := AValue
  end else
    Result := AObj.IsGeneralAutofillEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsPinchZoomEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsPinchZoomEnabled := AValue
  end else
    Result := AObj.IsPinchZoomEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsSwipeNavigationEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsSwipeNavigationEnabled := AValue
  end else
    Result := AObj.IsSwipeNavigationEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_HiddenPdfToolbarItems(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: TWVPDFToolbarItems): TWVPDFToolbarItems; extdecl;
begin
  {$define handleExceptionID := 918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HiddenPdfToolbarItems := AValue
  end else
    Result := AObj.HiddenPdfToolbarItems;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsReputationCheckingRequired(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsReputationCheckingRequired := AValue
  end else
    Result := AObj.IsReputationCheckingRequired;
  handleExceptionEnd
end;

// property
function TCoreWebView2Settings_IsNonClientRegionSupportEnabled(ASet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsNonClientRegionSupportEnabled := AValue
  end else
    Result := AObj.IsNonClientRegionSupportEnabled;
  handleExceptionEnd
end;

exports
  TCoreWebView2Settings_Create,
  TCoreWebView2Settings_Initialized,
  TCoreWebView2Settings_BaseIntf,
  TCoreWebView2Settings_IsBuiltInErrorPageEnabled,
  TCoreWebView2Settings_AreDefaultContextMenusEnabled,
  TCoreWebView2Settings_AreDefaultScriptDialogsEnabled,
  TCoreWebView2Settings_AreDevToolsEnabled,
  TCoreWebView2Settings_IsScriptEnabled,
  TCoreWebView2Settings_IsStatusBarEnabled,
  TCoreWebView2Settings_IsWebMessageEnabled,
  TCoreWebView2Settings_IsZoomControlEnabled,
  TCoreWebView2Settings_AreHostObjectsAllowed,
  TCoreWebView2Settings_UserAgent,
  TCoreWebView2Settings_AreBrowserAcceleratorKeysEnabled,
  TCoreWebView2Settings_IsPasswordAutosaveEnabled,
  TCoreWebView2Settings_IsGeneralAutofillEnabled,
  TCoreWebView2Settings_IsPinchZoomEnabled,
  TCoreWebView2Settings_IsSwipeNavigationEnabled,
  TCoreWebView2Settings_HiddenPdfToolbarItems,
  TCoreWebView2Settings_IsReputationCheckingRequired,
  TCoreWebView2Settings_IsNonClientRegionSupportEnabled;