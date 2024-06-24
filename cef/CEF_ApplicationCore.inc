
//constructor
function CefApplicationCore_Create(): TCefApplicationCore; extdecl;
begin
  handleExceptionBegin
  Result := TCefApplicationCore.Create();
  handleExceptionEnd
end;

//property
function CefApplicationCore_NoSandbox(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NoSandbox := AValue;
  end else
    Result := AObj.NoSandbox;
  handleExceptionEnd
end;

//property
function CefApplicationCore_BrowserSubprocessPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BrowserSubprocessPath := AValue;
  end else
    Result := ToPChar(AObj.BrowserSubprocessPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_FrameworkDirPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FrameworkDirPath := AValue;
  end else
    Result := ToPChar(AObj.FrameworkDirPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_MainBundlePath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MainBundlePath := AValue;
  end else
    Result := ToPChar(AObj.MainBundlePath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeRuntime(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChromeRuntime := AValue;
  end else
    Result := AObj.ChromeRuntime;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MultiThreadedMessageLoop(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiThreadedMessageLoop := AValue;
  end else
    Result := AObj.MultiThreadedMessageLoop;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ExternalMessagePump(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExternalMessagePump := AValue;
  end else
    Result := AObj.ExternalMessagePump;
  handleExceptionEnd
end;

//property
function CefApplicationCore_WindowlessRenderingEnabled(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowlessRenderingEnabled := AValue;
  end else
    Result := AObj.WindowlessRenderingEnabled;
  handleExceptionEnd
end;

//property
function CefApplicationCore_CommandLineArgsDisabled(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CommandLineArgsDisabled := AValue;
  end else
    Result := AObj.CommandLineArgsDisabled;
  handleExceptionEnd
end;

//property
function CefApplicationCore_Cache(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cache := AValue;
  end else
    Result := ToPChar(AObj.Cache);
  handleExceptionEnd
end;

//property
function CefApplicationCore_RootCache(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootCache := AValue;
  end else
    Result := ToPChar(AObj.RootCache);
  handleExceptionEnd
end;

//property
function CefApplicationCore_PersistSessionCookies(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PersistSessionCookies := AValue;
  end else
    Result := AObj.PersistSessionCookies;
  handleExceptionEnd
end;

//property
function CefApplicationCore_PersistUserPreferences(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PersistUserPreferences := AValue;
  end else
    Result := AObj.PersistUserPreferences;
  handleExceptionEnd
end;

//property
function CefApplicationCore_UserAgent(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
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
function CefApplicationCore_UserAgentProduct(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserAgentProduct := AValue;
  end else
    Result := ToPChar(AObj.UserAgentProduct);
  handleExceptionEnd
end;

//property
function CefApplicationCore_Locale(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Locale := AValue;
  end else
    Result := ToPChar(AObj.Locale);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LogFile(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LogFile := AValue;
  end else
    Result := ToPChar(AObj.LogFile);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LogSeverity(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefLogSeverity): TCefLogSeverity; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LogSeverity := AValue;
  end else
    Result := AObj.LogSeverity;
  handleExceptionEnd
end;

//property
function CefApplicationCore_LogItems(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefLogItems): TCefLogItems; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LogItems := AValue;
  end else
    Result := AObj.LogItems;
  handleExceptionEnd
end;

//property
function CefApplicationCore_JavaScriptFlags(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavaScriptFlags := AValue;
  end else
    Result := ToPChar(AObj.JavaScriptFlags);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ResourcesDirPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResourcesDirPath := AValue;
  end else
    Result := ToPChar(AObj.ResourcesDirPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LocalesDirPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LocalesDirPath := AValue;
  end else
    Result := ToPChar(AObj.LocalesDirPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_PackLoadingDisabled(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PackLoadingDisabled := AValue;
  end else
    Result := AObj.PackLoadingDisabled;
  handleExceptionEnd
end;

//property
function CefApplicationCore_RemoteDebuggingPort(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RemoteDebuggingPort := AValue;
  end else
    Result := AObj.RemoteDebuggingPort;
  handleExceptionEnd
end;

//property
function CefApplicationCore_UncaughtExceptionStackSize(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UncaughtExceptionStackSize := AValue;
  end else
    Result := AObj.UncaughtExceptionStackSize;
  handleExceptionEnd
end;

//property
function CefApplicationCore_BackgroundColor(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefColor): TCefColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundColor := AValue;
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AcceptLanguageList(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AcceptLanguageList := AValue;
  end else
    Result := ToPChar(AObj.AcceptLanguageList);
  handleExceptionEnd
end;

//property
function CefApplicationCore_CookieableSchemesList(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CookieableSchemesList := AValue;
  end else
    Result := ToPChar(AObj.CookieableSchemesList);
  handleExceptionEnd
end;

//property
function CefApplicationCore_CookieableSchemesExcludeDefaults(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CookieableSchemesExcludeDefaults := AValue;
  end else
    Result := AObj.CookieableSchemesExcludeDefaults;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromePolicyId(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChromePolicyId := AValue;
  end else
    Result := ToPChar(AObj.ChromePolicyId);
  handleExceptionEnd
end;

//property
function CefApplicationCore_SingleProcess(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SingleProcess := AValue;
  end else
    Result := AObj.SingleProcess;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableMediaStream(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableMediaStream := AValue;
  end else
    Result := AObj.EnableMediaStream;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableSpeechInput(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableSpeechInput := AValue;
  end else
    Result := AObj.EnableSpeechInput;
  handleExceptionEnd
end;

//property
function CefApplicationCore_UseFakeUIForMediaStream(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseFakeUIForMediaStream := AValue;
  end else
    Result := AObj.UseFakeUIForMediaStream;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableUsermediaScreenCapturing(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableUsermediaScreenCapturing := AValue;
  end else
    Result := AObj.EnableUsermediaScreenCapturing;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableGPU(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableGPU := AValue;
  end else
    Result := AObj.EnableGPU;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableFeatures(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableFeatures := AValue;
  end else
    Result := ToPChar(AObj.EnableFeatures);
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableFeatures(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableFeatures := AValue;
  end else
    Result := ToPChar(AObj.DisableFeatures);
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableBlinkFeatures(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableBlinkFeatures := AValue;
  end else
    Result := ToPChar(AObj.EnableBlinkFeatures);
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableBlinkFeatures(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableBlinkFeatures := AValue;
  end else
    Result := ToPChar(AObj.DisableBlinkFeatures);
  handleExceptionEnd
end;

//property
function CefApplicationCore_BlinkSettings(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BlinkSettings := AValue;
  end else
    Result := ToPChar(AObj.BlinkSettings);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ForceFieldTrials(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForceFieldTrials := AValue;
  end else
    Result := ToPChar(AObj.ForceFieldTrials);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ForceFieldTrialParams(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForceFieldTrialParams := AValue;
  end else
    Result := ToPChar(AObj.ForceFieldTrialParams);
  handleExceptionEnd
end;

//property
function CefApplicationCore_SmoothScrolling(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefState): TCefState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SmoothScrolling := AValue;
  end else
    Result := AObj.SmoothScrolling;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MuteAudio(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MuteAudio := AValue;
  end else
    Result := AObj.MuteAudio;
  handleExceptionEnd
end;

//property
function CefApplicationCore_SitePerProcess(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SitePerProcess := AValue;
  end else
    Result := AObj.SitePerProcess;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableWebSecurity(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableWebSecurity := AValue;
  end else
    Result := AObj.DisableWebSecurity;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisablePDFExtension(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisablePDFExtension := AValue;
  end else
    Result := AObj.DisablePDFExtension;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableSiteIsolationTrials(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableSiteIsolationTrials := AValue;
  end else
    Result := AObj.DisableSiteIsolationTrials;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableChromeLoginPrompt(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableChromeLoginPrompt := AValue;
  end else
    Result := AObj.DisableChromeLoginPrompt;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableExtensions(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableExtensions := AValue;
  end else
    Result := AObj.DisableExtensions;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AutoplayPolicy(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefAutoplayPolicy): TCefAutoplayPolicy; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoplayPolicy := AValue;
  end else
    Result := AObj.AutoplayPolicy;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableBackgroundNetworking(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableBackgroundNetworking := AValue;
  end else
    Result := AObj.DisableBackgroundNetworking;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MetricsRecordingOnly(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MetricsRecordingOnly := AValue;
  end else
    Result := AObj.MetricsRecordingOnly;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AllowFileAccessFromFiles(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowFileAccessFromFiles := AValue;
  end else
    Result := AObj.AllowFileAccessFromFiles;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AllowRunningInsecureContent(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowRunningInsecureContent := AValue;
  end else
    Result := AObj.AllowRunningInsecureContent;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnablePrintPreview(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnablePrintPreview := AValue;
  end else
    Result := AObj.EnablePrintPreview;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableJavascript(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableJavascript := AValue;
  end else
    Result := AObj.DisableJavascript;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableJavascriptCloseWindows(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableJavascriptCloseWindows := AValue;
  end else
    Result := AObj.DisableJavascriptCloseWindows;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableJavascriptAccessClipboard(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableJavascriptAccessClipboard := AValue;
  end else
    Result := AObj.DisableJavascriptAccessClipboard;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableJavascriptDomPaste(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableJavascriptDomPaste := AValue;
  end else
    Result := AObj.DisableJavascriptDomPaste;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AllowUniversalAccessFromFileUrls(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowUniversalAccessFromFileUrls := AValue;
  end else
    Result := AObj.AllowUniversalAccessFromFileUrls;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableImageLoading(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableImageLoading := AValue;
  end else
    Result := AObj.DisableImageLoading;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ImageShrinkStandaloneToFit(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageShrinkStandaloneToFit := AValue;
  end else
    Result := AObj.ImageShrinkStandaloneToFit;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableTextAreaResize(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableTextAreaResize := AValue;
  end else
    Result := AObj.DisableTextAreaResize;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableTabToLinks(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableTabToLinks := AValue;
  end else
    Result := AObj.DisableTabToLinks;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableProfanityFilter(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableProfanityFilter := AValue;
  end else
    Result := AObj.EnableProfanityFilter;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableSpellChecking(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableSpellChecking := AValue;
  end else
    Result := AObj.DisableSpellChecking;
  handleExceptionEnd
end;

//property
function CefApplicationCore_OverrideSpellCheckLang(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OverrideSpellCheckLang := AValue;
  end else
    Result := ToPChar(AObj.OverrideSpellCheckLang);
  handleExceptionEnd
end;

//property
function CefApplicationCore_TouchEvents(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefState): TCefState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchEvents := AValue;
  end else
    Result := AObj.TouchEvents;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableReadingFromCanvas(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableReadingFromCanvas := AValue;
  end else
    Result := AObj.DisableReadingFromCanvas;
  handleExceptionEnd
end;

//property
function CefApplicationCore_HyperlinkAuditing(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HyperlinkAuditing := AValue;
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableNewBrowserInfoTimeout(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableNewBrowserInfoTimeout := AValue;
  end else
    Result := AObj.DisableNewBrowserInfoTimeout;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DevToolsProtocolLogFile(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DevToolsProtocolLogFile := AValue;
  end else
    Result := ToPChar(AObj.DevToolsProtocolLogFile);
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_ForcedDeviceScaleFactor(AIsSet: LongBool; AObj: TCefApplicationCore; var AValue: single; var Result: single); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue;
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableZygote(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableZygote := AValue;
  end else
    Result := AObj.DisableZygote;
  handleExceptionEnd
end;

//property
function CefApplicationCore_UseMockKeyChain(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseMockKeyChain := AValue;
  end else
    Result := AObj.UseMockKeyChain;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableRequestHandlingForTesting(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableRequestHandlingForTesting := AValue;
  end else
    Result := AObj.DisableRequestHandlingForTesting;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisablePopupBlocking(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisablePopupBlocking := AValue;
  end else
    Result := AObj.DisablePopupBlocking;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableBackForwardCache(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableBackForwardCache := AValue;
  end else
    Result := AObj.DisableBackForwardCache;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DisableComponentUpdate(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableComponentUpdate := AValue;
  end else
    Result := AObj.DisableComponentUpdate;
  handleExceptionEnd
end;

//property
function CefApplicationCore_AllowInsecureLocalhost(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowInsecureLocalhost := AValue;
  end else
    Result := AObj.AllowInsecureLocalhost;
  handleExceptionEnd
end;

//property
function CefApplicationCore_KioskPrinting(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KioskPrinting := AValue;
  end else
    Result := AObj.KioskPrinting;
  handleExceptionEnd
end;

//property
function CefApplicationCore_TreatInsecureOriginAsSecure(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreatInsecureOriginAsSecure := AValue;
  end else
    Result := ToPChar(AObj.TreatInsecureOriginAsSecure);
  handleExceptionEnd
end;

//property
function CefApplicationCore_NetLogEnabled(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NetLogEnabled := AValue;
  end else
    Result := AObj.NetLogEnabled;
  handleExceptionEnd
end;

//property
function CefApplicationCore_NetLogFile(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NetLogFile := AValue;
  end else
    Result := ToPChar(AObj.NetLogFile);
  handleExceptionEnd
end;

//property
function CefApplicationCore_NetLogCaptureMode(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefNetLogCaptureMode): TCefNetLogCaptureMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NetLogCaptureMode := AValue;
  end else
    Result := AObj.NetLogCaptureMode;
  handleExceptionEnd
end;

//property
function CefApplicationCore_RemoteAllowOrigins(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RemoteAllowOrigins := AValue;
  end else
    Result := ToPChar(AObj.RemoteAllowOrigins);
  handleExceptionEnd
end;

//property
function CefApplicationCore_AutoAcceptCamAndMicCapture(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoAcceptCamAndMicCapture := AValue;
  end else
    Result := AObj.AutoAcceptCamAndMicCapture;
  handleExceptionEnd
end;

//property
function CefApplicationCore_UIColorMode(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefUIColorMode): TCefUIColorMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UIColorMode := AValue;
  end else
    Result := AObj.UIColorMode;
  handleExceptionEnd
end;

//property
function CefApplicationCore_IgnoreCertificateErrors(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
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
function CefApplicationCore_WindowsSandboxInfo(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: Pointer): Pointer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowsSandboxInfo := AValue;
  end else
    Result := AObj.WindowsSandboxInfo;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ArgcCopy(AObj: TCefApplicationCore): LongInt; extdecl;
begin
{$IFDEF LINUX}
  handleExceptionBegin
  Result := AObj.argcCopy;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_ArgvCopy(AObj: TCefApplicationCore): PPAnsiChar; extdecl;
begin
{$IFDEF LINUX}
  handleExceptionBegin
  Result := AObj.argvCopy;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_DeleteCache(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DeleteCache := AValue;
  end else
    Result := AObj.DeleteCache;
  handleExceptionEnd
end;

//property
function CefApplicationCore_DeleteCookies(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DeleteCookies := AValue;
  end else
    Result := AObj.DeleteCookies;
  handleExceptionEnd
end;

//property
function CefApplicationCore_CheckCEFFiles(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckCEFFiles := AValue;
  end else
    Result := AObj.CheckCEFFiles;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ShowMessageDlg(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowMessageDlg := AValue;
  end else
    Result := AObj.ShowMessageDlg;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MissingBinariesException(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MissingBinariesException := AValue;
  end else
    Result := AObj.MissingBinariesException;
  handleExceptionEnd
end;

//property
function CefApplicationCore_SetCurrentDir(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SetCurrentDir := AValue;
  end else
    Result := AObj.SetCurrentDir;
  handleExceptionEnd
end;

//property
function CefApplicationCore_GlobalContextInitialized(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GlobalContextInitialized;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeMajorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromeMajorVer;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeMinorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromeMinorVer;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeRelease(AObj: TCefApplicationCore): uint16; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromeRelease;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeBuild(AObj: TCefApplicationCore): uint16; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChromeBuild;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeVersion(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ChromeVersion);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibCefVersion(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LibCefVersion);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibCefPath(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LibCefPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeElfPath(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ChromeElfPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibLoaded(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LibLoaded;
  handleExceptionEnd
end;

//property
function CefApplicationCore_LogProcessInfo(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LogProcessInfo := AValue;
  end else
    Result := AObj.LogProcessInfo;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ReRaiseExceptions(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReRaiseExceptions := AValue;
  end else
    Result := AObj.ReRaiseExceptions;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_DeviceScaleFactor(AObj: TCefApplicationCore; var Result: single); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeviceScaleFactor;
  handleExceptionEnd
end;

//property
function CefApplicationCore_LocalesRequired(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LocalesRequired := AValue;
  end else
    Result := ToPChar(AObj.LocalesRequired);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ProcessType(AObj: TCefApplicationCore): TCefProcessType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcessType;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustCreateResourceBundleHandler(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustCreateResourceBundleHandler := AValue;
  end else
    Result := AObj.MustCreateResourceBundleHandler;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustCreateBrowserProcessHandler(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustCreateBrowserProcessHandler := AValue;
  end else
    Result := AObj.MustCreateBrowserProcessHandler;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustCreateRenderProcessHandler(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustCreateRenderProcessHandler := AValue;
  end else
    Result := AObj.MustCreateRenderProcessHandler;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustCreateLoadHandler(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustCreateLoadHandler := AValue;
  end else
    Result := AObj.MustCreateLoadHandler;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_OsmodalLoop(AObj: TCefApplicationCore; AValue: LongBool); extdecl;
begin
{$IFDEF MSWINDOWS}
  handleExceptionBegin
  AObj.OsmodalLoop := AValue;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_Status(AObj: TCefApplicationCore): TCefAplicationStatus; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MissingLibFiles(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.MissingLibFiles);
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustFreeLibrary(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustFreeLibrary := AValue;
  end else
    Result := AObj.MustFreeLibrary;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChildProcessesCount(AObj: TCefApplicationCore): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildProcessesCount;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_UsedMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.UsedMemory;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_TotalSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TotalSystemMemory;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_AvailableSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AvailableSystemMemory;
  handleExceptionEnd
end;

//property
function CefApplicationCore_SystemMemoryLoad(AObj: TCefApplicationCore): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SystemMemoryLoad;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashUniversal(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashUniversal);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashPlatform(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashPlatform);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashCommit(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashCommit);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LastErrorMessage(AObj: TCefApplicationCore): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LastErrorMessage);
  handleExceptionEnd
end;

//function
function CefApplicationCore_CheckCEFLibrary(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CheckCEFLibrary();
  handleExceptionEnd
end;

//function
function CefApplicationCore_StartMainProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StartMainProcess();
  handleExceptionEnd
end;

//function
function CefApplicationCore_StartSubProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StartSubProcess();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_AddCustomCommandLine(AObj: TCefApplicationCore; const aCommandLine: PChar; const aValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddCustomCommandLine(aCommandLine, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_DoMessageLoopWork(AObj: TCefApplicationCore); extdecl;
begin
  handleExceptionBegin
  AObj.DoMessageLoopWork();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_RunMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  handleExceptionBegin
  AObj.RunMessageLoop();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_QuitMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  handleExceptionBegin
  AObj.QuitMessageLoop();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_UpdateDeviceScaleFactor(AObj: TCefApplicationCore); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InitLibLocationFromArgs(AObj: TCefApplicationCore); extdecl;
begin
{$IFDEF DARWIN}
  handleExceptionBegin
  AObj.InitLibLocationFromArgs();
  handleExceptionEnd
{$ENDIF}
end;

//property event
procedure CefApplicationCore_SetOnRegCustomSchemes(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnRegCustomSchemes_DataPtr :=  AEventData;
  AObj.OnRegCustomSchemes := ApplicationCore_OnRegCustomSchemes;
end;

//property event
procedure CefApplicationCore_SetOnRegisterCustomPreferences(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnRegisterCustomPreferences_DataPtr :=  AEventData;
  AObj.OnRegisterCustomPreferences := ApplicationCore_OnRegisterCustomPreferences;
end;

//property event
procedure CefApplicationCore_SetOnContextInitialized(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnContextInitialized_DataPtr :=  AEventData;
  AObj.OnContextInitialized := ApplicationCore_OnContextInitialized;
end;

//property event
procedure CefApplicationCore_SetOnBeforeChildProcessLaunch(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnBeforeChildProcessLaunch_DataPtr :=  AEventData;
  AObj.OnBeforeChildProcessLaunch := ApplicationCore_OnBeforeChildProcessLaunch;
end;

//property event
procedure CefApplicationCore_SetOnScheduleMessagePumpWork(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnScheduleMessagePumpWork_DataPtr :=  AEventData;
  AObj.OnScheduleMessagePumpWork := ApplicationCore_OnScheduleMessagePumpWork;
end;

//property event
procedure CefApplicationCore_SetOnGetDefaultClient(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnGetDefaultClient_DataPtr :=  AEventData;
  AObj.OnGetDefaultClient := ApplicationCore_OnGetDefaultClient;
end;

//property event
procedure CefApplicationCore_SetOnGetLocalizedString(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnGetLocalizedString_DataPtr :=  AEventData;
  AObj.OnGetLocalizedString := ApplicationCore_OnGetLocalizedString;
end;

//property event
procedure CefApplicationCore_SetOnGetDataResource(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnGetDataResource_DataPtr :=  AEventData;
  AObj.OnGetDataResource := ApplicationCore_OnGetDataResource;
end;

//property event
procedure CefApplicationCore_SetOnGetDataResourceForScale(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnGetDataResourceForScale_DataPtr :=  AEventData;
  AObj.OnGetDataResourceForScale := ApplicationCore_OnGetDataResourceForScale;
end;

//property event
procedure CefApplicationCore_SetOnWebKitInitialized(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnWebKitInitialized_DataPtr :=  AEventData;
  AObj.OnWebKitInitialized := ApplicationCore_OnWebKitInitialized;
end;

//property event
procedure CefApplicationCore_SetOnBrowserCreated(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnBrowserCreated_DataPtr :=  AEventData;
  AObj.OnBrowserCreated := ApplicationCore_OnBrowserCreated;
end;

//property event
procedure CefApplicationCore_SetOnBrowserDestroyed(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnBrowserDestroyed_DataPtr :=  AEventData;
  AObj.OnBrowserDestroyed := ApplicationCore_OnBrowserDestroyed;
end;

//property event
procedure CefApplicationCore_SetOnContextCreated(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnContextCreated_DataPtr :=  AEventData;
  AObj.OnContextCreated := ApplicationCore_OnContextCreated;
end;

//property event
procedure CefApplicationCore_SetOnContextReleased(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnContextReleased_DataPtr :=  AEventData;
  AObj.OnContextReleased := ApplicationCore_OnContextReleased;
end;

//property event
procedure CefApplicationCore_SetOnUncaughtException(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnUncaughtException_DataPtr :=  AEventData;
  AObj.OnUncaughtException := ApplicationCore_OnUncaughtException;
end;

//property event
procedure CefApplicationCore_SetOnFocusedNodeChanged(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnFocusedNodeChanged_DataPtr :=  AEventData;
  AObj.OnFocusedNodeChanged := ApplicationCore_OnFocusedNodeChanged;
end;

//property event
procedure CefApplicationCore_SetOnProcessMessageReceived(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnProcessMessageReceived_DataPtr :=  AEventData;
  AObj.OnProcessMessageReceived := ApplicationCore_OnProcessMessageReceived;
end;

//property event
procedure CefApplicationCore_SetOnLoadingStateChange(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnLoadingStateChange_DataPtr :=  AEventData;
  AObj.OnLoadingStateChange := ApplicationCore_OnLoadingStateChange;
end;

//property event
procedure CefApplicationCore_SetOnLoadStart(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnLoadStart_DataPtr :=  AEventData;
  AObj.OnLoadStart := ApplicationCore_OnLoadStart;
end;

//property event
procedure CefApplicationCore_SetOnLoadEnd(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnLoadEnd_DataPtr :=  AEventData;
  AObj.OnLoadEnd := ApplicationCore_OnLoadEnd;
end;

//property event
procedure CefApplicationCore_SetOnLoadError(AObj: TCefApplicationCore; AEventData: Pointer); extdecl;
begin
  OnLoadError_DataPtr :=  AEventData;
  AObj.OnLoadError := ApplicationCore_OnLoadError;
end;


exports
  CefApplicationCore_Create,
  CefApplicationCore_NoSandbox,
  CefApplicationCore_BrowserSubprocessPath,
  CefApplicationCore_FrameworkDirPath,
  CefApplicationCore_MainBundlePath,
  CefApplicationCore_ChromeRuntime,
  CefApplicationCore_MultiThreadedMessageLoop,
  CefApplicationCore_ExternalMessagePump,
  CefApplicationCore_WindowlessRenderingEnabled,
  CefApplicationCore_CommandLineArgsDisabled,
  CefApplicationCore_Cache,
  CefApplicationCore_RootCache,
  CefApplicationCore_PersistSessionCookies,
  CefApplicationCore_PersistUserPreferences,
  CefApplicationCore_UserAgent,
  CefApplicationCore_UserAgentProduct,
  CefApplicationCore_Locale,
  CefApplicationCore_LogFile,
  CefApplicationCore_LogSeverity,
  CefApplicationCore_LogItems,
  CefApplicationCore_JavaScriptFlags,
  CefApplicationCore_ResourcesDirPath,
  CefApplicationCore_LocalesDirPath,
  CefApplicationCore_PackLoadingDisabled,
  CefApplicationCore_RemoteDebuggingPort,
  CefApplicationCore_UncaughtExceptionStackSize,
  CefApplicationCore_BackgroundColor,
  CefApplicationCore_AcceptLanguageList,
  CefApplicationCore_CookieableSchemesList,
  CefApplicationCore_CookieableSchemesExcludeDefaults,
  CefApplicationCore_ChromePolicyId,
  CefApplicationCore_SingleProcess,
  CefApplicationCore_EnableMediaStream,
  CefApplicationCore_EnableSpeechInput,
  CefApplicationCore_UseFakeUIForMediaStream,
  CefApplicationCore_EnableUsermediaScreenCapturing,
  CefApplicationCore_EnableGPU,
  CefApplicationCore_EnableFeatures,
  CefApplicationCore_DisableFeatures,
  CefApplicationCore_EnableBlinkFeatures,
  CefApplicationCore_DisableBlinkFeatures,
  CefApplicationCore_BlinkSettings,
  CefApplicationCore_ForceFieldTrials,
  CefApplicationCore_ForceFieldTrialParams,
  CefApplicationCore_SmoothScrolling,
  CefApplicationCore_MuteAudio,
  CefApplicationCore_SitePerProcess,
  CefApplicationCore_DisableWebSecurity,
  CefApplicationCore_DisablePDFExtension,
  CefApplicationCore_DisableSiteIsolationTrials,
  CefApplicationCore_DisableChromeLoginPrompt,
  CefApplicationCore_DisableExtensions,
  CefApplicationCore_AutoplayPolicy,
  CefApplicationCore_DisableBackgroundNetworking,
  CefApplicationCore_MetricsRecordingOnly,
  CefApplicationCore_AllowFileAccessFromFiles,
  CefApplicationCore_AllowRunningInsecureContent,
  CefApplicationCore_EnablePrintPreview,
  CefApplicationCore_DisableJavascript,
  CefApplicationCore_DisableJavascriptCloseWindows,
  CefApplicationCore_DisableJavascriptAccessClipboard,
  CefApplicationCore_DisableJavascriptDomPaste,
  CefApplicationCore_AllowUniversalAccessFromFileUrls,
  CefApplicationCore_DisableImageLoading,
  CefApplicationCore_ImageShrinkStandaloneToFit,
  CefApplicationCore_DisableTextAreaResize,
  CefApplicationCore_DisableTabToLinks,
  CefApplicationCore_EnableProfanityFilter,
  CefApplicationCore_DisableSpellChecking,
  CefApplicationCore_OverrideSpellCheckLang,
  CefApplicationCore_TouchEvents,
  CefApplicationCore_DisableReadingFromCanvas,
  CefApplicationCore_HyperlinkAuditing,
  CefApplicationCore_DisableNewBrowserInfoTimeout,
  CefApplicationCore_DevToolsProtocolLogFile,
  CefApplicationCore_ForcedDeviceScaleFactor,
  CefApplicationCore_DisableZygote,
  CefApplicationCore_UseMockKeyChain,
  CefApplicationCore_DisableRequestHandlingForTesting,
  CefApplicationCore_DisablePopupBlocking,
  CefApplicationCore_DisableBackForwardCache,
  CefApplicationCore_DisableComponentUpdate,
  CefApplicationCore_AllowInsecureLocalhost,
  CefApplicationCore_KioskPrinting,
  CefApplicationCore_TreatInsecureOriginAsSecure,
  CefApplicationCore_NetLogEnabled,
  CefApplicationCore_NetLogFile,
  CefApplicationCore_NetLogCaptureMode,
  CefApplicationCore_RemoteAllowOrigins,
  CefApplicationCore_AutoAcceptCamAndMicCapture,
  CefApplicationCore_UIColorMode,
  CefApplicationCore_IgnoreCertificateErrors,
  CefApplicationCore_WindowsSandboxInfo,
  CefApplicationCore_ArgcCopy,
  CefApplicationCore_ArgvCopy,
  CefApplicationCore_DeleteCache,
  CefApplicationCore_DeleteCookies,
  CefApplicationCore_CheckCEFFiles,
  CefApplicationCore_ShowMessageDlg,
  CefApplicationCore_MissingBinariesException,
  CefApplicationCore_SetCurrentDir,
  CefApplicationCore_GlobalContextInitialized,
  CefApplicationCore_ChromeMajorVer,
  CefApplicationCore_ChromeMinorVer,
  CefApplicationCore_ChromeRelease,
  CefApplicationCore_ChromeBuild,
  CefApplicationCore_ChromeVersion,
  CefApplicationCore_LibCefVersion,
  CefApplicationCore_LibCefPath,
  CefApplicationCore_ChromeElfPath,
  CefApplicationCore_LibLoaded,
  CefApplicationCore_LogProcessInfo,
  CefApplicationCore_ReRaiseExceptions,
  CefApplicationCore_DeviceScaleFactor,
  CefApplicationCore_LocalesRequired,
  CefApplicationCore_ProcessType,
  CefApplicationCore_MustCreateResourceBundleHandler,
  CefApplicationCore_MustCreateBrowserProcessHandler,
  CefApplicationCore_MustCreateRenderProcessHandler,
  CefApplicationCore_MustCreateLoadHandler,
  CefApplicationCore_OsmodalLoop,
  CefApplicationCore_Status,
  CefApplicationCore_MissingLibFiles,
  CefApplicationCore_MustFreeLibrary,
  CefApplicationCore_ChildProcessesCount,
  CefApplicationCore_UsedMemory,
  CefApplicationCore_TotalSystemMemory,
  CefApplicationCore_AvailableSystemMemory,
  CefApplicationCore_SystemMemoryLoad,
  CefApplicationCore_ApiHashUniversal,
  CefApplicationCore_ApiHashPlatform,
  CefApplicationCore_ApiHashCommit,
  CefApplicationCore_LastErrorMessage,
  CefApplicationCore_CheckCEFLibrary,
  CefApplicationCore_StartMainProcess,
  CefApplicationCore_StartSubProcess,
  CefApplicationCore_AddCustomCommandLine,
  CefApplicationCore_DoMessageLoopWork,
  CefApplicationCore_RunMessageLoop,
  CefApplicationCore_QuitMessageLoop,
  CefApplicationCore_UpdateDeviceScaleFactor,
  CefApplicationCore_InitLibLocationFromArgs,
  CefApplicationCore_SetOnRegCustomSchemes,
  CefApplicationCore_SetOnRegisterCustomPreferences,
  CefApplicationCore_SetOnContextInitialized,
  CefApplicationCore_SetOnBeforeChildProcessLaunch,
  CefApplicationCore_SetOnScheduleMessagePumpWork,
  CefApplicationCore_SetOnGetDefaultClient,
  CefApplicationCore_SetOnGetLocalizedString,
  CefApplicationCore_SetOnGetDataResource,
  CefApplicationCore_SetOnGetDataResourceForScale,
  CefApplicationCore_SetOnWebKitInitialized,
  CefApplicationCore_SetOnBrowserCreated,
  CefApplicationCore_SetOnBrowserDestroyed,
  CefApplicationCore_SetOnContextCreated,
  CefApplicationCore_SetOnContextReleased,
  CefApplicationCore_SetOnUncaughtException,
  CefApplicationCore_SetOnFocusedNodeChanged,
  CefApplicationCore_SetOnProcessMessageReceived,
  CefApplicationCore_SetOnLoadingStateChange,
  CefApplicationCore_SetOnLoadStart,
  CefApplicationCore_SetOnLoadEnd,
  CefApplicationCore_SetOnLoadError;