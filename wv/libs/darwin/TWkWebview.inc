// constructor
function TWkWebview_Create(AOwner: TComponent; out IntfReceiveScriptMessageDelegateEvent: IReceiveScriptMessageDelegateEvent; out IntfWKNavigationDelegateEvent: IWKNavigationDelegateEvent; out IntfWKURLSchemeHandlerDelegateEvent: IWKURLSchemeHandlerDelegateEvent; out IntfWKUIDelegateEvent: IWKUIDelegateEvent; out IntfWKDownloadDelegateEvent: IWKDownloadDelegateEvent): TWkWebview; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TWkWebview.Create(AOwner);
  IntfReceiveScriptMessageDelegateEvent := Result as IReceiveScriptMessageDelegateEvent;
  IntfWKNavigationDelegateEvent := Result as IWKNavigationDelegateEvent;
  IntfWKURLSchemeHandlerDelegateEvent := Result as IWKURLSchemeHandlerDelegateEvent;
  IntfWKUIDelegateEvent := Result as IWKUIDelegateEvent;
  IntfWKDownloadDelegateEvent := Result as IWKDownloadDelegateEvent;
  handleExceptionEnd
end;

// function
function TWkWebview_Data(AObj: TWkWebview): WKWebView; extdecl;
begin
  {$define handleExceptionID := 3201}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkWebview_Configuration(AObj: TWkWebview): WKWebViewConfiguration; extdecl;
begin
  {$define handleExceptionID := 3202}
  handleExceptionBegin
  Result := AObj.Configuration();
  handleExceptionEnd
end;

// function
function TWkWebview_LoadRequest(AObj: TWkWebview; request: NSURLRequest): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 3203}
  handleExceptionBegin
  Result := AObj.LoadRequest(request);
  handleExceptionEnd
end;

// function
procedure TWkWebview_Title(AObj: TWkWebview;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3204}
  handleExceptionBegin
  StringBufferCreate(AObj.Title(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkWebview_URL(AObj: TWkWebview): NSURL; extdecl;
begin
  {$define handleExceptionID := 3205}
  handleExceptionBegin
  Result := AObj.URL();
  handleExceptionEnd
end;

// function
function TWkWebview_IsLoading(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3206}
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

// function
procedure TWkWebview_EstimatedProgress(AObj: TWkWebview; var Result: double); extdecl;
begin
  {$define handleExceptionID := 3207}
  handleExceptionBegin
  Result := AObj.EstimatedProgress();
  handleExceptionEnd
end;

// function
function TWkWebview_HasOnlySecureContent(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3208}
  handleExceptionBegin
  Result := AObj.HasOnlySecureContent();
  handleExceptionEnd
end;

// function
function TWkWebview_CanGoBack(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3209}
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

// function
function TWkWebview_CanGoForward(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3210}
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

// function
function TWkWebview_GoBack(AObj: TWkWebview): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 3211}
  handleExceptionBegin
  Result := AObj.GoBack();
  handleExceptionEnd
end;

// function
function TWkWebview_GoForward(AObj: TWkWebview): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 3212}
  handleExceptionBegin
  Result := AObj.GoForward();
  handleExceptionEnd
end;

// function
function TWkWebview_Reload(AObj: TWkWebview): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 3213}
  handleExceptionBegin
  Result := AObj.Reload();
  handleExceptionEnd
end;

// function
function TWkWebview_ReloadFromOrigin(AObj: TWkWebview): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 3214}
  handleExceptionBegin
  Result := AObj.ReloadFromOrigin();
  handleExceptionEnd
end;

// function
function TWkWebview_AllowsBackForwardNavigationGestures(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3215}
  handleExceptionBegin
  Result := AObj.AllowsBackForwardNavigationGestures();
  handleExceptionEnd
end;

// function
function TWkWebview_AllowsMagnification(AObj: TWkWebview): LongBool; extdecl;
begin
  {$define handleExceptionID := 3216}
  handleExceptionBegin
  Result := AObj.AllowsMagnification();
  handleExceptionEnd
end;

// function
procedure TWkWebview_Magnification(AObj: TWkWebview; var Result: double); extdecl;
begin
  {$define handleExceptionID := 3217}
  handleExceptionBegin
  Result := AObj.Magnification();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsReceiveScriptMessageDelegate(AObj: TWkWebview; var Result: IReceiveScriptMessageDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3218}
  handleExceptionBegin
  Result := AObj.AsReceiveScriptMessageDelegate();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsWKNavigationDelegate(AObj: TWkWebview; var Result: IWKNavigationDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3219}
  handleExceptionBegin
  Result := AObj.AsWKNavigationDelegate();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsWKURLSchemeHandlerDelegate(AObj: TWkWebview; var Result: IWKURLSchemeHandlerDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3220}
  handleExceptionBegin
  Result := AObj.AsWKURLSchemeHandlerDelegate();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsWKUIDelegate(AObj: TWkWebview; var Result: IWKUIDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3221}
  handleExceptionBegin
  Result := AObj.AsWKUIDelegate();
  handleExceptionEnd
end;

// function
procedure TWkWebview_AsWKDownloadDelegate(AObj: TWkWebview; var Result: IWKDownloadDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3222}
  handleExceptionBegin
  Result := AObj.AsWKDownloadDelegate();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_Release(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3223}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetAcceptsMouseMovedEvents(AObj: TWkWebview; v: LongBool); extdecl;
begin
  {$define handleExceptionID := 3224}
  handleExceptionBegin
  AObj.SetAcceptsMouseMovedEvents(v);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_LoadHTML(AObj: TWkWebview; AHtml: PChar; ABaseURL: PChar); extdecl;
begin
  {$define handleExceptionID := 3225}
  handleExceptionBegin
  AObj.LoadHTML(AHtml, ABaseURL);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_LoadURL(AObj: TWkWebview; AURL: PChar); extdecl;
begin
  {$define handleExceptionID := 3226}
  handleExceptionBegin
  AObj.LoadURL(AURL);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetNavigationDelegate(AObj: TWkWebview; navigationDelegate: WKNavigationDelegate); extdecl;
begin
  {$define handleExceptionID := 3227}
  handleExceptionBegin
  AObj.SetNavigationDelegate(navigationDelegate);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetUIDelegate(AObj: TWkWebview; uiDelegate: WKUIDelegate); extdecl;
begin
  {$define handleExceptionID := 3228}
  handleExceptionBegin
  AObj.SetUIDelegate(uiDelegate);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_InitWithFrameConfiguration(AObj: TWkWebview; var AFrame: TRect; AConfiguration: WKWebViewConfiguration); extdecl;
begin
  {$define handleExceptionID := 3229}
  handleExceptionBegin
  AObj.InitWithFrameConfiguration(AFrame, AConfiguration);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_StopLoading(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3230}
  handleExceptionBegin
  AObj.StopLoading();
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_EvaluateJavaScript(AObj: TWkWebview; javaScriptString: PChar); extdecl;
begin
  {$define handleExceptionID := 3231}
  handleExceptionBegin
  AObj.EvaluateJavaScript(javaScriptString);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetAllowsBackForwardNavigationGestures(AObj: TWkWebview; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3232}
  handleExceptionBegin
  AObj.SetAllowsBackForwardNavigationGestures(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetAllowsMagnification(AObj: TWkWebview; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3233}
  handleExceptionBegin
  AObj.SetAllowsMagnification(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetMagnification(AObj: TWkWebview; var newValue: double); extdecl;
begin
  {$define handleExceptionID := 3234}
  handleExceptionBegin
  AObj.SetMagnification(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_SetMagnificationCenteredAtPoint(AObj: TWkWebview; var magnification_: double; var point: TPoint); extdecl;
begin
  {$define handleExceptionID := 3235}
  handleExceptionBegin
  AObj.SetMagnificationCenteredAtPoint(magnification_, point);
  handleExceptionEnd
end;

// procedure
procedure TWkWebview_RemoveFromSuperview(AObj: TWkWebview); extdecl;
begin
  {$define handleExceptionID := 3236}
  handleExceptionBegin
  AObj.RemoveFromSuperview();
  handleExceptionEnd
end;

// event
procedure TWkWebview_OnProcessMessage(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkProcessMessageEvent}
  {$DEFINE EventName := OnProcessMessage}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDecidePolicyForNavigationActionPreferences(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDecidePolicyForNavigationActionPreferences}
  {$DEFINE EventName := OnDecidePolicyForNavigationActionPreferences}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDecidePolicyForNavigationResponse(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDecidePolicyForNavigationResponse}
  {$DEFINE EventName := OnDecidePolicyForNavigationResponse}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnStartProvisionalNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkStartProvisionalNavigation}
  {$DEFINE EventName := OnStartProvisionalNavigation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnReceiveServerRedirectForProvisionalNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkReceiveServerRedirectForProvisionalNavigation}
  {$DEFINE EventName := OnReceiveServerRedirectForProvisionalNavigation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnFailProvisionalNavigationWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkFailProvisionalNavigationWithError}
  {$DEFINE EventName := OnFailProvisionalNavigationWithError}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnCommitNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkCommitNavigation}
  {$DEFINE EventName := OnCommitNavigation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnFinishNavigation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkFinishNavigation}
  {$DEFINE EventName := OnFinishNavigation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnFailNavigationWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkFailNavigationWithError}
  {$DEFINE EventName := OnFailNavigationWithError}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnWebContentProcessDidTerminate(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkWebContentProcessDidTerminate}
  {$DEFINE EventName := OnWebContentProcessDidTerminate}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnNavigationActionDidBecomeDownload(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkNavigationActionDidBecomeDownload}
  {$DEFINE EventName := OnNavigationActionDidBecomeDownload}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnNavigationResponseDidBecomeDownload(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkNavigationResponseDidBecomeDownload}
  {$DEFINE EventName := OnNavigationResponseDidBecomeDownload}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnStartURLSchemeTask(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKStartURLSchemeTask}
  {$DEFINE EventName := OnStartURLSchemeTask}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnStopURLSchemeTask(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKStopURLSchemeTask}
  {$DEFINE EventName := OnStopURLSchemeTask}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnCreateWebView(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKCreateWebView}
  {$DEFINE EventName := OnCreateWebView}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRunJavaScriptAlert(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKRunJavaScriptAlert}
  {$DEFINE EventName := OnRunJavaScriptAlert}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRunJavaScriptConfirmCompletion(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKRunJavaScriptConfirmCompletion}
  {$DEFINE EventName := OnRunJavaScriptConfirmCompletion}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRunJavaScriptTextInputCompletion(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKRunJavaScriptTextInputCompletion}
  {$DEFINE EventName := OnRunJavaScriptTextInputCompletion}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnWebViewDidClose(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKWebViewDidClose}
  {$DEFINE EventName := OnWebViewDidClose}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseDown(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseUp(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseMoved(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseMoved}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnMouseDragged(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnMouseDragged}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRightMouseDown(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnRightMouseDown}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRightMouseUp(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnRightMouseUp}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnRightMouseDragged(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnRightMouseDragged}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnOtherMouseDown(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnOtherMouseDown}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnOtherMouseUp(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnOtherMouseUp}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnOtherMouseDragged(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWkMouseEvent}
  {$DEFINE EventName := OnOtherMouseDragged}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDownloadCancelCompletionHandler(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDownloadCancelCompletionHandler}
  {$DEFINE EventName := OnDownloadCancelCompletionHandler}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDownloadDecideDestinationUsingResponseSuggestedFilename}
  {$DEFINE EventName := OnDownloadDecideDestinationUsingResponseSuggestedFilename}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDownloadWillPerformHTTPRedirectionNewRequest}
  {$DEFINE EventName := OnDownloadWillPerformHTTPRedirectionNewRequest}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDownloadFinish(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDownloadFinish}
  {$DEFINE EventName := OnDownloadFinish}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDownloadFailWithError(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDownloadFailWithError}
  {$DEFINE EventName := OnDownloadFailWithError}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDraggingEntered(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDraggingEntered}
  {$DEFINE EventName := OnDraggingEntered}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDraggingUpdated(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDraggingUpdated}
  {$DEFINE EventName := OnDraggingUpdated}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDraggingExited(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDraggingExited}
  {$DEFINE EventName := OnDraggingExited}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnPrepareForDragOperation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKPrepareForDragOperation}
  {$DEFINE EventName := OnPrepareForDragOperation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnPerformDragOperation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKPerformDragOperation}
  {$DEFINE EventName := OnPerformDragOperation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnConcludeDragOperation(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKConcludeDragOperation}
  {$DEFINE EventName := OnConcludeDragOperation}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnDraggingEnded(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKDraggingEnded}
  {$DEFINE EventName := OnDraggingEnded}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnWantsPeriodicDraggingUpdates(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKWantsPeriodicDraggingUpdates}
  {$DEFINE EventName := OnWantsPeriodicDraggingUpdates}
  WVEventMethodCode
end;

// event
procedure TWkWebview_OnUpdateDraggingItemsForDrag(AObj: TWkWebview; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWkWebview_TWKUpdateDraggingItemsForDrag}
  {$DEFINE EventName := OnUpdateDraggingItemsForDrag}
  WVEventMethodCode
end;

exports
  TWkWebview_Create,
  TWkWebview_Data,
  TWkWebview_Configuration,
  TWkWebview_LoadRequest,
  TWkWebview_Title,
  TWkWebview_URL,
  TWkWebview_IsLoading,
  TWkWebview_EstimatedProgress,
  TWkWebview_HasOnlySecureContent,
  TWkWebview_CanGoBack,
  TWkWebview_CanGoForward,
  TWkWebview_GoBack,
  TWkWebview_GoForward,
  TWkWebview_Reload,
  TWkWebview_ReloadFromOrigin,
  TWkWebview_AllowsBackForwardNavigationGestures,
  TWkWebview_AllowsMagnification,
  TWkWebview_Magnification,
  TWkWebview_AsReceiveScriptMessageDelegate,
  TWkWebview_AsWKNavigationDelegate,
  TWkWebview_AsWKURLSchemeHandlerDelegate,
  TWkWebview_AsWKUIDelegate,
  TWkWebview_AsWKDownloadDelegate,
  TWkWebview_Release,
  TWkWebview_SetAcceptsMouseMovedEvents,
  TWkWebview_LoadHTML,
  TWkWebview_LoadURL,
  TWkWebview_SetNavigationDelegate,
  TWkWebview_SetUIDelegate,
  TWkWebview_InitWithFrameConfiguration,
  TWkWebview_StopLoading,
  TWkWebview_EvaluateJavaScript,
  TWkWebview_SetAllowsBackForwardNavigationGestures,
  TWkWebview_SetAllowsMagnification,
  TWkWebview_SetMagnification,
  TWkWebview_SetMagnificationCenteredAtPoint,
  TWkWebview_RemoveFromSuperview,
  TWkWebview_OnProcessMessage,
  TWkWebview_OnDecidePolicyForNavigationActionPreferences,
  TWkWebview_OnDecidePolicyForNavigationResponse,
  TWkWebview_OnStartProvisionalNavigation,
  TWkWebview_OnReceiveServerRedirectForProvisionalNavigation,
  TWkWebview_OnFailProvisionalNavigationWithError,
  TWkWebview_OnCommitNavigation,
  TWkWebview_OnFinishNavigation,
  TWkWebview_OnFailNavigationWithError,
  TWkWebview_OnWebContentProcessDidTerminate,
  TWkWebview_OnNavigationActionDidBecomeDownload,
  TWkWebview_OnNavigationResponseDidBecomeDownload,
  TWkWebview_OnStartURLSchemeTask,
  TWkWebview_OnStopURLSchemeTask,
  TWkWebview_OnCreateWebView,
  TWkWebview_OnRunJavaScriptAlert,
  TWkWebview_OnRunJavaScriptConfirmCompletion,
  TWkWebview_OnRunJavaScriptTextInputCompletion,
  TWkWebview_OnWebViewDidClose,
  TWkWebview_OnMouseDown,
  TWkWebview_OnMouseUp,
  TWkWebview_OnMouseMoved,
  TWkWebview_OnMouseDragged,
  TWkWebview_OnRightMouseDown,
  TWkWebview_OnRightMouseUp,
  TWkWebview_OnRightMouseDragged,
  TWkWebview_OnOtherMouseDown,
  TWkWebview_OnOtherMouseUp,
  TWkWebview_OnOtherMouseDragged,
  TWkWebview_OnDownloadCancelCompletionHandler,
  TWkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename,
  TWkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest,
  TWkWebview_OnDownloadFinish,
  TWkWebview_OnDownloadFailWithError,
  TWkWebview_OnDraggingEntered,
  TWkWebview_OnDraggingUpdated,
  TWkWebview_OnDraggingExited,
  TWkWebview_OnPrepareForDragOperation,
  TWkWebview_OnPerformDragOperation,
  TWkWebview_OnConcludeDragOperation,
  TWkWebview_OnDraggingEnded,
  TWkWebview_OnWantsPeriodicDraggingUpdates,
  TWkWebview_OnUpdateDraggingItemsForDrag;