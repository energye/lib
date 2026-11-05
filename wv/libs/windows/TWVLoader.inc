// constructor
function TWVLoader_Create(AOwner: TComponent; out IntfWVLoaderEvents: IWVLoaderEvents): TWVLoader; extdecl;
begin
  {$define handleExceptionID := 100}
  handleExceptionBegin
  Result := TWVLoader.Create(AOwner);
  IntfWVLoaderEvents := Result as IWVLoaderEvents;
  handleExceptionEnd
end;

// function
function TWVLoader_StartWebView2(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 101}
  handleExceptionBegin
  Result := AObj.StartWebView2();
  handleExceptionEnd
end;

// function
function TWVLoader_CompareVersions(AObj: TWVLoader; const aVersion1: PChar; const aVersion2: PChar; var aCompRslt: integer): LongBool; extdecl;
var
  OutaCompRslt: integer;
begin
  {$define handleExceptionID := 102}
  handleExceptionBegin
  OutaCompRslt := aCompRslt;
  Result := AObj.CompareVersions(PCharToUStr(aVersion1), PCharToUStr(aVersion2), OutaCompRslt);
  aCompRslt := OutaCompRslt;
  handleExceptionEnd
end;

// procedure
procedure TWVLoader_UpdateDeviceScaleFactor(AObj: TWVLoader); extdecl;
begin
  {$define handleExceptionID := 103}
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

// procedure
procedure TWVLoader_AppendErrorLog(AObj: TWVLoader; const aText: PChar); extdecl;
begin
  {$define handleExceptionID := 104}
  handleExceptionBegin
  AObj.AppendErrorLog(PCharToUStr(aText));
  handleExceptionEnd
end;

// property
procedure TWVLoader_Environment(AObj: TWVLoader; var Result: ICoreWebView2Environment); extdecl;
begin
  {$define handleExceptionID := 105}
  handleExceptionBegin
  Result := AObj.Environment;
  handleExceptionEnd
end;

// property
function TWVLoader_Status(AObj: TWVLoader): TWV2LoaderStatus; extdecl;
begin
  {$define handleExceptionID := 106}
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

// property
procedure TWVLoader_AvailableBrowserVersion(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 107}
  handleExceptionBegin
  StringBufferCreate(AObj.AvailableBrowserVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_AvailableBrowserVersionWithOptions(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 108}
  handleExceptionBegin
  StringBufferCreate(AObj.AvailableBrowserVersionWithOptions, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_ErrorMessage(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 109}
  handleExceptionBegin
  StringBufferCreate(AObj.ErrorMessage, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_ErrorCode(AObj: TWVLoader; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 110}
  handleExceptionBegin
  Result := AObj.ErrorCode;
  handleExceptionEnd
end;

// property
function TWVLoader_SetCurrentDir(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SetCurrentDir := AValue
  end else
    Result := AObj.SetCurrentDir;
  handleExceptionEnd
end;

// property
function TWVLoader_Initialized(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 112}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
function TWVLoader_InitializationError(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 113}
  handleExceptionBegin
  Result := AObj.InitializationError;
  handleExceptionEnd
end;

// property
function TWVLoader_CheckFiles(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckFiles := AValue
  end else
    Result := AObj.CheckFiles;
  handleExceptionEnd
end;

// property
function TWVLoader_ShowMessageDlg(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMessageDlg := AValue
  end else
    Result := AObj.ShowMessageDlg;
  handleExceptionEnd
end;

// property
function TWVLoader_InitCOMLibrary(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InitCOMLibrary := AValue
  end else
    Result := AObj.InitCOMLibrary;
  handleExceptionEnd
end;

// property
procedure TWVLoader_CustomCommandLineSwitches(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 117}
  handleExceptionBegin
  StringBufferCreate(AObj.CustomCommandLineSwitches, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_DeviceScaleFactor(AObj: TWVLoader; var Result: single); extdecl;
begin
  {$define handleExceptionID := 118}
  handleExceptionBegin
  Result := AObj.DeviceScaleFactor;
  handleExceptionEnd
end;

// property
function TWVLoader_ReRaiseExceptions(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReRaiseExceptions := AValue
  end else
    Result := AObj.ReRaiseExceptions;
  handleExceptionEnd
end;

// property
procedure TWVLoader_InstalledRuntimeVersion(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 120}
  handleExceptionBegin
  StringBufferCreate(AObj.InstalledRuntimeVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_LoaderDllPath(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoaderDllPath := AValue
  end else
    StringBufferCreate(AObj.LoaderDllPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_UseInternalLoader(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseInternalLoader := AValue
  end else
    Result := AObj.UseInternalLoader;
  handleExceptionEnd
end;

// property
function TWVLoader_AllowOldRuntime(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowOldRuntime := AValue
  end else
    Result := AObj.AllowOldRuntime;
  handleExceptionEnd
end;

// property
procedure TWVLoader_BrowserExecPath(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BrowserExecPath := AValue
  end else
    StringBufferCreate(AObj.BrowserExecPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_UserDataFolder(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserDataFolder := AValue
  end else
    StringBufferCreate(AObj.UserDataFolder, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_AdditionalBrowserArguments(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AdditionalBrowserArguments := AValue
  end else
    StringBufferCreate(AObj.AdditionalBrowserArguments, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_Language(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Language := AValue
  end else
    StringBufferCreate(AObj.Language, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_TargetCompatibleBrowserVersion(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TargetCompatibleBrowserVersion := AValue
  end else
    StringBufferCreate(AObj.TargetCompatibleBrowserVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_AllowSingleSignOnUsingOSPrimaryAccount(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 129}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowSingleSignOnUsingOSPrimaryAccount := AValue
  end else
    Result := AObj.AllowSingleSignOnUsingOSPrimaryAccount;
  handleExceptionEnd
end;

// property
function TWVLoader_ExclusiveUserDataFolderAccess(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 130}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExclusiveUserDataFolderAccess := AValue
  end else
    Result := AObj.ExclusiveUserDataFolderAccess;
  handleExceptionEnd
end;

// property
function TWVLoader_CustomCrashReportingEnabled(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 131}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomCrashReportingEnabled := AValue
  end else
    Result := AObj.CustomCrashReportingEnabled;
  handleExceptionEnd
end;

// property
function TWVLoader_EnableTrackingPrevention(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 132}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableTrackingPrevention := AValue
  end else
    Result := AObj.EnableTrackingPrevention;
  handleExceptionEnd
end;

// property
function TWVLoader_AreBrowserExtensionsEnabled(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 133}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreBrowserExtensionsEnabled := AValue
  end else
    Result := AObj.AreBrowserExtensionsEnabled;
  handleExceptionEnd
end;

// property
function TWVLoader_ChannelSearchKind(ASet: LongBool; AObj: TWVLoader; AValue: TWVChannelSearchKind): TWVChannelSearchKind; extdecl;
begin
  {$define handleExceptionID := 134}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChannelSearchKind := AValue
  end else
    Result := AObj.ChannelSearchKind;
  handleExceptionEnd
end;

// property
function TWVLoader_ReleaseChannels(ASet: LongBool; AObj: TWVLoader; AValue: TWVReleaseChannels): TWVReleaseChannels; extdecl;
begin
  {$define handleExceptionID := 135}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReleaseChannels := AValue
  end else
    Result := AObj.ReleaseChannels;
  handleExceptionEnd
end;

// property
function TWVLoader_ScrollBarStyle(ASet: LongBool; AObj: TWVLoader; AValue: TWVScrollBarStyle): TWVScrollBarStyle; extdecl;
begin
  {$define handleExceptionID := 136}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBarStyle := AValue
  end else
    Result := AObj.ScrollBarStyle;
  handleExceptionEnd
end;

// property
function TWVLoader_EnableGPU(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 137}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableGPU := AValue
  end else
    Result := AObj.EnableGPU;
  handleExceptionEnd
end;

// property
procedure TWVLoader_EnableFeatures(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 138}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableFeatures := AValue
  end else
    StringBufferCreate(AObj.EnableFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_DisableFeatures(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 139}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableFeatures := AValue
  end else
    StringBufferCreate(AObj.DisableFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_EnableBlinkFeatures(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 140}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableBlinkFeatures := AValue
  end else
    StringBufferCreate(AObj.EnableBlinkFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_DisableBlinkFeatures(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 141}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableBlinkFeatures := AValue
  end else
    StringBufferCreate(AObj.DisableBlinkFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_BlinkSettings(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 142}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlinkSettings := AValue
  end else
    StringBufferCreate(AObj.BlinkSettings, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_ForceFieldTrials(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 143}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForceFieldTrials := AValue
  end else
    StringBufferCreate(AObj.ForceFieldTrials, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVLoader_ForceFieldTrialParams(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 144}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForceFieldTrialParams := AValue
  end else
    StringBufferCreate(AObj.ForceFieldTrialParams, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_SmartScreenProtectionEnabled(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 145}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SmartScreenProtectionEnabled := AValue
  end else
    Result := AObj.SmartScreenProtectionEnabled;
  handleExceptionEnd
end;

// property
function TWVLoader_AllowInsecureLocalhost(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 146}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowInsecureLocalhost := AValue
  end else
    Result := AObj.AllowInsecureLocalhost;
  handleExceptionEnd
end;

// property
function TWVLoader_DisableWebSecurity(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 147}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableWebSecurity := AValue
  end else
    Result := AObj.DisableWebSecurity;
  handleExceptionEnd
end;

// property
function TWVLoader_TouchEvents(ASet: LongBool; AObj: TWVLoader; AValue: TWVState): TWVState; extdecl;
begin
  {$define handleExceptionID := 148}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchEvents := AValue
  end else
    Result := AObj.TouchEvents;
  handleExceptionEnd
end;

// property
function TWVLoader_HyperlinkAuditing(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 149}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HyperlinkAuditing := AValue
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

// property
function TWVLoader_AutoplayPolicy(ASet: LongBool; AObj: TWVLoader; AValue: TWVAutoplayPolicy): TWVAutoplayPolicy; extdecl;
begin
  {$define handleExceptionID := 150}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoplayPolicy := AValue
  end else
    Result := AObj.AutoplayPolicy;
  handleExceptionEnd
end;

// property
function TWVLoader_MuteAudio(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 151}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MuteAudio := AValue
  end else
    Result := AObj.MuteAudio;
  handleExceptionEnd
end;

// property
procedure TWVLoader_DefaultEncoding(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 152}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultEncoding := AValue
  end else
    StringBufferCreate(AObj.DefaultEncoding, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_KioskPrinting(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 153}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KioskPrinting := AValue
  end else
    Result := AObj.KioskPrinting;
  handleExceptionEnd
end;

// property
function TWVLoader_ProxySettings(AObj: TWVLoader): TWVProxySettings; extdecl;
begin
  {$define handleExceptionID := 154}
  handleExceptionBegin
  Result := AObj.ProxySettings;
  handleExceptionEnd
end;

// property
function TWVLoader_AllowFileAccessFromFiles(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 155}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowFileAccessFromFiles := AValue
  end else
    Result := AObj.AllowFileAccessFromFiles;
  handleExceptionEnd
end;

// property
function TWVLoader_AllowRunningInsecureContent(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 156}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowRunningInsecureContent := AValue
  end else
    Result := AObj.AllowRunningInsecureContent;
  handleExceptionEnd
end;

// property
function TWVLoader_DisableBackgroundNetworking(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 157}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableBackgroundNetworking := AValue
  end else
    Result := AObj.DisableBackgroundNetworking;
  handleExceptionEnd
end;

// property
procedure TWVLoader_ForcedDeviceScaleFactor(ASet: LongBool; AObj: TWVLoader; var AValue: single; var Result: single); extdecl;
begin
  {$define handleExceptionID := 158}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

// property
function TWVLoader_RemoteDebuggingPort(ASet: LongBool; AObj: TWVLoader; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 159}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RemoteDebuggingPort := AValue
  end else
    Result := AObj.RemoteDebuggingPort;
  handleExceptionEnd
end;

// property
procedure TWVLoader_RemoteAllowOrigins(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 160}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RemoteAllowOrigins := AValue
  end else
    StringBufferCreate(AObj.RemoteAllowOrigins, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_DebugLog(ASet: LongBool; AObj: TWVLoader; AValue: TWV2DebugLog): TWV2DebugLog; extdecl;
begin
  {$define handleExceptionID := 161}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DebugLog := AValue
  end else
    Result := AObj.DebugLog;
  handleExceptionEnd
end;

// property
function TWVLoader_DebugLogLevel(ASet: LongBool; AObj: TWVLoader; AValue: TWV2DebugLogLevel): TWV2DebugLogLevel; extdecl;
begin
  {$define handleExceptionID := 162}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DebugLogLevel := AValue
  end else
    Result := AObj.DebugLogLevel;
  handleExceptionEnd
end;

// property
procedure TWVLoader_JavaScriptFlags(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 163}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavaScriptFlags := AValue
  end else
    StringBufferCreate(AObj.JavaScriptFlags, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_DisableEdgePitchNotification(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 164}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableEdgePitchNotification := AValue
  end else
    Result := AObj.DisableEdgePitchNotification;
  handleExceptionEnd
end;

// property
procedure TWVLoader_TreatInsecureOriginAsSecure(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 165}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreatInsecureOriginAsSecure := AValue
  end else
    StringBufferCreate(AObj.TreatInsecureOriginAsSecure, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_OpenOfficeDocumentsInWebViewer(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 166}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OpenOfficeDocumentsInWebViewer := AValue
  end else
    Result := AObj.OpenOfficeDocumentsInWebViewer;
  handleExceptionEnd
end;

// property
function TWVLoader_MicrosoftSignIn(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 167}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MicrosoftSignIn := AValue
  end else
    Result := AObj.MicrosoftSignIn;
  handleExceptionEnd
end;

// property
function TWVLoader_TLS13HybridizedKyberSupport(ASet: LongBool; AObj: TWVLoader; AValue: TWVState): TWVState; extdecl;
begin
  {$define handleExceptionID := 168}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TLS13HybridizedKyberSupport := AValue
  end else
    Result := AObj.TLS13HybridizedKyberSupport;
  handleExceptionEnd
end;

// property
procedure TWVLoader_UserAgent(ASet: LongBool; AObj: TWVLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 169}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserAgent := AValue
  end else
    StringBufferCreate(AObj.UserAgent, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVLoader_AutoAcceptCamAndMicCapture(ASet: LongBool; AObj: TWVLoader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 170}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoAcceptCamAndMicCapture := AValue
  end else
    Result := AObj.AutoAcceptCamAndMicCapture;
  handleExceptionEnd
end;

// property
function TWVLoader_SupportsCompositionController(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 171}
  handleExceptionBegin
  Result := AObj.SupportsCompositionController;
  handleExceptionEnd
end;

// property
procedure TWVLoader_ProcessInfos(AObj: TWVLoader; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  {$define handleExceptionID := 172}
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

// property
function TWVLoader_SupportsControllerOptions(AObj: TWVLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 173}
  handleExceptionBegin
  Result := AObj.SupportsControllerOptions;
  handleExceptionEnd
end;

// property
procedure TWVLoader_FailureReportFolderPath(AObj: TWVLoader; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 174}
  handleExceptionBegin
  StringBufferCreate(AObj.FailureReportFolderPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TWVLoader_OnEnvironmentCreated(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderNotifyEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderNotifyEventPtr}
  {$DEFINE EventName := OnEnvironmentCreated}
  WVEventMethodCodeNotObject
end;

// event
procedure TWVLoader_OnInitializationError(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderNotifyEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderNotifyEventPtr}
  {$DEFINE EventName := OnInitializationError}
  WVEventMethodCodeNotObject
end;

// event
procedure TWVLoader_OnGetCustomSchemes(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderGetCustomSchemesEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderGetCustomSchemesEventPtr}
  {$DEFINE EventName := OnGetCustomSchemes}
  WVEventMethodCodeNotObject
end;

// event
procedure TWVLoader_OnNewBrowserVersionAvailable(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderNewBrowserVersionAvailableEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderNewBrowserVersionAvailableEventPtr}
  {$DEFINE EventName := OnNewBrowserVersionAvailable}
  WVEventMethodCodeNotObject
end;

// event
procedure TWVLoader_OnBrowserProcessExited(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderBrowserProcessExitedEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderBrowserProcessExitedEventPtr}
  {$DEFINE EventName := OnBrowserProcessExited}
  WVEventMethodCodeNotObject
end;

// event
procedure TWVLoader_OnProcessInfosChanged(AObj: TWVLoader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVLoader_TLoaderProcessInfosChangedEvent}
  {$DEFINE EventMethodPtr := TWVLoader_TLoaderProcessInfosChangedEventPtr}
  {$DEFINE EventName := OnProcessInfosChanged}
  WVEventMethodCodeNotObject
end;

exports
  TWVLoader_Create,
  TWVLoader_StartWebView2,
  TWVLoader_CompareVersions,
  TWVLoader_UpdateDeviceScaleFactor,
  TWVLoader_AppendErrorLog,
  TWVLoader_Environment,
  TWVLoader_Status,
  TWVLoader_AvailableBrowserVersion,
  TWVLoader_AvailableBrowserVersionWithOptions,
  TWVLoader_ErrorMessage,
  TWVLoader_ErrorCode,
  TWVLoader_SetCurrentDir,
  TWVLoader_Initialized,
  TWVLoader_InitializationError,
  TWVLoader_CheckFiles,
  TWVLoader_ShowMessageDlg,
  TWVLoader_InitCOMLibrary,
  TWVLoader_CustomCommandLineSwitches,
  TWVLoader_DeviceScaleFactor,
  TWVLoader_ReRaiseExceptions,
  TWVLoader_InstalledRuntimeVersion,
  TWVLoader_LoaderDllPath,
  TWVLoader_UseInternalLoader,
  TWVLoader_AllowOldRuntime,
  TWVLoader_BrowserExecPath,
  TWVLoader_UserDataFolder,
  TWVLoader_AdditionalBrowserArguments,
  TWVLoader_Language,
  TWVLoader_TargetCompatibleBrowserVersion,
  TWVLoader_AllowSingleSignOnUsingOSPrimaryAccount,
  TWVLoader_ExclusiveUserDataFolderAccess,
  TWVLoader_CustomCrashReportingEnabled,
  TWVLoader_EnableTrackingPrevention,
  TWVLoader_AreBrowserExtensionsEnabled,
  TWVLoader_ChannelSearchKind,
  TWVLoader_ReleaseChannels,
  TWVLoader_ScrollBarStyle,
  TWVLoader_EnableGPU,
  TWVLoader_EnableFeatures,
  TWVLoader_DisableFeatures,
  TWVLoader_EnableBlinkFeatures,
  TWVLoader_DisableBlinkFeatures,
  TWVLoader_BlinkSettings,
  TWVLoader_ForceFieldTrials,
  TWVLoader_ForceFieldTrialParams,
  TWVLoader_SmartScreenProtectionEnabled,
  TWVLoader_AllowInsecureLocalhost,
  TWVLoader_DisableWebSecurity,
  TWVLoader_TouchEvents,
  TWVLoader_HyperlinkAuditing,
  TWVLoader_AutoplayPolicy,
  TWVLoader_MuteAudio,
  TWVLoader_DefaultEncoding,
  TWVLoader_KioskPrinting,
  TWVLoader_ProxySettings,
  TWVLoader_AllowFileAccessFromFiles,
  TWVLoader_AllowRunningInsecureContent,
  TWVLoader_DisableBackgroundNetworking,
  TWVLoader_ForcedDeviceScaleFactor,
  TWVLoader_RemoteDebuggingPort,
  TWVLoader_RemoteAllowOrigins,
  TWVLoader_DebugLog,
  TWVLoader_DebugLogLevel,
  TWVLoader_JavaScriptFlags,
  TWVLoader_DisableEdgePitchNotification,
  TWVLoader_TreatInsecureOriginAsSecure,
  TWVLoader_OpenOfficeDocumentsInWebViewer,
  TWVLoader_MicrosoftSignIn,
  TWVLoader_TLS13HybridizedKyberSupport,
  TWVLoader_UserAgent,
  TWVLoader_AutoAcceptCamAndMicCapture,
  TWVLoader_SupportsCompositionController,
  TWVLoader_ProcessInfos,
  TWVLoader_SupportsControllerOptions,
  TWVLoader_FailureReportFolderPath,
  TWVLoader_OnEnvironmentCreated,
  TWVLoader_OnInitializationError,
  TWVLoader_OnGetCustomSchemes,
  TWVLoader_OnNewBrowserVersionAvailable,
  TWVLoader_OnBrowserProcessExited,
  TWVLoader_OnProcessInfosChanged;