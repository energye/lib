// function
function TWVBrowserBase_CreateBrowserWithHandleBool(AObj: TWVBrowserBase; aHandle: THandle; aUseDefaultEnvironment: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 500}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aHandle, aUseDefaultEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateBrowserWithHandleEnvironment(AObj: TWVBrowserBase; aHandle: THandle; const aEnvironment: ICoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 501}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aHandle, aEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateWindowlessBrowserWithHandleBool(AObj: TWVBrowserBase; aHandle: THandle; aUseDefaultEnvironment: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 502}
  handleExceptionBegin
  Result := AObj.CreateWindowlessBrowser(aHandle, aUseDefaultEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateWindowlessBrowserWithHandleEnvironment(AObj: TWVBrowserBase; aHandle: THandle; const aEnvironment: ICoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 503}
  handleExceptionBegin
  Result := AObj.CreateWindowlessBrowser(aHandle, aEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateInvisibleBrowserWithBool(AObj: TWVBrowserBase; aUseDefaultEnvironment: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 504}
  handleExceptionBegin
  Result := AObj.CreateInvisibleBrowser(aUseDefaultEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateInvisibleBrowserWithEnvironment(AObj: TWVBrowserBase; const aEnvironment: ICoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 505}
  handleExceptionBegin
  Result := AObj.CreateInvisibleBrowser(aEnvironment);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GoBack(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 506}
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GoForward(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 507}
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_Refresh(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 508}
  handleExceptionBegin
  Result := AObj.Refresh();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RefreshIgnoreCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 509}
  handleExceptionBegin
  Result := AObj.RefreshIgnoreCache();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_Stop(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 510}
  handleExceptionBegin
  Result := AObj.Stop();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_Navigate(AObj: TWVBrowserBase; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 511}
  handleExceptionBegin
  Result := AObj.Navigate(PCharToUStr(aURI));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_NavigateToString(AObj: TWVBrowserBase; const aHTMLContent: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 512}
  handleExceptionBegin
  Result := AObj.NavigateToString(PCharToUStr(aHTMLContent));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_NavigateWithWebResourceRequest(AObj: TWVBrowserBase; const aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
begin
  {$define handleExceptionID := 513}
  handleExceptionBegin
  Result := AObj.NavigateWithWebResourceRequest(aRequest);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SubscribeToDevToolsProtocolEvent(AObj: TWVBrowserBase; const aEventName: PChar; aEventID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 514}
  handleExceptionBegin
  Result := AObj.SubscribeToDevToolsProtocolEvent(PCharToUStr(aEventName), aEventID);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CallDevToolsProtocolMethod(AObj: TWVBrowserBase; const aMethodName: PChar; const aParametersAsJson: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 515}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethod(PCharToUStr(aMethodName), PCharToUStr(aParametersAsJson), aExecutionID);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CallDevToolsProtocolMethodForSession(AObj: TWVBrowserBase; const aSessionId: PChar; const aMethodName: PChar; const aParametersAsJson: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 516}
  handleExceptionBegin
  Result := AObj.CallDevToolsProtocolMethodForSession(PCharToUStr(aSessionId), PCharToUStr(aMethodName), PCharToUStr(aParametersAsJson), aExecutionID);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SetFocus(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 517}
  handleExceptionBegin
  Result := AObj.SetFocus();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_FocusNext(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 518}
  handleExceptionBegin
  Result := AObj.FocusNext();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_FocusPrevious(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 519}
  handleExceptionBegin
  Result := AObj.FocusPrevious();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ExecuteScriptWithResult(AObj: TWVBrowserBase; const aJavaScript: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 520}
  handleExceptionBegin
  Result := AObj.ExecuteScriptWithResult(PCharToUStr(aJavaScript), aExecutionID);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ExecuteScript(AObj: TWVBrowserBase; const aJavaScript: PChar; aExecutionID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 521}
  handleExceptionBegin
  Result := AObj.ExecuteScript(PCharToUStr(aJavaScript), aExecutionID);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CapturePreview(AObj: TWVBrowserBase; aImageFormat: TWVCapturePreviewImageFormat; const aImageStream: IStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 522}
  handleExceptionBegin
  Result := AObj.CapturePreview(aImageFormat, aImageStream);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_NotifyParentWindowPositionChanged(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 523}
  handleExceptionBegin
  Result := AObj.NotifyParentWindowPositionChanged();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SetPermissionState(AObj: TWVBrowserBase; aPermissionKind: TWVPermissionKind; const aOrigin: PChar; aState: TWVPermissionState): LongBool; extdecl;
begin
  {$define handleExceptionID := 524}
  handleExceptionBegin
  Result := AObj.SetPermissionState(aPermissionKind, PCharToUStr(aOrigin), aState);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetNonDefaultPermissionSettings(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 525}
  handleExceptionBegin
  Result := AObj.GetNonDefaultPermissionSettings();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddBrowserExtension(AObj: TWVBrowserBase; const extensionFolderPath: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 526}
  handleExceptionBegin
  Result := AObj.AddBrowserExtension(PCharToUStr(extensionFolderPath));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetBrowserExtensions(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 527}
  handleExceptionBegin
  Result := AObj.GetBrowserExtensions();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DeleteProfile(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 528}
  handleExceptionBegin
  Result := AObj.DeleteProfile();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_TrySuspend(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 529}
  handleExceptionBegin
  Result := AObj.TrySuspend();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_Resume(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 530}
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SetVirtualHostNameToFolderMapping(AObj: TWVBrowserBase; const aHostName: PChar; const aFolderPath: PChar; aAccessKind: TWVHostResourceAcccessKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 531}
  handleExceptionBegin
  Result := AObj.SetVirtualHostNameToFolderMapping(PCharToUStr(aHostName), PCharToUStr(aFolderPath), aAccessKind);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearVirtualHostNameToFolderMapping(AObj: TWVBrowserBase; const aHostName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 532}
  handleExceptionBegin
  Result := AObj.ClearVirtualHostNameToFolderMapping(PCharToUStr(aHostName));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RetrieveHTML(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 533}
  handleExceptionBegin
  Result := AObj.RetrieveHTML();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RetrieveText(AObj: TWVBrowserBase; aVisibleTextOnly: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 534}
  handleExceptionBegin
  Result := AObj.RetrieveText(aVisibleTextOnly);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RetrieveMHTML(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 535}
  handleExceptionBegin
  Result := AObj.RetrieveMHTML();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_Print(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 536}
  handleExceptionBegin
  Result := AObj.Print();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ShowPrintUI(AObj: TWVBrowserBase; aUseSystemPrintDialog: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 537}
  handleExceptionBegin
  Result := AObj.ShowPrintUI(aUseSystemPrintDialog);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PrintToPdf(AObj: TWVBrowserBase; const aResultFilePath: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 538}
  handleExceptionBegin
  Result := AObj.PrintToPdf(PCharToUStr(aResultFilePath));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PrintToPdfStream(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 539}
  handleExceptionBegin
  Result := AObj.PrintToPdfStream();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_OpenDevToolsWindow(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 540}
  handleExceptionBegin
  Result := AObj.OpenDevToolsWindow();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_OpenTaskManagerWindow(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 541}
  handleExceptionBegin
  Result := AObj.OpenTaskManagerWindow();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PostWebMessageAsJson(AObj: TWVBrowserBase; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 542}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(PCharToUStr(aWebMessageAsJson));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PostWebMessageAsString(AObj: TWVBrowserBase; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 543}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(PCharToUStr(aWebMessageAsString));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddWebResourceRequestedFilter(AObj: TWVBrowserBase; const aURI: PChar; aResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 544}
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilter(PCharToUStr(aURI), aResourceContext);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RemoveWebResourceRequestedFilter(AObj: TWVBrowserBase; const aURI: PChar; aResourceContext: TWVWebResourceContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 545}
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilter(PCharToUStr(aURI), aResourceContext);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddWebResourceRequestedFilterWithRequestSourceKinds(AObj: TWVBrowserBase; const uri: PChar; ResourceContext: TWVWebResourceContext; requestSourceKinds: TWVWebResourceRequestSourceKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 546}
  handleExceptionBegin
  Result := AObj.AddWebResourceRequestedFilterWithRequestSourceKinds(PCharToUStr(uri), ResourceContext, requestSourceKinds);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RemoveWebResourceRequestedFilterWithRequestSourceKinds(AObj: TWVBrowserBase; const uri: PChar; ResourceContext: TWVWebResourceContext; requestSourceKinds: TWVWebResourceRequestSourceKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 547}
  handleExceptionBegin
  Result := AObj.RemoveWebResourceRequestedFilterWithRequestSourceKinds(PCharToUStr(uri), ResourceContext, requestSourceKinds);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PostWebMessageAsJsonWithAdditionalObjects(AObj: TWVBrowserBase; const webMessageAsJson: PChar; const additionalObjects: ICoreWebView2ObjectCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionID := 548}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJsonWithAdditionalObjects(PCharToUStr(webMessageAsJson), additionalObjects);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddHostObjectToScript(AObj: TWVBrowserBase; const aName: PChar; const aObject: OleVariant): LongBool; extdecl;
begin
  {$define handleExceptionID := 549}
  handleExceptionBegin
  Result := AObj.AddHostObjectToScript(PCharToUStr(aName), aObject);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RemoveHostObjectFromScript(AObj: TWVBrowserBase; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 550}
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(PCharToUStr(aName));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddScriptToExecuteOnDocumentCreated(AObj: TWVBrowserBase; const JavaScript: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 551}
  handleExceptionBegin
  Result := AObj.AddScriptToExecuteOnDocumentCreated(PCharToUStr(JavaScript));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_RemoveScriptToExecuteOnDocumentCreated(AObj: TWVBrowserBase; const aID: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 552}
  handleExceptionBegin
  Result := AObj.RemoveScriptToExecuteOnDocumentCreated(PCharToUStr(aID));
  handleExceptionEnd
end;

// function
procedure TWVBrowserBase_CreateCookie(AObj: TWVBrowserBase; const aName: PChar; const aValue: PChar; const aDomain: PChar; const aPath: PChar; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 553}
  handleExceptionBegin
  Result := AObj.CreateCookie(PCharToUStr(aName), PCharToUStr(aValue), PCharToUStr(aDomain), PCharToUStr(aPath));
  handleExceptionEnd
end;

// function
procedure TWVBrowserBase_CopyCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 554}
  handleExceptionBegin
  Result := AObj.CopyCookie(aCookie);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetCookies(AObj: TWVBrowserBase; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 555}
  handleExceptionBegin
  Result := AObj.GetCookies(PCharToUStr(aURI));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_AddOrUpdateCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 556}
  handleExceptionBegin
  Result := AObj.AddOrUpdateCookie(aCookie);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DeleteCookie(AObj: TWVBrowserBase; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 557}
  handleExceptionBegin
  Result := AObj.DeleteCookie(aCookie);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DeleteCookies(AObj: TWVBrowserBase; const aName: PChar; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 558}
  handleExceptionBegin
  Result := AObj.DeleteCookies(PCharToUStr(aName), PCharToUStr(aURI));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DeleteCookiesWithDomainAndPath(AObj: TWVBrowserBase; const aName: PChar; const aDomain: PChar; const aPath: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 559}
  handleExceptionBegin
  Result := AObj.DeleteCookiesWithDomainAndPath(PCharToUStr(aName), PCharToUStr(aDomain), PCharToUStr(aPath));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DeleteAllCookies(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 560}
  handleExceptionBegin
  Result := AObj.DeleteAllCookies();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SetBoundsAndZoomFactor(AObj: TWVBrowserBase; var aBounds: TRect; var aZoomFactor: double): LongBool; extdecl;
begin
  {$define handleExceptionID := 561}
  handleExceptionBegin
  Result := AObj.SetBoundsAndZoomFactor(aBounds, aZoomFactor);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_OpenDefaultDownloadDialog(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 562}
  handleExceptionBegin
  Result := AObj.OpenDefaultDownloadDialog();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CloseDefaultDownloadDialog(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 563}
  handleExceptionBegin
  Result := AObj.CloseDefaultDownloadDialog();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SimulateEditingCommand(AObj: TWVBrowserBase; aEditingCommand: TWV2EditingCommand): LongBool; extdecl;
begin
  {$define handleExceptionID := 564}
  handleExceptionBegin
  Result := AObj.SimulateEditingCommand(aEditingCommand);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SimulateKeyEvent(AObj: TWVBrowserBase; var Args: TWVBrowserBaseSimulateKeyEventArgsPtr): LongBool; extdecl;
var
  InArgs: TWVBrowserBaseSimulateKeyEventArgs;
begin
  {$define handleExceptionID := 565}
  handleExceptionBegin
  InArgs := TWVBrowserBaseSimulateKeyEventArgsToPas(Args);
  Result := AObj.SimulateKeyEvent(InArgs.type_, InArgs.modifiers, InArgs.windowsVirtualKeyCode, InArgs.nativeVirtualKeyCode, InArgs.timestamp, InArgs.location, InArgs.autoRepeat, InArgs.isKeypad, InArgs.isSystemKey, InArgs.text, InArgs.unmodifiedtext, InArgs.keyIdentifier, InArgs.code, InArgs.key);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_KeyboardShortcutSearch(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 566}
  handleExceptionBegin
  Result := AObj.KeyboardShortcutSearch();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_KeyboardShortcutRefreshIgnoreCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 567}
  handleExceptionBegin
  Result := AObj.KeyboardShortcutRefreshIgnoreCache();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SendMouseInput(AObj: TWVBrowserBase; aEventKind: TWVMouseEventKind; aVirtualKeys: TWVMouseEventVirtualKeys; aMouseData: cardinal; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 568}
  handleExceptionBegin
  Result := AObj.SendMouseInput(aEventKind, aVirtualKeys, aMouseData, aPoint);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_SendPointerInput(AObj: TWVBrowserBase; aEventKind: TWVPointerEventKind; const aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 569}
  handleExceptionBegin
  Result := AObj.SendPointerInput(aEventKind, aPointerInfo);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DragLeave(AObj: TWVBrowserBase): HResult; extdecl;
begin
  {$define handleExceptionID := 570}
  handleExceptionBegin
  Result := AObj.DragLeave();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_DragOver(AObj: TWVBrowserBase; keyState: LongWord; var point: TPoint; var effect: LongWord): HResult; extdecl;
var
  Outeffect: LongWord;
begin
  {$define handleExceptionID := 571}
  handleExceptionBegin
  Result := AObj.DragOver(keyState, point, Outeffect);
  effect := Outeffect;
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetNonClientRegionAtPoint(AObj: TWVBrowserBase; var point: TPoint): TWVNonClientRegionKind; extdecl;
begin
  {$define handleExceptionID := 572}
  handleExceptionBegin
  Result := AObj.GetNonClientRegionAtPoint(point);
  handleExceptionEnd
end;

// function
procedure TWVBrowserBase_QueryNonClientRegion(AObj: TWVBrowserBase; Kind: TWVNonClientRegionKind; var Result: ICoreWebView2RegionRectCollectionView); extdecl;
begin
  {$define handleExceptionID := 573}
  handleExceptionBegin
  Result := AObj.QueryNonClientRegion(Kind);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearCache(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 574}
  handleExceptionBegin
  Result := AObj.ClearCache();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearDataForOrigin(AObj: TWVBrowserBase; const aOrigin: PChar; aStorageTypes: TWVClearDataStorageTypes): LongBool; extdecl;
begin
  {$define handleExceptionID := 575}
  handleExceptionBegin
  Result := AObj.ClearDataForOrigin(PCharToUStr(aOrigin), aStorageTypes);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearBrowsingData(AObj: TWVBrowserBase; dataKinds: TWVBrowsingDataKinds): LongBool; extdecl;
begin
  {$define handleExceptionID := 576}
  handleExceptionBegin
  Result := AObj.ClearBrowsingData(dataKinds);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearBrowsingDataInTimeRange(AObj: TWVBrowserBase; dataKinds: TWVBrowsingDataKinds; var startTime: Double; var endTime: Double): LongBool; extdecl;
begin
  {$define handleExceptionID := 577}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataInTimeRange(dataKinds, startTime, endTime);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearBrowsingDataAll(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 578}
  handleExceptionBegin
  Result := AObj.ClearBrowsingDataAll();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ClearServerCertificateErrorActions(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 579}
  handleExceptionBegin
  Result := AObj.ClearServerCertificateErrorActions();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetFavicon(AObj: TWVBrowserBase; aFormat: TWVFaviconImageFormat): LongBool; extdecl;
begin
  {$define handleExceptionID := 580}
  handleExceptionBegin
  Result := AObj.GetFavicon(aFormat);
  handleExceptionEnd
end;

// function
function TWVBrowserBase_CreateSharedBuffer(AObj: TWVBrowserBase; var aSize: int64; var aSharedBuffer: ICoreWebView2SharedBuffer): LongBool; extdecl;
var
  OutaSharedBuffer: ICoreWebView2SharedBuffer = nil;
begin
  {$define handleExceptionID := 581}
  handleExceptionBegin
  Result := AObj.CreateSharedBuffer(aSize, OutaSharedBuffer);
  aSharedBuffer := OutaSharedBuffer;
  handleExceptionEnd
end;

// function
function TWVBrowserBase_PostSharedBufferToScript(AObj: TWVBrowserBase; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 582}
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, PCharToUStr(aAdditionalDataAsJson));
  handleExceptionEnd
end;

// function
function TWVBrowserBase_GetProcessExtendedInfos(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 583}
  handleExceptionBegin
  Result := AObj.GetProcessExtendedInfos();
  handleExceptionEnd
end;

// function
function TWVBrowserBase_ShowSaveAsUI(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 584}
  handleExceptionBegin
  Result := AObj.ShowSaveAsUI();
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_MoveFormTo(AObj: TWVBrowserBase; const x: Integer; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 585}
  handleExceptionBegin
  AObj.MoveFormTo(x, y);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_MoveFormBy(AObj: TWVBrowserBase; const x: Integer; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 586}
  handleExceptionBegin
  AObj.MoveFormBy(x, y);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_ResizeFormWidthTo(AObj: TWVBrowserBase; const x: Integer); extdecl;
begin
  {$define handleExceptionID := 587}
  handleExceptionBegin
  AObj.ResizeFormWidthTo(x);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_ResizeFormHeightTo(AObj: TWVBrowserBase; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 588}
  handleExceptionBegin
  AObj.ResizeFormHeightTo(y);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_SetFormLeftTo(AObj: TWVBrowserBase; const x: Integer); extdecl;
begin
  {$define handleExceptionID := 589}
  handleExceptionBegin
  AObj.SetFormLeftTo(x);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_SetFormTopTo(AObj: TWVBrowserBase; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 590}
  handleExceptionBegin
  AObj.SetFormTopTo(y);
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_IncZoomStep(AObj: TWVBrowserBase); extdecl;
begin
  {$define handleExceptionID := 591}
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_DecZoomStep(AObj: TWVBrowserBase); extdecl;
begin
  {$define handleExceptionID := 592}
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_ResetZoom(AObj: TWVBrowserBase); extdecl;
begin
  {$define handleExceptionID := 593}
  handleExceptionBegin
  AObj.ResetZoom();
  handleExceptionEnd
end;

// procedure
procedure TWVBrowserBase_ToggleMuteState(AObj: TWVBrowserBase); extdecl;
begin
  {$define handleExceptionID := 594}
  handleExceptionBegin
  AObj.ToggleMuteState();
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Initialized(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 595}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2PrintSettings(AObj: TWVBrowserBase): TCoreWebView2PrintSettings; extdecl;
begin
  {$define handleExceptionID := 596}
  handleExceptionBegin
  Result := AObj.CoreWebView2PrintSettings;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2Settings(AObj: TWVBrowserBase): TCoreWebView2Settings; extdecl;
begin
  {$define handleExceptionID := 597}
  handleExceptionBegin
  Result := AObj.CoreWebView2Settings;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2Environment(AObj: TWVBrowserBase): TCoreWebView2Environment; extdecl;
begin
  {$define handleExceptionID := 598}
  handleExceptionBegin
  Result := AObj.CoreWebView2Environment;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2Controller(AObj: TWVBrowserBase): TCoreWebView2Controller; extdecl;
begin
  {$define handleExceptionID := 599}
  handleExceptionBegin
  Result := AObj.CoreWebView2Controller;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2CompositionController(AObj: TWVBrowserBase): TCoreWebView2CompositionController; extdecl;
begin
  {$define handleExceptionID := 600}
  handleExceptionBegin
  Result := AObj.CoreWebView2CompositionController;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CoreWebView2(AObj: TWVBrowserBase): TCoreWebView2; extdecl;
begin
  {$define handleExceptionID := 601}
  handleExceptionBegin
  Result := AObj.CoreWebView2;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Profile(AObj: TWVBrowserBase): TCoreWebView2Profile; extdecl;
begin
  {$define handleExceptionID := 602}
  handleExceptionBegin
  Result := AObj.Profile;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_DefaultURL(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultURL := AValue
  end else
    StringBufferCreate(AObj.DefaultURL, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsNavigating(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 604}
  handleExceptionBegin
  Result := AObj.IsNavigating;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ZoomPct(ASet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomPct := AValue
  end else
    Result := AObj.ZoomPct;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ZoomStep(ASet: LongBool; AObj: TWVBrowserBase; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionID := 606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomStep := AValue
  end else
    Result := AObj.ZoomStep;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Widget0CompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  {$define handleExceptionID := 607}
  handleExceptionBegin
  Result := AObj.Widget0CompHWND;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Widget1CompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  {$define handleExceptionID := 608}
  handleExceptionBegin
  Result := AObj.Widget1CompHWND;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_RenderCompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  {$define handleExceptionID := 609}
  handleExceptionBegin
  Result := AObj.RenderCompHWND;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_D3DWindowCompHWND(AObj: TWVBrowserBase): THandle; extdecl;
begin
  {$define handleExceptionID := 610}
  handleExceptionBegin
  Result := AObj.D3DWindowCompHWND;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ScreenScale(AObj: TWVBrowserBase; var Result: single); extdecl;
begin
  {$define handleExceptionID := 611}
  handleExceptionBegin
  Result := AObj.ScreenScale;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Offline(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Offline := AValue
  end else
    Result := AObj.Offline;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IgnoreCertificateErrors(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IgnoreCertificateErrors := AValue
  end else
    Result := AObj.IgnoreCertificateErrors;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_BrowserExecPath(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BrowserExecPath := AValue
  end else
    StringBufferCreate(AObj.BrowserExecPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_UserDataFolder(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserDataFolder := AValue
  end else
    StringBufferCreate(AObj.UserDataFolder, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_AdditionalBrowserArguments(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 616}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AdditionalBrowserArguments := AValue
  end else
    StringBufferCreate(AObj.AdditionalBrowserArguments, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_Language(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 617}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Language := AValue
  end else
    StringBufferCreate(AObj.Language, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_TargetCompatibleBrowserVersion(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TargetCompatibleBrowserVersion := AValue
  end else
    StringBufferCreate(AObj.TargetCompatibleBrowserVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_AllowSingleSignOnUsingOSPrimaryAccount(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowSingleSignOnUsingOSPrimaryAccount := AValue
  end else
    Result := AObj.AllowSingleSignOnUsingOSPrimaryAccount;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ExclusiveUserDataFolderAccess(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExclusiveUserDataFolderAccess := AValue
  end else
    Result := AObj.ExclusiveUserDataFolderAccess;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CustomCrashReportingEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomCrashReportingEnabled := AValue
  end else
    Result := AObj.CustomCrashReportingEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_EnableTrackingPrevention(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableTrackingPrevention := AValue
  end else
    Result := AObj.EnableTrackingPrevention;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_AreBrowserExtensionsEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 623}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreBrowserExtensionsEnabled := AValue
  end else
    Result := AObj.AreBrowserExtensionsEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ChannelSearchKind(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVChannelSearchKind): TWVChannelSearchKind; extdecl;
begin
  {$define handleExceptionID := 624}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChannelSearchKind := AValue
  end else
    Result := AObj.ChannelSearchKind;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ReleaseChannels(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVReleaseChannels): TWVReleaseChannels; extdecl;
begin
  {$define handleExceptionID := 625}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReleaseChannels := AValue
  end else
    Result := AObj.ReleaseChannels;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ScrollBarStyle(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVScrollBarStyle): TWVScrollBarStyle; extdecl;
begin
  {$define handleExceptionID := 626}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBarStyle := AValue
  end else
    Result := AObj.ScrollBarStyle;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_BrowserVersionInfo(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 627}
  handleExceptionBegin
  StringBufferCreate(AObj.BrowserVersionInfo, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_BrowserProcessID(AObj: TWVBrowserBase): cardinal; extdecl;
begin
  {$define handleExceptionID := 628}
  handleExceptionBegin
  Result := AObj.BrowserProcessID;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CanGoBack(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 629}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_CanGoForward(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 630}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ContainsFullScreenElement(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 631}
  handleExceptionBegin
  Result := AObj.ContainsFullScreenElement;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_DocumentTitle(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 632}
  handleExceptionBegin
  StringBufferCreate(AObj.DocumentTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_Source(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 633}
  handleExceptionBegin
  StringBufferCreate(AObj.Source, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_CookieManager(AObj: TWVBrowserBase; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionID := 634}
  handleExceptionBegin
  Result := AObj.CookieManager;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsSuspended(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 635}
  handleExceptionBegin
  Result := AObj.IsSuspended;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsDocumentPlayingAudio(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 636}
  handleExceptionBegin
  Result := AObj.IsDocumentPlayingAudio;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsMuted(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 637}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsMuted := AValue
  end else
    Result := AObj.IsMuted;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_DefaultDownloadDialogCornerAlignment(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVDefaultDownloadDialogCornerAlignment): TWVDefaultDownloadDialogCornerAlignment; extdecl;
begin
  {$define handleExceptionID := 638}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadDialogCornerAlignment := AValue
  end else
    Result := AObj.DefaultDownloadDialogCornerAlignment;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_DefaultDownloadDialogMargin(ASet: LongBool; AObj: TWVBrowserBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 639}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadDialogMargin := AValue
  end else
    Result := AObj.DefaultDownloadDialogMargin;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsDefaultDownloadDialogOpen(AObj: TWVBrowserBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 640}
  handleExceptionBegin
  Result := AObj.IsDefaultDownloadDialogOpen;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_StatusBarText(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 641}
  handleExceptionBegin
  StringBufferCreate(AObj.StatusBarText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_FaviconURI(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 642}
  handleExceptionBegin
  StringBufferCreate(AObj.FaviconURI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_MemoryUsageTargetLevel(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVMemoryUsageTargetLevel): TWVMemoryUsageTargetLevel; extdecl;
begin
  {$define handleExceptionID := 643}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MemoryUsageTargetLevel := AValue
  end else
    Result := AObj.MemoryUsageTargetLevel;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_Bounds(ASet: LongBool; AObj: TWVBrowserBase; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 644}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bounds := AValue
  end else
    Result := AObj.Bounds;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsVisible(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 645}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsVisible := AValue
  end else
    Result := AObj.IsVisible;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ParentWindow(ASet: LongBool; AObj: TWVBrowserBase; AValue: THandle): THandle; extdecl;
begin
  {$define handleExceptionID := 646}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentWindow := AValue
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ZoomFactor(ASet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 647}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomFactor := AValue
  end else
    Result := AObj.ZoomFactor;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_DefaultBackgroundColor(ASet: LongBool; AObj: TWVBrowserBase; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 648}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultBackgroundColor := AValue
  end else
    Result := AObj.DefaultBackgroundColor;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_BoundsMode(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVBoundsMode): TWVBoundsMode; extdecl;
begin
  {$define handleExceptionID := 649}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoundsMode := AValue
  end else
    Result := AObj.BoundsMode;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_RasterizationScale(ASet: LongBool; AObj: TWVBrowserBase; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 650}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RasterizationScale := AValue
  end else
    Result := AObj.RasterizationScale;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ShouldDetectMonitorScaleChanges(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 651}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShouldDetectMonitorScaleChanges := AValue
  end else
    Result := AObj.ShouldDetectMonitorScaleChanges;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_AllowExternalDrop(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 652}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowExternalDrop := AValue
  end else
    Result := AObj.AllowExternalDrop;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_DefaultContextMenusEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 653}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultContextMenusEnabled := AValue
  end else
    Result := AObj.DefaultContextMenusEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_DefaultScriptDialogsEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 654}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultScriptDialogsEnabled := AValue
  end else
    Result := AObj.DefaultScriptDialogsEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_DevToolsEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 655}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DevToolsEnabled := AValue
  end else
    Result := AObj.DevToolsEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_AreHostObjectsAllowed(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 656}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreHostObjectsAllowed := AValue
  end else
    Result := AObj.AreHostObjectsAllowed;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_BuiltInErrorPageEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 657}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BuiltInErrorPageEnabled := AValue
  end else
    Result := AObj.BuiltInErrorPageEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ScriptEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 658}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScriptEnabled := AValue
  end else
    Result := AObj.ScriptEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_StatusBarEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 659}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StatusBarEnabled := AValue
  end else
    Result := AObj.StatusBarEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_WebMessageEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 660}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WebMessageEnabled := AValue
  end else
    Result := AObj.WebMessageEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ZoomControlEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 661}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomControlEnabled := AValue
  end else
    Result := AObj.ZoomControlEnabled;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_UserAgent(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 662}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserAgent := AValue
  end else
    StringBufferCreate(AObj.UserAgent, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_AreBrowserAcceleratorKeysEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 663}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AreBrowserAcceleratorKeysEnabled := AValue
  end else
    Result := AObj.AreBrowserAcceleratorKeysEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsGeneralAutofillEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 664}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsGeneralAutofillEnabled := AValue
  end else
    Result := AObj.IsGeneralAutofillEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsPasswordAutosaveEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 665}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsPasswordAutosaveEnabled := AValue
  end else
    Result := AObj.IsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsPinchZoomEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 666}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsPinchZoomEnabled := AValue
  end else
    Result := AObj.IsPinchZoomEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsSwipeNavigationEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 667}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsSwipeNavigationEnabled := AValue
  end else
    Result := AObj.IsSwipeNavigationEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_HiddenPdfToolbarItems(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVPDFToolbarItems): TWVPDFToolbarItems; extdecl;
begin
  {$define handleExceptionID := 668}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HiddenPdfToolbarItems := AValue
  end else
    Result := AObj.HiddenPdfToolbarItems;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsReputationCheckingRequired(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 669}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsReputationCheckingRequired := AValue
  end else
    Result := AObj.IsReputationCheckingRequired;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsNonClientRegionSupportEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 670}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsNonClientRegionSupportEnabled := AValue
  end else
    Result := AObj.IsNonClientRegionSupportEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_Cursor(AObj: TWVBrowserBase): HCURSOR; extdecl;
begin
  {$define handleExceptionID := 671}
  handleExceptionBegin
  Result := AObj.Cursor;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_RootVisualTarget(ASet: LongBool; AObj: TWVBrowserBase; AValue: IUnknown; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 672}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootVisualTarget := AValue
  end else
    Result := AObj.RootVisualTarget;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_SystemCursorID(AObj: TWVBrowserBase): cardinal; extdecl;
begin
  {$define handleExceptionID := 673}
  handleExceptionBegin
  Result := AObj.SystemCursorID;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_AutomationProvider(AObj: TWVBrowserBase; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 674}
  handleExceptionBegin
  Result := AObj.AutomationProvider;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ProcessInfos(AObj: TWVBrowserBase; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  {$define handleExceptionID := 675}
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ProfileName(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 676}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProfileName := AValue
  end else
    StringBufferCreate(AObj.ProfileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_IsInPrivateModeEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 677}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsInPrivateModeEnabled := AValue
  end else
    Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ScriptLocale(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 678}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScriptLocale := AValue
  end else
    StringBufferCreate(AObj.ScriptLocale, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ProfilePath(AObj: TWVBrowserBase; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 679}
  handleExceptionBegin
  StringBufferCreate(AObj.ProfilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_DefaultDownloadFolderPath(ASet: LongBool; AObj: TWVBrowserBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 680}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDownloadFolderPath := AValue
  end else
    StringBufferCreate(AObj.DefaultDownloadFolderPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWVBrowserBase_PreferredColorScheme(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVPreferredColorScheme): TWVPreferredColorScheme; extdecl;
begin
  {$define handleExceptionID := 681}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreferredColorScheme := AValue
  end else
    Result := AObj.PreferredColorScheme;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_PreferredTrackingPreventionLevel(ASet: LongBool; AObj: TWVBrowserBase; AValue: TWVTrackingPreventionLevel): TWVTrackingPreventionLevel; extdecl;
begin
  {$define handleExceptionID := 682}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreferredTrackingPreventionLevel := AValue
  end else
    Result := AObj.PreferredTrackingPreventionLevel;
  handleExceptionEnd
end;

// property
procedure TWVBrowserBase_ProfileCookieManager(AObj: TWVBrowserBase; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionID := 683}
  handleExceptionBegin
  Result := AObj.ProfileCookieManager;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ProfileIsPasswordAutosaveEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 684}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProfileIsPasswordAutosaveEnabled := AValue
  end else
    Result := AObj.ProfileIsPasswordAutosaveEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_ProfileIsGeneralAutofillEnabled(ASet: LongBool; AObj: TWVBrowserBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 685}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProfileIsGeneralAutofillEnabled := AValue
  end else
    Result := AObj.ProfileIsGeneralAutofillEnabled;
  handleExceptionEnd
end;

// property
function TWVBrowserBase_FrameId(AObj: TWVBrowserBase): cardinal; extdecl;
begin
  {$define handleExceptionID := 686}
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

// event
procedure TWVBrowserBase_OnBrowserProcessExited(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnBrowserProcessExitedEvent}
  {$DEFINE EventName := OnBrowserProcessExited}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnProcessInfosChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnProcessInfosChangedEvent}
  {$DEFINE EventName := OnProcessInfosChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnContainsFullScreenElementChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnContainsFullScreenElementChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnContentLoading(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnContentLoadingEvent}
  {$DEFINE EventName := OnContentLoading}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnDocumentTitleChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnDocumentTitleChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameNavigationCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNavigationCompletedEvent}
  {$DEFINE EventName := OnFrameNavigationCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameNavigationStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNavigationStartingEvent}
  {$DEFINE EventName := OnFrameNavigationStarting}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnHistoryChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnHistoryChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNavigationCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNavigationCompletedEvent}
  {$DEFINE EventName := OnNavigationCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNavigationStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNavigationStartingEvent}
  {$DEFINE EventName := OnNavigationStarting}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNewWindowRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNewWindowRequestedEvent}
  {$DEFINE EventName := OnNewWindowRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnPermissionRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnPermissionRequestedEvent}
  {$DEFINE EventName := OnPermissionRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnProcessFailed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnProcessFailedEvent}
  {$DEFINE EventName := OnProcessFailed}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnScriptDialogOpening(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnScriptDialogOpeningEvent}
  {$DEFINE EventName := OnScriptDialogOpening}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnSourceChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnSourceChangedEvent}
  {$DEFINE EventName := OnSourceChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWebMessageReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnWebMessageReceivedEvent}
  {$DEFINE EventName := OnWebMessageReceived}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWebResourceRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnWebResourceRequestedEvent}
  {$DEFINE EventName := OnWebResourceRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWindowCloseRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnWindowCloseRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnDOMContentLoaded(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnDOMContentLoadedEvent}
  {$DEFINE EventName := OnDOMContentLoaded}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWebResourceResponseReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnWebResourceResponseReceivedEvent}
  {$DEFINE EventName := OnWebResourceResponseReceived}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnDownloadStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnDownloadStartingEvent}
  {$DEFINE EventName := OnDownloadStarting}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameCreated(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameCreatedEvent}
  {$DEFINE EventName := OnFrameCreated}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnClientCertificateRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnClientCertificateRequestedEvent}
  {$DEFINE EventName := OnClientCertificateRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnIsDocumentPlayingAudioChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnIsDocumentPlayingAudioChangedEvent}
  {$DEFINE EventName := OnIsDocumentPlayingAudioChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnIsMutedChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnIsMutedChangedEvent}
  {$DEFINE EventName := OnIsMutedChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnIsDefaultDownloadDialogOpenChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnIsDefaultDownloadDialogOpenChangedEvent}
  {$DEFINE EventName := OnIsDefaultDownloadDialogOpenChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnBasicAuthenticationRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnBasicAuthenticationRequestedEvent}
  {$DEFINE EventName := OnBasicAuthenticationRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnContextMenuRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnContextMenuRequestedEvent}
  {$DEFINE EventName := OnContextMenuRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnStatusBarTextChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnStatusBarTextChangedEvent}
  {$DEFINE EventName := OnStatusBarTextChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnServerCertificateErrorActionsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnServerCertificateErrorActionsCompletedEvent}
  {$DEFINE EventName := OnServerCertificateErrorActionsCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnServerCertificateErrorDetected(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnServerCertificateErrorDetectedEvent}
  {$DEFINE EventName := OnServerCertificateErrorDetected}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFaviconChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFaviconChangedEvent}
  {$DEFINE EventName := OnFaviconChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGetFaviconCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnGetFaviconCompletedEvent}
  {$DEFINE EventName := OnGetFaviconCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnPrintCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnPrintCompletedEvent}
  {$DEFINE EventName := OnPrintCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnPrintToPdfStreamCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnPrintToPdfStreamCompletedEvent}
  {$DEFINE EventName := OnPrintToPdfStreamCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnAcceleratorKeyPressed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnAcceleratorKeyPressedEvent}
  {$DEFINE EventName := OnAcceleratorKeyPressed}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGotFocus(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnGotFocus}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnLostFocus(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnLostFocus}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnMoveFocusRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnMoveFocusRequestedEvent}
  {$DEFINE EventName := OnMoveFocusRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnZoomFactorChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnZoomFactorChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRasterizationScaleChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnRasterizationScaleChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnCursorChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnCursorChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnBytesReceivedChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnBytesReceivedChangedEvent}
  {$DEFINE EventName := OnBytesReceivedChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnEstimatedEndTimeChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnEstimatedEndTimeChangedEvent}
  {$DEFINE EventName := OnEstimatedEndTimeChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnDownloadStateChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnDownloadStateChangedEvent}
  {$DEFINE EventName := OnDownloadStateChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameDestroyed(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameDestroyedEvent}
  {$DEFINE EventName := OnFrameDestroyed}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameNameChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameNameChangedEvent}
  {$DEFINE EventName := OnFrameNameChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameNavigationStarting2(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameNavigationStartingEvent}
  {$DEFINE EventName := OnFrameNavigationStarting2}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameNavigationCompleted2(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameNavigationCompletedEvent}
  {$DEFINE EventName := OnFrameNavigationCompleted2}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameContentLoading(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameContentLoadingEvent}
  {$DEFINE EventName := OnFrameContentLoading}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameDOMContentLoaded(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameDOMContentLoadedEvent}
  {$DEFINE EventName := OnFrameDOMContentLoaded}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameWebMessageReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameWebMessageReceivedEvent}
  {$DEFINE EventName := OnFrameWebMessageReceived}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFramePermissionRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFramePermissionRequestedEvent}
  {$DEFINE EventName := OnFramePermissionRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnDevToolsProtocolEventReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnDevToolsProtocolEventReceivedEvent}
  {$DEFINE EventName := OnDevToolsProtocolEventReceived}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnCustomItemSelected(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCustomItemSelectedEvent}
  {$DEFINE EventName := OnCustomItemSelected}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnClearBrowsingDataCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnClearBrowsingDataCompletedEvent}
  {$DEFINE EventName := OnClearBrowsingDataCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnInitializationError(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnInitializationErrorEvent}
  {$DEFINE EventName := OnInitializationError}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnEnvironmentCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnEnvironmentCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnControllerCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnControllerCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnAfterCreated(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnAfterCreated}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnExecuteScriptCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnExecuteScriptCompletedEvent}
  {$DEFINE EventName := OnExecuteScriptCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnCapturePreviewCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCapturePreviewCompletedEvent}
  {$DEFINE EventName := OnCapturePreviewCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGetCookiesCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnGetCookiesCompletedEvent}
  {$DEFINE EventName := OnGetCookiesCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnTrySuspendCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnTrySuspendCompletedEvent}
  {$DEFINE EventName := OnTrySuspendCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnPrintToPdfCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnPrintToPdfCompletedEvent}
  {$DEFINE EventName := OnPrintToPdfCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnCompositionControllerCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TNotifyEvent}
  {$DEFINE EventName := OnCompositionControllerCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnCallDevToolsProtocolMethodCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCallDevToolsProtocolMethodCompletedEvent}
  {$DEFINE EventName := OnCallDevToolsProtocolMethodCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnAddScriptToExecuteOnDocumentCreatedCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnAddScriptToExecuteOnDocumentCreatedCompletedEvent}
  {$DEFINE EventName := OnAddScriptToExecuteOnDocumentCreatedCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWebResourceResponseViewGetContentCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnWebResourceResponseViewGetContentCompletedEvent}
  {$DEFINE EventName := OnWebResourceResponseViewGetContentCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWidget0CompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCompMsgEvent}
  {$DEFINE EventName := OnWidget0CompMsg}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnWidget1CompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCompMsgEvent}
  {$DEFINE EventName := OnWidget1CompMsg}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRenderCompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCompMsgEvent}
  {$DEFINE EventName := OnRenderCompMsg}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnD3DWindowCompMsg(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnCompMsgEvent}
  {$DEFINE EventName := OnD3DWindowCompMsg}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRetrieveHTMLCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnRetrieveHTMLCompletedEvent}
  {$DEFINE EventName := OnRetrieveHTMLCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRetrieveTextCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnRetrieveTextCompletedEvent}
  {$DEFINE EventName := OnRetrieveTextCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRetrieveMHTMLCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnRetrieveMHTMLCompletedEvent}
  {$DEFINE EventName := OnRetrieveMHTMLCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnClearCacheCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnClearCacheCompletedEvent}
  {$DEFINE EventName := OnClearCacheCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnClearDataForOriginCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnClearDataForOriginCompletedEvent}
  {$DEFINE EventName := OnClearDataForOriginCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnOfflineCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnOfflineCompletedEvent}
  {$DEFINE EventName := OnOfflineCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnIgnoreCertificateErrorsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnIgnoreCertificateErrorsCompletedEvent}
  {$DEFINE EventName := OnIgnoreCertificateErrorsCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnRefreshIgnoreCacheCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnRefreshIgnoreCacheCompletedEvent}
  {$DEFINE EventName := OnRefreshIgnoreCacheCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnSimulateKeyEventCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnSimulateKeyEventCompletedEvent}
  {$DEFINE EventName := OnSimulateKeyEventCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGetCustomSchemes(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnGetCustomSchemesEvent}
  {$DEFINE EventName := OnGetCustomSchemes}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGetNonDefaultPermissionSettingsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnGetNonDefaultPermissionSettingsCompletedEvent}
  {$DEFINE EventName := OnGetNonDefaultPermissionSettingsCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnSetPermissionStateCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnSetPermissionStateCompletedEvent}
  {$DEFINE EventName := OnSetPermissionStateCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnLaunchingExternalUriScheme(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnLaunchingExternalUriSchemeEvent}
  {$DEFINE EventName := OnLaunchingExternalUriScheme}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnGetProcessExtendedInfosCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnGetProcessExtendedInfosCompletedEvent}
  {$DEFINE EventName := OnGetProcessExtendedInfosCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnBrowserExtensionRemoveCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnBrowserExtensionRemoveCompletedEvent}
  {$DEFINE EventName := OnBrowserExtensionRemoveCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnBrowserExtensionEnableCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnBrowserExtensionEnableCompletedEvent}
  {$DEFINE EventName := OnBrowserExtensionEnableCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnProfileAddBrowserExtensionCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnProfileAddBrowserExtensionCompletedEvent}
  {$DEFINE EventName := OnProfileAddBrowserExtensionCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnProfileGetBrowserExtensionsCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnProfileGetBrowserExtensionsCompletedEvent}
  {$DEFINE EventName := OnProfileGetBrowserExtensionsCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnProfileDeleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnProfileDeletedEvent}
  {$DEFINE EventName := OnProfileDeleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnExecuteScriptWithResultCompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnExecuteScriptWithResultCompletedEvent}
  {$DEFINE EventName := OnExecuteScriptWithResultCompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNonClientRegionChanged(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNonClientRegionChangedEvent}
  {$DEFINE EventName := OnNonClientRegionChanged}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNotificationReceived(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNotificationReceivedEvent}
  {$DEFINE EventName := OnNotificationReceived}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnNotificationCloseRequested(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnNotificationCloseRequestedEvent}
  {$DEFINE EventName := OnNotificationCloseRequested}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnSaveAsUIShowing(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnSaveAsUIShowingEvent}
  {$DEFINE EventName := OnSaveAsUIShowing}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnShowSaveAsUICompleted(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnShowSaveAsUICompletedEvent}
  {$DEFINE EventName := OnShowSaveAsUICompleted}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnSaveFileSecurityCheckStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnSaveFileSecurityCheckStartingEvent}
  {$DEFINE EventName := OnSaveFileSecurityCheckStarting}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnScreenCaptureStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnScreenCaptureStartingEvent}
  {$DEFINE EventName := OnScreenCaptureStarting}
  WVEventMethodCode
end;

// event
procedure TWVBrowserBase_OnFrameScreenCaptureStarting(AObj: TWVBrowserBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVBrowserBase_TOnFrameScreenCaptureStartingEvent}
  {$DEFINE EventName := OnFrameScreenCaptureStarting}
  WVEventMethodCode
end;

exports
  TWVBrowserBase_CreateBrowserWithHandleBool,
  TWVBrowserBase_CreateBrowserWithHandleEnvironment,
  TWVBrowserBase_CreateWindowlessBrowserWithHandleBool,
  TWVBrowserBase_CreateWindowlessBrowserWithHandleEnvironment,
  TWVBrowserBase_CreateInvisibleBrowserWithBool,
  TWVBrowserBase_CreateInvisibleBrowserWithEnvironment,
  TWVBrowserBase_GoBack,
  TWVBrowserBase_GoForward,
  TWVBrowserBase_Refresh,
  TWVBrowserBase_RefreshIgnoreCache,
  TWVBrowserBase_Stop,
  TWVBrowserBase_Navigate,
  TWVBrowserBase_NavigateToString,
  TWVBrowserBase_NavigateWithWebResourceRequest,
  TWVBrowserBase_SubscribeToDevToolsProtocolEvent,
  TWVBrowserBase_CallDevToolsProtocolMethod,
  TWVBrowserBase_CallDevToolsProtocolMethodForSession,
  TWVBrowserBase_SetFocus,
  TWVBrowserBase_FocusNext,
  TWVBrowserBase_FocusPrevious,
  TWVBrowserBase_ExecuteScriptWithResult,
  TWVBrowserBase_ExecuteScript,
  TWVBrowserBase_CapturePreview,
  TWVBrowserBase_NotifyParentWindowPositionChanged,
  TWVBrowserBase_SetPermissionState,
  TWVBrowserBase_GetNonDefaultPermissionSettings,
  TWVBrowserBase_AddBrowserExtension,
  TWVBrowserBase_GetBrowserExtensions,
  TWVBrowserBase_DeleteProfile,
  TWVBrowserBase_TrySuspend,
  TWVBrowserBase_Resume,
  TWVBrowserBase_SetVirtualHostNameToFolderMapping,
  TWVBrowserBase_ClearVirtualHostNameToFolderMapping,
  TWVBrowserBase_RetrieveHTML,
  TWVBrowserBase_RetrieveText,
  TWVBrowserBase_RetrieveMHTML,
  TWVBrowserBase_Print,
  TWVBrowserBase_ShowPrintUI,
  TWVBrowserBase_PrintToPdf,
  TWVBrowserBase_PrintToPdfStream,
  TWVBrowserBase_OpenDevToolsWindow,
  TWVBrowserBase_OpenTaskManagerWindow,
  TWVBrowserBase_PostWebMessageAsJson,
  TWVBrowserBase_PostWebMessageAsString,
  TWVBrowserBase_AddWebResourceRequestedFilter,
  TWVBrowserBase_RemoveWebResourceRequestedFilter,
  TWVBrowserBase_AddWebResourceRequestedFilterWithRequestSourceKinds,
  TWVBrowserBase_RemoveWebResourceRequestedFilterWithRequestSourceKinds,
  TWVBrowserBase_PostWebMessageAsJsonWithAdditionalObjects,
  TWVBrowserBase_AddHostObjectToScript,
  TWVBrowserBase_RemoveHostObjectFromScript,
  TWVBrowserBase_AddScriptToExecuteOnDocumentCreated,
  TWVBrowserBase_RemoveScriptToExecuteOnDocumentCreated,
  TWVBrowserBase_CreateCookie,
  TWVBrowserBase_CopyCookie,
  TWVBrowserBase_GetCookies,
  TWVBrowserBase_AddOrUpdateCookie,
  TWVBrowserBase_DeleteCookie,
  TWVBrowserBase_DeleteCookies,
  TWVBrowserBase_DeleteCookiesWithDomainAndPath,
  TWVBrowserBase_DeleteAllCookies,
  TWVBrowserBase_SetBoundsAndZoomFactor,
  TWVBrowserBase_OpenDefaultDownloadDialog,
  TWVBrowserBase_CloseDefaultDownloadDialog,
  TWVBrowserBase_SimulateEditingCommand,
  TWVBrowserBase_SimulateKeyEvent,
  TWVBrowserBase_KeyboardShortcutSearch,
  TWVBrowserBase_KeyboardShortcutRefreshIgnoreCache,
  TWVBrowserBase_SendMouseInput,
  TWVBrowserBase_SendPointerInput,
  TWVBrowserBase_DragLeave,
  TWVBrowserBase_DragOver,
  TWVBrowserBase_GetNonClientRegionAtPoint,
  TWVBrowserBase_QueryNonClientRegion,
  TWVBrowserBase_ClearCache,
  TWVBrowserBase_ClearDataForOrigin,
  TWVBrowserBase_ClearBrowsingData,
  TWVBrowserBase_ClearBrowsingDataInTimeRange,
  TWVBrowserBase_ClearBrowsingDataAll,
  TWVBrowserBase_ClearServerCertificateErrorActions,
  TWVBrowserBase_GetFavicon,
  TWVBrowserBase_CreateSharedBuffer,
  TWVBrowserBase_PostSharedBufferToScript,
  TWVBrowserBase_GetProcessExtendedInfos,
  TWVBrowserBase_ShowSaveAsUI,
  TWVBrowserBase_MoveFormTo,
  TWVBrowserBase_MoveFormBy,
  TWVBrowserBase_ResizeFormWidthTo,
  TWVBrowserBase_ResizeFormHeightTo,
  TWVBrowserBase_SetFormLeftTo,
  TWVBrowserBase_SetFormTopTo,
  TWVBrowserBase_IncZoomStep,
  TWVBrowserBase_DecZoomStep,
  TWVBrowserBase_ResetZoom,
  TWVBrowserBase_ToggleMuteState,
  TWVBrowserBase_Initialized,
  TWVBrowserBase_CoreWebView2PrintSettings,
  TWVBrowserBase_CoreWebView2Settings,
  TWVBrowserBase_CoreWebView2Environment,
  TWVBrowserBase_CoreWebView2Controller,
  TWVBrowserBase_CoreWebView2CompositionController,
  TWVBrowserBase_CoreWebView2,
  TWVBrowserBase_Profile,
  TWVBrowserBase_DefaultURL,
  TWVBrowserBase_IsNavigating,
  TWVBrowserBase_ZoomPct,
  TWVBrowserBase_ZoomStep,
  TWVBrowserBase_Widget0CompHWND,
  TWVBrowserBase_Widget1CompHWND,
  TWVBrowserBase_RenderCompHWND,
  TWVBrowserBase_D3DWindowCompHWND,
  TWVBrowserBase_ScreenScale,
  TWVBrowserBase_Offline,
  TWVBrowserBase_IgnoreCertificateErrors,
  TWVBrowserBase_BrowserExecPath,
  TWVBrowserBase_UserDataFolder,
  TWVBrowserBase_AdditionalBrowserArguments,
  TWVBrowserBase_Language,
  TWVBrowserBase_TargetCompatibleBrowserVersion,
  TWVBrowserBase_AllowSingleSignOnUsingOSPrimaryAccount,
  TWVBrowserBase_ExclusiveUserDataFolderAccess,
  TWVBrowserBase_CustomCrashReportingEnabled,
  TWVBrowserBase_EnableTrackingPrevention,
  TWVBrowserBase_AreBrowserExtensionsEnabled,
  TWVBrowserBase_ChannelSearchKind,
  TWVBrowserBase_ReleaseChannels,
  TWVBrowserBase_ScrollBarStyle,
  TWVBrowserBase_BrowserVersionInfo,
  TWVBrowserBase_BrowserProcessID,
  TWVBrowserBase_CanGoBack,
  TWVBrowserBase_CanGoForward,
  TWVBrowserBase_ContainsFullScreenElement,
  TWVBrowserBase_DocumentTitle,
  TWVBrowserBase_Source,
  TWVBrowserBase_CookieManager,
  TWVBrowserBase_IsSuspended,
  TWVBrowserBase_IsDocumentPlayingAudio,
  TWVBrowserBase_IsMuted,
  TWVBrowserBase_DefaultDownloadDialogCornerAlignment,
  TWVBrowserBase_DefaultDownloadDialogMargin,
  TWVBrowserBase_IsDefaultDownloadDialogOpen,
  TWVBrowserBase_StatusBarText,
  TWVBrowserBase_FaviconURI,
  TWVBrowserBase_MemoryUsageTargetLevel,
  TWVBrowserBase_Bounds,
  TWVBrowserBase_IsVisible,
  TWVBrowserBase_ParentWindow,
  TWVBrowserBase_ZoomFactor,
  TWVBrowserBase_DefaultBackgroundColor,
  TWVBrowserBase_BoundsMode,
  TWVBrowserBase_RasterizationScale,
  TWVBrowserBase_ShouldDetectMonitorScaleChanges,
  TWVBrowserBase_AllowExternalDrop,
  TWVBrowserBase_DefaultContextMenusEnabled,
  TWVBrowserBase_DefaultScriptDialogsEnabled,
  TWVBrowserBase_DevToolsEnabled,
  TWVBrowserBase_AreHostObjectsAllowed,
  TWVBrowserBase_BuiltInErrorPageEnabled,
  TWVBrowserBase_ScriptEnabled,
  TWVBrowserBase_StatusBarEnabled,
  TWVBrowserBase_WebMessageEnabled,
  TWVBrowserBase_ZoomControlEnabled,
  TWVBrowserBase_UserAgent,
  TWVBrowserBase_AreBrowserAcceleratorKeysEnabled,
  TWVBrowserBase_IsGeneralAutofillEnabled,
  TWVBrowserBase_IsPasswordAutosaveEnabled,
  TWVBrowserBase_IsPinchZoomEnabled,
  TWVBrowserBase_IsSwipeNavigationEnabled,
  TWVBrowserBase_HiddenPdfToolbarItems,
  TWVBrowserBase_IsReputationCheckingRequired,
  TWVBrowserBase_IsNonClientRegionSupportEnabled,
  TWVBrowserBase_Cursor,
  TWVBrowserBase_RootVisualTarget,
  TWVBrowserBase_SystemCursorID,
  TWVBrowserBase_AutomationProvider,
  TWVBrowserBase_ProcessInfos,
  TWVBrowserBase_ProfileName,
  TWVBrowserBase_IsInPrivateModeEnabled,
  TWVBrowserBase_ScriptLocale,
  TWVBrowserBase_ProfilePath,
  TWVBrowserBase_DefaultDownloadFolderPath,
  TWVBrowserBase_PreferredColorScheme,
  TWVBrowserBase_PreferredTrackingPreventionLevel,
  TWVBrowserBase_ProfileCookieManager,
  TWVBrowserBase_ProfileIsPasswordAutosaveEnabled,
  TWVBrowserBase_ProfileIsGeneralAutofillEnabled,
  TWVBrowserBase_FrameId,
  TWVBrowserBase_OnBrowserProcessExited,
  TWVBrowserBase_OnProcessInfosChanged,
  TWVBrowserBase_OnContainsFullScreenElementChanged,
  TWVBrowserBase_OnContentLoading,
  TWVBrowserBase_OnDocumentTitleChanged,
  TWVBrowserBase_OnFrameNavigationCompleted,
  TWVBrowserBase_OnFrameNavigationStarting,
  TWVBrowserBase_OnHistoryChanged,
  TWVBrowserBase_OnNavigationCompleted,
  TWVBrowserBase_OnNavigationStarting,
  TWVBrowserBase_OnNewWindowRequested,
  TWVBrowserBase_OnPermissionRequested,
  TWVBrowserBase_OnProcessFailed,
  TWVBrowserBase_OnScriptDialogOpening,
  TWVBrowserBase_OnSourceChanged,
  TWVBrowserBase_OnWebMessageReceived,
  TWVBrowserBase_OnWebResourceRequested,
  TWVBrowserBase_OnWindowCloseRequested,
  TWVBrowserBase_OnDOMContentLoaded,
  TWVBrowserBase_OnWebResourceResponseReceived,
  TWVBrowserBase_OnDownloadStarting,
  TWVBrowserBase_OnFrameCreated,
  TWVBrowserBase_OnClientCertificateRequested,
  TWVBrowserBase_OnIsDocumentPlayingAudioChanged,
  TWVBrowserBase_OnIsMutedChanged,
  TWVBrowserBase_OnIsDefaultDownloadDialogOpenChanged,
  TWVBrowserBase_OnBasicAuthenticationRequested,
  TWVBrowserBase_OnContextMenuRequested,
  TWVBrowserBase_OnStatusBarTextChanged,
  TWVBrowserBase_OnServerCertificateErrorActionsCompleted,
  TWVBrowserBase_OnServerCertificateErrorDetected,
  TWVBrowserBase_OnFaviconChanged,
  TWVBrowserBase_OnGetFaviconCompleted,
  TWVBrowserBase_OnPrintCompleted,
  TWVBrowserBase_OnPrintToPdfStreamCompleted,
  TWVBrowserBase_OnAcceleratorKeyPressed,
  TWVBrowserBase_OnGotFocus,
  TWVBrowserBase_OnLostFocus,
  TWVBrowserBase_OnMoveFocusRequested,
  TWVBrowserBase_OnZoomFactorChanged,
  TWVBrowserBase_OnRasterizationScaleChanged,
  TWVBrowserBase_OnCursorChanged,
  TWVBrowserBase_OnBytesReceivedChanged,
  TWVBrowserBase_OnEstimatedEndTimeChanged,
  TWVBrowserBase_OnDownloadStateChanged,
  TWVBrowserBase_OnFrameDestroyed,
  TWVBrowserBase_OnFrameNameChanged,
  TWVBrowserBase_OnFrameNavigationStarting2,
  TWVBrowserBase_OnFrameNavigationCompleted2,
  TWVBrowserBase_OnFrameContentLoading,
  TWVBrowserBase_OnFrameDOMContentLoaded,
  TWVBrowserBase_OnFrameWebMessageReceived,
  TWVBrowserBase_OnFramePermissionRequested,
  TWVBrowserBase_OnDevToolsProtocolEventReceived,
  TWVBrowserBase_OnCustomItemSelected,
  TWVBrowserBase_OnClearBrowsingDataCompleted,
  TWVBrowserBase_OnInitializationError,
  TWVBrowserBase_OnEnvironmentCompleted,
  TWVBrowserBase_OnControllerCompleted,
  TWVBrowserBase_OnAfterCreated,
  TWVBrowserBase_OnExecuteScriptCompleted,
  TWVBrowserBase_OnCapturePreviewCompleted,
  TWVBrowserBase_OnGetCookiesCompleted,
  TWVBrowserBase_OnTrySuspendCompleted,
  TWVBrowserBase_OnPrintToPdfCompleted,
  TWVBrowserBase_OnCompositionControllerCompleted,
  TWVBrowserBase_OnCallDevToolsProtocolMethodCompleted,
  TWVBrowserBase_OnAddScriptToExecuteOnDocumentCreatedCompleted,
  TWVBrowserBase_OnWebResourceResponseViewGetContentCompleted,
  TWVBrowserBase_OnWidget0CompMsg,
  TWVBrowserBase_OnWidget1CompMsg,
  TWVBrowserBase_OnRenderCompMsg,
  TWVBrowserBase_OnD3DWindowCompMsg,
  TWVBrowserBase_OnRetrieveHTMLCompleted,
  TWVBrowserBase_OnRetrieveTextCompleted,
  TWVBrowserBase_OnRetrieveMHTMLCompleted,
  TWVBrowserBase_OnClearCacheCompleted,
  TWVBrowserBase_OnClearDataForOriginCompleted,
  TWVBrowserBase_OnOfflineCompleted,
  TWVBrowserBase_OnIgnoreCertificateErrorsCompleted,
  TWVBrowserBase_OnRefreshIgnoreCacheCompleted,
  TWVBrowserBase_OnSimulateKeyEventCompleted,
  TWVBrowserBase_OnGetCustomSchemes,
  TWVBrowserBase_OnGetNonDefaultPermissionSettingsCompleted,
  TWVBrowserBase_OnSetPermissionStateCompleted,
  TWVBrowserBase_OnLaunchingExternalUriScheme,
  TWVBrowserBase_OnGetProcessExtendedInfosCompleted,
  TWVBrowserBase_OnBrowserExtensionRemoveCompleted,
  TWVBrowserBase_OnBrowserExtensionEnableCompleted,
  TWVBrowserBase_OnProfileAddBrowserExtensionCompleted,
  TWVBrowserBase_OnProfileGetBrowserExtensionsCompleted,
  TWVBrowserBase_OnProfileDeleted,
  TWVBrowserBase_OnExecuteScriptWithResultCompleted,
  TWVBrowserBase_OnNonClientRegionChanged,
  TWVBrowserBase_OnNotificationReceived,
  TWVBrowserBase_OnNotificationCloseRequested,
  TWVBrowserBase_OnSaveAsUIShowing,
  TWVBrowserBase_OnShowSaveAsUICompleted,
  TWVBrowserBase_OnSaveFileSecurityCheckStarting,
  TWVBrowserBase_OnScreenCaptureStarting,
  TWVBrowserBase_OnFrameScreenCaptureStarting;