//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

// Browser events
procedure OnTOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
procedure OnTOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
procedure OnTOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aContents: IStream; aResourceID : integer);
procedure OnTOnGetCookiesCompletedEvent(Sender: TObject; aResult: HRESULT; const aCookieList: ICoreWebView2CookieList);
procedure OnTOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
procedure OnTOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
procedure OnTOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aReturnObjectAsJson: wvstring; aExecutionID: integer);
procedure OnTOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aID: wvstring);
procedure OnTOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
procedure OnTOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
procedure OnTOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
procedure OnTOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
procedure OnTOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
procedure OnTOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
procedure OnTOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
procedure OnTOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
procedure OnTOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
procedure OnTOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
procedure OnTOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
procedure OnTOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
procedure OnTOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
procedure OnTOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
procedure OnTOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
procedure OnTOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
procedure OnTOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
procedure OnTOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
procedure OnTOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
procedure OnTOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
procedure OnTOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
procedure OnTOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
procedure OnTOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
procedure OnTOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
procedure OnTOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
procedure OnTOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aPrintStatus: TWVPrintStatus);
procedure OnTOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
procedure OnTOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
procedure OnTOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
procedure OnTOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
procedure OnTOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
procedure OnTOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
procedure OnTOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
procedure OnTOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
procedure OnTOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
procedure OnTOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
procedure OnTOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
procedure OnTOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
procedure OnTOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
procedure OnTOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
procedure OnTOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
procedure OnTOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
procedure OnTOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
procedure OnTOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
procedure OnTOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
procedure OnTOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
procedure OnTOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
procedure OnTOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
procedure OnTOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
procedure OnTOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
procedure OnTOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
procedure OnTOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
procedure OnTOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
procedure OnTOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aFaviconStream: IStream);
procedure OnTOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aPdfStream: IStream);
procedure OnTOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
procedure OnTOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aCollectionView: ICoreWebView2PermissionSettingCollectionView);
procedure OnTOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
procedure OnTOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
procedure OnTOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aValue: ICoreWebView2ProcessExtendedInfoCollection);
procedure OnTOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
procedure OnTOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
procedure OnTOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extension: ICoreWebView2BrowserExtension);
procedure OnTOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extensionList: ICoreWebView2BrowserExtensionList);
procedure OnTOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
procedure OnTOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const result_: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);

// Custom events
procedure OnTOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
