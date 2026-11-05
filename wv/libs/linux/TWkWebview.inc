// constructor
function TWkWebview_Create(AOwner: TComponent; out IntfWkCookieManagerDelegateEvent: IWkCookieManagerDelegateEvent; out IntfWkSchemeRequestDelegateEvent: IWkSchemeRequestDelegateEvent): TWkWebview; extdecl;
begin
  {$define handleExceptionID := 3600}
  handleExceptionBegin
  Result := TWkWebview.Create(AOwner);
  IntfWkCookieManagerDelegateEvent := Result as IWkCookieManagerDelegateEvent;
  IntfWkSchemeRequestDelegateEvent := Result as IWkSchemeRequestDelegateEvent;
  handleExceptionEnd
end;

// function
function TWkWebview_CanGoBack(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3601}
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

// function
function TWkWebview_CanGoForward(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3602}
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

// function
function TWkWebview_IsLoading(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3603}
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

// function
procedure TWkWebview_GetTitle(AObj: TWkWebview;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3604}
  handleExceptionBegin
  StringBufferCreate(AObj.GetTitle(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkWebview_GetURI(AObj: TWkWebview;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3605}
  handleExceptionBegin
  StringBufferCreate(AObj.GetURI(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkWebview_CookieManager(AObj: TWkWebview): TWkCookieManager; extdecl;
begin
  {$define handleExceptionID := 3606}
  handleExceptionBegin
  Result := AObj.CookieManager();
  handleExceptionEnd
end;

// function
function TWkWebview_GetSettings(AObj: TWkWebview): TWkSettings; extdecl;
begin
  {$define handleExceptionID := 3607}
  handleExceptionBegin
  Result := AObj.GetSettings();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsCookieManagerDelegate(AObj: TWkWebview; var Result: IWkCookieManagerDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3608}
  handleExceptionBegin
  Result := AObj.AsCookieManagerDelegate();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsSchemeRequestDelegate(AObj: TWkWebview; var Result: IWkSchemeRequestDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3609}
  handleExceptionBegin
  Result := AObj.AsSchemeRequestDelegate();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_CreateBrowser(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3610}
  handleExceptionBegin
  AObj.CreateBrowser();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_GoBack(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3611}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_GoForward(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3612}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_Reload(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3613}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_Stop(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3614}
  handleExceptionBegin
  AObj.Stop();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_StartDrag(AObj: TWkWebview; aFormWindow: TWinControl); extdecl;
begin
  {$define handleExceptionID := 3615}
  handleExceptionBegin
  AObj.StartDrag(aFormWindow);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_TerminateWebProcess(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3616}
  handleExceptionBegin
  AObj.TerminateWebProcess();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_TryClose(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3617}
  handleExceptionBegin
  AObj.TryClose();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_ExecuteScript(AObj: TWkWebview; const AScript: PChar; aId: Integer); extdecl;
begin
  {$define handleExceptionID := 3618}
  handleExceptionBegin
  AObj.ExecuteScript(AScript, aId);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_LoadHTML(AObj: TWkWebview; const AHTML: PChar); extdecl;
begin
  {$define handleExceptionID := 3619}
  handleExceptionBegin
  AObj.LoadHTML(AHTML);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_LoadURL(AObj: TWkWebview; const AURL: PChar); extdecl;
begin
  {$define handleExceptionID := 3620}
  handleExceptionBegin
  AObj.LoadURL(AURL);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_EnabledDevtools(AObj: TWkWebview; aEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3621}
  handleExceptionBegin
  AObj.EnabledDevtools(aEnabled);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_ShowDevtools(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3622}
  handleExceptionBegin
  AObj.ShowDevtools();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_RegisterScriptCode(AObj: TWkWebview; scriptCode: PChar); extdecl;
begin
  {$define handleExceptionID := 3623}
  handleExceptionBegin
  AObj.RegisterScriptCode(scriptCode);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_RegisterScriptMessageHandler(AObj: TWkWebview; aName: PChar); extdecl;
begin
  {$define handleExceptionID := 3624}
  handleExceptionBegin
  AObj.RegisterScriptMessageHandler(aName);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetSettings(AObj: TWkWebview; aSetting: TWkSettings); extdecl;
begin
  {$define handleExceptionID := 3625}
  handleExceptionBegin
  AObj.SetSettings(aSetting);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_FreeWebview(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3626}
  handleExceptionBegin
  AObj.FreeWebview();
  handleExceptionEnd
end;

// property
function TWkWebview_WebView(AObj: TWkWebview): WebKitWebView; extdecl;
begin
  {$define handleExceptionID := 3627}
  handleExceptionBegin
  Result := AObj.WebView;
  handleExceptionEnd
end;

// event
procedure TWkWebview_OnLoadChange(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkLoadChangeEvent}
  {$DEFINE EventName := OnLoadChange}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnExecuteScriptFinished(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkExecuteScriptFinishedEvent}
  {$DEFINE EventName := OnExecuteScriptFinished}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnLoadFailed(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkLoadFailedEvent}
  {$DEFINE EventName := OnLoadFailed}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnURISchemeRequest(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkURISchemeRequestEvent}
  {$DEFINE EventName := OnURISchemeRequest}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnProcessMessage(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkProcessMessageEvent}
  {$DEFINE EventName := OnProcessMessage}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseMove(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseMove}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMousePress(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMousePress}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseRelease(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseRelease}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnGetAcceptPolicyFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkGetAcceptPolicyFinishEvent}
  {$DEFINE EventName := OnGetAcceptPolicyFinish}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnAddCookieFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkAddCookieFinishEvent}
  {$DEFINE EventName := OnAddCookieFinish}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnGetCookiesFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkGetCookiesFinishEvent}
  {$DEFINE EventName := OnGetCookiesFinish}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDeleteCookieFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkDeleteCookieFinishEvent}
  {$DEFINE EventName := OnDeleteCookieFinish}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDecidePolicy(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkDecidePolicyEvent}
  {$DEFINE EventName := OnDecidePolicy}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnWebProcessTerminated(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkWebProcessTerminatedEvent}
  {$DEFINE EventName := OnWebProcessTerminated}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnContextMenu(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkContextMenuEvent}
  {$DEFINE EventName := OnContextMenu}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnContextMenuCommand(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkContextMenuCommandEvent}
  {$DEFINE EventName := OnContextMenuCommand}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnContextMenuDismissed(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkContextMenuDismissedEvent}
  {$DEFINE EventName := OnContextMenuDismissed}
  WVEventMethodCode
end;

exports
  TWkWebview_Create,
  TWkWebview_CanGoBack,
  TWkWebview_CanGoForward,
  TWkWebview_IsLoading,
  TWkWebview_GetTitle,
  TWkWebview_GetURI,
  TWkWebview_CookieManager,
  TWkWebview_GetSettings,
  TWkWebview_AsCookieManagerDelegate,
  TWkWebview_AsSchemeRequestDelegate,
  TWkWebview_CreateBrowser,
  TWkWebview_GoBack,
  TWkWebview_GoForward,
  TWkWebview_Reload,
  TWkWebview_Stop,
  TWkWebview_StartDrag,
  TWkWebview_TerminateWebProcess,
  TWkWebview_TryClose,
  TWkWebview_ExecuteScript,
  TWkWebview_LoadHTML,
  TWkWebview_LoadURL,
  TWkWebview_EnabledDevtools,
  TWkWebview_ShowDevtools,
  TWkWebview_RegisterScriptCode,
  TWkWebview_RegisterScriptMessageHandler,
  TWkWebview_SetSettings,
  TWkWebview_FreeWebview,
  TWkWebview_WebView,
  TWkWebview_OnLoadChange,
  TWkWebview_OnExecuteScriptFinished,
  TWkWebview_OnLoadFailed,
  TWkWebview_OnURISchemeRequest,
  TWkWebview_OnProcessMessage,
  TWkWebview_OnMouseMove,
  TWkWebview_OnMousePress,
  TWkWebview_OnMouseRelease,
  TWkWebview_OnGetAcceptPolicyFinish,
  TWkWebview_OnAddCookieFinish,
  TWkWebview_OnGetCookiesFinish,
  TWkWebview_OnDeleteCookieFinish,
  TWkWebview_OnDecidePolicy,
  TWkWebview_OnWebProcessTerminated,
  TWkWebview_OnContextMenu,
  TWkWebview_OnContextMenuCommand,
  TWkWebview_OnContextMenuDismissed;