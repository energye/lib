
//constructor
function WkWebview_Create(aOwner: TComponent): TWkWebview; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebview.Create(aOwner);
  handleExceptionEnd
end;

//property
function WkWebview_WebView(AObj: TWkWebview): WebKitWebView; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WebView;
  handleExceptionEnd
end;

//function
function WkWebview_CanGoBack(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

//function
function WkWebview_CanGoForward(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

//function
function WkWebview_IsLoading(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

//function
function WkWebview_GetTitle(AObj: TWkWebview): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTitle());
  handleExceptionEnd
end;

//function
procedure WkWebview_CookieManager(AObj: TWkWebview; var Result: TWkCookieManager); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CookieManager();
  handleExceptionEnd
end;

//function
procedure WkWebview_GetSettings(AObj: TWkWebview; var Result: TWkSettings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSettings();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_CreateBrowser(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.CreateBrowser();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_GoBack(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_GoForward(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_Reload(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_Stop(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.Stop();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_StartDrag(AObj: TWkWebview; aFormWindow: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.StartDrag(aFormWindow);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_TerminateWebProcess(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.TerminateWebProcess();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_TryClose(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.TryClose();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_ExecuteScript(AObj: TWkWebview; const aScript: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteScript(aScript);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_LoadHTML(AObj: TWkWebview; const aHTML: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadHTML(aHTML);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_LoadURL(AObj: TWkWebview; const aURL: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadURL(aURL);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_EnabledDevtools(AObj: TWkWebview; enabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EnabledDevtools(enabled);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_ShowDevtools(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDevtools();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_RegisterScriptCode(AObj: TWkWebview; scriptCode: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RegisterScriptCode(scriptCode);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_RegisterScriptMessageHandler(AObj: TWkWebview; aName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RegisterScriptMessageHandler(aName);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetSettings(AObj: TWkWebview; aSetting: TWkSettings); extdecl;
begin
  handleExceptionBegin
  AObj.SetSettings(aSetting);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_FreeWebview(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.FreeWebview();
  handleExceptionEnd
end;

//property event
procedure WkWebview_SetOnLoadChange(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnLoadChange}
  {$DEFINE EventName := OnLoadChange}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnExecuteScriptFinished(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnExecuteScriptFinished}
  {$DEFINE EventName := OnExecuteScriptFinished}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnLoadFailed(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnLoadFailed}
  {$DEFINE EventName := OnLoadFailed}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnURISchemeRequest(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnURISchemeRequest}
  {$DEFINE EventName := OnURISchemeRequest}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnProcessMessage(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnProcessMessage}
  {$DEFINE EventName := OnProcessMessage}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnMousePress(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnMousePress}
  {$DEFINE EventName := OnMousePress}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnMouseRelease(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnMouseRelease}
  {$DEFINE EventName := OnMouseRelease}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnGetAcceptPolicyFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnGetAcceptPolicyFinish}
  {$DEFINE EventName := OnGetAcceptPolicyFinish}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnAddCookieFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnAddCookieFinish}
  {$DEFINE EventName := OnAddCookieFinish}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnGetCookiesFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnGetCookiesFinish}
  {$DEFINE EventName := OnGetCookiesFinish}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDeleteCookieFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDeleteCookieFinish}
  {$DEFINE EventName := OnDeleteCookieFinish}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDecidePolicy(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDecidePolicy}
  {$DEFINE EventName := OnDecidePolicy}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnWebProcessTerminated(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnWebProcessTerminated}
  {$DEFINE EventName := OnWebProcessTerminated}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnContextMenu(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnContextMenu}
  {$DEFINE EventName := OnContextMenu}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnContextMenuCommand(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnContextMenuCommand}
  {$DEFINE EventName := OnContextMenuCommand}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnContextMenuDismissed(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnContextMenuDismissed}
  {$DEFINE EventName := OnContextMenuDismissed}
  WKEventMethodCode
end;

procedure WkWebview_AsCookieManagerDelegate(AObj: TWkWebview; out Result: IWkCookieManagerDelegateEvent); extdecl;
begin
  Result := AObj.AsCookieManagerDelegate();
end;

procedure WkWebview_AsSchemeRequestDelegate(AObj: TWkWebview; out Result: IWkSchemeRequestDelegateEvent); extdecl;
begin
  Result := AObj.AsSchemeRequestDelegate();
end;

exports
  WkWebview_Create,
  WkWebview_WebView,
  WkWebview_CanGoBack,
  WkWebview_CanGoForward,
  WkWebview_IsLoading,
  WkWebview_GetTitle,
  WkWebview_CookieManager,
  WkWebview_GetSettings,
  WkWebview_CreateBrowser,
  WkWebview_GoBack,
  WkWebview_GoForward,
  WkWebview_Reload,
  WkWebview_Stop,
  WkWebview_StartDrag,
  WkWebview_TerminateWebProcess,
  WkWebview_TryClose,
  WkWebview_ExecuteScript,
  WkWebview_LoadHTML,
  WkWebview_LoadURL,
  WkWebview_EnabledDevtools,
  WkWebview_ShowDevtools,
  WkWebview_RegisterScriptCode,
  WkWebview_RegisterScriptMessageHandler,
  WkWebview_SetSettings,
  WkWebview_FreeWebview,
  WkWebview_SetOnLoadChange,
  WkWebview_SetOnExecuteScriptFinished,
  WkWebview_SetOnLoadFailed,
  WkWebview_SetOnURISchemeRequest,
  WkWebview_SetOnProcessMessage,
  WkWebview_SetOnMousePress,
  WkWebview_SetOnMouseRelease,
  WkWebview_SetOnGetAcceptPolicyFinish,
  WkWebview_SetOnAddCookieFinish,
  WkWebview_SetOnGetCookiesFinish,
  WkWebview_SetOnDeleteCookieFinish,
  WkWebview_SetOnDecidePolicy,
  WkWebview_SetOnWebProcessTerminated,
  WkWebview_SetOnContextMenu,
  WkWebview_SetOnContextMenuCommand,
  WkWebview_SetOnContextMenuDismissed,
  WkWebview_AsCookieManagerDelegate,
  WkWebview_AsSchemeRequestDelegate;
