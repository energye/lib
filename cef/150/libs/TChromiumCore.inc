// constructor
function TChromiumCore_Create(AOwner: TComponent; out IntfChromiumEvents: IChromiumEvents): TChromiumCore; extdecl;
begin
  {$define handleExceptionID := 5700}
  handleExceptionBegin
  Result := TChromiumCore.Create(AOwner);
  IntfChromiumEvents := Result as IChromiumEvents;
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateClientHandlerWithBool(AObj: TChromiumCore; aIsOSR: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5701}
  handleExceptionBegin
  Result := AObj.CreateClientHandler(aIsOSR);
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateClientHandlerWithClientBool(AObj: TChromiumCore; var aClient: ICefClient; aIsOSR: LongBool): LongBool; extdecl;
var
  OutaClient: ICefClient = nil;
begin
  {$define handleExceptionID := 5702}
  handleExceptionBegin
  Result := AObj.CreateClientHandler(OutaClient, aIsOSR);
  aClient := OutaClient;
  handleExceptionEnd
end;

// function
function TChromiumCore_TryCloseBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5703}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

// function
function TChromiumCore_IsReadyToBeClosed(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5704}
  handleExceptionBegin
  Result := AObj.IsReadyToBeClosed();
  handleExceptionEnd
end;

// function
function TChromiumCore_SelectBrowser(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5705}
  handleExceptionBegin
  Result := AObj.SelectBrowser(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_IndexOfBrowserID(AObj: TChromiumCore; aID: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5706}
  handleExceptionBegin
  Result := AObj.IndexOfBrowserID(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_ShareRequestContext(AObj: TChromiumCore; var aContext: ICefRequestContext; const aHandler: ICefRequestContextHandler): LongBool; extdecl;
var
  OutaContext: ICefRequestContext = nil;
begin
  {$define handleExceptionID := 5707}
  handleExceptionBegin
  Result := AObj.ShareRequestContext(OutaContext, aHandler);
  aContext := OutaContext;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// function
function TChromiumCore_SetNewBrowserParent(AObj: TChromiumCore; aNewParentHwnd: HWND): LongBool; extdecl;
begin
  {$define handleExceptionID := 5708}
  handleExceptionBegin
  Result := AObj.SetNewBrowserParent(aNewParentHwnd);
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

// function
function TChromiumCore_CreateBrowserWithWHandleRectStrRContextDValueBool(AObj: TChromiumCore; aParentHandle: TCefWindowHandle; var aParentRect: TRect; const aWindowName: PChar; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue; aForceAsPopup: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5709}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aParentHandle, aParentRect, PCharToUStr(aWindowName), aContext, aExtraInfo, aForceAsPopup);
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateBrowserWithStrBVComponentRContextDValue(AObj: TChromiumCore; const aURL: PChar; const aBrowserViewComp: TCEFBrowserViewComponent; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 5710}
  handleExceptionBegin
  Result := AObj.CreateBrowser(PCharToUStr(aURL), aBrowserViewComp, aContext, aExtraInfo);
  handleExceptionEnd
end;

// function
function TChromiumCore_ClearCertificateExceptions(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5711}
  handleExceptionBegin
  Result := AObj.ClearCertificateExceptions(aClearImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_ClearHttpAuthCredentials(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5712}
  handleExceptionBegin
  Result := AObj.ClearHttpAuthCredentials(aClearImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_CloseAllConnections(AObj: TChromiumCore; aCloseImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5713}
  handleExceptionBegin
  Result := AObj.CloseAllConnections(aCloseImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_ClearHttpCache(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5714}
  handleExceptionBegin
  Result := AObj.ClearHttpCache(aClearImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_GetFrameNames(AObj: TChromiumCore; var aFrameNames: TStrings): LongBool; extdecl;
var
  OutaFrameNames: TStrings;
begin
  {$define handleExceptionID := 5715}
  handleExceptionBegin
  OutaFrameNames := aFrameNames;
  Result := AObj.GetFrameNames(OutaFrameNames);
  aFrameNames := OutaFrameNames;
  handleExceptionEnd
end;

// function
function TChromiumCore_GetFrameIdentifiers(AObj: TChromiumCore; var aFrameIdentifiers: TStrings): LongBool; extdecl;
var
  OutaFrameIdentifiers: TStrings;
begin
  {$define handleExceptionID := 5716}
  handleExceptionBegin
  OutaFrameIdentifiers := aFrameIdentifiers;
  Result := AObj.GetFrameIdentifiers(OutaFrameIdentifiers);
  aFrameIdentifiers := OutaFrameIdentifiers;
  handleExceptionEnd
end;

// function
function TChromiumCore_IsSameBrowser(AObj: TChromiumCore; const aBrowser: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 5717}
  handleExceptionBegin
  Result := AObj.IsSameBrowser(aBrowser);
  handleExceptionEnd
end;

// function
function TChromiumCore_ExecuteTaskOnCefThread(AObj: TChromiumCore; aCefThreadId: TCefThreadId; aTaskID: cardinal; var aDelayMs: Int64): LongBool; extdecl;
begin
  {$define handleExceptionID := 5718}
  handleExceptionBegin
  Result := AObj.ExecuteTaskOnCefThread(aCefThreadId, aTaskID, aDelayMs);
  handleExceptionEnd
end;

// function
function TChromiumCore_DeleteCookies(AObj: TChromiumCore; const url: PChar; const cookieName: PChar; aDeleteImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5719}
  handleExceptionBegin
  Result := AObj.DeleteCookies(PCharToUStr(url), PCharToUStr(cookieName), aDeleteImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_VisitAllCookies(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5720}
  handleExceptionBegin
  Result := AObj.VisitAllCookies(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_VisitURLCookies(AObj: TChromiumCore; const url: PChar; includeHttpOnly: LongBool; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5721}
  handleExceptionBegin
  Result := AObj.VisitURLCookies(PCharToUStr(url), includeHttpOnly, aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_SetCookie(AObj: TChromiumCore; var Args: TChromiumCoreSetCookieArgsPtr): LongBool; extdecl;
var
  InArgs: TChromiumCoreSetCookieArgs;
begin
  {$define handleExceptionID := 5722}
  handleExceptionBegin
  InArgs := TChromiumCoreSetCookieArgsToPas(Args);
  Result := AObj.SetCookie(InArgs.url, InArgs.name_, InArgs.value, InArgs.domain, InArgs.path, InArgs.secure, InArgs.httponly, InArgs.hasExpires, InArgs.creation, InArgs.lastAccess, InArgs.expires, InArgs.same_site, InArgs.priority, InArgs.aSetImmediately, InArgs.aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_FlushCookieStore(AObj: TChromiumCore; aFlushImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5723}
  handleExceptionBegin
  Result := AObj.FlushCookieStore(aFlushImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_SendDevToolsMessage(AObj: TChromiumCore; const message_: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5724}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// function
function TChromiumCore_ExecuteDevToolsMethod(AObj: TChromiumCore; message_id: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionID := 5725}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(message_id, PCharToUStr(method), params);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_AddDevToolsMessageObserver(AObj: TChromiumCore; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5726}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_AddSettingObserver(AObj: TChromiumCore; const observer: ICefSettingObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5727}
  handleExceptionBegin
  Result := AObj.AddSettingObserver(observer);
  handleExceptionEnd
end;

// function
function TChromiumCore_CanExecuteChromeCommand(AObj: TChromiumCore; command_id: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5728}
  handleExceptionBegin
  Result := AObj.CanExecuteChromeCommand(command_id);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_CreateUrlRequestWithRequestUClientStrX2(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrameName: PChar; const aFrameIdentifier: PChar; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 5729}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// function
procedure TChromiumCore_CreateUrlRequestWithRequestUClientFrame(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrame: ICefFrame; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 5730}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrame);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_AddObserver(AObj: TChromiumCore; const observer: ICefMediaObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5731}
  handleExceptionBegin
  Result := AObj.AddObserver(observer);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_GetSource(AObj: TChromiumCore; const urn: PChar; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionID := 5732}
  handleExceptionBegin
  Result := AObj.GetSource(PCharToUStr(urn));
  handleExceptionEnd
end;

// function
procedure TChromiumCore_GetWebsiteSetting(AObj: TChromiumCore; const requesting_url: PChar; const top_level_url: PChar; content_type: TCefContentSettingTypes; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 5733}
  handleExceptionBegin
  Result := AObj.GetWebsiteSetting(PCharToUStr(requesting_url), PCharToUStr(top_level_url), content_type);
  handleExceptionEnd
end;

// function
function TChromiumCore_GetContentSetting(AObj: TChromiumCore; const requesting_url: PChar; const top_level_url: PChar; content_type: TCefContentSettingTypes): TCefContentSettingValues; extdecl;
begin
  {$define handleExceptionID := 5734}
  handleExceptionBegin
  Result := AObj.GetContentSetting(PCharToUStr(requesting_url), PCharToUStr(top_level_url), content_type);
  handleExceptionEnd
end;

// function
function TChromiumCore_GetComponentCount(AObj: TChromiumCore): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 5735}
  handleExceptionBegin
  Result := AObj.GetComponentCount();
  handleExceptionEnd
end;

// function
function TChromiumCore_GetComponents(AObj: TChromiumCore; var components_: TCefComponentArray; var components_Count: Integer): LongBool; extdecl;
var
  Outcomponents_: TCefComponentArray = nil;
begin
  {$define handleExceptionID := 5736}
  handleExceptionBegin
  Result := AObj.GetComponents(Outcomponents_);
  components_Count := Length(Outcomponents_);
  components_ := Outcomponents_;
  handleExceptionEnd
end;

// function
function TChromiumCore_GetComponentById(AObj: TChromiumCore; const component_id: PChar; var aResult: ICefComponent): LongBool; extdecl;
var
  OutaResult: ICefComponent = nil;
begin
  {$define handleExceptionID := 5737}
  handleExceptionBegin
  Result := AObj.GetComponentById(PCharToUStr(component_id), OutaResult);
  aResult := OutaResult;
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseBrowser(AObj: TChromiumCore; aForceClose: LongBool); extdecl;
begin
  {$define handleExceptionID := 5738}
  handleExceptionBegin
  AObj.CloseBrowser(aForceClose);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseAllBrowsers(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5739}
  handleExceptionBegin
  AObj.CloseAllBrowsers();
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// procedure
procedure TChromiumCore_InitializeDragAndDrop(AObj: TChromiumCore; const aDropTargetWnd: HWND); extdecl;
begin
  {$define handleExceptionID := 5740}
  handleExceptionBegin
  AObj.InitializeDragAndDrop(aDropTargetWnd);
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

{$IFDEF MSWINDOWS}
// procedure
procedure TChromiumCore_ShutdownDragAndDrop(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5741}
  handleExceptionBegin
  AObj.ShutdownDragAndDrop();
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

// procedure
procedure TChromiumCore_LoadURLWithStrX3(AObj: TChromiumCore; const aURL: PChar; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5742}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL), PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadURLWithStrFrame(AObj: TChromiumCore; const aURL: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5743}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL), aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadStringWithStrX3(AObj: TChromiumCore; const aHTML: PChar; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5744}
  handleExceptionBegin
  AObj.LoadString(PCharToUStr(aHTML), PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadStringWithStrFrame(AObj: TChromiumCore; const aHTML: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5745}
  handleExceptionBegin
  AObj.LoadString(PCharToUStr(aHTML), aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadResourceWithCMStreamStrX4(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType: PChar; const aCharset: PChar; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5746}
  handleExceptionBegin
  AObj.LoadResource(aStream, PCharToUStr(aMimeType), PCharToUStr(aCharset), PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadResourceWithCMStreamStrX2Frame(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType: PChar; const aCharset: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5747}
  handleExceptionBegin
  AObj.LoadResource(aStream, PCharToUStr(aMimeType), PCharToUStr(aCharset), aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadRequest(AObj: TChromiumCore; const aRequest: ICefRequest); extdecl;
begin
  {$define handleExceptionID := 5748}
  handleExceptionBegin
  AObj.LoadRequest(aRequest);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GoBack(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5749}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GoForward(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5750}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Reload(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5751}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReloadIgnoreCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5752}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StopLoad(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5753}
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StartDownload(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionID := 5754}
  handleExceptionBegin
  AObj.StartDownload(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DownloadImage(AObj: TChromiumCore; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: cardinal; bypassCache: LongBool); extdecl;
begin
  {$define handleExceptionID := 5755}
  handleExceptionBegin
  AObj.DownloadImage(PCharToUStr(imageUrl), isFavicon, maxImageSize, bypassCache);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SimulateMouseWheel(AObj: TChromiumCore; aDeltaX: integer; aDeltaY: integer); extdecl;
begin
  {$define handleExceptionID := 5756}
  handleExceptionBegin
  AObj.SimulateMouseWheel(aDeltaX, aDeltaY);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SimulateKeyEvent(AObj: TChromiumCore; var Args: TChromiumCoreSimulateKeyEventArgsPtr); extdecl;
var
  InArgs: TChromiumCoreSimulateKeyEventArgs;
begin
  {$define handleExceptionID := 5757}
  handleExceptionBegin
  InArgs := TChromiumCoreSimulateKeyEventArgsToPas(Args);
  AObj.SimulateKeyEvent(InArgs.type_, InArgs.modifiers, InArgs.timestamp, InArgs.text, InArgs.unmodifiedtext, InArgs.keyIdentifier, InArgs.code, InArgs.key, InArgs.windowsVirtualKeyCode, InArgs.nativeVirtualKeyCode, InArgs.autoRepeat, InArgs.isKeypad, InArgs.isSystemKey, InArgs.location, InArgs.commands);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SimulateMouseEvent(AObj: TChromiumCore; var Args: TChromiumCoreSimulateMouseEventArgsPtr); extdecl;
var
  InArgs: TChromiumCoreSimulateMouseEventArgs;
begin
  {$define handleExceptionID := 5758}
  handleExceptionBegin
  InArgs := TChromiumCoreSimulateMouseEventArgsToPas(Args);
  AObj.SimulateMouseEvent(InArgs.type_, InArgs.x, InArgs.y, InArgs.modifiers, InArgs.timestamp, InArgs.button, InArgs.buttons, InArgs.clickCount, InArgs.force, InArgs.tangentialPressure, InArgs.tiltX, InArgs.tiltY, InArgs.twist, InArgs.deltaX, InArgs.deltaY, InArgs.pointerType);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SimulateEditingCommand(AObj: TChromiumCore; command: TCefEditingCommand); extdecl;
begin
  {$define handleExceptionID := 5759}
  handleExceptionBegin
  AObj.SimulateEditingCommand(command);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveHTMLWithStrX2(AObj: TChromiumCore; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5760}
  handleExceptionBegin
  AObj.RetrieveHTML(PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveHTMLWithFrame(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5761}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveTextWithStrX2(AObj: TChromiumCore; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5762}
  handleExceptionBegin
  AObj.RetrieveText(PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveTextWithFrame(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5763}
  handleExceptionBegin
  AObj.RetrieveText(aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GetNavigationEntries(AObj: TChromiumCore; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 5764}
  handleExceptionBegin
  AObj.GetNavigationEntries(currentOnly);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteJavaScriptWithStrX4Int(AObj: TChromiumCore; const aCode: PChar; const aScriptURL: PChar; const aFrameName: PChar; const aFrameIdentifier: PChar; aStartLine: integer); extdecl;
begin
  {$define handleExceptionID := 5765}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(aCode), PCharToUStr(aScriptURL), PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier), aStartLine);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteJavaScriptWithStrX2FrameInt(AObj: TChromiumCore; const aCode: PChar; const aScriptURL: PChar; const aFrame: ICefFrame; aStartLine: integer); extdecl;
begin
  {$define handleExceptionID := 5766}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(aCode), PCharToUStr(aScriptURL), aFrame, aStartLine);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_UpdatePreferences(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5767}
  handleExceptionBegin
  AObj.UpdatePreferences();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SavePreferences(AObj: TChromiumCore; const aFileName: PChar); extdecl;
begin
  {$define handleExceptionID := 5768}
  handleExceptionBegin
  AObj.SavePreferences(aFileName);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResolveHost(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionID := 5769}
  handleExceptionBegin
  AObj.ResolveHost(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetUserAgentOverride(AObj: TChromiumCore; const aUserAgent: PChar; const aAcceptLanguage: PChar; const aPlatform: PChar); extdecl;
begin
  {$define handleExceptionID := 5770}
  handleExceptionBegin
  AObj.SetUserAgentOverride(PCharToUStr(aUserAgent), PCharToUStr(aAcceptLanguage), PCharToUStr(aPlatform));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClearDataForOrigin(AObj: TChromiumCore; const aOrigin: PChar; aStorageTypes: TCefClearDataStorageTypes); extdecl;
begin
  {$define handleExceptionID := 5771}
  handleExceptionBegin
  AObj.ClearDataForOrigin(PCharToUStr(aOrigin), aStorageTypes);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClearCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5772}
  handleExceptionBegin
  AObj.ClearCache();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ToggleAudioMuted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5773}
  handleExceptionBegin
  AObj.ToggleAudioMuted();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_AddPreferenceObserver(AObj: TChromiumCore; const name_: PChar); extdecl;
begin
  {$define handleExceptionID := 5774}
  handleExceptionBegin
  AObj.AddPreferenceObserver(PCharToUStr(name_));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RemovePreferenceObserver(AObj: TChromiumCore; const name_: PChar); extdecl;
begin
  {$define handleExceptionID := 5775}
  handleExceptionBegin
  AObj.RemovePreferenceObserver(PCharToUStr(name_));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ShowDevTools(AObj: TChromiumCore; var inspectElementAt: TPoint; aWindowInfo: TCefWindowInfoPtr); extdecl;
var
  InaWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionID := 5776}
  handleExceptionBegin
  InaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  AObj.ShowDevTools(inspectElementAt, @InaWindowInfo);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseDevTools(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5777}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseDevToolsWithWindowHandle(AObj: TChromiumCore; const aDevToolsWnd: TCefWindowHandle); extdecl;
begin
  {$define handleExceptionID := 5778}
  handleExceptionBegin
  AObj.CloseDevTools(aDevToolsWnd);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Find(AObj: TChromiumCore; const aSearchText: PChar; aForward: LongBool; aMatchCase: LongBool; aFindNext: LongBool); extdecl;
begin
  {$define handleExceptionID := 5779}
  handleExceptionBegin
  AObj.Find(PCharToUStr(aSearchText), aForward, aMatchCase, aFindNext);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StopFinding(AObj: TChromiumCore; aClearSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 5780}
  handleExceptionBegin
  AObj.StopFinding(aClearSelection);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Print(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5781}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_PrintToPDF(AObj: TChromiumCore; const aFilePath: PChar); extdecl;
begin
  {$define handleExceptionID := 5782}
  handleExceptionBegin
  AObj.PrintToPDF(PCharToUStr(aFilePath));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardCopy(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5783}
  handleExceptionBegin
  AObj.ClipboardCopy();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardPaste(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5784}
  handleExceptionBegin
  AObj.ClipboardPaste();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardPasteAndMatchStyle(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5785}
  handleExceptionBegin
  AObj.ClipboardPasteAndMatchStyle();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardCut(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5786}
  handleExceptionBegin
  AObj.ClipboardCut();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardUndo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5787}
  handleExceptionBegin
  AObj.ClipboardUndo();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardRedo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5788}
  handleExceptionBegin
  AObj.ClipboardRedo();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardDel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5789}
  handleExceptionBegin
  AObj.ClipboardDel();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SelectAll(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5790}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IncZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5791}
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DecZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5792}
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IncZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5793}
  handleExceptionBegin
  AObj.IncZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DecZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5794}
  handleExceptionBegin
  AObj.DecZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5795}
  handleExceptionBegin
  AObj.ResetZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomLevel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5796}
  handleExceptionBegin
  AObj.ResetZoomLevel();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5797}
  handleExceptionBegin
  AObj.ResetZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReadZoom(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5798}
  handleExceptionBegin
  AObj.ReadZoom();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IncZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5799}
  handleExceptionBegin
  AObj.IncZoomCommand();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DecZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5800}
  handleExceptionBegin
  AObj.DecZoomCommand();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5801}
  handleExceptionBegin
  AObj.ResetZoomCommand();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_WasResized(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5802}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_WasHidden(AObj: TChromiumCore; hidden: LongBool); extdecl;
begin
  {$define handleExceptionID := 5803}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyScreenInfoChanged(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5804}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyMoveOrResizeStarted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5805}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Invalidate(AObj: TChromiumCore; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionID := 5806}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExitFullscreen(AObj: TChromiumCore; will_cause_resize: LongBool); extdecl;
begin
  {$define handleExceptionID := 5807}
  handleExceptionBegin
  AObj.ExitFullscreen(will_cause_resize);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteChromeCommand(AObj: TChromiumCore; command_id: integer; disposition: TCefWindowOpenDisposition); extdecl;
begin
  {$define handleExceptionID := 5808}
  handleExceptionBegin
  AObj.ExecuteChromeCommand(command_id, disposition);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetAxViewportCollapse(AObj: TChromiumCore; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 5809}
  handleExceptionBegin
  AObj.SetAxViewportCollapse(enabled);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendExternalBeginFrame(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5810}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendKeyEvent(AObj: TChromiumCore; const event: TCefKeyEventPtr); extdecl;
var
  Inevent: TCefKeyEvent;
begin
  {$define handleExceptionID := 5811}
  handleExceptionBegin
  Inevent := TCefKeyEventToPas(event);
  AObj.SendKeyEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendMouseClickEvent(AObj: TChromiumCore; const event: TCefMouseEventPtr; type_: TCefMouseButtonType; mouseUp: LongBool; clickCount: Integer); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5812}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseClickEvent(@Inevent, type_, mouseUp, clickCount);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendMouseMoveEvent(AObj: TChromiumCore; const event: TCefMouseEventPtr; mouseLeave: LongBool); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5813}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseMoveEvent(@Inevent, mouseLeave);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendMouseWheelEvent(AObj: TChromiumCore; const event: TCefMouseEventPtr; deltaX: Integer; deltaY: Integer); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5814}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseWheelEvent(@Inevent, deltaX, deltaY);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendTouchEvent(AObj: TChromiumCore; const event: TCefTouchEventPtr); extdecl;
var
  Inevent: TCefTouchEvent;
begin
  {$define handleExceptionID := 5815}
  handleExceptionBegin
  Inevent := TCefTouchEventToPas(event);
  AObj.SendTouchEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendCaptureLostEvent(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5816}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendProcessMessageWithPIdPMessageStrX2(AObj: TChromiumCore; targetProcess: TCefProcessId; const ProcMessage: ICefProcessMessage; const aFrameName: PChar; const aFrameIdentifier: PChar); extdecl;
begin
  {$define handleExceptionID := 5817}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, ProcMessage, PCharToUStr(aFrameName), PCharToUStr(aFrameIdentifier));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendProcessMessageWithPIdPMessageFrame(AObj: TChromiumCore; targetProcess: TCefProcessId; const ProcMessage: ICefProcessMessage; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5818}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, ProcMessage, aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetFocus(AObj: TChromiumCore; focus: LongBool); extdecl;
begin
  {$define handleExceptionID := 5819}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetAccessibilityState(AObj: TChromiumCore; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionID := 5820}
  handleExceptionBegin
  AObj.SetAccessibilityState(accessibilityState);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetAutoResizeEnabled(AObj: TChromiumCore; enabled_: LongBool; const min_size: TCefSizePtr; const max_size: TCefSizePtr); extdecl;
var
  Inmin_size: TCefSize;
  Inmax_size: TCefSize;
begin
  {$define handleExceptionID := 5821}
  handleExceptionBegin
  Inmin_size := TCefSizeToPas(min_size);
  Inmax_size := TCefSizeToPas(max_size);
  AObj.SetAutoResizeEnabled(enabled_, @Inmin_size, @Inmax_size);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDragEnter(AObj: TChromiumCore; const dragData: ICefDragData; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5822}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragEnter(dragData, @Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDragOver(AObj: TChromiumCore; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5823}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragOver(@Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDragLeave(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5824}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDrop(AObj: TChromiumCore; const event: TCefMouseEventPtr); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5825}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDrop(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragSourceEndedAt(AObj: TChromiumCore; x: Integer; y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionID := 5826}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x, y, op);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragSourceSystemDragEnded(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5827}
  handleExceptionBegin
  AObj.DragSourceSystemDragEnded();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMESetComposition(AObj: TChromiumCore; const text: PChar; const underlines: TCefCompositionUnderlineDynArray; underlinesCount: Integer; const replacement_range: TCefRangePtr; const selection_range: TCefRangePtr); extdecl;
var
  Tempunderlines: TCefCompositionUnderlineDynArray = nil;
  TempunderlinesIdx: Integer;
  Inreplacement_range: TCefRange;
  Inselection_range: TCefRange;
begin
  {$define handleExceptionID := 5828}
  handleExceptionBegin
  SetLength(Tempunderlines, underlinesCount);
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    Tempunderlines[TempunderlinesIdx] := underlines[TempunderlinesIdx]
  end;
  Inreplacement_range := TCefRangeToPas(replacement_range);
  Inselection_range := TCefRangeToPas(selection_range);
  AObj.IMESetComposition(PCharToUStr(text), Tempunderlines, @Inreplacement_range, @Inselection_range);
  SetLength(Tempunderlines, 0);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMECommitText(AObj: TChromiumCore; const text: PChar; const replacement_range: TCefRangePtr; relative_cursor_pos: integer); extdecl;
var
  Inreplacement_range: TCefRange;
begin
  {$define handleExceptionID := 5829}
  handleExceptionBegin
  Inreplacement_range := TCefRangeToPas(replacement_range);
  AObj.IMECommitText(PCharToUStr(text), @Inreplacement_range, relative_cursor_pos);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMEFinishComposingText(AObj: TChromiumCore; keep_selection: LongBool); extdecl;
begin
  {$define handleExceptionID := 5830}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keep_selection);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMECancelComposition(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5831}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReplaceMisspelling(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionID := 5832}
  handleExceptionBegin
  AObj.ReplaceMisspelling(PCharToUStr(aWord));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_AddWordToDictionary(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionID := 5833}
  handleExceptionBegin
  AObj.AddWordToDictionary(PCharToUStr(aWord));
  handleExceptionEnd
end;

{$IFDEF LINUX}
// procedure
procedure TChromiumCore_UpdateBrowserSize(AObj: TChromiumCore; aLeft: integer; aTop: integer; aWidth: integer; aHeight: integer); extdecl;
begin
  {$define handleExceptionID := 5834}
  handleExceptionBegin
  AObj.UpdateBrowserSize(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF LINUX}
// procedure
procedure TChromiumCore_UpdateXWindowVisibility(AObj: TChromiumCore; aVisible: LongBool); extdecl;
begin
  {$define handleExceptionID := 5835}
  handleExceptionBegin
  AObj.UpdateXWindowVisibility(aVisible);
  handleExceptionEnd
end;
{$ENDIF}

// procedure
procedure TChromiumCore_NotifyCurrentSinks(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5836}
  handleExceptionBegin
  AObj.NotifyCurrentSinks();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyCurrentRoutes(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5837}
  handleExceptionBegin
  AObj.NotifyCurrentRoutes();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CreateRoute(AObj: TChromiumCore; const source: ICefMediaSource; const sink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 5838}
  handleExceptionBegin
  AObj.CreateRoute(source, sink);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GetDeviceInfo(AObj: TChromiumCore; const aMediaSink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 5839}
  handleExceptionBegin
  AObj.GetDeviceInfo(aMediaSink);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetWebsiteSetting(AObj: TChromiumCore; const requesting_url: PChar; const top_level_url: PChar; content_type: TCefContentSettingTypes; const value: ICefValue); extdecl;
begin
  {$define handleExceptionID := 5840}
  handleExceptionBegin
  AObj.SetWebsiteSetting(PCharToUStr(requesting_url), PCharToUStr(top_level_url), content_type, value);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetContentSetting(AObj: TChromiumCore; const requesting_url: PChar; const top_level_url: PChar; content_type: TCefContentSettingTypes; value: TCefContentSettingValues); extdecl;
begin
  {$define handleExceptionID := 5841}
  handleExceptionBegin
  AObj.SetContentSetting(PCharToUStr(requesting_url), PCharToUStr(top_level_url), content_type, value);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetChromeColorScheme(AObj: TChromiumCore; variant: TCefColorVariant; user_color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 5842}
  handleExceptionBegin
  AObj.SetChromeColorScheme(variant, user_color);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_UpdateComponent(AObj: TChromiumCore; const component_id: PChar; priority: TCefComponentUpdatePriority); extdecl;
begin
  {$define handleExceptionID := 5843}
  handleExceptionBegin
  AObj.UpdateComponent(PCharToUStr(component_id), priority);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DefaultUrl(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5844}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultUrl := AValue
  end else
    StringBufferCreate(AObj.DefaultUrl, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_Options(ASet: LongBool; AObj: TChromiumCore; AValue: TChromiumOptions): TChromiumOptions; extdecl;
begin
  {$define handleExceptionID := 5845}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TChromiumCore_FontOptions(ASet: LongBool; AObj: TChromiumCore; AValue: TChromiumFontOptions): TChromiumFontOptions; extdecl;
begin
  {$define handleExceptionID := 5846}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FontOptions := AValue
  end else
    Result := AObj.FontOptions;
  handleExceptionEnd
end;

// property
function TChromiumCore_PDFPrintOptions(ASet: LongBool; AObj: TChromiumCore; AValue: TPDFPrintOptions): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionID := 5847}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PDFPrintOptions := AValue
  end else
    Result := AObj.PDFPrintOptions;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DefaultEncoding(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5848}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultEncoding := AValue
  end else
    StringBufferCreate(AObj.DefaultEncoding, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_BrowserId(AObj: TChromiumCore): integer; extdecl;
begin
  {$define handleExceptionID := 5849}
  handleExceptionBegin
  Result := AObj.BrowserId;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_Browser(AObj: TChromiumCore; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 5850}
  handleExceptionBegin
  Result := AObj.Browser;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_BrowserById(AObj: TChromiumCore; id: integer; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 5851}
  handleExceptionBegin
  Result := AObj.BrowserById[id];
  handleExceptionEnd
end;

// property
function TChromiumCore_BrowserCount(AObj: TChromiumCore): integer; extdecl;
begin
  {$define handleExceptionID := 5852}
  handleExceptionBegin
  Result := AObj.BrowserCount;
  handleExceptionEnd
end;

// property
function TChromiumCore_BrowserIdByIndex(AObj: TChromiumCore; i: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5853}
  handleExceptionBegin
  Result := AObj.BrowserIdByIndex[i];
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CefClient(AObj: TChromiumCore; var Result: ICefClient); extdecl;
begin
  {$define handleExceptionID := 5854}
  handleExceptionBegin
  Result := AObj.CefClient;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ReqContextHandler(AObj: TChromiumCore; var Result: ICefRequestContextHandler); extdecl;
begin
  {$define handleExceptionID := 5855}
  handleExceptionBegin
  Result := AObj.ReqContextHandler;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ResourceRequestHandler(AObj: TChromiumCore; var Result: ICefResourceRequestHandler); extdecl;
begin
  {$define handleExceptionID := 5856}
  handleExceptionBegin
  Result := AObj.ResourceRequestHandler;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CefWindowInfo(AObj: TChromiumCore; var Result: TCefWindowInfoPtr); extdecl;
begin
  {$define handleExceptionID := 5857}
  handleExceptionBegin
  Result := TCefWindowInfoToGo(AObj.CefWindowInfo);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_VisibleNavigationEntry(AObj: TChromiumCore; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionID := 5858}
  handleExceptionBegin
  Result := AObj.VisibleNavigationEntry;
  handleExceptionEnd
end;

// property
function TChromiumCore_RuntimeStyle(ASet: LongBool; AObj: TChromiumCore; AValue: TCefRuntimeStyle): TCefRuntimeStyle; extdecl;
begin
  {$define handleExceptionID := 5859}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RuntimeStyle := AValue
  end else
    Result := AObj.RuntimeStyle;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_RequestContext(AObj: TChromiumCore; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionID := 5860}
  handleExceptionBegin
  Result := AObj.RequestContext;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaRouter(AObj: TChromiumCore; var Result: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionID := 5861}
  handleExceptionBegin
  Result := AObj.MediaRouter;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaObserver(AObj: TChromiumCore; var Result: ICefMediaObserver); extdecl;
begin
  {$define handleExceptionID := 5862}
  handleExceptionBegin
  Result := AObj.MediaObserver;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5863}
  handleExceptionBegin
  Result := AObj.MediaObserverReg;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DevToolsMsgObserver(AObj: TChromiumCore; var Result: ICefDevToolsMessageObserver); extdecl;
begin
  {$define handleExceptionID := 5864}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserver;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DevToolsMsgObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5865}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserverReg;
  handleExceptionEnd
end;

// property
function TChromiumCore_MultithreadApp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5866}
  handleExceptionBegin
  Result := AObj.MultithreadApp;
  handleExceptionEnd
end;

// property
function TChromiumCore_IsLoading(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5867}
  handleExceptionBegin
  Result := AObj.IsLoading;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasDocument(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5868}
  handleExceptionBegin
  Result := AObj.HasDocument;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasView(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5869}
  handleExceptionBegin
  Result := AObj.HasView;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasDevTools(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5870}
  handleExceptionBegin
  Result := AObj.HasDevTools;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasClientHandler(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5871}
  handleExceptionBegin
  Result := AObj.HasClientHandler;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5872}
  handleExceptionBegin
  Result := AObj.HasBrowser;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanGoBack(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5873}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanGoForward(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5874}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

// property
function TChromiumCore_IsPopUp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5875}
  handleExceptionBegin
  Result := AObj.IsPopUp;
  handleExceptionEnd
end;

// property
function TChromiumCore_WindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 5876}
  handleExceptionBegin
  Result := AObj.WindowHandle;
  handleExceptionEnd
end;

// property
function TChromiumCore_OpenerWindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 5877}
  handleExceptionBegin
  Result := AObj.OpenerWindowHandle;
  handleExceptionEnd
end;

// property
function TChromiumCore_OpenerIdentifier(AObj: TChromiumCore): Integer; extdecl;
begin
  {$define handleExceptionID := 5878}
  handleExceptionBegin
  Result := AObj.OpenerIdentifier;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_BrowserHandle(AObj: TChromiumCore): THandle; extdecl;
begin
  {$define handleExceptionID := 5879}
  handleExceptionBegin
  Result := AObj.BrowserHandle;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_RenderHandle(AObj: TChromiumCore): THandle; extdecl;
begin
  {$define handleExceptionID := 5880}
  handleExceptionBegin
  Result := AObj.RenderHandle;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TChromiumCore_FrameIsFocused(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5881}
  handleExceptionBegin
  Result := AObj.FrameIsFocused;
  handleExceptionEnd
end;

// property
function TChromiumCore_Initialized(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5882}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_RequestContextCache(AObj: TChromiumCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5883}
  handleExceptionBegin
  StringBufferCreate(AObj.RequestContextCache, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_RequestContextIsGlobal(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5884}
  handleExceptionBegin
  Result := AObj.RequestContextIsGlobal;
  handleExceptionEnd
end;

// property
function TChromiumCore_ChromeColorSchemeMode(AObj: TChromiumCore): TCefColorVariant; extdecl;
begin
  {$define handleExceptionID := 5885}
  handleExceptionBegin
  Result := AObj.ChromeColorSchemeMode;
  handleExceptionEnd
end;

// property
function TChromiumCore_ChromeColorSchemeColor(AObj: TChromiumCore): TCefColor; extdecl;
begin
  {$define handleExceptionID := 5886}
  handleExceptionBegin
  Result := AObj.ChromeColorSchemeColor;
  handleExceptionEnd
end;

// property
function TChromiumCore_ChromeColorSchemeVariant(AObj: TChromiumCore): TCefColorVariant; extdecl;
begin
  {$define handleExceptionID := 5887}
  handleExceptionBegin
  Result := AObj.ChromeColorSchemeVariant;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DocumentURL(AObj: TChromiumCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5888}
  handleExceptionBegin
  StringBufferCreate(AObj.DocumentURL, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ZoomLevel(ASet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 5889}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomLevel := AValue
  end else
    Result := AObj.ZoomLevel;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DefaultZoomLevel(AObj: TChromiumCore; var Result: double); extdecl;
begin
  {$define handleExceptionID := 5890}
  handleExceptionBegin
  Result := AObj.DefaultZoomLevel;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanIncZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5891}
  handleExceptionBegin
  Result := AObj.CanIncZoom;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanDecZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5892}
  handleExceptionBegin
  Result := AObj.CanDecZoom;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanResetZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5893}
  handleExceptionBegin
  Result := AObj.CanResetZoom;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ZoomPct(ASet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 5894}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomPct := AValue
  end else
    Result := AObj.ZoomPct;
  handleExceptionEnd
end;

// property
function TChromiumCore_ZoomStep(ASet: LongBool; AObj: TChromiumCore; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionID := 5895}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomStep := AValue
  end else
    Result := AObj.ZoomStep;
  handleExceptionEnd
end;

// property
function TChromiumCore_WindowlessFrameRate(ASet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5896}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowlessFrameRate := AValue
  end else
    Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CustomHeaderName(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5897}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomHeaderName := AValue
  end else
    StringBufferCreate(AObj.CustomHeaderName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CustomHeaderValue(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5898}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomHeaderValue := AValue
  end else
    StringBufferCreate(AObj.CustomHeaderValue, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_DoNotTrack(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5899}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DoNotTrack := AValue
  end else
    Result := AObj.DoNotTrack;
  handleExceptionEnd
end;

// property
function TChromiumCore_SendReferrer(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5900}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SendReferrer := AValue
  end else
    Result := AObj.SendReferrer;
  handleExceptionEnd
end;

// property
function TChromiumCore_HyperlinkAuditing(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HyperlinkAuditing := AValue
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

// property
function TChromiumCore_AllowOutdatedPlugins(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowOutdatedPlugins := AValue
  end else
    Result := AObj.AllowOutdatedPlugins;
  handleExceptionEnd
end;

// property
function TChromiumCore_AlwaysAuthorizePlugins(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlwaysAuthorizePlugins := AValue
  end else
    Result := AObj.AlwaysAuthorizePlugins;
  handleExceptionEnd
end;

// property
function TChromiumCore_AlwaysOpenPDFExternally(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlwaysOpenPDFExternally := AValue
  end else
    Result := AObj.AlwaysOpenPDFExternally;
  handleExceptionEnd
end;

// property
function TChromiumCore_SpellChecking(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpellChecking := AValue
  end else
    Result := AObj.SpellChecking;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_SpellCheckerDicts(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpellCheckerDicts := AValue
  end else
    StringBufferCreate(AObj.SpellCheckerDicts, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_HasValidMainFrame(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5907}
  handleExceptionBegin
  Result := AObj.HasValidMainFrame;
  handleExceptionEnd
end;

// property
function TChromiumCore_FrameCount(AObj: TChromiumCore): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 5908}
  handleExceptionBegin
  Result := AObj.FrameCount;
  handleExceptionEnd
end;

// property
function TChromiumCore_DragOperations(ASet: LongBool; AObj: TChromiumCore; AValue: TCefDragOperations): TCefDragOperations; extdecl;
begin
  {$define handleExceptionID := 5909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragOperations := AValue
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

// property
function TChromiumCore_AudioMuted(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AudioMuted := AValue
  end else
    Result := AObj.AudioMuted;
  handleExceptionEnd
end;

// property
function TChromiumCore_Fullscreen(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5911}
  handleExceptionBegin
  Result := AObj.Fullscreen;
  handleExceptionEnd
end;

// property
function TChromiumCore_IsRenderProcessUnresponsive(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5912}
  handleExceptionBegin
  Result := AObj.IsRenderProcessUnresponsive;
  handleExceptionEnd
end;

// property
function TChromiumCore_SafeSearch(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SafeSearch := AValue
  end else
    Result := AObj.SafeSearch;
  handleExceptionEnd
end;

// property
function TChromiumCore_YouTubeRestrict(ASet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.YouTubeRestrict := AValue
  end else
    Result := AObj.YouTubeRestrict;
  handleExceptionEnd
end;

// property
function TChromiumCore_PrintingEnabled(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrintingEnabled := AValue
  end else
    Result := AObj.PrintingEnabled;
  handleExceptionEnd
end;

// property
function TChromiumCore_AcceptCookies(ASet: LongBool; AObj: TChromiumCore; AValue: TCefCookiePref): TCefCookiePref; extdecl;
begin
  {$define handleExceptionID := 5916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AcceptCookies := AValue
  end else
    Result := AObj.AcceptCookies;
  handleExceptionEnd
end;

// property
function TChromiumCore_Block3rdPartyCookies(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Block3rdPartyCookies := AValue
  end else
    Result := AObj.Block3rdPartyCookies;
  handleExceptionEnd
end;

// property
function TChromiumCore_MultiBrowserMode(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiBrowserMode := AValue
  end else
    Result := AObj.MultiBrowserMode;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_DefaultWindowInfoExStyle(ASet: LongBool; AObj: TChromiumCore; AValue: DWORD): DWORD; extdecl;
begin
  {$define handleExceptionID := 5919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultWindowInfoExStyle := AValue
  end else
    Result := AObj.DefaultWindowInfoExStyle;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TChromiumCore_Offline(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Offline := AValue
  end else
    Result := AObj.Offline;
  handleExceptionEnd
end;

// property
function TChromiumCore_QuicAllowed(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.QuicAllowed := AValue
  end else
    Result := AObj.QuicAllowed;
  handleExceptionEnd
end;

// property
function TChromiumCore_JavascriptEnabled(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavascriptEnabled := AValue
  end else
    Result := AObj.JavascriptEnabled;
  handleExceptionEnd
end;

// property
function TChromiumCore_LoadImagesAutomatically(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoadImagesAutomatically := AValue
  end else
    Result := AObj.LoadImagesAutomatically;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanFocus(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5924}
  handleExceptionBegin
  Result := AObj.CanFocus;
  handleExceptionEnd
end;

// property
function TChromiumCore_EnableFocusDelayMs(ASet: LongBool; AObj: TChromiumCore; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 5925}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableFocusDelayMs := AValue
  end else
    Result := AObj.EnableFocusDelayMs;
  handleExceptionEnd
end;

{$IFDEF LINUX}
// property
function TChromiumCore_XDisplay(AObj: TChromiumCore): Pointer; extdecl;
begin
  {$define handleExceptionID := 5926}
  handleExceptionBegin
  Result := AObj.XDisplay;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TChromiumCore_WebRTCIPHandlingPolicy(ASet: LongBool; AObj: TChromiumCore; AValue: TCefWebRTCHandlingPolicy): TCefWebRTCHandlingPolicy; extdecl;
begin
  {$define handleExceptionID := 5927}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WebRTCIPHandlingPolicy := AValue
  end else
    Result := AObj.WebRTCIPHandlingPolicy;
  handleExceptionEnd
end;

// property
function TChromiumCore_WebRTCMultipleRoutes(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5928}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WebRTCMultipleRoutes := AValue
  end else
    Result := AObj.WebRTCMultipleRoutes;
  handleExceptionEnd
end;

// property
function TChromiumCore_WebRTCNonproxiedUDP(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5929}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WebRTCNonproxiedUDP := AValue
  end else
    Result := AObj.WebRTCNonproxiedUDP;
  handleExceptionEnd
end;

// property
function TChromiumCore_ProxyType(ASet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5930}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyType := AValue
  end else
    Result := AObj.ProxyType;
  handleExceptionEnd
end;

// property
function TChromiumCore_ProxyScheme(ASet: LongBool; AObj: TChromiumCore; AValue: TCefProxyScheme): TCefProxyScheme; extdecl;
begin
  {$define handleExceptionID := 5931}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyScheme := AValue
  end else
    Result := AObj.ProxyScheme;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ProxyServer(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5932}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyServer := AValue
  end else
    StringBufferCreate(AObj.ProxyServer, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_ProxyPort(ASet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5933}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyPort := AValue
  end else
    Result := AObj.ProxyPort;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ProxyUsername(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5934}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyUsername := AValue
  end else
    StringBufferCreate(AObj.ProxyUsername, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ProxyPassword(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5935}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyPassword := AValue
  end else
    StringBufferCreate(AObj.ProxyPassword, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ProxyScriptURL(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5936}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyScriptURL := AValue
  end else
    StringBufferCreate(AObj.ProxyScriptURL, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ProxyByPassList(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5937}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProxyByPassList := AValue
  end else
    StringBufferCreate(AObj.ProxyByPassList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_MaxConnectionsPerProxy(ASet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5938}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxConnectionsPerProxy := AValue
  end else
    Result := AObj.MaxConnectionsPerProxy;
  handleExceptionEnd
end;

// property
function TChromiumCore_DownloadBubble(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5939}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DownloadBubble := AValue
  end else
    Result := AObj.DownloadBubble;
  handleExceptionEnd
end;

// property
function TChromiumCore_HTTPSUpgrade(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5940}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HTTPSUpgrade := AValue
  end else
    Result := AObj.HTTPSUpgrade;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_HSTSPolicyBypassList(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5941}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HSTSPolicyBypassList := AValue
  end else
    StringBufferCreate(AObj.HSTSPolicyBypassList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_CredentialsService(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5942}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CredentialsService := AValue
  end else
    Result := AObj.CredentialsService;
  handleExceptionEnd
end;

// property
function TChromiumCore_AutofillCreditCard(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5943}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutofillCreditCard := AValue
  end else
    Result := AObj.AutofillCreditCard;
  handleExceptionEnd
end;

// property
function TChromiumCore_AutofillProfile(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5944}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutofillProfile := AValue
  end else
    Result := AObj.AutofillProfile;
  handleExceptionEnd
end;

// property
function TChromiumCore_AutofillSaveData(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5945}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutofillSaveData := AValue
  end else
    Result := AObj.AutofillSaveData;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanMakePayment(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5946}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CanMakePayment := AValue
  end else
    Result := AObj.CanMakePayment;
  handleExceptionEnd
end;

// property
function TChromiumCore_SearchSuggestEnabled(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5947}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SearchSuggestEnabled := AValue
  end else
    Result := AObj.SearchSuggestEnabled;
  handleExceptionEnd
end;

// property
function TChromiumCore_URLDataCollection(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5948}
  handleExceptionBegin
  if ASet then
  begin
    AObj.URLDataCollection := AValue
  end else
    Result := AObj.URLDataCollection;
  handleExceptionEnd
end;

// property
function TChromiumCore_StorageNotificationService(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5949}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StorageNotificationService := AValue
  end else
    Result := AObj.StorageNotificationService;
  handleExceptionEnd
end;

// event
procedure TChromiumCore_OnTextResultAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTextResultAvailableEvent}
  {$DEFINE EventName := OnTextResultAvailable}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPdfPrintFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPdfPrintFinishedEvent}
  {$DEFINE EventName := OnPdfPrintFinished}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrefsAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrefsAvailableEvent}
  {$DEFINE EventName := OnPrefsAvailable}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrefsUpdated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnPrefsUpdated}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCookiesDeleted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCookiesDeletedEvent}
  {$DEFINE EventName := OnCookiesDeleted}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnResolvedHostAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnResolvedIPsAvailableEvent}
  {$DEFINE EventName := OnResolvedHostAvailable}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnNavigationVisitorResultAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnNavigationVisitorResultAvailableEvent}
  {$DEFINE EventName := OnNavigationVisitorResultAvailable}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDownloadImageFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDownloadImageFinishedEvent}
  {$DEFINE EventName := OnDownloadImageFinished}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCookiesFlushed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnCookiesFlushed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCertificateExceptionsCleared(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnCertificateExceptionsCleared}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnHttpAuthCredentialsCleared(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnHttpAuthCredentialsCleared}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAllConnectionsClosed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnAllConnectionsClosed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnHttpCacheCleared(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnHttpCacheCleared}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExecuteTaskOnCefThread(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnExecuteTaskOnCefThread}
  {$DEFINE EventName := OnExecuteTaskOnCefThread}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCookiesVisited(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCookiesVisited}
  {$DEFINE EventName := OnCookiesVisited}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCookieVisitorDestroyed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCookieVisitorDestroyed}
  {$DEFINE EventName := OnCookieVisitorDestroyed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCookieSet(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCookieSet}
  {$DEFINE EventName := OnCookieSet}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnZoomPctAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnZoomPctAvailable}
  {$DEFINE EventName := OnZoomPctAvailable}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnMediaRouteCreateFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnMediaRouteCreateFinishedEvent}
  {$DEFINE EventName := OnMediaRouteCreateFinished}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnMediaSinkDeviceInfo(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnMediaSinkDeviceInfoEvent}
  {$DEFINE EventName := OnMediaSinkDeviceInfo}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCanFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TNotifyEvent}
  {$DEFINE EventName := OnCanFocus}
  CEFEventMethodCode
end;

{$IFDEF MSWINDOWS}
// event
procedure TChromiumCore_OnBrowserCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCompMsgEvent}
  {$DEFINE EventName := OnBrowserCompMsg}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TChromiumCore_OnRenderCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCompMsgEvent}
  {$DEFINE EventName := OnRenderCompMsg}
  CEFEventMethodCode
end;
{$ENDIF}

// event
procedure TChromiumCore_OnProcessMessageReceived(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnProcessMessageReceived}
  {$DEFINE EventName := OnProcessMessageReceived}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnLoadStart(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnLoadStart}
  {$DEFINE EventName := OnLoadStart}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnLoadEnd(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnLoadEnd}
  {$DEFINE EventName := OnLoadEnd}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnLoadError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnLoadError}
  {$DEFINE EventName := OnLoadError}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnLoadingStateChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnLoadingStateChange}
  {$DEFINE EventName := OnLoadingStateChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnTakeFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTakeFocus}
  {$DEFINE EventName := OnTakeFocus}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnSetFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnSetFocus}
  {$DEFINE EventName := OnSetFocus}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGotFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGotFocus}
  {$DEFINE EventName := OnGotFocus}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeContextMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeContextMenu}
  {$DEFINE EventName := OnBeforeContextMenu}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRunContextMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRunContextMenu}
  {$DEFINE EventName := OnRunContextMenu}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnContextMenuCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnContextMenuCommand}
  {$DEFINE EventName := OnContextMenuCommand}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnContextMenuDismissed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnContextMenuDismissed}
  {$DEFINE EventName := OnContextMenuDismissed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRunQuickMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRunQuickMenuEvent}
  {$DEFINE EventName := OnRunQuickMenu}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnQuickMenuCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnQuickMenuCommandEvent}
  {$DEFINE EventName := OnQuickMenuCommand}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnQuickMenuDismissed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnQuickMenuDismissedEvent}
  {$DEFINE EventName := OnQuickMenuDismissed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPreKeyEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPreKeyEvent}
  {$DEFINE EventName := OnPreKeyEvent}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnKeyEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnKeyEvent}
  {$DEFINE EventName := OnKeyEvent}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAddressChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAddressChange}
  {$DEFINE EventName := OnAddressChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnTitleChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTitleChange}
  {$DEFINE EventName := OnTitleChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFavIconUrlChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFavIconUrlChange}
  {$DEFINE EventName := OnFavIconUrlChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFullScreenModeChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFullScreenModeChange}
  {$DEFINE EventName := OnFullScreenModeChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnTooltip(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTooltip}
  {$DEFINE EventName := OnTooltip}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnStatusMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnStatusMessage}
  {$DEFINE EventName := OnStatusMessage}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnConsoleMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnConsoleMessage}
  {$DEFINE EventName := OnConsoleMessage}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAutoResize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAutoResize}
  {$DEFINE EventName := OnAutoResize}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnLoadingProgressChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnLoadingProgressChange}
  {$DEFINE EventName := OnLoadingProgressChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCursorChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCursorChange}
  {$DEFINE EventName := OnCursorChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnMediaAccessChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnMediaAccessChange}
  {$DEFINE EventName := OnMediaAccessChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnContentsBoundsChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnContentsBoundsChange}
  {$DEFINE EventName := OnContentsBoundsChange}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetRootWindowScreenRect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetRootWindowScreenRect}
  {$DEFINE EventName := OnGetRootWindowScreenRect}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCanDownload(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCanDownloadEvent}
  {$DEFINE EventName := OnCanDownload}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeDownload(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeDownload}
  {$DEFINE EventName := OnBeforeDownload}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDownloadUpdated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDownloadUpdated}
  {$DEFINE EventName := OnDownloadUpdated}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnJsdialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnJsdialog}
  {$DEFINE EventName := OnJsdialog}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeUnloadDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeUnloadDialog}
  {$DEFINE EventName := OnBeforeUnloadDialog}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnResetDialogState(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnResetDialogState}
  {$DEFINE EventName := OnResetDialogState}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDialogClosed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDialogClosed}
  {$DEFINE EventName := OnDialogClosed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforePopup(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforePopup}
  {$DEFINE EventName := OnBeforePopup}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforePopupAborted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforePopupAborted}
  {$DEFINE EventName := OnBeforePopupAborted}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeDevToolsPopup(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeDevToolsPopup}
  {$DEFINE EventName := OnBeforeDevToolsPopup}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAfterCreated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAfterCreated}
  {$DEFINE EventName := OnAfterCreated}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeClose(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeClose}
  {$DEFINE EventName := OnBeforeClose}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnClose(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnClose}
  {$DEFINE EventName := OnClose}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeBrowse(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeBrowse}
  {$DEFINE EventName := OnBeforeBrowse}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnOpenUrlFromTab(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnOpenUrlFromTab}
  {$DEFINE EventName := OnOpenUrlFromTab}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetAuthCredentials(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetAuthCredentials}
  {$DEFINE EventName := OnGetAuthCredentials}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCertificateError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCertificateError}
  {$DEFINE EventName := OnCertificateError}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnSelectClientCertificate(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnSelectClientCertificate}
  {$DEFINE EventName := OnSelectClientCertificate}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRenderViewReady(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRenderViewReady}
  {$DEFINE EventName := OnRenderViewReady}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRenderProcessUnresponsive(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRenderProcessUnresponsive}
  {$DEFINE EventName := OnRenderProcessUnresponsive}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRenderProcessResponsive(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRenderProcessResponsive}
  {$DEFINE EventName := OnRenderProcessResponsive}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRenderProcessTerminated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRenderProcessTerminated}
  {$DEFINE EventName := OnRenderProcessTerminated}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetResourceRequestHandler_ReqHdlr(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetResourceRequestHandler}
  {$DEFINE EventName := OnGetResourceRequestHandler_ReqHdlr}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDocumentAvailableInMainFrame(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDocumentAvailableInMainFrame}
  {$DEFINE EventName := OnDocumentAvailableInMainFrame}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnBeforeResourceLoad(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeResourceLoad}
  {$DEFINE EventName := OnBeforeResourceLoad}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetResourceHandler(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetResourceHandler}
  {$DEFINE EventName := OnGetResourceHandler}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnResourceRedirect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnResourceRedirect}
  {$DEFINE EventName := OnResourceRedirect}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnResourceResponse(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnResourceResponse}
  {$DEFINE EventName := OnResourceResponse}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetResourceResponseFilter(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetResourceResponseFilter}
  {$DEFINE EventName := OnGetResourceResponseFilter}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnResourceLoadComplete(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnResourceLoadComplete}
  {$DEFINE EventName := OnResourceLoadComplete}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnProtocolExecution(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnProtocolExecution}
  {$DEFINE EventName := OnProtocolExecution}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCanSendCookie(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCanSendCookie}
  {$DEFINE EventName := OnCanSendCookie}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnCanSaveCookie(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCanSaveCookie}
  {$DEFINE EventName := OnCanSaveCookie}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFileDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFileDialog}
  {$DEFINE EventName := OnFileDialog}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetAccessibilityHandler(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetAccessibilityHandler}
  {$DEFINE EventName := OnGetAccessibilityHandler}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetRootScreenRect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetRootScreenRect}
  {$DEFINE EventName := OnGetRootScreenRect}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetViewRect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetViewRect}
  {$DEFINE EventName := OnGetViewRect}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetScreenPoint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetScreenPoint}
  {$DEFINE EventName := OnGetScreenPoint}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetScreenInfo(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetScreenInfo}
  {$DEFINE EventName := OnGetScreenInfo}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPopupShow(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPopupShow}
  {$DEFINE EventName := OnPopupShow}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPopupSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPopupSize}
  {$DEFINE EventName := OnPopupSize}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPaint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPaint}
  {$DEFINE EventName := OnPaint}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAcceleratedPaint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAcceleratedPaint}
  {$DEFINE EventName := OnAcceleratedPaint}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetTouchHandleSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetTouchHandleSize}
  {$DEFINE EventName := OnGetTouchHandleSize}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnTouchHandleStateChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTouchHandleStateChanged}
  {$DEFINE EventName := OnTouchHandleStateChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnStartDragging(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnStartDragging}
  {$DEFINE EventName := OnStartDragging}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnUpdateDragCursor(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnUpdateDragCursor}
  {$DEFINE EventName := OnUpdateDragCursor}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnScrollOffsetChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnScrollOffsetChanged}
  {$DEFINE EventName := OnScrollOffsetChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnIMECompositionRangeChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnIMECompositionRangeChanged}
  {$DEFINE EventName := OnIMECompositionRangeChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnTextSelectionChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnTextSelectionChanged}
  {$DEFINE EventName := OnTextSelectionChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnVirtualKeyboardRequested(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnVirtualKeyboardRequested}
  {$DEFINE EventName := OnVirtualKeyboardRequested}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDragEnter(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDragEnter}
  {$DEFINE EventName := OnDragEnter}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDraggableRegionsChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDraggableRegionsChanged}
  {$DEFINE EventName := OnDraggableRegionsChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFindResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFindResult}
  {$DEFINE EventName := OnFindResult}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRequestContextInitialized(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRequestContextInitialized}
  {$DEFINE EventName := OnRequestContextInitialized}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetResourceRequestHandler_ReqCtxHdlr(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetResourceRequestHandler}
  {$DEFINE EventName := OnGetResourceRequestHandler_ReqCtxHdlr}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnSinks(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnSinksEvent}
  {$DEFINE EventName := OnSinks}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRoutes(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRoutesEvent}
  {$DEFINE EventName := OnRoutes}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRouteStateChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRouteStateChangedEvent}
  {$DEFINE EventName := OnRouteStateChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRouteMessageReceived(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRouteMessageReceivedEvent}
  {$DEFINE EventName := OnRouteMessageReceived}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetAudioParameters(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetAudioParametersEvent}
  {$DEFINE EventName := OnGetAudioParameters}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAudioStreamStarted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAudioStreamStartedEvent}
  {$DEFINE EventName := OnAudioStreamStarted}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAudioStreamPacket(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAudioStreamPacketEvent}
  {$DEFINE EventName := OnAudioStreamPacket}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAudioStreamStopped(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAudioStreamStoppedEvent}
  {$DEFINE EventName := OnAudioStreamStopped}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnAudioStreamError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnAudioStreamErrorEvent}
  {$DEFINE EventName := OnAudioStreamError}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsMessageEvent}
  {$DEFINE EventName := OnDevToolsMessage}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsRawMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsRawMessageEvent}
  {$DEFINE EventName := OnDevToolsRawMessage}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsMethodResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsMethodResultEvent}
  {$DEFINE EventName := OnDevToolsMethodResult}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsMethodRawResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsMethodRawResultEvent}
  {$DEFINE EventName := OnDevToolsMethodRawResult}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsEventEvent}
  {$DEFINE EventName := OnDevToolsEvent}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsRawEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsEventRawEvent}
  {$DEFINE EventName := OnDevToolsRawEvent}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsAgentAttached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsAgentAttachedEvent}
  {$DEFINE EventName := OnDevToolsAgentAttached}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDevToolsAgentDetached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDevToolsAgentDetachedEvent}
  {$DEFINE EventName := OnDevToolsAgentDetached}
  CEFEventMethodCode
end;

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnPrintStart(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintStartEvent}
  {$DEFINE EventName := OnPrintStart}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnPrintSettings(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintSettingsEvent}
  {$DEFINE EventName := OnPrintSettings}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnPrintDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintDialogEvent}
  {$DEFINE EventName := OnPrintDialog}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnPrintJob(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintJobEvent}
  {$DEFINE EventName := OnPrintJob}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnPrintReset(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintResetEvent}
  {$DEFINE EventName := OnPrintReset}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF LINUX}
// event
procedure TChromiumCore_OnGetPDFPaperSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetPDFPaperSizeEvent}
  {$DEFINE EventName := OnGetPDFPaperSize}
  CEFEventMethodCode
end;
{$ENDIF}

// event
procedure TChromiumCore_OnFrameCreated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFrameCreated}
  {$DEFINE EventName := OnFrameCreated}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFrameDestroyed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFrameDestroyed}
  {$DEFINE EventName := OnFrameDestroyed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFrameAttached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFrameAttached}
  {$DEFINE EventName := OnFrameAttached}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFrameDetached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFrameDetached}
  {$DEFINE EventName := OnFrameDetached}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnMainFrameChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnMainFrameChanged}
  {$DEFINE EventName := OnMainFrameChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnChromeCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnChromeCommandEvent}
  {$DEFINE EventName := OnChromeCommand}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnIsChromeAppMenuItemVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnIsChromeAppMenuItemVisibleEvent}
  {$DEFINE EventName := OnIsChromeAppMenuItemVisible}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnIsChromeAppMenuItemEnabled(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnIsChromeAppMenuItemEnabledEvent}
  {$DEFINE EventName := OnIsChromeAppMenuItemEnabled}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnIsChromePageActionIconVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnIsChromePageActionIconVisibleEvent}
  {$DEFINE EventName := OnIsChromePageActionIconVisible}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnIsChromeToolbarButtonVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnIsChromeToolbarButtonVisibleEvent}
  {$DEFINE EventName := OnIsChromeToolbarButtonVisible}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnRequestMediaAccessPermission(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnRequestMediaAccessPermissionEvent}
  {$DEFINE EventName := OnRequestMediaAccessPermission}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnShowPermissionPrompt(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnShowPermissionPromptEvent}
  {$DEFINE EventName := OnShowPermissionPrompt}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnDismissPermissionPrompt(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnDismissPermissionPromptEvent}
  {$DEFINE EventName := OnDismissPermissionPrompt}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPreferenceChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPreferenceChangedEvent}
  {$DEFINE EventName := OnPreferenceChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnSettingChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnSettingChangedEvent}
  {$DEFINE EventName := OnSettingChanged}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnComponentUpdateCompleted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnComponentUpdateCompletedEvent}
  {$DEFINE EventName := OnComponentUpdateCompleted}
  CEFEventMethodCode
end;

exports
  TChromiumCore_Create,
  TChromiumCore_CreateClientHandlerWithBool,
  TChromiumCore_CreateClientHandlerWithClientBool,
  TChromiumCore_TryCloseBrowser,
  TChromiumCore_IsReadyToBeClosed,
  TChromiumCore_SelectBrowser,
  TChromiumCore_IndexOfBrowserID,
  TChromiumCore_ShareRequestContext,
{$IFDEF MSWINDOWS}
  TChromiumCore_SetNewBrowserParent,
{$ENDIF MSWINDOWS}
  TChromiumCore_CreateBrowserWithWHandleRectStrRContextDValueBool,
  TChromiumCore_CreateBrowserWithStrBVComponentRContextDValue,
  TChromiumCore_ClearCertificateExceptions,
  TChromiumCore_ClearHttpAuthCredentials,
  TChromiumCore_CloseAllConnections,
  TChromiumCore_ClearHttpCache,
  TChromiumCore_GetFrameNames,
  TChromiumCore_GetFrameIdentifiers,
  TChromiumCore_IsSameBrowser,
  TChromiumCore_ExecuteTaskOnCefThread,
  TChromiumCore_DeleteCookies,
  TChromiumCore_VisitAllCookies,
  TChromiumCore_VisitURLCookies,
  TChromiumCore_SetCookie,
  TChromiumCore_FlushCookieStore,
  TChromiumCore_SendDevToolsMessage,
  TChromiumCore_ExecuteDevToolsMethod,
  TChromiumCore_AddDevToolsMessageObserver,
  TChromiumCore_AddSettingObserver,
  TChromiumCore_CanExecuteChromeCommand,
  TChromiumCore_CreateUrlRequestWithRequestUClientStrX2,
  TChromiumCore_CreateUrlRequestWithRequestUClientFrame,
  TChromiumCore_AddObserver,
  TChromiumCore_GetSource,
  TChromiumCore_GetWebsiteSetting,
  TChromiumCore_GetContentSetting,
  TChromiumCore_GetComponentCount,
  TChromiumCore_GetComponents,
  TChromiumCore_GetComponentById,
  TChromiumCore_CloseBrowser,
  TChromiumCore_CloseAllBrowsers,
{$IFDEF MSWINDOWS}
  TChromiumCore_InitializeDragAndDrop,
{$ENDIF MSWINDOWS}
{$IFDEF MSWINDOWS}
  TChromiumCore_ShutdownDragAndDrop,
{$ENDIF MSWINDOWS}
  TChromiumCore_LoadURLWithStrX3,
  TChromiumCore_LoadURLWithStrFrame,
  TChromiumCore_LoadStringWithStrX3,
  TChromiumCore_LoadStringWithStrFrame,
  TChromiumCore_LoadResourceWithCMStreamStrX4,
  TChromiumCore_LoadResourceWithCMStreamStrX2Frame,
  TChromiumCore_LoadRequest,
  TChromiumCore_GoBack,
  TChromiumCore_GoForward,
  TChromiumCore_Reload,
  TChromiumCore_ReloadIgnoreCache,
  TChromiumCore_StopLoad,
  TChromiumCore_StartDownload,
  TChromiumCore_DownloadImage,
  TChromiumCore_SimulateMouseWheel,
  TChromiumCore_SimulateKeyEvent,
  TChromiumCore_SimulateMouseEvent,
  TChromiumCore_SimulateEditingCommand,
  TChromiumCore_RetrieveHTMLWithStrX2,
  TChromiumCore_RetrieveHTMLWithFrame,
  TChromiumCore_RetrieveTextWithStrX2,
  TChromiumCore_RetrieveTextWithFrame,
  TChromiumCore_GetNavigationEntries,
  TChromiumCore_ExecuteJavaScriptWithStrX4Int,
  TChromiumCore_ExecuteJavaScriptWithStrX2FrameInt,
  TChromiumCore_UpdatePreferences,
  TChromiumCore_SavePreferences,
  TChromiumCore_ResolveHost,
  TChromiumCore_SetUserAgentOverride,
  TChromiumCore_ClearDataForOrigin,
  TChromiumCore_ClearCache,
  TChromiumCore_ToggleAudioMuted,
  TChromiumCore_AddPreferenceObserver,
  TChromiumCore_RemovePreferenceObserver,
  TChromiumCore_ShowDevTools,
  TChromiumCore_CloseDevTools,
  TChromiumCore_CloseDevToolsWithWindowHandle,
  TChromiumCore_Find,
  TChromiumCore_StopFinding,
  TChromiumCore_Print,
  TChromiumCore_PrintToPDF,
  TChromiumCore_ClipboardCopy,
  TChromiumCore_ClipboardPaste,
  TChromiumCore_ClipboardPasteAndMatchStyle,
  TChromiumCore_ClipboardCut,
  TChromiumCore_ClipboardUndo,
  TChromiumCore_ClipboardRedo,
  TChromiumCore_ClipboardDel,
  TChromiumCore_SelectAll,
  TChromiumCore_IncZoomStep,
  TChromiumCore_DecZoomStep,
  TChromiumCore_IncZoomPct,
  TChromiumCore_DecZoomPct,
  TChromiumCore_ResetZoomStep,
  TChromiumCore_ResetZoomLevel,
  TChromiumCore_ResetZoomPct,
  TChromiumCore_ReadZoom,
  TChromiumCore_IncZoomCommand,
  TChromiumCore_DecZoomCommand,
  TChromiumCore_ResetZoomCommand,
  TChromiumCore_WasResized,
  TChromiumCore_WasHidden,
  TChromiumCore_NotifyScreenInfoChanged,
  TChromiumCore_NotifyMoveOrResizeStarted,
  TChromiumCore_Invalidate,
  TChromiumCore_ExitFullscreen,
  TChromiumCore_ExecuteChromeCommand,
  TChromiumCore_SetAxViewportCollapse,
  TChromiumCore_SendExternalBeginFrame,
  TChromiumCore_SendKeyEvent,
  TChromiumCore_SendMouseClickEvent,
  TChromiumCore_SendMouseMoveEvent,
  TChromiumCore_SendMouseWheelEvent,
  TChromiumCore_SendTouchEvent,
  TChromiumCore_SendCaptureLostEvent,
  TChromiumCore_SendProcessMessageWithPIdPMessageStrX2,
  TChromiumCore_SendProcessMessageWithPIdPMessageFrame,
  TChromiumCore_SetFocus,
  TChromiumCore_SetAccessibilityState,
  TChromiumCore_SetAutoResizeEnabled,
  TChromiumCore_DragTargetDragEnter,
  TChromiumCore_DragTargetDragOver,
  TChromiumCore_DragTargetDragLeave,
  TChromiumCore_DragTargetDrop,
  TChromiumCore_DragSourceEndedAt,
  TChromiumCore_DragSourceSystemDragEnded,
  TChromiumCore_IMESetComposition,
  TChromiumCore_IMECommitText,
  TChromiumCore_IMEFinishComposingText,
  TChromiumCore_IMECancelComposition,
  TChromiumCore_ReplaceMisspelling,
  TChromiumCore_AddWordToDictionary,
{$IFDEF LINUX}
  TChromiumCore_UpdateBrowserSize,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_UpdateXWindowVisibility,
{$ENDIF}
  TChromiumCore_NotifyCurrentSinks,
  TChromiumCore_NotifyCurrentRoutes,
  TChromiumCore_CreateRoute,
  TChromiumCore_GetDeviceInfo,
  TChromiumCore_SetWebsiteSetting,
  TChromiumCore_SetContentSetting,
  TChromiumCore_SetChromeColorScheme,
  TChromiumCore_UpdateComponent,
  TChromiumCore_DefaultUrl,
  TChromiumCore_Options,
  TChromiumCore_FontOptions,
  TChromiumCore_PDFPrintOptions,
  TChromiumCore_DefaultEncoding,
  TChromiumCore_BrowserId,
  TChromiumCore_Browser,
  TChromiumCore_BrowserById,
  TChromiumCore_BrowserCount,
  TChromiumCore_BrowserIdByIndex,
  TChromiumCore_CefClient,
  TChromiumCore_ReqContextHandler,
  TChromiumCore_ResourceRequestHandler,
  TChromiumCore_CefWindowInfo,
  TChromiumCore_VisibleNavigationEntry,
  TChromiumCore_RuntimeStyle,
  TChromiumCore_RequestContext,
  TChromiumCore_MediaRouter,
  TChromiumCore_MediaObserver,
  TChromiumCore_MediaObserverReg,
  TChromiumCore_DevToolsMsgObserver,
  TChromiumCore_DevToolsMsgObserverReg,
  TChromiumCore_MultithreadApp,
  TChromiumCore_IsLoading,
  TChromiumCore_HasDocument,
  TChromiumCore_HasView,
  TChromiumCore_HasDevTools,
  TChromiumCore_HasClientHandler,
  TChromiumCore_HasBrowser,
  TChromiumCore_CanGoBack,
  TChromiumCore_CanGoForward,
  TChromiumCore_IsPopUp,
  TChromiumCore_WindowHandle,
  TChromiumCore_OpenerWindowHandle,
  TChromiumCore_OpenerIdentifier,
{$IFDEF MSWINDOWS}
  TChromiumCore_BrowserHandle,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TChromiumCore_RenderHandle,
{$ENDIF}
  TChromiumCore_FrameIsFocused,
  TChromiumCore_Initialized,
  TChromiumCore_RequestContextCache,
  TChromiumCore_RequestContextIsGlobal,
  TChromiumCore_ChromeColorSchemeMode,
  TChromiumCore_ChromeColorSchemeColor,
  TChromiumCore_ChromeColorSchemeVariant,
  TChromiumCore_DocumentURL,
  TChromiumCore_ZoomLevel,
  TChromiumCore_DefaultZoomLevel,
  TChromiumCore_CanIncZoom,
  TChromiumCore_CanDecZoom,
  TChromiumCore_CanResetZoom,
  TChromiumCore_ZoomPct,
  TChromiumCore_ZoomStep,
  TChromiumCore_WindowlessFrameRate,
  TChromiumCore_CustomHeaderName,
  TChromiumCore_CustomHeaderValue,
  TChromiumCore_DoNotTrack,
  TChromiumCore_SendReferrer,
  TChromiumCore_HyperlinkAuditing,
  TChromiumCore_AllowOutdatedPlugins,
  TChromiumCore_AlwaysAuthorizePlugins,
  TChromiumCore_AlwaysOpenPDFExternally,
  TChromiumCore_SpellChecking,
  TChromiumCore_SpellCheckerDicts,
  TChromiumCore_HasValidMainFrame,
  TChromiumCore_FrameCount,
  TChromiumCore_DragOperations,
  TChromiumCore_AudioMuted,
  TChromiumCore_Fullscreen,
  TChromiumCore_IsRenderProcessUnresponsive,
  TChromiumCore_SafeSearch,
  TChromiumCore_YouTubeRestrict,
  TChromiumCore_PrintingEnabled,
  TChromiumCore_AcceptCookies,
  TChromiumCore_Block3rdPartyCookies,
  TChromiumCore_MultiBrowserMode,
{$IFDEF MSWINDOWS}
  TChromiumCore_DefaultWindowInfoExStyle,
{$ENDIF}
  TChromiumCore_Offline,
  TChromiumCore_QuicAllowed,
  TChromiumCore_JavascriptEnabled,
  TChromiumCore_LoadImagesAutomatically,
  TChromiumCore_CanFocus,
  TChromiumCore_EnableFocusDelayMs,
{$IFDEF LINUX}
  TChromiumCore_XDisplay,
{$ENDIF}
  TChromiumCore_WebRTCIPHandlingPolicy,
  TChromiumCore_WebRTCMultipleRoutes,
  TChromiumCore_WebRTCNonproxiedUDP,
  TChromiumCore_ProxyType,
  TChromiumCore_ProxyScheme,
  TChromiumCore_ProxyServer,
  TChromiumCore_ProxyPort,
  TChromiumCore_ProxyUsername,
  TChromiumCore_ProxyPassword,
  TChromiumCore_ProxyScriptURL,
  TChromiumCore_ProxyByPassList,
  TChromiumCore_MaxConnectionsPerProxy,
  TChromiumCore_DownloadBubble,
  TChromiumCore_HTTPSUpgrade,
  TChromiumCore_HSTSPolicyBypassList,
  TChromiumCore_CredentialsService,
  TChromiumCore_AutofillCreditCard,
  TChromiumCore_AutofillProfile,
  TChromiumCore_AutofillSaveData,
  TChromiumCore_CanMakePayment,
  TChromiumCore_SearchSuggestEnabled,
  TChromiumCore_URLDataCollection,
  TChromiumCore_StorageNotificationService,
  TChromiumCore_OnTextResultAvailable,
  TChromiumCore_OnPdfPrintFinished,
  TChromiumCore_OnPrefsAvailable,
  TChromiumCore_OnPrefsUpdated,
  TChromiumCore_OnCookiesDeleted,
  TChromiumCore_OnResolvedHostAvailable,
  TChromiumCore_OnNavigationVisitorResultAvailable,
  TChromiumCore_OnDownloadImageFinished,
  TChromiumCore_OnCookiesFlushed,
  TChromiumCore_OnCertificateExceptionsCleared,
  TChromiumCore_OnHttpAuthCredentialsCleared,
  TChromiumCore_OnAllConnectionsClosed,
  TChromiumCore_OnHttpCacheCleared,
  TChromiumCore_OnExecuteTaskOnCefThread,
  TChromiumCore_OnCookiesVisited,
  TChromiumCore_OnCookieVisitorDestroyed,
  TChromiumCore_OnCookieSet,
  TChromiumCore_OnZoomPctAvailable,
  TChromiumCore_OnMediaRouteCreateFinished,
  TChromiumCore_OnMediaSinkDeviceInfo,
  TChromiumCore_OnCanFocus,
{$IFDEF MSWINDOWS}
  TChromiumCore_OnBrowserCompMsg,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TChromiumCore_OnRenderCompMsg,
{$ENDIF}
  TChromiumCore_OnProcessMessageReceived,
  TChromiumCore_OnLoadStart,
  TChromiumCore_OnLoadEnd,
  TChromiumCore_OnLoadError,
  TChromiumCore_OnLoadingStateChange,
  TChromiumCore_OnTakeFocus,
  TChromiumCore_OnSetFocus,
  TChromiumCore_OnGotFocus,
  TChromiumCore_OnBeforeContextMenu,
  TChromiumCore_OnRunContextMenu,
  TChromiumCore_OnContextMenuCommand,
  TChromiumCore_OnContextMenuDismissed,
  TChromiumCore_OnRunQuickMenu,
  TChromiumCore_OnQuickMenuCommand,
  TChromiumCore_OnQuickMenuDismissed,
  TChromiumCore_OnPreKeyEvent,
  TChromiumCore_OnKeyEvent,
  TChromiumCore_OnAddressChange,
  TChromiumCore_OnTitleChange,
  TChromiumCore_OnFavIconUrlChange,
  TChromiumCore_OnFullScreenModeChange,
  TChromiumCore_OnTooltip,
  TChromiumCore_OnStatusMessage,
  TChromiumCore_OnConsoleMessage,
  TChromiumCore_OnAutoResize,
  TChromiumCore_OnLoadingProgressChange,
  TChromiumCore_OnCursorChange,
  TChromiumCore_OnMediaAccessChange,
  TChromiumCore_OnContentsBoundsChange,
  TChromiumCore_OnGetRootWindowScreenRect,
  TChromiumCore_OnCanDownload,
  TChromiumCore_OnBeforeDownload,
  TChromiumCore_OnDownloadUpdated,
  TChromiumCore_OnJsdialog,
  TChromiumCore_OnBeforeUnloadDialog,
  TChromiumCore_OnResetDialogState,
  TChromiumCore_OnDialogClosed,
  TChromiumCore_OnBeforePopup,
  TChromiumCore_OnBeforePopupAborted,
  TChromiumCore_OnBeforeDevToolsPopup,
  TChromiumCore_OnAfterCreated,
  TChromiumCore_OnBeforeClose,
  TChromiumCore_OnClose,
  TChromiumCore_OnBeforeBrowse,
  TChromiumCore_OnOpenUrlFromTab,
  TChromiumCore_OnGetAuthCredentials,
  TChromiumCore_OnCertificateError,
  TChromiumCore_OnSelectClientCertificate,
  TChromiumCore_OnRenderViewReady,
  TChromiumCore_OnRenderProcessUnresponsive,
  TChromiumCore_OnRenderProcessResponsive,
  TChromiumCore_OnRenderProcessTerminated,
  TChromiumCore_OnGetResourceRequestHandler_ReqHdlr,
  TChromiumCore_OnDocumentAvailableInMainFrame,
  TChromiumCore_OnBeforeResourceLoad,
  TChromiumCore_OnGetResourceHandler,
  TChromiumCore_OnResourceRedirect,
  TChromiumCore_OnResourceResponse,
  TChromiumCore_OnGetResourceResponseFilter,
  TChromiumCore_OnResourceLoadComplete,
  TChromiumCore_OnProtocolExecution,
  TChromiumCore_OnCanSendCookie,
  TChromiumCore_OnCanSaveCookie,
  TChromiumCore_OnFileDialog,
  TChromiumCore_OnGetAccessibilityHandler,
  TChromiumCore_OnGetRootScreenRect,
  TChromiumCore_OnGetViewRect,
  TChromiumCore_OnGetScreenPoint,
  TChromiumCore_OnGetScreenInfo,
  TChromiumCore_OnPopupShow,
  TChromiumCore_OnPopupSize,
  TChromiumCore_OnPaint,
  TChromiumCore_OnAcceleratedPaint,
  TChromiumCore_OnGetTouchHandleSize,
  TChromiumCore_OnTouchHandleStateChanged,
  TChromiumCore_OnStartDragging,
  TChromiumCore_OnUpdateDragCursor,
  TChromiumCore_OnScrollOffsetChanged,
  TChromiumCore_OnIMECompositionRangeChanged,
  TChromiumCore_OnTextSelectionChanged,
  TChromiumCore_OnVirtualKeyboardRequested,
  TChromiumCore_OnDragEnter,
  TChromiumCore_OnDraggableRegionsChanged,
  TChromiumCore_OnFindResult,
  TChromiumCore_OnRequestContextInitialized,
  TChromiumCore_OnGetResourceRequestHandler_ReqCtxHdlr,
  TChromiumCore_OnSinks,
  TChromiumCore_OnRoutes,
  TChromiumCore_OnRouteStateChanged,
  TChromiumCore_OnRouteMessageReceived,
  TChromiumCore_OnGetAudioParameters,
  TChromiumCore_OnAudioStreamStarted,
  TChromiumCore_OnAudioStreamPacket,
  TChromiumCore_OnAudioStreamStopped,
  TChromiumCore_OnAudioStreamError,
  TChromiumCore_OnDevToolsMessage,
  TChromiumCore_OnDevToolsRawMessage,
  TChromiumCore_OnDevToolsMethodResult,
  TChromiumCore_OnDevToolsMethodRawResult,
  TChromiumCore_OnDevToolsEvent,
  TChromiumCore_OnDevToolsRawEvent,
  TChromiumCore_OnDevToolsAgentAttached,
  TChromiumCore_OnDevToolsAgentDetached,
{$IFDEF LINUX}
  TChromiumCore_OnPrintStart,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_OnPrintSettings,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_OnPrintDialog,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_OnPrintJob,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_OnPrintReset,
{$ENDIF}
{$IFDEF LINUX}
  TChromiumCore_OnGetPDFPaperSize,
{$ENDIF}
  TChromiumCore_OnFrameCreated,
  TChromiumCore_OnFrameDestroyed,
  TChromiumCore_OnFrameAttached,
  TChromiumCore_OnFrameDetached,
  TChromiumCore_OnMainFrameChanged,
  TChromiumCore_OnChromeCommand,
  TChromiumCore_OnIsChromeAppMenuItemVisible,
  TChromiumCore_OnIsChromeAppMenuItemEnabled,
  TChromiumCore_OnIsChromePageActionIconVisible,
  TChromiumCore_OnIsChromeToolbarButtonVisible,
  TChromiumCore_OnRequestMediaAccessPermission,
  TChromiumCore_OnShowPermissionPrompt,
  TChromiumCore_OnDismissPermissionPrompt,
  TChromiumCore_OnPreferenceChanged,
  TChromiumCore_OnSettingChanged,
  TChromiumCore_OnComponentUpdateCompleted;