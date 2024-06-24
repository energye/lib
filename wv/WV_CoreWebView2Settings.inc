
//constructor
function CoreWebView2Settings_Create(const aBaseIntf: ICoreWebView2Settings): TCoreWebView2Settings; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Settings.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_Initialized(AObj: TCoreWebView2Settings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Settings_BaseIntf(AObj: TCoreWebView2Settings; var Result: ICoreWebView2Settings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsBuiltInErrorPageEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsBuiltInErrorPageEnabled := AValue;
  end else
    Result := AObj.IsBuiltInErrorPageEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_AreDefaultContextMenusEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreDefaultContextMenusEnabled := AValue;
  end else
    Result := AObj.AreDefaultContextMenusEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_AreDefaultScriptDialogsEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreDefaultScriptDialogsEnabled := AValue;
  end else
    Result := AObj.AreDefaultScriptDialogsEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_AreDevToolsEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreDevToolsEnabled := AValue;
  end else
    Result := AObj.AreDevToolsEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsScriptEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsScriptEnabled := AValue;
  end else
    Result := AObj.IsScriptEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsStatusBarEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsStatusBarEnabled := AValue;
  end else
    Result := AObj.IsStatusBarEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsWebMessageEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsWebMessageEnabled := AValue;
  end else
    Result := AObj.IsWebMessageEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsZoomControlEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsZoomControlEnabled := AValue;
  end else
    Result := AObj.IsZoomControlEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_AreHostObjectsAllowed(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreHostObjectsAllowed := AValue;
  end else
    Result := AObj.AreHostObjectsAllowed;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_UserAgent(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserAgent := AValue;
  end else
    Result := ToPChar(AObj.UserAgent);
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_AreBrowserAcceleratorKeysEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreBrowserAcceleratorKeysEnabled := AValue;
  end else
    Result := AObj.AreBrowserAcceleratorKeysEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsPasswordAutosaveEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsPasswordAutosaveEnabled := AValue;
  end else
    Result := AObj.IsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsGeneralAutofillEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsGeneralAutofillEnabled := AValue;
  end else
    Result := AObj.IsGeneralAutofillEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsPinchZoomEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsPinchZoomEnabled := AValue;
  end else
    Result := AObj.IsPinchZoomEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsSwipeNavigationEnabled(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsSwipeNavigationEnabled := AValue;
  end else
    Result := AObj.IsSwipeNavigationEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_HiddenPdfToolbarItems(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: TWVPDFToolbarItems): TWVPDFToolbarItems; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HiddenPdfToolbarItems := AValue;
  end else
    Result := AObj.HiddenPdfToolbarItems;
  handleExceptionEnd
end;

//property
function CoreWebView2Settings_IsReputationCheckingRequired(AIsSet: LongBool; AObj: TCoreWebView2Settings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsReputationCheckingRequired := AValue;
  end else
    Result := AObj.IsReputationCheckingRequired;
  handleExceptionEnd
end;


exports
  CoreWebView2Settings_Create,
  CoreWebView2Settings_Initialized,
  CoreWebView2Settings_BaseIntf,
  CoreWebView2Settings_IsBuiltInErrorPageEnabled,
  CoreWebView2Settings_AreDefaultContextMenusEnabled,
  CoreWebView2Settings_AreDefaultScriptDialogsEnabled,
  CoreWebView2Settings_AreDevToolsEnabled,
  CoreWebView2Settings_IsScriptEnabled,
  CoreWebView2Settings_IsStatusBarEnabled,
  CoreWebView2Settings_IsWebMessageEnabled,
  CoreWebView2Settings_IsZoomControlEnabled,
  CoreWebView2Settings_AreHostObjectsAllowed,
  CoreWebView2Settings_UserAgent,
  CoreWebView2Settings_AreBrowserAcceleratorKeysEnabled,
  CoreWebView2Settings_IsPasswordAutosaveEnabled,
  CoreWebView2Settings_IsGeneralAutofillEnabled,
  CoreWebView2Settings_IsPinchZoomEnabled,
  CoreWebView2Settings_IsSwipeNavigationEnabled,
  CoreWebView2Settings_HiddenPdfToolbarItems,
  CoreWebView2Settings_IsReputationCheckingRequired;