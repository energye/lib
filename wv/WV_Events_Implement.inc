//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

// Browser events
procedure TLCLEvent.OnTOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson), aExecutionID]);
end;

procedure TLCLEvent.OnTOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TLCLEvent.OnTOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aContents: IStream; aResourceID : integer);
begin
  SendEvent([Sender, aErrorCode, aContents, aResourceID]);
end;

procedure TLCLEvent.OnTOnGetCookiesCompletedEvent(Sender: TObject; aResult: HRESULT; const aCookieList: ICoreWebView2CookieList);
begin
  SendEvent([Sender, aResult, aCookieList]);
end;

procedure TLCLEvent.OnTOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
begin
  SendEvent([Sender, aErrorCode, aIsSuccessful]);
end;

procedure TLCLEvent.OnTOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
begin
  SendEvent([Sender, aErrorCode, aIsSuccessful]);
end;

procedure TLCLEvent.OnTOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aReturnObjectAsJson: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aReturnObjectAsJson), aExecutionID]);
end;

procedure TLCLEvent.OnTOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aID)]);
end;

procedure TLCLEvent.OnTOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TLCLEvent.OnTOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TLCLEvent.OnTOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
begin
  SendEvent([Sender, aEnvironment, aArgs]);
end;

procedure TLCLEvent.OnTOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
begin
  SendEvent([Sender, aWebView, aArgs, ToPChar(aEventName), aEventID]);
end;

procedure TLCLEvent.OnTOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TLCLEvent.OnTOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TLCLEvent.OnTOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TLCLEvent.OnTOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TLCLEvent.OnTOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TLCLEvent.OnTOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aErrorMessage)]);
end;

procedure TLCLEvent.OnTOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aPrintStatus: TWVPrintStatus);
begin
  SendEvent([Sender, aErrorCode, aPrintStatus]);
end;

procedure TLCLEvent.OnTOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson)]);
end;

procedure TLCLEvent.OnTOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aHTML)]);
end;

procedure TLCLEvent.OnTOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aText)]);
end;

procedure TLCLEvent.OnTOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aMHTML)]);
end;

procedure TLCLEvent.OnTOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TLCLEvent.OnTOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TLCLEvent.OnTOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TLCLEvent.OnTOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TLCLEvent.OnTOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TLCLEvent.OnTOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TLCLEvent.OnTOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TLCLEvent.OnTOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TLCLEvent.OnTOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  SendEvent([Sender, aEnvironment]);
end;

procedure TLCLEvent.OnTOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
begin
  SendEvent([Sender, aMenuItem]);
end;

procedure TLCLEvent.OnTOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender,aWebView]);
end;

procedure TLCLEvent.OnTOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TLCLEvent.OnTOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TLCLEvent.OnTOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TLCLEvent.OnTOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aFaviconStream: IStream);
begin
  SendEvent([Sender, aErrorCode, aFaviconStream]);
end;

procedure TLCLEvent.OnTOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aPdfStream: IStream);
begin
  SendEvent([Sender, aErrorCode, aPdfStream]);
end;

procedure TLCLEvent.OnTOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
var
  RetData, currentData: Pointer; // 数据指针
  RetSize: integer; // 数据个数
  idx, customSchemeInfoSizeOf: integer; // 遍历，和record大小
  rCustomScheme: RWVCustomSchemeInfo;// 在指针地址取值
begin
  SendEvent([Sender, @RetData, @RetSize]);
  if RetSize > 0 then
  begin
    customSchemeInfoSizeOf := SizeOf(RWVCustomSchemeInfo); // record大小
    SetLength(aCustomSchemes, RetSize); // 初始化数组大小
    for idx := 0 to RetSize - 1 do
    begin
      currentData := RetData + customSchemeInfoSizeOf * idx; // 当前数据指针
      rCustomScheme := PRWVCustomSchemeInfo(currentData)^; // 取出数据转成自定义URL协议record
      // 设置值
      aCustomSchemes[idx].SchemeName := UTF8Decode(string(rCustomScheme.SchemeName));
      aCustomSchemes[idx].TreatAsSecure := boolean(rCustomScheme.TreatAsSecure);
      aCustomSchemes[idx].AllowedDomains := UTF8Decode(string(rCustomScheme.AllowedDomains));
      aCustomSchemes[idx].HasAuthorityComponent := boolean(rCustomScheme.HasAuthorityComponent);
    end;
  end;
end;

procedure TLCLEvent.OnTOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aCollectionView: ICoreWebView2PermissionSettingCollectionView);
begin
  SendEvent([Sender, aErrorCode, aCollectionView]);
end;

procedure TLCLEvent.OnTOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TLCLEvent.OnTOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TLCLEvent.OnTOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aValue: ICoreWebView2ProcessExtendedInfoCollection);
begin
  SendEvent([Sender, aErrorCode, aValue]);
end;

procedure TLCLEvent.OnTOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TLCLEvent.OnTOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TLCLEvent.OnTOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extension: ICoreWebView2BrowserExtension);
begin
  SendEvent([Sender, aErrorCode, extension]);
end;

procedure TLCLEvent.OnTOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extensionList: ICoreWebView2BrowserExtensionList);
begin
  SendEvent([Sender, aErrorCode, extensionList]);
end;

procedure TLCLEvent.OnTOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
begin
  SendEvent([Sender, aProfile]);
end;

procedure TLCLEvent.OnTOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const result_: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);
begin
  SendEvent([Sender, errorCode, result_, aExecutionID]);
end;

// Custom events
procedure TLCLEvent.OnTOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
begin
  SendEvent([Sender, @aMessage, @aHandled]);
end;
