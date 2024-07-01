
//constructor
function CoreWebView2Profile_Create(const aBaseIntf: ICoreWebView2Profile): TCoreWebView2Profile; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2Profile.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_Initialized(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Profile_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: ICoreWebView2Profile; var Result: ICoreWebView2Profile); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_ProfileName(AObj: TCoreWebView2Profile): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProfileName'}
  handleExceptionBegin
  Result := ToPChar(AObj.ProfileName);
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_IsInPrivateModeEnabled(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsInPrivateModeEnabled'}
  handleExceptionBegin
  Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_ProfilePath(AObj: TCoreWebView2Profile): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProfilePath'}
  handleExceptionBegin
  Result := ToPChar(AObj.ProfilePath);
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_DefaultDownloadFolderPath(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultDownloadFolderPath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadFolderPath := AValue;
  end else
    Result := ToPChar(AObj.DefaultDownloadFolderPath);
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_PreferredColorScheme(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: TWVPreferredColorScheme): TWVPreferredColorScheme; extdecl;
begin
  {$define handleExceptionFuncName :='PreferredColorScheme'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreferredColorScheme := AValue;
  end else
    Result := AObj.PreferredColorScheme;
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_PreferredTrackingPreventionLevel(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: TWVTrackingPreventionLevel): TWVTrackingPreventionLevel; extdecl;
begin
  {$define handleExceptionFuncName :='PreferredTrackingPreventionLevel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreferredTrackingPreventionLevel := AValue;
  end else
    Result := AObj.PreferredTrackingPreventionLevel;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Profile_CookieManager(AObj: TCoreWebView2Profile; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionFuncName :='CookieManager'}
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_IsPasswordAutosaveEnabled(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPasswordAutosaveEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsPasswordAutosaveEnabled := AValue;
  end else
    Result := AObj.IsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2Profile_IsGeneralAutofillEnabled(AIsSet: LongBool; AObj: TCoreWebView2Profile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsGeneralAutofillEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsGeneralAutofillEnabled := AValue;
  end else
    Result := AObj.IsGeneralAutofillEnabled;
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_AddAllBrowserEvents(AObj: TCoreWebView2Profile; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddAllBrowserEvents'}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_ClearBrowsingData(AObj: TCoreWebView2Profile; dataKinds: TWVBrowsingDataKinds; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearBrowsingData'}
  handleExceptionBegin
  Result := AObj.ClearBrowsingData(dataKinds, handler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_ClearBrowsingDataInTimeRange(AObj: TCoreWebView2Profile; dataKinds: TWVBrowsingDataKinds; var startTime, endTime: TDateTime; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearBrowsingDataInTimeRange'}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataInTimeRange(dataKinds, startTime, endTime, handler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_ClearBrowsingDataAll(AObj: TCoreWebView2Profile; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearBrowsingDataAll'}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataAll(handler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_SetPermissionState(AObj: TCoreWebView2Profile; PermissionKind: TWVPermissionKind; const origin: PChar; State: TWVPermissionState; const completedHandler: ICoreWebView2SetPermissionStateCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetPermissionState'}
  handleExceptionBegin
  Result := AObj.SetPermissionState(PermissionKind, origin, State, completedHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_GetNonDefaultPermissionSettings(AObj: TCoreWebView2Profile; const completedHandler: ICoreWebView2GetNonDefaultPermissionSettingsCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetNonDefaultPermissionSettings'}
  handleExceptionBegin
  Result := AObj.GetNonDefaultPermissionSettings(completedHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_AddBrowserExtension(AObj: TCoreWebView2Profile; const extensionFolderPath: PChar; const completedHandler: ICoreWebView2ProfileAddBrowserExtensionCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddBrowserExtension'}
  handleExceptionBegin
  Result := AObj.AddBrowserExtension(extensionFolderPath, completedHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_GetBrowserExtensions(AObj: TCoreWebView2Profile; const completedHandler: ICoreWebView2ProfileGetBrowserExtensionsCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowserExtensions'}
  handleExceptionBegin
  Result := AObj.GetBrowserExtensions(completedHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2Profile_Delete(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Delete'}
  handleExceptionBegin
  Result := AObj.Delete();
  handleExceptionEnd
end;


exports
  CoreWebView2Profile_Create,
  CoreWebView2Profile_Initialized,
  CoreWebView2Profile_BaseIntf,
  CoreWebView2Profile_ProfileName,
  CoreWebView2Profile_IsInPrivateModeEnabled,
  CoreWebView2Profile_ProfilePath,
  CoreWebView2Profile_DefaultDownloadFolderPath,
  CoreWebView2Profile_PreferredColorScheme,
  CoreWebView2Profile_PreferredTrackingPreventionLevel,
  CoreWebView2Profile_CookieManager,
  CoreWebView2Profile_IsPasswordAutosaveEnabled,
  CoreWebView2Profile_IsGeneralAutofillEnabled,
  CoreWebView2Profile_AddAllBrowserEvents,
  CoreWebView2Profile_ClearBrowsingData,
  CoreWebView2Profile_ClearBrowsingDataInTimeRange,
  CoreWebView2Profile_ClearBrowsingDataAll,
  CoreWebView2Profile_SetPermissionState,
  CoreWebView2Profile_GetNonDefaultPermissionSettings,
  CoreWebView2Profile_AddBrowserExtension,
  CoreWebView2Profile_GetBrowserExtensions,
  CoreWebView2Profile_Delete;