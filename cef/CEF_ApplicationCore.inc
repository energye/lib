
//constructor
function CefApplicationCore_Create(): TCefApplicationCore; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefApplicationCore.Create();
  handleExceptionEnd
end;

//property
function CefApplicationCore_NoSandbox(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NoSandbox'}
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
  {$define handleExceptionFuncName :='BrowserSubprocessPath'}
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
  {$define handleExceptionFuncName :='FrameworkDirPath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FrameworkDirPath := AValue;
  end else
    Result := ToPChar(AObj.FrameworkDirPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeRuntime(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeRuntime'}
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
  {$define handleExceptionFuncName :='MultiThreadedMessageLoop'}
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
  {$define handleExceptionFuncName :='ExternalMessagePump'}
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
  {$define handleExceptionFuncName :='WindowlessRenderingEnabled'}
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
  {$define handleExceptionFuncName :='CommandLineArgsDisabled'}
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
  {$define handleExceptionFuncName :='Cache'}
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
  {$define handleExceptionFuncName :='RootCache'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootCache := AValue;
  end else
    Result := ToPChar(AObj.RootCache);
  handleExceptionEnd
end;

//property
function CefApplicationCore_UserDataPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='UserDataPath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserDataPath := AValue;
  end else
    Result := ToPChar(AObj.UserDataPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_PersistSessionCookies(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PersistSessionCookies'}
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
  {$define handleExceptionFuncName :='PersistUserPreferences'}
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
  {$define handleExceptionFuncName :='UserAgent'}
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
  {$define handleExceptionFuncName :='UserAgentProduct'}
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
  {$define handleExceptionFuncName :='Locale'}
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
  {$define handleExceptionFuncName :='LogFile'}
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
  {$define handleExceptionFuncName :='LogSeverity'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LogSeverity := AValue;
  end else
    Result := AObj.LogSeverity;
  handleExceptionEnd
end;

//property
function CefApplicationCore_JavaScriptFlags(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
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
function CefApplicationCore_ResourcesDirPath(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ResourcesDirPath'}
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
  {$define handleExceptionFuncName :='LocalesDirPath'}
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
  {$define handleExceptionFuncName :='PackLoadingDisabled'}
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
function CefApplicationCore_UncaughtExceptionStackSize(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='UncaughtExceptionStackSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UncaughtExceptionStackSize := AValue;
  end else
    Result := AObj.UncaughtExceptionStackSize;
  handleExceptionEnd
end;

//property
function CefApplicationCore_IgnoreCertificateErrors(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IgnoreCertificateErrors'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IgnoreCertificateErrors := AValue;
  end else
    Result := AObj.IgnoreCertificateErrors;
  handleExceptionEnd
end;

//property
function CefApplicationCore_BackgroundColor(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundColor'}
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
  {$define handleExceptionFuncName :='AcceptLanguageList'}
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
  {$define handleExceptionFuncName :='CookieableSchemesList'}
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
  {$define handleExceptionFuncName :='CookieableSchemesExcludeDefaults'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CookieableSchemesExcludeDefaults := AValue;
  end else
    Result := AObj.CookieableSchemesExcludeDefaults;
  handleExceptionEnd
end;

//property
function CefApplicationCore_WindowsSandboxInfo(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='WindowsSandboxInfo'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowsSandboxInfo := AValue;
  end else
    Result := AObj.WindowsSandboxInfo;
  handleExceptionEnd
end;

//property
function CefApplicationCore_EnableHighDPISupport(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='EnableHighDPISupport'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableHighDPISupport := AValue;
  end else
    Result := AObj.EnableHighDPISupport;
  handleExceptionEnd
  {$ENDIF}
end;

//property
function CefApplicationCore_ArgcCopy(AObj: TCefApplicationCore): LongInt; extdecl;
begin
{$IFDEF LINUX}
  {$define handleExceptionFuncName :='ArgcCopy'}
  handleExceptionBegin
  Result := AObj.argcCopy;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_ArgvCopy(AObj: TCefApplicationCore): PPAnsiChar; extdecl;
begin
{$IFDEF LINUX}
  {$define handleExceptionFuncName :='ArgvCopy'}
  handleExceptionBegin
  Result := AObj.argvCopy;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_DeleteCache(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DeleteCache'}
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
  {$define handleExceptionFuncName :='DeleteCookies'}
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
  {$define handleExceptionFuncName :='CheckCEFFiles'}
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
function CefApplicationCore_MissingBinariesException(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MissingBinariesException'}
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
function CefApplicationCore_GlobalContextInitialized(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GlobalContextInitialized'}
  handleExceptionBegin
  Result := AObj.GlobalContextInitialized;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeMajorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeMajorVer'}
  handleExceptionBegin
  Result := AObj.ChromeMajorVer;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeMinorVer(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeMinorVer'}
  handleExceptionBegin
  Result := AObj.ChromeMinorVer;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeRelease(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeRelease'}
  handleExceptionBegin
  Result := AObj.ChromeRelease;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeBuild(AObj: TCefApplicationCore): uint16; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeBuild'}
  handleExceptionBegin
  Result := AObj.ChromeBuild;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeVersion(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeVersion'}
  handleExceptionBegin
  Result := ToPChar(AObj.ChromeVersion);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibCefVersion(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LibCefVersion'}
  handleExceptionBegin
  Result := ToPChar(AObj.LibCefVersion);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibCefPath(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LibCefPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.LibCefPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ChromeElfPath(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ChromeElfPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.ChromeElfPath);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LibLoaded(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='LibLoaded'}
  handleExceptionBegin
  Result := AObj.LibLoaded;
  handleExceptionEnd
end;

//property
function CefApplicationCore_LogProcessInfo(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='LogProcessInfo'}
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
procedure CefApplicationCore_DeviceScaleFactor(AObj: TCefApplicationCore; var Result: single); extdecl;
begin
  {$define handleExceptionFuncName :='DeviceScaleFactor'}
  handleExceptionBegin
  Result := AObj.DeviceScaleFactor;
  handleExceptionEnd
end;

//property
function CefApplicationCore_LocalesRequired(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LocalesRequired'}
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
  {$define handleExceptionFuncName :='ProcessType'}
  handleExceptionBegin
  Result := AObj.ProcessType;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustCreateResourceBundleHandler(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MustCreateResourceBundleHandler'}
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
  {$define handleExceptionFuncName :='MustCreateBrowserProcessHandler'}
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
  {$define handleExceptionFuncName :='MustCreateRenderProcessHandler'}
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
  {$define handleExceptionFuncName :='MustCreateLoadHandler'}
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
  {$define handleExceptionFuncName :='OsmodalLoop'}
  handleExceptionBegin
  AObj.OsmodalLoop := AValue;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CefApplicationCore_Status(AObj: TCefApplicationCore): TCefAplicationStatus; extdecl;
begin
  {$define handleExceptionFuncName :='Status'}
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

//property
function CefApplicationCore_MissingLibFiles(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='MissingLibFiles'}
  handleExceptionBegin
  Result := ToPChar(AObj.MissingLibFiles);
  handleExceptionEnd
end;

//property
function CefApplicationCore_MustFreeLibrary(AIsSet: LongBool; AObj: TCefApplicationCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MustFreeLibrary'}
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
  {$define handleExceptionFuncName :='ChildProcessesCount'}
  handleExceptionBegin
  Result := AObj.ChildProcessesCount;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_UsedMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='UsedMemory'}
  handleExceptionBegin
  Result := AObj.UsedMemory;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_TotalSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='TotalSystemMemory'}
  handleExceptionBegin
  Result := AObj.TotalSystemMemory;
  handleExceptionEnd
end;

//property
procedure CefApplicationCore_AvailableSystemMemory(AObj: TCefApplicationCore; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='AvailableSystemMemory'}
  handleExceptionBegin
  Result := AObj.AvailableSystemMemory;
  handleExceptionEnd
end;

//property
function CefApplicationCore_SystemMemoryLoad(AObj: TCefApplicationCore): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='SystemMemoryLoad'}
  handleExceptionBegin
  Result := AObj.SystemMemoryLoad;
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashUniversal(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ApiHashUniversal'}
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashUniversal);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashPlatform(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ApiHashPlatform'}
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashPlatform);
  handleExceptionEnd
end;

//property
function CefApplicationCore_ApiHashCommit(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ApiHashCommit'}
  handleExceptionBegin
  Result := ToPChar(AObj.ApiHashCommit);
  handleExceptionEnd
end;

//property
function CefApplicationCore_LastErrorMessage(AObj: TCefApplicationCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LastErrorMessage'}
  handleExceptionBegin
  Result := ToPChar(AObj.LastErrorMessage);
  handleExceptionEnd
end;

//function
function CefApplicationCore_CheckCEFLibrary(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CheckCEFLibrary'}
  handleExceptionBegin
  Result := AObj.CheckCEFLibrary();
  handleExceptionEnd
end;

//function
function CefApplicationCore_StartMainProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StartMainProcess'}
  handleExceptionBegin
  Result := AObj.StartMainProcess();
  handleExceptionEnd
end;

//function
function CefApplicationCore_StartSubProcess(AObj: TCefApplicationCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StartSubProcess'}
  handleExceptionBegin
  Result := AObj.StartSubProcess();
  handleExceptionEnd
end;

//function
function CefApplicationCore_InternalGetLocalizedString(AObj: TCefApplicationCore; stringId: Integer; var stringVal: PChar): LongBool; extdecl;
var
  RetstringVal: UnicodeString;
begin
  {$define handleExceptionFuncName :='InternalGetLocalizedString'}
  handleExceptionBegin
  RetstringVal := stringVal;
  Result := AObj.Internal_GetLocalizedString(stringId, RetstringVal);
  stringVal := ToPChar(RetstringVal);
  handleExceptionEnd
end;

//function
function CefApplicationCore_InternalGetDataResource(AObj: TCefApplicationCore; resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): LongBool; extdecl;
var
  Retdata: Pointer;
  RetdataSize: NativeUInt;
begin
  {$define handleExceptionFuncName :='InternalGetDataResource'}
  handleExceptionBegin
  Retdata := data;
  RetdataSize := dataSize;
  Result := AObj.Internal_GetDataResource(resourceId, Retdata, RetdataSize);
  data := Retdata;
  dataSize := RetdataSize;
  handleExceptionEnd
end;

//function
function CefApplicationCore_InternalGetDataResourceForScale(AObj: TCefApplicationCore; resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): LongBool; extdecl;
var
  Retdata: Pointer;
  RetdataSize: NativeUInt;
begin
  {$define handleExceptionFuncName :='InternalGetDataResourceForScale'}
  handleExceptionBegin
  Retdata := data;
  RetdataSize := dataSize;
  Result := AObj.Internal_GetDataResourceForScale(resourceId, scaleFactor, Retdata, RetdataSize);
  data := Retdata;
  dataSize := RetdataSize;
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_AddCustomCommandLine(AObj: TCefApplicationCore; const aCommandLine: PChar; const aValue: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AddCustomCommandLine'}
  handleExceptionBegin
  AObj.AddCustomCommandLine(aCommandLine, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_DoMessageLoopWork(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='DoMessageLoopWork'}
  handleExceptionBegin
  AObj.DoMessageLoopWork();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_RunMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='RunMessageLoop'}
  handleExceptionBegin
  AObj.RunMessageLoop();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_QuitMessageLoop(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='QuitMessageLoop'}
  handleExceptionBegin
  AObj.QuitMessageLoop();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_UpdateDeviceScaleFactor(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateDeviceScaleFactor'}
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InitLibLocationFromArgs(AObj: TCefApplicationCore); extdecl;
begin
{$IFDEF DARWIN}
  {$define handleExceptionFuncName :='InitLibLocationFromArgs'}
  handleExceptionBegin
  AObj.InitLibLocationFromArgs();
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure CefApplicationCore_InternalOnBeforeCommandLineProcessing(AObj: TCefApplicationCore; const processType: PChar; const commandLine: ICefCommandLine); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnBeforeCommandLineProcessing'}
  handleExceptionBegin
  AObj.Internal_OnBeforeCommandLineProcessing(processType, commandLine);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnRegisterCustomSchemes(AObj: TCefApplicationCore; const registrar: TCefSchemeRegistrarRef); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnRegisterCustomSchemes'}
  handleExceptionBegin
  AObj.Internal_OnRegisterCustomSchemes(registrar);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnRegisterCustomPreferences(AObj: TCefApplicationCore; type_: TCefPreferencesType; const registrar: TCefPreferenceRegistrarRef); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnRegisterCustomPreferences'}
  handleExceptionBegin
  AObj.Internal_OnRegisterCustomPreferences(type_, registrar);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnContextInitialized(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnContextInitialized'}
  handleExceptionBegin
  AObj.Internal_OnContextInitialized();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnBeforeChildProcessLaunch(AObj: TCefApplicationCore; const commandLine: ICefCommandLine); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnBeforeChildProcessLaunch'}
  handleExceptionBegin
  AObj.Internal_OnBeforeChildProcessLaunch(commandLine);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnScheduleMessagePumpWork(AObj: TCefApplicationCore; var delayMs: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnScheduleMessagePumpWork'}
  handleExceptionBegin
  AObj.Internal_OnScheduleMessagePumpWork(delayMs);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnWebKitInitialized(AObj: TCefApplicationCore); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnWebKitInitialized'}
  handleExceptionBegin
  AObj.Internal_OnWebKitInitialized();
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnBrowserCreated(AObj: TCefApplicationCore; const browser: ICefBrowser; const extrainfo: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnBrowserCreated'}
  handleExceptionBegin
  AObj.Internal_OnBrowserCreated(browser, extrainfo);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnBrowserDestroyed(AObj: TCefApplicationCore; const browser: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnBrowserDestroyed'}
  handleExceptionBegin
  AObj.Internal_OnBrowserDestroyed(browser);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnContextCreated(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnContextCreated'}
  handleExceptionBegin
  AObj.Internal_OnContextCreated(browser, frame, context);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnContextReleased(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnContextReleased'}
  handleExceptionBegin
  AObj.Internal_OnContextReleased(browser, frame, context);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnUncaughtException(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const exception: ICefV8Exception; const stackTrace: ICefV8StackTrace); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnUncaughtException'}
  handleExceptionBegin
  AObj.Internal_OnUncaughtException(browser, frame, context, exception, stackTrace);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnFocusedNodeChanged(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnFocusedNodeChanged'}
  handleExceptionBegin
  AObj.Internal_OnFocusedNodeChanged(browser, frame, node);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnProcessMessageReceived(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage; var aHandled: LongBool); extdecl;
var
  RetaHandled: boolean;
begin
  {$define handleExceptionFuncName :='InternalOnProcessMessageReceived'}
  handleExceptionBegin
  RetaHandled := aHandled;
  AObj.Internal_OnProcessMessageReceived(browser, frame, sourceProcess, aMessage, RetaHandled);
  aHandled := LongBool(RetaHandled);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnLoadingStateChange(AObj: TCefApplicationCore; const browser: ICefBrowser; isLoading,  canGoBack,  canGoForward: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnLoadingStateChange'}
  handleExceptionBegin
  AObj.Internal_OnLoadingStateChange(browser, isLoading,  canGoBack,  canGoForward);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnLoadStart(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnLoadStart'}
  handleExceptionBegin
  AObj.Internal_OnLoadStart(browser, frame, transitionType);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnLoadEnd(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnLoadEnd'}
  handleExceptionBegin
  AObj.Internal_OnLoadEnd(browser, frame, httpStatusCode);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalOnLoadError(AObj: TCefApplicationCore; const browser: ICefBrowser; const frame: ICefFrame; errorCode: Integer; const errorText,  failedUrl: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='InternalOnLoadError'}
  handleExceptionBegin
  AObj.Internal_OnLoadError(browser, frame, errorCode, errorText,  failedUrl);
  handleExceptionEnd
end;

//procedure
procedure CefApplicationCore_InternalGetDefaultClient(AObj: TCefApplicationCore; var aClient: ICefClient); extdecl;
var
  RetaClient: ICefClient;
begin
  {$define handleExceptionFuncName :='InternalGetDefaultClient'}
  handleExceptionBegin
  RetaClient := aClient;
  AObj.Internal_GetDefaultClient(RetaClient);
  aClient := RetaClient;
  handleExceptionEnd
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
  CefApplicationCore_ChromeRuntime,
  CefApplicationCore_MultiThreadedMessageLoop,
  CefApplicationCore_ExternalMessagePump,
  CefApplicationCore_WindowlessRenderingEnabled,
  CefApplicationCore_CommandLineArgsDisabled,
  CefApplicationCore_Cache,
  CefApplicationCore_RootCache,
  CefApplicationCore_UserDataPath,
  CefApplicationCore_PersistSessionCookies,
  CefApplicationCore_PersistUserPreferences,
  CefApplicationCore_UserAgent,
  CefApplicationCore_UserAgentProduct,
  CefApplicationCore_Locale,
  CefApplicationCore_LogFile,
  CefApplicationCore_LogSeverity,
  CefApplicationCore_JavaScriptFlags,
  CefApplicationCore_ResourcesDirPath,
  CefApplicationCore_LocalesDirPath,
  CefApplicationCore_PackLoadingDisabled,
  CefApplicationCore_RemoteDebuggingPort,
  CefApplicationCore_UncaughtExceptionStackSize,
  CefApplicationCore_IgnoreCertificateErrors,
  CefApplicationCore_BackgroundColor,
  CefApplicationCore_AcceptLanguageList,
  CefApplicationCore_CookieableSchemesList,
  CefApplicationCore_CookieableSchemesExcludeDefaults,
  CefApplicationCore_WindowsSandboxInfo,
  CefApplicationCore_EnableHighDPISupport,
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
  CefApplicationCore_InternalGetLocalizedString,
  CefApplicationCore_InternalGetDataResource,
  CefApplicationCore_InternalGetDataResourceForScale,
  CefApplicationCore_AddCustomCommandLine,
  CefApplicationCore_DoMessageLoopWork,
  CefApplicationCore_RunMessageLoop,
  CefApplicationCore_QuitMessageLoop,
  CefApplicationCore_UpdateDeviceScaleFactor,
  CefApplicationCore_InitLibLocationFromArgs,
  CefApplicationCore_InternalOnBeforeCommandLineProcessing,
  CefApplicationCore_InternalOnRegisterCustomSchemes,
  CefApplicationCore_InternalOnRegisterCustomPreferences,
  CefApplicationCore_InternalOnContextInitialized,
  CefApplicationCore_InternalOnBeforeChildProcessLaunch,
  CefApplicationCore_InternalOnScheduleMessagePumpWork,
  CefApplicationCore_InternalOnWebKitInitialized,
  CefApplicationCore_InternalOnBrowserCreated,
  CefApplicationCore_InternalOnBrowserDestroyed,
  CefApplicationCore_InternalOnContextCreated,
  CefApplicationCore_InternalOnContextReleased,
  CefApplicationCore_InternalOnUncaughtException,
  CefApplicationCore_InternalOnFocusedNodeChanged,
  CefApplicationCore_InternalOnProcessMessageReceived,
  CefApplicationCore_InternalOnLoadingStateChange,
  CefApplicationCore_InternalOnLoadStart,
  CefApplicationCore_InternalOnLoadEnd,
  CefApplicationCore_InternalOnLoadError,
  CefApplicationCore_InternalGetDefaultClient,
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
