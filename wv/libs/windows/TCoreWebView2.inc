// constructor
function TCoreWebView2_Create(const aBaseIntf: ICoreWebView2): TCoreWebView2; extdecl;
begin
  {$define handleExceptionID := 700}
  handleExceptionBegin
  Result := TCoreWebView2.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2_AddAllBrowserEvents(AObj: TCoreWebView2; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 701}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_SubscribeToDevToolsProtocolEvent(AObj: TCoreWebView2; const aEventName: PChar; aEventID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 702}
  handleExceptionBegin
  Result := AObj.SubscribeToDevToolsProtocolEvent(PCharToUStr(aEventName), aEventID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_CapturePreview(AObj: TCoreWebView2; aImageFormat: TWVCapturePreviewImageFormat; const aImageStream: IStream; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 703}
  handleExceptionBegin
  Result := AObj.CapturePreview(aImageFormat, aImageStream, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_ExecuteScript(AObj: TCoreWebView2; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 704}
  handleExceptionBegin
  Result := AObj.ExecuteScript(PCharToUStr(JavaScript), aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_GoBack(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 705}
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

// function
function TCoreWebView2_GoForward(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 706}
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

// function
function TCoreWebView2_Navigate(AObj: TCoreWebView2; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 707}
  handleExceptionBegin
  Result := AObj.Navigate(PCharToUStr(aURI));
  handleExceptionEnd
end;

// function
function TCoreWebView2_NavigateToString(AObj: TCoreWebView2; const aHTMLContent: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 708}
  handleExceptionBegin
  Result := AObj.NavigateToString(PCharToUStr(aHTMLContent));
  handleExceptionEnd
end;

// function
function TCoreWebView2_NavigateWithWebResourceRequest(AObj: TCoreWebView2; const aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
begin
  {$define handleExceptionID := 709}
  handleExceptionBegin
  Result := AObj.NavigateWithWebResourceRequest(aRequest);
  handleExceptionEnd
end;

// function
function TCoreWebView2_Reload(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 710}
  handleExceptionBegin
  Result := AObj.Reload();
  handleExceptionEnd
end;

// function
function TCoreWebView2_Stop(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 711}
  handleExceptionBegin
  Result := AObj.Stop();
  handleExceptionEnd
end;

// function
function TCoreWebView2_TrySuspend(AObj: TCoreWebView2; const aHandler: ICoreWebView2TrySuspendCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 712}
  handleExceptionBegin
  Result := AObj.TrySuspend(aHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2_Resume(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 713}
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;

// function
function TCoreWebView2_SetVirtualHostNameToFolderMapping(AObj: TCoreWebView2; const aHostName: PChar; const aFolderPath: PChar; aAccessKind: TWVHostResourceAcccessKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 714}
  handleExceptionBegin
  Result := AObj.SetVirtualHostNameToFolderMapping(PCharToUStr(aHostName), PCharToUStr(aFolderPath), aAccessKind);
  handleExceptionEnd
end;

// function
function TCoreWebView2_ClearVirtualHostNameToFolderMapping(AObj: TCoreWebView2; const aHostName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 715}
  handleExceptionBegin
  Result := AObj.ClearVirtualHostNameToFolderMapping(PCharToUStr(aHostName));
  handleExceptionEnd
end;

// function
function TCoreWebView2_OpenTaskManagerWindow(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 716}
  handleExceptionBegin
  Result := AObj.OpenTaskManagerWindow();
  handleExceptionEnd
end;

// function
function TCoreWebView2_PrintToPdf(AObj: TCoreWebView2; const aResultFilePath: PChar; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintToPdfCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 717}
  handleExceptionBegin
  Result := AObj.PrintToPdf(PCharToUStr(aResultFilePath), aPrintSettings, aHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2_OpenDevToolsWindow(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 718}
  handleExceptionBegin
  Result := AObj.OpenDevToolsWindow();
  handleExceptionEnd
end;

// function
function TCoreWebView2_PostWebMessageAsJson(AObj: TCoreWebView2; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 719}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(PCharToUStr(aWebMessageAsJson));
  handleExceptionEnd
end;

// function
function TCoreWebView2_PostWebMessageAsString(AObj: TCoreWebView2; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 720}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(PCharToUStr(aWebMessageAsString));
  handleExceptionEnd
end;

// function
function TCoreWebView2_CallDevToolsProtocolMethod(AObj: TCoreWebView2; const aMethodName: PChar; const aParametersAsJson: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 721}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethod(PCharToUStr(aMethodName), PCharToUStr(aParametersAsJson), aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_CallDevToolsProtocolMethodForSession(AObj: TCoreWebView2; const aSessionId: PChar; const aMethodName: PChar; const aParametersAsJson: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 722}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethodForSession(PCharToUStr(aSessionId), PCharToUStr(aMethodName), PCharToUStr(aParametersAsJson), aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_AddWebResourceRequestedFilter(AObj: TCoreWebView2; const URI: PChar; ResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 723}
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilter(PCharToUStr(URI), ResourceContext);
  handleExceptionEnd
end;

// function
function TCoreWebView2_RemoveWebResourceRequestedFilter(AObj: TCoreWebView2; const URI: PChar; ResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 724}
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilter(PCharToUStr(URI), ResourceContext);
  handleExceptionEnd
end;

// function
function TCoreWebView2_AddHostObjectToScript(AObj: TCoreWebView2; const aName: PChar; const aObject: OleVariant): LongBool; extdecl;
begin
  {$define handleExceptionID := 725}
  handleExceptionBegin
  Result := AObj.AddHostObjectToScript(PCharToUStr(aName), aObject);
  handleExceptionEnd
end;

// function
function TCoreWebView2_RemoveHostObjectFromScript(AObj: TCoreWebView2; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 726}
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(PCharToUStr(aName));
  handleExceptionEnd
end;

// function
function TCoreWebView2_AddScriptToExecuteOnDocumentCreated(AObj: TCoreWebView2; const JavaScript: PChar; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 727}
  handleExceptionBegin
  Result := AObj.AddScriptToExecuteOnDocumentCreated(PCharToUStr(JavaScript), aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_RemoveScriptToExecuteOnDocumentCreated(AObj: TCoreWebView2; const aID: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 728}
  handleExceptionBegin
  Result := AObj.RemoveScriptToExecuteOnDocumentCreated(PCharToUStr(aID));
  handleExceptionEnd
end;

// function
function TCoreWebView2_OpenDefaultDownloadDialog(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 729}
  handleExceptionBegin
  Result := AObj.OpenDefaultDownloadDialog();
  handleExceptionEnd
end;

// function
function TCoreWebView2_CloseDefaultDownloadDialog(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 730}
  handleExceptionBegin
  Result := AObj.CloseDefaultDownloadDialog();
  handleExceptionEnd
end;

// function
function TCoreWebView2_ClearServerCertificateErrorActions(AObj: TCoreWebView2; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 731}
  handleExceptionBegin
  Result := AObj.ClearServerCertificateErrorActions(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_GetFavicon(AObj: TCoreWebView2; aFormat: TWVFaviconImageFormat; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 732}
  handleExceptionBegin
  Result := AObj.GetFavicon(aFormat, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_Print(AObj: TCoreWebView2; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 733}
  handleExceptionBegin
  Result := AObj.Print(aPrintSettings, aHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2_ShowPrintUI(AObj: TCoreWebView2; aPrintDialogKind: TWVPrintDialogKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 734}
  handleExceptionBegin
  Result := AObj.ShowPrintUI(aPrintDialogKind);
  handleExceptionEnd
end;

// function
function TCoreWebView2_PrintToPdfStream(AObj: TCoreWebView2; const aPrintSettings: ICoreWebView2PrintSettings; const aHandler: ICoreWebView2PrintToPdfStreamCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 735}
  handleExceptionBegin
  Result := AObj.PrintToPdfStream(aPrintSettings, aHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2_PostSharedBufferToScript(AObj: TCoreWebView2; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 736}
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, PCharToUStr(aAdditionalDataAsJson));
  handleExceptionEnd
end;

// function
function TCoreWebView2_ExecuteScriptWithResult(AObj: TCoreWebView2; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 737}
  handleExceptionBegin
  Result := AObj.ExecuteScriptWithResult(PCharToUStr(JavaScript), aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2_AddWebResourceRequestedFilterWithRequestSourceKinds(AObj: TCoreWebView2; const uri: PChar; ResourceContext: TWVWebResourceContext; requestSourceKinds: TWVWebResourceRequestSourceKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 738}
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilterWithRequestSourceKinds(PCharToUStr(uri), ResourceContext, requestSourceKinds);
  handleExceptionEnd
end;

// function
function TCoreWebView2_RemoveWebResourceRequestedFilterWithRequestSourceKinds(AObj: TCoreWebView2; const uri: PChar; ResourceContext: TWVWebResourceContext; requestSourceKinds: TWVWebResourceRequestSourceKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 739}
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilterWithRequestSourceKinds(PCharToUStr(uri), ResourceContext, requestSourceKinds);
  handleExceptionEnd
end;

// function
function TCoreWebView2_PostWebMessageAsJsonWithAdditionalObjects(AObj: TCoreWebView2; const webMessageAsJson: PChar; const additionalObjects: ICoreWebView2ObjectCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionID := 740}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJsonWithAdditionalObjects(PCharToUStr(webMessageAsJson), additionalObjects);
  handleExceptionEnd
end;

// function
function TCoreWebView2_ShowSaveAsUI(AObj: TCoreWebView2; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 741}
  handleExceptionBegin
  Result := AObj.ShowSaveAsUI(aBrowserComponent);
  handleExceptionEnd
end;

// procedure
procedure TCoreWebView2_AfterConstruction(AObj: TCoreWebView2); extdecl;
begin
  {$define handleExceptionID := 742}
  handleExceptionBegin
  AObj.AfterConstruction();
  handleExceptionEnd
end;

// property
function TCoreWebView2_Initialized(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 743}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_BaseIntf(AObj: TCoreWebView2; var Result: ICoreWebView2); extdecl;
begin
  {$define handleExceptionID := 744}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_Settings(AObj: TCoreWebView2; var Result: ICoreWebView2Settings); extdecl;
begin
  {$define handleExceptionID := 745}
  handleExceptionBegin
  Result := AObj.Settings;
  handleExceptionEnd
end;

// property
function TCoreWebView2_BrowserProcessID(AObj: TCoreWebView2): DWORD; extdecl;
begin
  {$define handleExceptionID := 746}
  handleExceptionBegin
  Result := AObj.BrowserProcessID;
  handleExceptionEnd
end;

// property
function TCoreWebView2_CanGoBack(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 747}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

// property
function TCoreWebView2_CanGoForward(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 748}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

// property
function TCoreWebView2_ContainsFullScreenElement(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 749}
  handleExceptionBegin
  Result := AObj.ContainsFullScreenElement;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_DocumentTitle(AObj: TCoreWebView2; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 750}
  handleExceptionBegin
  StringBufferCreate(AObj.DocumentTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_Source(AObj: TCoreWebView2; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 751}
  handleExceptionBegin
  StringBufferCreate(AObj.Source, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_CookieManager(AObj: TCoreWebView2; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionID := 752}
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_Environment(AObj: TCoreWebView2; var Result: ICoreWebView2Environment); extdecl;
begin
  {$define handleExceptionID := 753}
  handleExceptionBegin
  Result := AObj.Environment;
  handleExceptionEnd
end;

// property
function TCoreWebView2_IsSuspended(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 754}
  handleExceptionBegin
  Result := AObj.IsSuspended;
  handleExceptionEnd
end;

// property
function TCoreWebView2_IsMuted(ASet: LongBool; AObj: TCoreWebView2; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 755}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsMuted := AValue
  end else
    Result := AObj.IsMuted;
  handleExceptionEnd
end;

// property
function TCoreWebView2_IsDocumentPlayingAudio(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 756}
  handleExceptionBegin
  Result := AObj.IsDocumentPlayingAudio;
  handleExceptionEnd
end;

// property
function TCoreWebView2_IsDefaultDownloadDialogOpen(AObj: TCoreWebView2): LongBool; extdecl;
begin
  {$define handleExceptionID := 757}
  handleExceptionBegin
  Result := AObj.IsDefaultDownloadDialogOpen;
  handleExceptionEnd
end;

// property
function TCoreWebView2_DefaultDownloadDialogCornerAlignment(ASet: LongBool; AObj: TCoreWebView2; AValue: TWVDefaultDownloadDialogCornerAlignment): TWVDefaultDownloadDialogCornerAlignment; extdecl;
begin
  {$define handleExceptionID := 758}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadDialogCornerAlignment := AValue
  end else
    Result := AObj.DefaultDownloadDialogCornerAlignment;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_DefaultDownloadDialogMargin(ASet: LongBool; AObj: TCoreWebView2; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 759}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadDialogMargin := AValue
  end else
    Result := AObj.DefaultDownloadDialogMargin;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_StatusBarText(AObj: TCoreWebView2; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 760}
  handleExceptionBegin
  StringBufferCreate(AObj.StatusBarText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_Profile(AObj: TCoreWebView2; var Result: ICoreWebView2Profile); extdecl;
begin
  {$define handleExceptionID := 761}
  handleExceptionBegin
  Result := AObj.Profile;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2_FaviconURI(AObj: TCoreWebView2; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 762}
  handleExceptionBegin
  StringBufferCreate(AObj.FaviconURI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2_MemoryUsageTargetLevel(ASet: LongBool; AObj: TCoreWebView2; AValue: TWVMemoryUsageTargetLevel): TWVMemoryUsageTargetLevel; extdecl;
begin
  {$define handleExceptionID := 763}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MemoryUsageTargetLevel := AValue
  end else
    Result := AObj.MemoryUsageTargetLevel;
  handleExceptionEnd
end;

// property
function TCoreWebView2_FrameId(AObj: TCoreWebView2): cardinal; extdecl;
begin
  {$define handleExceptionID := 764}
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

exports
  TCoreWebView2_Create,
  TCoreWebView2_AddAllBrowserEvents,
  TCoreWebView2_SubscribeToDevToolsProtocolEvent,
  TCoreWebView2_CapturePreview,
  TCoreWebView2_ExecuteScript,
  TCoreWebView2_GoBack,
  TCoreWebView2_GoForward,
  TCoreWebView2_Navigate,
  TCoreWebView2_NavigateToString,
  TCoreWebView2_NavigateWithWebResourceRequest,
  TCoreWebView2_Reload,
  TCoreWebView2_Stop,
  TCoreWebView2_TrySuspend,
  TCoreWebView2_Resume,
  TCoreWebView2_SetVirtualHostNameToFolderMapping,
  TCoreWebView2_ClearVirtualHostNameToFolderMapping,
  TCoreWebView2_OpenTaskManagerWindow,
  TCoreWebView2_PrintToPdf,
  TCoreWebView2_OpenDevToolsWindow,
  TCoreWebView2_PostWebMessageAsJson,
  TCoreWebView2_PostWebMessageAsString,
  TCoreWebView2_CallDevToolsProtocolMethod,
  TCoreWebView2_CallDevToolsProtocolMethodForSession,
  TCoreWebView2_AddWebResourceRequestedFilter,
  TCoreWebView2_RemoveWebResourceRequestedFilter,
  TCoreWebView2_AddHostObjectToScript,
  TCoreWebView2_RemoveHostObjectFromScript,
  TCoreWebView2_AddScriptToExecuteOnDocumentCreated,
  TCoreWebView2_RemoveScriptToExecuteOnDocumentCreated,
  TCoreWebView2_OpenDefaultDownloadDialog,
  TCoreWebView2_CloseDefaultDownloadDialog,
  TCoreWebView2_ClearServerCertificateErrorActions,
  TCoreWebView2_GetFavicon,
  TCoreWebView2_Print,
  TCoreWebView2_ShowPrintUI,
  TCoreWebView2_PrintToPdfStream,
  TCoreWebView2_PostSharedBufferToScript,
  TCoreWebView2_ExecuteScriptWithResult,
  TCoreWebView2_AddWebResourceRequestedFilterWithRequestSourceKinds,
  TCoreWebView2_RemoveWebResourceRequestedFilterWithRequestSourceKinds,
  TCoreWebView2_PostWebMessageAsJsonWithAdditionalObjects,
  TCoreWebView2_ShowSaveAsUI,
  TCoreWebView2_AfterConstruction,
  TCoreWebView2_Initialized,
  TCoreWebView2_BaseIntf,
  TCoreWebView2_Settings,
  TCoreWebView2_BrowserProcessID,
  TCoreWebView2_CanGoBack,
  TCoreWebView2_CanGoForward,
  TCoreWebView2_ContainsFullScreenElement,
  TCoreWebView2_DocumentTitle,
  TCoreWebView2_Source,
  TCoreWebView2_CookieManager,
  TCoreWebView2_Environment,
  TCoreWebView2_IsSuspended,
  TCoreWebView2_IsMuted,
  TCoreWebView2_IsDocumentPlayingAudio,
  TCoreWebView2_IsDefaultDownloadDialogOpen,
  TCoreWebView2_DefaultDownloadDialogCornerAlignment,
  TCoreWebView2_DefaultDownloadDialogMargin,
  TCoreWebView2_StatusBarText,
  TCoreWebView2_Profile,
  TCoreWebView2_FaviconURI,
  TCoreWebView2_MemoryUsageTargetLevel,
  TCoreWebView2_FrameId;