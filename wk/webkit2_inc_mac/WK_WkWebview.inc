
//constructor
function WkWebview_Create(aOwner: TComponent): TWkWebview; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebview.Create(aOwner);
  handleExceptionEnd
end;

//function
function WkWebview_Data(AObj: TWkWebview): WkWebview; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkWebview_Configuration(AObj: TWkWebview): WKWebViewConfiguration; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Configuration();
  handleExceptionEnd
end;

//function
function WkWebview_LoadRequest(AObj: TWkWebview; request: NSURLRequest): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LoadRequest(request);
  handleExceptionEnd
end;

//function
function WkWebview_Title(AObj: TWkWebview): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Title());
  handleExceptionEnd
end;

//function
function WkWebview_URL(AObj: TWkWebview): NSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.URL();
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
procedure WkWebview_EstimatedProgress(AObj: TWkWebview; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.EstimatedProgress();
  handleExceptionEnd
end;

//function
function WkWebview_HasOnlySecureContent(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasOnlySecureContent();
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
function WkWebview_GoBack(AObj: TWkWebview): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

//function
function WkWebview_GoForward(AObj: TWkWebview): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

//function
function WkWebview_Reload(AObj: TWkWebview): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Reload();
  handleExceptionEnd
end;

//function
function WkWebview_ReloadFromOrigin(AObj: TWkWebview): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReloadFromOrigin();
  handleExceptionEnd
end;

//function
function WkWebview_AllowsBackForwardNavigationGestures(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowsBackForwardNavigationGestures();
  handleExceptionEnd
end;

//function
function WkWebview_AllowsMagnification(AObj: TWkWebview): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowsMagnification();
  handleExceptionEnd
end;

//function
procedure WkWebview_Magnification(AObj: TWkWebview; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Magnification();
  handleExceptionEnd
end;

//function
procedure WkWebview_AsReceiveScriptMessageDelegate(AObj: TWkWebview; var Result: IReceiveScriptMessageDelegateEvent); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsReceiveScriptMessageDelegate();
  handleExceptionEnd
end;

//function
procedure WkWebview_AsWKNavigationDelegate(AObj: TWkWebview; var Result: IWKNavigationDelegateEvent); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsWKNavigationDelegate();
  handleExceptionEnd
end;

//function
procedure WkWebview_AsWKURLSchemeHandlerDelegate(AObj: TWkWebview; var Result: IWKURLSchemeHandlerDelegateEvent); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsWKURLSchemeHandlerDelegate();
  handleExceptionEnd
end;

//function
procedure WkWebview_AsWKUIDelegate(AObj: TWkWebview; var Result: IWKUIDelegateEvent); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsWKUIDelegate();
  handleExceptionEnd
end;

//function
procedure WkWebview_AsWKDownloadDelegate(AObj: TWkWebview; var Result: IWKDownloadDelegateEvent); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsWKDownloadDelegate();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_LoadHTML(AObj: TWkWebview; aHtml,  aBaseURL: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadHTML(aHtml,  aBaseURL);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_LoadURL(AObj: TWkWebview; aURL: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadURL(aURL);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetNavigationDelegate(AObj: TWkWebview; navigationDelegate: WKNavigationDelegate); extdecl;
begin
  handleExceptionBegin
  AObj.SetNavigationDelegate(navigationDelegate);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetUIDelegate(AObj: TWkWebview; uiDelegate: WKUIDelegate); extdecl;
begin
  handleExceptionBegin
  AObj.SetUIDelegate(uiDelegate);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_InitWithFrameConfiguration(AObj: TWkWebview; var aFrame: TRect; aConfiguration: WKWebViewConfiguration); extdecl;
begin
  handleExceptionBegin
  AObj.InitWithFrameConfiguration(aFrame, aConfiguration);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_StopLoading(AObj: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.StopLoading();
  handleExceptionEnd
end;

//procedure
procedure WkWebview_EvaluateJavaScript(AObj: TWkWebview; javaScriptString: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.EvaluateJavaScript(javaScriptString);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetAllowsBackForwardNavigationGestures(AObj: TWkWebview; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetAllowsBackForwardNavigationGestures(newValue);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetAllowsMagnification(AObj: TWkWebview; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetAllowsMagnification(newValue);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetMagnification(AObj: TWkWebview; var newValue: double); extdecl;
begin
  handleExceptionBegin
  AObj.SetMagnification(newValue);
  handleExceptionEnd
end;

//procedure
procedure WkWebview_SetMagnificationCenteredAtPoint(AObj: TWkWebview; var magnification: double; var point: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.SetMagnificationCenteredAtPoint(magnification, point);
  handleExceptionEnd
end;

//property event
procedure WkWebview_SetOnProcessMessage(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnProcessMessage}
  {$DEFINE EventName := OnProcessMessage}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDecidePolicyForNavigationActionPreferences(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDecidePolicyForNavigationActionPreferences}
  {$DEFINE EventName := OnDecidePolicyForNavigationActionPreferences}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDecidePolicyForNavigationResponse(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDecidePolicyForNavigationResponse}
  {$DEFINE EventName := OnDecidePolicyForNavigationResponse}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnStartProvisionalNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnStartProvisionalNavigation}
  {$DEFINE EventName := OnStartProvisionalNavigation}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnReceiveServerRedirectForProvisionalNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnReceiveServerRedirectForProvisionalNavigation}
  {$DEFINE EventName := OnReceiveServerRedirectForProvisionalNavigation}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnFailProvisionalNavigationWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnFailProvisionalNavigationWithError}
  {$DEFINE EventName := OnFailProvisionalNavigationWithError}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnCommitNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnCommitNavigation}
  {$DEFINE EventName := OnCommitNavigation}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnFinishNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnFinishNavigation}
  {$DEFINE EventName := OnFinishNavigation}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnFailNavigationWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnFailNavigationWithError}
  {$DEFINE EventName := OnFailNavigationWithError}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnWebContentProcessDidTerminate(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnWebContentProcessDidTerminate}
  {$DEFINE EventName := OnWebContentProcessDidTerminate}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnNavigationActionDidBecomeDownload(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnNavigationActionDidBecomeDownload}
  {$DEFINE EventName := OnNavigationActionDidBecomeDownload}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnNavigationResponseDidBecomeDownload(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnNavigationResponseDidBecomeDownload}
  {$DEFINE EventName := OnNavigationResponseDidBecomeDownload}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnStartURLSchemeTask(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnStartURLSchemeTask}
  {$DEFINE EventName := OnStartURLSchemeTask}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnStopURLSchemeTask(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnStopURLSchemeTask}
  {$DEFINE EventName := OnStopURLSchemeTask}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnCreateWebView(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnCreateWebView}
  {$DEFINE EventName := OnCreateWebView}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnRunJavaScriptAlert(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnRunJavaScriptAlert}
  {$DEFINE EventName := OnRunJavaScriptAlert}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnRunJavaScriptConfirmCompletion(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnRunJavaScriptConfirmCompletion}
  {$DEFINE EventName := OnRunJavaScriptConfirmCompletion}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnRunJavaScriptTextInputCompletion(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnRunJavaScriptTextInputCompletion}
  {$DEFINE EventName := OnRunJavaScriptTextInputCompletion}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnWebViewDidClose(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnWebViewDidClose}
  {$DEFINE EventName := OnWebViewDidClose}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDownloadCancelCompletionHandler(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDownloadCancelCompletionHandler}
  {$DEFINE EventName := OnDownloadCancelCompletionHandler}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDownloadDecideDestinationUsingResponseSuggestedFilename(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename}
  {$DEFINE EventName := OnDownloadDecideDestinationUsingResponseSuggestedFilename}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDownloadWillPerformHTTPRedirectionNewRequest(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest}
  {$DEFINE EventName := OnDownloadWillPerformHTTPRedirectionNewRequest}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDownloadFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDownloadFinish}
  {$DEFINE EventName := OnDownloadFinish}
  WKEventMethodCode
end;

//property event
procedure WkWebview_SetOnDownloadFailWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WkWebview_OnDownloadFailWithError}
  {$DEFINE EventName := OnDownloadFailWithError}
  WKEventMethodCode
end;


exports
  WkWebview_Create,
  WkWebview_Data,
  WkWebview_Configuration,
  WkWebview_LoadRequest,
  WkWebview_Title,
  WkWebview_URL,
  WkWebview_IsLoading,
  WkWebview_EstimatedProgress,
  WkWebview_HasOnlySecureContent,
  WkWebview_CanGoBack,
  WkWebview_CanGoForward,
  WkWebview_GoBack,
  WkWebview_GoForward,
  WkWebview_Reload,
  WkWebview_ReloadFromOrigin,
  WkWebview_AllowsBackForwardNavigationGestures,
  WkWebview_AllowsMagnification,
  WkWebview_Magnification,
  WkWebview_AsReceiveScriptMessageDelegate,
  WkWebview_AsWKNavigationDelegate,
  WkWebview_AsWKURLSchemeHandlerDelegate,
  WkWebview_AsWKUIDelegate,
  WkWebview_AsWKDownloadDelegate,
  WkWebview_LoadHTML,
  WkWebview_LoadURL,
  WkWebview_SetNavigationDelegate,
  WkWebview_SetUIDelegate,
  WkWebview_InitWithFrameConfiguration,
  WkWebview_StopLoading,
  WkWebview_EvaluateJavaScript,
  WkWebview_SetAllowsBackForwardNavigationGestures,
  WkWebview_SetAllowsMagnification,
  WkWebview_SetMagnification,
  WkWebview_SetMagnificationCenteredAtPoint,
  WkWebview_SetOnProcessMessage,
  WkWebview_SetOnDecidePolicyForNavigationActionPreferences,
  WkWebview_SetOnDecidePolicyForNavigationResponse,
  WkWebview_SetOnStartProvisionalNavigation,
  WkWebview_SetOnReceiveServerRedirectForProvisionalNavigation,
  WkWebview_SetOnFailProvisionalNavigationWithError,
  WkWebview_SetOnCommitNavigation,
  WkWebview_SetOnFinishNavigation,
  WkWebview_SetOnFailNavigationWithError,
  WkWebview_SetOnWebContentProcessDidTerminate,
  WkWebview_SetOnNavigationActionDidBecomeDownload,
  WkWebview_SetOnNavigationResponseDidBecomeDownload,
  WkWebview_SetOnStartURLSchemeTask,
  WkWebview_SetOnStopURLSchemeTask,
  WkWebview_SetOnCreateWebView,
  WkWebview_SetOnRunJavaScriptAlert,
  WkWebview_SetOnRunJavaScriptConfirmCompletion,
  WkWebview_SetOnRunJavaScriptTextInputCompletion,
  WkWebview_SetOnWebViewDidClose,
  WkWebview_SetOnDownloadCancelCompletionHandler,
  WkWebview_SetOnDownloadDecideDestinationUsingResponseSuggestedFilename,
  WkWebview_SetOnDownloadWillPerformHTTPRedirectionNewRequest,
  WkWebview_SetOnDownloadFinish,
  WkWebview_SetOnDownloadFailWithError;