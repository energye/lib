
//constructor
function WVLoader_Create(AOwner: TComponent): TWVLoader; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWVLoader.Create(AOwner);
  handleExceptionEnd
end;

//property
procedure WVLoader_Environment(AObj: TWVLoader; var Result: ICoreWebView2Environment); extdecl;
begin
  {$define handleExceptionFuncName :='Environment'}
  handleExceptionBegin
  Result := AObj.Environment;
  handleExceptionEnd
end;

//property
function WVLoader_Status(AObj: TWVLoader): TWV2LoaderStatus; extdecl;
begin
  {$define handleExceptionFuncName :='Status'}
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

//property
function WVLoader_AvailableBrowserVersion(AObj: TWVLoader): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AvailableBrowserVersion'}
  handleExceptionBegin
  Result := ToPChar(AObj.AvailableBrowserVersion);
  handleExceptionEnd
end;

//property
function WVLoader_ErrorMessage(AObj: TWVLoader): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ErrorMessage'}
  handleExceptionBegin
  Result := ToPChar(AObj.ErrorMessage);
  handleExceptionEnd
end;

//property
procedure WVLoader_ErrorCode(AObj: TWVLoader; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='ErrorCode'}
  handleExceptionBegin
  Result := AObj.ErrorCode;
  handleExceptionEnd
end;

//property
function WVLoader_SetCurrentDir(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetCurrentDir'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SetCurrentDir := AValue;
  end else
    Result := AObj.SetCurrentDir;
  handleExceptionEnd
end;

//property
function WVLoader_Initialized(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
function WVLoader_InitializationError(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InitializationError'}
  handleExceptionBegin
  Result := AObj.InitializationError;
  handleExceptionEnd
end;

//property
function WVLoader_CheckFiles(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CheckFiles'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckFiles := AValue;
  end else
    Result := AObj.CheckFiles;
  handleExceptionEnd
end;

//property
function WVLoader_ShowMessageDlg(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowMessageDlg'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowMessageDlg := AValue;
  end else
    Result := AObj.ShowMessageDlg;
  handleExceptionEnd
end;

//property
function WVLoader_InitCOMLibrary(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InitCOMLibrary'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InitCOMLibrary := AValue;
  end else
    Result := AObj.InitCOMLibrary;
  handleExceptionEnd
end;

//property
function WVLoader_CustomCommandLineSwitches(AObj: TWVLoader): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='CustomCommandLineSwitches'}
  handleExceptionBegin
  Result := ToPChar(AObj.CustomCommandLineSwitches);
  handleExceptionEnd
end;

//property
function WVLoader_DeviceScaleFactor(AObj: TWVLoader): single; extdecl;
begin
  {$define handleExceptionFuncName :='DeviceScaleFactor'}
  handleExceptionBegin
  Result := AObj.DeviceScaleFactor;
  handleExceptionEnd
end;

//property
function WVLoader_ReRaiseExceptions(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReRaiseExceptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReRaiseExceptions := AValue;
  end else
    Result := AObj.ReRaiseExceptions;
  handleExceptionEnd
end;

//property
function WVLoader_InstalledRuntimeVersion(AObj: TWVLoader): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='InstalledRuntimeVersion'}
  handleExceptionBegin
  Result := ToPChar(AObj.InstalledRuntimeVersion);
  handleExceptionEnd
end;

//property
function WVLoader_LoaderDllPath(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LoaderDllPath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LoaderDllPath := AValue;
  end else
    Result := ToPChar(AObj.LoaderDllPath);
  handleExceptionEnd
end;

//property
function WVLoader_UseInternalLoader(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UseInternalLoader'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseInternalLoader := AValue;
  end else
    Result := AObj.UseInternalLoader;
  handleExceptionEnd
end;

//property
function WVLoader_BrowserExecPath(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserExecPath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BrowserExecPath := AValue;
  end else
    Result := ToPChar(AObj.BrowserExecPath);
  handleExceptionEnd
end;

//property
function WVLoader_UserDataFolder(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='UserDataFolder'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserDataFolder := AValue;
  end else
    Result := ToPChar(AObj.UserDataFolder);
  handleExceptionEnd
end;

//property
function WVLoader_AdditionalBrowserArguments(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AdditionalBrowserArguments'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AdditionalBrowserArguments := AValue;
  end else
    Result := ToPChar(AObj.AdditionalBrowserArguments);
  handleExceptionEnd
end;

//property
function WVLoader_Language(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Language'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Language := AValue;
  end else
    Result := ToPChar(AObj.Language);
  handleExceptionEnd
end;

//property
function WVLoader_TargetCompatibleBrowserVersion(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TargetCompatibleBrowserVersion'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TargetCompatibleBrowserVersion := AValue;
  end else
    Result := ToPChar(AObj.TargetCompatibleBrowserVersion);
  handleExceptionEnd
end;

//property
function WVLoader_AllowSingleSignOnUsingOSPrimaryAccount(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowSingleSignOnUsingOSPrimaryAccount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowSingleSignOnUsingOSPrimaryAccount := AValue;
  end else
    Result := AObj.AllowSingleSignOnUsingOSPrimaryAccount;
  handleExceptionEnd
end;

//property
function WVLoader_ExclusiveUserDataFolderAccess(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExclusiveUserDataFolderAccess'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExclusiveUserDataFolderAccess := AValue;
  end else
    Result := AObj.ExclusiveUserDataFolderAccess;
  handleExceptionEnd
end;

//property
function WVLoader_CustomCrashReportingEnabled(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CustomCrashReportingEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomCrashReportingEnabled := AValue;
  end else
    Result := AObj.CustomCrashReportingEnabled;
  handleExceptionEnd
end;

//property
function WVLoader_EnableTrackingPrevention(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EnableTrackingPrevention'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableTrackingPrevention := AValue;
  end else
    Result := AObj.EnableTrackingPrevention;
  handleExceptionEnd
end;

//property
function WVLoader_AreBrowserExtensionsEnabled(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AreBrowserExtensionsEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AreBrowserExtensionsEnabled := AValue;
  end else
    Result := AObj.AreBrowserExtensionsEnabled;
  handleExceptionEnd
end;

//property
function WVLoader_EnableGPU(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EnableGPU'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableGPU := AValue;
  end else
    Result := AObj.EnableGPU;
  handleExceptionEnd
end;

//property
function WVLoader_EnableFeatures(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EnableFeatures'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableFeatures := AValue;
  end else
    Result := ToPChar(AObj.EnableFeatures);
  handleExceptionEnd
end;

//property
function WVLoader_DisableFeatures(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DisableFeatures'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableFeatures := AValue;
  end else
    Result := ToPChar(AObj.DisableFeatures);
  handleExceptionEnd
end;

//property
function WVLoader_EnableBlinkFeatures(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EnableBlinkFeatures'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableBlinkFeatures := AValue;
  end else
    Result := ToPChar(AObj.EnableBlinkFeatures);
  handleExceptionEnd
end;

//property
function WVLoader_DisableBlinkFeatures(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DisableBlinkFeatures'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableBlinkFeatures := AValue;
  end else
    Result := ToPChar(AObj.DisableBlinkFeatures);
  handleExceptionEnd
end;

//property
function WVLoader_BlinkSettings(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='BlinkSettings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BlinkSettings := AValue;
  end else
    Result := ToPChar(AObj.BlinkSettings);
  handleExceptionEnd
end;

//property
function WVLoader_ForceFieldTrials(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ForceFieldTrials'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForceFieldTrials := AValue;
  end else
    Result := ToPChar(AObj.ForceFieldTrials);
  handleExceptionEnd
end;

//property
function WVLoader_ForceFieldTrialParams(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ForceFieldTrialParams'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForceFieldTrialParams := AValue;
  end else
    Result := ToPChar(AObj.ForceFieldTrialParams);
  handleExceptionEnd
end;

//property
function WVLoader_SmartScreenProtectionEnabled(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SmartScreenProtectionEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SmartScreenProtectionEnabled := AValue;
  end else
    Result := AObj.SmartScreenProtectionEnabled;
  handleExceptionEnd
end;

//property
function WVLoader_AllowInsecureLocalhost(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowInsecureLocalhost'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowInsecureLocalhost := AValue;
  end else
    Result := AObj.AllowInsecureLocalhost;
  handleExceptionEnd
end;

//property
function WVLoader_DisableWebSecurity(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DisableWebSecurity'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableWebSecurity := AValue;
  end else
    Result := AObj.DisableWebSecurity;
  handleExceptionEnd
end;

//property
function WVLoader_TouchEvents(AIsSet: LongBool; AObj: TWVLoader; AValue: TWVState): TWVState; extdecl;
begin
  {$define handleExceptionFuncName :='TouchEvents'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchEvents := AValue;
  end else
    Result := AObj.TouchEvents;
  handleExceptionEnd
end;

//property
function WVLoader_HyperlinkAuditing(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HyperlinkAuditing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HyperlinkAuditing := AValue;
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

//property
function WVLoader_AutoplayPolicy(AIsSet: LongBool; AObj: TWVLoader; AValue: TWVAutoplayPolicy): TWVAutoplayPolicy; extdecl;
begin
  {$define handleExceptionFuncName :='AutoplayPolicy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoplayPolicy := AValue;
  end else
    Result := AObj.AutoplayPolicy;
  handleExceptionEnd
end;

//property
function WVLoader_MuteAudio(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MuteAudio'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MuteAudio := AValue;
  end else
    Result := AObj.MuteAudio;
  handleExceptionEnd
end;

//property
function WVLoader_KioskPrinting(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='KioskPrinting'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KioskPrinting := AValue;
  end else
    Result := AObj.KioskPrinting;
  handleExceptionEnd
end;

//property
function WVLoader_ProxySettings(AObj: TWVLoader): TWVProxySettings; extdecl;
begin
  {$define handleExceptionFuncName :='ProxySettings'}
  handleExceptionBegin
  Result := AObj.ProxySettings;
  handleExceptionEnd
end;

//property
function WVLoader_AllowFileAccessFromFiles(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowFileAccessFromFiles'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowFileAccessFromFiles := AValue;
  end else
    Result := AObj.AllowFileAccessFromFiles;
  handleExceptionEnd
end;

//property
function WVLoader_AllowRunningInsecureContent(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowRunningInsecureContent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowRunningInsecureContent := AValue;
  end else
    Result := AObj.AllowRunningInsecureContent;
  handleExceptionEnd
end;

//property
function WVLoader_DisableBackgroundNetworking(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DisableBackgroundNetworking'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableBackgroundNetworking := AValue;
  end else
    Result := AObj.DisableBackgroundNetworking;
  handleExceptionEnd
end;

//property
function WVLoader_ForcedDeviceScaleFactor(AIsSet: LongBool; AObj: TWVLoader; AValue: single): single; extdecl;
begin
  {$define handleExceptionFuncName :='ForcedDeviceScaleFactor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue;
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

//property
function WVLoader_RemoteDebuggingPort(AIsSet: LongBool; AObj: TWVLoader; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='RemoteDebuggingPort'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RemoteDebuggingPort := AValue;
  end else
    Result := AObj.RemoteDebuggingPort;
  handleExceptionEnd
end;

//property
function WVLoader_RemoteAllowOrigins(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='RemoteAllowOrigins'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RemoteAllowOrigins := AValue;
  end else
    Result := ToPChar(AObj.RemoteAllowOrigins);
  handleExceptionEnd
end;

//property
function WVLoader_DebugLog(AIsSet: LongBool; AObj: TWVLoader; AValue: TWV2DebugLog): TWV2DebugLog; extdecl;
begin
  {$define handleExceptionFuncName :='DebugLog'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DebugLog := AValue;
  end else
    Result := AObj.DebugLog;
  handleExceptionEnd
end;

//property
function WVLoader_DebugLogLevel(AIsSet: LongBool; AObj: TWVLoader; AValue: TWV2DebugLogLevel): TWV2DebugLogLevel; extdecl;
begin
  {$define handleExceptionFuncName :='DebugLogLevel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DebugLogLevel := AValue;
  end else
    Result := AObj.DebugLogLevel;
  handleExceptionEnd
end;

//property
function WVLoader_JavaScriptFlags(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='JavaScriptFlags'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavaScriptFlags := AValue;
  end else
    Result := ToPChar(AObj.JavaScriptFlags);
  handleExceptionEnd
end;

//property
function WVLoader_DisableEdgePitchNotification(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DisableEdgePitchNotification'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableEdgePitchNotification := AValue;
  end else
    Result := AObj.DisableEdgePitchNotification;
  handleExceptionEnd
end;

//property
function WVLoader_TreatInsecureOriginAsSecure(AIsSet: LongBool; AObj: TWVLoader; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TreatInsecureOriginAsSecure'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreatInsecureOriginAsSecure := AValue;
  end else
    Result := ToPChar(AObj.TreatInsecureOriginAsSecure);
  handleExceptionEnd
end;

//property
function WVLoader_AutoAcceptCamAndMicCapture(AIsSet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoAcceptCamAndMicCapture'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoAcceptCamAndMicCapture := AValue;
  end else
    Result := AObj.AutoAcceptCamAndMicCapture;
  handleExceptionEnd
end;

//property
function WVLoader_SupportsCompositionController(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SupportsCompositionController'}
  handleExceptionBegin
  Result := AObj.SupportsCompositionController;
  handleExceptionEnd
end;

//property
procedure WVLoader_ProcessInfos(AObj: TWVLoader; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  {$define handleExceptionFuncName :='ProcessInfos'}
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

//property
function WVLoader_SupportsControllerOptions(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SupportsControllerOptions'}
  handleExceptionBegin
  Result := AObj.SupportsControllerOptions;
  handleExceptionEnd
end;

//property
function WVLoader_FailureReportFolderPath(AObj: TWVLoader): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FailureReportFolderPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.FailureReportFolderPath);
  handleExceptionEnd
end;

//function
function WVLoader_StartWebView2(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StartWebView2'}
  handleExceptionBegin
  Result := AObj.StartWebView2();
  handleExceptionEnd
end;

//function
function WVLoader_CompareVersions(AObj: TWVLoader; const aVersion1, aVersion2: PChar; var aCompRslt: integer): LongBool; extdecl;
var
  RetaCompRslt: integer;
begin
  {$define handleExceptionFuncName :='CompareVersions'}
  handleExceptionBegin
  RetaCompRslt := aCompRslt;
  Result := AObj.CompareVersions(aVersion1, aVersion2, RetaCompRslt);
  aCompRslt := RetaCompRslt;
  handleExceptionEnd
end;

//procedure
procedure WVLoader_UpdateDeviceScaleFactor(AObj: TWVLoader); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateDeviceScaleFactor'}
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

//procedure
procedure WVLoader_AppendErrorLog(AObj: TWVLoader; const aText: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AppendErrorLog'}
  handleExceptionBegin
  AObj.AppendErrorLog(aText);
  handleExceptionEnd
end;


exports
  WVLoader_Create,
  WVLoader_Environment,
  WVLoader_Status,
  WVLoader_AvailableBrowserVersion,
  WVLoader_ErrorMessage,
  WVLoader_ErrorCode,
  WVLoader_SetCurrentDir,
  WVLoader_Initialized,
  WVLoader_InitializationError,
  WVLoader_CheckFiles,
  WVLoader_ShowMessageDlg,
  WVLoader_InitCOMLibrary,
  WVLoader_CustomCommandLineSwitches,
  WVLoader_DeviceScaleFactor,
  WVLoader_ReRaiseExceptions,
  WVLoader_InstalledRuntimeVersion,
  WVLoader_LoaderDllPath,
  WVLoader_UseInternalLoader,
  WVLoader_BrowserExecPath,
  WVLoader_UserDataFolder,
  WVLoader_AdditionalBrowserArguments,
  WVLoader_Language,
  WVLoader_TargetCompatibleBrowserVersion,
  WVLoader_AllowSingleSignOnUsingOSPrimaryAccount,
  WVLoader_ExclusiveUserDataFolderAccess,
  WVLoader_CustomCrashReportingEnabled,
  WVLoader_EnableTrackingPrevention,
  WVLoader_AreBrowserExtensionsEnabled,
  WVLoader_EnableGPU,
  WVLoader_EnableFeatures,
  WVLoader_DisableFeatures,
  WVLoader_EnableBlinkFeatures,
  WVLoader_DisableBlinkFeatures,
  WVLoader_BlinkSettings,
  WVLoader_ForceFieldTrials,
  WVLoader_ForceFieldTrialParams,
  WVLoader_SmartScreenProtectionEnabled,
  WVLoader_AllowInsecureLocalhost,
  WVLoader_DisableWebSecurity,
  WVLoader_TouchEvents,
  WVLoader_HyperlinkAuditing,
  WVLoader_AutoplayPolicy,
  WVLoader_MuteAudio,
  WVLoader_KioskPrinting,
  WVLoader_ProxySettings,
  WVLoader_AllowFileAccessFromFiles,
  WVLoader_AllowRunningInsecureContent,
  WVLoader_DisableBackgroundNetworking,
  WVLoader_ForcedDeviceScaleFactor,
  WVLoader_RemoteDebuggingPort,
  WVLoader_RemoteAllowOrigins,
  WVLoader_DebugLog,
  WVLoader_DebugLogLevel,
  WVLoader_JavaScriptFlags,
  WVLoader_DisableEdgePitchNotification,
  WVLoader_TreatInsecureOriginAsSecure,
  WVLoader_AutoAcceptCamAndMicCapture,
  WVLoader_SupportsCompositionController,
  WVLoader_ProcessInfos,
  WVLoader_SupportsControllerOptions,
  WVLoader_FailureReportFolderPath,
  WVLoader_StartWebView2,
  WVLoader_CompareVersions,
  WVLoader_UpdateDeviceScaleFactor,
  WVLoader_AppendErrorLog;