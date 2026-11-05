// constructor
function TChromiumCore_Create(AOwner: TComponent; out IntfChromiumEvents: IChromiumEvents): TChromiumCore; extdecl;
begin
  {$define handleExceptionID := 5000}
  handleExceptionBegin
  Result := TChromiumCore.Create(AOwner);
  IntfChromiumEvents := Result as IChromiumEvents;
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateClientHandlerWithBool(AObj: TChromiumCore; aIsOSR: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5001}
  handleExceptionBegin
  Result := AObj.CreateClientHandler(aIsOSR);
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateClientHandlerWithClientBool(AObj: TChromiumCore; var aClient: ICefClient; aIsOSR: LongBool): LongBool; extdecl;
var
  OutaClient: ICefClient = nil;
begin
  {$define handleExceptionID := 5002}
  handleExceptionBegin
  Result := AObj.CreateClientHandler(OutaClient, aIsOSR);
  aClient := OutaClient;
  handleExceptionEnd
end;

// function
function TChromiumCore_TryCloseBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5003}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

// function
function TChromiumCore_SelectBrowser(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5004}
  handleExceptionBegin
  Result := AObj.SelectBrowser(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_IndexOfBrowserID(AObj: TChromiumCore; aID: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5005}
  handleExceptionBegin
  Result := AObj.IndexOfBrowserID(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_ShareRequestContext(AObj: TChromiumCore; var aContext: ICefRequestContext; const aHandler: ICefRequestContextHandler): LongBool; extdecl;
var
  OutaContext: ICefRequestContext = nil;
begin
  {$define handleExceptionID := 5006}
  handleExceptionBegin
  Result := AObj.ShareRequestContext(OutaContext, aHandler);
  aContext := OutaContext;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// function
function TChromiumCore_SetNewBrowserParent(AObj: TChromiumCore; aNewParentHwnd: HWND): LongBool; extdecl;
begin
  {$define handleExceptionID := 5007}
  handleExceptionBegin
  Result := AObj.SetNewBrowserParent(aNewParentHwnd);
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

// function
function TChromiumCore_CreateBrowserWithWHandleRectStrRContextDValueBool(AObj: TChromiumCore; aParentHandle: TCefWindowHandle; var aParentRect: TRect; const aWindowName: PChar; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue; aForceAsPopup: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5008}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aParentHandle, aParentRect, PCharToUStr(aWindowName), aContext, aExtraInfo, aForceAsPopup);
  handleExceptionEnd
end;

// function
function TChromiumCore_CreateBrowserWithStrBVComponentRContextDValue(AObj: TChromiumCore; const aURL: PChar; const aBrowserViewComp: TCEFBrowserViewComponent; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 5009}
  handleExceptionBegin
  Result := AObj.CreateBrowser(PCharToUStr(aURL), aBrowserViewComp, aContext, aExtraInfo);
  handleExceptionEnd
end;

// function
function TChromiumCore_ClearCertificateExceptions(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5010}
  handleExceptionBegin
  Result := AObj.ClearCertificateExceptions(aClearImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_ClearHttpAuthCredentials(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5011}
  handleExceptionBegin
  Result := AObj.ClearHttpAuthCredentials(aClearImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_CloseAllConnections(AObj: TChromiumCore; aCloseImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5012}
  handleExceptionBegin
  Result := AObj.CloseAllConnections(aCloseImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_GetFrameNames(AObj: TChromiumCore; var aFrameNames: TStrings): LongBool; extdecl;
var
  OutaFrameNames: TStrings;
begin
  {$define handleExceptionID := 5013}
  handleExceptionBegin
  OutaFrameNames := aFrameNames;
  Result := AObj.GetFrameNames(OutaFrameNames);
  aFrameNames := OutaFrameNames;
  handleExceptionEnd
end;

// function
function TChromiumCore_GetFrameIdentifiers(AObj: TChromiumCore; var aFrameCount: NativeUInt; var aFrameIdentifierArray: TCefFrameIdentifierArray; var aFrameIdentifierArrayCount: Integer): LongBool; extdecl;
var
  OutaFrameCount: NativeUInt;
  OutaFrameIdentifierArray: TCefFrameIdentifierArray = nil;
begin
  {$define handleExceptionID := 5014}
  handleExceptionBegin
  OutaFrameCount := aFrameCount;
  Result := AObj.GetFrameIdentifiers(OutaFrameCount, OutaFrameIdentifierArray);
  aFrameCount := OutaFrameCount;
  aFrameIdentifierArrayCount := Length(OutaFrameIdentifierArray);
  aFrameIdentifierArray := OutaFrameIdentifierArray;
  handleExceptionEnd
end;

// function
function TChromiumCore_IsSameBrowser(AObj: TChromiumCore; const aBrowser: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 5015}
  handleExceptionBegin
  Result := AObj.IsSameBrowser(aBrowser);
  handleExceptionEnd
end;

// function
function TChromiumCore_ExecuteTaskOnCefThread(AObj: TChromiumCore; aCefThreadId: TCefThreadId; aTaskID: cardinal; var aDelayMs: Int64): LongBool; extdecl;
begin
  {$define handleExceptionID := 5016}
  handleExceptionBegin
  Result := AObj.ExecuteTaskOnCefThread(aCefThreadId, aTaskID, aDelayMs);
  handleExceptionEnd
end;

// function
function TChromiumCore_DeleteCookies(AObj: TChromiumCore; const url: PChar; const cookieName: PChar; aDeleteImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5017}
  handleExceptionBegin
  Result := AObj.DeleteCookies(PCharToUStr(url), PCharToUStr(cookieName), aDeleteImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_VisitAllCookies(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5018}
  handleExceptionBegin
  Result := AObj.VisitAllCookies(aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_VisitURLCookies(AObj: TChromiumCore; const url: PChar; includeHttpOnly: LongBool; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5019}
  handleExceptionBegin
  Result := AObj.VisitURLCookies(PCharToUStr(url), includeHttpOnly, aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_SetCookie(AObj: TChromiumCore; var Args: TChromiumCoreSetCookieArgsPtr): LongBool; extdecl;
var
  InArgs: TChromiumCoreSetCookieArgs;
begin
  {$define handleExceptionID := 5020}
  handleExceptionBegin
  InArgs := TChromiumCoreSetCookieArgsToPas(Args);
  Result := AObj.SetCookie(InArgs.url, InArgs.name_, InArgs.value, InArgs.domain, InArgs.path, InArgs.secure, InArgs.httponly, InArgs.hasExpires, InArgs.creation, InArgs.lastAccess, InArgs.expires, InArgs.same_site, InArgs.priority, InArgs.aSetImmediately, InArgs.aID);
  handleExceptionEnd
end;

// function
function TChromiumCore_FlushCookieStore(AObj: TChromiumCore; aFlushImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5021}
  handleExceptionBegin
  Result := AObj.FlushCookieStore(aFlushImmediately);
  handleExceptionEnd
end;

// function
function TChromiumCore_SendDevToolsMessage(AObj: TChromiumCore; const message_: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5022}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// function
function TChromiumCore_ExecuteDevToolsMethod(AObj: TChromiumCore; message_id: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionID := 5023}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(message_id, PCharToUStr(method), params);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_AddDevToolsMessageObserver(AObj: TChromiumCore; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5024}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_CreateUrlRequestWithRequestUClientStr(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrameName: PChar; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 5025}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// function
procedure TChromiumCore_CreateUrlRequestWithRequestUClientFrame(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrame: ICefFrame; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 5026}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrame);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_CreateUrlRequestWithRequestUClientInt64(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; var aFrameIdentifier: int64; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 5027}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrameIdentifier);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_AddObserver(AObj: TChromiumCore; const observer: ICefMediaObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5028}
  handleExceptionBegin
  Result := AObj.AddObserver(observer);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_GetSource(AObj: TChromiumCore; const urn: PChar; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionID := 5029}
  handleExceptionBegin
  Result := AObj.GetSource(PCharToUStr(urn));
  handleExceptionEnd
end;

// function
function TChromiumCore_LoadExtension(AObj: TChromiumCore; const root_directory: PChar; const manifest: ICefDictionaryValue; const handler: ICefExtensionHandler; const requestContext: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 5030}
  handleExceptionBegin
  Result := AObj.LoadExtension(PCharToUStr(root_directory), manifest, handler, requestContext);
  handleExceptionEnd
end;

// function
function TChromiumCore_DidLoadExtension(AObj: TChromiumCore; const extension_id: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5031}
  handleExceptionBegin
  Result := AObj.DidLoadExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// function
function TChromiumCore_HasExtension(AObj: TChromiumCore; const extension_id: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5032}
  handleExceptionBegin
  Result := AObj.HasExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// function
function TChromiumCore_GetExtensions(AObj: TChromiumCore; const extension_ids: TStringList): LongBool; extdecl;
begin
  {$define handleExceptionID := 5033}
  handleExceptionBegin
  Result := AObj.GetExtensions(extension_ids);
  handleExceptionEnd
end;

// function
procedure TChromiumCore_GetExtension(AObj: TChromiumCore; const extension_id: PChar; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionID := 5034}
  handleExceptionBegin
  Result := AObj.GetExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseBrowser(AObj: TChromiumCore; aForceClose: LongBool); extdecl;
begin
  {$define handleExceptionID := 5035}
  handleExceptionBegin
  AObj.CloseBrowser(aForceClose);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseAllBrowsers(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5036}
  handleExceptionBegin
  AObj.CloseAllBrowsers();
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// procedure
procedure TChromiumCore_InitializeDragAndDrop(AObj: TChromiumCore; const aDropTargetWnd: HWND); extdecl;
begin
  {$define handleExceptionID := 5037}
  handleExceptionBegin
  AObj.InitializeDragAndDrop(aDropTargetWnd);
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

{$IFDEF MSWINDOWS}
// procedure
procedure TChromiumCore_ShutdownDragAndDrop(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5038}
  handleExceptionBegin
  AObj.ShutdownDragAndDrop();
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

// procedure
procedure TChromiumCore_LoadURLWithStrX2(AObj: TChromiumCore; const aURL: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5039}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL), PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadURLWithStrFrame(AObj: TChromiumCore; const aURL: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5040}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL), aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadURLWithStrInt64(AObj: TChromiumCore; const aURL: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5041}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL), aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadStringWithStrX2(AObj: TChromiumCore; const aHTML: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5042}
  handleExceptionBegin
  AObj.LoadString(PCharToUStr(aHTML), PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadStringWithStrFrame(AObj: TChromiumCore; const aHTML: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5043}
  handleExceptionBegin
  AObj.LoadString(PCharToUStr(aHTML), aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadStringWithStrInt64(AObj: TChromiumCore; const aHTML: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5044}
  handleExceptionBegin
  AObj.LoadString(PCharToUStr(aHTML), aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadResourceWithCMStreamStrX3(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType: PChar; const aCharset: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5045}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType, aCharset, PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadResourceWithCMStreamStrX2Frame(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType: PChar; const aCharset: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5046}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType, aCharset, aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadResourceWithCMStreamStrX2Int64(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType: PChar; const aCharset: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5047}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType, aCharset, aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_LoadRequest(AObj: TChromiumCore; const aRequest: ICefRequest); extdecl;
begin
  {$define handleExceptionID := 5048}
  handleExceptionBegin
  AObj.LoadRequest(aRequest);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GoBack(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5049}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GoForward(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5050}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Reload(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5051}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReloadIgnoreCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5052}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StopLoad(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5053}
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StartDownload(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionID := 5054}
  handleExceptionBegin
  AObj.StartDownload(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DownloadImage(AObj: TChromiumCore; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: cardinal; bypassCache: LongBool); extdecl;
begin
  {$define handleExceptionID := 5055}
  handleExceptionBegin
  AObj.DownloadImage(PCharToUStr(imageUrl), isFavicon, maxImageSize, bypassCache);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SimulateMouseWheel(AObj: TChromiumCore; aDeltaX: integer; aDeltaY: integer); extdecl;
begin
  {$define handleExceptionID := 5056}
  handleExceptionBegin
  AObj.SimulateMouseWheel(aDeltaX, aDeltaY);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveHTMLWithStr(AObj: TChromiumCore; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5057}
  handleExceptionBegin
  AObj.RetrieveHTML(PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveHTMLWithFrame(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5058}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveHTMLWithInt64(AObj: TChromiumCore; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5059}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveTextWithStr(AObj: TChromiumCore; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5060}
  handleExceptionBegin
  AObj.RetrieveText(PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveTextWithFrame(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5061}
  handleExceptionBegin
  AObj.RetrieveText(aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_RetrieveTextWithInt64(AObj: TChromiumCore; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5062}
  handleExceptionBegin
  AObj.RetrieveText(aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GetNavigationEntries(AObj: TChromiumCore; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 5063}
  handleExceptionBegin
  AObj.GetNavigationEntries(currentOnly);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteJavaScriptWithStrX3Int(AObj: TChromiumCore; const aCode: PChar; const aScriptURL: PChar; const aFrameName: PChar; aStartLine: integer); extdecl;
begin
  {$define handleExceptionID := 5064}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(aCode), PCharToUStr(aScriptURL), PCharToUStr(aFrameName), aStartLine);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteJavaScriptWithStrX2FrameInt(AObj: TChromiumCore; const aCode: PChar; const aScriptURL: PChar; const aFrame: ICefFrame; aStartLine: integer); extdecl;
begin
  {$define handleExceptionID := 5065}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(aCode), PCharToUStr(aScriptURL), aFrame, aStartLine);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ExecuteJavaScriptWithStrX2Int64Int(AObj: TChromiumCore; const aCode: PChar; const aScriptURL: PChar; var aFrameIdentifier: int64; aStartLine: integer); extdecl;
begin
  {$define handleExceptionID := 5066}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(aCode), PCharToUStr(aScriptURL), aFrameIdentifier, aStartLine);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_UpdatePreferences(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5067}
  handleExceptionBegin
  AObj.UpdatePreferences();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SavePreferences(AObj: TChromiumCore; const aFileName: PChar); extdecl;
begin
  {$define handleExceptionID := 5068}
  handleExceptionBegin
  AObj.SavePreferences(aFileName);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResolveHost(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionID := 5069}
  handleExceptionBegin
  AObj.ResolveHost(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetUserAgentOverride(AObj: TChromiumCore; const aUserAgent: PChar; const aAcceptLanguage: PChar; const aPlatform: PChar); extdecl;
begin
  {$define handleExceptionID := 5070}
  handleExceptionBegin
  AObj.SetUserAgentOverride(PCharToUStr(aUserAgent), PCharToUStr(aAcceptLanguage), PCharToUStr(aPlatform));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClearDataForOrigin(AObj: TChromiumCore; const aOrigin: PChar; aStorageTypes: TCefClearDataStorageTypes); extdecl;
begin
  {$define handleExceptionID := 5071}
  handleExceptionBegin
  AObj.ClearDataForOrigin(PCharToUStr(aOrigin), aStorageTypes);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClearCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5072}
  handleExceptionBegin
  AObj.ClearCache();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ToggleAudioMuted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5073}
  handleExceptionBegin
  AObj.ToggleAudioMuted();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ShowDevTools(AObj: TChromiumCore; var inspectElementAt: TPoint; aWindowInfo: TCefWindowInfoPtr); extdecl;
var
  InaWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionID := 5074}
  handleExceptionBegin
  InaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  AObj.ShowDevTools(inspectElementAt, @InaWindowInfo);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseDevTools(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5075}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CloseDevToolsWithWindowHandle(AObj: TChromiumCore; const aDevToolsWnd: TCefWindowHandle); extdecl;
begin
  {$define handleExceptionID := 5076}
  handleExceptionBegin
  AObj.CloseDevTools(aDevToolsWnd);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Find(AObj: TChromiumCore; const aSearchText: PChar; aForward: LongBool; aMatchCase: LongBool; aFindNext: LongBool); extdecl;
begin
  {$define handleExceptionID := 5077}
  handleExceptionBegin
  AObj.Find(PCharToUStr(aSearchText), aForward, aMatchCase, aFindNext);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_StopFinding(AObj: TChromiumCore; aClearSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 5078}
  handleExceptionBegin
  AObj.StopFinding(aClearSelection);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Print(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5079}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_PrintToPDF(AObj: TChromiumCore; const aFilePath: PChar); extdecl;
begin
  {$define handleExceptionID := 5080}
  handleExceptionBegin
  AObj.PrintToPDF(PCharToUStr(aFilePath));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardCopy(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5081}
  handleExceptionBegin
  AObj.ClipboardCopy();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardPaste(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5082}
  handleExceptionBegin
  AObj.ClipboardPaste();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardCut(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5083}
  handleExceptionBegin
  AObj.ClipboardCut();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardUndo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5084}
  handleExceptionBegin
  AObj.ClipboardUndo();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardRedo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5085}
  handleExceptionBegin
  AObj.ClipboardRedo();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ClipboardDel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5086}
  handleExceptionBegin
  AObj.ClipboardDel();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SelectAll(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5087}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IncZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5088}
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DecZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5089}
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IncZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5090}
  handleExceptionBegin
  AObj.IncZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DecZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5091}
  handleExceptionBegin
  AObj.DecZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5092}
  handleExceptionBegin
  AObj.ResetZoomStep();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomLevel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5093}
  handleExceptionBegin
  AObj.ResetZoomLevel();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ResetZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5094}
  handleExceptionBegin
  AObj.ResetZoomPct();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReadZoom(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5095}
  handleExceptionBegin
  AObj.ReadZoom();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_WasResized(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5096}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_WasHidden(AObj: TChromiumCore; hidden: LongBool); extdecl;
begin
  {$define handleExceptionID := 5097}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyScreenInfoChanged(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5098}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyMoveOrResizeStarted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5099}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_Invalidate(AObj: TChromiumCore; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionID := 5100}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendExternalBeginFrame(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5101}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendKeyEvent(AObj: TChromiumCore; const event: TCefKeyEventPtr); extdecl;
var
  Inevent: TCefKeyEvent;
begin
  {$define handleExceptionID := 5102}
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
  {$define handleExceptionID := 5103}
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
  {$define handleExceptionID := 5104}
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
  {$define handleExceptionID := 5105}
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
  {$define handleExceptionID := 5106}
  handleExceptionBegin
  Inevent := TCefTouchEventToPas(event);
  AObj.SendTouchEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendCaptureLostEvent(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5107}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendProcessMessageWithPIdPMessageStr(AObj: TChromiumCore; targetProcess: TCefProcessId; const ProcMessage: ICefProcessMessage; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionID := 5108}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, ProcMessage, PCharToUStr(aFrameName));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendProcessMessageWithPIdPMessageFrame(AObj: TChromiumCore; targetProcess: TCefProcessId; const ProcMessage: ICefProcessMessage; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 5109}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, ProcMessage, aFrame);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SendProcessMessageWithPIdPMessageInt64(AObj: TChromiumCore; targetProcess: TCefProcessId; const ProcMessage: ICefProcessMessage; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionID := 5110}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, ProcMessage, aFrameIdentifier);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetFocus(AObj: TChromiumCore; focus: LongBool); extdecl;
begin
  {$define handleExceptionID := 5111}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_SetAccessibilityState(AObj: TChromiumCore; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionID := 5112}
  handleExceptionBegin
  AObj.SetAccessibilityState(accessibilityState);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDragEnter(AObj: TChromiumCore; const dragData: ICefDragData; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5113}
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
  {$define handleExceptionID := 5114}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragOver(@Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDragLeave(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5115}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragTargetDrop(AObj: TChromiumCore; const event: TCefMouseEventPtr); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 5116}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDrop(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragSourceEndedAt(AObj: TChromiumCore; x: Integer; y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionID := 5117}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x, y, op);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_DragSourceSystemDragEnded(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5118}
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
  {$define handleExceptionID := 5119}
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
  {$define handleExceptionID := 5120}
  handleExceptionBegin
  Inreplacement_range := TCefRangeToPas(replacement_range);
  AObj.IMECommitText(PCharToUStr(text), @Inreplacement_range, relative_cursor_pos);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMEFinishComposingText(AObj: TChromiumCore; keep_selection: LongBool); extdecl;
begin
  {$define handleExceptionID := 5121}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keep_selection);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_IMECancelComposition(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5122}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_ReplaceMisspelling(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionID := 5123}
  handleExceptionBegin
  AObj.ReplaceMisspelling(PCharToUStr(aWord));
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_AddWordToDictionary(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionID := 5124}
  handleExceptionBegin
  AObj.AddWordToDictionary(PCharToUStr(aWord));
  handleExceptionEnd
end;

{$IFDEF LINUX}
// procedure
procedure TChromiumCore_UpdateBrowserSize(AObj: TChromiumCore; aLeft: integer; aTop: integer; aWidth: integer; aHeight: integer); extdecl;
begin
  {$define handleExceptionID := 5125}
  handleExceptionBegin
  AObj.UpdateBrowserSize(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF LINUX}
// procedure
procedure TChromiumCore_UpdateXWindowVisibility(AObj: TChromiumCore; aVisible: LongBool); extdecl;
begin
  {$define handleExceptionID := 5126}
  handleExceptionBegin
  AObj.UpdateXWindowVisibility(aVisible);
  handleExceptionEnd
end;
{$ENDIF}

// procedure
procedure TChromiumCore_NotifyCurrentSinks(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5127}
  handleExceptionBegin
  AObj.NotifyCurrentSinks();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_NotifyCurrentRoutes(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionID := 5128}
  handleExceptionBegin
  AObj.NotifyCurrentRoutes();
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_CreateRoute(AObj: TChromiumCore; const source: ICefMediaSource; const sink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 5129}
  handleExceptionBegin
  AObj.CreateRoute(source, sink);
  handleExceptionEnd
end;

// procedure
procedure TChromiumCore_GetDeviceInfo(AObj: TChromiumCore; const aMediaSink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 5130}
  handleExceptionBegin
  AObj.GetDeviceInfo(aMediaSink);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DefaultUrl(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5131}
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
  {$define handleExceptionID := 5132}
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
  {$define handleExceptionID := 5133}
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
  {$define handleExceptionID := 5134}
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
  {$define handleExceptionID := 5135}
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
  {$define handleExceptionID := 5136}
  handleExceptionBegin
  Result := AObj.BrowserId;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_Browser(AObj: TChromiumCore; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 5137}
  handleExceptionBegin
  Result := AObj.Browser;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_BrowserById(AObj: TChromiumCore; id: integer; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 5138}
  handleExceptionBegin
  Result := AObj.BrowserById[id];
  handleExceptionEnd
end;

// property
function TChromiumCore_BrowserCount(AObj: TChromiumCore): integer; extdecl;
begin
  {$define handleExceptionID := 5139}
  handleExceptionBegin
  Result := AObj.BrowserCount;
  handleExceptionEnd
end;

// property
function TChromiumCore_BrowserIdByIndex(AObj: TChromiumCore; i: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5140}
  handleExceptionBegin
  Result := AObj.BrowserIdByIndex[i];
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CefClient(AObj: TChromiumCore; var Result: ICefClient); extdecl;
begin
  {$define handleExceptionID := 5141}
  handleExceptionBegin
  Result := AObj.CefClient;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ReqContextHandler(AObj: TChromiumCore; var Result: ICefRequestContextHandler); extdecl;
begin
  {$define handleExceptionID := 5142}
  handleExceptionBegin
  Result := AObj.ReqContextHandler;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ResourceRequestHandler(AObj: TChromiumCore; var Result: ICefResourceRequestHandler); extdecl;
begin
  {$define handleExceptionID := 5143}
  handleExceptionBegin
  Result := AObj.ResourceRequestHandler;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_CefWindowInfo(AObj: TChromiumCore; var Result: TCefWindowInfoPtr); extdecl;
begin
  {$define handleExceptionID := 5144}
  handleExceptionBegin
  Result := TCefWindowInfoToGo(AObj.CefWindowInfo);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_VisibleNavigationEntry(AObj: TChromiumCore; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionID := 5145}
  handleExceptionBegin
  Result := AObj.VisibleNavigationEntry;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_RequestContext(AObj: TChromiumCore; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionID := 5146}
  handleExceptionBegin
  Result := AObj.RequestContext;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaRouter(AObj: TChromiumCore; var Result: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionID := 5147}
  handleExceptionBegin
  Result := AObj.MediaRouter;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaObserver(AObj: TChromiumCore; var Result: ICefMediaObserver); extdecl;
begin
  {$define handleExceptionID := 5148}
  handleExceptionBegin
  Result := AObj.MediaObserver;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_MediaObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5149}
  handleExceptionBegin
  Result := AObj.MediaObserverReg;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DevToolsMsgObserver(AObj: TChromiumCore; var Result: ICefDevToolsMessageObserver); extdecl;
begin
  {$define handleExceptionID := 5150}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserver;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DevToolsMsgObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 5151}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserverReg;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ExtensionHandler(AObj: TChromiumCore; var Result: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionID := 5152}
  handleExceptionBegin
  Result := AObj.ExtensionHandler;
  handleExceptionEnd
end;

// property
function TChromiumCore_MultithreadApp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5153}
  handleExceptionBegin
  Result := AObj.MultithreadApp;
  handleExceptionEnd
end;

// property
function TChromiumCore_IsLoading(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5154}
  handleExceptionBegin
  Result := AObj.IsLoading;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasDocument(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5155}
  handleExceptionBegin
  Result := AObj.HasDocument;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasView(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5156}
  handleExceptionBegin
  Result := AObj.HasView;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasDevTools(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5157}
  handleExceptionBegin
  Result := AObj.HasDevTools;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasClientHandler(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5158}
  handleExceptionBegin
  Result := AObj.HasClientHandler;
  handleExceptionEnd
end;

// property
function TChromiumCore_HasBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5159}
  handleExceptionBegin
  Result := AObj.HasBrowser;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanGoBack(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5160}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

// property
function TChromiumCore_CanGoForward(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5161}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

// property
function TChromiumCore_IsPopUp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5162}
  handleExceptionBegin
  Result := AObj.IsPopUp;
  handleExceptionEnd
end;

// property
function TChromiumCore_WindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 5163}
  handleExceptionBegin
  Result := AObj.WindowHandle;
  handleExceptionEnd
end;

// property
function TChromiumCore_OpenerWindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 5164}
  handleExceptionBegin
  Result := AObj.OpenerWindowHandle;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_BrowserHandle(AObj: TChromiumCore): THandle; extdecl;
begin
  {$define handleExceptionID := 5165}
  handleExceptionBegin
  Result := AObj.BrowserHandle;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_WidgetHandle(AObj: TChromiumCore): THandle; extdecl;
begin
  {$define handleExceptionID := 5166}
  handleExceptionBegin
  Result := AObj.WidgetHandle;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// property
function TChromiumCore_RenderHandle(AObj: TChromiumCore): THandle; extdecl;
begin
  {$define handleExceptionID := 5167}
  handleExceptionBegin
  Result := AObj.RenderHandle;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TChromiumCore_FrameIsFocused(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5168}
  handleExceptionBegin
  Result := AObj.FrameIsFocused;
  handleExceptionEnd
end;

// property
function TChromiumCore_Initialized(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5169}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_RequestContextCache(AObj: TChromiumCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5170}
  handleExceptionBegin
  StringBufferCreate(AObj.RequestContextCache, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_RequestContextIsGlobal(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionID := 5171}
  handleExceptionBegin
  Result := AObj.RequestContextIsGlobal;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_DocumentURL(AObj: TChromiumCore; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5172}
  handleExceptionBegin
  StringBufferCreate(AObj.DocumentURL, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ZoomLevel(ASet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 5173}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomLevel := AValue
  end else
    Result := AObj.ZoomLevel;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_ZoomPct(ASet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 5174}
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
  {$define handleExceptionID := 5175}
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
  {$define handleExceptionID := 5176}
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
  {$define handleExceptionID := 5177}
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
  {$define handleExceptionID := 5178}
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
  {$define handleExceptionID := 5179}
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
  {$define handleExceptionID := 5180}
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
  {$define handleExceptionID := 5181}
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
  {$define handleExceptionID := 5182}
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
  {$define handleExceptionID := 5183}
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
  {$define handleExceptionID := 5184}
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
  {$define handleExceptionID := 5185}
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
  {$define handleExceptionID := 5186}
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
  {$define handleExceptionID := 5187}
  handleExceptionBegin
  Result := AObj.HasValidMainFrame;
  handleExceptionEnd
end;

// property
function TChromiumCore_FrameCount(AObj: TChromiumCore): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 5188}
  handleExceptionBegin
  Result := AObj.FrameCount;
  handleExceptionEnd
end;

// property
function TChromiumCore_DragOperations(ASet: LongBool; AObj: TChromiumCore; AValue: TCefDragOperations): TCefDragOperations; extdecl;
begin
  {$define handleExceptionID := 5189}
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
  {$define handleExceptionID := 5190}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AudioMuted := AValue
  end else
    Result := AObj.AudioMuted;
  handleExceptionEnd
end;

// property
function TChromiumCore_SafeSearch(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5191}
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
  {$define handleExceptionID := 5192}
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
  {$define handleExceptionID := 5193}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrintingEnabled := AValue
  end else
    Result := AObj.PrintingEnabled;
  handleExceptionEnd
end;

// property
procedure TChromiumCore_AcceptLanguageList(ASet: LongBool; AObj: TChromiumCore; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5194}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AcceptLanguageList := AValue
  end else
    StringBufferCreate(AObj.AcceptLanguageList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumCore_AcceptCookies(ASet: LongBool; AObj: TChromiumCore; AValue: TCefCookiePref): TCefCookiePref; extdecl;
begin
  {$define handleExceptionID := 5195}
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
  {$define handleExceptionID := 5196}
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
  {$define handleExceptionID := 5197}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiBrowserMode := AValue
  end else
    Result := AObj.MultiBrowserMode;
  handleExceptionEnd
end;

// property
function TChromiumCore_DefaultWindowInfoExStyle(ASet: LongBool; AObj: TChromiumCore; AValue: DWORD): DWORD; extdecl;
begin
  {$define handleExceptionID := 5198}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultWindowInfoExStyle := AValue
  end else
    Result := AObj.DefaultWindowInfoExStyle;
  handleExceptionEnd
end;

// property
function TChromiumCore_Offline(ASet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5199}
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
  {$define handleExceptionID := 5200}
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
  {$define handleExceptionID := 5201}
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
  {$define handleExceptionID := 5202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoadImagesAutomatically := AValue
  end else
    Result := AObj.LoadImagesAutomatically;
  handleExceptionEnd
end;

// property
function TChromiumCore_BatterySaverModeState(ASet: LongBool; AObj: TChromiumCore; AValue: TCefBatterySaverModeState): TCefBatterySaverModeState; extdecl;
begin
  {$define handleExceptionID := 5203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BatterySaverModeState := AValue
  end else
    Result := AObj.BatterySaverModeState;
  handleExceptionEnd
end;

// property
function TChromiumCore_HighEfficiencyMode(ASet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 5204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HighEfficiencyMode := AValue
  end else
    Result := AObj.HighEfficiencyMode;
  handleExceptionEnd
end;

{$IFDEF LINUX}
// property
function TChromiumCore_XDisplay(AObj: TChromiumCore): Pointer; extdecl;
begin
  {$define handleExceptionID := 5205}
  handleExceptionBegin
  Result := AObj.XDisplay;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TChromiumCore_WebRTCIPHandlingPolicy(ASet: LongBool; AObj: TChromiumCore; AValue: TCefWebRTCHandlingPolicy): TCefWebRTCHandlingPolicy; extdecl;
begin
  {$define handleExceptionID := 5206}
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
  {$define handleExceptionID := 5207}
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
  {$define handleExceptionID := 5208}
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
  {$define handleExceptionID := 5209}
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
  {$define handleExceptionID := 5210}
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
  {$define handleExceptionID := 5211}
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
  {$define handleExceptionID := 5212}
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
  {$define handleExceptionID := 5213}
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
  {$define handleExceptionID := 5214}
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
  {$define handleExceptionID := 5215}
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
  {$define handleExceptionID := 5216}
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
  {$define handleExceptionID := 5217}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxConnectionsPerProxy := AValue
  end else
    Result := AObj.MaxConnectionsPerProxy;
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
procedure TChromiumCore_OnWidgetCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCompMsgEvent}
  {$DEFINE EventName := OnWidgetCompMsg}
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

// event
procedure TChromiumCore_OnExtensionLoadFailed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnExtensionLoadFailedEvent}
  {$DEFINE EventName := OnExtensionLoadFailed}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionLoaded(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnExtensionLoadedEvent}
  {$DEFINE EventName := OnExtensionLoaded}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionUnloaded(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnExtensionUnloadedEvent}
  {$DEFINE EventName := OnExtensionUnloaded}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionBeforeBackgroundBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeBackgroundBrowserEvent}
  {$DEFINE EventName := OnExtensionBeforeBackgroundBrowser}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionBeforeBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnBeforeBrowserEvent}
  {$DEFINE EventName := OnExtensionBeforeBrowser}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionGetActiveBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetActiveBrowserEvent}
  {$DEFINE EventName := OnExtensionGetActiveBrowser}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionCanAccessBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnCanAccessBrowserEvent}
  {$DEFINE EventName := OnExtensionCanAccessBrowser}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnExtensionGetExtensionResource(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetExtensionResourceEvent}
  {$DEFINE EventName := OnExtensionGetExtensionResource}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrintStart(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintStartEvent}
  {$DEFINE EventName := OnPrintStart}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrintSettings(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintSettingsEvent}
  {$DEFINE EventName := OnPrintSettings}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrintDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintDialogEvent}
  {$DEFINE EventName := OnPrintDialog}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrintJob(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintJobEvent}
  {$DEFINE EventName := OnPrintJob}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnPrintReset(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnPrintResetEvent}
  {$DEFINE EventName := OnPrintReset}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnGetPDFPaperSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnGetPDFPaperSizeEvent}
  {$DEFINE EventName := OnGetPDFPaperSize}
  CEFEventMethodCode
end;

// event
procedure TChromiumCore_OnFrameCreated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumCore_TOnFrameCreated}
  {$DEFINE EventName := OnFrameCreated}
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

exports
  TChromiumCore_Create,
  TChromiumCore_CreateClientHandlerWithBool,
  TChromiumCore_CreateClientHandlerWithClientBool,
  TChromiumCore_TryCloseBrowser,
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
  TChromiumCore_CreateUrlRequestWithRequestUClientStr,
  TChromiumCore_CreateUrlRequestWithRequestUClientFrame,
  TChromiumCore_CreateUrlRequestWithRequestUClientInt64,
  TChromiumCore_AddObserver,
  TChromiumCore_GetSource,
  TChromiumCore_LoadExtension,
  TChromiumCore_DidLoadExtension,
  TChromiumCore_HasExtension,
  TChromiumCore_GetExtensions,
  TChromiumCore_GetExtension,
  TChromiumCore_CloseBrowser,
  TChromiumCore_CloseAllBrowsers,
{$IFDEF MSWINDOWS}
  TChromiumCore_InitializeDragAndDrop,
{$ENDIF MSWINDOWS}
{$IFDEF MSWINDOWS}
  TChromiumCore_ShutdownDragAndDrop,
{$ENDIF MSWINDOWS}
  TChromiumCore_LoadURLWithStrX2,
  TChromiumCore_LoadURLWithStrFrame,
  TChromiumCore_LoadURLWithStrInt64,
  TChromiumCore_LoadStringWithStrX2,
  TChromiumCore_LoadStringWithStrFrame,
  TChromiumCore_LoadStringWithStrInt64,
  TChromiumCore_LoadResourceWithCMStreamStrX3,
  TChromiumCore_LoadResourceWithCMStreamStrX2Frame,
  TChromiumCore_LoadResourceWithCMStreamStrX2Int64,
  TChromiumCore_LoadRequest,
  TChromiumCore_GoBack,
  TChromiumCore_GoForward,
  TChromiumCore_Reload,
  TChromiumCore_ReloadIgnoreCache,
  TChromiumCore_StopLoad,
  TChromiumCore_StartDownload,
  TChromiumCore_DownloadImage,
  TChromiumCore_SimulateMouseWheel,
  TChromiumCore_RetrieveHTMLWithStr,
  TChromiumCore_RetrieveHTMLWithFrame,
  TChromiumCore_RetrieveHTMLWithInt64,
  TChromiumCore_RetrieveTextWithStr,
  TChromiumCore_RetrieveTextWithFrame,
  TChromiumCore_RetrieveTextWithInt64,
  TChromiumCore_GetNavigationEntries,
  TChromiumCore_ExecuteJavaScriptWithStrX3Int,
  TChromiumCore_ExecuteJavaScriptWithStrX2FrameInt,
  TChromiumCore_ExecuteJavaScriptWithStrX2Int64Int,
  TChromiumCore_UpdatePreferences,
  TChromiumCore_SavePreferences,
  TChromiumCore_ResolveHost,
  TChromiumCore_SetUserAgentOverride,
  TChromiumCore_ClearDataForOrigin,
  TChromiumCore_ClearCache,
  TChromiumCore_ToggleAudioMuted,
  TChromiumCore_ShowDevTools,
  TChromiumCore_CloseDevTools,
  TChromiumCore_CloseDevToolsWithWindowHandle,
  TChromiumCore_Find,
  TChromiumCore_StopFinding,
  TChromiumCore_Print,
  TChromiumCore_PrintToPDF,
  TChromiumCore_ClipboardCopy,
  TChromiumCore_ClipboardPaste,
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
  TChromiumCore_WasResized,
  TChromiumCore_WasHidden,
  TChromiumCore_NotifyScreenInfoChanged,
  TChromiumCore_NotifyMoveOrResizeStarted,
  TChromiumCore_Invalidate,
  TChromiumCore_SendExternalBeginFrame,
  TChromiumCore_SendKeyEvent,
  TChromiumCore_SendMouseClickEvent,
  TChromiumCore_SendMouseMoveEvent,
  TChromiumCore_SendMouseWheelEvent,
  TChromiumCore_SendTouchEvent,
  TChromiumCore_SendCaptureLostEvent,
  TChromiumCore_SendProcessMessageWithPIdPMessageStr,
  TChromiumCore_SendProcessMessageWithPIdPMessageFrame,
  TChromiumCore_SendProcessMessageWithPIdPMessageInt64,
  TChromiumCore_SetFocus,
  TChromiumCore_SetAccessibilityState,
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
  TChromiumCore_RequestContext,
  TChromiumCore_MediaRouter,
  TChromiumCore_MediaObserver,
  TChromiumCore_MediaObserverReg,
  TChromiumCore_DevToolsMsgObserver,
  TChromiumCore_DevToolsMsgObserverReg,
  TChromiumCore_ExtensionHandler,
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
{$IFDEF MSWINDOWS}
  TChromiumCore_BrowserHandle,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TChromiumCore_WidgetHandle,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TChromiumCore_RenderHandle,
{$ENDIF}
  TChromiumCore_FrameIsFocused,
  TChromiumCore_Initialized,
  TChromiumCore_RequestContextCache,
  TChromiumCore_RequestContextIsGlobal,
  TChromiumCore_DocumentURL,
  TChromiumCore_ZoomLevel,
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
  TChromiumCore_SafeSearch,
  TChromiumCore_YouTubeRestrict,
  TChromiumCore_PrintingEnabled,
  TChromiumCore_AcceptLanguageList,
  TChromiumCore_AcceptCookies,
  TChromiumCore_Block3rdPartyCookies,
  TChromiumCore_MultiBrowserMode,
  TChromiumCore_DefaultWindowInfoExStyle,
  TChromiumCore_Offline,
  TChromiumCore_QuicAllowed,
  TChromiumCore_JavascriptEnabled,
  TChromiumCore_LoadImagesAutomatically,
  TChromiumCore_BatterySaverModeState,
  TChromiumCore_HighEfficiencyMode,
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
  TChromiumCore_OnExecuteTaskOnCefThread,
  TChromiumCore_OnCookiesVisited,
  TChromiumCore_OnCookieVisitorDestroyed,
  TChromiumCore_OnCookieSet,
  TChromiumCore_OnZoomPctAvailable,
  TChromiumCore_OnMediaRouteCreateFinished,
  TChromiumCore_OnMediaSinkDeviceInfo,
{$IFDEF MSWINDOWS}
  TChromiumCore_OnBrowserCompMsg,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TChromiumCore_OnWidgetCompMsg,
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
  TChromiumCore_OnCanDownload,
  TChromiumCore_OnBeforeDownload,
  TChromiumCore_OnDownloadUpdated,
  TChromiumCore_OnJsdialog,
  TChromiumCore_OnBeforeUnloadDialog,
  TChromiumCore_OnResetDialogState,
  TChromiumCore_OnDialogClosed,
  TChromiumCore_OnBeforePopup,
  TChromiumCore_OnAfterCreated,
  TChromiumCore_OnBeforeClose,
  TChromiumCore_OnClose,
  TChromiumCore_OnBeforeBrowse,
  TChromiumCore_OnOpenUrlFromTab,
  TChromiumCore_OnGetAuthCredentials,
  TChromiumCore_OnCertificateError,
  TChromiumCore_OnSelectClientCertificate,
  TChromiumCore_OnRenderViewReady,
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
  TChromiumCore_OnExtensionLoadFailed,
  TChromiumCore_OnExtensionLoaded,
  TChromiumCore_OnExtensionUnloaded,
  TChromiumCore_OnExtensionBeforeBackgroundBrowser,
  TChromiumCore_OnExtensionBeforeBrowser,
  TChromiumCore_OnExtensionGetActiveBrowser,
  TChromiumCore_OnExtensionCanAccessBrowser,
  TChromiumCore_OnExtensionGetExtensionResource,
  TChromiumCore_OnPrintStart,
  TChromiumCore_OnPrintSettings,
  TChromiumCore_OnPrintDialog,
  TChromiumCore_OnPrintJob,
  TChromiumCore_OnPrintReset,
  TChromiumCore_OnGetPDFPaperSize,
  TChromiumCore_OnFrameCreated,
  TChromiumCore_OnFrameAttached,
  TChromiumCore_OnFrameDetached,
  TChromiumCore_OnMainFrameChanged,
  TChromiumCore_OnChromeCommand,
  TChromiumCore_OnRequestMediaAccessPermission,
  TChromiumCore_OnShowPermissionPrompt,
  TChromiumCore_OnDismissPermissionPrompt;