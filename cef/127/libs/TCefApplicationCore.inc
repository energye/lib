// constructor
function TCefApplicationCore_Create(out IntfApplicationCoreEvents: IApplicationCoreEvents): TCefApplicationCore; extdecl;
begin
  {$define handleExceptionID := 300}
  handleExceptionBegin
  Result := TCefApplicationCore.Create();
  IntfApplicationCoreEvents := Result as IApplicationCoreEvents;
  handleExceptionEnd
end;

// function
function TCefApplicationCore_CheckCEFLibrary(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 301}
  handleExceptionBegin
  Result := AObj.CheckCEFLibrary();
  handleExceptionEnd
end;

// function
function TCefApplicationCore_StartMainProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 302}
  handleExceptionBegin
  Result := AObj.StartMainProcess();
  handleExceptionEnd
end;

// function
function TCefApplicationCore_StartSubProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 303}
  handleExceptionBegin
  Result := AObj.StartSubProcess();
  handleExceptionEnd
end;

// function
function TCefApplicationCore_ValidComponentID(AObj: TCefApplicationCore; aComponentID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 304}
  handleExceptionBegin
  Result := AObj.ValidComponentID(aComponentID);
  handleExceptionEnd
end;

// function
function TCefApplicationCore_NextComponentID(AObj: TCefApplicationCore): integer; extdecl;
begin
  {$define handleExceptionID := 305}
  handleExceptionBegin
  Result := AObj.NextComponentID();
  handleExceptionEnd
end;

// procedure
procedure TCefApplicationCore_AddCustomCommandLine(AObj: TCefApplicationCore; const aCommandLine: PChar; const aValue: PChar); extdecl;
begin
  {$define handleExceptionID := 306}
  handleExceptionBegin
  AObj.AddCustomCommandLine(aCommandLine, aValue);
  handleExceptionEnd
end;

// procedure
procedure TCefApplicationCore_DoMessageLoopWork(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionID := 307}
  handleExceptionBegin
  AObj.DoMessageLoopWork();
  handleExceptionEnd
end;

// procedure
procedure TCefApplicationCore_RunMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionID := 308}
  handleExceptionBegin
  AObj.RunMessageLoop();
  handleExceptionEnd
end;

// procedure
procedure TCefApplicationCore_QuitMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionID := 309}
  handleExceptionBegin
  AObj.QuitMessageLoop();
  handleExceptionEnd
end;

// procedure
procedure TCefApplicationCore_UpdateDeviceScaleFactor(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionID := 310}
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

{$IFDEF MACOSX}
// procedure
procedure TCefApplicationCore_InitLibLocationFromArgs(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionID := 311}
  handleExceptionBegin
  AObj.InitLibLocationFromArgs();
  handleExceptionEnd
end;
{$ENDIF}

// procedure
procedure TCefApplicationCore_RemoveComponentID(AObj: TCefApplicationCore; aComponentID: integer); extdecl;
begin
  {$define handleExceptionID := 312}
  handleExceptionBegin
  AObj.RemoveComponentID(aComponentID);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_NoSandbox(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NoSandbox := AValue
  end else
    Result := AObj.NoSandbox;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_BrowserSubprocessPath(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BrowserSubprocessPath := AValue
  end else
    StringBufferCreate(AObj.BrowserSubprocessPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_FrameworkDirPath(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameworkDirPath := AValue
  end else
    StringBufferCreate(AObj.FrameworkDirPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_MainBundlePath(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MainBundlePath := AValue
  end else
    StringBufferCreate(AObj.MainBundlePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeRuntime(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 317}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChromeRuntime := AValue
  end else
    Result := AObj.ChromeRuntime;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MultiThreadedMessageLoop(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 318}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiThreadedMessageLoop := AValue
  end else
    Result := AObj.MultiThreadedMessageLoop;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ExternalMessagePump(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExternalMessagePump := AValue
  end else
    Result := AObj.ExternalMessagePump;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_WindowlessRenderingEnabled(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 320}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowlessRenderingEnabled := AValue
  end else
    Result := AObj.WindowlessRenderingEnabled;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_CommandLineArgsDisabled(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 321}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommandLineArgsDisabled := AValue
  end else
    Result := AObj.CommandLineArgsDisabled;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_Cache(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 322}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cache := AValue
  end else
    StringBufferCreate(AObj.Cache, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_RootCache(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 323}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootCache := AValue
  end else
    StringBufferCreate(AObj.RootCache, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_PersistSessionCookies(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 324}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PersistSessionCookies := AValue
  end else
    Result := AObj.PersistSessionCookies;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_PersistUserPreferences(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 325}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PersistUserPreferences := AValue
  end else
    Result := AObj.PersistUserPreferences;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_UserAgent(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 326}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserAgent := AValue
  end else
    StringBufferCreate(AObj.UserAgent, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_UserAgentProduct(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 327}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserAgentProduct := AValue
  end else
    StringBufferCreate(AObj.UserAgentProduct, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_Locale(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 328}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Locale := AValue
  end else
    StringBufferCreate(AObj.Locale, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LogFile(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 329}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogFile := AValue
  end else
    StringBufferCreate(AObj.LogFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_LogSeverity(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefLogSeverity): TCefLogSeverity; extdecl;
begin
  {$define handleExceptionID := 330}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogSeverity := AValue
  end else
    Result := AObj.LogSeverity;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_LogItems(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefLogItems): TCefLogItems; extdecl;
begin
  {$define handleExceptionID := 331}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogItems := AValue
  end else
    Result := AObj.LogItems;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_JavaScriptFlags(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 332}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavaScriptFlags := AValue
  end else
    StringBufferCreate(AObj.JavaScriptFlags, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ResourcesDirPath(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 333}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResourcesDirPath := AValue
  end else
    StringBufferCreate(AObj.ResourcesDirPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LocalesDirPath(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 334}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LocalesDirPath := AValue
  end else
    StringBufferCreate(AObj.LocalesDirPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_PackLoadingDisabled(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 335}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PackLoadingDisabled := AValue
  end else
    Result := AObj.PackLoadingDisabled;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_RemoteDebuggingPort(ASet: LongBool; AObj: TCefApplicationCore; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 336}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RemoteDebuggingPort := AValue
  end else
    Result := AObj.RemoteDebuggingPort;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_UncaughtExceptionStackSize(ASet: LongBool; AObj: TCefApplicationCore; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 337}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UncaughtExceptionStackSize := AValue
  end else
    Result := AObj.UncaughtExceptionStackSize;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_BackgroundColor(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 338}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_AcceptLanguageList(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 339}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AcceptLanguageList := AValue
  end else
    StringBufferCreate(AObj.AcceptLanguageList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_CookieableSchemesList(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 340}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CookieableSchemesList := AValue
  end else
    StringBufferCreate(AObj.CookieableSchemesList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_CookieableSchemesExcludeDefaults(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 341}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CookieableSchemesExcludeDefaults := AValue
  end else
    Result := AObj.CookieableSchemesExcludeDefaults;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ChromePolicyId(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 342}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChromePolicyId := AValue
  end else
    StringBufferCreate(AObj.ChromePolicyId, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeAppIconId(ASet: LongBool; AObj: TCefApplicationCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 343}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChromeAppIconId := AValue
  end else
    Result := AObj.ChromeAppIconId;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_SingleProcess(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 344}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SingleProcess := AValue
  end else
    Result := AObj.SingleProcess;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnableMediaStream(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 345}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableMediaStream := AValue
  end else
    Result := AObj.EnableMediaStream;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnableSpeechInput(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 346}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableSpeechInput := AValue
  end else
    Result := AObj.EnableSpeechInput;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_UseFakeUIForMediaStream(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 347}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseFakeUIForMediaStream := AValue
  end else
    Result := AObj.UseFakeUIForMediaStream;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnableUsermediaScreenCapturing(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 348}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableUsermediaScreenCapturing := AValue
  end else
    Result := AObj.EnableUsermediaScreenCapturing;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnableGPU(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 349}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableGPU := AValue
  end else
    Result := AObj.EnableGPU;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_EnableFeatures(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 350}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableFeatures := AValue
  end else
    StringBufferCreate(AObj.EnableFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_DisableFeatures(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 351}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableFeatures := AValue
  end else
    StringBufferCreate(AObj.DisableFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_EnableBlinkFeatures(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 352}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableBlinkFeatures := AValue
  end else
    StringBufferCreate(AObj.EnableBlinkFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_DisableBlinkFeatures(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 353}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableBlinkFeatures := AValue
  end else
    StringBufferCreate(AObj.DisableBlinkFeatures, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_BlinkSettings(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 354}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlinkSettings := AValue
  end else
    StringBufferCreate(AObj.BlinkSettings, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ForceFieldTrials(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 355}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForceFieldTrials := AValue
  end else
    StringBufferCreate(AObj.ForceFieldTrials, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ForceFieldTrialParams(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 356}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForceFieldTrialParams := AValue
  end else
    StringBufferCreate(AObj.ForceFieldTrialParams, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_SmoothScrolling(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 357}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SmoothScrolling := AValue
  end else
    Result := AObj.SmoothScrolling;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MuteAudio(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 358}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MuteAudio := AValue
  end else
    Result := AObj.MuteAudio;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_SitePerProcess(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 359}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SitePerProcess := AValue
  end else
    Result := AObj.SitePerProcess;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableWebSecurity(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 360}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableWebSecurity := AValue
  end else
    Result := AObj.DisableWebSecurity;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisablePDFExtension(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 361}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisablePDFExtension := AValue
  end else
    Result := AObj.DisablePDFExtension;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableSiteIsolationTrials(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 362}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableSiteIsolationTrials := AValue
  end else
    Result := AObj.DisableSiteIsolationTrials;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableChromeLoginPrompt(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 363}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableChromeLoginPrompt := AValue
  end else
    Result := AObj.DisableChromeLoginPrompt;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableExtensions(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 364}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableExtensions := AValue
  end else
    Result := AObj.DisableExtensions;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AutoplayPolicy(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefAutoplayPolicy): TCefAutoplayPolicy; extdecl;
begin
  {$define handleExceptionID := 365}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoplayPolicy := AValue
  end else
    Result := AObj.AutoplayPolicy;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableBackgroundNetworking(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 366}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableBackgroundNetworking := AValue
  end else
    Result := AObj.DisableBackgroundNetworking;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MetricsRecordingOnly(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 367}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MetricsRecordingOnly := AValue
  end else
    Result := AObj.MetricsRecordingOnly;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AllowFileAccessFromFiles(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 368}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowFileAccessFromFiles := AValue
  end else
    Result := AObj.AllowFileAccessFromFiles;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AllowRunningInsecureContent(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 369}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowRunningInsecureContent := AValue
  end else
    Result := AObj.AllowRunningInsecureContent;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnablePrintPreview(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 370}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnablePrintPreview := AValue
  end else
    Result := AObj.EnablePrintPreview;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_DefaultEncoding(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 371}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultEncoding := AValue
  end else
    StringBufferCreate(AObj.DefaultEncoding, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableJavascript(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 372}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableJavascript := AValue
  end else
    Result := AObj.DisableJavascript;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableJavascriptCloseWindows(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 373}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableJavascriptCloseWindows := AValue
  end else
    Result := AObj.DisableJavascriptCloseWindows;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableJavascriptAccessClipboard(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 374}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableJavascriptAccessClipboard := AValue
  end else
    Result := AObj.DisableJavascriptAccessClipboard;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableJavascriptDomPaste(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 375}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableJavascriptDomPaste := AValue
  end else
    Result := AObj.DisableJavascriptDomPaste;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AllowUniversalAccessFromFileUrls(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 376}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowUniversalAccessFromFileUrls := AValue
  end else
    Result := AObj.AllowUniversalAccessFromFileUrls;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableImageLoading(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 377}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableImageLoading := AValue
  end else
    Result := AObj.DisableImageLoading;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ImageShrinkStandaloneToFit(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 378}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageShrinkStandaloneToFit := AValue
  end else
    Result := AObj.ImageShrinkStandaloneToFit;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableTextAreaResize(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 379}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableTextAreaResize := AValue
  end else
    Result := AObj.DisableTextAreaResize;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableTabToLinks(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 380}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableTabToLinks := AValue
  end else
    Result := AObj.DisableTabToLinks;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_EnableProfanityFilter(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 381}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableProfanityFilter := AValue
  end else
    Result := AObj.EnableProfanityFilter;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableSpellChecking(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 382}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableSpellChecking := AValue
  end else
    Result := AObj.DisableSpellChecking;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_OverrideSpellCheckLang(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 383}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OverrideSpellCheckLang := AValue
  end else
    StringBufferCreate(AObj.OverrideSpellCheckLang, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_TouchEvents(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 384}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchEvents := AValue
  end else
    Result := AObj.TouchEvents;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableReadingFromCanvas(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 385}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableReadingFromCanvas := AValue
  end else
    Result := AObj.DisableReadingFromCanvas;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_HyperlinkAuditing(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 386}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HyperlinkAuditing := AValue
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableNewBrowserInfoTimeout(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 387}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableNewBrowserInfoTimeout := AValue
  end else
    Result := AObj.DisableNewBrowserInfoTimeout;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_DevToolsProtocolLogFile(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 388}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DevToolsProtocolLogFile := AValue
  end else
    StringBufferCreate(AObj.DevToolsProtocolLogFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ForcedDeviceScaleFactor(ASet: LongBool; AObj: TCefApplicationCore; var AValue: single; var Result: single); extdecl;
begin
  {$define handleExceptionID := 389}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableZygote(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 390}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableZygote := AValue
  end else
    Result := AObj.DisableZygote;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_UseMockKeyChain(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 391}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseMockKeyChain := AValue
  end else
    Result := AObj.UseMockKeyChain;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableRequestHandlingForTesting(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 392}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableRequestHandlingForTesting := AValue
  end else
    Result := AObj.DisableRequestHandlingForTesting;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisablePopupBlocking(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 393}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisablePopupBlocking := AValue
  end else
    Result := AObj.DisablePopupBlocking;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableBackForwardCache(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 394}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableBackForwardCache := AValue
  end else
    Result := AObj.DisableBackForwardCache;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableComponentUpdate(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 395}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableComponentUpdate := AValue
  end else
    Result := AObj.DisableComponentUpdate;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AllowInsecureLocalhost(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 396}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowInsecureLocalhost := AValue
  end else
    Result := AObj.AllowInsecureLocalhost;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_KioskPrinting(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 397}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KioskPrinting := AValue
  end else
    Result := AObj.KioskPrinting;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_TreatInsecureOriginAsSecure(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 398}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreatInsecureOriginAsSecure := AValue
  end else
    StringBufferCreate(AObj.TreatInsecureOriginAsSecure, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_NetLogEnabled(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 399}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NetLogEnabled := AValue
  end else
    Result := AObj.NetLogEnabled;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_NetLogFile(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 400}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NetLogFile := AValue
  end else
    StringBufferCreate(AObj.NetLogFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_NetLogCaptureMode(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefNetLogCaptureMode): TCefNetLogCaptureMode; extdecl;
begin
  {$define handleExceptionID := 401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NetLogCaptureMode := AValue
  end else
    Result := AObj.NetLogCaptureMode;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_RemoteAllowOrigins(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RemoteAllowOrigins := AValue
  end else
    StringBufferCreate(AObj.RemoteAllowOrigins, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_AutoAcceptCamAndMicCapture(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoAcceptCamAndMicCapture := AValue
  end else
    Result := AObj.AutoAcceptCamAndMicCapture;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_UIColorMode(ASet: LongBool; AObj: TCefApplicationCore; AValue: TCefUIColorMode): TCefUIColorMode; extdecl;
begin
  {$define handleExceptionID := 404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UIColorMode := AValue
  end else
    Result := AObj.UIColorMode;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DisableHangMonitor(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableHangMonitor := AValue
  end else
    Result := AObj.DisableHangMonitor;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_HideCrashRestoreBubble(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideCrashRestoreBubble := AValue
  end else
    Result := AObj.HideCrashRestoreBubble;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_IgnoreCertificateErrors(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IgnoreCertificateErrors := AValue
  end else
    Result := AObj.IgnoreCertificateErrors;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_WindowsSandboxInfo(ASet: LongBool; AObj: TCefApplicationCore; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowsSandboxInfo := AValue
  end else
    Result := AObj.WindowsSandboxInfo;
  handleExceptionEnd
end;

{$IFDEF LINUX}
// property
function TCefApplicationCore_argcCopy(AObj: TCefApplicationCore): Integer; extdecl;
begin
  {$define handleExceptionID := 409}
  handleExceptionBegin
  Result := AObj.argcCopy;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF LINUX}
// property
function TCefApplicationCore_argvCopy(AObj: TCefApplicationCore): PPAnsiChar; extdecl;
begin
  {$define handleExceptionID := 410}
  handleExceptionBegin
  Result := AObj.argvCopy;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TCefApplicationCore_DeleteCache(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DeleteCache := AValue
  end else
    Result := AObj.DeleteCache;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_DeleteCookies(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DeleteCookies := AValue
  end else
    Result := AObj.DeleteCookies;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_CheckCEFFiles(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckCEFFiles := AValue
  end else
    Result := AObj.CheckCEFFiles;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ShowMessageDlg(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMessageDlg := AValue
  end else
    Result := AObj.ShowMessageDlg;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MissingBinariesException(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MissingBinariesException := AValue
  end else
    Result := AObj.MissingBinariesException;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_SetCurrentDir(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 416}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SetCurrentDir := AValue
  end else
    Result := AObj.SetCurrentDir;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_GlobalContextInitialized(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 417}
  handleExceptionBegin
  Result := AObj.GlobalContextInitialized;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeMajorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionID := 418}
  handleExceptionBegin
  Result := AObj.ChromeMajorVer;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeMinorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionID := 419}
  handleExceptionBegin
  Result := AObj.ChromeMinorVer;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeRelease(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionID := 420}
  handleExceptionBegin
  Result := AObj.ChromeRelease;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChromeBuild(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionID := 421}
  handleExceptionBegin
  Result := AObj.ChromeBuild;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ChromeVersion(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 422}
  handleExceptionBegin
  StringBufferCreate(AObj.ChromeVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LibCefVersion(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 423}
  handleExceptionBegin
  StringBufferCreate(AObj.LibCefVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LibCefPath(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 424}
  handleExceptionBegin
  StringBufferCreate(AObj.LibCefPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ChromeElfPath(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 425}
  handleExceptionBegin
  StringBufferCreate(AObj.ChromeElfPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_LibLoaded(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 426}
  handleExceptionBegin
  Result := AObj.LibLoaded;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_LogProcessInfo(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 427}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogProcessInfo := AValue
  end else
    Result := AObj.LogProcessInfo;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ReRaiseExceptions(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 428}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReRaiseExceptions := AValue
  end else
    Result := AObj.ReRaiseExceptions;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_DeviceScaleFactor(AObj: TCefApplicationCore; var Result: single); extdecl;
begin
  {$define handleExceptionID := 429}
  handleExceptionBegin
  Result := AObj.DeviceScaleFactor;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LocalesRequired(ASet: LongBool; AObj: TCefApplicationCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 430}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LocalesRequired := AValue
  end else
    StringBufferCreate(AObj.LocalesRequired, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ProcessType(AObj: TCefApplicationCore): TCefProcessType; extdecl;
begin
  {$define handleExceptionID := 431}
  handleExceptionBegin
  Result := AObj.ProcessType;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MustCreateResourceBundleHandler(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 432}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustCreateResourceBundleHandler := AValue
  end else
    Result := AObj.MustCreateResourceBundleHandler;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MustCreateBrowserProcessHandler(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 433}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustCreateBrowserProcessHandler := AValue
  end else
    Result := AObj.MustCreateBrowserProcessHandler;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MustCreateRenderProcessHandler(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 434}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustCreateRenderProcessHandler := AValue
  end else
    Result := AObj.MustCreateRenderProcessHandler;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MustCreateLoadHandler(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 435}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustCreateLoadHandler := AValue
  end else
    Result := AObj.MustCreateLoadHandler;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
procedure TCefApplicationCore_OsmodalLoop(AObj: TCefApplicationCore; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 436}
  handleExceptionBegin
  AObj.OsmodalLoop := AValue;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TCefApplicationCore_Status(AObj: TCefApplicationCore): TCefAplicationStatus; extdecl;
begin
  {$define handleExceptionID := 437}
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_MissingLibFiles(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 438}
  handleExceptionBegin
  StringBufferCreate(AObj.MissingLibFiles, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_MustFreeLibrary(ASet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 439}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustFreeLibrary := AValue
  end else
    Result := AObj.MustFreeLibrary;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ChildProcessesCount(AObj: TCefApplicationCore): integer; extdecl;
begin
  {$define handleExceptionID := 440}
  handleExceptionBegin
  Result := AObj.ChildProcessesCount;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_UsedMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 441}
  handleExceptionBegin
  Result := AObj.UsedMemory;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_TotalSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 442}
  handleExceptionBegin
  Result := AObj.TotalSystemMemory;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_AvailableSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 443}
  handleExceptionBegin
  Result := AObj.AvailableSystemMemory;
  handleExceptionEnd
end;

// property
function TCefApplicationCore_SystemMemoryLoad(AObj: TCefApplicationCore): cardinal; extdecl;
begin
  {$define handleExceptionID := 444}
  handleExceptionBegin
  Result := AObj.SystemMemoryLoad;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ApiHashUniversal(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 445}
  handleExceptionBegin
  StringBufferCreate(AObj.ApiHashUniversal, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ApiHashPlatform(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 446}
  handleExceptionBegin
  StringBufferCreate(AObj.ApiHashPlatform, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_ApiHashCommit(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 447}
  handleExceptionBegin
  StringBufferCreate(AObj.ApiHashCommit, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCefApplicationCore_ExitCode(AObj: TCefApplicationCore): TCefResultCode; extdecl;
begin
  {$define handleExceptionID := 448}
  handleExceptionBegin
  Result := AObj.ExitCode;
  handleExceptionEnd
end;

// property
procedure TCefApplicationCore_LastErrorMessage(AObj: TCefApplicationCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 449}
  handleExceptionBegin
  StringBufferCreate(AObj.LastErrorMessage, AStrData, AStrSize);
  handleExceptionEnd
end;

{$IFDEF LINUX}
// property
function TCefApplicationCore_XDisplay(AObj: TCefApplicationCore): Pointer; extdecl;
begin
  {$define handleExceptionID := 450}
  handleExceptionBegin
  Result := AObj.XDisplay;
  handleExceptionEnd
end;
{$ENDIF}

// event
procedure TCefApplicationCore_OnRegCustomSchemes(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRegisterCustomSchemesEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRegisterCustomSchemesEventPtr}
  {$DEFINE EventName := OnRegCustomSchemes}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnRegisterCustomPreferences(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRegisterCustomPreferencesEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRegisterCustomPreferencesEventPtr}
  {$DEFINE EventName := OnRegisterCustomPreferences}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnContextInitialized(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnContextInitializedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnContextInitializedEventPtr}
  {$DEFINE EventName := OnContextInitialized}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnBeforeChildProcessLaunch(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnBeforeChildProcessLaunchEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnBeforeChildProcessLaunchEventPtr}
  {$DEFINE EventName := OnBeforeChildProcessLaunch}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnAlreadyRunningAppRelaunch(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnAlreadyRunningAppRelaunchEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnAlreadyRunningAppRelaunchEventPtr}
  {$DEFINE EventName := OnAlreadyRunningAppRelaunch}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnScheduleMessagePumpWork(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnScheduleMessagePumpWorkEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnScheduleMessagePumpWorkEventPtr}
  {$DEFINE EventName := OnScheduleMessagePumpWork}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnGetDefaultClient(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnGetDefaultClientEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnGetDefaultClientEventPtr}
  {$DEFINE EventName := OnGetDefaultClient}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnGetDefaultRequestContextHandler(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnGetDefaultRequestContextHandlerEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnGetDefaultRequestContextHandlerEventPtr}
  {$DEFINE EventName := OnGetDefaultRequestContextHandler}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnGetLocalizedString(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnGetLocalizedStringEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnGetLocalizedStringEventPtr}
  {$DEFINE EventName := OnGetLocalizedString}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnGetDataResource(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnGetDataResourceEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnGetDataResourceEventPtr}
  {$DEFINE EventName := OnGetDataResource}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnGetDataResourceForScale(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnGetDataResourceForScaleEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnGetDataResourceForScaleEventPtr}
  {$DEFINE EventName := OnGetDataResourceForScale}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnWebKitInitialized(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnWebKitInitializedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnWebKitInitializedEventPtr}
  {$DEFINE EventName := OnWebKitInitialized}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnBrowserCreated(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnBrowserCreatedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnBrowserCreatedEventPtr}
  {$DEFINE EventName := OnBrowserCreated}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnBrowserDestroyed(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnBrowserDestroyedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnBrowserDestroyedEventPtr}
  {$DEFINE EventName := OnBrowserDestroyed}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnContextCreated(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnContextCreatedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnContextCreatedEventPtr}
  {$DEFINE EventName := OnContextCreated}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnContextReleased(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnContextReleasedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnContextReleasedEventPtr}
  {$DEFINE EventName := OnContextReleased}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnUncaughtException(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnUncaughtExceptionEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnUncaughtExceptionEventPtr}
  {$DEFINE EventName := OnUncaughtException}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnFocusedNodeChanged(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnFocusedNodeChangedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnFocusedNodeChangedEventPtr}
  {$DEFINE EventName := OnFocusedNodeChanged}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnProcessMessageReceived(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnProcessMessageReceivedEvent}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnProcessMessageReceivedEventPtr}
  {$DEFINE EventName := OnProcessMessageReceived}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnLoadingStateChange(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRenderLoadingStateChange}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRenderLoadingStateChangePtr}
  {$DEFINE EventName := OnLoadingStateChange}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnLoadStart(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRenderLoadStart}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRenderLoadStartPtr}
  {$DEFINE EventName := OnLoadStart}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnLoadEnd(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRenderLoadEnd}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRenderLoadEndPtr}
  {$DEFINE EventName := OnLoadEnd}
  CEFEventMethodCodeNotObject
end;

// event
procedure TCefApplicationCore_OnLoadError(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCefApplicationCore_TOnRenderLoadError}
  {$DEFINE EventMethodPtr := TCefApplicationCore_TOnRenderLoadErrorPtr}
  {$DEFINE EventName := OnLoadError}
  CEFEventMethodCodeNotObject
end;

exports
  TCefApplicationCore_Create,
  TCefApplicationCore_CheckCEFLibrary,
  TCefApplicationCore_StartMainProcess,
  TCefApplicationCore_StartSubProcess,
  TCefApplicationCore_ValidComponentID,
  TCefApplicationCore_NextComponentID,
  TCefApplicationCore_AddCustomCommandLine,
  TCefApplicationCore_DoMessageLoopWork,
  TCefApplicationCore_RunMessageLoop,
  TCefApplicationCore_QuitMessageLoop,
  TCefApplicationCore_UpdateDeviceScaleFactor,
{$IFDEF MACOSX}
  TCefApplicationCore_InitLibLocationFromArgs,
{$ENDIF}
  TCefApplicationCore_RemoveComponentID,
  TCefApplicationCore_NoSandbox,
  TCefApplicationCore_BrowserSubprocessPath,
  TCefApplicationCore_FrameworkDirPath,
  TCefApplicationCore_MainBundlePath,
  TCefApplicationCore_ChromeRuntime,
  TCefApplicationCore_MultiThreadedMessageLoop,
  TCefApplicationCore_ExternalMessagePump,
  TCefApplicationCore_WindowlessRenderingEnabled,
  TCefApplicationCore_CommandLineArgsDisabled,
  TCefApplicationCore_Cache,
  TCefApplicationCore_RootCache,
  TCefApplicationCore_PersistSessionCookies,
  TCefApplicationCore_PersistUserPreferences,
  TCefApplicationCore_UserAgent,
  TCefApplicationCore_UserAgentProduct,
  TCefApplicationCore_Locale,
  TCefApplicationCore_LogFile,
  TCefApplicationCore_LogSeverity,
  TCefApplicationCore_LogItems,
  TCefApplicationCore_JavaScriptFlags,
  TCefApplicationCore_ResourcesDirPath,
  TCefApplicationCore_LocalesDirPath,
  TCefApplicationCore_PackLoadingDisabled,
  TCefApplicationCore_RemoteDebuggingPort,
  TCefApplicationCore_UncaughtExceptionStackSize,
  TCefApplicationCore_BackgroundColor,
  TCefApplicationCore_AcceptLanguageList,
  TCefApplicationCore_CookieableSchemesList,
  TCefApplicationCore_CookieableSchemesExcludeDefaults,
  TCefApplicationCore_ChromePolicyId,
  TCefApplicationCore_ChromeAppIconId,
  TCefApplicationCore_SingleProcess,
  TCefApplicationCore_EnableMediaStream,
  TCefApplicationCore_EnableSpeechInput,
  TCefApplicationCore_UseFakeUIForMediaStream,
  TCefApplicationCore_EnableUsermediaScreenCapturing,
  TCefApplicationCore_EnableGPU,
  TCefApplicationCore_EnableFeatures,
  TCefApplicationCore_DisableFeatures,
  TCefApplicationCore_EnableBlinkFeatures,
  TCefApplicationCore_DisableBlinkFeatures,
  TCefApplicationCore_BlinkSettings,
  TCefApplicationCore_ForceFieldTrials,
  TCefApplicationCore_ForceFieldTrialParams,
  TCefApplicationCore_SmoothScrolling,
  TCefApplicationCore_MuteAudio,
  TCefApplicationCore_SitePerProcess,
  TCefApplicationCore_DisableWebSecurity,
  TCefApplicationCore_DisablePDFExtension,
  TCefApplicationCore_DisableSiteIsolationTrials,
  TCefApplicationCore_DisableChromeLoginPrompt,
  TCefApplicationCore_DisableExtensions,
  TCefApplicationCore_AutoplayPolicy,
  TCefApplicationCore_DisableBackgroundNetworking,
  TCefApplicationCore_MetricsRecordingOnly,
  TCefApplicationCore_AllowFileAccessFromFiles,
  TCefApplicationCore_AllowRunningInsecureContent,
  TCefApplicationCore_EnablePrintPreview,
  TCefApplicationCore_DefaultEncoding,
  TCefApplicationCore_DisableJavascript,
  TCefApplicationCore_DisableJavascriptCloseWindows,
  TCefApplicationCore_DisableJavascriptAccessClipboard,
  TCefApplicationCore_DisableJavascriptDomPaste,
  TCefApplicationCore_AllowUniversalAccessFromFileUrls,
  TCefApplicationCore_DisableImageLoading,
  TCefApplicationCore_ImageShrinkStandaloneToFit,
  TCefApplicationCore_DisableTextAreaResize,
  TCefApplicationCore_DisableTabToLinks,
  TCefApplicationCore_EnableProfanityFilter,
  TCefApplicationCore_DisableSpellChecking,
  TCefApplicationCore_OverrideSpellCheckLang,
  TCefApplicationCore_TouchEvents,
  TCefApplicationCore_DisableReadingFromCanvas,
  TCefApplicationCore_HyperlinkAuditing,
  TCefApplicationCore_DisableNewBrowserInfoTimeout,
  TCefApplicationCore_DevToolsProtocolLogFile,
  TCefApplicationCore_ForcedDeviceScaleFactor,
  TCefApplicationCore_DisableZygote,
  TCefApplicationCore_UseMockKeyChain,
  TCefApplicationCore_DisableRequestHandlingForTesting,
  TCefApplicationCore_DisablePopupBlocking,
  TCefApplicationCore_DisableBackForwardCache,
  TCefApplicationCore_DisableComponentUpdate,
  TCefApplicationCore_AllowInsecureLocalhost,
  TCefApplicationCore_KioskPrinting,
  TCefApplicationCore_TreatInsecureOriginAsSecure,
  TCefApplicationCore_NetLogEnabled,
  TCefApplicationCore_NetLogFile,
  TCefApplicationCore_NetLogCaptureMode,
  TCefApplicationCore_RemoteAllowOrigins,
  TCefApplicationCore_AutoAcceptCamAndMicCapture,
  TCefApplicationCore_UIColorMode,
  TCefApplicationCore_DisableHangMonitor,
  TCefApplicationCore_HideCrashRestoreBubble,
  TCefApplicationCore_IgnoreCertificateErrors,
  TCefApplicationCore_WindowsSandboxInfo,
{$IFDEF LINUX}
  TCefApplicationCore_argcCopy,
{$ENDIF}
{$IFDEF LINUX}
  TCefApplicationCore_argvCopy,
{$ENDIF}
  TCefApplicationCore_DeleteCache,
  TCefApplicationCore_DeleteCookies,
  TCefApplicationCore_CheckCEFFiles,
  TCefApplicationCore_ShowMessageDlg,
  TCefApplicationCore_MissingBinariesException,
  TCefApplicationCore_SetCurrentDir,
  TCefApplicationCore_GlobalContextInitialized,
  TCefApplicationCore_ChromeMajorVer,
  TCefApplicationCore_ChromeMinorVer,
  TCefApplicationCore_ChromeRelease,
  TCefApplicationCore_ChromeBuild,
  TCefApplicationCore_ChromeVersion,
  TCefApplicationCore_LibCefVersion,
  TCefApplicationCore_LibCefPath,
  TCefApplicationCore_ChromeElfPath,
  TCefApplicationCore_LibLoaded,
  TCefApplicationCore_LogProcessInfo,
  TCefApplicationCore_ReRaiseExceptions,
  TCefApplicationCore_DeviceScaleFactor,
  TCefApplicationCore_LocalesRequired,
  TCefApplicationCore_ProcessType,
  TCefApplicationCore_MustCreateResourceBundleHandler,
  TCefApplicationCore_MustCreateBrowserProcessHandler,
  TCefApplicationCore_MustCreateRenderProcessHandler,
  TCefApplicationCore_MustCreateLoadHandler,
{$IFDEF MSWINDOWS}
  TCefApplicationCore_OsmodalLoop,
{$ENDIF}
  TCefApplicationCore_Status,
  TCefApplicationCore_MissingLibFiles,
  TCefApplicationCore_MustFreeLibrary,
  TCefApplicationCore_ChildProcessesCount,
  TCefApplicationCore_UsedMemory,
  TCefApplicationCore_TotalSystemMemory,
  TCefApplicationCore_AvailableSystemMemory,
  TCefApplicationCore_SystemMemoryLoad,
  TCefApplicationCore_ApiHashUniversal,
  TCefApplicationCore_ApiHashPlatform,
  TCefApplicationCore_ApiHashCommit,
  TCefApplicationCore_ExitCode,
  TCefApplicationCore_LastErrorMessage,
{$IFDEF LINUX}
  TCefApplicationCore_XDisplay,
{$ENDIF}
  TCefApplicationCore_OnRegCustomSchemes,
  TCefApplicationCore_OnRegisterCustomPreferences,
  TCefApplicationCore_OnContextInitialized,
  TCefApplicationCore_OnBeforeChildProcessLaunch,
  TCefApplicationCore_OnAlreadyRunningAppRelaunch,
  TCefApplicationCore_OnScheduleMessagePumpWork,
  TCefApplicationCore_OnGetDefaultClient,
  TCefApplicationCore_OnGetDefaultRequestContextHandler,
  TCefApplicationCore_OnGetLocalizedString,
  TCefApplicationCore_OnGetDataResource,
  TCefApplicationCore_OnGetDataResourceForScale,
  TCefApplicationCore_OnWebKitInitialized,
  TCefApplicationCore_OnBrowserCreated,
  TCefApplicationCore_OnBrowserDestroyed,
  TCefApplicationCore_OnContextCreated,
  TCefApplicationCore_OnContextReleased,
  TCefApplicationCore_OnUncaughtException,
  TCefApplicationCore_OnFocusedNodeChanged,
  TCefApplicationCore_OnProcessMessageReceived,
  TCefApplicationCore_OnLoadingStateChange,
  TCefApplicationCore_OnLoadStart,
  TCefApplicationCore_OnLoadEnd,
  TCefApplicationCore_OnLoadError;