unit uCEFEngEvent;

{$mode objfpc}{$H+}

{$Z4+}

interface

uses Classes, uCEFTypes, uCEFInterfaces, uCEFMiscFunctions, 
  uCEFBrowserProcessHandler, uCEFCompletionCallback, uCEFContextMenuHandler, uCEFCookieVisitor, uCEFDeleteCookiesCallback, 
  uCEFDialogHandler, uCEFDisplayHandler, uCEFDomVisitor, uCEFDownloadHandler, uCEFDownloadImageCallBack, 
  uCEFDragHandler, uCEFEndTracingCallback, uCEFFindHandler, uCEFFocusHandler, uCEFJsDialogHandler, 
  uCEFKeyboardHandler, uCEFLifeSpanHandler, uCEFLoadHandler, uCEFMenuModelDelegate, uCEFNavigationEntryVisitor, 
  uCEFPDFPrintCallback, uCEFRenderHandler, uCEFRenderProcessHandler, uCEFRequestContextHandler, uCEFRequestHandler, 
  uCEFResolveCallback, uCEFResourceBundleHandler, uCEFResourceHandler, uCEFResponseFilter, uCEFRunFileDialogCallback, 
  uCEFSchemeHandlerFactory, uCEFSetCookieCallback, uCEFStringVisitor, uCEFTask, uCEFUrlrequestClient, 
  uCEFv8Accessor, uCEFv8ArrayBufferReleaseCallback, uCEFv8Handler, uCEFv8Interceptor, uCEFServerHandler, 
  uCEFCookieAccessFilter, uCEFResourceRequestHandler, uCEFMediaObserver, uCEFMediaRouteCreateCallback, uCEFMenuButtonDelegate, 
  uCEFButtonDelegate, uCEFBrowserViewDelegate, uCEFPanelDelegate, uCEFTextfieldDelegate, uCEFViewDelegate, 
  uCEFAudioHandler, uCEFDevToolsMessageObserver, uCEFMediaSinkDeviceInfoCallback, uCEFPrintHandler, uCEFFrameHandler, 
  uCEFCommandHandler, uCEFPermissionHandler, uCEFMediaAccessHandler, uCEFClient, uCEFWindowDelegate, 
  uCEFExtensionHandler, uCEFAccessibilityHandler, uCEFWriteHandler, uCEFApp, uCEFSchemeRegistrar;

type

  TOnBrowserProcessRegisterCustomPreferencesEvent = procedure(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar) of object;
  TOnBrowserProcessContextInitializedEvent = procedure() of object;
  TOnBrowserProcessBeforeChildProcessLaunchEvent = procedure(const commandLine: ICefCommandLine) of object;
  TOnBrowserProcessScheduleMessagePumpWorkEvent = procedure(const delayMs: Int64) of object;
  TOnBrowserProcessGetDefaultClientEvent = procedure(var aClient: ICefClient) of object;
  TOnCompletionCallbackCompleteEvent = procedure() of object;
  TOnContextMenuRunContextMenuEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback): Boolean of object;
  TOnContextMenuContextMenuCommandEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags): Boolean of object;
  TOnContextMenuRunQuickMenuEvent = function(const browser: ICefBrowser; const frame: ICefFrame; location: PCefPoint; size: PCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback): boolean of object;
  TOnContextMenuQuickMenuCommandEvent = function(const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags): boolean of object;
  TOnContextMenuBeforeContextMenuEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel) of object;
  TOnContextMenuContextMenuDismissedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame) of object;
  TOnContextMenuQuickMenuDismissedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame) of object;
  TOnCookieVisitorVisitEvent = function(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean of object;
  TOnDeleteCookiesCallbackCompleteEvent = procedure(numDeleted: Integer) of object;
  TOnDialogFileDialogEvent = function(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const callback: ICefFileDialogCallback): Boolean of object;
  TOnDisplayTooltipEvent = function(const browser: ICefBrowser; var text: ustring): Boolean of object;
  TOnDisplayConsoleMessageEvent = function(const browser: ICefBrowser; level: TCefLogSeverity; const message_: ustring; const source: ustring; line: Integer): Boolean of object;
  TOnDisplayAutoResizeEvent = function(const browser: ICefBrowser; const new_size: PCefSize): Boolean of object;
  TOnDisplayAddressChangeEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const url: ustring) of object;
  TOnDisplayTitleChangeEvent = procedure(const browser: ICefBrowser; const title: ustring) of object;
  TOnDisplayFaviconUrlChangeEvent = procedure(const browser: ICefBrowser; const iconUrls: TStrings) of object;
  TOnDisplayFullScreenModeChangeEvent = procedure(const browser: ICefBrowser; fullscreen: Boolean) of object;
  TOnDisplayStatusMessageEvent = procedure(const browser: ICefBrowser; const value: ustring) of object;
  TOnDisplayLoadingProgressChangeEvent = procedure(const browser: ICefBrowser; const progress: double) of object;
  TOnDisplayCursorChangeEvent = procedure(const browser: ICefBrowser; cursor_: TCefCursorHandle; CursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean) of object;
  TOnDisplayMediaAccessChangeEvent = procedure(const browser: ICefBrowser; has_video_access: boolean; has_audio_access: boolean) of object;
  TOnDomVisitorVisitEvent = procedure(const document: ICefDomDocument) of object;
  TOnDownloadCanDownloadEvent = function(const browser: ICefBrowser; const url: ustring; const request_method: ustring): boolean of object;
  TOnDownloadBeforeDownloadEvent = procedure(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback) of object;
  TOnDownloadDownloadUpdatedEvent = procedure(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback) of object;
  TOnDownloadImageCallbackDownloadImageFinishedEvent = procedure(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage) of object;
  TOnDragDragEnterEvent = function(const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations): Boolean of object;
  TOnDragDraggableRegionsChangedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray) of object;
  TOnEndTracingCallbackEndTracingCompleteEvent = procedure(const tracingFile: ustring) of object;
  TOnFindFindResultEvent = procedure(const browser: ICefBrowser; identifier: Integer; count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean) of object;
  TOnFocusSetFocusEvent = function(const browser: ICefBrowser; source: TCefFocusSource): Boolean of object;
  TOnFocusTakeFocusEvent = procedure(const browser: ICefBrowser; next: Boolean) of object;
  TOnFocusGotFocusEvent = procedure(const browser: ICefBrowser) of object;
  TOnJsDialogJsdialogEvent = function(const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText: ustring; const defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean): Boolean of object;
  TOnJsDialogBeforeUnloadDialogEvent = function(const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback): Boolean of object;
  TOnJsDialogResetDialogStateEvent = procedure(const browser: ICefBrowser) of object;
  TOnJsDialogDialogClosedEvent = procedure(const browser: ICefBrowser) of object;
  TOnKeyboardPreKeyEvent = function(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean): Boolean of object;
  TOnKeyboardKeyEvent = function(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle): Boolean of object;
  TOnLifeSpanBeforePopupEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean of object;
  TOnLifeSpanDoCloseEvent = function(const browser: ICefBrowser): Boolean of object;
  TOnLifeSpanAfterCreatedEvent = procedure(const browser: ICefBrowser) of object;
  TOnLifeSpanBeforeCloseEvent = procedure(const browser: ICefBrowser) of object;
  TOnLoadLoadingStateChangeEvent = procedure(const browser: ICefBrowser; isLoading: Boolean; canGoBack: Boolean; canGoForward: Boolean) of object;
  TOnLoadLoadStartEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType) of object;
  TOnLoadLoadEndEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer) of object;
  TOnLoadLoadErrorEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText: ustring; const failedUrl: ustring) of object;
  TOnMenuModelFormatLabelEvent = function(const menuModel: ICefMenuModel; var label_: ustring): boolean of object;
  TOnMenuModelExecuteCommandEvent = procedure(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags) of object;
  TOnMenuModelMouseOutsideMenuEvent = procedure(const menuModel: ICefMenuModel; const screenPoint: PCefPoint) of object;
  TOnMenuModelUnhandledOpenSubmenuEvent = procedure(const menuModel: ICefMenuModel; isRTL: boolean) of object;
  TOnMenuModelUnhandledCloseSubmenuEvent = procedure(const menuModel: ICefMenuModel; isRTL: boolean) of object;
  TOnMenuModelMenuWillShowEvent = procedure(const menuModel: ICefMenuModel) of object;
  TOnMenuModelMenuClosedEvent = procedure(const menuModel: ICefMenuModel) of object;
  TOnNavigationEntryVisitorVisitEvent = function(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean of object;
  TOnPdfPrintCallbackPdfPrintFinishedEvent = procedure(const path: ustring; ok: Boolean) of object;
  TOnRenderGetRootScreenRectEvent = function(const browser: ICefBrowser; var rect: TCefRect): Boolean of object;
  TOnRenderGetScreenPointEvent = function(const browser: ICefBrowser; viewX: Integer; viewY: Integer; var screenX: Integer; var screenY: Integer): Boolean of object;
  TOnRenderGetScreenInfoEvent = function(const browser: ICefBrowser; var screenInfo: TCefScreenInfo): Boolean of object;
  TOnRenderStartDraggingEvent = function(const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x: Integer; y: Integer): Boolean of object;
  TOnRenderGetAccessibilityHandlerEvent = procedure(var aAccessibilityHandler: ICefAccessibilityHandler) of object;
  TOnRenderGetViewRectEvent = procedure(const browser: ICefBrowser; var rect: TCefRect) of object;
  TOnRenderPopupShowEvent = procedure(const browser: ICefBrowser; show: Boolean) of object;
  TOnRenderPopupSizeEvent = procedure(const browser: ICefBrowser; const rect: PCefRect) of object;
  TOnRenderPaintEvent = procedure(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width: Integer; height: Integer) of object;
  TOnRenderAcceleratedPaintEvent = procedure(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; shared_handle: Pointer) of object;
  TOnRenderGetTouchHandleSizeEvent = procedure(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize) of object;
  TOnRenderTouchHandleStateChangedEvent = procedure(const browser: ICefBrowser; const state: TCefTouchHandleState) of object;
  TOnRenderUpdateDragCursorEvent = procedure(const browser: ICefBrowser; operation: TCefDragOperation) of object;
  TOnRenderScrollOffsetChangedEvent = procedure(const browser: ICefBrowser; x: Double; y: Double) of object;
  TOnRenderIMECompositionRangeChangedEvent = procedure(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect) of object;
  TOnRenderTextSelectionChangedEvent = procedure(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange) of object;
  TOnRenderVirtualKeyboardRequestedEvent = procedure(const browser: ICefBrowser; input_mode: TCefTextInpuMode) of object;
  TOnRenderProcessGetLoadHandlerEvent = function(): ICefLoadHandler of object;
  TOnRenderProcessProcessMessageReceivedEvent = function(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage): Boolean of object;
  TOnRenderProcessWebKitInitializedEvent = procedure() of object;
  TOnRenderProcessBrowserCreatedEvent = procedure(const browser: ICefBrowser; const extra_info: ICefDictionaryValue) of object;
  TOnRenderProcessBrowserDestroyedEvent = procedure(const browser: ICefBrowser) of object;
  TOnRenderProcessContextCreatedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context) of object;
  TOnRenderProcessContextReleasedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context) of object;
  TOnRenderProcessUncaughtExceptionEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const V8Exception: ICefV8Exception; const stackTrace: ICefV8StackTrace) of object;
  TOnRenderProcessFocusedNodeChangedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode) of object;
  TOnRequestContextRequestContextInitializedEvent = procedure(const request_context: ICefRequestContext) of object;
  TOnRequestContextGetResourceRequestHandlerEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler) of object;
  TOnRequestBeforeBrowseEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean of object;
  TOnRequestOpenUrlFromTabEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean of object;
  TOnRequestGetAuthCredentialsEvent = function(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean of object;
  TOnRequestCertificateErrorEvent = function(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean of object;
  TOnRequestSelectClientCertificateEvent = function(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean of object;
  TOnRequestGetResourceRequestHandlerEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler) of object;
  TOnRequestRenderViewReadyEvent = procedure(const browser: ICefBrowser) of object;
  TOnRequestRenderProcessTerminatedEvent = procedure(const browser: ICefBrowser; status: TCefTerminationStatus) of object;
  TOnRequestDocumentAvailableInMainFrameEvent = procedure(const browser: ICefBrowser) of object;
  TOnResolveCallbackResolveCompletedEvent = procedure(result: TCefErrorCode; const resolvedIps: TStrings) of object;
  TOnResourceBundleGetLocalizedStringEvent = function(stringid: Integer; var stringVal: ustring): Boolean of object;
  TOnResourceBundleGetDataResourceEvent = function(resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): Boolean of object;
  TOnResourceBundleGetDataResourceForScaleEvent = function(resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): Boolean of object;
  TOnResourceOpenEvent = function(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean of object;
  TOnResourceProcessRequestEvent = function(const request: ICefRequest; const callback: ICefCallback): Boolean of object;
  TOnResourceSkipEvent = function(bytes_to_skip: int64; var bytes_skipped: Int64; const callback: ICefResourceSkipCallback): boolean of object;
  TOnResourceReadEvent = function(const data_out: Pointer; bytes_to_read: Integer; var bytes_read: Integer; const callback: ICefResourceReadCallback): boolean of object;
  TOnResourceReadResponseEvent = function(const dataOut: Pointer; bytesToRead: Integer; var bytesRead: Integer; const callback: ICefCallback): Boolean of object;
  TOnResourceGetResponseHeadersEvent = procedure(const response: ICefResponse; out responseLength: Int64; out redirectUrl: ustring) of object;
  TOnResourceCancelEvent = procedure() of object;
  TOnResponseFilterInitFilterEvent = function(): Boolean of object;
  TOnResponseFilterFilterEvent = function(data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size: NativeUInt; var data_out_written: NativeUInt): TCefResponseFilterStatus of object;
  TOnRunFileDialogCallbackFileDialogDismissedEvent = procedure(const filePaths: TStrings) of object;
  TOnSchemeFactoryNewEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler of object;
  TOnSetCookieCallbackCompleteEvent = procedure(success: Boolean) of object;
  TOnStringVisitorVisitEvent = procedure(const str: ustring) of object;
  TOnTaskExecuteEvent = procedure() of object;
  TOnUrlrequestClientGetAuthCredentialsEvent = function(isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean of object;
  TOnUrlrequestClientRequestCompleteEvent = procedure(const request: ICefUrlRequest) of object;
  TOnUrlrequestClientUploadProgressEvent = procedure(const request: ICefUrlRequest; current: Int64; total: Int64) of object;
  TOnUrlrequestClientDownloadProgressEvent = procedure(const request: ICefUrlRequest; current: Int64; total: Int64) of object;
  TOnUrlrequestClientDownloadDataEvent = procedure(const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt) of object;
  TOnV8AccessorGetEvent = function(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): Boolean of object;
  TOnV8AccessorSet_Event = function(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): Boolean of object;
  TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent = procedure(buffer: Pointer) of object;
  TOnV8ExecuteEvent = function(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean of object;
  TOnV8InterceptorGetByNameEvent = function(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean of object;
  TOnV8InterceptorGetByIndexEvent = function(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean of object;
  TOnV8InterceptorSetByNameEvent = function(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean of object;
  TOnV8InterceptorSetByIndexEvent = function(index: integer; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean of object;
  TOnServerServerCreatedEvent = procedure(const server: ICefServer) of object;
  TOnServerServerDestroyedEvent = procedure(const server: ICefServer) of object;
  TOnServerClientConnectedEvent = procedure(const server: ICefServer; connection_id: Integer) of object;
  TOnServerClientDisconnectedEvent = procedure(const server: ICefServer; connection_id: Integer) of object;
  TOnServerHttpRequestEvent = procedure(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest) of object;
  TOnServerWebSocketRequestEvent = procedure(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback) of object;
  TOnServerWebSocketConnectedEvent = procedure(const server: ICefServer; connection_id: Integer) of object;
  TOnServerWebSocketMessageEvent = procedure(const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt) of object;
  TOnCookieAccessFilterCanSendCookieEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie): boolean of object;
  TOnCookieAccessFilterCanSaveCookieEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie): boolean of object;
  TOnResourceRequestBeforeResourceLoadEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback): TCefReturnValue of object;
  TOnResourceRequestResourceResponseEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse): Boolean of object;
  TOnResourceRequestGetCookieAccessFilterEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aFilter: ICefCookieAccessFilter) of object;
  TOnResourceRequestGetResourceHandlerEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler) of object;
  TOnResourceRequestResourceRedirectEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring) of object;
  TOnResourceRequestGetResourceResponseFilterEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var aResponseFilter: ICefResponseFilter) of object;
  TOnResourceRequestResourceLoadCompleteEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64) of object;
  TOnResourceRequestProtocolExecutionEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean) of object;
  TOnMediaObserverSinksEvent = procedure(const sinks: TCefMediaSinkArray) of object;
  TOnMediaObserverRoutesEvent = procedure(const routes: TCefMediaRouteArray) of object;
  TOnMediaObserverRouteStateChangedEvent = procedure(const route: ICefMediaRoute; state: TCefMediaRouteConnectionState) of object;
  TOnMediaObserverRouteMessageReceivedEvent = procedure(const route: ICefMediaRoute; const message_: ustring) of object;
  TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent = procedure(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute) of object;
  TOnMenuButtonMenuButtonPressedEvent = procedure(const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock) of object;
  TOnButtonButtonPressedEvent = procedure(const button: ICefButton) of object;
  TOnButtonButtonStateChangedEvent = procedure(const button: ICefButton) of object;
  TOnBrowserViewGetChromeToolbarTypeEvent = function(): TCefChromeToolbarType of object;
  TOnBrowserViewBrowserCreatedEvent = procedure(const browser_view: ICefBrowserView; const browser: ICefBrowser) of object;
  TOnBrowserViewBrowserDestroyedEvent = procedure(const browser_view: ICefBrowserView; const browser: ICefBrowser) of object;
  TOnBrowserViewGetDelegateForPopupBrowserViewEvent = procedure(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate) of object;
  TOnBrowserViewPopupBrowserViewCreatedEvent = procedure(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean) of object;
  TOnTextfieldKeyEvent = procedure(const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean) of object;
  TOnTextfieldAfterUserActionEvent = procedure(const textfield: ICefTextfield) of object;
  TOnViewGetPreferredSizeEvent = procedure(const view: ICefView; var aResult: TCefSize) of object;
  TOnViewGetMinimumSizeEvent = procedure(const view: ICefView; var aResult: TCefSize) of object;
  TOnViewGetMaximumSizeEvent = procedure(const view: ICefView; var aResult: TCefSize) of object;
  TOnViewGetHeightForWidthEvent = procedure(const view: ICefView; width: Integer; var aResult: Integer) of object;
  TOnViewParentViewChangedEvent = procedure(const view: ICefView; added: boolean; const parent: ICefView) of object;
  TOnViewChildViewChangedEvent = procedure(const view: ICefView; added: boolean; const child: ICefView) of object;
  TOnViewWindowChangedEvent = procedure(const view: ICefView; added: boolean) of object;
  TOnViewLayoutChangedEvent = procedure(const view: ICefView; new_bounds: TCefRect) of object;
  TOnViewFocusEvent = procedure(const view: ICefView) of object;
  TOnViewBlurEvent = procedure(const view: ICefView) of object;
  TOnAudioGetAudioParametersEvent = procedure(const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean) of object;
  TOnAudioAudioStreamStartedEvent = procedure(const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer) of object;
  TOnAudioAudioStreamPacketEvent = procedure(const browser: ICefBrowser; const data: PPSingle; frames: integer; pts: int64) of object;
  TOnAudioAudioStreamStoppedEvent = procedure(const browser: ICefBrowser) of object;
  TOnAudioAudioStreamErrorEvent = procedure(const browser: ICefBrowser; const message_: ustring) of object;
  TOnDevToolsMessageObserverDevToolsMessageEvent = procedure(const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean) of object;
  TOnDevToolsMessageObserverDevToolsMethodResultEvent = procedure(const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt) of object;
  TOnDevToolsMessageObserverDevToolsEvent = procedure(const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt) of object;
  TOnDevToolsMessageObserverDevToolsAgentAttachedEvent = procedure(const browser: ICefBrowser) of object;
  TOnDevToolsMessageObserverDevToolsAgentDetachedEvent = procedure(const browser: ICefBrowser) of object;
  TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent = procedure(const ip_address: ustring; port: integer; const model_name: ustring) of object;
  TOnPrintPrintStartEvent = procedure(const browser: ICefBrowser) of object;
  TOnPrintPrintSettingsEvent = procedure(const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean) of object;
  TOnPrintPrintDialogEvent = procedure(const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean) of object;
  TOnPrintPrintJobEvent = procedure(const browser: ICefBrowser; const documentName: ustring; const PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult: boolean) of object;
  TOnPrintPrintResetEvent = procedure(const browser: ICefBrowser) of object;
  TOnPrintGetPDFPaperSizeEvent = procedure(const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult: TCefSize) of object;
  TOnFrameFrameCreatedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame) of object;
  TOnFrameFrameAttachedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean) of object;
  TOnFrameFrameDetachedEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame) of object;
  TOnFrameMainFrameChangedEvent = procedure(const browser: ICefBrowser; const old_frame: ICefFrame; const new_frame: ICefFrame) of object;
  TOnCommandChromeCommandEvent = function(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean of object;
  TOnPermissionRequestMediaAccessPermissionEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback): boolean of object;
  TOnPermissionShowPermissionPromptEvent = function(const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback): boolean of object;
  TOnPermissionDismissPermissionPromptEvent = procedure(const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult) of object;
  TOnMediaAccessRequestMediaAccessPermissionEvent = function(const browser: ICefBrowser; const frame: ICefFrame; const requesting_url: ustring; requested_permissions: TCefMediaAccessPermissionTypes; const callback: ICefMediaAccessCallback): boolean of object;
  TOnClientProcessMessageReceivedEvent = function(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message_: ICefProcessMessage): Boolean of object;
  TOnClientGetAudioHandlerEvent = procedure(var aHandler: ICefAudioHandler) of object;
  TOnClientGetCommandHandlerEvent = procedure(var aHandler: ICefCommandHandler) of object;
  TOnClientGetContextMenuHandlerEvent = procedure(var aHandler: ICefContextMenuHandler) of object;
  TOnClientGetDialogHandlerEvent = procedure(var aHandler: ICefDialogHandler) of object;
  TOnClientGetDisplayHandlerEvent = procedure(var aHandler: ICefDisplayHandler) of object;
  TOnClientGetDownloadHandlerEvent = procedure(var aHandler: ICefDownloadHandler) of object;
  TOnClientGetDragHandlerEvent = procedure(var aHandler: ICefDragHandler) of object;
  TOnClientGetFindHandlerEvent = procedure(var aHandler: ICefFindHandler) of object;
  TOnClientGetFocusHandlerEvent = procedure(var aHandler: ICefFocusHandler) of object;
  TOnClientGetFrameHandlerEvent = procedure(var aHandler: ICefFrameHandler) of object;
  TOnClientGetPermissionHandlerEvent = procedure(var aHandler: ICefPermissionHandler) of object;
  TOnClientGetJsdialogHandlerEvent = procedure(var aHandler: ICefJsdialogHandler) of object;
  TOnClientGetKeyboardHandlerEvent = procedure(var aHandler: ICefKeyboardHandler) of object;
  TOnClientGetLifeSpanHandlerEvent = procedure(var aHandler: ICefLifeSpanHandler) of object;
  TOnClientGetLoadHandlerEvent = procedure(var aHandler: ICefLoadHandler) of object;
  TOnClientGetPrintHandlerEvent = procedure(var aHandler: ICefPrintHandler) of object;
  TOnClientGetRenderHandlerEvent = procedure(var aHandler: ICefRenderHandler) of object;
  TOnClientGetRequestHandlerEvent = procedure(var aHandler: ICefRequestHandler) of object;
  TOnWindowWindowCreatedEvent = procedure(const window_: ICefWindow) of object;
  TOnWindowWindowClosingEvent = procedure(const window_: ICefWindow) of object;
  TOnWindowWindowDestroyedEvent = procedure(const window_: ICefWindow) of object;
  TOnWindowWindowActivationChangedEvent = procedure(const window_: ICefWindow; active: boolean) of object;
  TOnWindowWindowBoundsChangedEvent = procedure(const window_: ICefWindow; const new_bounds: TCefRect) of object;
  TOnWindowGetParentWindowEvent = procedure(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow) of object;
  TOnWindowGetInitialBoundsEvent = procedure(const window_: ICefWindow; var aResult: TCefRect) of object;
  TOnWindowGetInitialShowStateEvent = procedure(const window_: ICefWindow; var aResult: TCefShowState) of object;
  TOnWindowIsFramelessEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanResizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanMaximizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanMinimizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanCloseEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowAcceleratorEvent = procedure(const window_: ICefWindow; command_id: Integer; var aResult: boolean) of object;
  TOnWindowKeyEvent = procedure(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean) of object;
  TOnExtensionBeforeBackgroundBrowserEvent = function(const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings): boolean of object;
  TOnExtensionBeforeBrowserEvent = function(const extension: ICefExtension; const browser: ICefBrowser; const active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings): boolean of object;
  TOnExtensionCanAccessBrowserEvent = function(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser): boolean of object;
  TOnExtensionGetExtensionResourceEvent = function(const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback): boolean of object;
  TOnExtensionExtensionLoadFailedEvent = procedure(result: TCefErrorcode) of object;
  TOnExtensionExtensionLoadedEvent = procedure(const extension: ICefExtension) of object;
  TOnExtensionExtensionUnloadedEvent = procedure(const extension: ICefExtension) of object;
  TOnExtensionGetActiveBrowserEvent = procedure(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser) of object;
  TOnAccessibilityAccessibilityTreeChangeEvent = procedure(const value: ICefValue) of object;
  TOnAccessibilityAccessibilityLocationChangeEvent = procedure(const value: ICefValue) of object;
  TOnWriteWriteEvent = function(const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt of object;
  TOnWriteSeekEvent = function(offset: Int64; whence: Integer): Integer of object;
  TOnWriteEllEvent = function(): Int64 of object;
  TOnWriteFlushEvent = function(): Integer of object;
  TOnWriteMayBlockEvent = function(): Boolean of object;
  TOnAppBeforeCommandLineProcessingEvent = procedure(const processType: ustring; const commandLine: ICefCommandLine) of object;
  TOnAppRegisterCustomSchemesEvent = procedure(const registrar: TCefSchemeRegistrarRef) of object;
  TOnAppGetResourceBundleHandlerEvent = procedure(var aHandler: ICefResourceBundleHandler) of object;
  TOnAppGetBrowserProcessHandlerEvent = procedure(var aHandler: ICefBrowserProcessHandler) of object;
  TOnAppGetRenderProcessHandlerEvent = procedure(var aHandler: ICefRenderProcessHandler) of object;

type

  //  TCefBrowserProcessHandler
  //  /include/capi/cef_browser_process_handler_capi.h (cef_browser_process_handler_t)
  TEngBrowserProcessHandler = class(TCefBrowserProcessHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnRegisterCustomPreferences: TOnBrowserProcessRegisterCustomPreferencesEvent;
    FOnContextInitialized: TOnBrowserProcessContextInitializedEvent;
    FOnBeforeChildProcessLaunch: TOnBrowserProcessBeforeChildProcessLaunchEvent;
    FOnScheduleMessagePumpWork: TOnBrowserProcessScheduleMessagePumpWorkEvent;
    FGetDefaultClient: TOnBrowserProcessGetDefaultClientEvent;
  protected
    procedure OnRegisterCustomPreferences(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar); override;
    procedure OnContextInitialized(); override;
    procedure OnBeforeChildProcessLaunch(const commandLine: ICefCommandLine); override;
    procedure OnScheduleMessagePumpWork(const delayMs: Int64); override;
    procedure GetDefaultClient(var aClient: ICefClient); override;
    procedure RemoveReferences(); override;
  published

    property OnBrowserProcessRegisterCustomPreferences: TOnBrowserProcessRegisterCustomPreferencesEvent read FOnRegisterCustomPreferences write FOnRegisterCustomPreferences;

    property OnBrowserProcessContextInitialized: TOnBrowserProcessContextInitializedEvent read FOnContextInitialized write FOnContextInitialized;

    property OnBrowserProcessBeforeChildProcessLaunch: TOnBrowserProcessBeforeChildProcessLaunchEvent read FOnBeforeChildProcessLaunch write FOnBeforeChildProcessLaunch;

    property OnBrowserProcessScheduleMessagePumpWork: TOnBrowserProcessScheduleMessagePumpWorkEvent read FOnScheduleMessagePumpWork write FOnScheduleMessagePumpWork;

    property OnBrowserProcessGetDefaultClient: TOnBrowserProcessGetDefaultClientEvent read FGetDefaultClient write FGetDefaultClient;
  end;

  //  TCefCompletionCallback
  //  /include/capi/cef_callback_capi.h (cef_completion_callback_t)
  TEngCompletionCallback = class(TCefCompletionCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnCompletionCallbackCompleteEvent;
  protected
    procedure OnComplete(); override;
  published

    property OnCompletionCallbackComplete: TOnCompletionCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  TCefContextMenuHandler
  //  /include/capi/cef_context_menu_handler_capi.h (cef_context_menu_handler_t)
  TEngContextMenuHandler = class(TCefContextMenuHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FRunContextMenu: TOnContextMenuRunContextMenuEvent;
    FOnContextMenuCommand: TOnContextMenuContextMenuCommandEvent;
    FRunQuickMenu: TOnContextMenuRunQuickMenuEvent;
    FOnQuickMenuCommand: TOnContextMenuQuickMenuCommandEvent;
    FOnBeforeContextMenu: TOnContextMenuBeforeContextMenuEvent;
    FOnContextMenuDismissed: TOnContextMenuContextMenuDismissedEvent;
    FOnQuickMenuDismissed: TOnContextMenuQuickMenuDismissedEvent;
  protected
    function RunContextMenu(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback): Boolean; override;
    function OnContextMenuCommand(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags): Boolean; override;
    function RunQuickMenu(const browser: ICefBrowser; const frame: ICefFrame; location: PCefPoint; size: PCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback): boolean; override;
    function OnQuickMenuCommand(const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags): boolean; override;
    procedure OnBeforeContextMenu(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel); override;
    procedure OnContextMenuDismissed(const browser: ICefBrowser; const frame: ICefFrame); override;
    procedure OnQuickMenuDismissed(const browser: ICefBrowser; const frame: ICefFrame); override;
    procedure RemoveReferences(); override;
  published

    property OnContextMenuRunContextMenu: TOnContextMenuRunContextMenuEvent read FRunContextMenu write FRunContextMenu;

    property OnContextMenuContextMenuCommand: TOnContextMenuContextMenuCommandEvent read FOnContextMenuCommand write FOnContextMenuCommand;

    property OnContextMenuRunQuickMenu: TOnContextMenuRunQuickMenuEvent read FRunQuickMenu write FRunQuickMenu;

    property OnContextMenuQuickMenuCommand: TOnContextMenuQuickMenuCommandEvent read FOnQuickMenuCommand write FOnQuickMenuCommand;

    property OnContextMenuBeforeContextMenu: TOnContextMenuBeforeContextMenuEvent read FOnBeforeContextMenu write FOnBeforeContextMenu;

    property OnContextMenuContextMenuDismissed: TOnContextMenuContextMenuDismissedEvent read FOnContextMenuDismissed write FOnContextMenuDismissed;

    property OnContextMenuQuickMenuDismissed: TOnContextMenuQuickMenuDismissedEvent read FOnQuickMenuDismissed write FOnQuickMenuDismissed;
  end;

  //  TCefCookieVisitor
  //  /include/capi/cef_cookie_capi.h (cef_cookie_visitor_t)
  TEngCookieVisitor = class(TCefCookieVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    Fvisit: TOnCookieVisitorVisitEvent;
  protected
    function visit(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean; override;
  published

    property OnCookieVisitorVisit: TOnCookieVisitorVisitEvent read Fvisit write Fvisit;
  end;

  //  TCefDeleteCookiesCallback
  //  /include/capi/cef_cookie_capi.h (cef_delete_cookies_callback_t)
  TEngDeleteCookiesCallback = class(TCefDeleteCookiesCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnDeleteCookiesCallbackCompleteEvent;
  protected
    procedure OnComplete(numDeleted: Integer); override;
  published

    property OnDeleteCookiesCallbackComplete: TOnDeleteCookiesCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  TCefDialogHandler
  //  /include/capi/cef_dialog_handler_capi.h (cef_dialog_handler_t)
  TEngDialogHandler = class(TCefDialogHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnFileDialog: TOnDialogFileDialogEvent;
  protected
    function OnFileDialog(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const callback: ICefFileDialogCallback): Boolean; override;
    procedure RemoveReferences(); override;
  published

    property OnDialogFileDialog: TOnDialogFileDialogEvent read FOnFileDialog write FOnFileDialog;
  end;

  //  TCefDisplayHandler
  //  /include/capi/cef_display_handler_capi.h (cef_display_handler_t)
  TEngDisplayHandler = class(TCefDisplayHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnTooltip: TOnDisplayTooltipEvent;
    FOnConsoleMessage: TOnDisplayConsoleMessageEvent;
    FOnAutoResize: TOnDisplayAutoResizeEvent;
    FOnAddressChange: TOnDisplayAddressChangeEvent;
    FOnTitleChange: TOnDisplayTitleChangeEvent;
    FOnFaviconUrlChange: TOnDisplayFaviconUrlChangeEvent;
    FOnFullScreenModeChange: TOnDisplayFullScreenModeChangeEvent;
    FOnStatusMessage: TOnDisplayStatusMessageEvent;
    FOnLoadingProgressChange: TOnDisplayLoadingProgressChangeEvent;
    FOnCursorChange: TOnDisplayCursorChangeEvent;
    FOnMediaAccessChange: TOnDisplayMediaAccessChangeEvent;
  protected
    function OnTooltip(const browser: ICefBrowser; var text: ustring): Boolean; override;
    function OnConsoleMessage(const browser: ICefBrowser; level: TCefLogSeverity; const message_: ustring; const source: ustring; line: Integer): Boolean; override;
    function OnAutoResize(const browser: ICefBrowser; const new_size: PCefSize): Boolean; override;
    procedure OnAddressChange(const browser: ICefBrowser; const frame: ICefFrame; const url: ustring); override;
    procedure OnTitleChange(const browser: ICefBrowser; const title: ustring); override;
    procedure OnFaviconUrlChange(const browser: ICefBrowser; const iconUrls: TStrings); override;
    procedure OnFullScreenModeChange(const browser: ICefBrowser; fullscreen: Boolean); override;
    procedure OnStatusMessage(const browser: ICefBrowser; const value: ustring); override;
    procedure OnLoadingProgressChange(const browser: ICefBrowser; const progress: double); override;
    procedure OnCursorChange(const browser: ICefBrowser; cursor_: TCefCursorHandle; CursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean); override;
    procedure OnMediaAccessChange(const browser: ICefBrowser; has_video_access: boolean; has_audio_access: boolean); override;
    procedure RemoveReferences(); override;
  published

    property OnDisplayTooltip: TOnDisplayTooltipEvent read FOnTooltip write FOnTooltip;

    property OnDisplayConsoleMessage: TOnDisplayConsoleMessageEvent read FOnConsoleMessage write FOnConsoleMessage;

    property OnDisplayAutoResize: TOnDisplayAutoResizeEvent read FOnAutoResize write FOnAutoResize;

    property OnDisplayAddressChange: TOnDisplayAddressChangeEvent read FOnAddressChange write FOnAddressChange;

    property OnDisplayTitleChange: TOnDisplayTitleChangeEvent read FOnTitleChange write FOnTitleChange;

    property OnDisplayFaviconUrlChange: TOnDisplayFaviconUrlChangeEvent read FOnFaviconUrlChange write FOnFaviconUrlChange;

    property OnDisplayFullScreenModeChange: TOnDisplayFullScreenModeChangeEvent read FOnFullScreenModeChange write FOnFullScreenModeChange;

    property OnDisplayStatusMessage: TOnDisplayStatusMessageEvent read FOnStatusMessage write FOnStatusMessage;

    property OnDisplayLoadingProgressChange: TOnDisplayLoadingProgressChangeEvent read FOnLoadingProgressChange write FOnLoadingProgressChange;

    property OnDisplayCursorChange: TOnDisplayCursorChangeEvent read FOnCursorChange write FOnCursorChange;

    property OnDisplayMediaAccessChange: TOnDisplayMediaAccessChangeEvent read FOnMediaAccessChange write FOnMediaAccessChange;
  end;

  //  TCefDomVisitor
  //  /include/capi/cef_dom_capi.h (cef_domvisitor_t)
  TEngDomVisitor = class(TCefDomVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    Fvisit: TOnDomVisitorVisitEvent;
  protected
    procedure visit(const document: ICefDomDocument); override;
  published

    property OnDomVisitorVisit: TOnDomVisitorVisitEvent read Fvisit write Fvisit;
  end;

  //  TCefDownloadHandler
  //  /include/capi/cef_download_handler_capi.h (cef_download_handler_t)
  TEngDownloadHandler = class(TCefDownloadHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FCanDownload: TOnDownloadCanDownloadEvent;
    FOnBeforeDownload: TOnDownloadBeforeDownloadEvent;
    FOnDownloadUpdated: TOnDownloadDownloadUpdatedEvent;
  protected
    function CanDownload(const browser: ICefBrowser; const url: ustring; const request_method: ustring): boolean; override;
    procedure OnBeforeDownload(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback); override;
    procedure OnDownloadUpdated(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback); override;
    procedure RemoveReferences(); override;
  published

    property OnDownloadCanDownload: TOnDownloadCanDownloadEvent read FCanDownload write FCanDownload;

    property OnDownloadBeforeDownload: TOnDownloadBeforeDownloadEvent read FOnBeforeDownload write FOnBeforeDownload;

    property OnDownloadDownloadUpdated: TOnDownloadDownloadUpdatedEvent read FOnDownloadUpdated write FOnDownloadUpdated;
  end;

  //  TCefDownloadImageCallback
  //  /include/capi/cef_browser_capi.h (cef_download_image_callback_t)
  TEngDownloadImageCallback = class(TCefDownloadImageCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnDownloadImageFinished: TOnDownloadImageCallbackDownloadImageFinishedEvent;
  protected
    procedure OnDownloadImageFinished(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage); override;
  published

    property OnDownloadImageCallbackDownloadImageFinished: TOnDownloadImageCallbackDownloadImageFinishedEvent read FOnDownloadImageFinished write FOnDownloadImageFinished;
  end;

  //  TCefDragHandler
  //  /include/capi/cef_drag_handler_capi.h (cef_drag_handler_t)
  TEngDragHandler = class(TCefDragHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnDragEnter: TOnDragDragEnterEvent;
    FOnDraggableRegionsChanged: TOnDragDraggableRegionsChangedEvent;
  protected
    function OnDragEnter(const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations): Boolean; override;
    procedure OnDraggableRegionsChanged(const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray); override;
    procedure RemoveReferences(); override;
  published

    property OnDragDragEnter: TOnDragDragEnterEvent read FOnDragEnter write FOnDragEnter;

    property OnDragDraggableRegionsChanged: TOnDragDraggableRegionsChangedEvent read FOnDraggableRegionsChanged write FOnDraggableRegionsChanged;
  end;

  //  TCefEndTracingCallback
  //  /include/capi/cef_trace_capi.h (cef_end_tracing_callback_t)
  TEngEndTracingCallback = class(TCefEndTracingCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnEndTracingComplete: TOnEndTracingCallbackEndTracingCompleteEvent;
  protected
    procedure OnEndTracingComplete(const tracingFile: ustring); override;
  published

    property OnEndTracingCallbackEndTracingComplete: TOnEndTracingCallbackEndTracingCompleteEvent read FOnEndTracingComplete write FOnEndTracingComplete;
  end;

  //  TCefFindHandler
  //  /include/capi/cef_find_handler_capi.h (cef_find_handler_t)
  TEngFindHandler = class(TCefFindHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnFindResult: TOnFindFindResultEvent;
  protected
    procedure OnFindResult(const browser: ICefBrowser; identifier: Integer; count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean); override;
    procedure RemoveReferences(); override;
  published

    property OnFindFindResult: TOnFindFindResultEvent read FOnFindResult write FOnFindResult;
  end;

  //  TCefFocusHandler
  //  /include/capi/cef_focus_handler_capi.h (cef_focus_handler_t)
  TEngFocusHandler = class(TCefFocusHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnSetFocus: TOnFocusSetFocusEvent;
    FOnTakeFocus: TOnFocusTakeFocusEvent;
    FOnGotFocus: TOnFocusGotFocusEvent;
  protected
    function OnSetFocus(const browser: ICefBrowser; source: TCefFocusSource): Boolean; override;
    procedure OnTakeFocus(const browser: ICefBrowser; next: Boolean); override;
    procedure OnGotFocus(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published

    property OnFocusSetFocus: TOnFocusSetFocusEvent read FOnSetFocus write FOnSetFocus;

    property OnFocusTakeFocus: TOnFocusTakeFocusEvent read FOnTakeFocus write FOnTakeFocus;

    property OnFocusGotFocus: TOnFocusGotFocusEvent read FOnGotFocus write FOnGotFocus;
  end;

  //  TCefJsDialogHandler
  //  /include/capi/cef_jsdialog_handler_capi.h (cef_jsdialog_handler_t)
  TEngJsDialogHandler = class(TCefJsDialogHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnJsdialog: TOnJsDialogJsdialogEvent;
    FOnBeforeUnloadDialog: TOnJsDialogBeforeUnloadDialogEvent;
    FOnResetDialogState: TOnJsDialogResetDialogStateEvent;
    FOnDialogClosed: TOnJsDialogDialogClosedEvent;
  protected
    function OnJsdialog(const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText: ustring; const defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean): Boolean; override;
    function OnBeforeUnloadDialog(const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback): Boolean; override;
    procedure OnResetDialogState(const browser: ICefBrowser); override;
    procedure OnDialogClosed(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published

    property OnJsDialogJsdialog: TOnJsDialogJsdialogEvent read FOnJsdialog write FOnJsdialog;

    property OnJsDialogBeforeUnloadDialog: TOnJsDialogBeforeUnloadDialogEvent read FOnBeforeUnloadDialog write FOnBeforeUnloadDialog;

    property OnJsDialogResetDialogState: TOnJsDialogResetDialogStateEvent read FOnResetDialogState write FOnResetDialogState;

    property OnJsDialogDialogClosed: TOnJsDialogDialogClosedEvent read FOnDialogClosed write FOnDialogClosed;
  end;

  //  TCefKeyboardHandler
  //  /include/capi/cef_keyboard_handler_capi.h (cef_keyboard_handler_t)
  TEngKeyboardHandler = class(TCefKeyboardHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnPreKeyEvent: TOnKeyboardPreKeyEvent;
    FOnKeyEvent: TOnKeyboardKeyEvent;
  protected
    function OnPreKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean): Boolean; override;
    function OnKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle): Boolean; override;
    procedure RemoveReferences(); override;
  published

    property OnKeyboardPreKey: TOnKeyboardPreKeyEvent read FOnPreKeyEvent write FOnPreKeyEvent;

    property OnKeyboardKey: TOnKeyboardKeyEvent read FOnKeyEvent write FOnKeyEvent;
  end;

  //  TCefLifeSpanHandler
  //  /include/capi/cef_life_span_handler_capi.h (cef_life_span_handler_t)
  TEngLifeSpanHandler = class(TCefLifeSpanHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforePopup: TOnLifeSpanBeforePopupEvent;
    FDoClose: TOnLifeSpanDoCloseEvent;
    FOnAfterCreated: TOnLifeSpanAfterCreatedEvent;
    FOnBeforeClose: TOnLifeSpanBeforeCloseEvent;
  protected
    function OnBeforePopup(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean; override;
    function DoClose(const browser: ICefBrowser): Boolean; override;
    procedure OnAfterCreated(const browser: ICefBrowser); override;
    procedure OnBeforeClose(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published

    property OnLifeSpanBeforePopup: TOnLifeSpanBeforePopupEvent read FOnBeforePopup write FOnBeforePopup;

    property OnLifeSpanDoClose: TOnLifeSpanDoCloseEvent read FDoClose write FDoClose;

    property OnLifeSpanAfterCreated: TOnLifeSpanAfterCreatedEvent read FOnAfterCreated write FOnAfterCreated;

    property OnLifeSpanBeforeClose: TOnLifeSpanBeforeCloseEvent read FOnBeforeClose write FOnBeforeClose;
  end;

  //  TCefLoadHandler
  //  /include/capi/cef_load_handler_capi.h (cef_load_handler_t)
  TEngLoadHandler = class(TCefLoadHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnLoadingStateChange: TOnLoadLoadingStateChangeEvent;
    FOnLoadStart: TOnLoadLoadStartEvent;
    FOnLoadEnd: TOnLoadLoadEndEvent;
    FOnLoadError: TOnLoadLoadErrorEvent;
  protected
    procedure OnLoadingStateChange(const browser: ICefBrowser; isLoading: Boolean; canGoBack: Boolean; canGoForward: Boolean); override;
    procedure OnLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType); override;
    procedure OnLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer); override;
    procedure OnLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText: ustring; const failedUrl: ustring); override;
    procedure RemoveReferences(); override;
  published

    property OnLoadLoadingStateChange: TOnLoadLoadingStateChangeEvent read FOnLoadingStateChange write FOnLoadingStateChange;

    property OnLoadLoadStart: TOnLoadLoadStartEvent read FOnLoadStart write FOnLoadStart;

    property OnLoadLoadEnd: TOnLoadLoadEndEvent read FOnLoadEnd write FOnLoadEnd;

    property OnLoadLoadError: TOnLoadLoadErrorEvent read FOnLoadError write FOnLoadError;
  end;

  //  TCefMenuModelDelegate
  //  /include/capi/cef_menu_model_delegate_capi.h (cef_menu_model_delegate_t)
  TEngMenuModelDelegate = class(TCefMenuModelDelegateOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FFormatLabel: TOnMenuModelFormatLabelEvent;
    FExecuteCommand: TOnMenuModelExecuteCommandEvent;
    FMouseOutsideMenu: TOnMenuModelMouseOutsideMenuEvent;
    FUnhandledOpenSubmenu: TOnMenuModelUnhandledOpenSubmenuEvent;
    FUnhandledCloseSubmenu: TOnMenuModelUnhandledCloseSubmenuEvent;
    FMenuWillShow: TOnMenuModelMenuWillShowEvent;
    FMenuClosed: TOnMenuModelMenuClosedEvent;
  protected
    function FormatLabel(const menuModel: ICefMenuModel; var label_: ustring): boolean; override;
    procedure ExecuteCommand(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags); override;
    procedure MouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint); override;
    procedure UnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean); override;
    procedure UnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean); override;
    procedure MenuWillShow(const menuModel: ICefMenuModel); override;
    procedure MenuClosed(const menuModel: ICefMenuModel); override;
  published

    property OnMenuModelFormatLabel: TOnMenuModelFormatLabelEvent read FFormatLabel write FFormatLabel;

    property OnMenuModelExecuteCommand: TOnMenuModelExecuteCommandEvent read FExecuteCommand write FExecuteCommand;

    property OnMenuModelMouseOutsideMenu: TOnMenuModelMouseOutsideMenuEvent read FMouseOutsideMenu write FMouseOutsideMenu;

    property OnMenuModelUnhandledOpenSubmenu: TOnMenuModelUnhandledOpenSubmenuEvent read FUnhandledOpenSubmenu write FUnhandledOpenSubmenu;

    property OnMenuModelUnhandledCloseSubmenu: TOnMenuModelUnhandledCloseSubmenuEvent read FUnhandledCloseSubmenu write FUnhandledCloseSubmenu;

    property OnMenuModelMenuWillShow: TOnMenuModelMenuWillShowEvent read FMenuWillShow write FMenuWillShow;

    property OnMenuModelMenuClosed: TOnMenuModelMenuClosedEvent read FMenuClosed write FMenuClosed;
  end;

  //  TCefNavigationEntryVisitor
  //  /include/capi/cef_browser_capi.h (cef_navigation_entry_visitor_t)
  TEngNavigationEntryVisitor = class(TCefNavigationEntryVisitorOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FVisit: TOnNavigationEntryVisitorVisitEvent;
  protected
    function Visit(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean; override;
  published

    property OnNavigationEntryVisitorVisit: TOnNavigationEntryVisitorVisitEvent read FVisit write FVisit;
  end;

  //  TCefPdfPrintCallback
  //  /include/capi/cef_browser_capi.h (cef_pdf_print_callback_t)
  TEngPdfPrintCallback = class(TCefPdfPrintCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnPdfPrintFinished: TOnPdfPrintCallbackPdfPrintFinishedEvent;
  protected
    procedure OnPdfPrintFinished(const path: ustring; ok: Boolean); override;
  published

    property OnPdfPrintCallbackPdfPrintFinished: TOnPdfPrintCallbackPdfPrintFinishedEvent read FOnPdfPrintFinished write FOnPdfPrintFinished;
  end;

  //  TCefRenderHandler
  //  /include/capi/cef_render_handler_capi.h (cef_render_handler_t)
  TEngRenderHandler = class(TCefRenderHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FGetRootScreenRect: TOnRenderGetRootScreenRectEvent;
    FGetScreenPoint: TOnRenderGetScreenPointEvent;
    FGetScreenInfo: TOnRenderGetScreenInfoEvent;
    FOnStartDragging: TOnRenderStartDraggingEvent;
    FGetAccessibilityHandler: TOnRenderGetAccessibilityHandlerEvent;
    FGetViewRect: TOnRenderGetViewRectEvent;
    FOnPopupShow: TOnRenderPopupShowEvent;
    FOnPopupSize: TOnRenderPopupSizeEvent;
    FOnPaint: TOnRenderPaintEvent;
    FOnAcceleratedPaint: TOnRenderAcceleratedPaintEvent;
    FGetTouchHandleSize: TOnRenderGetTouchHandleSizeEvent;
    FOnTouchHandleStateChanged: TOnRenderTouchHandleStateChangedEvent;
    FOnUpdateDragCursor: TOnRenderUpdateDragCursorEvent;
    FOnScrollOffsetChanged: TOnRenderScrollOffsetChangedEvent;
    FOnIMECompositionRangeChanged: TOnRenderIMECompositionRangeChangedEvent;
    FOnTextSelectionChanged: TOnRenderTextSelectionChangedEvent;
    FOnVirtualKeyboardRequested: TOnRenderVirtualKeyboardRequestedEvent;
  protected
    function GetRootScreenRect(const browser: ICefBrowser; var rect: TCefRect): Boolean; override;
    function GetScreenPoint(const browser: ICefBrowser; viewX: Integer; viewY: Integer; var screenX: Integer; var screenY: Integer): Boolean; override;
    function GetScreenInfo(const browser: ICefBrowser; var screenInfo: TCefScreenInfo): Boolean; override;
    function OnStartDragging(const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x: Integer; y: Integer): Boolean; override;
    procedure GetAccessibilityHandler(var aAccessibilityHandler: ICefAccessibilityHandler); override;
    procedure GetViewRect(const browser: ICefBrowser; var rect: TCefRect); override;
    procedure OnPopupShow(const browser: ICefBrowser; show: Boolean); override;
    procedure OnPopupSize(const browser: ICefBrowser; const rect: PCefRect); override;
    procedure OnPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width: Integer; height: Integer); override;
    procedure OnAcceleratedPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; shared_handle: Pointer); override;
    procedure GetTouchHandleSize(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize); override;
    procedure OnTouchHandleStateChanged(const browser: ICefBrowser; const state: TCefTouchHandleState); override;
    procedure OnUpdateDragCursor(const browser: ICefBrowser; operation: TCefDragOperation); override;
    procedure OnScrollOffsetChanged(const browser: ICefBrowser; x: Double; y: Double); override;
    procedure OnIMECompositionRangeChanged(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect); override;
    procedure OnTextSelectionChanged(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange); override;
    procedure OnVirtualKeyboardRequested(const browser: ICefBrowser; input_mode: TCefTextInpuMode); override;
    procedure RemoveReferences(); override;
  published

    property OnRenderGetRootScreenRect: TOnRenderGetRootScreenRectEvent read FGetRootScreenRect write FGetRootScreenRect;

    property OnRenderGetScreenPoint: TOnRenderGetScreenPointEvent read FGetScreenPoint write FGetScreenPoint;

    property OnRenderGetScreenInfo: TOnRenderGetScreenInfoEvent read FGetScreenInfo write FGetScreenInfo;

    property OnRenderStartDragging: TOnRenderStartDraggingEvent read FOnStartDragging write FOnStartDragging;

    property OnRenderGetAccessibilityHandler: TOnRenderGetAccessibilityHandlerEvent read FGetAccessibilityHandler write FGetAccessibilityHandler;

    property OnRenderGetViewRect: TOnRenderGetViewRectEvent read FGetViewRect write FGetViewRect;

    property OnRenderPopupShow: TOnRenderPopupShowEvent read FOnPopupShow write FOnPopupShow;

    property OnRenderPopupSize: TOnRenderPopupSizeEvent read FOnPopupSize write FOnPopupSize;

    property OnRenderPaint: TOnRenderPaintEvent read FOnPaint write FOnPaint;

    property OnRenderAcceleratedPaint: TOnRenderAcceleratedPaintEvent read FOnAcceleratedPaint write FOnAcceleratedPaint;

    property OnRenderGetTouchHandleSize: TOnRenderGetTouchHandleSizeEvent read FGetTouchHandleSize write FGetTouchHandleSize;

    property OnRenderTouchHandleStateChanged: TOnRenderTouchHandleStateChangedEvent read FOnTouchHandleStateChanged write FOnTouchHandleStateChanged;

    property OnRenderUpdateDragCursor: TOnRenderUpdateDragCursorEvent read FOnUpdateDragCursor write FOnUpdateDragCursor;

    property OnRenderScrollOffsetChanged: TOnRenderScrollOffsetChangedEvent read FOnScrollOffsetChanged write FOnScrollOffsetChanged;

    property OnRenderIMECompositionRangeChanged: TOnRenderIMECompositionRangeChangedEvent read FOnIMECompositionRangeChanged write FOnIMECompositionRangeChanged;

    property OnRenderTextSelectionChanged: TOnRenderTextSelectionChangedEvent read FOnTextSelectionChanged write FOnTextSelectionChanged;

    property OnRenderVirtualKeyboardRequested: TOnRenderVirtualKeyboardRequestedEvent read FOnVirtualKeyboardRequested write FOnVirtualKeyboardRequested;
  end;

  //  TCefRenderProcessHandler
  //  /include/capi/cef_render_process_handler_capi.h (cef_render_process_handler_t)
  TEngRenderProcessHandler = class(TCefRenderProcessHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FGetLoadHandler: TOnRenderProcessGetLoadHandlerEvent;
    FOnProcessMessageReceived: TOnRenderProcessProcessMessageReceivedEvent;
    FOnWebKitInitialized: TOnRenderProcessWebKitInitializedEvent;
    FOnBrowserCreated: TOnRenderProcessBrowserCreatedEvent;
    FOnBrowserDestroyed: TOnRenderProcessBrowserDestroyedEvent;
    FOnContextCreated: TOnRenderProcessContextCreatedEvent;
    FOnContextReleased: TOnRenderProcessContextReleasedEvent;
    FOnUncaughtException: TOnRenderProcessUncaughtExceptionEvent;
    FOnFocusedNodeChanged: TOnRenderProcessFocusedNodeChangedEvent;
  protected
    function GetLoadHandler(): ICefLoadHandler; override;
    function OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage): Boolean; override;
    procedure OnWebKitInitialized(); override;
    procedure OnBrowserCreated(const browser: ICefBrowser; const extra_info: ICefDictionaryValue); override;
    procedure OnBrowserDestroyed(const browser: ICefBrowser); override;
    procedure OnContextCreated(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context); override;
    procedure OnContextReleased(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context); override;
    procedure OnUncaughtException(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const V8Exception: ICefV8Exception; const stackTrace: ICefV8StackTrace); override;
    procedure OnFocusedNodeChanged(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode); override;
    procedure RemoveReferences(); override;
  published

    property OnRenderProcessGetLoadHandler: TOnRenderProcessGetLoadHandlerEvent read FGetLoadHandler write FGetLoadHandler;

    property OnRenderProcessProcessMessageReceived: TOnRenderProcessProcessMessageReceivedEvent read FOnProcessMessageReceived write FOnProcessMessageReceived;

    property OnRenderProcessWebKitInitialized: TOnRenderProcessWebKitInitializedEvent read FOnWebKitInitialized write FOnWebKitInitialized;

    property OnRenderProcessBrowserCreated: TOnRenderProcessBrowserCreatedEvent read FOnBrowserCreated write FOnBrowserCreated;

    property OnRenderProcessBrowserDestroyed: TOnRenderProcessBrowserDestroyedEvent read FOnBrowserDestroyed write FOnBrowserDestroyed;

    property OnRenderProcessContextCreated: TOnRenderProcessContextCreatedEvent read FOnContextCreated write FOnContextCreated;

    property OnRenderProcessContextReleased: TOnRenderProcessContextReleasedEvent read FOnContextReleased write FOnContextReleased;

    property OnRenderProcessUncaughtException: TOnRenderProcessUncaughtExceptionEvent read FOnUncaughtException write FOnUncaughtException;

    property OnRenderProcessFocusedNodeChanged: TOnRenderProcessFocusedNodeChangedEvent read FOnFocusedNodeChanged write FOnFocusedNodeChanged;
  end;

  //  TCefRequestContextHandler
  //  /include/capi/cef_request_context_handler_capi.h (cef_request_context_handler_t)
  TEngRequestContextHandler = class(TCefRequestContextHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnRequestContextInitialized: TOnRequestContextRequestContextInitializedEvent;
    FGetResourceRequestHandler: TOnRequestContextGetResourceRequestHandlerEvent;
  protected
    procedure OnRequestContextInitialized(const request_context: ICefRequestContext); override;
    procedure GetResourceRequestHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler); override;
    procedure RemoveReferences(); override;
  published

    property OnRequestContextRequestContextInitialized: TOnRequestContextRequestContextInitializedEvent read FOnRequestContextInitialized write FOnRequestContextInitialized;

    property OnRequestContextGetResourceRequestHandler: TOnRequestContextGetResourceRequestHandlerEvent read FGetResourceRequestHandler write FGetResourceRequestHandler;
  end;

  //  TCefRequestHandler
  //  /include/capi/cef_request_handler_capi.h (cef_request_handler_t)
  TEngRequestHandler = class(TCefRequestHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforeBrowse: TOnRequestBeforeBrowseEvent;
    FOnOpenUrlFromTab: TOnRequestOpenUrlFromTabEvent;
    FGetAuthCredentials: TOnRequestGetAuthCredentialsEvent;
    FOnCertificateError: TOnRequestCertificateErrorEvent;
    FOnSelectClientCertificate: TOnRequestSelectClientCertificateEvent;
    FGetResourceRequestHandler: TOnRequestGetResourceRequestHandlerEvent;
    FOnRenderViewReady: TOnRequestRenderViewReadyEvent;
    FOnRenderProcessTerminated: TOnRequestRenderProcessTerminatedEvent;
    FOnDocumentAvailableInMainFrame: TOnRequestDocumentAvailableInMainFrameEvent;
  protected
    function OnBeforeBrowse(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean; override;
    function OnOpenUrlFromTab(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean; override;
    function GetAuthCredentials(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean; override;
    function OnCertificateError(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean; override;
    function OnSelectClientCertificate(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean; override;
    procedure GetResourceRequestHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler); override;
    procedure OnRenderViewReady(const browser: ICefBrowser); override;
    procedure OnRenderProcessTerminated(const browser: ICefBrowser; status: TCefTerminationStatus); override;
    procedure OnDocumentAvailableInMainFrame(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published

    property OnRequestBeforeBrowse: TOnRequestBeforeBrowseEvent read FOnBeforeBrowse write FOnBeforeBrowse;

    property OnRequestOpenUrlFromTab: TOnRequestOpenUrlFromTabEvent read FOnOpenUrlFromTab write FOnOpenUrlFromTab;

    property OnRequestGetAuthCredentials: TOnRequestGetAuthCredentialsEvent read FGetAuthCredentials write FGetAuthCredentials;

    property OnRequestCertificateError: TOnRequestCertificateErrorEvent read FOnCertificateError write FOnCertificateError;

    property OnRequestSelectClientCertificate: TOnRequestSelectClientCertificateEvent read FOnSelectClientCertificate write FOnSelectClientCertificate;

    property OnRequestGetResourceRequestHandler: TOnRequestGetResourceRequestHandlerEvent read FGetResourceRequestHandler write FGetResourceRequestHandler;

    property OnRequestRenderViewReady: TOnRequestRenderViewReadyEvent read FOnRenderViewReady write FOnRenderViewReady;

    property OnRequestRenderProcessTerminated: TOnRequestRenderProcessTerminatedEvent read FOnRenderProcessTerminated write FOnRenderProcessTerminated;

    property OnRequestDocumentAvailableInMainFrame: TOnRequestDocumentAvailableInMainFrameEvent read FOnDocumentAvailableInMainFrame write FOnDocumentAvailableInMainFrame;
  end;

  //  TCefResolveCallback
  //  /include/capi/cef_request_context_capi.h (cef_resolve_callback_t)
  TEngResolveCallback = class(TCefResolveCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnResolveCompleted: TOnResolveCallbackResolveCompletedEvent;
  protected
    procedure OnResolveCompleted(result: TCefErrorCode; const resolvedIps: TStrings); override;
  published

    property OnResolveCallbackResolveCompleted: TOnResolveCallbackResolveCompletedEvent read FOnResolveCompleted write FOnResolveCompleted;
  end;

  //  TCefResourceBundleHandler
  //  /include/capi/cef_resource_bundle_handler_capi.h (cef_resource_bundle_handler_t)
  TEngResourceBundleHandler = class(TCefResourceBundleHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FGetLocalizedString: TOnResourceBundleGetLocalizedStringEvent;
    FGetDataResource: TOnResourceBundleGetDataResourceEvent;
    FGetDataResourceForScale: TOnResourceBundleGetDataResourceForScaleEvent;
  protected
    function GetLocalizedString(stringid: Integer; var stringVal: ustring): Boolean; override;
    function GetDataResource(resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): Boolean; override;
    function GetDataResourceForScale(resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): Boolean; override;
    procedure RemoveReferences(); override;
  published

    property OnResourceBundleGetLocalizedString: TOnResourceBundleGetLocalizedStringEvent read FGetLocalizedString write FGetLocalizedString;

    property OnResourceBundleGetDataResource: TOnResourceBundleGetDataResourceEvent read FGetDataResource write FGetDataResource;

    property OnResourceBundleGetDataResourceForScale: TOnResourceBundleGetDataResourceForScaleEvent read FGetDataResourceForScale write FGetDataResourceForScale;
  end;

  //  TCefResourceHandler
  //  /include/capi/cef_resource_handler_capi.h (cef_resource_handler_t)
  TEngResourceHandler = class(TCefResourceHandlerOwn)
  public
    constructor Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest); override;
    destructor Destroy; override;
  protected
    Fopen: TOnResourceOpenEvent;
    FProcessRequest: TOnResourceProcessRequestEvent;
    Fskip: TOnResourceSkipEvent;
    Fread: TOnResourceReadEvent;
    FReadResponse: TOnResourceReadResponseEvent;
    FGetResponseHeaders: TOnResourceGetResponseHeadersEvent;
    FCancel: TOnResourceCancelEvent;
  protected
    function open(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean; override;
    function ProcessRequest(const request: ICefRequest; const callback: ICefCallback): Boolean; override;
    function skip(bytes_to_skip: int64; var bytes_skipped: Int64; const callback: ICefResourceSkipCallback): boolean; override;
    function read(const data_out: Pointer; bytes_to_read: Integer; var bytes_read: Integer; const callback: ICefResourceReadCallback): boolean; override;
    function ReadResponse(const dataOut: Pointer; bytesToRead: Integer; var bytesRead: Integer; const callback: ICefCallback): Boolean; override;
    procedure GetResponseHeaders(const response: ICefResponse; out responseLength: Int64; out redirectUrl: ustring); override;
    procedure Cancel(); override;
  published

    property OnResourceOpen: TOnResourceOpenEvent read Fopen write Fopen;

    property OnResourceProcessRequest: TOnResourceProcessRequestEvent read FProcessRequest write FProcessRequest;

    property OnResourceSkip: TOnResourceSkipEvent read Fskip write Fskip;

    property OnResourceRead: TOnResourceReadEvent read Fread write Fread;

    property OnResourceReadResponse: TOnResourceReadResponseEvent read FReadResponse write FReadResponse;

    property OnResourceGetResponseHeaders: TOnResourceGetResponseHeadersEvent read FGetResponseHeaders write FGetResponseHeaders;

    property OnResourceCancel: TOnResourceCancelEvent read FCancel write FCancel;
  end;

  //  TCefResponseFilter
  //  /include/capi/cef_response_filter_capi.h (cef_response_filter_t)
  TEngResponseFilter = class(TCefResponseFilterOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FInitFilter: TOnResponseFilterInitFilterEvent;
    FFilter: TOnResponseFilterFilterEvent;
  protected
    function InitFilter(): Boolean; override;
    function Filter(data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size: NativeUInt; var data_out_written: NativeUInt): TCefResponseFilterStatus; override;
  published

    property OnResponseFilterInitFilter: TOnResponseFilterInitFilterEvent read FInitFilter write FInitFilter;

    property OnResponseFilterFilter: TOnResponseFilterFilterEvent read FFilter write FFilter;
  end;

  //  TCefRunFileDialogCallback
  //  /include/capi/cef_browser_capi.h (cef_run_file_dialog_callback_t)
  TEngRunFileDialogCallback = class(TCefRunFileDialogCallbackOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnFileDialogDismissed: TOnRunFileDialogCallbackFileDialogDismissedEvent;
  protected
    procedure OnFileDialogDismissed(const filePaths: TStrings); override;
  published

    property OnRunFileDialogCallbackFileDialogDismissed: TOnRunFileDialogCallbackFileDialogDismissedEvent read FOnFileDialogDismissed write FOnFileDialogDismissed;
  end;

  //  TCefSchemeHandlerFactory
  //  /include/capi/cef_scheme_capi.h (cef_scheme_handler_factory_t)
  TEngSchemeHandlerFactory = class(TCefSchemeHandlerFactoryOwn)
  public
    constructor Create(const AClass: TCefResourceHandlerClass); override;
    destructor Destroy; override;
  protected
    FNew: TOnSchemeFactoryNewEvent;
  protected
    function New(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler; override;
  published

    property OnSchemeFactoryNew: TOnSchemeFactoryNewEvent read FNew write FNew;
  end;

  //  TCefSetCookieCallback
  //  /include/capi/cef_cookie_capi.h (cef_set_cookie_callback_t)
  TEngSetCookieCallback = class(TCefSetCookieCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnSetCookieCallbackCompleteEvent;
  protected
    procedure OnComplete(success: Boolean); override;
  published

    property OnSetCookieCallbackComplete: TOnSetCookieCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  TCefStringVisitor
  //  /include/capi/cef_string_visitor_capi.h (cef_string_visitor_t)
  TEngStringVisitor = class(TCefStringVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FVisit: TOnStringVisitorVisitEvent;
  protected
    procedure Visit(const str: ustring); override;
  published

    property OnStringVisitorVisit: TOnStringVisitorVisitEvent read FVisit write FVisit;
  end;

  //  TCefTask
  //  /include/capi/cef_task_capi.h (cef_task_t)
  TEngTask = class(TCefTaskOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FExecute: TOnTaskExecuteEvent;
  protected
    procedure Execute(); override;
  published

    property OnTaskExecute: TOnTaskExecuteEvent read FExecute write FExecute;
  end;

  //  TCefUrlrequestClient
  //  /include/capi/cef_urlrequest_capi.h (cef_urlrequest_client_t)
  TEngUrlrequestClient = class(TCefUrlrequestClientOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnGetAuthCredentials: TOnUrlrequestClientGetAuthCredentialsEvent;
    FOnRequestComplete: TOnUrlrequestClientRequestCompleteEvent;
    FOnUploadProgress: TOnUrlrequestClientUploadProgressEvent;
    FOnDownloadProgress: TOnUrlrequestClientDownloadProgressEvent;
    FOnDownloadData: TOnUrlrequestClientDownloadDataEvent;
  protected
    function OnGetAuthCredentials(isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean; override;
    procedure OnRequestComplete(const request: ICefUrlRequest); override;
    procedure OnUploadProgress(const request: ICefUrlRequest; current: Int64; total: Int64); override;
    procedure OnDownloadProgress(const request: ICefUrlRequest; current: Int64; total: Int64); override;
    procedure OnDownloadData(const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt); override;
    procedure RemoveReferences(); override;
  published

    property OnUrlrequestClientGetAuthCredentials: TOnUrlrequestClientGetAuthCredentialsEvent read FOnGetAuthCredentials write FOnGetAuthCredentials;

    property OnUrlrequestClientRequestComplete: TOnUrlrequestClientRequestCompleteEvent read FOnRequestComplete write FOnRequestComplete;

    property OnUrlrequestClientUploadProgress: TOnUrlrequestClientUploadProgressEvent read FOnUploadProgress write FOnUploadProgress;

    property OnUrlrequestClientDownloadProgress: TOnUrlrequestClientDownloadProgressEvent read FOnDownloadProgress write FOnDownloadProgress;

    property OnUrlrequestClientDownloadData: TOnUrlrequestClientDownloadDataEvent read FOnDownloadData write FOnDownloadData;
  end;

  //  TCefV8Accessor
  //  /include/capi/cef_v8_capi.h (cef_v8accessor_t)
  TEngV8Accessor = class(TCefV8AccessorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FGet: TOnV8AccessorGetEvent;
    FSet_: TOnV8AccessorSet_Event;
  protected
    function Get(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): Boolean; override;
    function Set_(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): Boolean; override;
  published

    property OnV8AccessorGet: TOnV8AccessorGetEvent read FGet write FGet;

    property OnV8AccessorSet_: TOnV8AccessorSet_Event read FSet_ write FSet_;
  end;

  //  TCefv8ArrayBufferReleaseCallback
  //  /include/capi/cef_v8_capi.h (cef_v8array_buffer_release_callback_t)
  TEngV8ArrayBufferReleaseCallback = class(TCefv8ArrayBufferReleaseCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FReleaseBuffer: TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent;
  protected
    procedure ReleaseBuffer(buffer: Pointer); override;
  published

    property OnV8ArrayBufferReleaseCallbackReleaseBuffer: TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent read FReleaseBuffer write FReleaseBuffer;
  end;

  //  TCefv8Handler
  //  /include/capi/cef_v8_capi.h (cef_v8handler_t)
  TEngV8Handler = class(TCefv8HandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FExecute: TOnV8ExecuteEvent;
  protected
    function Execute(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean; override;
  published

    property OnV8Execute: TOnV8ExecuteEvent read FExecute write FExecute;
  end;

  //  TCefV8Interceptor
  //  /include/capi/cef_v8_capi.h (cef_v8interceptor_t)
  TEngV8Interceptor = class(TCefV8InterceptorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FGetByName: TOnV8InterceptorGetByNameEvent;
    FGetByIndex: TOnV8InterceptorGetByIndexEvent;
    FSetByName: TOnV8InterceptorSetByNameEvent;
    FSetByIndex: TOnV8InterceptorSetByIndexEvent;
  protected
    function GetByName(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean; override;
    function GetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean; override;
    function SetByName(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean; override;
    function SetByIndex(index: integer; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean; override;
  published

    property OnV8InterceptorGetByName: TOnV8InterceptorGetByNameEvent read FGetByName write FGetByName;

    property OnV8InterceptorGetByIndex: TOnV8InterceptorGetByIndexEvent read FGetByIndex write FGetByIndex;

    property OnV8InterceptorSetByName: TOnV8InterceptorSetByNameEvent read FSetByName write FSetByName;

    property OnV8InterceptorSetByIndex: TOnV8InterceptorSetByIndexEvent read FSetByIndex write FSetByIndex;
  end;

  //  TCefServerHandler
  //  /include/capi/cef_server_capi.h (cef_server_handler_t)
  TEngServerHandler = class(TCEFServerHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnServerCreated: TOnServerServerCreatedEvent;
    FOnServerDestroyed: TOnServerServerDestroyedEvent;
    FOnClientConnected: TOnServerClientConnectedEvent;
    FOnClientDisconnected: TOnServerClientDisconnectedEvent;
    FOnHttpRequest: TOnServerHttpRequestEvent;
    FOnWebSocketRequest: TOnServerWebSocketRequestEvent;
    FOnWebSocketConnected: TOnServerWebSocketConnectedEvent;
    FOnWebSocketMessage: TOnServerWebSocketMessageEvent;
  protected
    procedure OnServerCreated(const server: ICefServer); override;
    procedure OnServerDestroyed(const server: ICefServer); override;
    procedure OnClientConnected(const server: ICefServer; connection_id: Integer); override;
    procedure OnClientDisconnected(const server: ICefServer; connection_id: Integer); override;
    procedure OnHttpRequest(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest); override;
    procedure OnWebSocketRequest(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback); override;
    procedure OnWebSocketConnected(const server: ICefServer; connection_id: Integer); override;
    procedure OnWebSocketMessage(const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt); override;
  published

    property OnServerServerCreated: TOnServerServerCreatedEvent read FOnServerCreated write FOnServerCreated;

    property OnServerServerDestroyed: TOnServerServerDestroyedEvent read FOnServerDestroyed write FOnServerDestroyed;

    property OnServerClientConnected: TOnServerClientConnectedEvent read FOnClientConnected write FOnClientConnected;

    property OnServerClientDisconnected: TOnServerClientDisconnectedEvent read FOnClientDisconnected write FOnClientDisconnected;

    property OnServerHttpRequest: TOnServerHttpRequestEvent read FOnHttpRequest write FOnHttpRequest;

    property OnServerWebSocketRequest: TOnServerWebSocketRequestEvent read FOnWebSocketRequest write FOnWebSocketRequest;

    property OnServerWebSocketConnected: TOnServerWebSocketConnectedEvent read FOnWebSocketConnected write FOnWebSocketConnected;

    property OnServerWebSocketMessage: TOnServerWebSocketMessageEvent read FOnWebSocketMessage write FOnWebSocketMessage;
  end;

  //  TCefCookieAccessFilter
  //  /include/capi/cef_resource_request_handler_capi.h (cef_cookie_access_filter_t)
  TEngCookieAccessFilter = class(TCefCookieAccessFilterOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FCanSendCookie: TOnCookieAccessFilterCanSendCookieEvent;
    FCanSaveCookie: TOnCookieAccessFilterCanSaveCookieEvent;
  protected
    function CanSendCookie(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie): boolean; override;
    function CanSaveCookie(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie): boolean; override;
    procedure RemoveReferences(); override;
  published

    property OnCookieAccessFilterCanSendCookie: TOnCookieAccessFilterCanSendCookieEvent read FCanSendCookie write FCanSendCookie;

    property OnCookieAccessFilterCanSaveCookie: TOnCookieAccessFilterCanSaveCookieEvent read FCanSaveCookie write FCanSaveCookie;
  end;

  //  TCefResourceRequestHandler
  //  /include/capi/cef_resource_request_handler_capi.h (cef_resource_request_handler_t)
  TEngResourceRequestHandler = class(TCefResourceRequestHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforeResourceLoad: TOnResourceRequestBeforeResourceLoadEvent;
    FOnResourceResponse: TOnResourceRequestResourceResponseEvent;
    FGetCookieAccessFilter: TOnResourceRequestGetCookieAccessFilterEvent;
    FGetResourceHandler: TOnResourceRequestGetResourceHandlerEvent;
    FOnResourceRedirect: TOnResourceRequestResourceRedirectEvent;
    FGetResourceResponseFilter: TOnResourceRequestGetResourceResponseFilterEvent;
    FOnResourceLoadComplete: TOnResourceRequestResourceLoadCompleteEvent;
    FOnProtocolExecution: TOnResourceRequestProtocolExecutionEvent;
  protected
    function OnBeforeResourceLoad(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback): TCefReturnValue; override;
    function OnResourceResponse(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse): Boolean; override;
    procedure GetCookieAccessFilter(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aFilter: ICefCookieAccessFilter); override;
    procedure GetResourceHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler); override;
    procedure OnResourceRedirect(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring); override;
    procedure GetResourceResponseFilter(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var aResponseFilter: ICefResponseFilter); override;
    procedure OnResourceLoadComplete(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64); override;
    procedure OnProtocolExecution(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean); override;
    procedure RemoveReferences(); override;
  published

    property OnResourceRequestBeforeResourceLoad: TOnResourceRequestBeforeResourceLoadEvent read FOnBeforeResourceLoad write FOnBeforeResourceLoad;

    property OnResourceRequestResourceResponse: TOnResourceRequestResourceResponseEvent read FOnResourceResponse write FOnResourceResponse;

    property OnResourceRequestGetCookieAccessFilter: TOnResourceRequestGetCookieAccessFilterEvent read FGetCookieAccessFilter write FGetCookieAccessFilter;

    property OnResourceRequestGetResourceHandler: TOnResourceRequestGetResourceHandlerEvent read FGetResourceHandler write FGetResourceHandler;

    property OnResourceRequestResourceRedirect: TOnResourceRequestResourceRedirectEvent read FOnResourceRedirect write FOnResourceRedirect;

    property OnResourceRequestGetResourceResponseFilter: TOnResourceRequestGetResourceResponseFilterEvent read FGetResourceResponseFilter write FGetResourceResponseFilter;

    property OnResourceRequestResourceLoadComplete: TOnResourceRequestResourceLoadCompleteEvent read FOnResourceLoadComplete write FOnResourceLoadComplete;

    property OnResourceRequestProtocolExecution: TOnResourceRequestProtocolExecutionEvent read FOnProtocolExecution write FOnProtocolExecution;
  end;

  //  TCefMediaObserver
  //  /include/capi/cef_media_router_capi.h (cef_media_observer_t)
  TEngMediaObserver = class(TCefMediaObserverOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnSinks: TOnMediaObserverSinksEvent;
    FOnRoutes: TOnMediaObserverRoutesEvent;
    FOnRouteStateChanged: TOnMediaObserverRouteStateChangedEvent;
    FOnRouteMessageReceived: TOnMediaObserverRouteMessageReceivedEvent;
  protected
    procedure OnSinks(const sinks: TCefMediaSinkArray); override;
    procedure OnRoutes(const routes: TCefMediaRouteArray); override;
    procedure OnRouteStateChanged(const route: ICefMediaRoute; state: TCefMediaRouteConnectionState); override;
    procedure OnRouteMessageReceived(const route: ICefMediaRoute; const message_: ustring); override;
  published

    property OnMediaObserverSinks: TOnMediaObserverSinksEvent read FOnSinks write FOnSinks;

    property OnMediaObserverRoutes: TOnMediaObserverRoutesEvent read FOnRoutes write FOnRoutes;

    property OnMediaObserverRouteStateChanged: TOnMediaObserverRouteStateChangedEvent read FOnRouteStateChanged write FOnRouteStateChanged;

    property OnMediaObserverRouteMessageReceived: TOnMediaObserverRouteMessageReceivedEvent read FOnRouteMessageReceived write FOnRouteMessageReceived;
  end;

  //  TCefMediaRouteCreateCallback
  //  /include/capi/cef_media_router_capi.h (cef_media_route_create_callback_t)
  TEngMediaRouteCreateCallback = class(TCefMediaRouteCreateCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnMediaRouteCreateFinished: TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent;
  protected
    procedure OnMediaRouteCreateFinished(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute); override;
  published

    property OnMediaRouteCreateCallbackMediaRouteCreateFinished: TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent read FOnMediaRouteCreateFinished write FOnMediaRouteCreateFinished;
  end;

  //  TCefMenuButtonDelegate
  //  /include/capi/views/cef_menu_button_delegate_capi.h (cef_menu_button_delegate_t)
  TEngMenuButtonDelegate = class(TCefMenuButtonDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnMenuButtonPressed: TOnMenuButtonMenuButtonPressedEvent;
  protected
    procedure OnMenuButtonPressed(const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock); override;
    procedure InitializeCEFMethods();
  published

    property OnMenuButtonMenuButtonPressed: TOnMenuButtonMenuButtonPressedEvent read FOnMenuButtonPressed write FOnMenuButtonPressed;
  end;

  //  TCefButtonDelegate
  //  /include/capi/views/cef_button_delegate_capi.h (cef_button_delegate_t)
  TEngButtonDelegate = class(TCefButtonDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnButtonPressed: TOnButtonButtonPressedEvent;
    FOnButtonStateChanged: TOnButtonButtonStateChangedEvent;
  protected
    procedure OnButtonPressed(const button: ICefButton); override;
    procedure OnButtonStateChanged(const button: ICefButton); override;
    procedure InitializeCEFMethods();
  published

    property OnButtonButtonPressed: TOnButtonButtonPressedEvent read FOnButtonPressed write FOnButtonPressed;

    property OnButtonButtonStateChanged: TOnButtonButtonStateChangedEvent read FOnButtonStateChanged write FOnButtonStateChanged;
  end;

  //  TCefBrowserViewDelegate
  //  /include/capi/views/cef_browser_view_delegate_capi.h (cef_browser_view_delegate_t)
  TEngBrowserViewDelegate = class(TCefBrowserViewDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FGetChromeToolbarType: TOnBrowserViewGetChromeToolbarTypeEvent;
    FOnBrowserCreated: TOnBrowserViewBrowserCreatedEvent;
    FOnBrowserDestroyed: TOnBrowserViewBrowserDestroyedEvent;
    FOnGetDelegateForPopupBrowserView: TOnBrowserViewGetDelegateForPopupBrowserViewEvent;
    FOnPopupBrowserViewCreated: TOnBrowserViewPopupBrowserViewCreatedEvent;
  protected
    function GetChromeToolbarType(): TCefChromeToolbarType; override;
    procedure OnBrowserCreated(const browser_view: ICefBrowserView; const browser: ICefBrowser); override;
    procedure OnBrowserDestroyed(const browser_view: ICefBrowserView; const browser: ICefBrowser); override;
    procedure OnGetDelegateForPopupBrowserView(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate); override;
    procedure OnPopupBrowserViewCreated(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean); override;
    procedure InitializeCEFMethods();
  published

    property OnBrowserViewGetChromeToolbarType: TOnBrowserViewGetChromeToolbarTypeEvent read FGetChromeToolbarType write FGetChromeToolbarType;

    property OnBrowserViewBrowserCreated: TOnBrowserViewBrowserCreatedEvent read FOnBrowserCreated write FOnBrowserCreated;

    property OnBrowserViewBrowserDestroyed: TOnBrowserViewBrowserDestroyedEvent read FOnBrowserDestroyed write FOnBrowserDestroyed;

    property OnBrowserViewGetDelegateForPopupBrowserView: TOnBrowserViewGetDelegateForPopupBrowserViewEvent read FOnGetDelegateForPopupBrowserView write FOnGetDelegateForPopupBrowserView;

    property OnBrowserViewPopupBrowserViewCreated: TOnBrowserViewPopupBrowserViewCreatedEvent read FOnPopupBrowserViewCreated write FOnPopupBrowserViewCreated;
  end;

  //  TCefPanelDelegate
  //  /include/capi/views/cef_panel_delegate_capi.h (cef_panel_delegate_t)
  TEngPanelDelegate = class(TCefPanelDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
  protected
  published
  end;

  //  TCefTextfieldDelegate
  //  /include/capi/views/cef_textfield_delegate_capi.h (cef_textfield_delegate_t)
  TEngTextfieldDelegate = class(TCefTextfieldDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnKeyEvent: TOnTextfieldKeyEvent;
    FOnAfterUserAction: TOnTextfieldAfterUserActionEvent;
  protected
    procedure OnKeyEvent(const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean); override;
    procedure OnAfterUserAction(const textfield: ICefTextfield); override;
    procedure InitializeCEFMethods();
  published

    property OnTextfieldKey: TOnTextfieldKeyEvent read FOnKeyEvent write FOnKeyEvent;

    property OnTextfieldAfterUserAction: TOnTextfieldAfterUserActionEvent read FOnAfterUserAction write FOnAfterUserAction;
  end;

  //  TCefViewDelegate
  //  /include/capi/views/cef_view_delegate_capi.h (cef_view_delegate_t)
  TEngViewDelegate = class(TCefViewDelegateOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnGetPreferredSize: TOnViewGetPreferredSizeEvent;
    FOnGetMinimumSize: TOnViewGetMinimumSizeEvent;
    FOnGetMaximumSize: TOnViewGetMaximumSizeEvent;
    FOnGetHeightForWidth: TOnViewGetHeightForWidthEvent;
    FOnParentViewChanged: TOnViewParentViewChangedEvent;
    FOnChildViewChanged: TOnViewChildViewChangedEvent;
    FOnWindowChanged: TOnViewWindowChangedEvent;
    FOnLayoutChanged: TOnViewLayoutChangedEvent;
    FOnFocus: TOnViewFocusEvent;
    FOnBlur: TOnViewBlurEvent;
  protected
    procedure OnGetPreferredSize(const view: ICefView; var aResult: TCefSize); override;
    procedure OnGetMinimumSize(const view: ICefView; var aResult: TCefSize); override;
    procedure OnGetMaximumSize(const view: ICefView; var aResult: TCefSize); override;
    procedure OnGetHeightForWidth(const view: ICefView; width: Integer; var aResult: Integer); override;
    procedure OnParentViewChanged(const view: ICefView; added: boolean; const parent: ICefView); override;
    procedure OnChildViewChanged(const view: ICefView; added: boolean; const child: ICefView); override;
    procedure OnWindowChanged(const view: ICefView; added: boolean); override;
    procedure OnLayoutChanged(const view: ICefView; new_bounds: TCefRect); override;
    procedure OnFocus(const view: ICefView); override;
    procedure OnBlur(const view: ICefView); override;
    procedure InitializeCEFMethods(); override;
  published

    property OnViewGetPreferredSize: TOnViewGetPreferredSizeEvent read FOnGetPreferredSize write FOnGetPreferredSize;

    property OnViewGetMinimumSize: TOnViewGetMinimumSizeEvent read FOnGetMinimumSize write FOnGetMinimumSize;

    property OnViewGetMaximumSize: TOnViewGetMaximumSizeEvent read FOnGetMaximumSize write FOnGetMaximumSize;

    property OnViewGetHeightForWidth: TOnViewGetHeightForWidthEvent read FOnGetHeightForWidth write FOnGetHeightForWidth;

    property OnViewParentViewChanged: TOnViewParentViewChangedEvent read FOnParentViewChanged write FOnParentViewChanged;

    property OnViewChildViewChanged: TOnViewChildViewChangedEvent read FOnChildViewChanged write FOnChildViewChanged;

    property OnViewWindowChanged: TOnViewWindowChangedEvent read FOnWindowChanged write FOnWindowChanged;

    property OnViewLayoutChanged: TOnViewLayoutChangedEvent read FOnLayoutChanged write FOnLayoutChanged;

    property OnViewFocus: TOnViewFocusEvent read FOnFocus write FOnFocus;

    property OnViewBlur: TOnViewBlurEvent read FOnBlur write FOnBlur;
  end;

  //  TCefAudioHandler
  //  /include/capi/cef_audio_handler_capi.h (cef_audio_handler_t)
  TEngAudioHandler = class(TCefAudioHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnGetAudioParameters: TOnAudioGetAudioParametersEvent;
    FOnAudioStreamStarted: TOnAudioAudioStreamStartedEvent;
    FOnAudioStreamPacket: TOnAudioAudioStreamPacketEvent;
    FOnAudioStreamStopped: TOnAudioAudioStreamStoppedEvent;
    FOnAudioStreamError: TOnAudioAudioStreamErrorEvent;
  protected
    procedure OnGetAudioParameters(const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean); override;
    procedure OnAudioStreamStarted(const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer); override;
    procedure OnAudioStreamPacket(const browser: ICefBrowser; const data: PPSingle; frames: integer; pts: int64); override;
    procedure OnAudioStreamStopped(const browser: ICefBrowser); override;
    procedure OnAudioStreamError(const browser: ICefBrowser; const message_: ustring); override;
    procedure RemoveReferences(); override;
  published

    property OnAudioGetAudioParameters: TOnAudioGetAudioParametersEvent read FOnGetAudioParameters write FOnGetAudioParameters;

    property OnAudioAudioStreamStarted: TOnAudioAudioStreamStartedEvent read FOnAudioStreamStarted write FOnAudioStreamStarted;

    property OnAudioAudioStreamPacket: TOnAudioAudioStreamPacketEvent read FOnAudioStreamPacket write FOnAudioStreamPacket;

    property OnAudioAudioStreamStopped: TOnAudioAudioStreamStoppedEvent read FOnAudioStreamStopped write FOnAudioStreamStopped;

    property OnAudioAudioStreamError: TOnAudioAudioStreamErrorEvent read FOnAudioStreamError write FOnAudioStreamError;
  end;

  //  TCefDevToolsMessageObserver
  //  /include/capi/cef_devtools_message_observer_capi.h (cef_dev_tools_message_observer_t)
  TEngDevToolsMessageObserver = class(TCEFDevToolsMessageObserverOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnDevToolsMessage: TOnDevToolsMessageObserverDevToolsMessageEvent;
    FOnDevToolsMethodResult: TOnDevToolsMessageObserverDevToolsMethodResultEvent;
    FOnDevToolsEvent: TOnDevToolsMessageObserverDevToolsEvent;
    FOnDevToolsAgentAttached: TOnDevToolsMessageObserverDevToolsAgentAttachedEvent;
    FOnDevToolsAgentDetached: TOnDevToolsMessageObserverDevToolsAgentDetachedEvent;
  protected
    procedure OnDevToolsMessage(const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean); override;
    procedure OnDevToolsMethodResult(const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt); override;
    procedure OnDevToolsEvent(const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt); override;
    procedure OnDevToolsAgentAttached(const browser: ICefBrowser); override;
    procedure OnDevToolsAgentDetached(const browser: ICefBrowser); override;
  published

    property OnDevToolsMessageObserverDevToolsMessage: TOnDevToolsMessageObserverDevToolsMessageEvent read FOnDevToolsMessage write FOnDevToolsMessage;

    property OnDevToolsMessageObserverDevToolsMethodResult: TOnDevToolsMessageObserverDevToolsMethodResultEvent read FOnDevToolsMethodResult write FOnDevToolsMethodResult;

    property OnDevToolsMessageObserverDevTools: TOnDevToolsMessageObserverDevToolsEvent read FOnDevToolsEvent write FOnDevToolsEvent;

    property OnDevToolsMessageObserverDevToolsAgentAttached: TOnDevToolsMessageObserverDevToolsAgentAttachedEvent read FOnDevToolsAgentAttached write FOnDevToolsAgentAttached;

    property OnDevToolsMessageObserverDevToolsAgentDetached: TOnDevToolsMessageObserverDevToolsAgentDetachedEvent read FOnDevToolsAgentDetached write FOnDevToolsAgentDetached;
  end;


  TEngMediaSinkDeviceInfoCallback = class(TCefMediaSinkDeviceInfoCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnMediaSinkDeviceInfo: TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent;
  protected
    procedure OnMediaSinkDeviceInfo(const ip_address: ustring; port: integer; const model_name: ustring); override;
  published

    property OnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfo: TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent read FOnMediaSinkDeviceInfo write FOnMediaSinkDeviceInfo;
  end;

  //  TCefPrintHandler
  //  /include/capi/cef_print_handler_capi.h (cef_print_handler_t)
  TEngPrintHandler = class(TCefPrintHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnPrintStart: TOnPrintPrintStartEvent;
    FOnPrintSettings: TOnPrintPrintSettingsEvent;
    FOnPrintDialog: TOnPrintPrintDialogEvent;
    FOnPrintJob: TOnPrintPrintJobEvent;
    FOnPrintReset: TOnPrintPrintResetEvent;
    FGetPDFPaperSize: TOnPrintGetPDFPaperSizeEvent;
  protected
    procedure OnPrintStart(const browser: ICefBrowser); override;
    procedure OnPrintSettings(const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean); override;
    procedure OnPrintDialog(const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean); override;
    procedure OnPrintJob(const browser: ICefBrowser; const documentName: ustring; const PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult: boolean); override;
    procedure OnPrintReset(const browser: ICefBrowser); override;
    procedure GetPDFPaperSize(const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult: TCefSize); override;
    procedure RemoveReferences(); override;
  published

    property OnPrintPrintStart: TOnPrintPrintStartEvent read FOnPrintStart write FOnPrintStart;

    property OnPrintPrintSettings: TOnPrintPrintSettingsEvent read FOnPrintSettings write FOnPrintSettings;

    property OnPrintPrintDialog: TOnPrintPrintDialogEvent read FOnPrintDialog write FOnPrintDialog;

    property OnPrintPrintJob: TOnPrintPrintJobEvent read FOnPrintJob write FOnPrintJob;

    property OnPrintPrintReset: TOnPrintPrintResetEvent read FOnPrintReset write FOnPrintReset;

    property OnPrintGetPDFPaperSize: TOnPrintGetPDFPaperSizeEvent read FGetPDFPaperSize write FGetPDFPaperSize;
  end;

  //  TCefFrameHandler
  //  /include/capi/cef_frame_handler_capi.h (cef_frame_handler_t)
  TEngFrameHandler = class(TCefFrameHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnFrameCreated: TOnFrameFrameCreatedEvent;
    FOnFrameAttached: TOnFrameFrameAttachedEvent;
    FOnFrameDetached: TOnFrameFrameDetachedEvent;
    FOnMainFrameChanged: TOnFrameMainFrameChangedEvent;
  protected
    procedure OnFrameCreated(const browser: ICefBrowser; const frame: ICefFrame); override;
    procedure OnFrameAttached(const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean); override;
    procedure OnFrameDetached(const browser: ICefBrowser; const frame: ICefFrame); override;
    procedure OnMainFrameChanged(const browser: ICefBrowser; const old_frame: ICefFrame; const new_frame: ICefFrame); override;
    procedure RemoveReferences(); override;
  published

    property OnFrameFrameCreated: TOnFrameFrameCreatedEvent read FOnFrameCreated write FOnFrameCreated;

    property OnFrameFrameAttached: TOnFrameFrameAttachedEvent read FOnFrameAttached write FOnFrameAttached;

    property OnFrameFrameDetached: TOnFrameFrameDetachedEvent read FOnFrameDetached write FOnFrameDetached;

    property OnFrameMainFrameChanged: TOnFrameMainFrameChangedEvent read FOnMainFrameChanged write FOnMainFrameChanged;
  end;

  //  TCefCommandHandler
  //  /include/capi/cef_command_handler_capi.h (cef_command_handler_t)
  TEngCommandHandler = class(TCefCommandHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnChromeCommand: TOnCommandChromeCommandEvent;
  protected
    function OnChromeCommand(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean; override;
    procedure RemoveReferences(); override;
  published

    property OnCommandChromeCommand: TOnCommandChromeCommandEvent read FOnChromeCommand write FOnChromeCommand;
  end;

  //  TCefPermissionHandler
  //  /include/capi/cef_permission_handler_capi.h (cef_permission_handler_t)
  TEngPermissionHandler = class(TCefPermissionHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnRequestMediaAccessPermission: TOnPermissionRequestMediaAccessPermissionEvent;
    FOnShowPermissionPrompt: TOnPermissionShowPermissionPromptEvent;
    FOnDismissPermissionPrompt: TOnPermissionDismissPermissionPromptEvent;
  protected
    function OnRequestMediaAccessPermission(const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback): boolean; override;
    function OnShowPermissionPrompt(const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback): boolean; override;
    procedure OnDismissPermissionPrompt(const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult); override;
    procedure RemoveReferences(); override;
  published

    property OnPermissionRequestMediaAccessPermission: TOnPermissionRequestMediaAccessPermissionEvent read FOnRequestMediaAccessPermission write FOnRequestMediaAccessPermission;

    property OnPermissionShowPermissionPrompt: TOnPermissionShowPermissionPromptEvent read FOnShowPermissionPrompt write FOnShowPermissionPrompt;

    property OnPermissionDismissPermissionPrompt: TOnPermissionDismissPermissionPromptEvent read FOnDismissPermissionPrompt write FOnDismissPermissionPrompt;
  end;

  //  TCefMediaAccessHandler
  //  /include/capi/cef_media_access_handler_capi.h (cef_media_access_handler_t)
  TEngMediaAccessHandler = class(TCefMediaAccessHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnRequestMediaAccessPermission: TOnMediaAccessRequestMediaAccessPermissionEvent;
  protected
    function OnRequestMediaAccessPermission(const browser: ICefBrowser; const frame: ICefFrame; const requesting_url: ustring; requested_permissions: TCefMediaAccessPermissionTypes; const callback: ICefMediaAccessCallback): boolean;
    procedure RemoveReferences(); override;
  published

    property OnMediaAccessRequestMediaAccessPermission: TOnMediaAccessRequestMediaAccessPermissionEvent read FOnRequestMediaAccessPermission write FOnRequestMediaAccessPermission;
  end;

  //  TCefClient
  //  /include/capi/cef_client_capi.h (cef_client_t)
  TEngClient = class(TCefClientOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnProcessMessageReceived: TOnClientProcessMessageReceivedEvent;
    FGetAudioHandler: TOnClientGetAudioHandlerEvent;
    FGetCommandHandler: TOnClientGetCommandHandlerEvent;
    FGetContextMenuHandler: TOnClientGetContextMenuHandlerEvent;
    FGetDialogHandler: TOnClientGetDialogHandlerEvent;
    FGetDisplayHandler: TOnClientGetDisplayHandlerEvent;
    FGetDownloadHandler: TOnClientGetDownloadHandlerEvent;
    FGetDragHandler: TOnClientGetDragHandlerEvent;
    FGetFindHandler: TOnClientGetFindHandlerEvent;
    FGetFocusHandler: TOnClientGetFocusHandlerEvent;
    FGetFrameHandler: TOnClientGetFrameHandlerEvent;
    FGetPermissionHandler: TOnClientGetPermissionHandlerEvent;
    FGetJsdialogHandler: TOnClientGetJsdialogHandlerEvent;
    FGetKeyboardHandler: TOnClientGetKeyboardHandlerEvent;
    FGetLifeSpanHandler: TOnClientGetLifeSpanHandlerEvent;
    FGetLoadHandler: TOnClientGetLoadHandlerEvent;
    FGetPrintHandler: TOnClientGetPrintHandlerEvent;
    FGetRenderHandler: TOnClientGetRenderHandlerEvent;
    FGetRequestHandler: TOnClientGetRequestHandlerEvent;
  protected
    function OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message_: ICefProcessMessage): Boolean; override;
    procedure GetAudioHandler(var aHandler: ICefAudioHandler); override;
    procedure GetCommandHandler(var aHandler: ICefCommandHandler); override;
    procedure GetContextMenuHandler(var aHandler: ICefContextMenuHandler); override;
    procedure GetDialogHandler(var aHandler: ICefDialogHandler); override;
    procedure GetDisplayHandler(var aHandler: ICefDisplayHandler); override;
    procedure GetDownloadHandler(var aHandler: ICefDownloadHandler); override;
    procedure GetDragHandler(var aHandler: ICefDragHandler); override;
    procedure GetFindHandler(var aHandler: ICefFindHandler); override;
    procedure GetFocusHandler(var aHandler: ICefFocusHandler); override;
    procedure GetFrameHandler(var aHandler: ICefFrameHandler); override;
    procedure GetPermissionHandler(var aHandler: ICefPermissionHandler); override;
    procedure GetJsdialogHandler(var aHandler: ICefJsdialogHandler); override;
    procedure GetKeyboardHandler(var aHandler: ICefKeyboardHandler); override;
    procedure GetLifeSpanHandler(var aHandler: ICefLifeSpanHandler); override;
    procedure GetLoadHandler(var aHandler: ICefLoadHandler); override;
    procedure GetPrintHandler(var aHandler: ICefPrintHandler); override;
    procedure GetRenderHandler(var aHandler: ICefRenderHandler); override;
    procedure GetRequestHandler(var aHandler: ICefRequestHandler); override;
    procedure RemoveReferences(); override;
  published

    property OnClientProcessMessageReceived: TOnClientProcessMessageReceivedEvent read FOnProcessMessageReceived write FOnProcessMessageReceived;

    property OnClientGetAudioHandler: TOnClientGetAudioHandlerEvent read FGetAudioHandler write FGetAudioHandler;

    property OnClientGetCommandHandler: TOnClientGetCommandHandlerEvent read FGetCommandHandler write FGetCommandHandler;

    property OnClientGetContextMenuHandler: TOnClientGetContextMenuHandlerEvent read FGetContextMenuHandler write FGetContextMenuHandler;

    property OnClientGetDialogHandler: TOnClientGetDialogHandlerEvent read FGetDialogHandler write FGetDialogHandler;

    property OnClientGetDisplayHandler: TOnClientGetDisplayHandlerEvent read FGetDisplayHandler write FGetDisplayHandler;

    property OnClientGetDownloadHandler: TOnClientGetDownloadHandlerEvent read FGetDownloadHandler write FGetDownloadHandler;

    property OnClientGetDragHandler: TOnClientGetDragHandlerEvent read FGetDragHandler write FGetDragHandler;

    property OnClientGetFindHandler: TOnClientGetFindHandlerEvent read FGetFindHandler write FGetFindHandler;

    property OnClientGetFocusHandler: TOnClientGetFocusHandlerEvent read FGetFocusHandler write FGetFocusHandler;

    property OnClientGetFrameHandler: TOnClientGetFrameHandlerEvent read FGetFrameHandler write FGetFrameHandler;

    property OnClientGetPermissionHandler: TOnClientGetPermissionHandlerEvent read FGetPermissionHandler write FGetPermissionHandler;

    property OnClientGetJsdialogHandler: TOnClientGetJsdialogHandlerEvent read FGetJsdialogHandler write FGetJsdialogHandler;

    property OnClientGetKeyboardHandler: TOnClientGetKeyboardHandlerEvent read FGetKeyboardHandler write FGetKeyboardHandler;

    property OnClientGetLifeSpanHandler: TOnClientGetLifeSpanHandlerEvent read FGetLifeSpanHandler write FGetLifeSpanHandler;

    property OnClientGetLoadHandler: TOnClientGetLoadHandlerEvent read FGetLoadHandler write FGetLoadHandler;

    property OnClientGetPrintHandler: TOnClientGetPrintHandlerEvent read FGetPrintHandler write FGetPrintHandler;

    property OnClientGetRenderHandler: TOnClientGetRenderHandlerEvent read FGetRenderHandler write FGetRenderHandler;

    property OnClientGetRequestHandler: TOnClientGetRequestHandlerEvent read FGetRequestHandler write FGetRequestHandler;
  end;

  //  TCefWindowDelegate
  //  /include/capi/views/cef_window_delegate_capi.h (cef_window_delegate_t)
  TEngWindowDelegate = class(TCefWindowDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnWindowCreated: TOnWindowWindowCreatedEvent;
    FOnWindowClosing: TOnWindowWindowClosingEvent;
    FOnWindowDestroyed: TOnWindowWindowDestroyedEvent;
    FOnWindowActivationChanged: TOnWindowWindowActivationChangedEvent;
    FOnWindowBoundsChanged: TOnWindowWindowBoundsChangedEvent;
    FOnGetParentWindow: TOnWindowGetParentWindowEvent;
    FOnGetInitialBounds: TOnWindowGetInitialBoundsEvent;
    FOnGetInitialShowState: TOnWindowGetInitialShowStateEvent;
    FOnIsFrameless: TOnWindowIsFramelessEvent;
    FOnCanResize: TOnWindowCanResizeEvent;
    FOnCanMaximize: TOnWindowCanMaximizeEvent;
    FOnCanMinimize: TOnWindowCanMinimizeEvent;
    FOnCanClose: TOnWindowCanCloseEvent;
    FOnAccelerator: TOnWindowAcceleratorEvent;
    FOnKeyEvent: TOnWindowKeyEvent;
  protected
    procedure OnWindowCreated(const window_: ICefWindow); override;
    procedure OnWindowClosing(const window_: ICefWindow); override;
    procedure OnWindowDestroyed(const window_: ICefWindow); override;
    procedure OnWindowActivationChanged(const window_: ICefWindow; active: boolean); override;
    procedure OnWindowBoundsChanged(const window_: ICefWindow; const new_bounds: TCefRect); override;
    procedure OnGetParentWindow(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow); override;
    procedure OnGetInitialBounds(const window_: ICefWindow; var aResult: TCefRect); override;
    procedure OnGetInitialShowState(const window_: ICefWindow; var aResult: TCefShowState); override;
    procedure OnIsFrameless(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanResize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanMaximize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanMinimize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanClose(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnAccelerator(const window_: ICefWindow; command_id: Integer; var aResult: boolean); override;
    procedure OnKeyEvent(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean); override;
    procedure InitializeCEFMethods();
  published

    property OnWindowWindowCreated: TOnWindowWindowCreatedEvent read FOnWindowCreated write FOnWindowCreated;

    property OnWindowWindowClosing: TOnWindowWindowClosingEvent read FOnWindowClosing write FOnWindowClosing;

    property OnWindowWindowDestroyed: TOnWindowWindowDestroyedEvent read FOnWindowDestroyed write FOnWindowDestroyed;

    property OnWindowWindowActivationChanged: TOnWindowWindowActivationChangedEvent read FOnWindowActivationChanged write FOnWindowActivationChanged;

    property OnWindowWindowBoundsChanged: TOnWindowWindowBoundsChangedEvent read FOnWindowBoundsChanged write FOnWindowBoundsChanged;

    property OnWindowGetParentWindow: TOnWindowGetParentWindowEvent read FOnGetParentWindow write FOnGetParentWindow;

    property OnWindowGetInitialBounds: TOnWindowGetInitialBoundsEvent read FOnGetInitialBounds write FOnGetInitialBounds;

    property OnWindowGetInitialShowState: TOnWindowGetInitialShowStateEvent read FOnGetInitialShowState write FOnGetInitialShowState;

    property OnWindowIsFrameless: TOnWindowIsFramelessEvent read FOnIsFrameless write FOnIsFrameless;

    property OnWindowCanResize: TOnWindowCanResizeEvent read FOnCanResize write FOnCanResize;

    property OnWindowCanMaximize: TOnWindowCanMaximizeEvent read FOnCanMaximize write FOnCanMaximize;

    property OnWindowCanMinimize: TOnWindowCanMinimizeEvent read FOnCanMinimize write FOnCanMinimize;

    property OnWindowCanClose: TOnWindowCanCloseEvent read FOnCanClose write FOnCanClose;

    property OnWindowAccelerator: TOnWindowAcceleratorEvent read FOnAccelerator write FOnAccelerator;

    property OnWindowKey: TOnWindowKeyEvent read FOnKeyEvent write FOnKeyEvent;
  end;

  //  TCefExtensionHandler
  //  /include/capi/cef_extension_handler_capi.h (cef_extension_handler_t)
  TEngExtensionHandler = class(TCefExtensionHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforeBackgroundBrowser: TOnExtensionBeforeBackgroundBrowserEvent;
    FOnBeforeBrowser: TOnExtensionBeforeBrowserEvent;
    FCanAccessBrowser: TOnExtensionCanAccessBrowserEvent;
    FGetExtensionResource: TOnExtensionGetExtensionResourceEvent;
    FOnExtensionLoadFailed: TOnExtensionExtensionLoadFailedEvent;
    FOnExtensionLoaded: TOnExtensionExtensionLoadedEvent;
    FOnExtensionUnloaded: TOnExtensionExtensionUnloadedEvent;
    FGetActiveBrowser: TOnExtensionGetActiveBrowserEvent;
  protected
    function OnBeforeBackgroundBrowser(const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings): boolean; override;
    function OnBeforeBrowser(const extension: ICefExtension; const browser: ICefBrowser; const active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings): boolean; override;
    function CanAccessBrowser(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser): boolean; override;
    function GetExtensionResource(const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback): boolean; override;
    procedure OnExtensionLoadFailed(result: TCefErrorcode); override;
    procedure OnExtensionLoaded(const extension: ICefExtension); override;
    procedure OnExtensionUnloaded(const extension: ICefExtension); override;
    procedure GetActiveBrowser(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published

    property OnExtensionBeforeBackgroundBrowser: TOnExtensionBeforeBackgroundBrowserEvent read FOnBeforeBackgroundBrowser write FOnBeforeBackgroundBrowser;

    property OnExtensionBeforeBrowser: TOnExtensionBeforeBrowserEvent read FOnBeforeBrowser write FOnBeforeBrowser;

    property OnExtensionCanAccessBrowser: TOnExtensionCanAccessBrowserEvent read FCanAccessBrowser write FCanAccessBrowser;

    property OnExtensionGetExtensionResource: TOnExtensionGetExtensionResourceEvent read FGetExtensionResource write FGetExtensionResource;

    property OnExtensionExtensionLoadFailed: TOnExtensionExtensionLoadFailedEvent read FOnExtensionLoadFailed write FOnExtensionLoadFailed;

    property OnExtensionExtensionLoaded: TOnExtensionExtensionLoadedEvent read FOnExtensionLoaded write FOnExtensionLoaded;

    property OnExtensionExtensionUnloaded: TOnExtensionExtensionUnloadedEvent read FOnExtensionUnloaded write FOnExtensionUnloaded;

    property OnExtensionGetActiveBrowser: TOnExtensionGetActiveBrowserEvent read FGetActiveBrowser write FGetActiveBrowser;
  end;

  //  TCefAccessibilityHandler
  //  /include/capi/cef_accessibility_handler_capi.h (cef_accessibility_handler_t)
  TEngAccessibilityHandler = class(TCEFAccessibilityHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnAccessibilityTreeChange: TOnAccessibilityAccessibilityTreeChangeEvent;
    FOnAccessibilityLocationChange: TOnAccessibilityAccessibilityLocationChangeEvent;
  protected
    procedure OnAccessibilityTreeChange(const value: ICefValue); override;
    procedure OnAccessibilityLocationChange(const value: ICefValue); override;
  published

    property OnAccessibilityAccessibilityTreeChange: TOnAccessibilityAccessibilityTreeChangeEvent read FOnAccessibilityTreeChange write FOnAccessibilityTreeChange;

    property OnAccessibilityAccessibilityLocationChange: TOnAccessibilityAccessibilityLocationChangeEvent read FOnAccessibilityLocationChange write FOnAccessibilityLocationChange;
  end;

  //  TCefWriteHandler
  //  /include/capi/cef_stream_capi.h (cef_write_handler_t)
  TEngWriteHandler = class(TCefWriteHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FWrite: TOnWriteWriteEvent;
    FSeek: TOnWriteSeekEvent;
    FTell: TOnWriteEllEvent;
    FFlush: TOnWriteFlushEvent;
    FMayBlock: TOnWriteMayBlockEvent;
  protected
    function Write(const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt; override;
    function Seek(offset: Int64; whence: Integer): Integer; override;
    function Tell(): Int64; override;
    function Flush(): Integer; override;
    function MayBlock(): Boolean; override;
  published

    property OnWriteWrite: TOnWriteWriteEvent read FWrite write FWrite;

    property OnWriteSeek: TOnWriteSeekEvent read FSeek write FSeek;

    property OnWriteEll: TOnWriteEllEvent read FTell write FTell;

    property OnWriteFlush: TOnWriteFlushEvent read FFlush write FFlush;

    property OnWriteMayBlock: TOnWriteMayBlockEvent read FMayBlock write FMayBlock;
  end;

  //  TCefApp
  //  /include/capi/cef_app_capi.h (cef_app_t)
  TEngApp = class(TCefAppOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforeCommandLineProcessing: TOnAppBeforeCommandLineProcessingEvent;
    FOnRegisterCustomSchemes: TOnAppRegisterCustomSchemesEvent;
    FGetResourceBundleHandler: TOnAppGetResourceBundleHandlerEvent;
    FGetBrowserProcessHandler: TOnAppGetBrowserProcessHandlerEvent;
    FGetRenderProcessHandler: TOnAppGetRenderProcessHandlerEvent;
  protected
    procedure OnBeforeCommandLineProcessing(const processType: ustring; const commandLine: ICefCommandLine); override;
    procedure OnRegisterCustomSchemes(const registrar: TCefSchemeRegistrarRef); override;
    procedure GetResourceBundleHandler(var aHandler: ICefResourceBundleHandler); override;
    procedure GetBrowserProcessHandler(var aHandler: ICefBrowserProcessHandler); override;
    procedure GetRenderProcessHandler(var aHandler: ICefRenderProcessHandler); override;
    procedure RemoveReferences(); override;
  published

    property OnAppBeforeCommandLineProcessing: TOnAppBeforeCommandLineProcessingEvent read FOnBeforeCommandLineProcessing write FOnBeforeCommandLineProcessing;

    property OnAppRegisterCustomSchemes: TOnAppRegisterCustomSchemesEvent read FOnRegisterCustomSchemes write FOnRegisterCustomSchemes;

    property OnAppGetResourceBundleHandler: TOnAppGetResourceBundleHandlerEvent read FGetResourceBundleHandler write FGetResourceBundleHandler;

    property OnAppGetBrowserProcessHandler: TOnAppGetBrowserProcessHandlerEvent read FGetBrowserProcessHandler write FGetBrowserProcessHandler;

    property OnAppGetRenderProcessHandler: TOnAppGetRenderProcessHandlerEvent read FGetRenderProcessHandler write FGetRenderProcessHandler;
  end;



implementation


destructor TEngBrowserProcessHandler.Destroy;
begin
  inherited Destroy;
  FOnRegisterCustomPreferences := nil;
  FOnContextInitialized := nil;
  FOnBeforeChildProcessLaunch := nil;
  FOnScheduleMessagePumpWork := nil;
  FGetDefaultClient := nil;
end;

constructor TEngBrowserProcessHandler.Create();
begin
  inherited Create();
  FOnRegisterCustomPreferences := nil;
  FOnContextInitialized := nil;
  FOnBeforeChildProcessLaunch := nil;
  FOnScheduleMessagePumpWork := nil;
  FGetDefaultClient := nil;
end;

procedure TEngBrowserProcessHandler.OnRegisterCustomPreferences(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar);
begin
  if assigned(FOnRegisterCustomPreferences) then
    FOnRegisterCustomPreferences(type_, registrar);
end;

procedure TEngBrowserProcessHandler.OnContextInitialized();
begin
  if assigned(FOnContextInitialized) then
    FOnContextInitialized();
end;

procedure TEngBrowserProcessHandler.OnBeforeChildProcessLaunch(const commandLine: ICefCommandLine);
begin
  if assigned(FOnBeforeChildProcessLaunch) then
    FOnBeforeChildProcessLaunch(commandLine);
end;

procedure TEngBrowserProcessHandler.OnScheduleMessagePumpWork(const delayMs: Int64);
begin
  if assigned(FOnScheduleMessagePumpWork) then
    FOnScheduleMessagePumpWork(delayMs);
end;

procedure TEngBrowserProcessHandler.GetDefaultClient(var aClient: ICefClient);
begin
  if assigned(FGetDefaultClient) then
    FGetDefaultClient(aClient);
end;

procedure TEngBrowserProcessHandler.RemoveReferences();
begin
end;


destructor TEngCompletionCallback.Destroy;
begin
  inherited Destroy;
  FOnComplete := nil;
end;

constructor TEngCompletionCallback.Create();
begin
  inherited Create();
  FOnComplete := nil;
end;

procedure TEngCompletionCallback.OnComplete();
begin
  if assigned(FOnComplete) then
    FOnComplete();
end;


destructor TEngContextMenuHandler.Destroy;
begin
  inherited Destroy;
  FRunContextMenu := nil;
  FOnContextMenuCommand := nil;
  FRunQuickMenu := nil;
  FOnQuickMenuCommand := nil;
  FOnBeforeContextMenu := nil;
  FOnContextMenuDismissed := nil;
  FOnQuickMenuDismissed := nil;
end;

constructor TEngContextMenuHandler.Create();
begin
  inherited Create();
  FRunContextMenu := nil;
  FOnContextMenuCommand := nil;
  FRunQuickMenu := nil;
  FOnQuickMenuCommand := nil;
  FOnBeforeContextMenu := nil;
  FOnContextMenuDismissed := nil;
  FOnQuickMenuDismissed := nil;
end;

function TEngContextMenuHandler.RunContextMenu(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback): Boolean;
begin
  Result := false;
  if assigned(FRunContextMenu) then
    Result := FRunContextMenu(browser, frame, params, model, callback);
end;

function TEngContextMenuHandler.OnContextMenuCommand(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags): Boolean;
begin
  Result := false;
  if assigned(FOnContextMenuCommand) then
    Result := FOnContextMenuCommand(browser, frame, params, commandId, eventFlags);
end;

function TEngContextMenuHandler.RunQuickMenu(const browser: ICefBrowser; const frame: ICefFrame; location: PCefPoint; size: PCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback): boolean;
begin
  Result := false;
  if assigned(FRunQuickMenu) then
    Result := FRunQuickMenu(browser, frame, location, size, edit_state_flags, callback);
end;

function TEngContextMenuHandler.OnQuickMenuCommand(const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags): boolean;
begin
  Result := false;
  if assigned(FOnQuickMenuCommand) then
    Result := FOnQuickMenuCommand(browser, frame, command_id, event_flags);
end;

procedure TEngContextMenuHandler.OnBeforeContextMenu(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
begin
  if assigned(FOnBeforeContextMenu) then
    FOnBeforeContextMenu(browser, frame, params, model);
end;

procedure TEngContextMenuHandler.OnContextMenuDismissed(const browser: ICefBrowser; const frame: ICefFrame);
begin
  if assigned(FOnContextMenuDismissed) then
    FOnContextMenuDismissed(browser, frame);
end;

procedure TEngContextMenuHandler.OnQuickMenuDismissed(const browser: ICefBrowser; const frame: ICefFrame);
begin
  if assigned(FOnQuickMenuDismissed) then
    FOnQuickMenuDismissed(browser, frame);
end;

procedure TEngContextMenuHandler.RemoveReferences();
begin
end;


destructor TEngCookieVisitor.Destroy;
begin
  inherited Destroy;
  Fvisit := nil;
end;

constructor TEngCookieVisitor.Create();
begin
  inherited Create();
  Fvisit := nil;
end;

function TEngCookieVisitor.visit(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean;
begin
  Result := false;
  if assigned(Fvisit) then
    Result := Fvisit(name, value, domain, path, secure, httponly, hasExpires, creation, lastAccess, expires, count, total, same_site, priority, deleteCookie);
end;


destructor TEngDeleteCookiesCallback.Destroy;
begin
  inherited Destroy;
  FOnComplete := nil;
end;

constructor TEngDeleteCookiesCallback.Create();
begin
  inherited Create();
  FOnComplete := nil;
end;

procedure TEngDeleteCookiesCallback.OnComplete(numDeleted: Integer);
begin
  if assigned(FOnComplete) then
    FOnComplete(numDeleted);
end;


destructor TEngDialogHandler.Destroy;
begin
  inherited Destroy;
  FOnFileDialog := nil;
end;

constructor TEngDialogHandler.Create();
begin
  inherited Create();
  FOnFileDialog := nil;
end;

function TEngDialogHandler.OnFileDialog(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const callback: ICefFileDialogCallback): Boolean;
begin
  Result := false;
  if assigned(FOnFileDialog) then
    Result := FOnFileDialog(browser, mode, title, defaultFilePath, acceptFilters, callback);
end;

procedure TEngDialogHandler.RemoveReferences();
begin
end;


destructor TEngDisplayHandler.Destroy;
begin
  inherited Destroy;
  FOnTooltip := nil;
  FOnConsoleMessage := nil;
  FOnAutoResize := nil;
  FOnAddressChange := nil;
  FOnTitleChange := nil;
  FOnFaviconUrlChange := nil;
  FOnFullScreenModeChange := nil;
  FOnStatusMessage := nil;
  FOnLoadingProgressChange := nil;
  FOnCursorChange := nil;
  FOnMediaAccessChange := nil;
end;

constructor TEngDisplayHandler.Create();
begin
  inherited Create();
  FOnTooltip := nil;
  FOnConsoleMessage := nil;
  FOnAutoResize := nil;
  FOnAddressChange := nil;
  FOnTitleChange := nil;
  FOnFaviconUrlChange := nil;
  FOnFullScreenModeChange := nil;
  FOnStatusMessage := nil;
  FOnLoadingProgressChange := nil;
  FOnCursorChange := nil;
  FOnMediaAccessChange := nil;
end;

function TEngDisplayHandler.OnTooltip(const browser: ICefBrowser; var text: ustring): Boolean;
begin
  Result := false;
  if assigned(FOnTooltip) then
    Result := FOnTooltip(browser, text);
end;

function TEngDisplayHandler.OnConsoleMessage(const browser: ICefBrowser; level: TCefLogSeverity; const message_: ustring; const source: ustring; line: Integer): Boolean;
begin
  Result := false;
  if assigned(FOnConsoleMessage) then
    Result := FOnConsoleMessage(browser, level, message_, source, line);
end;

function TEngDisplayHandler.OnAutoResize(const browser: ICefBrowser; const new_size: PCefSize): Boolean;
begin
  Result := false;
  if assigned(FOnAutoResize) then
    Result := FOnAutoResize(browser, new_size);
end;

procedure TEngDisplayHandler.OnAddressChange(const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
begin
  if assigned(FOnAddressChange) then
    FOnAddressChange(browser, frame, url);
end;

procedure TEngDisplayHandler.OnTitleChange(const browser: ICefBrowser; const title: ustring);
begin
  if assigned(FOnTitleChange) then
    FOnTitleChange(browser, title);
end;

procedure TEngDisplayHandler.OnFaviconUrlChange(const browser: ICefBrowser; const iconUrls: TStrings);
begin
  if assigned(FOnFaviconUrlChange) then
    FOnFaviconUrlChange(browser, iconUrls);
end;

procedure TEngDisplayHandler.OnFullScreenModeChange(const browser: ICefBrowser; fullscreen: Boolean);
begin
  if assigned(FOnFullScreenModeChange) then
    FOnFullScreenModeChange(browser, fullscreen);
end;

procedure TEngDisplayHandler.OnStatusMessage(const browser: ICefBrowser; const value: ustring);
begin
  if assigned(FOnStatusMessage) then
    FOnStatusMessage(browser, value);
end;

procedure TEngDisplayHandler.OnLoadingProgressChange(const browser: ICefBrowser; const progress: double);
begin
  if assigned(FOnLoadingProgressChange) then
    FOnLoadingProgressChange(browser, progress);
end;

procedure TEngDisplayHandler.OnCursorChange(const browser: ICefBrowser; cursor_: TCefCursorHandle; CursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean);
begin
  if assigned(FOnCursorChange) then
    FOnCursorChange(browser, cursor_, CursorType, customCursorInfo, aResult);
end;

procedure TEngDisplayHandler.OnMediaAccessChange(const browser: ICefBrowser; has_video_access: boolean; has_audio_access: boolean);
begin
  if assigned(FOnMediaAccessChange) then
    FOnMediaAccessChange(browser, has_video_access, has_audio_access);
end;

procedure TEngDisplayHandler.RemoveReferences();
begin
end;


destructor TEngDomVisitor.Destroy;
begin
  inherited Destroy;
  Fvisit := nil;
end;

constructor TEngDomVisitor.Create();
begin
  inherited Create();
  Fvisit := nil;
end;

procedure TEngDomVisitor.visit(const document: ICefDomDocument);
begin
  if assigned(Fvisit) then
    Fvisit(document);
end;


destructor TEngDownloadHandler.Destroy;
begin
  inherited Destroy;
  FCanDownload := nil;
  FOnBeforeDownload := nil;
  FOnDownloadUpdated := nil;
end;

constructor TEngDownloadHandler.Create();
begin
  inherited Create();
  FCanDownload := nil;
  FOnBeforeDownload := nil;
  FOnDownloadUpdated := nil;
end;

function TEngDownloadHandler.CanDownload(const browser: ICefBrowser; const url: ustring; const request_method: ustring): boolean;
begin
  Result := false;
  if assigned(FCanDownload) then
    Result := FCanDownload(browser, url, request_method);
end;

procedure TEngDownloadHandler.OnBeforeDownload(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback);
begin
  if assigned(FOnBeforeDownload) then
    FOnBeforeDownload(browser, downloadItem, suggestedName, callback);
end;

procedure TEngDownloadHandler.OnDownloadUpdated(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
begin
  if assigned(FOnDownloadUpdated) then
    FOnDownloadUpdated(browser, downloadItem, callback);
end;

procedure TEngDownloadHandler.RemoveReferences();
begin
end;


destructor TEngDownloadImageCallback.Destroy;
begin
  inherited Destroy;
  FOnDownloadImageFinished := nil;
end;

constructor TEngDownloadImageCallback.Create();
begin
  inherited Create();
  FOnDownloadImageFinished := nil;
end;

procedure TEngDownloadImageCallback.OnDownloadImageFinished(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage);
begin
  if assigned(FOnDownloadImageFinished) then
    FOnDownloadImageFinished(imageUrl, httpStatusCode, image);
end;


destructor TEngDragHandler.Destroy;
begin
  inherited Destroy;
  FOnDragEnter := nil;
  FOnDraggableRegionsChanged := nil;
end;

constructor TEngDragHandler.Create();
begin
  inherited Create();
  FOnDragEnter := nil;
  FOnDraggableRegionsChanged := nil;
end;

function TEngDragHandler.OnDragEnter(const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations): Boolean;
begin
  Result := false;
  if assigned(FOnDragEnter) then
    Result := FOnDragEnter(browser, dragData, mask);
end;

procedure TEngDragHandler.OnDraggableRegionsChanged(const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
begin
  if assigned(FOnDraggableRegionsChanged) then
    FOnDraggableRegionsChanged(browser, frame, regionsCount, regions);
end;

procedure TEngDragHandler.RemoveReferences();
begin
end;


destructor TEngEndTracingCallback.Destroy;
begin
  inherited Destroy;
  FOnEndTracingComplete := nil;
end;

constructor TEngEndTracingCallback.Create();
begin
  inherited Create();
  FOnEndTracingComplete := nil;
end;

procedure TEngEndTracingCallback.OnEndTracingComplete(const tracingFile: ustring);
begin
  if assigned(FOnEndTracingComplete) then
    FOnEndTracingComplete(tracingFile);
end;


destructor TEngFindHandler.Destroy;
begin
  inherited Destroy;
  FOnFindResult := nil;
end;

constructor TEngFindHandler.Create();
begin
  inherited Create();
  FOnFindResult := nil;
end;

procedure TEngFindHandler.OnFindResult(const browser: ICefBrowser; identifier: Integer; count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
begin
  if assigned(FOnFindResult) then
    FOnFindResult(browser, identifier, count, selectionRect, activeMatchOrdinal, finalUpdate);
end;

procedure TEngFindHandler.RemoveReferences();
begin
end;


destructor TEngFocusHandler.Destroy;
begin
  inherited Destroy;
  FOnSetFocus := nil;
  FOnTakeFocus := nil;
  FOnGotFocus := nil;
end;

constructor TEngFocusHandler.Create();
begin
  inherited Create();
  FOnSetFocus := nil;
  FOnTakeFocus := nil;
  FOnGotFocus := nil;
end;

function TEngFocusHandler.OnSetFocus(const browser: ICefBrowser; source: TCefFocusSource): Boolean;
begin
  Result := false;
  if assigned(FOnSetFocus) then
    Result := FOnSetFocus(browser, source);
end;

procedure TEngFocusHandler.OnTakeFocus(const browser: ICefBrowser; next: Boolean);
begin
  if assigned(FOnTakeFocus) then
    FOnTakeFocus(browser, next);
end;

procedure TEngFocusHandler.OnGotFocus(const browser: ICefBrowser);
begin
  if assigned(FOnGotFocus) then
    FOnGotFocus(browser);
end;

procedure TEngFocusHandler.RemoveReferences();
begin
end;


destructor TEngJsDialogHandler.Destroy;
begin
  inherited Destroy;
  FOnJsdialog := nil;
  FOnBeforeUnloadDialog := nil;
  FOnResetDialogState := nil;
  FOnDialogClosed := nil;
end;

constructor TEngJsDialogHandler.Create();
begin
  inherited Create();
  FOnJsdialog := nil;
  FOnBeforeUnloadDialog := nil;
  FOnResetDialogState := nil;
  FOnDialogClosed := nil;
end;

function TEngJsDialogHandler.OnJsdialog(const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText: ustring; const defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean): Boolean;
begin
  Result := false;
  if assigned(FOnJsdialog) then
    Result := FOnJsdialog(browser, originUrl, dialogType, messageText, defaultPromptText, callback, suppressMessage);
end;

function TEngJsDialogHandler.OnBeforeUnloadDialog(const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback): Boolean;
begin
  Result := false;
  if assigned(FOnBeforeUnloadDialog) then
    Result := FOnBeforeUnloadDialog(browser, messageText, isReload, callback);
end;

procedure TEngJsDialogHandler.OnResetDialogState(const browser: ICefBrowser);
begin
  if assigned(FOnResetDialogState) then
    FOnResetDialogState(browser);
end;

procedure TEngJsDialogHandler.OnDialogClosed(const browser: ICefBrowser);
begin
  if assigned(FOnDialogClosed) then
    FOnDialogClosed(browser);
end;

procedure TEngJsDialogHandler.RemoveReferences();
begin
end;


destructor TEngKeyboardHandler.Destroy;
begin
  inherited Destroy;
  FOnPreKeyEvent := nil;
  FOnKeyEvent := nil;
end;

constructor TEngKeyboardHandler.Create();
begin
  inherited Create();
  FOnPreKeyEvent := nil;
  FOnKeyEvent := nil;
end;

function TEngKeyboardHandler.OnPreKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean): Boolean;
begin
  Result := false;
  if assigned(FOnPreKeyEvent) then
    Result := FOnPreKeyEvent(browser, event, osEvent, isKeyboardShortcut);
end;

function TEngKeyboardHandler.OnKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle): Boolean;
begin
  Result := false;
  if assigned(FOnKeyEvent) then
    Result := FOnKeyEvent(browser, event, osEvent);
end;

procedure TEngKeyboardHandler.RemoveReferences();
begin
end;


destructor TEngLifeSpanHandler.Destroy;
begin
  inherited Destroy;
  FOnBeforePopup := nil;
  FDoClose := nil;
  FOnAfterCreated := nil;
  FOnBeforeClose := nil;
end;

constructor TEngLifeSpanHandler.Create();
begin
  inherited Create();
  FOnBeforePopup := nil;
  FDoClose := nil;
  FOnAfterCreated := nil;
  FOnBeforeClose := nil;
end;

function TEngLifeSpanHandler.OnBeforePopup(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean;
begin
  Result := false;
  if assigned(FOnBeforePopup) then
    Result := FOnBeforePopup(browser, frame, targetUrl, targetFrameName, targetDisposition, userGesture, popupFeatures, windowInfo, client, settings, extra_info, noJavascriptAccess);
end;

function TEngLifeSpanHandler.DoClose(const browser: ICefBrowser): Boolean;
begin
  Result := false;
  if assigned(FDoClose) then
    Result := FDoClose(browser);
end;

procedure TEngLifeSpanHandler.OnAfterCreated(const browser: ICefBrowser);
begin
  if assigned(FOnAfterCreated) then
    FOnAfterCreated(browser);
end;

procedure TEngLifeSpanHandler.OnBeforeClose(const browser: ICefBrowser);
begin
  if assigned(FOnBeforeClose) then
    FOnBeforeClose(browser);
end;

procedure TEngLifeSpanHandler.RemoveReferences();
begin
end;


destructor TEngLoadHandler.Destroy;
begin
  inherited Destroy;
  FOnLoadingStateChange := nil;
  FOnLoadStart := nil;
  FOnLoadEnd := nil;
  FOnLoadError := nil;
end;

constructor TEngLoadHandler.Create();
begin
  inherited Create();
  FOnLoadingStateChange := nil;
  FOnLoadStart := nil;
  FOnLoadEnd := nil;
  FOnLoadError := nil;
end;

procedure TEngLoadHandler.OnLoadingStateChange(const browser: ICefBrowser; isLoading: Boolean; canGoBack: Boolean; canGoForward: Boolean);
begin
  if assigned(FOnLoadingStateChange) then
    FOnLoadingStateChange(browser, isLoading, canGoBack, canGoForward);
end;

procedure TEngLoadHandler.OnLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  if assigned(FOnLoadStart) then
    FOnLoadStart(browser, frame, transitionType);
end;

procedure TEngLoadHandler.OnLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
begin
  if assigned(FOnLoadEnd) then
    FOnLoadEnd(browser, frame, httpStatusCode);
end;

procedure TEngLoadHandler.OnLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText: ustring; const failedUrl: ustring);
begin
  if assigned(FOnLoadError) then
    FOnLoadError(browser, frame, errorCode, errorText, failedUrl);
end;

procedure TEngLoadHandler.RemoveReferences();
begin
end;


destructor TEngMenuModelDelegate.Destroy;
begin
  inherited Destroy;
  FFormatLabel := nil;
  FExecuteCommand := nil;
  FMouseOutsideMenu := nil;
  FUnhandledOpenSubmenu := nil;
  FUnhandledCloseSubmenu := nil;
  FMenuWillShow := nil;
  FMenuClosed := nil;
end;

constructor TEngMenuModelDelegate.Create();
begin
  inherited Create();
  FFormatLabel := nil;
  FExecuteCommand := nil;
  FMouseOutsideMenu := nil;
  FUnhandledOpenSubmenu := nil;
  FUnhandledCloseSubmenu := nil;
  FMenuWillShow := nil;
  FMenuClosed := nil;
end;

function TEngMenuModelDelegate.FormatLabel(const menuModel: ICefMenuModel; var label_: ustring): boolean;
begin
  Result := false;
  if assigned(FFormatLabel) then
    Result := FFormatLabel(menuModel, label_);
end;

procedure TEngMenuModelDelegate.ExecuteCommand(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags);
begin
  if assigned(FExecuteCommand) then
    FExecuteCommand(menuModel, commandId, eventFlags);
end;

procedure TEngMenuModelDelegate.MouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
begin
  if assigned(FMouseOutsideMenu) then
    FMouseOutsideMenu(menuModel, screenPoint);
end;

procedure TEngMenuModelDelegate.UnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  if assigned(FUnhandledOpenSubmenu) then
    FUnhandledOpenSubmenu(menuModel, isRTL);
end;

procedure TEngMenuModelDelegate.UnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  if assigned(FUnhandledCloseSubmenu) then
    FUnhandledCloseSubmenu(menuModel, isRTL);
end;

procedure TEngMenuModelDelegate.MenuWillShow(const menuModel: ICefMenuModel);
begin
  if assigned(FMenuWillShow) then
    FMenuWillShow(menuModel);
end;

procedure TEngMenuModelDelegate.MenuClosed(const menuModel: ICefMenuModel);
begin
  if assigned(FMenuClosed) then
    FMenuClosed(menuModel);
end;


destructor TEngNavigationEntryVisitor.Destroy;
begin
  inherited Destroy;
  FVisit := nil;
end;

constructor TEngNavigationEntryVisitor.Create();
begin
  inherited Create();
  FVisit := nil;
end;

function TEngNavigationEntryVisitor.Visit(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean;
begin
  Result := false;
  if assigned(FVisit) then
    Result := FVisit(entry, current, index, total);
end;


destructor TEngPdfPrintCallback.Destroy;
begin
  inherited Destroy;
  FOnPdfPrintFinished := nil;
end;

constructor TEngPdfPrintCallback.Create();
begin
  inherited Create();
  FOnPdfPrintFinished := nil;
end;

procedure TEngPdfPrintCallback.OnPdfPrintFinished(const path: ustring; ok: Boolean);
begin
  if assigned(FOnPdfPrintFinished) then
    FOnPdfPrintFinished(path, ok);
end;


destructor TEngRenderHandler.Destroy;
begin
  inherited Destroy;
  FGetRootScreenRect := nil;
  FGetScreenPoint := nil;
  FGetScreenInfo := nil;
  FOnStartDragging := nil;
  FGetAccessibilityHandler := nil;
  FGetViewRect := nil;
  FOnPopupShow := nil;
  FOnPopupSize := nil;
  FOnPaint := nil;
  FOnAcceleratedPaint := nil;
  FGetTouchHandleSize := nil;
  FOnTouchHandleStateChanged := nil;
  FOnUpdateDragCursor := nil;
  FOnScrollOffsetChanged := nil;
  FOnIMECompositionRangeChanged := nil;
  FOnTextSelectionChanged := nil;
  FOnVirtualKeyboardRequested := nil;
end;

constructor TEngRenderHandler.Create();
begin
  inherited Create();
  FGetRootScreenRect := nil;
  FGetScreenPoint := nil;
  FGetScreenInfo := nil;
  FOnStartDragging := nil;
  FGetAccessibilityHandler := nil;
  FGetViewRect := nil;
  FOnPopupShow := nil;
  FOnPopupSize := nil;
  FOnPaint := nil;
  FOnAcceleratedPaint := nil;
  FGetTouchHandleSize := nil;
  FOnTouchHandleStateChanged := nil;
  FOnUpdateDragCursor := nil;
  FOnScrollOffsetChanged := nil;
  FOnIMECompositionRangeChanged := nil;
  FOnTextSelectionChanged := nil;
  FOnVirtualKeyboardRequested := nil;
end;

function TEngRenderHandler.GetRootScreenRect(const browser: ICefBrowser; var rect: TCefRect): Boolean;
begin
  Result := false;
  if assigned(FGetRootScreenRect) then
    Result := FGetRootScreenRect(browser, rect);
end;

function TEngRenderHandler.GetScreenPoint(const browser: ICefBrowser; viewX: Integer; viewY: Integer; var screenX: Integer; var screenY: Integer): Boolean;
begin
  Result := false;
  if assigned(FGetScreenPoint) then
    Result := FGetScreenPoint(browser, viewX, viewY, screenX, screenY);
end;

function TEngRenderHandler.GetScreenInfo(const browser: ICefBrowser; var screenInfo: TCefScreenInfo): Boolean;
begin
  Result := false;
  if assigned(FGetScreenInfo) then
    Result := FGetScreenInfo(browser, screenInfo);
end;

function TEngRenderHandler.OnStartDragging(const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x: Integer; y: Integer): Boolean;
begin
  Result := false;
  if assigned(FOnStartDragging) then
    Result := FOnStartDragging(browser, dragData, allowedOps, x, y);
end;

procedure TEngRenderHandler.GetAccessibilityHandler(var aAccessibilityHandler: ICefAccessibilityHandler);
begin
  if assigned(FGetAccessibilityHandler) then
    FGetAccessibilityHandler(aAccessibilityHandler);
end;

procedure TEngRenderHandler.GetViewRect(const browser: ICefBrowser; var rect: TCefRect);
begin
  if assigned(FGetViewRect) then
    FGetViewRect(browser, rect);
end;

procedure TEngRenderHandler.OnPopupShow(const browser: ICefBrowser; show: Boolean);
begin
  if assigned(FOnPopupShow) then
    FOnPopupShow(browser, show);
end;

procedure TEngRenderHandler.OnPopupSize(const browser: ICefBrowser; const rect: PCefRect);
begin
  if assigned(FOnPopupSize) then
    FOnPopupSize(browser, rect);
end;

procedure TEngRenderHandler.OnPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width: Integer; height: Integer);
begin
  if assigned(FOnPaint) then
    FOnPaint(browser, kind, dirtyRectsCount, dirtyRects, buffer, width, height);
end;

procedure TEngRenderHandler.OnAcceleratedPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; shared_handle: Pointer);
begin
  if assigned(FOnAcceleratedPaint) then
    FOnAcceleratedPaint(browser, kind, dirtyRectsCount, dirtyRects, shared_handle);
end;

procedure TEngRenderHandler.GetTouchHandleSize(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
begin
  if assigned(FGetTouchHandleSize) then
    FGetTouchHandleSize(browser, orientation, size);
end;

procedure TEngRenderHandler.OnTouchHandleStateChanged(const browser: ICefBrowser; const state: TCefTouchHandleState);
begin
  if assigned(FOnTouchHandleStateChanged) then
    FOnTouchHandleStateChanged(browser, state);
end;

procedure TEngRenderHandler.OnUpdateDragCursor(const browser: ICefBrowser; operation: TCefDragOperation);
begin
  if assigned(FOnUpdateDragCursor) then
    FOnUpdateDragCursor(browser, operation);
end;

procedure TEngRenderHandler.OnScrollOffsetChanged(const browser: ICefBrowser; x: Double; y: Double);
begin
  if assigned(FOnScrollOffsetChanged) then
    FOnScrollOffsetChanged(browser, x, y);
end;

procedure TEngRenderHandler.OnIMECompositionRangeChanged(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect);
begin
  if assigned(FOnIMECompositionRangeChanged) then
    FOnIMECompositionRangeChanged(browser, selected_range, character_boundsCount, character_bounds);
end;

procedure TEngRenderHandler.OnTextSelectionChanged(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
begin
  if assigned(FOnTextSelectionChanged) then
    FOnTextSelectionChanged(browser, selected_text, selected_range);
end;

procedure TEngRenderHandler.OnVirtualKeyboardRequested(const browser: ICefBrowser; input_mode: TCefTextInpuMode);
begin
  if assigned(FOnVirtualKeyboardRequested) then
    FOnVirtualKeyboardRequested(browser, input_mode);
end;

procedure TEngRenderHandler.RemoveReferences();
begin
end;


destructor TEngRenderProcessHandler.Destroy;
begin
  inherited Destroy;
  FGetLoadHandler := nil;
  FOnProcessMessageReceived := nil;
  FOnWebKitInitialized := nil;
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnContextCreated := nil;
  FOnContextReleased := nil;
  FOnUncaughtException := nil;
  FOnFocusedNodeChanged := nil;
end;

constructor TEngRenderProcessHandler.Create();
begin
  inherited Create();
  FGetLoadHandler := nil;
  FOnProcessMessageReceived := nil;
  FOnWebKitInitialized := nil;
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnContextCreated := nil;
  FOnContextReleased := nil;
  FOnUncaughtException := nil;
  FOnFocusedNodeChanged := nil;
end;

function TEngRenderProcessHandler.GetLoadHandler(): ICefLoadHandler;
begin
  Result := nil;
  if assigned(FGetLoadHandler) then
    Result := FGetLoadHandler();
end;

function TEngRenderProcessHandler.OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage): Boolean;
begin
  Result := false;
  if assigned(FOnProcessMessageReceived) then
    Result := FOnProcessMessageReceived(browser, frame, sourceProcess, aMessage);
end;

procedure TEngRenderProcessHandler.OnWebKitInitialized();
begin
  if assigned(FOnWebKitInitialized) then
    FOnWebKitInitialized();
end;

procedure TEngRenderProcessHandler.OnBrowserCreated(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
begin
  if assigned(FOnBrowserCreated) then
    FOnBrowserCreated(browser, extra_info);
end;

procedure TEngRenderProcessHandler.OnBrowserDestroyed(const browser: ICefBrowser);
begin
  if assigned(FOnBrowserDestroyed) then
    FOnBrowserDestroyed(browser);
end;

procedure TEngRenderProcessHandler.OnContextCreated(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  if assigned(FOnContextCreated) then
    FOnContextCreated(browser, frame, context);
end;

procedure TEngRenderProcessHandler.OnContextReleased(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  if assigned(FOnContextReleased) then
    FOnContextReleased(browser, frame, context);
end;

procedure TEngRenderProcessHandler.OnUncaughtException(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const V8Exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
begin
  if assigned(FOnUncaughtException) then
    FOnUncaughtException(browser, frame, context, V8Exception, stackTrace);
end;

procedure TEngRenderProcessHandler.OnFocusedNodeChanged(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
begin
  if assigned(FOnFocusedNodeChanged) then
    FOnFocusedNodeChanged(browser, frame, node);
end;

procedure TEngRenderProcessHandler.RemoveReferences();
begin
end;


destructor TEngRequestContextHandler.Destroy;
begin
  inherited Destroy;
  FOnRequestContextInitialized := nil;
  FGetResourceRequestHandler := nil;
end;

constructor TEngRequestContextHandler.Create();
begin
  inherited Create();
  FOnRequestContextInitialized := nil;
  FGetResourceRequestHandler := nil;
end;

procedure TEngRequestContextHandler.OnRequestContextInitialized(const request_context: ICefRequestContext);
begin
  if assigned(FOnRequestContextInitialized) then
    FOnRequestContextInitialized(request_context);
end;

procedure TEngRequestContextHandler.GetResourceRequestHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
begin
  if assigned(FGetResourceRequestHandler) then
    FGetResourceRequestHandler(browser, frame, request, is_navigation, is_download, request_initiator, disable_default_handling, aResourceRequestHandler);
end;

procedure TEngRequestContextHandler.RemoveReferences();
begin
end;


destructor TEngRequestHandler.Destroy;
begin
  inherited Destroy;
  FOnBeforeBrowse := nil;
  FOnOpenUrlFromTab := nil;
  FGetAuthCredentials := nil;
  FOnCertificateError := nil;
  FOnSelectClientCertificate := nil;
  FGetResourceRequestHandler := nil;
  FOnRenderViewReady := nil;
  FOnRenderProcessTerminated := nil;
  FOnDocumentAvailableInMainFrame := nil;
end;

constructor TEngRequestHandler.Create();
begin
  inherited Create();
  FOnBeforeBrowse := nil;
  FOnOpenUrlFromTab := nil;
  FGetAuthCredentials := nil;
  FOnCertificateError := nil;
  FOnSelectClientCertificate := nil;
  FGetResourceRequestHandler := nil;
  FOnRenderViewReady := nil;
  FOnRenderProcessTerminated := nil;
  FOnDocumentAvailableInMainFrame := nil;
end;

function TEngRequestHandler.OnBeforeBrowse(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean;
begin
  Result := false;
  if assigned(FOnBeforeBrowse) then
    Result := FOnBeforeBrowse(browser, frame, request, user_gesture, isRedirect);
end;

function TEngRequestHandler.OnOpenUrlFromTab(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean;
begin
  Result := false;
  if assigned(FOnOpenUrlFromTab) then
    Result := FOnOpenUrlFromTab(browser, frame, targetUrl, targetDisposition, userGesture);
end;

function TEngRequestHandler.GetAuthCredentials(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
begin
  Result := false;
  if assigned(FGetAuthCredentials) then
    Result := FGetAuthCredentials(browser, originUrl, isProxy, host, port, realm, scheme, callback);
end;

function TEngRequestHandler.OnCertificateError(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean;
begin
  Result := false;
  if assigned(FOnCertificateError) then
    Result := FOnCertificateError(browser, certError, requestUrl, sslInfo, callback);
end;

function TEngRequestHandler.OnSelectClientCertificate(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean;
begin
  Result := false;
  if assigned(FOnSelectClientCertificate) then
    Result := FOnSelectClientCertificate(browser, isProxy, host, port, certificatesCount, certificates, callback);
end;

procedure TEngRequestHandler.GetResourceRequestHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
begin
  if assigned(FGetResourceRequestHandler) then
    FGetResourceRequestHandler(browser, frame, request, is_navigation, is_download, request_initiator, disable_default_handling, aResourceRequestHandler);
end;

procedure TEngRequestHandler.OnRenderViewReady(const browser: ICefBrowser);
begin
  if assigned(FOnRenderViewReady) then
    FOnRenderViewReady(browser);
end;

procedure TEngRequestHandler.OnRenderProcessTerminated(const browser: ICefBrowser; status: TCefTerminationStatus);
begin
  if assigned(FOnRenderProcessTerminated) then
    FOnRenderProcessTerminated(browser, status);
end;

procedure TEngRequestHandler.OnDocumentAvailableInMainFrame(const browser: ICefBrowser);
begin
  if assigned(FOnDocumentAvailableInMainFrame) then
    FOnDocumentAvailableInMainFrame(browser);
end;

procedure TEngRequestHandler.RemoveReferences();
begin
end;


destructor TEngResolveCallback.Destroy;
begin
  inherited Destroy;
  FOnResolveCompleted := nil;
end;

constructor TEngResolveCallback.Create();
begin
  inherited Create();
  FOnResolveCompleted := nil;
end;

procedure TEngResolveCallback.OnResolveCompleted(result: TCefErrorCode; const resolvedIps: TStrings);
begin
  if assigned(FOnResolveCompleted) then
    FOnResolveCompleted(result, resolvedIps);
end;


destructor TEngResourceBundleHandler.Destroy;
begin
  inherited Destroy;
  FGetLocalizedString := nil;
  FGetDataResource := nil;
  FGetDataResourceForScale := nil;
end;

constructor TEngResourceBundleHandler.Create();
begin
  inherited Create();
  FGetLocalizedString := nil;
  FGetDataResource := nil;
  FGetDataResourceForScale := nil;
end;

function TEngResourceBundleHandler.GetLocalizedString(stringid: Integer; var stringVal: ustring): Boolean;
begin
  Result := false;
  if assigned(FGetLocalizedString) then
    Result := FGetLocalizedString(stringid, stringVal);
end;

function TEngResourceBundleHandler.GetDataResource(resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): Boolean;
begin
  Result := false;
  if assigned(FGetDataResource) then
    Result := FGetDataResource(resourceId, data, dataSize);
end;

function TEngResourceBundleHandler.GetDataResourceForScale(resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): Boolean;
begin
  Result := false;
  if assigned(FGetDataResourceForScale) then
    Result := FGetDataResourceForScale(resourceId, scaleFactor, data, dataSize);
end;

procedure TEngResourceBundleHandler.RemoveReferences();
begin
end;


destructor TEngResourceHandler.Destroy;
begin
  inherited Destroy;
  Fopen := nil;
  FProcessRequest := nil;
  Fskip := nil;
  Fread := nil;
  FReadResponse := nil;
  FGetResponseHeaders := nil;
  FCancel := nil;
end;

constructor TEngResourceHandler.Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest);
begin
  inherited Create(browser, frame, schemeName, request);
  Fopen := nil;
  FProcessRequest := nil;
  Fskip := nil;
  Fread := nil;
  FReadResponse := nil;
  FGetResponseHeaders := nil;
  FCancel := nil;
end;

function TEngResourceHandler.open(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
begin
  Result := false;
  if assigned(Fopen) then
    Result := Fopen(request, handle_request, callback);
end;

function TEngResourceHandler.ProcessRequest(const request: ICefRequest; const callback: ICefCallback): Boolean;
begin
  Result := false;
  if assigned(FProcessRequest) then
    Result := FProcessRequest(request, callback);
end;

function TEngResourceHandler.skip(bytes_to_skip: int64; var bytes_skipped: Int64; const callback: ICefResourceSkipCallback): boolean;
begin
  Result := false;
  if assigned(Fskip) then
    Result := Fskip(bytes_to_skip, bytes_skipped, callback);
end;

function TEngResourceHandler.read(const data_out: Pointer; bytes_to_read: Integer; var bytes_read: Integer; const callback: ICefResourceReadCallback): boolean;
begin
  Result := false;
  if assigned(Fread) then
    Result := Fread(data_out, bytes_to_read, bytes_read, callback);
end;

function TEngResourceHandler.ReadResponse(const dataOut: Pointer; bytesToRead: Integer; var bytesRead: Integer; const callback: ICefCallback): Boolean;
begin
  Result := false;
  if assigned(FReadResponse) then
    Result := FReadResponse(dataOut, bytesToRead, bytesRead, callback);
end;

procedure TEngResourceHandler.GetResponseHeaders(const response: ICefResponse; out responseLength: Int64; out redirectUrl: ustring);
begin
  if assigned(FGetResponseHeaders) then
    FGetResponseHeaders(response, responseLength, redirectUrl);
end;

procedure TEngResourceHandler.Cancel();
begin
  if assigned(FCancel) then
    FCancel();
end;


destructor TEngResponseFilter.Destroy;
begin
  inherited Destroy;
  FInitFilter := nil;
  FFilter := nil;
end;

constructor TEngResponseFilter.Create();
begin
  inherited Create();
  FInitFilter := nil;
  FFilter := nil;
end;

function TEngResponseFilter.InitFilter(): Boolean;
begin
  Result := false;
  if assigned(FInitFilter) then
    Result := FInitFilter();
end;

function TEngResponseFilter.Filter(data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size: NativeUInt; var data_out_written: NativeUInt): TCefResponseFilterStatus;
begin
  Result := RESPONSE_FILTER_NEED_MORE_DATA;
  if assigned(FFilter) then
    Result := FFilter(data_in, data_in_size, data_in_read, data_out, data_out_size, data_out_written);
end;


destructor TEngRunFileDialogCallback.Destroy;
begin
  inherited Destroy;
  FOnFileDialogDismissed := nil;
end;

constructor TEngRunFileDialogCallback.Create();
begin
  inherited Create();
  FOnFileDialogDismissed := nil;
end;

procedure TEngRunFileDialogCallback.OnFileDialogDismissed(const filePaths: TStrings);
begin
  if assigned(FOnFileDialogDismissed) then
    FOnFileDialogDismissed(filePaths);
end;


destructor TEngSchemeHandlerFactory.Destroy;
begin
  inherited Destroy;
  FNew := nil;
end;

constructor TEngSchemeHandlerFactory.Create(const AClass: TCefResourceHandlerClass);
begin
  inherited Create(AClass);
  FNew := nil;
end;

function TEngSchemeHandlerFactory.New(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;
begin
  Result := nil;
  if assigned(FNew) then
    Result := FNew(browser, frame, schemeName, request);
end;


destructor TEngSetCookieCallback.Destroy;
begin
  inherited Destroy;
  FOnComplete := nil;
end;

constructor TEngSetCookieCallback.Create();
begin
  inherited Create();
  FOnComplete := nil;
end;

procedure TEngSetCookieCallback.OnComplete(success: Boolean);
begin
  if assigned(FOnComplete) then
    FOnComplete(success);
end;


destructor TEngStringVisitor.Destroy;
begin
  inherited Destroy;
  FVisit := nil;
end;

constructor TEngStringVisitor.Create();
begin
  inherited Create();
  FVisit := nil;
end;

procedure TEngStringVisitor.Visit(const str: ustring);
begin
  if assigned(FVisit) then
    FVisit(str);
end;


destructor TEngTask.Destroy;
begin
  inherited Destroy;
  FExecute := nil;
end;

constructor TEngTask.Create();
begin
  inherited Create();
  FExecute := nil;
end;

procedure TEngTask.Execute();
begin
  if assigned(FExecute) then
    FExecute();
end;


destructor TEngUrlrequestClient.Destroy;
begin
  inherited Destroy;
  FOnGetAuthCredentials := nil;
  FOnRequestComplete := nil;
  FOnUploadProgress := nil;
  FOnDownloadProgress := nil;
  FOnDownloadData := nil;
end;

constructor TEngUrlrequestClient.Create();
begin
  inherited Create();
  FOnGetAuthCredentials := nil;
  FOnRequestComplete := nil;
  FOnUploadProgress := nil;
  FOnDownloadProgress := nil;
  FOnDownloadData := nil;
end;

function TEngUrlrequestClient.OnGetAuthCredentials(isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
begin
  Result := false;
  if assigned(FOnGetAuthCredentials) then
    Result := FOnGetAuthCredentials(isProxy, host, port, realm, scheme, callback);
end;

procedure TEngUrlrequestClient.OnRequestComplete(const request: ICefUrlRequest);
begin
  if assigned(FOnRequestComplete) then
    FOnRequestComplete(request);
end;

procedure TEngUrlrequestClient.OnUploadProgress(const request: ICefUrlRequest; current: Int64; total: Int64);
begin
  if assigned(FOnUploadProgress) then
    FOnUploadProgress(request, current, total);
end;

procedure TEngUrlrequestClient.OnDownloadProgress(const request: ICefUrlRequest; current: Int64; total: Int64);
begin
  if assigned(FOnDownloadProgress) then
    FOnDownloadProgress(request, current, total);
end;

procedure TEngUrlrequestClient.OnDownloadData(const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
begin
  if assigned(FOnDownloadData) then
    FOnDownloadData(request, data, dataLength);
end;

procedure TEngUrlrequestClient.RemoveReferences();
begin
end;


destructor TEngV8Accessor.Destroy;
begin
  inherited Destroy;
  FGet := nil;
  FSet_ := nil;
end;

constructor TEngV8Accessor.Create();
begin
  inherited Create();
  FGet := nil;
  FSet_ := nil;
end;

function TEngV8Accessor.Get(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): Boolean;
begin
  Result := false;
  if assigned(FGet) then
    Result := FGet(name, object_, retval, exception);
end;

function TEngV8Accessor.Set_(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): Boolean;
begin
  Result := false;
  if assigned(FSet_) then
    Result := FSet_(name, object_, value, exception);
end;


destructor TEngV8ArrayBufferReleaseCallback.Destroy;
begin
  inherited Destroy;
  FReleaseBuffer := nil;
end;

constructor TEngV8ArrayBufferReleaseCallback.Create();
begin
  inherited Create();
  FReleaseBuffer := nil;
end;

procedure TEngV8ArrayBufferReleaseCallback.ReleaseBuffer(buffer: Pointer);
begin
  if assigned(FReleaseBuffer) then
    FReleaseBuffer(buffer);
end;


destructor TEngV8Handler.Destroy;
begin
  inherited Destroy;
  FExecute := nil;
end;

constructor TEngV8Handler.Create();
begin
  inherited Create();
  FExecute := nil;
end;

function TEngV8Handler.Execute(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean;
begin
  Result := false;
  if assigned(FExecute) then
    Result := FExecute(name, object_, arguments, retval, exception);
end;


destructor TEngV8Interceptor.Destroy;
begin
  inherited Destroy;
  FGetByName := nil;
  FGetByIndex := nil;
  FSetByName := nil;
  FSetByIndex := nil;
end;

constructor TEngV8Interceptor.Create();
begin
  inherited Create();
  FGetByName := nil;
  FGetByIndex := nil;
  FSetByName := nil;
  FSetByIndex := nil;
end;

function TEngV8Interceptor.GetByName(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
begin
  Result := false;
  if assigned(FGetByName) then
    Result := FGetByName(name, object_, retval, exception);
end;

function TEngV8Interceptor.GetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
begin
  Result := false;
  if assigned(FGetByIndex) then
    Result := FGetByIndex(index, object_, retval, exception);
end;

function TEngV8Interceptor.SetByName(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
begin
  Result := false;
  if assigned(FSetByName) then
    Result := FSetByName(name, object_, value, exception);
end;

function TEngV8Interceptor.SetByIndex(index: integer; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
begin
  Result := false;
  if assigned(FSetByIndex) then
    Result := FSetByIndex(index, object_, value, exception);
end;


destructor TEngServerHandler.Destroy;
begin
  inherited Destroy;
  FOnServerCreated := nil;
  FOnServerDestroyed := nil;
  FOnClientConnected := nil;
  FOnClientDisconnected := nil;
  FOnHttpRequest := nil;
  FOnWebSocketRequest := nil;
  FOnWebSocketConnected := nil;
  FOnWebSocketMessage := nil;
end;

constructor TEngServerHandler.Create();
begin
  inherited Create();
  FOnServerCreated := nil;
  FOnServerDestroyed := nil;
  FOnClientConnected := nil;
  FOnClientDisconnected := nil;
  FOnHttpRequest := nil;
  FOnWebSocketRequest := nil;
  FOnWebSocketConnected := nil;
  FOnWebSocketMessage := nil;
end;

procedure TEngServerHandler.OnServerCreated(const server: ICefServer);
begin
  if assigned(FOnServerCreated) then
    FOnServerCreated(server);
end;

procedure TEngServerHandler.OnServerDestroyed(const server: ICefServer);
begin
  if assigned(FOnServerDestroyed) then
    FOnServerDestroyed(server);
end;

procedure TEngServerHandler.OnClientConnected(const server: ICefServer; connection_id: Integer);
begin
  if assigned(FOnClientConnected) then
    FOnClientConnected(server, connection_id);
end;

procedure TEngServerHandler.OnClientDisconnected(const server: ICefServer; connection_id: Integer);
begin
  if assigned(FOnClientDisconnected) then
    FOnClientDisconnected(server, connection_id);
end;

procedure TEngServerHandler.OnHttpRequest(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
begin
  if assigned(FOnHttpRequest) then
    FOnHttpRequest(server, connection_id, client_address, request);
end;

procedure TEngServerHandler.OnWebSocketRequest(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
begin
  if assigned(FOnWebSocketRequest) then
    FOnWebSocketRequest(server, connection_id, client_address, request, callback);
end;

procedure TEngServerHandler.OnWebSocketConnected(const server: ICefServer; connection_id: Integer);
begin
  if assigned(FOnWebSocketConnected) then
    FOnWebSocketConnected(server, connection_id);
end;

procedure TEngServerHandler.OnWebSocketMessage(const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
begin
  if assigned(FOnWebSocketMessage) then
    FOnWebSocketMessage(server, connection_id, data, data_size);
end;


destructor TEngCookieAccessFilter.Destroy;
begin
  inherited Destroy;
  FCanSendCookie := nil;
  FCanSaveCookie := nil;
end;

constructor TEngCookieAccessFilter.Create();
begin
  inherited Create();
  FCanSendCookie := nil;
  FCanSaveCookie := nil;
end;

function TEngCookieAccessFilter.CanSendCookie(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie): boolean;
begin
  Result := false;
  if assigned(FCanSendCookie) then
    Result := FCanSendCookie(browser, frame, request, cookie);
end;

function TEngCookieAccessFilter.CanSaveCookie(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie): boolean;
begin
  Result := false;
  if assigned(FCanSaveCookie) then
    Result := FCanSaveCookie(browser, frame, request, response, cookie);
end;

procedure TEngCookieAccessFilter.RemoveReferences();
begin
end;


destructor TEngResourceRequestHandler.Destroy;
begin
  inherited Destroy;
  FOnBeforeResourceLoad := nil;
  FOnResourceResponse := nil;
  FGetCookieAccessFilter := nil;
  FGetResourceHandler := nil;
  FOnResourceRedirect := nil;
  FGetResourceResponseFilter := nil;
  FOnResourceLoadComplete := nil;
  FOnProtocolExecution := nil;
end;

constructor TEngResourceRequestHandler.Create();
begin
  inherited Create();
  FOnBeforeResourceLoad := nil;
  FOnResourceResponse := nil;
  FGetCookieAccessFilter := nil;
  FGetResourceHandler := nil;
  FOnResourceRedirect := nil;
  FGetResourceResponseFilter := nil;
  FOnResourceLoadComplete := nil;
  FOnProtocolExecution := nil;
end;

function TEngResourceRequestHandler.OnBeforeResourceLoad(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback): TCefReturnValue;
begin
  Result := RV_CANCEL;
  if assigned(FOnBeforeResourceLoad) then
    Result := FOnBeforeResourceLoad(browser, frame, request, callback);
end;

function TEngResourceRequestHandler.OnResourceResponse(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse): Boolean;
begin
  Result := false;
  if assigned(FOnResourceResponse) then
    Result := FOnResourceResponse(browser, frame, request, response);
end;

procedure TEngResourceRequestHandler.GetCookieAccessFilter(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aFilter: ICefCookieAccessFilter);
begin
  if assigned(FGetCookieAccessFilter) then
    FGetCookieAccessFilter(browser, frame, request, aFilter);
end;

procedure TEngResourceRequestHandler.GetResourceHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler);
begin
  if assigned(FGetResourceHandler) then
    FGetResourceHandler(browser, frame, request, aResourceHandler);
end;

procedure TEngResourceRequestHandler.OnResourceRedirect(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
begin
  if assigned(FOnResourceRedirect) then
    FOnResourceRedirect(browser, frame, request, response, newUrl);
end;

procedure TEngResourceRequestHandler.GetResourceResponseFilter(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var aResponseFilter: ICefResponseFilter);
begin
  if assigned(FGetResourceResponseFilter) then
    FGetResourceResponseFilter(browser, frame, request, response, aResponseFilter);
end;

procedure TEngResourceRequestHandler.OnResourceLoadComplete(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64);
begin
  if assigned(FOnResourceLoadComplete) then
    FOnResourceLoadComplete(browser, frame, request, response, status, receivedContentLength);
end;

procedure TEngResourceRequestHandler.OnProtocolExecution(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean);
begin
  if assigned(FOnProtocolExecution) then
    FOnProtocolExecution(browser, frame, request, allowOsExecution);
end;

procedure TEngResourceRequestHandler.RemoveReferences();
begin
end;


destructor TEngMediaObserver.Destroy;
begin
  inherited Destroy;
  FOnSinks := nil;
  FOnRoutes := nil;
  FOnRouteStateChanged := nil;
  FOnRouteMessageReceived := nil;
end;

constructor TEngMediaObserver.Create();
begin
  inherited Create();
  FOnSinks := nil;
  FOnRoutes := nil;
  FOnRouteStateChanged := nil;
  FOnRouteMessageReceived := nil;
end;

procedure TEngMediaObserver.OnSinks(const sinks: TCefMediaSinkArray);
begin
  if assigned(FOnSinks) then
    FOnSinks(sinks);
end;

procedure TEngMediaObserver.OnRoutes(const routes: TCefMediaRouteArray);
begin
  if assigned(FOnRoutes) then
    FOnRoutes(routes);
end;

procedure TEngMediaObserver.OnRouteStateChanged(const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
begin
  if assigned(FOnRouteStateChanged) then
    FOnRouteStateChanged(route, state);
end;

procedure TEngMediaObserver.OnRouteMessageReceived(const route: ICefMediaRoute; const message_: ustring);
begin
  if assigned(FOnRouteMessageReceived) then
    FOnRouteMessageReceived(route, message_);
end;


destructor TEngMediaRouteCreateCallback.Destroy;
begin
  inherited Destroy;
  FOnMediaRouteCreateFinished := nil;
end;

constructor TEngMediaRouteCreateCallback.Create();
begin
  inherited Create();
  FOnMediaRouteCreateFinished := nil;
end;

procedure TEngMediaRouteCreateCallback.OnMediaRouteCreateFinished(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
begin
  if assigned(FOnMediaRouteCreateFinished) then
    FOnMediaRouteCreateFinished(result, error, route);
end;


destructor TEngMenuButtonDelegate.Destroy;
begin
  inherited Destroy;
  FOnMenuButtonPressed := nil;
end;

constructor TEngMenuButtonDelegate.Create();
begin
  inherited Create();
  FOnMenuButtonPressed := nil;
end;

procedure TEngMenuButtonDelegate.OnMenuButtonPressed(const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);
begin
  if assigned(FOnMenuButtonPressed) then
    FOnMenuButtonPressed(menu_button, screen_point, button_pressed_lock);
end;

procedure TEngMenuButtonDelegate.InitializeCEFMethods();
begin
end;


destructor TEngButtonDelegate.Destroy;
begin
  inherited Destroy;
  FOnButtonPressed := nil;
  FOnButtonStateChanged := nil;
end;

constructor TEngButtonDelegate.Create();
begin
  inherited Create();
  FOnButtonPressed := nil;
  FOnButtonStateChanged := nil;
end;

procedure TEngButtonDelegate.OnButtonPressed(const button: ICefButton);
begin
  if assigned(FOnButtonPressed) then
    FOnButtonPressed(button);
end;

procedure TEngButtonDelegate.OnButtonStateChanged(const button: ICefButton);
begin
  if assigned(FOnButtonStateChanged) then
    FOnButtonStateChanged(button);
end;

procedure TEngButtonDelegate.InitializeCEFMethods();
begin
end;


destructor TEngBrowserViewDelegate.Destroy;
begin
  inherited Destroy;
  FGetChromeToolbarType := nil;
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnGetDelegateForPopupBrowserView := nil;
  FOnPopupBrowserViewCreated := nil;
end;

constructor TEngBrowserViewDelegate.Create();
begin
  inherited Create();
  FGetChromeToolbarType := nil;
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnGetDelegateForPopupBrowserView := nil;
  FOnPopupBrowserViewCreated := nil;
end;

function TEngBrowserViewDelegate.GetChromeToolbarType(): TCefChromeToolbarType;
begin
  Result := 0;
  if assigned(FGetChromeToolbarType) then
    Result := FGetChromeToolbarType();
end;

procedure TEngBrowserViewDelegate.OnBrowserCreated(const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  if assigned(FOnBrowserCreated) then
    FOnBrowserCreated(browser_view, browser);
end;

procedure TEngBrowserViewDelegate.OnBrowserDestroyed(const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  if assigned(FOnBrowserDestroyed) then
    FOnBrowserDestroyed(browser_view, browser);
end;

procedure TEngBrowserViewDelegate.OnGetDelegateForPopupBrowserView(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate);
begin
  if assigned(FOnGetDelegateForPopupBrowserView) then
    FOnGetDelegateForPopupBrowserView(browser_view, settings, client, is_devtools, aResult);
end;

procedure TEngBrowserViewDelegate.OnPopupBrowserViewCreated(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean);
begin
  if assigned(FOnPopupBrowserViewCreated) then
    FOnPopupBrowserViewCreated(browser_view, popup_browser_view, is_devtools, aResult);
end;

procedure TEngBrowserViewDelegate.InitializeCEFMethods();
begin
end;


destructor TEngPanelDelegate.Destroy;
begin
  inherited Destroy;
end;

constructor TEngPanelDelegate.Create();
begin
  inherited Create();
end;


destructor TEngTextfieldDelegate.Destroy;
begin
  inherited Destroy;
  FOnKeyEvent := nil;
  FOnAfterUserAction := nil;
end;

constructor TEngTextfieldDelegate.Create();
begin
  inherited Create();
  FOnKeyEvent := nil;
  FOnAfterUserAction := nil;
end;

procedure TEngTextfieldDelegate.OnKeyEvent(const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean);
begin
  if assigned(FOnKeyEvent) then
    FOnKeyEvent(textfield, event, aResult);
end;

procedure TEngTextfieldDelegate.OnAfterUserAction(const textfield: ICefTextfield);
begin
  if assigned(FOnAfterUserAction) then
    FOnAfterUserAction(textfield);
end;

procedure TEngTextfieldDelegate.InitializeCEFMethods();
begin
end;


destructor TEngViewDelegate.Destroy;
begin
  inherited Destroy;
  FOnGetPreferredSize := nil;
  FOnGetMinimumSize := nil;
  FOnGetMaximumSize := nil;
  FOnGetHeightForWidth := nil;
  FOnParentViewChanged := nil;
  FOnChildViewChanged := nil;
  FOnWindowChanged := nil;
  FOnLayoutChanged := nil;
  FOnFocus := nil;
  FOnBlur := nil;
end;

constructor TEngViewDelegate.Create();
begin
  inherited Create();
  FOnGetPreferredSize := nil;
  FOnGetMinimumSize := nil;
  FOnGetMaximumSize := nil;
  FOnGetHeightForWidth := nil;
  FOnParentViewChanged := nil;
  FOnChildViewChanged := nil;
  FOnWindowChanged := nil;
  FOnLayoutChanged := nil;
  FOnFocus := nil;
  FOnBlur := nil;
end;

procedure TEngViewDelegate.OnGetPreferredSize(const view: ICefView; var aResult: TCefSize);
begin
  if assigned(FOnGetPreferredSize) then
    FOnGetPreferredSize(view, aResult);
end;

procedure TEngViewDelegate.OnGetMinimumSize(const view: ICefView; var aResult: TCefSize);
begin
  if assigned(FOnGetMinimumSize) then
    FOnGetMinimumSize(view, aResult);
end;

procedure TEngViewDelegate.OnGetMaximumSize(const view: ICefView; var aResult: TCefSize);
begin
  if assigned(FOnGetMaximumSize) then
    FOnGetMaximumSize(view, aResult);
end;

procedure TEngViewDelegate.OnGetHeightForWidth(const view: ICefView; width: Integer; var aResult: Integer);
begin
  if assigned(FOnGetHeightForWidth) then
    FOnGetHeightForWidth(view, width, aResult);
end;

procedure TEngViewDelegate.OnParentViewChanged(const view: ICefView; added: boolean; const parent: ICefView);
begin
  if assigned(FOnParentViewChanged) then
    FOnParentViewChanged(view, added, parent);
end;

procedure TEngViewDelegate.OnChildViewChanged(const view: ICefView; added: boolean; const child: ICefView);
begin
  if assigned(FOnChildViewChanged) then
    FOnChildViewChanged(view, added, child);
end;

procedure TEngViewDelegate.OnWindowChanged(const view: ICefView; added: boolean);
begin
  if assigned(FOnWindowChanged) then
    FOnWindowChanged(view, added);
end;

procedure TEngViewDelegate.OnLayoutChanged(const view: ICefView; new_bounds: TCefRect);
begin
  if assigned(FOnLayoutChanged) then
    FOnLayoutChanged(view, new_bounds);
end;

procedure TEngViewDelegate.OnFocus(const view: ICefView);
begin
  if assigned(FOnFocus) then
    FOnFocus(view);
end;

procedure TEngViewDelegate.OnBlur(const view: ICefView);
begin
  if assigned(FOnBlur) then
    FOnBlur(view);
end;

procedure TEngViewDelegate.InitializeCEFMethods();
begin
end;


destructor TEngAudioHandler.Destroy;
begin
  inherited Destroy;
  FOnGetAudioParameters := nil;
  FOnAudioStreamStarted := nil;
  FOnAudioStreamPacket := nil;
  FOnAudioStreamStopped := nil;
  FOnAudioStreamError := nil;
end;

constructor TEngAudioHandler.Create();
begin
  inherited Create();
  FOnGetAudioParameters := nil;
  FOnAudioStreamStarted := nil;
  FOnAudioStreamPacket := nil;
  FOnAudioStreamStopped := nil;
  FOnAudioStreamError := nil;
end;

procedure TEngAudioHandler.OnGetAudioParameters(const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
begin
  if assigned(FOnGetAudioParameters) then
    FOnGetAudioParameters(browser, params, aResult);
end;

procedure TEngAudioHandler.OnAudioStreamStarted(const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
begin
  if assigned(FOnAudioStreamStarted) then
    FOnAudioStreamStarted(browser, params, channels);
end;

procedure TEngAudioHandler.OnAudioStreamPacket(const browser: ICefBrowser; const data: PPSingle; frames: integer; pts: int64);
begin
  if assigned(FOnAudioStreamPacket) then
    FOnAudioStreamPacket(browser, data, frames, pts);
end;

procedure TEngAudioHandler.OnAudioStreamStopped(const browser: ICefBrowser);
begin
  if assigned(FOnAudioStreamStopped) then
    FOnAudioStreamStopped(browser);
end;

procedure TEngAudioHandler.OnAudioStreamError(const browser: ICefBrowser; const message_: ustring);
begin
  if assigned(FOnAudioStreamError) then
    FOnAudioStreamError(browser, message_);
end;

procedure TEngAudioHandler.RemoveReferences();
begin
end;


destructor TEngDevToolsMessageObserver.Destroy;
begin
  inherited Destroy;
  FOnDevToolsMessage := nil;
  FOnDevToolsMethodResult := nil;
  FOnDevToolsEvent := nil;
  FOnDevToolsAgentAttached := nil;
  FOnDevToolsAgentDetached := nil;
end;

constructor TEngDevToolsMessageObserver.Create();
begin
  inherited Create();
  FOnDevToolsMessage := nil;
  FOnDevToolsMethodResult := nil;
  FOnDevToolsEvent := nil;
  FOnDevToolsAgentAttached := nil;
  FOnDevToolsAgentDetached := nil;
end;

procedure TEngDevToolsMessageObserver.OnDevToolsMessage(const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean);
begin
  if assigned(FOnDevToolsMessage) then
    FOnDevToolsMessage(browser, message_, message_size, aHandled);
end;

procedure TEngDevToolsMessageObserver.OnDevToolsMethodResult(const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt);
begin
  if assigned(FOnDevToolsMethodResult) then
    FOnDevToolsMethodResult(browser, message_id, success, result, result_size);
end;

procedure TEngDevToolsMessageObserver.OnDevToolsEvent(const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt);
begin
  if assigned(FOnDevToolsEvent) then
    FOnDevToolsEvent(browser, method, params, params_size);
end;

procedure TEngDevToolsMessageObserver.OnDevToolsAgentAttached(const browser: ICefBrowser);
begin
  if assigned(FOnDevToolsAgentAttached) then
    FOnDevToolsAgentAttached(browser);
end;

procedure TEngDevToolsMessageObserver.OnDevToolsAgentDetached(const browser: ICefBrowser);
begin
  if assigned(FOnDevToolsAgentDetached) then
    FOnDevToolsAgentDetached(browser);
end;


destructor TEngMediaSinkDeviceInfoCallback.Destroy;
begin
  inherited Destroy;
  FOnMediaSinkDeviceInfo := nil;
end;

constructor TEngMediaSinkDeviceInfoCallback.Create();
begin
  inherited Create();
  FOnMediaSinkDeviceInfo := nil;
end;

procedure TEngMediaSinkDeviceInfoCallback.OnMediaSinkDeviceInfo(const ip_address: ustring; port: integer; const model_name: ustring);
begin
  if assigned(FOnMediaSinkDeviceInfo) then
    FOnMediaSinkDeviceInfo(ip_address, port, model_name);
end;


destructor TEngPrintHandler.Destroy;
begin
  inherited Destroy;
  FOnPrintStart := nil;
  FOnPrintSettings := nil;
  FOnPrintDialog := nil;
  FOnPrintJob := nil;
  FOnPrintReset := nil;
  FGetPDFPaperSize := nil;
end;

constructor TEngPrintHandler.Create();
begin
  inherited Create();
  FOnPrintStart := nil;
  FOnPrintSettings := nil;
  FOnPrintDialog := nil;
  FOnPrintJob := nil;
  FOnPrintReset := nil;
  FGetPDFPaperSize := nil;
end;

procedure TEngPrintHandler.OnPrintStart(const browser: ICefBrowser);
begin
  if assigned(FOnPrintStart) then
    FOnPrintStart(browser);
end;

procedure TEngPrintHandler.OnPrintSettings(const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
begin
  if assigned(FOnPrintSettings) then
    FOnPrintSettings(browser, settings, getDefaults);
end;

procedure TEngPrintHandler.OnPrintDialog(const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean);
begin
  if assigned(FOnPrintDialog) then
    FOnPrintDialog(browser, hasSelection, callback, aResult);
end;

procedure TEngPrintHandler.OnPrintJob(const browser: ICefBrowser; const documentName: ustring; const PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult: boolean);
begin
  if assigned(FOnPrintJob) then
    FOnPrintJob(browser, documentName, PDFFilePath, callback, aResult);
end;

procedure TEngPrintHandler.OnPrintReset(const browser: ICefBrowser);
begin
  if assigned(FOnPrintReset) then
    FOnPrintReset(browser);
end;

procedure TEngPrintHandler.GetPDFPaperSize(const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult: TCefSize);
begin
  if assigned(FGetPDFPaperSize) then
    FGetPDFPaperSize(browser, deviceUnitsPerInch, aResult);
end;

procedure TEngPrintHandler.RemoveReferences();
begin
end;


destructor TEngFrameHandler.Destroy;
begin
  inherited Destroy;
  FOnFrameCreated := nil;
  FOnFrameAttached := nil;
  FOnFrameDetached := nil;
  FOnMainFrameChanged := nil;
end;

constructor TEngFrameHandler.Create();
begin
  inherited Create();
  FOnFrameCreated := nil;
  FOnFrameAttached := nil;
  FOnFrameDetached := nil;
  FOnMainFrameChanged := nil;
end;

procedure TEngFrameHandler.OnFrameCreated(const browser: ICefBrowser; const frame: ICefFrame);
begin
  if assigned(FOnFrameCreated) then
    FOnFrameCreated(browser, frame);
end;

procedure TEngFrameHandler.OnFrameAttached(const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
begin
  if assigned(FOnFrameAttached) then
    FOnFrameAttached(browser, frame, reattached);
end;

procedure TEngFrameHandler.OnFrameDetached(const browser: ICefBrowser; const frame: ICefFrame);
begin
  if assigned(FOnFrameDetached) then
    FOnFrameDetached(browser, frame);
end;

procedure TEngFrameHandler.OnMainFrameChanged(const browser: ICefBrowser; const old_frame: ICefFrame; const new_frame: ICefFrame);
begin
  if assigned(FOnMainFrameChanged) then
    FOnMainFrameChanged(browser, old_frame, new_frame);
end;

procedure TEngFrameHandler.RemoveReferences();
begin
end;


destructor TEngCommandHandler.Destroy;
begin
  inherited Destroy;
  FOnChromeCommand := nil;
end;

constructor TEngCommandHandler.Create();
begin
  inherited Create();
  FOnChromeCommand := nil;
end;

function TEngCommandHandler.OnChromeCommand(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean;
begin
  Result := false;
  if assigned(FOnChromeCommand) then
    Result := FOnChromeCommand(browser, command_id, disposition);
end;

procedure TEngCommandHandler.RemoveReferences();
begin
end;


destructor TEngPermissionHandler.Destroy;
begin
  inherited Destroy;
  FOnRequestMediaAccessPermission := nil;
  FOnShowPermissionPrompt := nil;
  FOnDismissPermissionPrompt := nil;
end;

constructor TEngPermissionHandler.Create();
begin
  inherited Create();
  FOnRequestMediaAccessPermission := nil;
  FOnShowPermissionPrompt := nil;
  FOnDismissPermissionPrompt := nil;
end;

function TEngPermissionHandler.OnRequestMediaAccessPermission(const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback): boolean;
begin
  Result := false;
  if assigned(FOnRequestMediaAccessPermission) then
    Result := FOnRequestMediaAccessPermission(browser, frame, requesting_origin, requested_permissions, callback);
end;

function TEngPermissionHandler.OnShowPermissionPrompt(const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback): boolean;
begin
  Result := false;
  if assigned(FOnShowPermissionPrompt) then
    Result := FOnShowPermissionPrompt(browser, prompt_id, requesting_origin, requested_permissions, callback);
end;

procedure TEngPermissionHandler.OnDismissPermissionPrompt(const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult);
begin
  if assigned(FOnDismissPermissionPrompt) then
    FOnDismissPermissionPrompt(browser, prompt_id, result);
end;

procedure TEngPermissionHandler.RemoveReferences();
begin
end;


destructor TEngMediaAccessHandler.Destroy;
begin
  inherited Destroy;
  FOnRequestMediaAccessPermission := nil;
end;

constructor TEngMediaAccessHandler.Create();
begin
  inherited Create();
  FOnRequestMediaAccessPermission := nil;
end;

function TEngMediaAccessHandler.OnRequestMediaAccessPermission(const browser: ICefBrowser; const frame: ICefFrame; const requesting_url: ustring; requested_permissions: TCefMediaAccessPermissionTypes; const callback: ICefMediaAccessCallback): boolean;
begin
  Result := false;
  if assigned(FOnRequestMediaAccessPermission) then
    Result := FOnRequestMediaAccessPermission(browser, frame, requesting_url, requested_permissions, callback);
end;

procedure TEngMediaAccessHandler.RemoveReferences();
begin
end;


destructor TEngClient.Destroy;
begin
  inherited Destroy;
  FOnProcessMessageReceived := nil;
  FGetAudioHandler := nil;
  FGetCommandHandler := nil;
  FGetContextMenuHandler := nil;
  FGetDialogHandler := nil;
  FGetDisplayHandler := nil;
  FGetDownloadHandler := nil;
  FGetDragHandler := nil;
  FGetFindHandler := nil;
  FGetFocusHandler := nil;
  FGetFrameHandler := nil;
  FGetPermissionHandler := nil;
  FGetJsdialogHandler := nil;
  FGetKeyboardHandler := nil;
  FGetLifeSpanHandler := nil;
  FGetLoadHandler := nil;
  FGetPrintHandler := nil;
  FGetRenderHandler := nil;
  FGetRequestHandler := nil;
end;

constructor TEngClient.Create();
begin
  inherited Create();
  FOnProcessMessageReceived := nil;
  FGetAudioHandler := nil;
  FGetCommandHandler := nil;
  FGetContextMenuHandler := nil;
  FGetDialogHandler := nil;
  FGetDisplayHandler := nil;
  FGetDownloadHandler := nil;
  FGetDragHandler := nil;
  FGetFindHandler := nil;
  FGetFocusHandler := nil;
  FGetFrameHandler := nil;
  FGetPermissionHandler := nil;
  FGetJsdialogHandler := nil;
  FGetKeyboardHandler := nil;
  FGetLifeSpanHandler := nil;
  FGetLoadHandler := nil;
  FGetPrintHandler := nil;
  FGetRenderHandler := nil;
  FGetRequestHandler := nil;
end;

function TEngClient.OnProcessMessageReceived(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message_: ICefProcessMessage): Boolean;
begin
  Result := false;
  if assigned(FOnProcessMessageReceived) then
    Result := FOnProcessMessageReceived(browser, frame, sourceProcess, message_);
end;

procedure TEngClient.GetAudioHandler(var aHandler: ICefAudioHandler);
begin
  if assigned(FGetAudioHandler) then
    FGetAudioHandler(aHandler);
end;

procedure TEngClient.GetCommandHandler(var aHandler: ICefCommandHandler);
begin
  if assigned(FGetCommandHandler) then
    FGetCommandHandler(aHandler);
end;

procedure TEngClient.GetContextMenuHandler(var aHandler: ICefContextMenuHandler);
begin
  if assigned(FGetContextMenuHandler) then
    FGetContextMenuHandler(aHandler);
end;

procedure TEngClient.GetDialogHandler(var aHandler: ICefDialogHandler);
begin
  if assigned(FGetDialogHandler) then
    FGetDialogHandler(aHandler);
end;

procedure TEngClient.GetDisplayHandler(var aHandler: ICefDisplayHandler);
begin
  if assigned(FGetDisplayHandler) then
    FGetDisplayHandler(aHandler);
end;

procedure TEngClient.GetDownloadHandler(var aHandler: ICefDownloadHandler);
begin
  if assigned(FGetDownloadHandler) then
    FGetDownloadHandler(aHandler);
end;

procedure TEngClient.GetDragHandler(var aHandler: ICefDragHandler);
begin
  if assigned(FGetDragHandler) then
    FGetDragHandler(aHandler);
end;

procedure TEngClient.GetFindHandler(var aHandler: ICefFindHandler);
begin
  if assigned(FGetFindHandler) then
    FGetFindHandler(aHandler);
end;

procedure TEngClient.GetFocusHandler(var aHandler: ICefFocusHandler);
begin
  if assigned(FGetFocusHandler) then
    FGetFocusHandler(aHandler);
end;

procedure TEngClient.GetFrameHandler(var aHandler: ICefFrameHandler);
begin
  if assigned(FGetFrameHandler) then
    FGetFrameHandler(aHandler);
end;

procedure TEngClient.GetPermissionHandler(var aHandler: ICefPermissionHandler);
begin
  if assigned(FGetPermissionHandler) then
    FGetPermissionHandler(aHandler);
end;

procedure TEngClient.GetJsdialogHandler(var aHandler: ICefJsdialogHandler);
begin
  if assigned(FGetJsdialogHandler) then
    FGetJsdialogHandler(aHandler);
end;

procedure TEngClient.GetKeyboardHandler(var aHandler: ICefKeyboardHandler);
begin
  if assigned(FGetKeyboardHandler) then
    FGetKeyboardHandler(aHandler);
end;

procedure TEngClient.GetLifeSpanHandler(var aHandler: ICefLifeSpanHandler);
begin
  if assigned(FGetLifeSpanHandler) then
    FGetLifeSpanHandler(aHandler);
end;

procedure TEngClient.GetLoadHandler(var aHandler: ICefLoadHandler);
begin
  if assigned(FGetLoadHandler) then
    FGetLoadHandler(aHandler);
end;

procedure TEngClient.GetPrintHandler(var aHandler: ICefPrintHandler);
begin
  if assigned(FGetPrintHandler) then
    FGetPrintHandler(aHandler);
end;

procedure TEngClient.GetRenderHandler(var aHandler: ICefRenderHandler);
begin
  if assigned(FGetRenderHandler) then
    FGetRenderHandler(aHandler);
end;

procedure TEngClient.GetRequestHandler(var aHandler: ICefRequestHandler);
begin
  if assigned(FGetRequestHandler) then
    FGetRequestHandler(aHandler);
end;

procedure TEngClient.RemoveReferences();
begin
end;


destructor TEngWindowDelegate.Destroy;
begin
  inherited Destroy;
  FOnWindowCreated := nil;
  FOnWindowClosing := nil;
  FOnWindowDestroyed := nil;
  FOnWindowActivationChanged := nil;
  FOnWindowBoundsChanged := nil;
  FOnGetParentWindow := nil;
  FOnGetInitialBounds := nil;
  FOnGetInitialShowState := nil;
  FOnIsFrameless := nil;
  FOnCanResize := nil;
  FOnCanMaximize := nil;
  FOnCanMinimize := nil;
  FOnCanClose := nil;
  FOnAccelerator := nil;
  FOnKeyEvent := nil;
end;

constructor TEngWindowDelegate.Create();
begin
  inherited Create();
  FOnWindowCreated := nil;
  FOnWindowClosing := nil;
  FOnWindowDestroyed := nil;
  FOnWindowActivationChanged := nil;
  FOnWindowBoundsChanged := nil;
  FOnGetParentWindow := nil;
  FOnGetInitialBounds := nil;
  FOnGetInitialShowState := nil;
  FOnIsFrameless := nil;
  FOnCanResize := nil;
  FOnCanMaximize := nil;
  FOnCanMinimize := nil;
  FOnCanClose := nil;
  FOnAccelerator := nil;
  FOnKeyEvent := nil;
end;

procedure TEngWindowDelegate.OnWindowCreated(const window_: ICefWindow);
begin
  if assigned(FOnWindowCreated) then
    FOnWindowCreated(window_);
end;

procedure TEngWindowDelegate.OnWindowClosing(const window_: ICefWindow);
begin
  if assigned(FOnWindowClosing) then
    FOnWindowClosing(window_);
end;

procedure TEngWindowDelegate.OnWindowDestroyed(const window_: ICefWindow);
begin
  if assigned(FOnWindowDestroyed) then
    FOnWindowDestroyed(window_);
end;

procedure TEngWindowDelegate.OnWindowActivationChanged(const window_: ICefWindow; active: boolean);
begin
  if assigned(FOnWindowActivationChanged) then
    FOnWindowActivationChanged(window_, active);
end;

procedure TEngWindowDelegate.OnWindowBoundsChanged(const window_: ICefWindow; const new_bounds: TCefRect);
begin
  if assigned(FOnWindowBoundsChanged) then
    FOnWindowBoundsChanged(window_, new_bounds);
end;

procedure TEngWindowDelegate.OnGetParentWindow(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow);
begin
  if assigned(FOnGetParentWindow) then
    FOnGetParentWindow(window_, is_menu, can_activate_menu, aResult);
end;

procedure TEngWindowDelegate.OnGetInitialBounds(const window_: ICefWindow; var aResult: TCefRect);
begin
  if assigned(FOnGetInitialBounds) then
    FOnGetInitialBounds(window_, aResult);
end;

procedure TEngWindowDelegate.OnGetInitialShowState(const window_: ICefWindow; var aResult: TCefShowState);
begin
  if assigned(FOnGetInitialShowState) then
    FOnGetInitialShowState(window_, aResult);
end;

procedure TEngWindowDelegate.OnIsFrameless(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnIsFrameless) then
    FOnIsFrameless(window_, aResult);
end;

procedure TEngWindowDelegate.OnCanResize(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnCanResize) then
    FOnCanResize(window_, aResult);
end;

procedure TEngWindowDelegate.OnCanMaximize(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnCanMaximize) then
    FOnCanMaximize(window_, aResult);
end;

procedure TEngWindowDelegate.OnCanMinimize(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnCanMinimize) then
    FOnCanMinimize(window_, aResult);
end;

procedure TEngWindowDelegate.OnCanClose(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnCanClose) then
    FOnCanClose(window_, aResult);
end;

procedure TEngWindowDelegate.OnAccelerator(const window_: ICefWindow; command_id: Integer; var aResult: boolean);
begin
  if assigned(FOnAccelerator) then
    FOnAccelerator(window_, command_id, aResult);
end;

procedure TEngWindowDelegate.OnKeyEvent(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean);
begin
  if assigned(FOnKeyEvent) then
    FOnKeyEvent(window_, event, aResult);
end;

procedure TEngWindowDelegate.InitializeCEFMethods();
begin
end;


destructor TEngExtensionHandler.Destroy;
begin
  inherited Destroy;
  FOnBeforeBackgroundBrowser := nil;
  FOnBeforeBrowser := nil;
  FCanAccessBrowser := nil;
  FGetExtensionResource := nil;
  FOnExtensionLoadFailed := nil;
  FOnExtensionLoaded := nil;
  FOnExtensionUnloaded := nil;
  FGetActiveBrowser := nil;
end;

constructor TEngExtensionHandler.Create();
begin
  inherited Create();
  FOnBeforeBackgroundBrowser := nil;
  FOnBeforeBrowser := nil;
  FCanAccessBrowser := nil;
  FGetExtensionResource := nil;
  FOnExtensionLoadFailed := nil;
  FOnExtensionLoaded := nil;
  FOnExtensionUnloaded := nil;
  FGetActiveBrowser := nil;
end;

function TEngExtensionHandler.OnBeforeBackgroundBrowser(const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
begin
  Result := false;
  if assigned(FOnBeforeBackgroundBrowser) then
    Result := FOnBeforeBackgroundBrowser(extension, url, client, settings);
end;

function TEngExtensionHandler.OnBeforeBrowser(const extension: ICefExtension; const browser: ICefBrowser; const active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
begin
  Result := false;
  if assigned(FOnBeforeBrowser) then
    Result := FOnBeforeBrowser(extension, browser, active_browser, index, url, active, windowInfo, client, settings);
end;

function TEngExtensionHandler.CanAccessBrowser(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser): boolean;
begin
  Result := false;
  if assigned(FCanAccessBrowser) then
    Result := FCanAccessBrowser(extension, browser, include_incognito, target_browser);
end;

function TEngExtensionHandler.GetExtensionResource(const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback): boolean;
begin
  Result := false;
  if assigned(FGetExtensionResource) then
    Result := FGetExtensionResource(extension, browser, file_, callback);
end;

procedure TEngExtensionHandler.OnExtensionLoadFailed(result: TCefErrorcode);
begin
  if assigned(FOnExtensionLoadFailed) then
    FOnExtensionLoadFailed(result);
end;

procedure TEngExtensionHandler.OnExtensionLoaded(const extension: ICefExtension);
begin
  if assigned(FOnExtensionLoaded) then
    FOnExtensionLoaded(extension);
end;

procedure TEngExtensionHandler.OnExtensionUnloaded(const extension: ICefExtension);
begin
  if assigned(FOnExtensionUnloaded) then
    FOnExtensionUnloaded(extension);
end;

procedure TEngExtensionHandler.GetActiveBrowser(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser);
begin
  if assigned(FGetActiveBrowser) then
    FGetActiveBrowser(extension, browser, include_incognito, aRsltBrowser);
end;

procedure TEngExtensionHandler.RemoveReferences();
begin
end;


destructor TEngAccessibilityHandler.Destroy;
begin
  inherited Destroy;
  FOnAccessibilityTreeChange := nil;
  FOnAccessibilityLocationChange := nil;
end;

constructor TEngAccessibilityHandler.Create();
begin
  inherited Create();
  FOnAccessibilityTreeChange := nil;
  FOnAccessibilityLocationChange := nil;
end;

procedure TEngAccessibilityHandler.OnAccessibilityTreeChange(const value: ICefValue);
begin
  if assigned(FOnAccessibilityTreeChange) then
    FOnAccessibilityTreeChange(value);
end;

procedure TEngAccessibilityHandler.OnAccessibilityLocationChange(const value: ICefValue);
begin
  if assigned(FOnAccessibilityLocationChange) then
    FOnAccessibilityLocationChange(value);
end;


destructor TEngWriteHandler.Destroy;
begin
  inherited Destroy;
  FWrite := nil;
  FSeek := nil;
  FTell := nil;
  FFlush := nil;
  FMayBlock := nil;
end;

constructor TEngWriteHandler.Create();
begin
  inherited Create();
  FWrite := nil;
  FSeek := nil;
  FTell := nil;
  FFlush := nil;
  FMayBlock := nil;
end;

function TEngWriteHandler.Write(const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt;
begin
  Result := 0;
  if assigned(FWrite) then
    Result := FWrite(ptr, size, n);
end;

function TEngWriteHandler.Seek(offset: Int64; whence: Integer): Integer;
begin
  Result := 0;
  if assigned(FSeek) then
    Result := FSeek(offset, whence);
end;

function TEngWriteHandler.Tell(): Int64;
begin
  Result := 0;
  if assigned(FTell) then
    Result := FTell();
end;

function TEngWriteHandler.Flush(): Integer;
begin
  Result := 0;
  if assigned(FFlush) then
    Result := FFlush();
end;

function TEngWriteHandler.MayBlock(): Boolean;
begin
  Result := false;
  if assigned(FMayBlock) then
    Result := FMayBlock();
end;


destructor TEngApp.Destroy;
begin
  inherited Destroy;
  FOnBeforeCommandLineProcessing := nil;
  FOnRegisterCustomSchemes := nil;
  FGetResourceBundleHandler := nil;
  FGetBrowserProcessHandler := nil;
  FGetRenderProcessHandler := nil;
end;

constructor TEngApp.Create();
begin
  inherited Create();
  FOnBeforeCommandLineProcessing := nil;
  FOnRegisterCustomSchemes := nil;
  FGetResourceBundleHandler := nil;
  FGetBrowserProcessHandler := nil;
  FGetRenderProcessHandler := nil;
end;

procedure TEngApp.OnBeforeCommandLineProcessing(const processType: ustring; const commandLine: ICefCommandLine);
begin
  if assigned(FOnBeforeCommandLineProcessing) then
    FOnBeforeCommandLineProcessing(processType, commandLine);
end;

procedure TEngApp.OnRegisterCustomSchemes(const registrar: TCefSchemeRegistrarRef);
begin
  if assigned(FOnRegisterCustomSchemes) then
    FOnRegisterCustomSchemes(registrar);
end;

procedure TEngApp.GetResourceBundleHandler(var aHandler: ICefResourceBundleHandler);
begin
  if assigned(FGetResourceBundleHandler) then
    FGetResourceBundleHandler(aHandler);
end;

procedure TEngApp.GetBrowserProcessHandler(var aHandler: ICefBrowserProcessHandler);
begin
  if assigned(FGetBrowserProcessHandler) then
    FGetBrowserProcessHandler(aHandler);
end;

procedure TEngApp.GetRenderProcessHandler(var aHandler: ICefRenderProcessHandler);
begin
  if assigned(FGetRenderProcessHandler) then
    FGetRenderProcessHandler(aHandler);
end;

procedure TEngApp.RemoveReferences();
begin
end;


end.
