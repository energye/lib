// constructor
function TCoreWebView2Profile_Create(const aBaseIntf: ICoreWebView2Profile): TCoreWebView2Profile; extdecl;
begin
  {$define handleExceptionID := 1300}
  handleExceptionBegin
  Result := TCoreWebView2Profile.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_AddAllBrowserEvents(AObj: TCoreWebView2Profile; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 1301}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_ClearBrowsingData(AObj: TCoreWebView2Profile; dataKinds: TWVBrowsingDataKinds; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1302}
  handleExceptionBegin
  Result := AObj.ClearBrowsingData(dataKinds, handler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_ClearBrowsingDataInTimeRange(AObj: TCoreWebView2Profile; dataKinds: TWVBrowsingDataKinds; var startTime: Double; var endTime: Double; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1303}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataInTimeRange(dataKinds, startTime, endTime, handler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_ClearBrowsingDataAll(AObj: TCoreWebView2Profile; const handler: ICoreWebView2ClearBrowsingDataCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1304}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataAll(handler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_SetPermissionState(AObj: TCoreWebView2Profile; PermissionKind: TWVPermissionKind; const origin: PChar; State: TWVPermissionState; const completedHandler: ICoreWebView2SetPermissionStateCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1305}
  handleExceptionBegin
  Result := AObj.SetPermissionState(PermissionKind, PCharToUStr(origin), State, completedHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_GetNonDefaultPermissionSettings(AObj: TCoreWebView2Profile; const completedHandler: ICoreWebView2GetNonDefaultPermissionSettingsCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1306}
  handleExceptionBegin
  Result := AObj.GetNonDefaultPermissionSettings(completedHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_AddBrowserExtension(AObj: TCoreWebView2Profile; const extensionFolderPath: PChar; const completedHandler: ICoreWebView2ProfileAddBrowserExtensionCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1307}
  handleExceptionBegin
  Result := AObj.AddBrowserExtension(PCharToUStr(extensionFolderPath), completedHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_GetBrowserExtensions(AObj: TCoreWebView2Profile; const completedHandler: ICoreWebView2ProfileGetBrowserExtensionsCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 1308}
  handleExceptionBegin
  Result := AObj.GetBrowserExtensions(completedHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2Profile_Delete(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionID := 1309}
  handleExceptionBegin
  Result := AObj.Delete();
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_Initialized(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionID := 1310}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Profile_BaseIntf(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: ICoreWebView2Profile; var Result: ICoreWebView2Profile); extdecl;
begin
  {$define handleExceptionID := 1311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Profile_ProfileName(AObj: TCoreWebView2Profile; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1312}
  handleExceptionBegin
  StringBufferCreate(AObj.ProfileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_IsInPrivateModeEnabled(AObj: TCoreWebView2Profile): LongBool; extdecl;
begin
  {$define handleExceptionID := 1313}
  handleExceptionBegin
  Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Profile_ProfilePath(AObj: TCoreWebView2Profile; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1314}
  handleExceptionBegin
  StringBufferCreate(AObj.ProfilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Profile_DefaultDownloadFolderPath(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadFolderPath := AValue
  end else
    StringBufferCreate(AObj.DefaultDownloadFolderPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_PreferredColorScheme(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: TWVPreferredColorScheme): TWVPreferredColorScheme; extdecl;
begin
  {$define handleExceptionID := 1316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreferredColorScheme := AValue
  end else
    Result := AObj.PreferredColorScheme;
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_PreferredTrackingPreventionLevel(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: TWVTrackingPreventionLevel): TWVTrackingPreventionLevel; extdecl;
begin
  {$define handleExceptionID := 1317}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreferredTrackingPreventionLevel := AValue
  end else
    Result := AObj.PreferredTrackingPreventionLevel;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Profile_CookieManager(AObj: TCoreWebView2Profile; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionID := 1318}
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_IsPasswordAutosaveEnabled(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsPasswordAutosaveEnabled := AValue
  end else
    Result := AObj.IsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2Profile_IsGeneralAutofillEnabled(ASet: LongBool; AObj: TCoreWebView2Profile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1320}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsGeneralAutofillEnabled := AValue
  end else
    Result := AObj.IsGeneralAutofillEnabled;
  handleExceptionEnd
end;

exports
  TCoreWebView2Profile_Create,
  TCoreWebView2Profile_AddAllBrowserEvents,
  TCoreWebView2Profile_ClearBrowsingData,
  TCoreWebView2Profile_ClearBrowsingDataInTimeRange,
  TCoreWebView2Profile_ClearBrowsingDataAll,
  TCoreWebView2Profile_SetPermissionState,
  TCoreWebView2Profile_GetNonDefaultPermissionSettings,
  TCoreWebView2Profile_AddBrowserExtension,
  TCoreWebView2Profile_GetBrowserExtensions,
  TCoreWebView2Profile_Delete,
  TCoreWebView2Profile_Initialized,
  TCoreWebView2Profile_BaseIntf,
  TCoreWebView2Profile_ProfileName,
  TCoreWebView2Profile_IsInPrivateModeEnabled,
  TCoreWebView2Profile_ProfilePath,
  TCoreWebView2Profile_DefaultDownloadFolderPath,
  TCoreWebView2Profile_PreferredColorScheme,
  TCoreWebView2Profile_PreferredTrackingPreventionLevel,
  TCoreWebView2Profile_CookieManager,
  TCoreWebView2Profile_IsPasswordAutosaveEnabled,
  TCoreWebView2Profile_IsGeneralAutofillEnabled;