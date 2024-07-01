
//property
function WVBrowserBase_Initialized(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2PrintSettings(AObj: TWVBrowserBase; var Result: TCoreWebView2PrintSettings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2PrintSettings;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2Settings(AObj: TWVBrowserBase; var Result: TCoreWebView2Settings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2Settings;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2Environment(AObj: TWVBrowserBase; var Result: TCoreWebView2Environment); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2Environment;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2Controller(AObj: TWVBrowserBase; var Result: TCoreWebView2Controller); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2Controller;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2CompositionController(AObj: TWVBrowserBase; var Result: TCoreWebView2CompositionController); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2CompositionController;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CoreWebView2(AObj: TWVBrowserBase; var Result: TCoreWebView2); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_Profile(AObj: TWVBrowserBase; var Result: TCoreWebView2Profile); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Profile;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultURL(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultURL := AValue;
  end else
    Result := ToPChar(AObj.DefaultURL);
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsNavigating(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsNavigating;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_ZoomPct(AIsSet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomPct := AValue;
  end else
    Result := AObj.ZoomPct;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ZoomStep(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: byte): byte; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomStep := AValue;
  end else
    Result := AObj.ZoomStep;
  handleExceptionEnd
end;

//property
function WVBrowserBase_Widget0CompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Widget0CompHWND;
  handleExceptionEnd
end;

//property
function WVBrowserBase_Widget1CompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Widget1CompHWND;
  handleExceptionEnd
end;

//property
function WVBrowserBase_RenderCompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RenderCompHWND;
  handleExceptionEnd
end;

//property
function WVBrowserBase_D3DWindowCompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.D3DWindowCompHWND;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ScreenScale(AObj: TWVBrowserBase): single; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScreenScale;
  handleExceptionEnd
end;

//property
function WVBrowserBase_Offline(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Offline := AValue;
  end else
    Result := AObj.Offline;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IgnoreCertificateErrors(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IgnoreCertificateErrors := AValue;
  end else
    Result := AObj.IgnoreCertificateErrors;
  handleExceptionEnd
end;

//property
function WVBrowserBase_BrowserExecPath(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BrowserExecPath := AValue;
  end else
    Result := ToPChar(AObj.BrowserExecPath);
  handleExceptionEnd
end;

//property
function WVBrowserBase_UserDataFolder(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserDataFolder := AValue;
  end else
    Result := ToPChar(AObj.UserDataFolder);
  handleExceptionEnd
end;

//property
function WVBrowserBase_AdditionalBrowserArguments(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AdditionalBrowserArguments := AValue;
  end else
    Result := ToPChar(AObj.AdditionalBrowserArguments);
  handleExceptionEnd
end;

//property
function WVBrowserBase_Language(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Language := AValue;
  end else
    Result := ToPChar(AObj.Language);
  handleExceptionEnd
end;

//property
function WVBrowserBase_TargetCompatibleBrowserVersion(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TargetCompatibleBrowserVersion := AValue;
  end else
    Result := ToPChar(AObj.TargetCompatibleBrowserVersion);
  handleExceptionEnd
end;

//property
function WVBrowserBase_AllowSingleSignOnUsingOSPrimaryAccount(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowSingleSignOnUsingOSPrimaryAccount := AValue;
  end else
    Result := AObj.AllowSingleSignOnUsingOSPrimaryAccount;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ExclusiveUserDataFolderAccess(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExclusiveUserDataFolderAccess := AValue;
  end else
    Result := AObj.ExclusiveUserDataFolderAccess;
  handleExceptionEnd
end;

//property
function WVBrowserBase_CustomCrashReportingEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomCrashReportingEnabled := AValue;
  end else
    Result := AObj.CustomCrashReportingEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_EnableTrackingPrevention(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableTrackingPrevention := AValue;
  end else
    Result := AObj.EnableTrackingPrevention;
  handleExceptionEnd
end;

//property
function WVBrowserBase_AreBrowserExtensionsEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreBrowserExtensionsEnabled := AValue;
  end else
    Result := AObj.AreBrowserExtensionsEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_BrowserVersionInfo(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.BrowserVersionInfo);
  handleExceptionEnd
end;

//property
function WVBrowserBase_BrowserProcessID(AObj: TWVBrowserBase): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BrowserProcessID;
  handleExceptionEnd
end;

//property
function WVBrowserBase_CanGoBack(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

//property
function WVBrowserBase_CanGoForward(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ContainsFullScreenElement(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ContainsFullScreenElement;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DocumentTitle(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DocumentTitle);
  handleExceptionEnd
end;

//property
function WVBrowserBase_Source(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Source);
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_CookieManager(AObj: TWVBrowserBase; var Result: ICoreWebView2CookieManager); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsSuspended(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSuspended;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsDocumentPlayingAudio(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDocumentPlayingAudio;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsMuted(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsMuted := AValue;
  end else
    Result := AObj.IsMuted;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultDownloadDialogCornerAlignment(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVDefaultDownloadDialogCornerAlignment): TWVDefaultDownloadDialogCornerAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadDialogCornerAlignment := AValue;
  end else
    Result := AObj.DefaultDownloadDialogCornerAlignment;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_DefaultDownloadDialogMargin(AIsSet: LongBool; AObj: TWVBrowserBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadDialogMargin := AValue;
  end else
    Result := AObj.DefaultDownloadDialogMargin;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsDefaultDownloadDialogOpen(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDefaultDownloadDialogOpen;
  handleExceptionEnd
end;

//property
function WVBrowserBase_StatusBarText(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.StatusBarText);
  handleExceptionEnd
end;

//property
function WVBrowserBase_FaviconURI(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.FaviconURI);
  handleExceptionEnd
end;

//property
function WVBrowserBase_MemoryUsageTargetLevel(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVMemoryUsageTargetLevel): TWVMemoryUsageTargetLevel; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MemoryUsageTargetLevel := AValue;
  end else
    Result := AObj.MemoryUsageTargetLevel;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_Bounds(AIsSet: LongBool; AObj: TWVBrowserBase; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bounds := AValue;
  end else
    Result := AObj.Bounds;
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsVisible(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsVisible := AValue;
  end else
    Result := AObj.IsVisible;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ParentWindow(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: THandle): THandle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentWindow := AValue;
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_ZoomFactor(AIsSet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomFactor := AValue;
  end else
    Result := AObj.ZoomFactor;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultBackgroundColor(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultBackgroundColor := AValue;
  end else
    Result := AObj.DefaultBackgroundColor;
  handleExceptionEnd
end;

//property
function WVBrowserBase_BoundsMode(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVBoundsMode): TWVBoundsMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoundsMode := AValue;
  end else
    Result := AObj.BoundsMode;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_RasterizationScale(AIsSet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RasterizationScale := AValue;
  end else
    Result := AObj.RasterizationScale;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ShouldDetectMonitorScaleChanges(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShouldDetectMonitorScaleChanges := AValue;
  end else
    Result := AObj.ShouldDetectMonitorScaleChanges;
  handleExceptionEnd
end;

//property
function WVBrowserBase_AllowExternalDrop(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowExternalDrop := AValue;
  end else
    Result := AObj.AllowExternalDrop;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultContextMenusEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultContextMenusEnabled := AValue;
  end else
    Result := AObj.DefaultContextMenusEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultScriptDialogsEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultScriptDialogsEnabled := AValue;
  end else
    Result := AObj.DefaultScriptDialogsEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_DevToolsEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DevToolsEnabled := AValue;
  end else
    Result := AObj.DevToolsEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_AreHostObjectsAllowed(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_BuiltInErrorPageEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BuiltInErrorPageEnabled := AValue;
  end else
    Result := AObj.BuiltInErrorPageEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ScriptEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScriptEnabled := AValue;
  end else
    Result := AObj.ScriptEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_StatusBarEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StatusBarEnabled := AValue;
  end else
    Result := AObj.StatusBarEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_WebMessageEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebMessageEnabled := AValue;
  end else
    Result := AObj.WebMessageEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ZoomControlEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomControlEnabled := AValue;
  end else
    Result := AObj.ZoomControlEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_UserAgent(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
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
function WVBrowserBase_AreBrowserAcceleratorKeysEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_IsGeneralAutofillEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_IsPasswordAutosaveEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_IsPinchZoomEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_IsSwipeNavigationEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
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
function WVBrowserBase_HiddenPdfToolbarItems(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVPDFToolbarItems): TWVPDFToolbarItems; extdecl;
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
function WVBrowserBase_IsReputationCheckingRequired(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsReputationCheckingRequired := AValue;
  end else
    Result := AObj.IsReputationCheckingRequired;
  handleExceptionEnd
end;

//property
function WVBrowserBase_Cursor(AObj: TWVBrowserBase): HCURSOR; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Cursor;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_RootVisualTarget(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: IUnknown; var Result: IUnknown); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootVisualTarget := AValue;
  end else
    Result := AObj.RootVisualTarget;
  handleExceptionEnd
end;

//property
function WVBrowserBase_SystemCursorID(AObj: TWVBrowserBase): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SystemCursorID;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_AutomationProvider(AObj: TWVBrowserBase; var Result: IUnknown); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutomationProvider;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_ProcessInfos(AObj: TWVBrowserBase; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ProfileName(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProfileName := AValue;
  end else
    Result := ToPChar(AObj.ProfileName);
  handleExceptionEnd
end;

//property
function WVBrowserBase_IsInPrivateModeEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsInPrivateModeEnabled := AValue;
  end else
    Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ScriptLocale(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScriptLocale := AValue;
  end else
    Result := ToPChar(AObj.ScriptLocale);
  handleExceptionEnd
end;

//property
function WVBrowserBase_ProfilePath(AObj: TWVBrowserBase): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ProfilePath);
  handleExceptionEnd
end;

//property
function WVBrowserBase_DefaultDownloadFolderPath(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadFolderPath := AValue;
  end else
    Result := ToPChar(AObj.DefaultDownloadFolderPath);
  handleExceptionEnd
end;

//property
function WVBrowserBase_PreferredColorScheme(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVPreferredColorScheme): TWVPreferredColorScheme; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreferredColorScheme := AValue;
  end else
    Result := AObj.PreferredColorScheme;
  handleExceptionEnd
end;

//property
function WVBrowserBase_PreferredTrackingPreventionLevel(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: TWVTrackingPreventionLevel): TWVTrackingPreventionLevel; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreferredTrackingPreventionLevel := AValue;
  end else
    Result := AObj.PreferredTrackingPreventionLevel;
  handleExceptionEnd
end;

//property
procedure WVBrowserBase_ProfileCookieManager(AObj: TWVBrowserBase; var Result: ICoreWebView2CookieManager); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProfileCookieManager;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ProfileIsPasswordAutosaveEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProfileIsPasswordAutosaveEnabled := AValue;
  end else
    Result := AObj.ProfileIsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_ProfileIsGeneralAutofillEnabled(AIsSet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProfileIsGeneralAutofillEnabled := AValue;
  end else
    Result := AObj.ProfileIsGeneralAutofillEnabled;
  handleExceptionEnd
end;

//property
function WVBrowserBase_FrameId(AObj: TWVBrowserBase): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

//function
function WVBrowserBase_CreateBrowser(AObj: TWVBrowserBase; aHandle: THandle; aUseDefaultEnvironment: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateBrowser(aHandle, aUseDefaultEnvironment);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CreateBrowser1(AObj: TWVBrowserBase; aHandle: THandle; const aEnvironment: ICoreWebView2Environment): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateBrowser(aHandle, aEnvironment);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CreateWindowlessBrowser(AObj: TWVBrowserBase; aHandle: THandle; aUseDefaultEnvironment: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateWindowlessBrowser(aHandle, aUseDefaultEnvironment);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CreateWindowlessBrowser1(AObj: TWVBrowserBase; aHandle: THandle; const aEnvironment: ICoreWebView2Environment): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateWindowlessBrowser(aHandle, aEnvironment);
  handleExceptionEnd
end;

//function
function WVBrowserBase_GoBack(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

//function
function WVBrowserBase_GoForward(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

//function
function WVBrowserBase_Refresh(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Refresh();
  handleExceptionEnd
end;

//function
function WVBrowserBase_RefreshIgnoreCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RefreshIgnoreCache();
  handleExceptionEnd
end;

//function
function WVBrowserBase_Stop(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Stop();
  handleExceptionEnd
end;

//function
function WVBrowserBase_Navigate(AObj: TWVBrowserBase; const aURI: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Navigate(aURI);
  handleExceptionEnd
end;

//function
function WVBrowserBase_NavigateToString(AObj: TWVBrowserBase; const aHTMLContent: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigateToString(aHTMLContent);
  handleExceptionEnd
end;

//function
function WVBrowserBase_NavigateWithWebResourceRequest(AObj: TWVBrowserBase; const aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigateWithWebResourceRequest(aRequest);
  handleExceptionEnd
end;

//function
function WVBrowserBase_SubscribeToDevToolsProtocolEvent(AObj: TWVBrowserBase; const aEventName: PChar; aEventID: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SubscribeToDevToolsProtocolEvent(aEventName, aEventID);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CallDevToolsProtocolMethod(AObj: TWVBrowserBase; const aMethodName, aParametersAsJson: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethod(aMethodName, aParametersAsJson, aExecutionID);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CallDevToolsProtocolMethodForSession(AObj: TWVBrowserBase; const aSessionId, aMethodName, aParametersAsJson: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethodForSession(aSessionId, aMethodName, aParametersAsJson, aExecutionID);
  handleExceptionEnd
end;

//function
function WVBrowserBase_SetFocus(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetFocus();
  handleExceptionEnd
end;

//function
function WVBrowserBase_FocusNext(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FocusNext();
  handleExceptionEnd
end;

//function
function WVBrowserBase_FocusPrevious(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FocusPrevious();
  handleExceptionEnd
end;

//function
function WVBrowserBase_ExecuteScriptWithResult(AObj: TWVBrowserBase; const aJavaScript: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecuteScriptWithResult(aJavaScript, aExecutionID);
  handleExceptionEnd
end;

//function
function WVBrowserBase_ExecuteScript(AObj: TWVBrowserBase; const aJavaScript: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecuteScript(aJavaScript, aExecutionID);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CapturePreview(AObj: TWVBrowserBase; aImageFormat: TWVCapturePreviewImageFormat; const aImageStream: TStreamAdapter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CapturePreview(aImageFormat, aImageStream);
  handleExceptionEnd
end;

//function
function WVBrowserBase_NotifyParentWindowPositionChanged(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NotifyParentWindowPositionChanged();
  handleExceptionEnd
end;

//function
function WVBrowserBase_SetPermissionState(AObj: TWVBrowserBase; aPermissionKind: TWVPermissionKind; const aOrigin: PChar; aState: TWVPermissionState): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetPermissionState(aPermissionKind, aOrigin, aState);
  handleExceptionEnd
end;

//function
function WVBrowserBase_GetNonDefaultPermissionSettings(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNonDefaultPermissionSettings();
  handleExceptionEnd
end;

//function
function WVBrowserBase_AddBrowserExtension(AObj: TWVBrowserBase; const extensionFolderPath: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddBrowserExtension(extensionFolderPath);
  handleExceptionEnd
end;

//function
function WVBrowserBase_GetBrowserExtensions(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBrowserExtensions();
  handleExceptionEnd
end;

//function
function WVBrowserBase_DeleteProfile(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteProfile();
  handleExceptionEnd
end;

//function
function WVBrowserBase_TrySuspend(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TrySuspend();
  handleExceptionEnd
end;

//function
function WVBrowserBase_Resume(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;

//function
function WVBrowserBase_SetVirtualHostNameToFolderMapping(AObj: TWVBrowserBase; const aHostName, aFolderPath: PChar; aAccessKind: TWVHostResourceAcccessKind): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetVirtualHostNameToFolderMapping(aHostName, aFolderPath, aAccessKind);
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearVirtualHostNameToFolderMapping(AObj: TWVBrowserBase; const aHostName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearVirtualHostNameToFolderMapping(aHostName);
  handleExceptionEnd
end;

//function
function WVBrowserBase_RetrieveHTML(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RetrieveHTML();
  handleExceptionEnd
end;

//function
function WVBrowserBase_RetrieveText(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RetrieveText();
  handleExceptionEnd
end;

//function
function WVBrowserBase_RetrieveMHTML(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RetrieveMHTML();
  handleExceptionEnd
end;

//function
function WVBrowserBase_Print(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Print();
  handleExceptionEnd
end;

//function
function WVBrowserBase_ShowPrintUI(AObj: TWVBrowserBase; aUseSystemPrintDialog: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShowPrintUI(aUseSystemPrintDialog);
  handleExceptionEnd
end;

//function
function WVBrowserBase_PrintToPdf(AObj: TWVBrowserBase; const aResultFilePath: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrintToPdf(aResultFilePath);
  handleExceptionEnd
end;

//function
function WVBrowserBase_PrintToPdfStream(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrintToPdfStream();
  handleExceptionEnd
end;

//function
function WVBrowserBase_OpenDevToolsWindow(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenDevToolsWindow();
  handleExceptionEnd
end;

//function
function WVBrowserBase_OpenTaskManagerWindow(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenTaskManagerWindow();
  handleExceptionEnd
end;

//function
function WVBrowserBase_PostWebMessageAsJson(AObj: TWVBrowserBase; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(aWebMessageAsJson);
  handleExceptionEnd
end;

//function
function WVBrowserBase_PostWebMessageAsString(AObj: TWVBrowserBase; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(aWebMessageAsString);
  handleExceptionEnd
end;

//function
function WVBrowserBase_AddWebResourceRequestedFilter(AObj: TWVBrowserBase; const aURI: PChar; aResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilter(aURI, aResourceContext);
  handleExceptionEnd
end;

//function
function WVBrowserBase_RemoveWebResourceRequestedFilter(AObj: TWVBrowserBase; const aURI: PChar; aResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilter(aURI, aResourceContext);
  handleExceptionEnd
end;

//function
function WVBrowserBase_RemoveHostObjectFromScript(AObj: TWVBrowserBase; const aName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(aName);
  handleExceptionEnd
end;

//function
function WVBrowserBase_AddScriptToExecuteOnDocumentCreated(AObj: TWVBrowserBase; const JavaScript: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddScriptToExecuteOnDocumentCreated(JavaScript);
  handleExceptionEnd
end;

//function
function WVBrowserBase_RemoveScriptToExecuteOnDocumentCreated(AObj: TWVBrowserBase; const aID: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveScriptToExecuteOnDocumentCreated(aID);
  handleExceptionEnd
end;

//function
procedure WVBrowserBase_CreateCookie(AObj: TWVBrowserBase; const aName, aValue, aDomain, aPath: PChar; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateCookie(aName, aValue, aDomain, aPath);
  handleExceptionEnd
end;

//function
procedure WVBrowserBase_CopyCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CopyCookie(aCookie);
  handleExceptionEnd
end;

//function
function WVBrowserBase_GetCookies(AObj: TWVBrowserBase; const aURI: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCookies(aURI);
  handleExceptionEnd
end;

//function
function WVBrowserBase_AddOrUpdateCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddOrUpdateCookie(aCookie);
  handleExceptionEnd
end;

//function
function WVBrowserBase_DeleteCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookie(aCookie);
  handleExceptionEnd
end;

//function
function WVBrowserBase_DeleteCookies(AObj: TWVBrowserBase; const aName, aURI: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookies(aName, aURI);
  handleExceptionEnd
end;

//function
function WVBrowserBase_DeleteCookiesWithDomainAndPath(AObj: TWVBrowserBase; const aName, aDomain, aPath: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookiesWithDomainAndPath(aName, aDomain, aPath);
  handleExceptionEnd
end;

//function
function WVBrowserBase_DeleteAllCookies(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteAllCookies();
  handleExceptionEnd
end;

//function
function WVBrowserBase_SetBoundsAndZoomFactor(AObj: TWVBrowserBase; var aBounds: TRect; var aZoomFactor: double): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBoundsAndZoomFactor(aBounds, aZoomFactor);
  handleExceptionEnd
end;

//function
function WVBrowserBase_OpenDefaultDownloadDialog(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenDefaultDownloadDialog();
  handleExceptionEnd
end;

//function
function WVBrowserBase_CloseDefaultDownloadDialog(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CloseDefaultDownloadDialog();
  handleExceptionEnd
end;

//function
function WVBrowserBase_SimulateEditingCommand(AObj: TWVBrowserBase; aEditingCommand: TWV2EditingCommand): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SimulateEditingCommand(aEditingCommand);
  handleExceptionEnd
end;

//function
function WVBrowserBase_SimulateKeyEvent(AObj: TWVBrowserBase; type_: TWV2KeyEventType; modifiers, windowsVirtualKeyCode, nativeVirtualKeyCode: integer; timestamp: integer; location: integer; autoRepeat: LongBool; isKeypad: LongBool; isSystemKey: LongBool; const text: PChar; const unmodifiedtext: PChar; const keyIdentifier: PChar; const code: PChar; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SimulateKeyEvent(type_, modifiers, windowsVirtualKeyCode, nativeVirtualKeyCode, timestamp, location, autoRepeat, isKeypad, isSystemKey, text, unmodifiedtext, keyIdentifier, code, key);
  handleExceptionEnd
end;

//function
function WVBrowserBase_KeyboardShortcutSearch(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyboardShortcutSearch();
  handleExceptionEnd
end;

//function
function WVBrowserBase_KeyboardShortcutRefreshIgnoreCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyboardShortcutRefreshIgnoreCache();
  handleExceptionEnd
end;

//function
function WVBrowserBase_SendMouseInput(AObj: TWVBrowserBase; aEventKind: TWVMouseEventKind; aVirtualKeys: TWVMouseEventVirtualKeys; aMouseData: uint32; var aPoint: TPoint): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SendMouseInput(aEventKind, aVirtualKeys, aMouseData, aPoint);
  handleExceptionEnd
end;

//function
function WVBrowserBase_SendPointerInput(AObj: TWVBrowserBase; aEventKind: TWVPointerEventKind; const aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SendPointerInput(aEventKind, aPointerInfo);
  handleExceptionEnd
end;

//function
function WVBrowserBase_DragEnter(AObj: TWVBrowserBase; const dataObject: IDataObject; keyState: LongWord; var point: TPoint; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.DragEnter(dataObject, keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;

//function
function WVBrowserBase_DragLeave(AObj: TWVBrowserBase): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragLeave();
  handleExceptionEnd
end;

//function
function WVBrowserBase_DragOver(AObj: TWVBrowserBase; keyState: LongWord; var point: TPoint; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.DragOver(keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;

//function
function WVBrowserBase_Drop(AObj: TWVBrowserBase; const dataObject: IDataObject; keyState: LongWord; var point: TPoint; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.Drop(dataObject, keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearCache();
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearDataForOrigin(AObj: TWVBrowserBase; const aOrigin: PChar; aStorageTypes: TWVClearDataStorageTypes): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearDataForOrigin(aOrigin, aStorageTypes);
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearBrowsingData(AObj: TWVBrowserBase; dataKinds: TWVBrowsingDataKinds): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearBrowsingData(dataKinds);
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearBrowsingDataInTimeRange(AObj: TWVBrowserBase; dataKinds: TWVBrowsingDataKinds; var startTime, endTime: TDateTime): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataInTimeRange(dataKinds, startTime, endTime);
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearBrowsingDataAll(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataAll();
  handleExceptionEnd
end;

//function
function WVBrowserBase_ClearServerCertificateErrorActions(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearServerCertificateErrorActions();
  handleExceptionEnd
end;

//function
function WVBrowserBase_GetFavicon(AObj: TWVBrowserBase; aFormat: TWVFaviconImageFormat): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFavicon(aFormat);
  handleExceptionEnd
end;

//function
function WVBrowserBase_CreateSharedBuffer(AObj: TWVBrowserBase; var aSize: int64; var aSharedBuffer: ICoreWebView2SharedBuffer): LongBool; extdecl;
var
  RetaSharedBuffer: ICoreWebView2SharedBuffer;
begin
  handleExceptionBegin
  RetaSharedBuffer := aSharedBuffer;
  Result := AObj.CreateSharedBuffer(aSize, RetaSharedBuffer);
  aSharedBuffer := RetaSharedBuffer;
  handleExceptionEnd
end;

//function
function WVBrowserBase_PostSharedBufferToScript(AObj: TWVBrowserBase; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, aAdditionalDataAsJson);
  handleExceptionEnd
end;

//function
function WVBrowserBase_GetProcessExtendedInfos(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetProcessExtendedInfos();
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_MoveFormTo(AObj: TWVBrowserBase; const x, y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormTo(x, y);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_MoveFormBy(AObj: TWVBrowserBase; const x, y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormBy(x, y);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_ResizeFormWidthTo(AObj: TWVBrowserBase; const x: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ResizeFormWidthTo(x);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_ResizeFormHeightTo(AObj: TWVBrowserBase; const y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ResizeFormHeightTo(y);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_SetFormLeftTo(AObj: TWVBrowserBase; const x: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetFormLeftTo(x);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_SetFormTopTo(AObj: TWVBrowserBase; const y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetFormTopTo(y);
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_IncZoomStep(AObj: TWVBrowserBase); extdecl;
begin
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_DecZoomStep(AObj: TWVBrowserBase); extdecl;
begin
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_ResetZoom(AObj: TWVBrowserBase); extdecl;
begin
  handleExceptionBegin
  AObj.ResetZoom();
  handleExceptionEnd
end;

//procedure
procedure WVBrowserBase_ToggleMuteState(AObj: TWVBrowserBase); extdecl;
begin
  handleExceptionBegin
  AObj.ToggleMuteState();
  handleExceptionEnd
end;

//property event
procedure WVBrowserBase_SetOnBrowserProcessExited(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBrowserProcessExitedEvent}
  {$DEFINE EventName := OnBrowserProcessExited}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnProcessInfosChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnProcessInfosChangedEvent}
  {$DEFINE EventName := OnProcessInfosChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnContainsFullScreenElementChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnContainsFullScreenElementChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnContentLoading(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnContentLoadingEvent}
  {$DEFINE EventName := OnContentLoading}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnDocumentTitleChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDocumentTitleChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameNavigationCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnNavigationCompletedEvent}
  {$DEFINE EventName := OnFrameNavigationCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameNavigationStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnNavigationStartingEvent}
  {$DEFINE EventName := OnFrameNavigationStarting}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnHistoryChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHistoryChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnNavigationCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnNavigationCompletedEvent}
  {$DEFINE EventName := OnNavigationCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnNavigationStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnNavigationStartingEvent}
  {$DEFINE EventName := OnNavigationStarting}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnNewWindowRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnNewWindowRequestedEvent}
  {$DEFINE EventName := OnNewWindowRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnPermissionRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPermissionRequestedEvent}
  {$DEFINE EventName := OnPermissionRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnProcessFailed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnProcessFailedEvent}
  {$DEFINE EventName := OnProcessFailed}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnScriptDialogOpening(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnScriptDialogOpeningEvent}
  {$DEFINE EventName := OnScriptDialogOpening}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnSourceChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSourceChangedEvent}
  {$DEFINE EventName := OnSourceChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWebMessageReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnWebMessageReceivedEvent}
  {$DEFINE EventName := OnWebMessageReceived}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWebResourceRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnWebResourceRequestedEvent}
  {$DEFINE EventName := OnWebResourceRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWindowCloseRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnWindowCloseRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnDOMContentLoaded(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDOMContentLoadedEvent}
  {$DEFINE EventName := OnDOMContentLoaded}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWebResourceResponseReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnWebResourceResponseReceivedEvent}
  {$DEFINE EventName := OnWebResourceResponseReceived}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnDownloadStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDownloadStartingEvent}
  {$DEFINE EventName := OnDownloadStarting}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameCreated(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameCreatedEvent}
  {$DEFINE EventName := OnFrameCreated}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnClientCertificateRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnClientCertificateRequestedEvent}
  {$DEFINE EventName := OnClientCertificateRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnIsDocumentPlayingAudioChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnIsDocumentPlayingAudioChangedEvent}
  {$DEFINE EventName := OnIsDocumentPlayingAudioChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnIsMutedChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnIsMutedChangedEvent}
  {$DEFINE EventName := OnIsMutedChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnIsDefaultDownloadDialogOpenChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnIsDefaultDownloadDialogOpenChangedEvent}
  {$DEFINE EventName := OnIsDefaultDownloadDialogOpenChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnBasicAuthenticationRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBasicAuthenticationRequestedEvent}
  {$DEFINE EventName := OnBasicAuthenticationRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnContextMenuRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnContextMenuRequestedEvent}
  {$DEFINE EventName := OnContextMenuRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnStatusBarTextChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnStatusBarTextChangedEvent}
  {$DEFINE EventName := OnStatusBarTextChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnServerCertificateErrorActionsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnServerCertificateErrorActionsCompletedEvent}
  {$DEFINE EventName := OnServerCertificateErrorActionsCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnServerCertificateErrorDetected(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnServerCertificateErrorDetectedEvent}
  {$DEFINE EventName := OnServerCertificateErrorDetected}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFaviconChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFaviconChangedEvent}
  {$DEFINE EventName := OnFaviconChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGetFaviconCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnGetFaviconCompletedEvent}
  {$DEFINE EventName := OnGetFaviconCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnPrintCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrintCompletedEvent}
  {$DEFINE EventName := OnPrintCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnPrintToPdfStreamCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrintToPdfStreamCompletedEvent}
  {$DEFINE EventName := OnPrintToPdfStreamCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnAcceleratorKeyPressed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnAcceleratorKeyPressedEvent}
  {$DEFINE EventName := OnAcceleratorKeyPressed}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGotFocus(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGotFocus}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnLostFocus(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnLostFocus}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnMoveFocusRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnMoveFocusRequestedEvent}
  {$DEFINE EventName := OnMoveFocusRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnZoomFactorChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnZoomFactorChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRasterizationScaleChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnRasterizationScaleChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnCursorChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCursorChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnBytesReceivedChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBytesReceivedChangedEvent}
  {$DEFINE EventName := OnBytesReceivedChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnEstimatedEndTimeChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnEstimatedEndTimeChangedEvent}
  {$DEFINE EventName := OnEstimatedEndTimeChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnDownloadStateChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDownloadStateChangedEvent}
  {$DEFINE EventName := OnDownloadStateChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameDestroyed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameDestroyedEvent}
  {$DEFINE EventName := OnFrameDestroyed}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameNameChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameNameChangedEvent}
  {$DEFINE EventName := OnFrameNameChanged}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameNavigationStarting2(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameNavigationStartingEvent}
  {$DEFINE EventName := OnFrameNavigationStarting2}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameNavigationCompleted2(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameNavigationCompletedEvent}
  {$DEFINE EventName := OnFrameNavigationCompleted2}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameContentLoading(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameContentLoadingEvent}
  {$DEFINE EventName := OnFrameContentLoading}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameDOMContentLoaded(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameDOMContentLoadedEvent}
  {$DEFINE EventName := OnFrameDOMContentLoaded}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFrameWebMessageReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFrameWebMessageReceivedEvent}
  {$DEFINE EventName := OnFrameWebMessageReceived}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnFramePermissionRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnFramePermissionRequestedEvent}
  {$DEFINE EventName := OnFramePermissionRequested}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnDevToolsProtocolEventReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDevToolsProtocolEventReceivedEvent}
  {$DEFINE EventName := OnDevToolsProtocolEventReceived}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnCustomItemSelected(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCustomItemSelectedEvent}
  {$DEFINE EventName := OnCustomItemSelected}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnClearBrowsingDataCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnClearBrowsingDataCompletedEvent}
  {$DEFINE EventName := OnClearBrowsingDataCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnInitializationError(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnInitializationErrorEvent}
  {$DEFINE EventName := OnInitializationError}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnEnvironmentCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEnvironmentCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnControllerCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnControllerCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnAfterCreated(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnAfterCreated}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnExecuteScriptCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnExecuteScriptCompletedEvent}
  {$DEFINE EventName := OnExecuteScriptCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnCapturePreviewCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCapturePreviewCompletedEvent}
  {$DEFINE EventName := OnCapturePreviewCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGetCookiesCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnGetCookiesCompletedEvent}
  {$DEFINE EventName := OnGetCookiesCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnTrySuspendCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnTrySuspendCompletedEvent}
  {$DEFINE EventName := OnTrySuspendCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnPrintToPdfCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrintToPdfCompletedEvent}
  {$DEFINE EventName := OnPrintToPdfCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnCompositionControllerCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCompositionControllerCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnCallDevToolsProtocolMethodCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCallDevToolsProtocolMethodCompletedEvent}
  {$DEFINE EventName := OnCallDevToolsProtocolMethodCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnAddScriptToExecuteOnDocumentCreatedCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnAddScriptToExecuteOnDocumentCreatedCompletedEvent}
  {$DEFINE EventName := OnAddScriptToExecuteOnDocumentCreatedCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWebResourceResponseViewGetContentCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnWebResourceResponseViewGetContentCompletedEvent}
  {$DEFINE EventName := OnWebResourceResponseViewGetContentCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWidget0CompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompMsgEvent}
  {$DEFINE EventName := OnWidget0CompMsg}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnWidget1CompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompMsgEvent}
  {$DEFINE EventName := OnWidget1CompMsg}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRenderCompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompMsgEvent}
  {$DEFINE EventName := OnRenderCompMsg}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnD3DWindowCompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompMsgEvent}
  {$DEFINE EventName := OnD3DWindowCompMsg}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRetrieveHTMLCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnRetrieveHTMLCompletedEvent}
  {$DEFINE EventName := OnRetrieveHTMLCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRetrieveTextCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnRetrieveTextCompletedEvent}
  {$DEFINE EventName := OnRetrieveTextCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRetrieveMHTMLCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnRetrieveMHTMLCompletedEvent}
  {$DEFINE EventName := OnRetrieveMHTMLCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnClearCacheCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnClearCacheCompletedEvent}
  {$DEFINE EventName := OnClearCacheCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnClearDataForOriginCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnClearDataForOriginCompletedEvent}
  {$DEFINE EventName := OnClearDataForOriginCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnOfflineCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnOfflineCompletedEvent}
  {$DEFINE EventName := OnOfflineCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnIgnoreCertificateErrorsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnIgnoreCertificateErrorsCompletedEvent}
  {$DEFINE EventName := OnIgnoreCertificateErrorsCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnRefreshIgnoreCacheCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnRefreshIgnoreCacheCompletedEvent}
  {$DEFINE EventName := OnRefreshIgnoreCacheCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnSimulateKeyEventCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSimulateKeyEventCompletedEvent}
  {$DEFINE EventName := OnSimulateKeyEventCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGetCustomSchemes(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnGetCustomSchemesEvent}
  {$DEFINE EventName := OnGetCustomSchemes}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGetNonDefaultPermissionSettingsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnGetNonDefaultPermissionSettingsCompletedEvent}
  {$DEFINE EventName := OnGetNonDefaultPermissionSettingsCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnSetPermissionStateCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSetPermissionStateCompletedEvent}
  {$DEFINE EventName := OnSetPermissionStateCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnLaunchingExternalUriScheme(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnLaunchingExternalUriSchemeEvent}
  {$DEFINE EventName := OnLaunchingExternalUriScheme}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnGetProcessExtendedInfosCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnGetProcessExtendedInfosCompletedEvent}
  {$DEFINE EventName := OnGetProcessExtendedInfosCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnBrowserExtensionRemoveCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBrowserExtensionRemoveCompletedEvent}
  {$DEFINE EventName := OnBrowserExtensionRemoveCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnBrowserExtensionEnableCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBrowserExtensionEnableCompletedEvent}
  {$DEFINE EventName := OnBrowserExtensionEnableCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnProfileAddBrowserExtensionCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnProfileAddBrowserExtensionCompletedEvent}
  {$DEFINE EventName := OnProfileAddBrowserExtensionCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnProfileGetBrowserExtensionsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnProfileGetBrowserExtensionsCompletedEvent}
  {$DEFINE EventName := OnProfileGetBrowserExtensionsCompleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnProfileDeleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnProfileDeletedEvent}
  {$DEFINE EventName := OnProfileDeleted}
  WVEventMethodCode
end;

//property event
procedure WVBrowserBase_SetOnExecuteScriptWithResultCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnExecuteScriptWithResultCompletedEvent}
  {$DEFINE EventName := OnExecuteScriptWithResultCompleted}
  WVEventMethodCode
end;


exports
  WVBrowserBase_Initialized,
  WVBrowserBase_CoreWebView2PrintSettings,
  WVBrowserBase_CoreWebView2Settings,
  WVBrowserBase_CoreWebView2Environment,
  WVBrowserBase_CoreWebView2Controller,
  WVBrowserBase_CoreWebView2CompositionController,
  WVBrowserBase_CoreWebView2,
  WVBrowserBase_Profile,
  WVBrowserBase_DefaultURL,
  WVBrowserBase_IsNavigating,
  WVBrowserBase_ZoomPct,
  WVBrowserBase_ZoomStep,
  WVBrowserBase_Widget0CompHWND,
  WVBrowserBase_Widget1CompHWND,
  WVBrowserBase_RenderCompHWND,
  WVBrowserBase_D3DWindowCompHWND,
  WVBrowserBase_ScreenScale,
  WVBrowserBase_Offline,
  WVBrowserBase_IgnoreCertificateErrors,
  WVBrowserBase_BrowserExecPath,
  WVBrowserBase_UserDataFolder,
  WVBrowserBase_AdditionalBrowserArguments,
  WVBrowserBase_Language,
  WVBrowserBase_TargetCompatibleBrowserVersion,
  WVBrowserBase_AllowSingleSignOnUsingOSPrimaryAccount,
  WVBrowserBase_ExclusiveUserDataFolderAccess,
  WVBrowserBase_CustomCrashReportingEnabled,
  WVBrowserBase_EnableTrackingPrevention,
  WVBrowserBase_AreBrowserExtensionsEnabled,
  WVBrowserBase_BrowserVersionInfo,
  WVBrowserBase_BrowserProcessID,
  WVBrowserBase_CanGoBack,
  WVBrowserBase_CanGoForward,
  WVBrowserBase_ContainsFullScreenElement,
  WVBrowserBase_DocumentTitle,
  WVBrowserBase_Source,
  WVBrowserBase_CookieManager,
  WVBrowserBase_IsSuspended,
  WVBrowserBase_IsDocumentPlayingAudio,
  WVBrowserBase_IsMuted,
  WVBrowserBase_DefaultDownloadDialogCornerAlignment,
  WVBrowserBase_DefaultDownloadDialogMargin,
  WVBrowserBase_IsDefaultDownloadDialogOpen,
  WVBrowserBase_StatusBarText,
  WVBrowserBase_FaviconURI,
  WVBrowserBase_MemoryUsageTargetLevel,
  WVBrowserBase_Bounds,
  WVBrowserBase_IsVisible,
  WVBrowserBase_ParentWindow,
  WVBrowserBase_ZoomFactor,
  WVBrowserBase_DefaultBackgroundColor,
  WVBrowserBase_BoundsMode,
  WVBrowserBase_RasterizationScale,
  WVBrowserBase_ShouldDetectMonitorScaleChanges,
  WVBrowserBase_AllowExternalDrop,
  WVBrowserBase_DefaultContextMenusEnabled,
  WVBrowserBase_DefaultScriptDialogsEnabled,
  WVBrowserBase_DevToolsEnabled,
  WVBrowserBase_AreHostObjectsAllowed,
  WVBrowserBase_BuiltInErrorPageEnabled,
  WVBrowserBase_ScriptEnabled,
  WVBrowserBase_StatusBarEnabled,
  WVBrowserBase_WebMessageEnabled,
  WVBrowserBase_ZoomControlEnabled,
  WVBrowserBase_UserAgent,
  WVBrowserBase_AreBrowserAcceleratorKeysEnabled,
  WVBrowserBase_IsGeneralAutofillEnabled,
  WVBrowserBase_IsPasswordAutosaveEnabled,
  WVBrowserBase_IsPinchZoomEnabled,
  WVBrowserBase_IsSwipeNavigationEnabled,
  WVBrowserBase_HiddenPdfToolbarItems,
  WVBrowserBase_IsReputationCheckingRequired,
  WVBrowserBase_Cursor,
  WVBrowserBase_RootVisualTarget,
  WVBrowserBase_SystemCursorID,
  WVBrowserBase_AutomationProvider,
  WVBrowserBase_ProcessInfos,
  WVBrowserBase_ProfileName,
  WVBrowserBase_IsInPrivateModeEnabled,
  WVBrowserBase_ScriptLocale,
  WVBrowserBase_ProfilePath,
  WVBrowserBase_DefaultDownloadFolderPath,
  WVBrowserBase_PreferredColorScheme,
  WVBrowserBase_PreferredTrackingPreventionLevel,
  WVBrowserBase_ProfileCookieManager,
  WVBrowserBase_ProfileIsPasswordAutosaveEnabled,
  WVBrowserBase_ProfileIsGeneralAutofillEnabled,
  WVBrowserBase_FrameId,
  WVBrowserBase_CreateBrowser,
  WVBrowserBase_CreateBrowser1,
  WVBrowserBase_CreateWindowlessBrowser,
  WVBrowserBase_CreateWindowlessBrowser1,
  WVBrowserBase_GoBack,
  WVBrowserBase_GoForward,
  WVBrowserBase_Refresh,
  WVBrowserBase_RefreshIgnoreCache,
  WVBrowserBase_Stop,
  WVBrowserBase_Navigate,
  WVBrowserBase_NavigateToString,
  WVBrowserBase_NavigateWithWebResourceRequest,
  WVBrowserBase_SubscribeToDevToolsProtocolEvent,
  WVBrowserBase_CallDevToolsProtocolMethod,
  WVBrowserBase_CallDevToolsProtocolMethodForSession,
  WVBrowserBase_SetFocus,
  WVBrowserBase_FocusNext,
  WVBrowserBase_FocusPrevious,
  WVBrowserBase_ExecuteScriptWithResult,
  WVBrowserBase_ExecuteScript,
  WVBrowserBase_CapturePreview,
  WVBrowserBase_NotifyParentWindowPositionChanged,
  WVBrowserBase_SetPermissionState,
  WVBrowserBase_GetNonDefaultPermissionSettings,
  WVBrowserBase_AddBrowserExtension,
  WVBrowserBase_GetBrowserExtensions,
  WVBrowserBase_DeleteProfile,
  WVBrowserBase_TrySuspend,
  WVBrowserBase_Resume,
  WVBrowserBase_SetVirtualHostNameToFolderMapping,
  WVBrowserBase_ClearVirtualHostNameToFolderMapping,
  WVBrowserBase_RetrieveHTML,
  WVBrowserBase_RetrieveText,
  WVBrowserBase_RetrieveMHTML,
  WVBrowserBase_Print,
  WVBrowserBase_ShowPrintUI,
  WVBrowserBase_PrintToPdf,
  WVBrowserBase_PrintToPdfStream,
  WVBrowserBase_OpenDevToolsWindow,
  WVBrowserBase_OpenTaskManagerWindow,
  WVBrowserBase_PostWebMessageAsJson,
  WVBrowserBase_PostWebMessageAsString,
  WVBrowserBase_AddWebResourceRequestedFilter,
  WVBrowserBase_RemoveWebResourceRequestedFilter,
  WVBrowserBase_RemoveHostObjectFromScript,
  WVBrowserBase_AddScriptToExecuteOnDocumentCreated,
  WVBrowserBase_RemoveScriptToExecuteOnDocumentCreated,
  WVBrowserBase_CreateCookie,
  WVBrowserBase_CopyCookie,
  WVBrowserBase_GetCookies,
  WVBrowserBase_AddOrUpdateCookie,
  WVBrowserBase_DeleteCookie,
  WVBrowserBase_DeleteCookies,
  WVBrowserBase_DeleteCookiesWithDomainAndPath,
  WVBrowserBase_DeleteAllCookies,
  WVBrowserBase_SetBoundsAndZoomFactor,
  WVBrowserBase_OpenDefaultDownloadDialog,
  WVBrowserBase_CloseDefaultDownloadDialog,
  WVBrowserBase_SimulateEditingCommand,
  WVBrowserBase_SimulateKeyEvent,
  WVBrowserBase_KeyboardShortcutSearch,
  WVBrowserBase_KeyboardShortcutRefreshIgnoreCache,
  WVBrowserBase_SendMouseInput,
  WVBrowserBase_SendPointerInput,
  WVBrowserBase_DragEnter,
  WVBrowserBase_DragLeave,
  WVBrowserBase_DragOver,
  WVBrowserBase_Drop,
  WVBrowserBase_ClearCache,
  WVBrowserBase_ClearDataForOrigin,
  WVBrowserBase_ClearBrowsingData,
  WVBrowserBase_ClearBrowsingDataInTimeRange,
  WVBrowserBase_ClearBrowsingDataAll,
  WVBrowserBase_ClearServerCertificateErrorActions,
  WVBrowserBase_GetFavicon,
  WVBrowserBase_CreateSharedBuffer,
  WVBrowserBase_PostSharedBufferToScript,
  WVBrowserBase_GetProcessExtendedInfos,
  WVBrowserBase_MoveFormTo,
  WVBrowserBase_MoveFormBy,
  WVBrowserBase_ResizeFormWidthTo,
  WVBrowserBase_ResizeFormHeightTo,
  WVBrowserBase_SetFormLeftTo,
  WVBrowserBase_SetFormTopTo,
  WVBrowserBase_IncZoomStep,
  WVBrowserBase_DecZoomStep,
  WVBrowserBase_ResetZoom,
  WVBrowserBase_ToggleMuteState,
  WVBrowserBase_SetOnBrowserProcessExited,
  WVBrowserBase_SetOnProcessInfosChanged,
  WVBrowserBase_SetOnContainsFullScreenElementChanged,
  WVBrowserBase_SetOnContentLoading,
  WVBrowserBase_SetOnDocumentTitleChanged,
  WVBrowserBase_SetOnFrameNavigationCompleted,
  WVBrowserBase_SetOnFrameNavigationStarting,
  WVBrowserBase_SetOnHistoryChanged,
  WVBrowserBase_SetOnNavigationCompleted,
  WVBrowserBase_SetOnNavigationStarting,
  WVBrowserBase_SetOnNewWindowRequested,
  WVBrowserBase_SetOnPermissionRequested,
  WVBrowserBase_SetOnProcessFailed,
  WVBrowserBase_SetOnScriptDialogOpening,
  WVBrowserBase_SetOnSourceChanged,
  WVBrowserBase_SetOnWebMessageReceived,
  WVBrowserBase_SetOnWebResourceRequested,
  WVBrowserBase_SetOnWindowCloseRequested,
  WVBrowserBase_SetOnDOMContentLoaded,
  WVBrowserBase_SetOnWebResourceResponseReceived,
  WVBrowserBase_SetOnDownloadStarting,
  WVBrowserBase_SetOnFrameCreated,
  WVBrowserBase_SetOnClientCertificateRequested,
  WVBrowserBase_SetOnIsDocumentPlayingAudioChanged,
  WVBrowserBase_SetOnIsMutedChanged,
  WVBrowserBase_SetOnIsDefaultDownloadDialogOpenChanged,
  WVBrowserBase_SetOnBasicAuthenticationRequested,
  WVBrowserBase_SetOnContextMenuRequested,
  WVBrowserBase_SetOnStatusBarTextChanged,
  WVBrowserBase_SetOnServerCertificateErrorActionsCompleted,
  WVBrowserBase_SetOnServerCertificateErrorDetected,
  WVBrowserBase_SetOnFaviconChanged,
  WVBrowserBase_SetOnGetFaviconCompleted,
  WVBrowserBase_SetOnPrintCompleted,
  WVBrowserBase_SetOnPrintToPdfStreamCompleted,
  WVBrowserBase_SetOnAcceleratorKeyPressed,
  WVBrowserBase_SetOnGotFocus,
  WVBrowserBase_SetOnLostFocus,
  WVBrowserBase_SetOnMoveFocusRequested,
  WVBrowserBase_SetOnZoomFactorChanged,
  WVBrowserBase_SetOnRasterizationScaleChanged,
  WVBrowserBase_SetOnCursorChanged,
  WVBrowserBase_SetOnBytesReceivedChanged,
  WVBrowserBase_SetOnEstimatedEndTimeChanged,
  WVBrowserBase_SetOnDownloadStateChanged,
  WVBrowserBase_SetOnFrameDestroyed,
  WVBrowserBase_SetOnFrameNameChanged,
  WVBrowserBase_SetOnFrameNavigationStarting2,
  WVBrowserBase_SetOnFrameNavigationCompleted2,
  WVBrowserBase_SetOnFrameContentLoading,
  WVBrowserBase_SetOnFrameDOMContentLoaded,
  WVBrowserBase_SetOnFrameWebMessageReceived,
  WVBrowserBase_SetOnFramePermissionRequested,
  WVBrowserBase_SetOnDevToolsProtocolEventReceived,
  WVBrowserBase_SetOnCustomItemSelected,
  WVBrowserBase_SetOnClearBrowsingDataCompleted,
  WVBrowserBase_SetOnInitializationError,
  WVBrowserBase_SetOnEnvironmentCompleted,
  WVBrowserBase_SetOnControllerCompleted,
  WVBrowserBase_SetOnAfterCreated,
  WVBrowserBase_SetOnExecuteScriptCompleted,
  WVBrowserBase_SetOnCapturePreviewCompleted,
  WVBrowserBase_SetOnGetCookiesCompleted,
  WVBrowserBase_SetOnTrySuspendCompleted,
  WVBrowserBase_SetOnPrintToPdfCompleted,
  WVBrowserBase_SetOnCompositionControllerCompleted,
  WVBrowserBase_SetOnCallDevToolsProtocolMethodCompleted,
  WVBrowserBase_SetOnAddScriptToExecuteOnDocumentCreatedCompleted,
  WVBrowserBase_SetOnWebResourceResponseViewGetContentCompleted,
  WVBrowserBase_SetOnWidget0CompMsg,
  WVBrowserBase_SetOnWidget1CompMsg,
  WVBrowserBase_SetOnRenderCompMsg,
  WVBrowserBase_SetOnD3DWindowCompMsg,
  WVBrowserBase_SetOnRetrieveHTMLCompleted,
  WVBrowserBase_SetOnRetrieveTextCompleted,
  WVBrowserBase_SetOnRetrieveMHTMLCompleted,
  WVBrowserBase_SetOnClearCacheCompleted,
  WVBrowserBase_SetOnClearDataForOriginCompleted,
  WVBrowserBase_SetOnOfflineCompleted,
  WVBrowserBase_SetOnIgnoreCertificateErrorsCompleted,
  WVBrowserBase_SetOnRefreshIgnoreCacheCompleted,
  WVBrowserBase_SetOnSimulateKeyEventCompleted,
  WVBrowserBase_SetOnGetCustomSchemes,
  WVBrowserBase_SetOnGetNonDefaultPermissionSettingsCompleted,
  WVBrowserBase_SetOnSetPermissionStateCompleted,
  WVBrowserBase_SetOnLaunchingExternalUriScheme,
  WVBrowserBase_SetOnGetProcessExtendedInfosCompleted,
  WVBrowserBase_SetOnBrowserExtensionRemoveCompleted,
  WVBrowserBase_SetOnBrowserExtensionEnableCompleted,
  WVBrowserBase_SetOnProfileAddBrowserExtensionCompleted,
  WVBrowserBase_SetOnProfileGetBrowserExtensionsCompleted,
  WVBrowserBase_SetOnProfileDeleted,
  WVBrowserBase_SetOnExecuteScriptWithResultCompleted;