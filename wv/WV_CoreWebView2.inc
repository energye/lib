
//constructor
function CoreWebView2_Create(const aBaseIntf: ICoreWebView2): TCoreWebView2; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2_Initialized(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2_BaseIntf(AObj: TCoreWebView2; var Result: ICoreWebView2); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2_Settings(AObj: TCoreWebView2; var Result: ICoreWebView2Settings); extdecl;
begin
  {$define handleExceptionFuncName :='Settings'}
  handleExceptionBegin
  Result := AObj.Settings;
  handleExceptionEnd
end;

//property
function CoreWebView2_BrowserProcessID(AObj: TCoreWebView2): DWORD; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserProcessID'}
  handleExceptionBegin
  Result := AObj.BrowserProcessID;
  handleExceptionEnd
end;

//property
function CoreWebView2_CanGoBack(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoBack'}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

//property
function CoreWebView2_CanGoForward(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoForward'}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

//property
function CoreWebView2_ContainsFullScreenElement(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ContainsFullScreenElement'}
  handleExceptionBegin
  Result := AObj.ContainsFullScreenElement;
  handleExceptionEnd
end;

//property
function CoreWebView2_DocumentTitle(AObj: TCoreWebView2): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DocumentTitle'}
  handleExceptionBegin
  Result := ToPChar(AObj.DocumentTitle);
  handleExceptionEnd
end;

//property
function CoreWebView2_Source(AObj: TCoreWebView2): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Source'}
  handleExceptionBegin
  Result := ToPChar(AObj.Source);
  handleExceptionEnd
end;

//property
procedure CoreWebView2_CookieManager(AObj: TCoreWebView2; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionFuncName :='CookieManager'}
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

//property
procedure CoreWebView2_Environment(AObj: TCoreWebView2; var Result: ICoreWebView2Environment); extdecl;
begin
  {$define handleExceptionFuncName :='Environment'}
  handleExceptionBegin
  Result := AObj.Environment;
  handleExceptionEnd
end;

//property
function CoreWebView2_IsSuspended(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSuspended'}
  handleExceptionBegin
  Result := AObj.IsSuspended;
  handleExceptionEnd
end;

//property
function CoreWebView2_IsMuted(AIsSet: LongBool; AObj: TCoreWebView2; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMuted'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsMuted := AValue;
  end else
    Result := AObj.IsMuted;
  handleExceptionEnd
end;

//property
function CoreWebView2_IsDocumentPlayingAudio(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDocumentPlayingAudio'}
  handleExceptionBegin
  Result := AObj.IsDocumentPlayingAudio;
  handleExceptionEnd
end;

//property
function CoreWebView2_IsDefaultDownloadDialogOpen(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDefaultDownloadDialogOpen'}
  handleExceptionBegin
  Result := AObj.IsDefaultDownloadDialogOpen;
  handleExceptionEnd
end;

//property
function CoreWebView2_DefaultDownloadDialogCornerAlignment(AIsSet: LongBool; AObj: TCoreWebView2; AValue: TWVDefaultDownloadDialogCornerAlignment): TWVDefaultDownloadDialogCornerAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultDownloadDialogCornerAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadDialogCornerAlignment := AValue;
  end else
    Result := AObj.DefaultDownloadDialogCornerAlignment;
  handleExceptionEnd
end;

//property
procedure CoreWebView2_DefaultDownloadDialogMargin(AIsSet: LongBool; AObj: TCoreWebView2; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='DefaultDownloadDialogMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDownloadDialogMargin := AValue;
  end else
    Result := AObj.DefaultDownloadDialogMargin;
  handleExceptionEnd
end;

//property
function CoreWebView2_StatusBarText(AObj: TCoreWebView2): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='StatusBarText'}
  handleExceptionBegin
  Result := ToPChar(AObj.StatusBarText);
  handleExceptionEnd
end;

//property
procedure CoreWebView2_Profile(AObj: TCoreWebView2; var Result: ICoreWebView2Profile); extdecl;
begin
  {$define handleExceptionFuncName :='Profile'}
  handleExceptionBegin
  Result := AObj.Profile;
  handleExceptionEnd
end;

//property
function CoreWebView2_FaviconURI(AObj: TCoreWebView2): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FaviconURI'}
  handleExceptionBegin
  Result := ToPChar(AObj.FaviconURI);
  handleExceptionEnd
end;

//property
function CoreWebView2_MemoryUsageTargetLevel(AIsSet: LongBool; AObj: TCoreWebView2; AValue: TWVMemoryUsageTargetLevel): TWVMemoryUsageTargetLevel; extdecl;
begin
  {$define handleExceptionFuncName :='MemoryUsageTargetLevel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MemoryUsageTargetLevel := AValue;
  end else
    Result := AObj.MemoryUsageTargetLevel;
  handleExceptionEnd
end;

//property
function CoreWebView2_FrameId(AObj: TCoreWebView2): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='FrameId'}
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

//function
function CoreWebView2_AddAllBrowserEvents(AObj: TCoreWebView2; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddAllBrowserEvents'}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_SubscribeToDevToolsProtocolEvent(AObj: TCoreWebView2; const aEventName: PChar; aEventID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SubscribeToDevToolsProtocolEvent'}
  handleExceptionBegin
  Result := AObj.SubscribeToDevToolsProtocolEvent(aEventName, aEventID, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_CapturePreview(AObj: TCoreWebView2; aImageFormat: TWVCapturePreviewImageFormat; const aImageStream: TStreamAdapter; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CapturePreview'}
  handleExceptionBegin
  Result := AObj.CapturePreview(aImageFormat, aImageStream, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_ExecuteScript(AObj: TCoreWebView2; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteScript'}
  handleExceptionBegin
  Result := AObj.ExecuteScript(JavaScript, aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_GoBack(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GoBack'}
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

//function
function CoreWebView2_GoForward(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GoForward'}
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

//function
function CoreWebView2_Navigate(AObj: TCoreWebView2; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Navigate'}
  handleExceptionBegin
  Result := AObj.Navigate(aURI);
  handleExceptionEnd
end;

//function
function CoreWebView2_NavigateToString(AObj: TCoreWebView2; const aHTMLContent: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NavigateToString'}
  handleExceptionBegin
  Result := AObj.NavigateToString(aHTMLContent);
  handleExceptionEnd
end;

//function
function CoreWebView2_NavigateWithWebResourceRequest(AObj: TCoreWebView2; const aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NavigateWithWebResourceRequest'}
  handleExceptionBegin
  Result := AObj.NavigateWithWebResourceRequest(aRequest);
  handleExceptionEnd
end;

//function
function CoreWebView2_Reload(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Reload'}
  handleExceptionBegin
  Result := AObj.Reload();
  handleExceptionEnd
end;

//function
function CoreWebView2_Stop(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Stop'}
  handleExceptionBegin
  Result := AObj.Stop();
  handleExceptionEnd
end;

//function
function CoreWebView2_TrySuspend(AObj: TCoreWebView2; const aHandler: ICoreWebView2TrySuspendCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='TrySuspend'}
  handleExceptionBegin
  Result := AObj.TrySuspend(aHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2_Resume(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Resume'}
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;

//function
function CoreWebView2_SetVirtualHostNameToFolderMapping(AObj: TCoreWebView2; const aHostName, aFolderPath: PChar; aAccessKind: TWVHostResourceAcccessKind): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetVirtualHostNameToFolderMapping'}
  handleExceptionBegin
  Result := AObj.SetVirtualHostNameToFolderMapping(aHostName, aFolderPath, aAccessKind);
  handleExceptionEnd
end;

//function
function CoreWebView2_ClearVirtualHostNameToFolderMapping(AObj: TCoreWebView2; const aHostName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearVirtualHostNameToFolderMapping'}
  handleExceptionBegin
  Result := AObj.ClearVirtualHostNameToFolderMapping(aHostName);
  handleExceptionEnd
end;

//function
function CoreWebView2_OpenTaskManagerWindow(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OpenTaskManagerWindow'}
  handleExceptionBegin
  Result := AObj.OpenTaskManagerWindow();
  handleExceptionEnd
end;

//function
function CoreWebView2_PrintToPdf(AObj: TCoreWebView2; const aResultFilePath: PChar; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintToPdfCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PrintToPdf'}
  handleExceptionBegin
  Result := AObj.PrintToPdf(aResultFilePath, aPrintSettings, aHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2_OpenDevToolsWindow(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OpenDevToolsWindow'}
  handleExceptionBegin
  Result := AObj.OpenDevToolsWindow();
  handleExceptionEnd
end;

//function
function CoreWebView2_PostWebMessageAsJson(AObj: TCoreWebView2; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostWebMessageAsJson'}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(aWebMessageAsJson);
  handleExceptionEnd
end;

//function
function CoreWebView2_PostWebMessageAsString(AObj: TCoreWebView2; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostWebMessageAsString'}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(aWebMessageAsString);
  handleExceptionEnd
end;

//function
function CoreWebView2_CallDevToolsProtocolMethod(AObj: TCoreWebView2; const aMethodName, aParametersAsJson: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CallDevToolsProtocolMethod'}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethod(aMethodName, aParametersAsJson, aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_CallDevToolsProtocolMethodForSession(AObj: TCoreWebView2; const aSessionId, aMethodName, aParametersAsJson: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CallDevToolsProtocolMethodForSession'}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethodForSession(aSessionId, aMethodName, aParametersAsJson, aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_AddWebResourceRequestedFilter(AObj: TCoreWebView2; const URI: PChar; ResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddWebResourceRequestedFilter'}
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilter(URI, ResourceContext);
  handleExceptionEnd
end;

//function
function CoreWebView2_RemoveWebResourceRequestedFilter(AObj: TCoreWebView2; const URI: PChar; ResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveWebResourceRequestedFilter'}
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilter(URI, ResourceContext);
  handleExceptionEnd
end;

//function
function CoreWebView2_RemoveHostObjectFromScript(AObj: TCoreWebView2; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveHostObjectFromScript'}
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(aName);
  handleExceptionEnd
end;

//function
function CoreWebView2_AddScriptToExecuteOnDocumentCreated(AObj: TCoreWebView2; const JavaScript: PChar; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddScriptToExecuteOnDocumentCreated'}
  handleExceptionBegin
  Result := AObj.AddScriptToExecuteOnDocumentCreated(JavaScript, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_RemoveScriptToExecuteOnDocumentCreated(AObj: TCoreWebView2; const aID: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveScriptToExecuteOnDocumentCreated'}
  handleExceptionBegin
  Result := AObj.RemoveScriptToExecuteOnDocumentCreated(aID);
  handleExceptionEnd
end;

//function
function CoreWebView2_OpenDefaultDownloadDialog(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OpenDefaultDownloadDialog'}
  handleExceptionBegin
  Result := AObj.OpenDefaultDownloadDialog();
  handleExceptionEnd
end;

//function
function CoreWebView2_CloseDefaultDownloadDialog(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CloseDefaultDownloadDialog'}
  handleExceptionBegin
  Result := AObj.CloseDefaultDownloadDialog();
  handleExceptionEnd
end;

//function
function CoreWebView2_ClearServerCertificateErrorActions(AObj: TCoreWebView2; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearServerCertificateErrorActions'}
  handleExceptionBegin
  Result := AObj.ClearServerCertificateErrorActions(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_GetFavicon(AObj: TCoreWebView2; aFormat: TWVFaviconImageFormat; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetFavicon'}
  handleExceptionBegin
  Result := AObj.GetFavicon(aFormat, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2_Print(AObj: TCoreWebView2; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Print'}
  handleExceptionBegin
  Result := AObj.Print(aPrintSettings, aHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2_ShowPrintUI(AObj: TCoreWebView2; aPrintDialogKind: TWVPrintDialogKind): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowPrintUI'}
  handleExceptionBegin
  Result := AObj.ShowPrintUI(aPrintDialogKind);
  handleExceptionEnd
end;

//function
function CoreWebView2_PrintToPdfStream(AObj: TCoreWebView2; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintToPdfStreamCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PrintToPdfStream'}
  handleExceptionBegin
  Result := AObj.PrintToPdfStream(aPrintSettings, aHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2_PostSharedBufferToScript(AObj: TCoreWebView2; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostSharedBufferToScript'}
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, aAdditionalDataAsJson);
  handleExceptionEnd
end;

//function
function CoreWebView2_ExecuteScriptWithResult(AObj: TCoreWebView2; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteScriptWithResult'}
  handleExceptionBegin
  Result := AObj.ExecuteScriptWithResult(JavaScript, aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;


exports
  CoreWebView2_Create,
  CoreWebView2_Initialized,
  CoreWebView2_BaseIntf,
  CoreWebView2_Settings,
  CoreWebView2_BrowserProcessID,
  CoreWebView2_CanGoBack,
  CoreWebView2_CanGoForward,
  CoreWebView2_ContainsFullScreenElement,
  CoreWebView2_DocumentTitle,
  CoreWebView2_Source,
  CoreWebView2_CookieManager,
  CoreWebView2_Environment,
  CoreWebView2_IsSuspended,
  CoreWebView2_IsMuted,
  CoreWebView2_IsDocumentPlayingAudio,
  CoreWebView2_IsDefaultDownloadDialogOpen,
  CoreWebView2_DefaultDownloadDialogCornerAlignment,
  CoreWebView2_DefaultDownloadDialogMargin,
  CoreWebView2_StatusBarText,
  CoreWebView2_Profile,
  CoreWebView2_FaviconURI,
  CoreWebView2_MemoryUsageTargetLevel,
  CoreWebView2_FrameId,
  CoreWebView2_AddAllBrowserEvents,
  CoreWebView2_SubscribeToDevToolsProtocolEvent,
  CoreWebView2_CapturePreview,
  CoreWebView2_ExecuteScript,
  CoreWebView2_GoBack,
  CoreWebView2_GoForward,
  CoreWebView2_Navigate,
  CoreWebView2_NavigateToString,
  CoreWebView2_NavigateWithWebResourceRequest,
  CoreWebView2_Reload,
  CoreWebView2_Stop,
  CoreWebView2_TrySuspend,
  CoreWebView2_Resume,
  CoreWebView2_SetVirtualHostNameToFolderMapping,
  CoreWebView2_ClearVirtualHostNameToFolderMapping,
  CoreWebView2_OpenTaskManagerWindow,
  CoreWebView2_PrintToPdf,
  CoreWebView2_OpenDevToolsWindow,
  CoreWebView2_PostWebMessageAsJson,
  CoreWebView2_PostWebMessageAsString,
  CoreWebView2_CallDevToolsProtocolMethod,
  CoreWebView2_CallDevToolsProtocolMethodForSession,
  CoreWebView2_AddWebResourceRequestedFilter,
  CoreWebView2_RemoveWebResourceRequestedFilter,
  CoreWebView2_RemoveHostObjectFromScript,
  CoreWebView2_AddScriptToExecuteOnDocumentCreated,
  CoreWebView2_RemoveScriptToExecuteOnDocumentCreated,
  CoreWebView2_OpenDefaultDownloadDialog,
  CoreWebView2_CloseDefaultDownloadDialog,
  CoreWebView2_ClearServerCertificateErrorActions,
  CoreWebView2_GetFavicon,
  CoreWebView2_Print,
  CoreWebView2_ShowPrintUI,
  CoreWebView2_PrintToPdfStream,
  CoreWebView2_PostSharedBufferToScript,
  CoreWebView2_ExecuteScriptWithResult;