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
  TOnBrowserProcessAlreadyRunningAppRelaunchEvent = procedure(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean) of object;
  TOnBrowserProcessScheduleMessagePumpWorkEvent = procedure(const delayMs: Int64) of object;
  TOnBrowserProcessGetDefaultClientEvent = procedure(var aClient: ICefClient) of object;
  TOnBrowserProcessGetDefaultRequestContextHandlerEvent = procedure(var aRequestContextHandler: ICefRequestContextHandler) of object;
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
  TOnDialogFileDialogEvent = function(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const accept_extensions: TStrings; const accept_descriptions: TStrings; const callback: ICefFileDialogCallback): Boolean of object;
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
  TOnDownloadBeforeDownloadEvent = function(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback): boolean of object;
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
  TOnLifeSpanBeforeDevToolsPopupEvent = procedure(const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean) of object;
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
  TOnRenderAcceleratedPaintEvent = procedure(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo) of object;
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
  TOnRequestRenderProcessUnresponsiveEvent = function(const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback): boolean of object;
  TOnRequestGetResourceRequestHandlerEvent = procedure(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler) of object;
  TOnRequestRenderViewReadyEvent = procedure(const browser: ICefBrowser) of object;
  TOnRequestRenderProcessResponsiveEvent = procedure(const browser: ICefBrowser) of object;
  TOnRequestRenderProcessTerminatedEvent = procedure(const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring) of object;
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
  TOnBrowserViewBrowserCreatedEvent = procedure(const browser_view: ICefBrowserView; const browser: ICefBrowser) of object;
  TOnBrowserViewBrowserDestroyedEvent = procedure(const browser_view: ICefBrowserView; const browser: ICefBrowser) of object;
  TOnBrowserViewGetDelegateForPopupBrowserViewEvent = procedure(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate) of object;
  TOnBrowserViewPopupBrowserViewCreatedEvent = procedure(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean) of object;
  TOnBrowserViewGetChromeToolbarTypeEvent = procedure(const browser_view: ICefBrowserView; var aResult: TCefChromeToolbarType) of object;
  TOnBrowserViewUseFramelessWindowForPictureInPictureEvent = procedure(const browser_view: ICefBrowserView; var aResult: boolean) of object;
  TOnBrowserViewGestureCommandEvent = procedure(const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean) of object;
  TOnBrowserViewGetBrowserRuntimeStyleEvent = procedure(var aResult: TCefRuntimeStyle) of object;
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
  TOnViewThemeChangedEvent = procedure(const view: ICefView) of object;
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
  TOnCommandIsChromeAppMenuItemVisibleEvent = function(const browser: ICefBrowser; command_id: integer): boolean of object;
  TOnCommandIsChromeAppMenuItemEnabledEvent = function(const browser: ICefBrowser; command_id: integer): boolean of object;
  TOnCommandIsChromePageActionIconVisibleEvent = function(icon_type: TCefChromePageActionIconType): boolean of object;
  TOnCommandIsChromeToolbarButtonVisibleEvent = function(button_type: TCefChromeToolbarButtonType): boolean of object;
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
  TOnWindowWindowFullscreenTransitionEvent = procedure(const window_: ICefWindow; is_completed: boolean) of object;
  TOnWindowGetParentWindowEvent = procedure(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow) of object;
  TOnWindowIsWindowModalDialogEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowGetInitialBoundsEvent = procedure(const window_: ICefWindow; var aResult: TCefRect) of object;
  TOnWindowGetInitialShowStateEvent = procedure(const window_: ICefWindow; var aResult: TCefShowState) of object;
  TOnWindowIsFramelessEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowWithStandardWindowButtonsEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowGetTitlebarHeightEvent = procedure(const window_: ICefWindow; var titlebar_height: Single; var aResult: boolean) of object;
  TOnWindowAcceptsFirstMouseEvent = procedure(const window_: ICefWindow; var aResult: TCefState) of object;
  TOnWindowCanResizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanMaximizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanMinimizeEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowCanCloseEvent = procedure(const window_: ICefWindow; var aResult: boolean) of object;
  TOnWindowAcceleratorEvent = procedure(const window_: ICefWindow; command_id: Integer; var aResult: boolean) of object;
  TOnWindowKeyEvent = procedure(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean) of object;
  TOnWindowThemeColorsChangedEvent = procedure(const window_: ICefWindow; chrome_theme: Integer) of object;
  TOnWindowGetWindowRuntimeStyleEvent = procedure(var aResult: TCefRuntimeStyle) of object;
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

  //  <summary>
  //  Interface used to implement browser process callbacks. The functions of this
  //  interface will be called on the browser process main thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefBrowserProcessHandler">Implements TCefBrowserProcessHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_process_handler_capi.h">CEF source file: /include/capi/cef_browser_process_handler_capi.h (cef_browser_process_handler_t)</see></para>
  //  </remarks>
  TEngBrowserProcessHandler = class(TCefBrowserProcessHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnRegisterCustomPreferences: TOnBrowserProcessRegisterCustomPreferencesEvent;
    FOnContextInitialized: TOnBrowserProcessContextInitializedEvent;
    FOnBeforeChildProcessLaunch: TOnBrowserProcessBeforeChildProcessLaunchEvent;
    FOnAlreadyRunningAppRelaunch: TOnBrowserProcessAlreadyRunningAppRelaunchEvent;
    FOnScheduleMessagePumpWork: TOnBrowserProcessScheduleMessagePumpWorkEvent;
    FGetDefaultClient: TOnBrowserProcessGetDefaultClientEvent;
    FGetDefaultRequestContextHandler: TOnBrowserProcessGetDefaultRequestContextHandlerEvent;
  protected
    procedure OnRegisterCustomPreferences(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar); override;
    procedure OnContextInitialized(); override;
    procedure OnBeforeChildProcessLaunch(const commandLine: ICefCommandLine); override;
    procedure OnAlreadyRunningAppRelaunch(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean); override;
    procedure OnScheduleMessagePumpWork(const delayMs: Int64); override;
    procedure GetDefaultClient(var aClient: ICefClient); override;
    procedure GetDefaultRequestContextHandler(var aRequestContextHandler: ICefRequestContextHandler); override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  <para>Provides an opportunity to register custom preferences prior to global and
    //  request context initialization.</para>
    //  <para>If |type| is CEF_PREFERENCES_TYPE_GLOBAL the registered preferences can be
    //  accessed via ICefPreferenceManager.GetGlobalPreferences after
    //  OnContextInitialized is called. Global preferences are registered a single
    //  time at application startup. See related TCefSettings.cache_path and
    //  TCefSettings.persist_user_preferences configuration.</para>
    //  <para>If |type| is CEF_PREFERENCES_TYPE_REQUEST_CONTEXT the preferences can be
    //  accessed via the ICefRequestContext after
    //  ICefRequestContextHandler.OnRequestContextInitialized is called.
    //  Request context preferences are registered each time a new
    //  ICefRequestContext is created. It is intended but not required that all
    //  request contexts have the same registered preferences. See related
    //  TCefRequestContextSettings.cache_path and
    //  TCefRequestContextSettings.persist_user_preferences configuration.</para>
    //  <para>Do not keep a reference to the |registrar| object. This function is called
    //  on the browser process UI thread.</para>
    //  </summary>
    property OnBrowserProcessRegisterCustomPreferences: TOnBrowserProcessRegisterCustomPreferencesEvent read FOnRegisterCustomPreferences write FOnRegisterCustomPreferences;
    //  <summary>
    //  Called on the browser process UI thread immediately after the CEF context
    //  has been initialized.
    //  </summary>
    property OnBrowserProcessContextInitialized: TOnBrowserProcessContextInitializedEvent read FOnContextInitialized write FOnContextInitialized;
    //  <summary>
    //  Called before a child process is launched. Will be called on the browser
    //  process UI thread when launching a render process and on the browser
    //  process IO thread when launching a GPU process. Provides an opportunity to
    //  modify the child process command line. Do not keep a reference to
    //  |command_line| outside of this function.
    //  </summary>
    property OnBrowserProcessBeforeChildProcessLaunch: TOnBrowserProcessBeforeChildProcessLaunchEvent read FOnBeforeChildProcessLaunch write FOnBeforeChildProcessLaunch;
    //  <summary>
    //  <para>Implement this function to provide app-specific behavior when an already
    //  running app is relaunched with the same TCefSettings.root_cache_path value.
    //  For example, activate an existing app window or create a new app window.
    //  |command_line| will be read-only. Do not keep a reference to
    //  |command_line| outside of this function. Return true (1) if the relaunch
    //  is handled or false (0) for default relaunch behavior. Default behavior
    //  will create a new default styled Chrome window.</para>
    //  <para>To avoid cache corruption only a single app instance is allowed to run for
    //  a given TCefSettings.root_cache_path value. On relaunch the app checks a
    //  process singleton lock and then forwards the new launch arguments to the
    //  already running app process before exiting early. Client apps should
    //  therefore check the cef_initialize() return value for early exit before
    //  proceeding.</para>
    //  <para>This function will be called on the browser process UI thread.</para>
    //  </summary>
    property OnBrowserProcessAlreadyRunningAppRelaunch: TOnBrowserProcessAlreadyRunningAppRelaunchEvent read FOnAlreadyRunningAppRelaunch write FOnAlreadyRunningAppRelaunch;
    //  <summary>
    //  Called from any thread when work has been scheduled for the browser
    //  process main (UI) thread. This callback is used in combination with
    //  TCefSettings.external_message_pump and GlobalCEFApp.DoMessageLoopWork in
    //  cases where the CEF message loop must be integrated into an existing
    //  application message loop (see additional comments and warnings on
    //  GlobalCEFApp.DoMessageLoopWork). This callback should schedule a
    //  GlobalCEFApp.DoMessageLoopWork call to happen on the main (UI) thread.
    //  |delay_ms| is the requested delay in milliseconds. If |delay_ms| is <= 0
    //  then the call should happen reasonably soon. If |delay_ms| is > 0 then the
    //  call should be scheduled to happen after the specified delay and any
    //  currently pending scheduled call should be cancelled.
    //  </summary>
    property OnBrowserProcessScheduleMessagePumpWork: TOnBrowserProcessScheduleMessagePumpWorkEvent read FOnScheduleMessagePumpWork write FOnScheduleMessagePumpWork;
    //  <summary>
    //  Return the default client for use with a newly created browser window
    //  (TCefBrowser object). If null is returned the TCefBrowser will be
    //  unmanaged (no callbacks will be executed for that TCefBrowser) and
    //  application shutdown will be blocked until the browser window is closed
    //  manually. This function is currently only used with the Chrome runtime
    //  when creating new browser windows via Chrome UI.
    //  </summary>
    property OnBrowserProcessGetDefaultClient: TOnBrowserProcessGetDefaultClientEvent read FGetDefaultClient write FGetDefaultClient;
    //  <summary>
    //  Return the default handler for use with a new user or incognito profile
    //  (TCefRequestContext object). If null is returned the
    //  TCefRequestContext will be unmanaged (no callbacks will be executed for
    //  that TCefRequestContext). This function is currently only used with the
    //  Chrome runtime when creating new browser windows via Chrome UI.
    //  </summary>
    property OnBrowserProcessGetDefaultRequestContextHandler: TOnBrowserProcessGetDefaultRequestContextHandlerEvent read FGetDefaultRequestContextHandler write FGetDefaultRequestContextHandler;
  end;

  //  <summary>
  //  Generic callback interface used for asynchronous completion.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefCompletionCallback">Implements TCefCompletionCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_callback_capi.h">CEF source file: /include/capi/cef_callback_capi.h (cef_completion_callback_t)</see></para>
  //  </remarks>
  TEngCompletionCallback = class(TCefCompletionCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnCompletionCallbackCompleteEvent;
  protected
    procedure OnComplete(); override;
  published
    //  <summary>
    //  Method that will be called once the task is complete.
    //  </summary>
    property OnCompletionCallbackComplete: TOnCompletionCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  <summary>
  //  Implement this interface to handle context menu events. The functions of
  //  this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefContextMenuHandler">Implements TCefContextMenuHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_context_menu_handler_capi.h">CEF source file: /include/capi/cef_context_menu_handler_capi.h (cef_context_menu_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called to allow custom display of the context menu. |params| provides
    //  information about the context menu state. |model| contains the context
    //  menu model resulting from OnBeforeContextMenu. For custom display return
    //  true (1) and execute |callback| either synchronously or asynchronously
    //  with the selected command ID. For default display return false (0). Do not
    //  keep references to |params| or |model| outside of this callback.
    //  </summary>
    property OnContextMenuRunContextMenu: TOnContextMenuRunContextMenuEvent read FRunContextMenu write FRunContextMenu;
    //  <summary>
    //  Called to execute a command selected from the context menu. Return true
    //  (1) if the command was handled or false (0) for the default
    //  implementation. See TCefMenuId for the command ids that have default
    //  implementations. All user-defined command ids should be between
    //  MENU_ID_USER_FIRST and MENU_ID_USER_LAST. |params| will have the same
    //  values as what was passed to on_before_context_menu(). Do not keep a
    //  reference to |params| outside of this callback.
    //  </summary>
    property OnContextMenuContextMenuCommand: TOnContextMenuContextMenuCommandEvent read FOnContextMenuCommand write FOnContextMenuCommand;
    //  <summary>
    //  Called to allow custom display of the quick menu for a windowless browser.
    //  |location| is the top left corner of the selected region. |size| is the
    //  size of the selected region. |edit_state_flags| is a combination of flags
    //  that represent the state of the quick menu. Return true (1) if the menu
    //  will be handled and execute |callback| either synchronously or
    //  asynchronously with the selected command ID. Return false (0) to cancel
    //  the menu.
    //  </summary>
    property OnContextMenuRunQuickMenu: TOnContextMenuRunQuickMenuEvent read FRunQuickMenu write FRunQuickMenu;
    //  <summary>
    //  Called to execute a command selected from the quick menu for a windowless
    //  browser. Return true (1) if the command was handled or false (0) for the
    //  default implementation. See TCefMenuId for command IDs that have
    //  default implementations.
    //  </summary>
    property OnContextMenuQuickMenuCommand: TOnContextMenuQuickMenuCommandEvent read FOnQuickMenuCommand write FOnQuickMenuCommand;
    //  <summary>
    //  Called before a context menu is displayed. |params| provides information
    //  about the context menu state. |model| initially contains the default
    //  context menu. The |model| can be cleared to show no context menu or
    //  modified to show a custom menu. Do not keep references to |params| or
    //  |model| outside of this callback.
    //  </summary>
    property OnContextMenuBeforeContextMenu: TOnContextMenuBeforeContextMenuEvent read FOnBeforeContextMenu write FOnBeforeContextMenu;
    //  <summary>
    //  Called when the context menu is dismissed irregardless of whether the menu
    //  was canceled or a command was selected.
    //  </summary>
    property OnContextMenuContextMenuDismissed: TOnContextMenuContextMenuDismissedEvent read FOnContextMenuDismissed write FOnContextMenuDismissed;
    //  <summary>
    //  Called when the quick menu for a windowless browser is dismissed
    //  irregardless of whether the menu was canceled or a command was selected.
    //  </summary>
    property OnContextMenuQuickMenuDismissed: TOnContextMenuQuickMenuDismissedEvent read FOnQuickMenuDismissed write FOnQuickMenuDismissed;
  end;

  //  <summary>
  //  Interface to implement for visiting cookie values. The functions of this
  //  interface will always be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefCookieVisitor">Implements TCefCookieVisitor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_cookie_visitor_t)</see></para>
  //  </remarks>
  TEngCookieVisitor = class(TCefCookieVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    Fvisit: TOnCookieVisitorVisitEvent;
  protected
    function visit(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean; override;
  published
    //  <summary>
    //  Method that will be called once for each cookie. |count| is the 0-based
    //  index for the current cookie. |total| is the total number of cookies. Set
    //  |deleteCookie| to true (1) to delete the cookie currently being visited.
    //  Return false (0) to stop visiting cookies. This function may never be
    //  called if no cookies are found.
    //  </summary>
    property OnCookieVisitorVisit: TOnCookieVisitorVisitEvent read Fvisit write Fvisit;
  end;

  //  <summary>
  //  Interface to implement to be notified of asynchronous completion via
  //  ICefCookieManager.DeleteCookies.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDeleteCookiesCallback">Implements TCefDeleteCookiesCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_delete_cookies_callback_t)</see></para>
  //  </remarks>
  TEngDeleteCookiesCallback = class(TCefDeleteCookiesCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnDeleteCookiesCallbackCompleteEvent;
  protected
    procedure OnComplete(numDeleted: Integer); override;
  published
    //  <summary>
    //  Method that will be called upon completion. |num_deleted| will be the
    //  number of cookies that were deleted.
    //  </summary>
    property OnDeleteCookiesCallbackComplete: TOnDeleteCookiesCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  <summary>
  //  Implement this interface to handle dialog events. The functions of this
  //  interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDialogHandler">Implements TCefDialogHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_dialog_handler_capi.h">CEF source file: /include/capi/cef_dialog_handler_capi.h (cef_dialog_handler_t)</see></para>
  //  </remarks>
  TEngDialogHandler = class(TCefDialogHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnFileDialog: TOnDialogFileDialogEvent;
  protected
    function OnFileDialog(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const accept_extensions: TStrings; const accept_descriptions: TStrings; const callback: ICefFileDialogCallback): Boolean; override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  <para>Called to run a file chooser dialog. |mode| represents the type of dialog
    //  to display. |title| to the title to be used for the dialog and may be NULL
    //  to show the default title ("Open" or "Save" depending on the mode).</para>
    //  <para>|default_file_path| is the path with optional directory and/or file name
    //  component that should be initially selected in the dialog.</para>
    //  <para>|accept_filters| are used to restrict the selectable file types and may be
    //  any combination of valid lower-cased MIME types (e.g. "text/*" or
    //  "image/*") and individual file extensions (e.g. ".txt" or ".png").</para>
    //  <para>|accept_extensions| provides the semicolon-delimited expansion of MIME
    //  types to file extensions (if known, or NULL string otherwise).</para>
    //  <para>|accept_descriptions| provides the descriptions for MIME types (if known,
    //  or NULL string otherwise). For example, the "image/*" mime type might have
    //  extensions ".png;.jpg;.bmp;..." and description "Image Files".</para>
    //  <para>|accept_filters|, |accept_extensions| and |accept_descriptions| will all
    //  be the same size. To display a custom dialog return true (1) and execute
    //  |callback| either inline or at a later time. To display the default dialog
    //  return false (0). If this function returns false (0) it may be called an
    //  additional time for the same dialog (both before and after MIME type
    //  expansion).</para>
    //  </summary>
    property OnDialogFileDialog: TOnDialogFileDialogEvent read FOnFileDialog write FOnFileDialog;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser display state.
  //  The functions of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDisplayHandler">Implements TCefDisplayHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_display_handler_capi.h">CEF source file: /include/capi/cef_display_handler_capi.h (cef_display_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when the browser is about to display a tooltip. |text| contains the
    //  text that will be displayed in the tooltip. To handle the display of the
    //  tooltip yourself return true (1). Otherwise, you can optionally modify
    //  |text| and then return false (0) to allow the browser to display the
    //  tooltip. When window rendering is disabled the application is responsible
    //  for drawing tooltips and the return value is ignored.
    //  </summary>
    property OnDisplayTooltip: TOnDisplayTooltipEvent read FOnTooltip write FOnTooltip;
    //  <summary>
    //  Called to display a console message. Return true (1) to stop the message
    //  from being output to the console.
    //  </summary>
    property OnDisplayConsoleMessage: TOnDisplayConsoleMessageEvent read FOnConsoleMessage write FOnConsoleMessage;
    //  <summary>
    //  Called when auto-resize is enabled via
    //  ICefBrowserHost.SetAutoResizeEnabled and the contents have auto-
    //  resized. |new_size| will be the desired size in view coordinates. Return
    //  true (1) if the resize was handled or false (0) for default handling.
    //  </summary>
    property OnDisplayAutoResize: TOnDisplayAutoResizeEvent read FOnAutoResize write FOnAutoResize;
    //  <summary>
    //  Called when a frame's address has changed.
    //  </summary>
    property OnDisplayAddressChange: TOnDisplayAddressChangeEvent read FOnAddressChange write FOnAddressChange;
    //  <summary>
    //  Called when the page title changes.
    //  </summary>
    property OnDisplayTitleChange: TOnDisplayTitleChangeEvent read FOnTitleChange write FOnTitleChange;
    //  <summary>
    //  Called when the page icon changes.
    //  </summary>
    property OnDisplayFaviconUrlChange: TOnDisplayFaviconUrlChangeEvent read FOnFaviconUrlChange write FOnFaviconUrlChange;
    //  <summary>
    //  Called when web content in the page has toggled fullscreen mode. If
    //  |fullscreen| is true (1) the content will automatically be sized to fill
    //  the browser content area. If |fullscreen| is false (0) the content will
    //  automatically return to its original size and position. With the Alloy
    //  runtime the client is responsible for triggering the fullscreen transition
    //  (for example, by calling ICefWindow.SetFullscreen when using Views).
    //  With the Chrome runtime the fullscreen transition will be triggered
    //  automatically. The ICefWindowDelegate.OnWindowFullscreenTransition
    //  function will be called during the fullscreen transition for notification
    //  purposes.
    //  </summary>
    property OnDisplayFullScreenModeChange: TOnDisplayFullScreenModeChangeEvent read FOnFullScreenModeChange write FOnFullScreenModeChange;
    //  <summary>
    //  Called when the browser receives a status message. |value| contains the
    //  text that will be displayed in the status message.
    //  </summary>
    property OnDisplayStatusMessage: TOnDisplayStatusMessageEvent read FOnStatusMessage write FOnStatusMessage;
    //  <summary>
    //  Called when the overall page loading progress has changed. |progress|
    //  ranges from 0.0 to 1.0.
    //  </summary>
    property OnDisplayLoadingProgressChange: TOnDisplayLoadingProgressChangeEvent read FOnLoadingProgressChange write FOnLoadingProgressChange;
    //  <summary>
    //  Called when the browser's cursor has changed. If |type| is CT_CUSTOM then
    //  |custom_cursor_info| will be populated with the custom cursor information.
    //  Return true (1) if the cursor change was handled or false (0) for default
    //  handling.
    //  </summary>
    property OnDisplayCursorChange: TOnDisplayCursorChangeEvent read FOnCursorChange write FOnCursorChange;
    //  <summary>
    //  Called when the browser's access to an audio and/or video source has
    //  changed.
    //  </summary>
    property OnDisplayMediaAccessChange: TOnDisplayMediaAccessChangeEvent read FOnMediaAccessChange write FOnMediaAccessChange;
  end;

  //  <summary>
  //  Interface to implement for visiting the DOM. The functions of this interface
  //  will be called on the render process main thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDomVisitor">Implements TCefDomVisitor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_dom_capi.h">CEF source file: /include/capi/cef_dom_capi.h (cef_domvisitor_t)</see></para>
  //  </remarks>
  TEngDomVisitor = class(TCefDomVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    Fvisit: TOnDomVisitorVisitEvent;
  protected
    procedure visit(const document: ICefDomDocument); override;
  published
    //  <summary>
    //  Method executed for visiting the DOM. The document object passed to this
    //  function represents a snapshot of the DOM at the time this function is
    //  executed. DOM objects are only valid for the scope of this function. Do
    //  not keep references to or attempt to access any DOM objects outside the
    //  scope of this function.
    //  </summary>
    property OnDomVisitorVisit: TOnDomVisitorVisitEvent read Fvisit write Fvisit;
  end;

  //  <summary>
  //  Interface used to handle file downloads. The functions of this interface
  //  will called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDownloadHandler">Implements TCefDownloadHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_download_handler_capi.h">CEF source file: /include/capi/cef_download_handler_capi.h (cef_download_handler_t)</see></para>
  //  </remarks>
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
    function OnBeforeDownload(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback): boolean; override;
    procedure OnDownloadUpdated(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback); override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  Called before a download begins in response to a user-initiated action
    //  (e.g. alt + link click or link click that returns a `Content-Disposition:
    //  attachment` response from the server). |url| is the target download URL
    //  and |request_function| is the target function (GET, POST, etc). Return
    //  true (1) to proceed with the download or false (0) to cancel the download.
    //  </summary>
    property OnDownloadCanDownload: TOnDownloadCanDownloadEvent read FCanDownload write FCanDownload;
    //  <summary>
    //  Called before a download begins. |suggested_name| is the suggested name
    //  for the download file. Return true (1) and execute |callback| either
    //  asynchronously or in this function to continue or cancel the download.
    //  Return false (0) to proceed with default handling (cancel with Alloy
    //  style, download shelf with Chrome style). Do not keep a reference to
    //  |download_item| outside of this function.
    //  </summary>
    property OnDownloadBeforeDownload: TOnDownloadBeforeDownloadEvent read FOnBeforeDownload write FOnBeforeDownload;
    //  <summary>
    //  Called when a download's status or progress information has been updated.
    //  This may be called multiple times before and after OnBeforeDownload.
    //  Execute |callback| either asynchronously or in this function to cancel the
    //  download if desired. Do not keep a reference to |download_item| outside of
    //  this function.
    //  </summary>
    property OnDownloadDownloadUpdated: TOnDownloadDownloadUpdatedEvent read FOnDownloadUpdated write FOnDownloadUpdated;
  end;

  //  <summary>
  //  Callback interface for ICefBrowserHost.DownloadImage. The functions of
  //  this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDownloadImageCallback">Implements TCefDownloadImageCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_capi.h">CEF source file: /include/capi/cef_browser_capi.h (cef_download_image_callback_t)</see></para>
  //  </remarks>
  TEngDownloadImageCallback = class(TCefDownloadImageCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnDownloadImageFinished: TOnDownloadImageCallbackDownloadImageFinishedEvent;
  protected
    procedure OnDownloadImageFinished(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage); override;
  published
    //  <summary>
    //  Method that will be executed when the image download has completed.
    //  |image_url| is the URL that was downloaded and |http_status_code| is the
    //  resulting HTTP status code. |image| is the resulting image, possibly at
    //  multiple scale factors, or NULL if the download failed.
    //  </summary>
    property OnDownloadImageCallbackDownloadImageFinished: TOnDownloadImageCallbackDownloadImageFinishedEvent read FOnDownloadImageFinished write FOnDownloadImageFinished;
  end;

  //  <summary>
  //  Implement this interface to handle events related to dragging. The functions
  //  of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDragHandler">Implements TCefDragHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_drag_handler_capi.h">CEF source file: /include/capi/cef_drag_handler_capi.h (cef_drag_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when an external drag event enters the browser window. |dragData|
    //  contains the drag event data and |mask| represents the type of drag
    //  operation. Return false (0) for default drag handling behavior or true (1)
    //  to cancel the drag event.
    //  </summary>
    property OnDragDragEnter: TOnDragDragEnterEvent read FOnDragEnter write FOnDragEnter;
    //  <summary>
    //  Called whenever draggable regions for the browser window change. These can
    //  be specified using the '-webkit-app-region: drag/no-drag' CSS-property. If
    //  draggable regions are never defined in a document this function will also
    //  never be called. If the last draggable region is removed from a document
    //  this function will be called with an NULL vector.
    //  </summary>
    property OnDragDraggableRegionsChanged: TOnDragDraggableRegionsChangedEvent read FOnDraggableRegionsChanged write FOnDraggableRegionsChanged;
  end;

  //  <summary>
  //  Implement this interface to receive notification when tracing has completed.
  //  The functions of this interface will be called on the browser process UI
  //  thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefEndTracingCallback">Implements TCefEndTracingCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_trace_capi.h">CEF source file: /include/capi/cef_trace_capi.h (cef_end_tracing_callback_t)</see></para>
  //  </remarks>
  TEngEndTracingCallback = class(TCefEndTracingCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnEndTracingComplete: TOnEndTracingCallbackEndTracingCompleteEvent;
  protected
    procedure OnEndTracingComplete(const tracingFile: ustring); override;
  published
    //  <summary>
    //  Called after all processes have sent their trace data. |tracing_file| is
    //  the path at which tracing data was written. The client is responsible for
    //  deleting |tracing_file|.
    //  </summary>
    property OnEndTracingCallbackEndTracingComplete: TOnEndTracingCallbackEndTracingCompleteEvent read FOnEndTracingComplete write FOnEndTracingComplete;
  end;

  //  <summary>
  //  Implement this interface to handle events related to find results. The
  //  functions of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefFindHandler">Implements TCefFindHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_find_handler_capi.h">CEF source file: /include/capi/cef_find_handler_capi.h (cef_find_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called to report find results returned by ICefBrowserHost.find().
    //  |identifer| is a unique incremental identifier for the currently active
    //  search, |count| is the number of matches currently identified,
    //  |selectionRect| is the location of where the match was found (in window
    //  coordinates), |activeMatchOrdinal| is the current position in the search
    //  results, and |finalUpdate| is true (1) if this is the last find
    //  notification.
    //  </summary>
    property OnFindFindResult: TOnFindFindResultEvent read FOnFindResult write FOnFindResult;
  end;

  //  <summary>
  //  Implement this interface to handle events related to focus. The functions of
  //  this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefFocusHandler">Implements TCefFocusHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_focus_handler_capi.h">CEF source file: /include/capi/cef_focus_handler_capi.h (cef_focus_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when the browser component is requesting focus. |source| indicates
    //  where the focus request is originating from. Return false (0) to allow the
    //  focus to be set or true (1) to cancel setting the focus.
    //  </summary>
    property OnFocusSetFocus: TOnFocusSetFocusEvent read FOnSetFocus write FOnSetFocus;
    //  <summary>
    //  Called when the browser component is about to loose focus. For instance,
    //  if focus was on the last HTML element and the user pressed the TAB key.
    //  |next| will be true (1) if the browser is giving focus to the next
    //  component and false (0) if the browser is giving focus to the previous
    //  component.
    //  </summary>
    property OnFocusTakeFocus: TOnFocusTakeFocusEvent read FOnTakeFocus write FOnTakeFocus;
    //  <summary>
    //  Called when the browser component has received focus.
    //  </summary>
    property OnFocusGotFocus: TOnFocusGotFocusEvent read FOnGotFocus write FOnGotFocus;
  end;

  //  <summary>
  //  Implement this interface to handle events related to JavaScript dialogs. The
  //  functions of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefJsDialogHandler">Implements TCefJsDialogHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_jsdialog_handler_capi.h">CEF source file: /include/capi/cef_jsdialog_handler_capi.h (cef_jsdialog_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called to run a JavaScript dialog. If |origin_url| is non-NULL it can be
    //  passed to the CefFormatUrlForSecurityDisplay function to retrieve a secure
    //  and user-friendly display string. The |default_prompt_text| value will be
    //  specified for prompt dialogs only. Set |suppress_message| to true (1) and
    //  return false (0) to suppress the message (suppressing messages is
    //  preferable to immediately executing the callback as this is used to detect
    //  presumably malicious behavior like spamming alert messages in
    //  onbeforeunload). Set |suppress_message| to false (0) and return false (0)
    //  to use the default implementation (the default implementation will show
    //  one modal dialog at a time and suppress any additional dialog requests
    //  until the displayed dialog is dismissed). Return true (1) if the
    //  application will use a custom dialog or if the callback has been executed
    //  immediately. Custom dialogs may be either modal or modeless. If a custom
    //  dialog is used the application must execute |callback| once the custom
    //  dialog is dismissed.
    //  </summary>
    property OnJsDialogJsdialog: TOnJsDialogJsdialogEvent read FOnJsdialog write FOnJsdialog;
    //  <summary>
    //  Called to run a dialog asking the user if they want to leave a page.
    //  Return false (0) to use the default dialog implementation. Return true (1)
    //  if the application will use a custom dialog or if the callback has been
    //  executed immediately. Custom dialogs may be either modal or modeless. If a
    //  custom dialog is used the application must execute |callback| once the
    //  custom dialog is dismissed.
    //  </summary>
    property OnJsDialogBeforeUnloadDialog: TOnJsDialogBeforeUnloadDialogEvent read FOnBeforeUnloadDialog write FOnBeforeUnloadDialog;
    //  <summary>
    //  Called to cancel any pending dialogs and reset any saved dialog state.
    //  Will be called due to events like page navigation irregardless of whether
    //  any dialogs are currently pending.
    //  </summary>
    property OnJsDialogResetDialogState: TOnJsDialogResetDialogStateEvent read FOnResetDialogState write FOnResetDialogState;
    //  <summary>
    //  Called when the dialog is closed.
    //  </summary>
    property OnJsDialogDialogClosed: TOnJsDialogDialogClosedEvent read FOnDialogClosed write FOnDialogClosed;
  end;

  //  <summary>
  //  Implement this interface to handle events related to keyboard input. The
  //  functions of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefKeyboardHandler">Implements TCefKeyboardHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_keyboard_handler_capi.h">CEF source file: /include/capi/cef_keyboard_handler_capi.h (cef_keyboard_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called before a keyboard event is sent to the renderer. |event| contains
    //  information about the keyboard event. |os_event| is the operating system
    //  event message, if any. Return true (1) if the event was handled or false
    //  (0) otherwise. If the event will be handled in on_key_event() as a
    //  keyboard shortcut set |is_keyboard_shortcut| to true (1) and return false
    //  (0).
    //  </summary>
    property OnKeyboardPreKey: TOnKeyboardPreKeyEvent read FOnPreKeyEvent write FOnPreKeyEvent;
    //  <summary>
    //  Called after the renderer and JavaScript in the page has had a chance to
    //  handle the event. |event| contains information about the keyboard event.
    //  |os_event| is the operating system event message, if any. Return true (1)
    //  if the keyboard event was handled or false (0) otherwise.
    //  </summary>
    property OnKeyboardKey: TOnKeyboardKeyEvent read FOnKeyEvent write FOnKeyEvent;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser life span. The
  //  functions of this interface will be called on the UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefLifeSpanHandler">Implements TCefLifeSpanHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_life_span_handler_capi.h">CEF source file: /include/capi/cef_life_span_handler_capi.h (cef_life_span_handler_t)</see></para>
  //  </remarks>
  TEngLifeSpanHandler = class(TCefLifeSpanHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnBeforePopup: TOnLifeSpanBeforePopupEvent;
    FDoClose: TOnLifeSpanDoCloseEvent;
    FOnBeforeDevToolsPopup: TOnLifeSpanBeforeDevToolsPopupEvent;
    FOnAfterCreated: TOnLifeSpanAfterCreatedEvent;
    FOnBeforeClose: TOnLifeSpanBeforeCloseEvent;
  protected
    function OnBeforePopup(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean; override;
    function DoClose(const browser: ICefBrowser): Boolean; override;
    procedure OnBeforeDevToolsPopup(const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean); override;
    procedure OnAfterCreated(const browser: ICefBrowser); override;
    procedure OnBeforeClose(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  Called on the UI thread before a new popup browser is created. The
    //  |browser| and |frame| values represent the source of the popup request.
    //  The |target_url| and |target_frame_name| values indicate where the popup
    //  browser should navigate and may be NULL if not specified with the request.
    //  The |target_disposition| value indicates where the user intended to open
    //  the popup (e.g. current tab, new tab, etc). The |user_gesture| value will
    //  be true (1) if the popup was opened via explicit user gesture (e.g.
    //  clicking a link) or false (0) if the popup opened automatically (e.g. via
    //  the DomContentLoaded event). The |popupFeatures| structure contains
    //  additional information about the requested popup window. To allow creation
    //  of the popup browser optionally modify |windowInfo|, |client|, |settings|
    //  and |no_javascript_access| and return false (0). To cancel creation of the
    //  popup browser return true (1). The |client| and |settings| values will
    //  default to the source browser's values. If the |no_javascript_access|
    //  value is set to false (0) the new browser will not be scriptable and may
    //  not be hosted in the same renderer process as the source browser. Any
    //  modifications to |windowInfo| will be ignored if the parent browser is
    //  wrapped in a ICefBrowserView. Popup browser creation will be canceled
    //  if the parent browser is destroyed before the popup browser creation
    //  completes (indicated by a call to OnAfterCreated for the popup browser).
    //  The |extra_info| parameter provides an opportunity to specify extra
    //  information specific to the created popup browser that will be passed to
    //  ICefRenderProcessHandler.OnBrowserCreated in the render process.
    //  </summary>
    property OnLifeSpanBeforePopup: TOnLifeSpanBeforePopupEvent read FOnBeforePopup write FOnBeforePopup;
    //  <summary>
    //  Called when a browser has received a request to close. This may result
    //  directly from a call to ICefBrowserHost.*CloseBrowser or indirectly
    //  if the browser is parented to a top-level window created by CEF and the
    //  user attempts to close that window (by clicking the 'X', for example). The
    //  DoClose function will be called after the JavaScript 'onunload' event
    //  has been fired.
    // 
    //  An application should handle top-level owner window close notifications by
    //  calling ICefBrowserHost.TryCloseBrowser or
    //  ICefBrowserHost.CloseBrowser(false) instead of allowing the window
    //  to close immediately (see the examples below). This gives CEF an
    //  opportunity to process the 'onbeforeunload' event and optionally cancel
    //  the close before DoClose is called.
    // 
    //  When windowed rendering is enabled CEF will internally create a window or
    //  view to host the browser. In that case returning false (0) from DoClose()
    //  will send the standard close notification to the browser's top-level owner
    //  window (e.g. WM_CLOSE on Windows, performClose: on OS X, "delete_event" on
    //  Linux or ICefWindowDelegate.CanClose callback from Views). If the
    //  browser's host window/view has already been destroyed (via view hierarchy
    //  tear-down, for example) then DoClose() will not be called for that
    //  browser since is no longer possible to cancel the close.
    // 
    //  When windowed rendering is disabled returning false (0) from DoClose()
    //  will cause the browser object to be destroyed immediately.
    // 
    //  If the browser's top-level owner window requires a non-standard close
    //  notification then send that notification from DoClose() and return true
    //  (1).
    // 
    //  The ICefLifeSpanHandler.OnBeforeClose function will be called
    //  after DoClose() (if DoClose() is called) and immediately before the
    //  browser object is destroyed. The application should only exit after
    //  OnBeforeClose() has been called for all existing browsers.
    // 
    //  The below examples describe what should happen during window close when
    //  the browser is parented to an application-provided top-level window.
    // 
    //  Example 1: Using ICefBrowserHost.TryCloseBrowser(). This is
    //  recommended for clients using standard close handling and windows created
    //  on the browser process UI thread.
    //  1. User clicks the window close button which sends a close notification
    //  to the application's top-level window.
    //  2. Application's top-level window receives the close notification and
    //  calls TryCloseBrowser() (which internally calls CloseBrowser(false)).
    //  TryCloseBrowser() returns false so the client cancels the window
    //  close.
    //  3. JavaScript 'onbeforeunload' handler executes and shows the close
    //  confirmation dialog (which can be overridden via
    //  ICefJSDialogHandler.OnBeforeUnloadDialog()).
    //  4. User approves the close.
    //  5. JavaScript 'onunload' handler executes.
    //  6. CEF sends a close notification to the application's top-level window
    //  (because DoClose() returned false by default).
    //  7. Application's top-level window receives the close notification and
    //  calls TryCloseBrowser(). TryCloseBrowser() returns true so the client
    //  allows the window close.
    //  8. Application's top-level window is destroyed.
    //  9. Application's OnBeforeClose() handler is called and the browser object is destroyed.
    //  10. Application exits by calling cef_quit_message_loop() if no other browsers exist.
    // 
    //  Example 2: Using ICefBrowserHost::CloseBrowser(false) and
    //  implementing the DoClose() callback. This is recommended for clients
    //  using non-standard close handling or windows that were not created on the
    //  browser process UI thread.
    //  1. User clicks the window close button which sends a close notification
    //  to the application's top-level window.
    //  2. Application's top-level window receives the close notification and:
    //  A. Calls ICefBrowserHost.CloseBrowser(false).
    //  B. Cancels the window close.
    //  3. JavaScript 'onbeforeunload' handler executes and shows the close
    //  confirmation dialog (which can be overridden via
    //  ICefJSDialogHandler.OnBeforeUnloadDialog()).
    //  4. User approves the close.
    //  5. JavaScript 'onunload' handler executes.
    //  6. Application's DoClose() handler is called. Application will:
    //  A. Set a flag to indicate that the next close attempt will be allowed.
    //  B. Return false.
    //  7. CEF sends an close notification to the application's top-level window.
    //  8. Application's top-level window receives the close notification and
    //  allows the window to close based on the flag from #6B.
    //  9. Application's top-level window is destroyed.
    //  10. Application's OnBeforeClose() handler is called and the browser object is destroyed.
    //  11. Application exits by calling cef_quit_message_loop() if no other browsers exist.
    //  </summary>
    property OnLifeSpanDoClose: TOnLifeSpanDoCloseEvent read FDoClose write FDoClose;
    //  <summary>
    //  <para>Called on the UI thread before a new DevTools popup browser is created.
    //  The |browser| value represents the source of the popup request. Optionally
    //  modify |windowInfo|, |client|, |settings| and |extra_info| values. The
    //  |client|, |settings| and |extra_info| values will default to the source
    //  browser's values. Any modifications to |windowInfo| will be ignored if the
    //  parent browser is Views-hosted (wrapped in a ICefBrowserView).</para>
    //  <para>The |extra_info| parameter provides an opportunity to specify extra
    //  information specific to the created popup browser that will be passed to
    //  ICefRenderProcessHandler.OnBrowserCreated() in the render process.
    //  The existing |extra_info| object, if any, will be read-only but may be
    //  replaced with a new object.</para>
    //  <para>Views-hosted source browsers will create Views-hosted DevTools popups
    //  unless |use_default_window| is set to to true (1). DevTools popups can be
    //  blocked by returning true (1) from ICefCommandHandler.OnChromeCommand
    //  for IDC_DEV_TOOLS. Only used with the Chrome runtime.</para>
    //  </summary>
    property OnLifeSpanBeforeDevToolsPopup: TOnLifeSpanBeforeDevToolsPopupEvent read FOnBeforeDevToolsPopup write FOnBeforeDevToolsPopup;
    //  <summary>
    //  Called after a new browser is created. It is now safe to begin performing
    //  actions with |browser|. ICefFrameHandler callbacks related to initial
    //  main frame creation will arrive before this callback. See
    //  ICefFrameHandler documentation for additional usage information.
    //  </summary>
    property OnLifeSpanAfterCreated: TOnLifeSpanAfterCreatedEvent read FOnAfterCreated write FOnAfterCreated;
    //  <summary>
    //  Called just before a browser is destroyed. Release all references to the
    //  browser object and do not attempt to execute any functions on the browser
    //  object (other than IsValid, GetIdentifier or IsSame) after this callback
    //  returns. ICefFrameHandler callbacks related to final main frame
    //  destruction will arrive after this callback and ICefBrowser.IsValid
    //  will return false (0) at that time. Any in-progress network requests
    //  associated with |browser| will be aborted when the browser is destroyed,
    //  and ICefResourceRequestHandler callbacks related to those requests may
    //  still arrive on the IO thread after this callback. See ICefFrameHandler
    //  and DoClose() documentation for additional usage information.
    //  </summary>
    property OnLifeSpanBeforeClose: TOnLifeSpanBeforeCloseEvent read FOnBeforeClose write FOnBeforeClose;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser load status.
  //  The functions of this interface will be called on the browser process UI
  //  thread or render process main thread (TID_RENDERER).
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefLoadHandler">Implements TCefLoadHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_load_handler_capi.h">CEF source file: /include/capi/cef_load_handler_capi.h (cef_load_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when the loading state has changed. This callback will be executed
    //  twice -- once when loading is initiated either programmatically or by user
    //  action, and once when loading is terminated due to completion,
    //  cancellation of failure. It will be called before any calls to OnLoadStart
    //  and after all calls to OnLoadError and/or OnLoadEnd.
    //  </summary>
    property OnLoadLoadingStateChange: TOnLoadLoadingStateChangeEvent read FOnLoadingStateChange write FOnLoadingStateChange;
    //  <summary>
    //  Called after a navigation has been committed and before the browser begins
    //  loading contents in the frame. The |frame| value will never be NULL --
    //  call the IsMain() function to check if this frame is the main frame.
    //  |transition_type| provides information about the source of the navigation
    //  and an accurate value is only available in the browser process. Multiple
    //  frames may be loading at the same time. Sub-frames may start or continue
    //  loading after the main frame load has ended. This function will not be
    //  called for same page navigations (fragments, history state, etc.) or for
    //  navigations that fail or are canceled before commit. For notification of
    //  overall browser load status use OnLoadingStateChange instead.
    //  </summary>
    property OnLoadLoadStart: TOnLoadLoadStartEvent read FOnLoadStart write FOnLoadStart;
    //  <summary>
    //  Called when the browser is done loading a frame. The |frame| value will
    //  never be NULL -- call the IsMain() function to check if this frame is the
    //  main frame. Multiple frames may be loading at the same time. Sub-frames
    //  may start or continue loading after the main frame load has ended. This
    //  function will not be called for same page navigations (fragments, history
    //  state, etc.) or for navigations that fail or are canceled before commit.
    //  For notification of overall browser load status use OnLoadingStateChange
    //  instead.
    //  </summary>
    property OnLoadLoadEnd: TOnLoadLoadEndEvent read FOnLoadEnd write FOnLoadEnd;
    //  <summary>
    //  Called when a navigation fails or is canceled. This function may be called
    //  by itself if before commit or in combination with OnLoadStart/OnLoadEnd if
    //  after commit. |errorCode| is the error code number, |errorText| is the
    //  error text and |failedUrl| is the URL that failed to load. See
    //  net\base\net_error_list.h for complete descriptions of the error codes.
    //  </summary>
    property OnLoadLoadError: TOnLoadLoadErrorEvent read FOnLoadError write FOnLoadError;
  end;

  //  <summary>
  //  Implement this interface to handle menu model events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMenuModelDelegate">Implements TCefMenuModelDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_menu_model_delegate_capi.h">CEF source file: /include/capi/cef_menu_model_delegate_capi.h (cef_menu_model_delegate_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Optionally modify a menu item label. Return true (1) if |label| was
    //  modified.
    //  </summary>
    property OnMenuModelFormatLabel: TOnMenuModelFormatLabelEvent read FFormatLabel write FFormatLabel;
    //  <summary>
    //  Perform the action associated with the specified |command_id| and optional
    //  |event_flags|.
    //  </summary>
    property OnMenuModelExecuteCommand: TOnMenuModelExecuteCommandEvent read FExecuteCommand write FExecuteCommand;
    //  <summary>
    //  Called when the user moves the mouse outside the menu and over the owning
    //  window.
    //  </summary>
    property OnMenuModelMouseOutsideMenu: TOnMenuModelMouseOutsideMenuEvent read FMouseOutsideMenu write FMouseOutsideMenu;
    //  <summary>
    //  Called on unhandled open submenu keyboard commands. |is_rtl| will be true
    //  (1) if the menu is displaying a right-to-left language.
    //  </summary>
    property OnMenuModelUnhandledOpenSubmenu: TOnMenuModelUnhandledOpenSubmenuEvent read FUnhandledOpenSubmenu write FUnhandledOpenSubmenu;
    //  <summary>
    //  Called on unhandled close submenu keyboard commands. |is_rtl| will be true
    //  (1) if the menu is displaying a right-to-left language.
    //  </summary>
    property OnMenuModelUnhandledCloseSubmenu: TOnMenuModelUnhandledCloseSubmenuEvent read FUnhandledCloseSubmenu write FUnhandledCloseSubmenu;
    //  <summary>
    //  The menu is about to show.
    //  </summary>
    property OnMenuModelMenuWillShow: TOnMenuModelMenuWillShowEvent read FMenuWillShow write FMenuWillShow;
    //  <summary>
    //  The menu has closed.
    //  </summary>
    property OnMenuModelMenuClosed: TOnMenuModelMenuClosedEvent read FMenuClosed write FMenuClosed;
  end;

  //  <summary>
  //  Callback interface for ICefBrowserHost.GetNavigationEntries. The
  //  functions of this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefNavigationEntryVisitor">Implements TCefNavigationEntryVisitor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_capi.h">CEF source file: /include/capi/cef_browser_capi.h (cef_navigation_entry_visitor_t)</see></para>
  //  </remarks>
  TEngNavigationEntryVisitor = class(TCefNavigationEntryVisitorOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FVisit: TOnNavigationEntryVisitorVisitEvent;
  protected
    function Visit(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean; override;
  published
    //  <summary>
    //  Method that will be executed. Do not keep a reference to |entry| outside
    //  of this callback. Return true (1) to continue visiting entries or false
    //  (0) to stop. |current| is true (1) if this entry is the currently loaded
    //  navigation entry. |index| is the 0-based index of this entry and |total|
    //  is the total number of entries.
    //  </summary>
    property OnNavigationEntryVisitorVisit: TOnNavigationEntryVisitorVisitEvent read FVisit write FVisit;
  end;

  //  <summary>
  //  Callback interface for ICefBrowserHost.PrintToPDF. The functions of this
  //  interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefPdfPrintCallback">Implements TCefPdfPrintCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_capi.h">CEF source file: /include/capi/cef_browser_capi.h (cef_pdf_print_callback_t)</see></para>
  //  </remarks>
  TEngPdfPrintCallback = class(TCefPdfPrintCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnPdfPrintFinished: TOnPdfPrintCallbackPdfPrintFinishedEvent;
  protected
    procedure OnPdfPrintFinished(const path: ustring; ok: Boolean); override;
  published
    //  <summary>
    //  Method that will be executed when the PDF printing has completed. |path|
    //  is the output path. |ok| will be true (1) if the printing completed
    //  successfully or false (0) otherwise.
    //  </summary>
    property OnPdfPrintCallbackPdfPrintFinished: TOnPdfPrintCallbackPdfPrintFinishedEvent read FOnPdfPrintFinished write FOnPdfPrintFinished;
  end;

  //  <summary>
  //  Implement this interface to handle events when window rendering is disabled.
  //  The functions of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefRenderHandler">Implements TCefRenderHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_render_handler_capi.h">CEF source file: /include/capi/cef_render_handler_capi.h (cef_render_handler_t)</see></para>
  //  </remarks>
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
    procedure OnAcceleratedPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo); override;
    procedure GetTouchHandleSize(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize); override;
    procedure OnTouchHandleStateChanged(const browser: ICefBrowser; const state: TCefTouchHandleState); override;
    procedure OnUpdateDragCursor(const browser: ICefBrowser; operation: TCefDragOperation); override;
    procedure OnScrollOffsetChanged(const browser: ICefBrowser; x: Double; y: Double); override;
    procedure OnIMECompositionRangeChanged(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect); override;
    procedure OnTextSelectionChanged(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange); override;
    procedure OnVirtualKeyboardRequested(const browser: ICefBrowser; input_mode: TCefTextInpuMode); override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  Called to retrieve the root window rectangle in screen DIP coordinates.
    //  Return true (1) if the rectangle was provided. If this function returns
    //  false (0) the rectangle from GetViewRect will be used.
    //  </summary>
    property OnRenderGetRootScreenRect: TOnRenderGetRootScreenRectEvent read FGetRootScreenRect write FGetRootScreenRect;
    //  <summary>
    //  Called to retrieve the translation from view DIP coordinates to screen
    //  coordinates. Windows/Linux should provide screen device (pixel)
    //  coordinates and MacOS should provide screen DIP coordinates. Return true
    //  (1) if the requested coordinates were provided.
    //  </summary>
    property OnRenderGetScreenPoint: TOnRenderGetScreenPointEvent read FGetScreenPoint write FGetScreenPoint;
    //  <summary>
    //  Called to allow the client to fill in the CefScreenInfo object with
    //  appropriate values. Return true (1) if the |screen_info| structure has
    //  been modified.
    // 
    //  If the screen info rectangle is left NULL the rectangle from GetViewRect
    //  will be used. If the rectangle is still NULL or invalid popups may not be
    //  drawn correctly.
    //  </summary>
    property OnRenderGetScreenInfo: TOnRenderGetScreenInfoEvent read FGetScreenInfo write FGetScreenInfo;
    //  <summary>
    //  Called when the user starts dragging content in the web view. Contextual
    //  information about the dragged content is supplied by |drag_data|. (|x|,
    //  |y|) is the drag start location in screen coordinates. OS APIs that run a
    //  system message loop may be used within the StartDragging call.
    // 
    //  Return false (0) to abort the drag operation. Don't call any of
    //  ICefBrowserHost.DragSource*Ended* functions after returning false (0).
    // 
    //  Return true (1) to handle the drag operation. Call
    //  ICefBrowserHost.DragSourceEndedAt and DragSourceSystemDragEnded either
    //  synchronously or asynchronously to inform the web view that the drag
    //  operation has ended.
    //  </summary>
    property OnRenderStartDragging: TOnRenderStartDraggingEvent read FOnStartDragging write FOnStartDragging;
    //  <summary>
    //  Return the handler for accessibility notifications. If no handler is
    //  provided the default implementation will be used.
    //  </summary>
    property OnRenderGetAccessibilityHandler: TOnRenderGetAccessibilityHandlerEvent read FGetAccessibilityHandler write FGetAccessibilityHandler;
    //  <summary>
    //  Called to retrieve the view rectangle in screen DIP coordinates. This
    //  function must always provide a non-NULL rectangle.
    //  </summary>
    property OnRenderGetViewRect: TOnRenderGetViewRectEvent read FGetViewRect write FGetViewRect;
    //  <summary>
    //  Called when the browser wants to show or hide the popup widget. The popup
    //  should be shown if |show| is true (1) and hidden if |show| is false (0).
    //  </summary>
    property OnRenderPopupShow: TOnRenderPopupShowEvent read FOnPopupShow write FOnPopupShow;
    //  <summary>
    //  Called when the browser wants to move or resize the popup widget. |rect|
    //  contains the new location and size in view coordinates.
    //  </summary>
    property OnRenderPopupSize: TOnRenderPopupSizeEvent read FOnPopupSize write FOnPopupSize;
    //  <summary>
    //  Called when an element should be painted. Pixel values passed to this
    //  function are scaled relative to view coordinates based on the value of
    //  TCefScreenInfo.device_scale_factor returned from GetScreenInfo. |type|
    //  indicates whether the element is the view or the popup widget. |buffer|
    //  contains the pixel data for the whole image. |dirtyRects| contains the set
    //  of rectangles in pixel coordinates that need to be repainted. |buffer|
    //  will be |width|*|height|*4 bytes in size and represents a BGRA image with
    //  an upper-left origin. This function is only called when
    //  TCefWindowInfo.shared_texture_enabled is set to false (0).
    //  </summary>
    property OnRenderPaint: TOnRenderPaintEvent read FOnPaint write FOnPaint;
    //  <summary>
    //  <para>Called when an element has been rendered to the shared texture handle.
    //  |type| indicates whether the element is the view or the popup widget.
    //  |dirtyRects| contains the set of rectangles in pixel coordinates that need
    //  to be repainted. |info| contains the shared handle; on Windows it is a
    //  HANDLE to a texture that can be opened with D3D11 OpenSharedResource, on
    //  macOS it is an IOSurface pointer that can be opened with Metal or OpenGL,
    //  and on Linux it contains several planes, each with an fd to the underlying
    //  system native buffer.</para>
    //  <para>The underlying implementation uses a pool to deliver frames. As a result,
    //  the handle may differ every frame depending on how many frames are in-
    //  progress. The handle's resource cannot be cached and cannot be accessed
    //  outside of this callback. It should be reopened each time this callback is
    //  executed and the contents should be copied to a texture owned by the
    //  client application. The contents of |info| will be released back to the
    //  pool after this callback returns.</para>
    //  </summary>
    property OnRenderAcceleratedPaint: TOnRenderAcceleratedPaintEvent read FOnAcceleratedPaint write FOnAcceleratedPaint;
    //  <summary>
    //  Called to retrieve the size of the touch handle for the specified
    //  |orientation|.
    //  </summary>
    property OnRenderGetTouchHandleSize: TOnRenderGetTouchHandleSizeEvent read FGetTouchHandleSize write FGetTouchHandleSize;
    //  <summary>
    //  Called when touch handle state is updated. The client is responsible for
    //  rendering the touch handles.
    //  </summary>
    property OnRenderTouchHandleStateChanged: TOnRenderTouchHandleStateChangedEvent read FOnTouchHandleStateChanged write FOnTouchHandleStateChanged;
    //  <summary>
    //  Called when the web view wants to update the mouse cursor during a drag &
    //  drop operation. |operation| describes the allowed operation (none, move,
    //  copy, link).
    //  </summary>
    property OnRenderUpdateDragCursor: TOnRenderUpdateDragCursorEvent read FOnUpdateDragCursor write FOnUpdateDragCursor;
    //  <summary>
    //  Called when the scroll offset has changed.
    //  </summary>
    property OnRenderScrollOffsetChanged: TOnRenderScrollOffsetChangedEvent read FOnScrollOffsetChanged write FOnScrollOffsetChanged;
    //  <summary>
    //  Called when the IME composition range has changed. |selected_range| is the
    //  range of characters that have been selected. |character_bounds| is the
    //  bounds of each character in view coordinates.
    //  </summary>
    property OnRenderIMECompositionRangeChanged: TOnRenderIMECompositionRangeChangedEvent read FOnIMECompositionRangeChanged write FOnIMECompositionRangeChanged;
    //  <summary>
    //  Called when text selection has changed for the specified |browser|.
    //  |selected_text| is the currently selected text and |selected_range| is the
    //  character range.
    //  </summary>
    property OnRenderTextSelectionChanged: TOnRenderTextSelectionChangedEvent read FOnTextSelectionChanged write FOnTextSelectionChanged;
    //  <summary>
    //  Called when an on-screen keyboard should be shown or hidden for the
    //  specified |browser|. |input_mode| specifies what kind of keyboard should
    //  be opened. If |input_mode| is CEF_TEXT_INPUT_MODE_NONE, any existing
    //  keyboard for this browser should be hidden.
    //  </summary>
    property OnRenderVirtualKeyboardRequested: TOnRenderVirtualKeyboardRequestedEvent read FOnVirtualKeyboardRequested write FOnVirtualKeyboardRequested;
  end;

  //  <summary>
  //  Interface used to implement render process callbacks. The functions of this
  //  interface will be called on the render process main thread (TID_RENDERER)
  //  unless otherwise indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefRenderProcessHandler">Implements TCefRenderProcessHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_render_process_handler_capi.h">CEF source file: /include/capi/cef_render_process_handler_capi.h (cef_render_process_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Return the handler for browser load status events.
    //  </summary>
    property OnRenderProcessGetLoadHandler: TOnRenderProcessGetLoadHandlerEvent read FGetLoadHandler write FGetLoadHandler;
    //  <summary>
    //  Called when a new message is received from a different process. Return
    //  true (1) if the message was handled or false (0) otherwise. It is safe to
    //  keep a reference to |message| outside of this callback.
    //  </summary>
    property OnRenderProcessProcessMessageReceived: TOnRenderProcessProcessMessageReceivedEvent read FOnProcessMessageReceived write FOnProcessMessageReceived;
    //  <summary>
    //  Called after WebKit has been initialized.
    //  </summary>
    property OnRenderProcessWebKitInitialized: TOnRenderProcessWebKitInitializedEvent read FOnWebKitInitialized write FOnWebKitInitialized;
    //  <summary>
    //  Called after a browser has been created. When browsing cross-origin a new
    //  browser will be created before the old browser with the same identifier is
    //  destroyed. |extra_info| is an optional read-only value originating from
    //  cef_browser_host_create_browser(),
    //  cef_browser_host_create_browser_sync(),
    //  ICefLifeSpanHandler.OnBeforePopup or
    //  cef_browser_view_create().
    //  </summary>
    property OnRenderProcessBrowserCreated: TOnRenderProcessBrowserCreatedEvent read FOnBrowserCreated write FOnBrowserCreated;
    //  <summary>
    //  Called before a browser is destroyed.
    //  </summary>
    property OnRenderProcessBrowserDestroyed: TOnRenderProcessBrowserDestroyedEvent read FOnBrowserDestroyed write FOnBrowserDestroyed;
    //  <summary>
    //  Called immediately after the V8 context for a frame has been created. To
    //  retrieve the JavaScript 'window' object use the
    //  ICefv8context.GetGlobal function. V8 handles can only be accessed
    //  from the thread on which they are created. A task runner for posting tasks
    //  on the associated thread can be retrieved via the
    //  ICefv8context.GetTaskRunner() function.
    //  </summary>
    property OnRenderProcessContextCreated: TOnRenderProcessContextCreatedEvent read FOnContextCreated write FOnContextCreated;
    //  <summary>
    //  Called immediately before the V8 context for a frame is released. No
    //  references to the context should be kept after this function is called.
    //  </summary>
    property OnRenderProcessContextReleased: TOnRenderProcessContextReleasedEvent read FOnContextReleased write FOnContextReleased;
    //  <summary>
    //  Called for global uncaught exceptions in a frame. Execution of this
    //  callback is disabled by default. To enable set
    //  TCefSettings.uncaught_exception_stack_size > 0.
    //  </summary>
    property OnRenderProcessUncaughtException: TOnRenderProcessUncaughtExceptionEvent read FOnUncaughtException write FOnUncaughtException;
    //  <summary>
    //  Called when a new node in the the browser gets focus. The |node| value may
    //  be NULL if no specific node has gained focus. The node object passed to
    //  this function represents a snapshot of the DOM at the time this function
    //  is executed. DOM objects are only valid for the scope of this function. Do
    //  not keep references to or attempt to access any DOM objects outside the
    //  scope of this function.
    //  </summary>
    property OnRenderProcessFocusedNodeChanged: TOnRenderProcessFocusedNodeChangedEvent read FOnFocusedNodeChanged write FOnFocusedNodeChanged;
  end;

  //  <summary>
  //  Implement this interface to provide handler implementations. The handler
  //  instance will not be released until all objects related to the context have
  //  been destroyed.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefRequestContextHandler">Implements TCefRequestContextHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_request_context_handler_capi.h">CEF source file: /include/capi/cef_request_context_handler_capi.h (cef_request_context_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called on the browser process UI thread immediately after the request
    //  context has been initialized.
    //  </summary>
    property OnRequestContextRequestContextInitialized: TOnRequestContextRequestContextInitializedEvent read FOnRequestContextInitialized write FOnRequestContextInitialized;
    //  <summary>
    //  Called on the browser process IO thread before a resource request is
    //  initiated. The |browser| and |frame| values represent the source of the
    //  request, and may be NULL for requests originating from service workers or
    //  ICefUrlRequest. |request| represents the request contents and cannot be
    //  modified in this callback. |is_navigation| will be true (1) if the
    //  resource request is a navigation. |is_download| will be true (1) if the
    //  resource request is a download. |request_initiator| is the origin (scheme
    //  + domain) of the page that initiated the request. Set
    //  |disable_default_handling| to true (1) to disable default handling of the
    //  request, in which case it will need to be handled via
    //  ICefResourceRequestHandler.GetResourceHandler or it will be canceled.
    //  To allow the resource load to proceed with default handling return NULL.
    //  To specify a handler for the resource return a
    //  ICefResourceRequestHandler object. This function will not be called if
    //  the client associated with |browser| returns a non-NULL value from
    //  ICefRequestHandler.GetResourceRequestHandler for the same request
    //  (identified by ICefRequest.GetIdentifier).
    //  </summary>
    property OnRequestContextGetResourceRequestHandler: TOnRequestContextGetResourceRequestHandlerEvent read FGetResourceRequestHandler write FGetResourceRequestHandler;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser requests. The
  //  functions of this interface will be called on the thread indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefRequestHandler">Implements TCefRequestHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_request_handler_capi.h">CEF source file: /include/capi/cef_request_handler_capi.h (cef_request_handler_t)</see></para>
  //  </remarks>
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
    FOnRenderProcessUnresponsive: TOnRequestRenderProcessUnresponsiveEvent;
    FGetResourceRequestHandler: TOnRequestGetResourceRequestHandlerEvent;
    FOnRenderViewReady: TOnRequestRenderViewReadyEvent;
    FOnRenderProcessResponsive: TOnRequestRenderProcessResponsiveEvent;
    FOnRenderProcessTerminated: TOnRequestRenderProcessTerminatedEvent;
    FOnDocumentAvailableInMainFrame: TOnRequestDocumentAvailableInMainFrameEvent;
  protected
    function OnBeforeBrowse(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean; override;
    function OnOpenUrlFromTab(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean; override;
    function GetAuthCredentials(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean; override;
    function OnCertificateError(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean; override;
    function OnSelectClientCertificate(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean; override;
    function OnRenderProcessUnresponsive(const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback): boolean; override;
    procedure GetResourceRequestHandler(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler); override;
    procedure OnRenderViewReady(const browser: ICefBrowser); override;
    procedure OnRenderProcessResponsive(const browser: ICefBrowser); override;
    procedure OnRenderProcessTerminated(const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring); override;
    procedure OnDocumentAvailableInMainFrame(const browser: ICefBrowser); override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  Called on the UI thread before browser navigation. Return true (1) to
    //  cancel the navigation or false (0) to allow the navigation to proceed. The
    //  |request| object cannot be modified in this callback.
    //  ICefLoadHandler.OnLoadingStateChange will be called twice in all
    //  cases. If the navigation is allowed ICefLoadHandler.OnLoadStart and
    //  ICefLoadHandler.OnLoadEnd will be called. If the navigation is
    //  canceled ICefLoadHandler.OnLoadError will be called with an
    //  |errorCode| value of ERR_ABORTED. The |user_gesture| value will be true
    //  (1) if the browser navigated via explicit user gesture (e.g. clicking a
    //  link) or false (0) if it navigated automatically (e.g. via the
    //  DomContentLoaded event).
    //  </summary>
    property OnRequestBeforeBrowse: TOnRequestBeforeBrowseEvent read FOnBeforeBrowse write FOnBeforeBrowse;
    //  <summary>
    //  Called on the UI thread before OnBeforeBrowse in certain limited cases
    //  where navigating a new or different browser might be desirable. This
    //  includes user-initiated navigation that might open in a special way (e.g.
    //  links clicked via middle-click or ctrl + left-click) and certain types of
    //  cross-origin navigation initiated from the renderer process (e.g.
    //  navigating the top-level frame to/from a file URL). The |browser| and
    //  |frame| values represent the source of the navigation. The
    //  |target_disposition| value indicates where the user intended to navigate
    //  the browser based on standard Chromium behaviors (e.g. current tab, new
    //  tab, etc). The |user_gesture| value will be true (1) if the browser
    //  navigated via explicit user gesture (e.g. clicking a link) or false (0) if
    //  it navigated automatically (e.g. via the DomContentLoaded event). Return
    //  true (1) to cancel the navigation or false (0) to allow the navigation to
    //  proceed in the source browser's top-level frame.
    //  </summary>
    property OnRequestOpenUrlFromTab: TOnRequestOpenUrlFromTabEvent read FOnOpenUrlFromTab write FOnOpenUrlFromTab;
    //  <summary>
    //  Called on the IO thread when the browser needs credentials from the user.
    //  |origin_url| is the origin making this authentication request. |isProxy|
    //  indicates whether the host is a proxy server. |host| contains the hostname
    //  and |port| contains the port number. |realm| is the realm of the challenge
    //  and may be NULL. |scheme| is the authentication scheme used, such as
    //  "basic" or "digest", and will be NULL if the source of the request is an
    //  FTP server. Return true (1) to continue the request and call
    //  ICefAuthCallback.cont() either in this function or at a later time
    //  when the authentication information is available. Return false (0) to
    //  cancel the request immediately.
    //  </summary>
    property OnRequestGetAuthCredentials: TOnRequestGetAuthCredentialsEvent read FGetAuthCredentials write FGetAuthCredentials;
    //  <summary>
    //  Called on the UI thread to handle requests for URLs with an invalid SSL
    //  certificate. Return true (1) and call ICefCallback functions either in
    //  this function or at a later time to continue or cancel the request. Return
    //  false (0) to cancel the request immediately. If
    //  TCefSettings.ignore_certificate_errors is set all invalid certificates
    //  will be accepted without calling this function.
    //  </summary>
    property OnRequestCertificateError: TOnRequestCertificateErrorEvent read FOnCertificateError write FOnCertificateError;
    //  <summary>
    //  Called on the UI thread when a client certificate is being requested for
    //  authentication. Return false (0) to use the default behavior and
    //  automatically select the first certificate available. Return true (1) and
    //  call ICefSelectClientCertificateCallback.Select either in this
    //  function or at a later time to select a certificate. Do not call Select or
    //  call it with NULL to continue without using any certificate. |isProxy|
    //  indicates whether the host is an HTTPS proxy or the origin server. |host|
    //  and |port| contains the hostname and port of the SSL server.
    //  |certificates| is the list of certificates to choose from; this list has
    //  already been pruned by Chromium so that it only contains certificates from
    //  issuers that the server trusts.
    //  </summary>
    property OnRequestSelectClientCertificate: TOnRequestSelectClientCertificateEvent read FOnSelectClientCertificate write FOnSelectClientCertificate;
    //  <summary>
    //  Called on the browser process UI thread when the render process is
    //  unresponsive as indicated by a lack of input event processing for at least
    //  15 seconds. Return false (0) for the default behavior which is an
    //  indefinite wait with the Alloy runtime or display of the "Page
    //  unresponsive" dialog with the Chrome runtime. Return true (1) and don't
    //  execute the callback for an indefinite wait without display of the Chrome
    //  runtime dialog. Return true (1) and call
    //  ICefUnresponsiveProcessCallback.Wait either in this function or at a
    //  later time to reset the wait timer, potentially triggering another call to
    //  this function if the process remains unresponsive. Return true (1) and
    //  call ICefUnresponsiveProcessCallback.Terminate either in this
    //  function or at a later time to terminate the unresponsive process,
    //  resulting in a call to OnRenderProcessTerminated.
    //  OnRenderProcessResponsive will be called if the process becomes responsive
    //  after this function is called. This functionality depends on the hang
    //  monitor which can be disabled by passing the `--disable-hang-monitor`
    //  command-line flag or setting GlobalCEFApp.DisableHangMonitor to True.
    //  </summary>
    property OnRequestRenderProcessUnresponsive: TOnRequestRenderProcessUnresponsiveEvent read FOnRenderProcessUnresponsive write FOnRenderProcessUnresponsive;
    //  <summary>
    //  Called on the browser process IO thread before a resource request is
    //  initiated. The |browser| and |frame| values represent the source of the
    //  request. |request| represents the request contents and cannot be modified
    //  in this callback. |is_navigation| will be true (1) if the resource request
    //  is a navigation. |is_download| will be true (1) if the resource request is
    //  a download. |request_initiator| is the origin (scheme + domain) of the
    //  page that initiated the request. Set |disable_default_handling| to true
    //  (1) to disable default handling of the request, in which case it will need
    //  to be handled via ICefResourceRequestHandler.GetResourceHandler or it
    //  will be canceled. To allow the resource load to proceed with default
    //  handling return NULL. To specify a handler for the resource return a
    //  ICefResourceRequestHandler object. If this callback returns NULL the
    //  same function will be called on the associated
    //  ICefRequestContextHandler, if any.
    //  </summary>
    property OnRequestGetResourceRequestHandler: TOnRequestGetResourceRequestHandlerEvent read FGetResourceRequestHandler write FGetResourceRequestHandler;
    //  <summary>
    //  Called on the browser process UI thread when the render view associated
    //  with |browser| is ready to receive/handle IPC messages in the render
    //  process.
    //  </summary>
    property OnRequestRenderViewReady: TOnRequestRenderViewReadyEvent read FOnRenderViewReady write FOnRenderViewReady;
    //  <summary>
    //  Called on the browser process UI thread when the render process becomes
    //  responsive after previously being unresponsive. See documentation on
    //  OnRenderProcessUnresponsive.
    //  </summary>
    property OnRequestRenderProcessResponsive: TOnRequestRenderProcessResponsiveEvent read FOnRenderProcessResponsive write FOnRenderProcessResponsive;
    //  <summary>
    //  Called on the browser process UI thread when the render process terminates
    //  unexpectedly. |status| indicates how the process terminated. |error_code|
    //  and |error_string| represent the error that would be displayed in Chrome's
    //  "Aw, Snap!" view. Possible |error_code| values include TCefResultCode
    //  non-normal exit values and platform-specific crash values (for example, a
    //  Posix signal or Windows hardware exception).
    //  </summary>
    property OnRequestRenderProcessTerminated: TOnRequestRenderProcessTerminatedEvent read FOnRenderProcessTerminated write FOnRenderProcessTerminated;
    //  <summary>
    //  Called on the browser process UI thread when the window.document object of
    //  the main frame has been created.
    //  </summary>
    property OnRequestDocumentAvailableInMainFrame: TOnRequestDocumentAvailableInMainFrameEvent read FOnDocumentAvailableInMainFrame write FOnDocumentAvailableInMainFrame;
  end;

  //  <summary>
  //  Callback interface for ICefRequestContext.ResolveHost.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefResolveCallback">Implements TCefResolveCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_request_context_capi.h">CEF source file: /include/capi/cef_request_context_capi.h (cef_resolve_callback_t)</see></para>
  //  </remarks>
  TEngResolveCallback = class(TCefResolveCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnResolveCompleted: TOnResolveCallbackResolveCompletedEvent;
  protected
    procedure OnResolveCompleted(result: TCefErrorCode; const resolvedIps: TStrings); override;
  published
    //  <summary>
    //  Called on the UI thread after the ResolveHost request has completed.
    //  |result| will be the result code. |resolved_ips| will be the list of
    //  resolved IP addresses or NULL if the resolution failed.
    //  </summary>
    property OnResolveCallbackResolveCompleted: TOnResolveCallbackResolveCompletedEvent read FOnResolveCompleted write FOnResolveCompleted;
  end;

  //  <summary>
  //  Interface used to implement a custom resource bundle interface. See
  //  TCefSettings for additional options related to resource bundle loading. The
  //  functions of this interface may be called on multiple threads.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefResourceBundleHandler">Implements TCefResourceBundleHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_resource_bundle_handler_capi.h">CEF source file: /include/capi/cef_resource_bundle_handler_capi.h (cef_resource_bundle_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called to retrieve a localized translation for the specified |string_id|.
    //  To provide the translation set |string| to the translation string and
    //  return true (1). To use the default translation return false (0). Include
    //  cef_pack_strings.h for a listing of valid string ID values.
    //  </summary>
    property OnResourceBundleGetLocalizedString: TOnResourceBundleGetLocalizedStringEvent read FGetLocalizedString write FGetLocalizedString;
    //  <summary>
    //  Called to retrieve data for the specified scale independent |resource_id|.
    //  To provide the resource data set |data| and |data_size| to the data
    //  pointer and size respectively and return true (1). To use the default
    //  resource data return false (0). The resource data will not be copied and
    //  must remain resident in memory. Include cef_pack_resources.h for a listing
    //  of valid resource ID values.
    //  </summary>
    property OnResourceBundleGetDataResource: TOnResourceBundleGetDataResourceEvent read FGetDataResource write FGetDataResource;
    //  <summary>
    //  Called to retrieve data for the specified |resource_id| nearest the scale
    //  factor |scale_factor|. To provide the resource data set |data| and
    //  |data_size| to the data pointer and size respectively and return true (1).
    //  To use the default resource data return false (0). The resource data will
    //  not be copied and must remain resident in memory. Include
    //  cef_pack_resources.h for a listing of valid resource ID values.
    //  </summary>
    property OnResourceBundleGetDataResourceForScale: TOnResourceBundleGetDataResourceForScaleEvent read FGetDataResourceForScale write FGetDataResourceForScale;
  end;

  //  <summary>
  //  Interface used to implement a custom request handler interface. The
  //  functions of this interface will be called on the IO thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefResourceHandler">Implements TCefResourceHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_resource_handler_capi.h">CEF source file: /include/capi/cef_resource_handler_capi.h (cef_resource_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Open the response stream. To handle the request immediately set
    //  |handle_request| to true (1) and return true (1). To decide at a later
    //  time set |handle_request| to false (0), return true (1), and execute
    //  |callback| to continue or cancel the request. To cancel the request
    //  immediately set |handle_request| to true (1) and return false (0). This
    //  function will be called in sequence but not from a dedicated thread. For
    //  backwards compatibility set |handle_request| to false (0) and return false
    //  (0) and the ProcessRequest function will be called.
    //  </summary>
    property OnResourceOpen: TOnResourceOpenEvent read Fopen write Fopen;
    //  <summary>
    //  Begin processing the request. To handle the request return true (1) and
    //  call ICefCallback.cont() once the response header information is
    //  available (ICefCallback.cont() can also be called from inside this
    //  function if header information is available immediately). To cancel the
    //  request return false (0).
    //  </summary>
    //  <remarks>
    //  <para>WARNING: This function is deprecated. Use Open instead.</para>
    //  </remarks>
    property OnResourceProcessRequest: TOnResourceProcessRequestEvent read FProcessRequest write FProcessRequest;
    //  <summary>
    //  Skip response data when requested by a Range header. Skip over and discard
    //  |bytes_to_skip| bytes of response data. If data is available immediately
    //  set |bytes_skipped| to the number of bytes skipped and return true (1). To
    //  read the data at a later time set |bytes_skipped| to 0, return true (1)
    //  and execute |callback| when the data is available. To indicate failure set
    //  |bytes_skipped| to < 0 (e.g. -2 for ERR_FAILED) and return false (0). This
    //  function will be called in sequence but not from a dedicated thread.
    //  </summary>
    property OnResourceSkip: TOnResourceSkipEvent read Fskip write Fskip;
    //  <summary>
    //  Read response data. If data is available immediately copy up to
    //  |bytes_to_read| bytes into |data_out|, set |bytes_read| to the number of
    //  bytes copied, and return true (1). To read the data at a later time keep a
    //  pointer to |data_out|, set |bytes_read| to 0, return true (1) and execute
    //  |callback| when the data is available (|data_out| will remain valid until
    //  the callback is executed). To indicate response completion set
    //  |bytes_read| to 0 and return false (0). To indicate failure set
    //  |bytes_read| to < 0 (e.g. -2 for ERR_FAILED) and return false (0). This
    //  function will be called in sequence but not from a dedicated thread. For
    //  backwards compatibility set |bytes_read| to -1 and return false (0) and
    //  the ReadResponse function will be called.
    //  </summary>
    property OnResourceRead: TOnResourceReadEvent read Fread write Fread;
    //  <summary>
    //  Read response data. If data is available immediately copy up to
    //  |bytes_to_read| bytes into |data_out|, set |bytes_read| to the number of
    //  bytes copied, and return true (1). To read the data at a later time set
    //  |bytes_read| to 0, return true (1) and call ICefCallback.cont() when
    //  the data is available. To indicate response completion return false (0).
    //  </summary>
    //  <remarks>
    //  <para>WARNING: This function is deprecated. Use Skip and Read instead.</para>
    //  </remarks>
    property OnResourceReadResponse: TOnResourceReadResponseEvent read FReadResponse write FReadResponse;
    //  <summary>
    //  Retrieve response header information. If the response length is not known
    //  set |response_length| to -1 and read_response() will be called until it
    //  returns false (0). If the response length is known set |response_length|
    //  to a positive value and read_response() will be called until it returns
    //  false (0) or the specified number of bytes have been read. Use the
    //  |response| object to set the mime type, http status code and other
    //  optional header values. To redirect the request to a new URL set
    //  |redirectUrl| to the new URL. |redirectUrl| can be either a relative or
    //  fully qualified URL. It is also possible to set |response| to a redirect
    //  http status code and pass the new URL via a Location header. Likewise with
    //  |redirectUrl| it is valid to set a relative or fully qualified URL as the
    //  Location header value. If an error occured while setting up the request
    //  you can call set_error() on |response| to indicate the error condition.
    //  </summary>
    property OnResourceGetResponseHeaders: TOnResourceGetResponseHeadersEvent read FGetResponseHeaders write FGetResponseHeaders;
    //  <summary>
    //  Request processing has been canceled.
    //  </summary>
    property OnResourceCancel: TOnResourceCancelEvent read FCancel write FCancel;
  end;

  //  <summary>
  //  Implement this interface to filter resource response content. The functions
  //  of this interface will be called on the browser process IO thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefResponseFilter">Implements TCefResponseFilter</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_response_filter_capi.h">CEF source file: /include/capi/cef_response_filter_capi.h (cef_response_filter_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Initialize the response filter. Will only be called a single time. The
    //  filter will not be installed if this function returns false (0).
    //  </summary>
    property OnResponseFilterInitFilter: TOnResponseFilterInitFilterEvent read FInitFilter write FInitFilter;
    //  <summary>
    //  <para>Called to filter a chunk of data. Expected usage is as follows:</para>
    //  <code>
    //  1. Read input data from |data_in| and set |data_in_read| to the number of
    //  bytes that were read up to a maximum of |data_in_size|. |data_in| will
    //  be NULL if |data_in_size| is zero.
    //  2. Write filtered output data to |data_out| and set |data_out_written| to
    //  the number of bytes that were written up to a maximum of
    //  |data_out_size|. If no output data was written then all data must be
    //  read from |data_in| (user must set |data_in_read| = |data_in_size|).
    //  3. Return RESPONSE_FILTER_DONE if all output data was written or
    //  RESPONSE_FILTER_NEED_MORE_DATA if output data is still pending.
    //  </code>
    //  <para>This function will be called repeatedly until the input buffer has been
    //  fully read (user sets |data_in_read| = |data_in_size|) and there is no
    //  more input data to filter (the resource response is complete). This
    //  function may then be called an additional time with an NULL input buffer
    //  if the user filled the output buffer (set |data_out_written| =
    //  |data_out_size|) and returned RESPONSE_FILTER_NEED_MORE_DATA to indicate
    //  that output data is still pending.</para>
    //  <para>Calls to this function will stop when one of the following conditions is
    //  met:</para>
    //  <code>
    //  1. There is no more input data to filter (the resource response is
    //  complete) and the user sets |data_out_written| = 0 or returns
    //  RESPONSE_FILTER_DONE to indicate that all data has been written, or;
    //  2. The user returns RESPONSE_FILTER_ERROR to indicate an error.
    //  </code>
    //  <para>Do not keep a reference to the buffers passed to this function.</para>
    //  </summary>
    property OnResponseFilterFilter: TOnResponseFilterFilterEvent read FFilter write FFilter;
  end;

  //  <summary>
  //  Callback interface for ICefBrowserHost.RunFileDialog. The functions of
  //  this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefRunFileDialogCallback">Implements TCefRunFileDialogCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_capi.h">CEF source file: /include/capi/cef_browser_capi.h (cef_run_file_dialog_callback_t)</see></para>
  //  </remarks>
  TEngRunFileDialogCallback = class(TCefRunFileDialogCallbackOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnFileDialogDismissed: TOnRunFileDialogCallbackFileDialogDismissedEvent;
  protected
    procedure OnFileDialogDismissed(const filePaths: TStrings); override;
  published
    //  <summary>
    //  Called asynchronously after the file dialog is dismissed. |file_paths|
    //  will be a single value or a list of values depending on the dialog mode.
    //  If the selection was cancelled |file_paths| will be NULL.
    //  </summary>
    property OnRunFileDialogCallbackFileDialogDismissed: TOnRunFileDialogCallbackFileDialogDismissedEvent read FOnFileDialogDismissed write FOnFileDialogDismissed;
  end;

  //  <summary>
  //  Interface that creates ICefResourceHandler instances for handling scheme
  //  requests. The functions of this interface will always be called on the IO
  //  thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefSchemeHandlerFactory">Implements TCefSchemeHandlerFactory</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_scheme_capi.h">CEF source file: /include/capi/cef_scheme_capi.h (cef_scheme_handler_factory_t)</see></para>
  //  </remarks>
  TEngSchemeHandlerFactory = class(TCefSchemeHandlerFactoryOwn)
  public
    constructor Create(const AClass: TCefResourceHandlerClass); override;
    destructor Destroy; override;
  protected
    FNew: TOnSchemeFactoryNewEvent;
  protected
    function New(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler; override;
  published
    //  <summary>
    //  Return a new resource handler instance to handle the request or an NULL
    //  reference to allow default handling of the request. |browser| and |frame|
    //  will be the browser window and frame respectively that originated the
    //  request or NULL if the request did not originate from a browser window
    //  (for example, if the request came from ICefUrlRequest). The |request|
    //  object passed to this function cannot be modified.
    //  </summary>
    property OnSchemeFactoryNew: TOnSchemeFactoryNewEvent read FNew write FNew;
  end;

  //  <summary>
  //  Interface to implement to be notified of asynchronous completion via
  //  ICefCookieManager.SetCookie.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefSetCookieCallback">Implements TCefSetCookieCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_set_cookie_callback_t)</see></para>
  //  </remarks>
  TEngSetCookieCallback = class(TCefSetCookieCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnComplete: TOnSetCookieCallbackCompleteEvent;
  protected
    procedure OnComplete(success: Boolean); override;
  published
    //  <summary>
    //  Method that will be called upon completion. |success| will be true (1) if
    //  the cookie was set successfully.
    //  </summary>
    property OnSetCookieCallbackComplete: TOnSetCookieCallbackCompleteEvent read FOnComplete write FOnComplete;
  end;

  //  <summary>
  //  Implement this interface to receive string values asynchronously.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefStringVisitor">Implements TCefStringVisitor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_string_visitor_capi.h">CEF source file: /include/capi/cef_string_visitor_capi.h (cef_string_visitor_t)</see></para>
  //  </remarks>
  TEngStringVisitor = class(TCefStringVisitorOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FVisit: TOnStringVisitorVisitEvent;
  protected
    procedure Visit(const str: ustring); override;
  published
    //  <summary>
    //  Method that will be executed.
    //  </summary>
    property OnStringVisitorVisit: TOnStringVisitorVisitEvent read FVisit write FVisit;
  end;

  //  <summary>
  //  Implement this interface for asynchronous task execution. If the task is
  //  posted successfully and if the associated message loop is still running then
  //  the execute() function will be called on the target thread. If the task
  //  fails to post then the task object may be destroyed on the source thread
  //  instead of the target thread. For this reason be cautious when performing
  //  work in the task object destructor.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefTask">Implements TCefTask</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_task_capi.h">CEF source file: /include/capi/cef_task_capi.h (cef_task_t)</see></para>
  //  </remarks>
  TEngTask = class(TCefTaskOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FExecute: TOnTaskExecuteEvent;
  protected
    procedure Execute(); override;
  published
    //  <summary>
    //  Method that will be executed on the target thread.
    //  </summary>
    property OnTaskExecute: TOnTaskExecuteEvent read FExecute write FExecute;
  end;

  //  <summary>
  //  Interface that should be implemented by the ICefUrlRequest client. The
  //  functions of this interface will be called on the same thread that created
  //  the request unless otherwise documented.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefUrlrequestClient">Implements TCefUrlrequestClient</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_urlrequest_capi.h">CEF source file: /include/capi/cef_urlrequest_capi.h (cef_urlrequest_client_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called on the IO thread when the browser needs credentials from the user.
    //  |isProxy| indicates whether the host is a proxy server. |host| contains
    //  the hostname and |port| contains the port number. Return true (1) to
    //  continue the request and call ICefAuthCallback.cont() when the
    //  authentication information is available. If the request has an associated
    //  browser/frame then returning false (0) will result in a call to
    //  GetAuthCredentials on the ICefRequestHandler associated with that
    //  browser, if any. Otherwise, returning false (0) will cancel the request
    //  immediately. This function will only be called for requests initiated from
    //  the browser process.
    //  </summary>
    property OnUrlrequestClientGetAuthCredentials: TOnUrlrequestClientGetAuthCredentialsEvent read FOnGetAuthCredentials write FOnGetAuthCredentials;
    //  <summary>
    //  Notifies the client that the request has completed. Use the
    //  ICefUrlRequest.GetRequestStatus function to determine if the request
    //  was successful or not.
    //  </summary>
    property OnUrlrequestClientRequestComplete: TOnUrlrequestClientRequestCompleteEvent read FOnRequestComplete write FOnRequestComplete;
    //  <summary>
    //  Notifies the client of upload progress. |current| denotes the number of
    //  bytes sent so far and |total| is the total size of uploading data (or -1
    //  if chunked upload is enabled). This function will only be called if the
    //  UR_FLAG_REPORT_UPLOAD_PROGRESS flag is set on the request.
    //  </summary>
    property OnUrlrequestClientUploadProgress: TOnUrlrequestClientUploadProgressEvent read FOnUploadProgress write FOnUploadProgress;
    //  <summary>
    //  Notifies the client of download progress. |current| denotes the number of
    //  bytes received up to the call and |total| is the expected total size of
    //  the response (or -1 if not determined).
    //  </summary>
    property OnUrlrequestClientDownloadProgress: TOnUrlrequestClientDownloadProgressEvent read FOnDownloadProgress write FOnDownloadProgress;
    //  <summary>
    //  Called when some part of the response is read. |data| contains the current
    //  bytes received since the last call. This function will not be called if
    //  the UR_FLAG_NO_DOWNLOAD_DATA flag is set on the request.
    //  </summary>
    property OnUrlrequestClientDownloadData: TOnUrlrequestClientDownloadDataEvent read FOnDownloadData write FOnDownloadData;
  end;

  //  <summary>
  //  Interface that should be implemented to handle V8 accessor calls. Accessor
  //  identifiers are registered by calling ICefV8value.SetValue(). The
  //  functions of this interface will be called on the thread associated with the
  //  V8 accessor.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefV8Accessor">Implements TCefV8Accessor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8accessor_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Handle retrieval the accessor value identified by |name|. |object| is the
    //  receiver ('this' object) of the accessor. If retrieval succeeds set
    //  |retval| to the return value. If retrieval fails set |exception| to the
    //  exception that will be thrown. Return true (1) if accessor retrieval was
    //  handled.
    //  </summary>
    property OnV8AccessorGet: TOnV8AccessorGetEvent read FGet write FGet;
    //  <summary>
    //  Handle assignment of the accessor value identified by |name|. |object| is
    //  the receiver ('this' object) of the accessor. |value| is the new value
    //  being assigned to the accessor. If assignment fails set |exception| to the
    //  exception that will be thrown. Return true (1) if accessor assignment was
    //  handled.
    //  </summary>
    property OnV8AccessorSet_: TOnV8AccessorSet_Event read FSet_ write FSet_;
  end;

  //  <summary>
  //  Callback interface that is passed to ICefV8value.CreateArrayBuffer.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefv8ArrayBufferReleaseCallback">Implements TCefv8ArrayBufferReleaseCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8array_buffer_release_callback_t)</see></para>
  //  </remarks>
  TEngV8ArrayBufferReleaseCallback = class(TCefv8ArrayBufferReleaseCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FReleaseBuffer: TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent;
  protected
    procedure ReleaseBuffer(buffer: Pointer); override;
  published
    //  <summary>
    //  Called to release |buffer| when the ArrayBuffer JS object is garbage
    //  collected. |buffer| is the value that was passed to CreateArrayBuffer
    //  along with this object.
    //  </summary>
    property OnV8ArrayBufferReleaseCallbackReleaseBuffer: TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent read FReleaseBuffer write FReleaseBuffer;
  end;

  //  <summary>
  //  Interface that should be implemented to handle V8 function calls. The
  //  functions of this interface will be called on the thread associated with the
  //  V8 function.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefv8Handler">Implements TCefv8Handler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8handler_t)</see></para>
  //  </remarks>
  TEngV8Handler = class(TCefv8HandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FExecute: TOnV8ExecuteEvent;
  protected
    function Execute(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean; override;
  published
    //  <summary>
    //  Handle execution of the function identified by |name|. |object| is the
    //  receiver ('this' object) of the function. |arguments| is the list of
    //  arguments passed to the function. If execution succeeds set |retval| to
    //  the function return value. If execution fails set |exception| to the
    //  exception that will be thrown. Return true (1) if execution was handled.
    //  </summary>
    property OnV8Execute: TOnV8ExecuteEvent read FExecute write FExecute;
  end;

  //  <summary>
  //  Interface that should be implemented to handle V8 interceptor calls. The
  //  functions of this interface will be called on the thread associated with the
  //  V8 interceptor. Interceptor's named property handlers (with first argument
  //  of type CefString) are called when object is indexed by string. Indexed
  //  property handlers (with first argument of type int) are called when object
  //  is indexed by integer.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefV8Interceptor">Implements TCefV8Interceptor</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8interceptor_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Handle retrieval of the interceptor value identified by |name|. |object|
    //  is the receiver ('this' object) of the interceptor. If retrieval succeeds,
    //  set |retval| to the return value. If the requested value does not exist,
    //  don't set either |retval| or |exception|. If retrieval fails, set
    //  |exception| to the exception that will be thrown. If the property has an
    //  associated accessor, it will be called only if you don't set |retval|.
    //  Return true (1) if interceptor retrieval was handled, false (0) otherwise.
    //  </summary>
    property OnV8InterceptorGetByName: TOnV8InterceptorGetByNameEvent read FGetByName write FGetByName;
    //  <summary>
    //  Handle retrieval of the interceptor value identified by |index|. |object|
    //  is the receiver ('this' object) of the interceptor. If retrieval succeeds,
    //  set |retval| to the return value. If the requested value does not exist,
    //  don't set either |retval| or |exception|. If retrieval fails, set
    //  |exception| to the exception that will be thrown. Return true (1) if
    //  interceptor retrieval was handled, false (0) otherwise.
    //  </summary>
    property OnV8InterceptorGetByIndex: TOnV8InterceptorGetByIndexEvent read FGetByIndex write FGetByIndex;
    //  <summary>
    //  Handle assignment of the interceptor value identified by |name|. |object|
    //  is the receiver ('this' object) of the interceptor. |value| is the new
    //  value being assigned to the interceptor. If assignment fails, set
    //  |exception| to the exception that will be thrown. This setter will always
    //  be called, even when the property has an associated accessor. Return true
    //  (1) if interceptor assignment was handled, false (0) otherwise.
    //  </summary>
    property OnV8InterceptorSetByName: TOnV8InterceptorSetByNameEvent read FSetByName write FSetByName;
    //  <summary>
    //  Handle assignment of the interceptor value identified by |index|. |object|
    //  is the receiver ('this' object) of the interceptor. |value| is the new
    //  value being assigned to the interceptor. If assignment fails, set
    //  |exception| to the exception that will be thrown. Return true (1) if
    //  interceptor assignment was handled, false (0) otherwise.
    //  </summary>
    property OnV8InterceptorSetByIndex: TOnV8InterceptorSetByIndexEvent read FSetByIndex write FSetByIndex;
  end;

  //  <summary>
  //  Implement this interface to handle HTTP server requests. A new thread will
  //  be created for each ICefServer.CreateServer call (the "dedicated server
  //  thread"), and the functions of this interface will be called on that thread.
  //  It is therefore recommended to use a different ICefServerHandler instance
  //  for each ICefServer.CreateServer call to avoid thread safety issues in
  //  the ICefServerHandler implementation.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefServerHandler">Implements TCefServerHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_server_capi.h">CEF source file: /include/capi/cef_server_capi.h (cef_server_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when |server| is created. If the server was started successfully
    //  then ICefServer.IsRunning will return true (1). The server will
    //  continue running until ICefServerShutdown is called, after which time
    //  OnServerDestroyed will be called. If the server failed to start then
    //  OnServerDestroyed will be called immediately after this function returns.
    //  </summary>
    property OnServerServerCreated: TOnServerServerCreatedEvent read FOnServerCreated write FOnServerCreated;
    //  <summary>
    //  Called when |server| is destroyed. The server thread will be stopped after
    //  this function returns. The client should release any references to
    //  |server| when this function is called. See OnServerCreated documentation
    //  for a description of server lifespan.
    //  </summary>
    property OnServerServerDestroyed: TOnServerServerDestroyedEvent read FOnServerDestroyed write FOnServerDestroyed;
    //  <summary>
    //  Called when a client connects to |server|. |connection_id| uniquely
    //  identifies the connection. Each call to this function will have a matching
    //  call to OnClientDisconnected.
    //  </summary>
    property OnServerClientConnected: TOnServerClientConnectedEvent read FOnClientConnected write FOnClientConnected;
    //  <summary>
    //  Called when a client disconnects from |server|. |connection_id| uniquely
    //  identifies the connection. The client should release any data associated
    //  with |connection_id| when this function is called and |connection_id|
    //  should no longer be passed to ICefServer functions. Disconnects can
    //  originate from either the client or the server. For example, the server
    //  will disconnect automatically after a ICefServer.SendHttpXXXResponse
    //  function is called.
    //  </summary>
    property OnServerClientDisconnected: TOnServerClientDisconnectedEvent read FOnClientDisconnected write FOnClientDisconnected;
    //  <summary>
    //  Called when |server| receives an HTTP request. |connection_id| uniquely
    //  identifies the connection, |client_address| is the requesting IPv4 or IPv6
    //  client address including port number, and |request| contains the request
    //  contents (URL, function, headers and optional POST data). Call
    //  ICefServer functions either synchronously or asynchronusly to send a
    //  response.
    //  </summary>
    property OnServerHttpRequest: TOnServerHttpRequestEvent read FOnHttpRequest write FOnHttpRequest;
    //  <summary>
    //  Called when |server| receives a WebSocket request. |connection_id|
    //  uniquely identifies the connection, |client_address| is the requesting
    //  IPv4 or IPv6 client address including port number, and |request| contains
    //  the request contents (URL, function, headers and optional POST data).
    //  Execute |callback| either synchronously or asynchronously to accept or
    //  decline the WebSocket connection. If the request is accepted then
    //  OnWebSocketConnected will be called after the WebSocket has connected and
    //  incoming messages will be delivered to the OnWebSocketMessage callback. If
    //  the request is declined then the client will be disconnected and
    //  OnClientDisconnected will be called. Call the
    //  ICefServer.SendWebSocketMessage function after receiving the
    //  OnWebSocketConnected callback to respond with WebSocket messages.
    //  </summary>
    property OnServerWebSocketRequest: TOnServerWebSocketRequestEvent read FOnWebSocketRequest write FOnWebSocketRequest;
    //  <summary>
    //  Called after the client has accepted the WebSocket connection for |server|
    //  and |connection_id| via the OnWebSocketRequest callback. See
    //  OnWebSocketRequest documentation for intended usage.
    //  </summary>
    property OnServerWebSocketConnected: TOnServerWebSocketConnectedEvent read FOnWebSocketConnected write FOnWebSocketConnected;
    //  <summary>
    //  Called when |server| receives an WebSocket message. |connection_id|
    //  uniquely identifies the connection, |data| is the message content and
    //  |data_size| is the size of |data| in bytes. Do not keep a reference to
    //  |data| outside of this function. See OnWebSocketRequest documentation for
    //  intended usage.
    //  </summary>
    property OnServerWebSocketMessage: TOnServerWebSocketMessageEvent read FOnWebSocketMessage write FOnWebSocketMessage;
  end;

  //  <summary>
  //  Implement this interface to filter cookies that may be sent or received from
  //  resource requests. The functions of this interface will be called on the IO
  //  thread unless otherwise indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefCookieAccessFilter">Implements TCefCookieAccessFilter</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_resource_request_handler_capi.h">CEF source file: /include/capi/cef_resource_request_handler_capi.h (cef_cookie_access_filter_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called on the IO thread before a resource request is sent. The |browser|
    //  and |frame| values represent the source of the request, and may be NULL
    //  for requests originating from service workers or ICefUrlRequest.
    //  |request| cannot be modified in this callback. Return true (1) if the
    //  specified cookie can be sent with the request or false (0) otherwise.
    //  </summary>
    property OnCookieAccessFilterCanSendCookie: TOnCookieAccessFilterCanSendCookieEvent read FCanSendCookie write FCanSendCookie;
    //  <summary>
    //  Called on the IO thread after a resource response is received. The
    //  |browser| and |frame| values represent the source of the request, and may
    //  be NULL for requests originating from service workers or ICefUrlRequest.
    //  |request| cannot be modified in this callback. Return true (1) if the
    //  specified cookie returned with the response can be saved or false (0)
    //  otherwise.
    //  </summary>
    property OnCookieAccessFilterCanSaveCookie: TOnCookieAccessFilterCanSaveCookieEvent read FCanSaveCookie write FCanSaveCookie;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser requests. The
  //  functions of this interface will be called on the IO thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefResourceRequestHandler">Implements TCefResourceRequestHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_resource_request_handler_capi.h">CEF source file: /include/capi/cef_resource_request_handler_capi.h (cef_resource_request_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called on the IO thread before a resource request is loaded. The |browser|
    //  and |frame| values represent the source of the request, and may be NULL
    //  for requests originating from service workers or ICefUrlRequest. To
    //  redirect or change the resource load optionally modify |request|.
    //  Modification of the request URL will be treated as a redirect. Return
    //  RV_CONTINUE to continue the request immediately. Return RV_CONTINUE_ASYNC
    //  and call ICefCallback functions at a later time to continue or cancel
    //  the request asynchronously. Return RV_CANCEL to cancel the request
    //  immediately.
    //  </summary>
    property OnResourceRequestBeforeResourceLoad: TOnResourceRequestBeforeResourceLoadEvent read FOnBeforeResourceLoad write FOnBeforeResourceLoad;
    //  <summary>
    //  Called on the IO thread when a resource response is received. The
    //  |browser| and |frame| values represent the source of the request, and may
    //  be NULL for requests originating from service workers or ICefUrlRequest.
    //  To allow the resource load to proceed without modification return false
    //  (0). To redirect or retry the resource load optionally modify |request|
    //  and return true (1). Modification of the request URL will be treated as a
    //  redirect. Requests handled using the default network loader cannot be
    //  redirected in this callback. The |response| object cannot be modified in
    //  this callback.
    // 
    //  WARNING: Redirecting using this function is deprecated. Use
    //  OnBeforeResourceLoad or GetResourceHandler to perform redirects.
    //  </summary>
    property OnResourceRequestResourceResponse: TOnResourceRequestResourceResponseEvent read FOnResourceResponse write FOnResourceResponse;
    //  <summary>
    //  Called on the IO thread before a resource request is loaded. The |browser|
    //  and |frame| values represent the source of the request, and may be NULL
    //  for requests originating from service workers or ICefUrlRequest. To
    //  optionally filter cookies for the request return a
    //  ICefCookieAccessFilter object. The |request| object cannot not be
    //  modified in this callback.
    //  </summary>
    property OnResourceRequestGetCookieAccessFilter: TOnResourceRequestGetCookieAccessFilterEvent read FGetCookieAccessFilter write FGetCookieAccessFilter;
    //  <summary>
    //  Called on the IO thread before a resource is loaded. The |browser| and
    //  |frame| values represent the source of the request, and may be NULL for
    //  requests originating from service workers or ICefUrlRequest. To allow
    //  the resource to load using the default network loader return NULL. To
    //  specify a handler for the resource return a ICefResourceHandler object.
    //  The |request| object cannot not be modified in this callback.
    //  </summary>
    property OnResourceRequestGetResourceHandler: TOnResourceRequestGetResourceHandlerEvent read FGetResourceHandler write FGetResourceHandler;
    //  <summary>
    //  Called on the IO thread when a resource load is redirected. The |browser|
    //  and |frame| values represent the source of the request, and may be NULL
    //  for requests originating from service workers or ICefUrlRequest. The
    //  |request| parameter will contain the old URL and other request-related
    //  information. The |response| parameter will contain the response that
    //  resulted in the redirect. The |new_url| parameter will contain the new URL
    //  and can be changed if desired. The |request| and |response| objects cannot
    //  be modified in this callback.
    //  </summary>
    property OnResourceRequestResourceRedirect: TOnResourceRequestResourceRedirectEvent read FOnResourceRedirect write FOnResourceRedirect;
    //  <summary>
    //  Called on the IO thread to optionally filter resource response content.
    //  The |browser| and |frame| values represent the source of the request, and
    //  may be NULL for requests originating from service workers or
    //  ICefUrlRequest. |request| and |response| represent the request and
    //  response respectively and cannot be modified in this callback.
    //  </summary>
    property OnResourceRequestGetResourceResponseFilter: TOnResourceRequestGetResourceResponseFilterEvent read FGetResourceResponseFilter write FGetResourceResponseFilter;
    //  <summary>
    //  Called on the IO thread when a resource load has completed. The |browser|
    //  and |frame| values represent the source of the request, and may be NULL
    //  for requests originating from service workers or ICefUrlRequest.
    //  |request| and |response| represent the request and response respectively
    //  and cannot be modified in this callback. |status| indicates the load
    //  completion status. |received_content_length| is the number of response
    //  bytes actually read. This function will be called for all requests,
    //  including requests that are aborted due to CEF shutdown or destruction of
    //  the associated browser. In cases where the associated browser is destroyed
    //  this callback may arrive after the ICefLifeSpanHandler.OnBeforeClose
    //  callback for that browser. The ICefFrame.IsValid function can be used
    //  to test for this situation, and care should be taken not to call |browser|
    //  or |frame| functions that modify state (like LoadURL, SendProcessMessage,
    //  etc.) if the frame is invalid.
    //  </summary>
    property OnResourceRequestResourceLoadComplete: TOnResourceRequestResourceLoadCompleteEvent read FOnResourceLoadComplete write FOnResourceLoadComplete;
    //  <summary>
    //  Called on the IO thread to handle requests for URLs with an unknown
    //  protocol component. The |browser| and |frame| values represent the source
    //  of the request, and may be NULL for requests originating from service
    //  workers or ICefUrlRequest. |request| cannot be modified in this
    //  callback. Set |allow_os_execution| to true (1) to attempt execution via
    //  the registered OS protocol handler, if any. SECURITY WARNING: YOU SHOULD
    //  USE THIS METHOD TO ENFORCE RESTRICTIONS BASED ON SCHEME, HOST OR OTHER URL
    //  ANALYSIS BEFORE ALLOWING OS EXECUTION.
    //  </summary>
    property OnResourceRequestProtocolExecution: TOnResourceRequestProtocolExecutionEvent read FOnProtocolExecution write FOnProtocolExecution;
  end;

  //  <summary>
  //  Implemented by the client to observe MediaRouter events and registered via
  //  ICefMediaRouter.AddObserver. The functions of this interface will be
  //  called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMediaObserver">Implements TCefMediaObserver</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_media_router_capi.h">CEF source file: /include/capi/cef_media_router_capi.h (cef_media_observer_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  The list of available media sinks has changed or
    //  ICefMediaRouter.NotifyCurrentSinks was called.
    //  </summary>
    property OnMediaObserverSinks: TOnMediaObserverSinksEvent read FOnSinks write FOnSinks;
    //  <summary>
    //  The list of available media routes has changed or
    //  ICefMediaRouter.NotifyCurrentRoutes was called.
    //  </summary>
    property OnMediaObserverRoutes: TOnMediaObserverRoutesEvent read FOnRoutes write FOnRoutes;
    //  <summary>
    //  The connection state of |route| has changed.
    //  </summary>
    property OnMediaObserverRouteStateChanged: TOnMediaObserverRouteStateChangedEvent read FOnRouteStateChanged write FOnRouteStateChanged;
    //  <summary>
    //  A message was received over |route|. |message| is only valid for the scope
    //  of this callback and should be copied if necessary.
    //  </summary>
    property OnMediaObserverRouteMessageReceived: TOnMediaObserverRouteMessageReceivedEvent read FOnRouteMessageReceived write FOnRouteMessageReceived;
  end;

  //  <summary>
  //  Callback interface for ICefMediaRouter.CreateRoute. The functions of
  //  this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMediaRouteCreateCallback">Implements TCefMediaRouteCreateCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_media_router_capi.h">CEF source file: /include/capi/cef_media_router_capi.h (cef_media_route_create_callback_t)</see></para>
  //  </remarks>
  TEngMediaRouteCreateCallback = class(TCefMediaRouteCreateCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnMediaRouteCreateFinished: TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent;
  protected
    procedure OnMediaRouteCreateFinished(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute); override;
  published
    //  <summary>
    //  Method that will be executed when the route creation has finished.
    //  |result| will be CEF_MRCR_OK if the route creation succeeded. |error| will
    //  be a description of the error if the route creation failed. |route| is the
    //  resulting route, or NULL if the route creation failed.
    //  </summary>
    property OnMediaRouteCreateCallbackMediaRouteCreateFinished: TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent read FOnMediaRouteCreateFinished write FOnMediaRouteCreateFinished;
  end;

  //  <summary>
  //  Implement this interface to handle MenuButton events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMenuButtonDelegate">Implements TCefMenuButtonDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_menu_button_delegate_capi.h">CEF source file: /include/capi/views/cef_menu_button_delegate_capi.h (cef_menu_button_delegate_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when |button| is pressed. Call ICefMenuButton.ShowMenu() to
    //  show a popup menu at |screen_point|. When showing a custom popup such as a
    //  window keep a reference to |button_pressed_lock| until the popup is hidden
    //  to maintain the pressed button state.
    //  </summary>
    property OnMenuButtonMenuButtonPressed: TOnMenuButtonMenuButtonPressedEvent read FOnMenuButtonPressed write FOnMenuButtonPressed;
  end;

  //  <summary>
  //  Implement this interface to handle Button events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefButtonDelegate">Implements TCefButtonDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_button_delegate_capi.h">CEF source file: /include/capi/views/cef_button_delegate_capi.h (cef_button_delegate_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when |button| is pressed.
    //  </summary>
    property OnButtonButtonPressed: TOnButtonButtonPressedEvent read FOnButtonPressed write FOnButtonPressed;
    //  <summary>
    //  Called when the state of |button| changes.
    //  </summary>
    property OnButtonButtonStateChanged: TOnButtonButtonStateChangedEvent read FOnButtonStateChanged write FOnButtonStateChanged;
  end;

  //  <summary>
  //  Implement this interface to handle BrowserView events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefBrowserViewDelegate">Implements TCefBrowserViewDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_browser_view_delegate_capi.h">CEF source file: /include/capi/views/cef_browser_view_delegate_capi.h (cef_browser_view_delegate_t)</see></para>
  //  </remarks>
  TEngBrowserViewDelegate = class(TCefBrowserViewDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
    FOnBrowserCreated: TOnBrowserViewBrowserCreatedEvent;
    FOnBrowserDestroyed: TOnBrowserViewBrowserDestroyedEvent;
    FOnGetDelegateForPopupBrowserView: TOnBrowserViewGetDelegateForPopupBrowserViewEvent;
    FOnPopupBrowserViewCreated: TOnBrowserViewPopupBrowserViewCreatedEvent;
    FOnGetChromeToolbarType: TOnBrowserViewGetChromeToolbarTypeEvent;
    FOnUseFramelessWindowForPictureInPicture: TOnBrowserViewUseFramelessWindowForPictureInPictureEvent;
    FOnGestureCommand: TOnBrowserViewGestureCommandEvent;
    FOnGetBrowserRuntimeStyle: TOnBrowserViewGetBrowserRuntimeStyleEvent;
  protected
    procedure OnBrowserCreated(const browser_view: ICefBrowserView; const browser: ICefBrowser); override;
    procedure OnBrowserDestroyed(const browser_view: ICefBrowserView; const browser: ICefBrowser); override;
    procedure OnGetDelegateForPopupBrowserView(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate); override;
    procedure OnPopupBrowserViewCreated(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean); override;
    procedure OnGetChromeToolbarType(const browser_view: ICefBrowserView; var aResult: TCefChromeToolbarType); override;
    procedure OnUseFramelessWindowForPictureInPicture(const browser_view: ICefBrowserView; var aResult: boolean); override;
    procedure OnGestureCommand(const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean); override;
    procedure OnGetBrowserRuntimeStyle(var aResult: TCefRuntimeStyle); override;
    procedure InitializeCEFMethods();
  published
    //  <summary>
    //  Called when |browser| associated with |browser_view| is created. This
    //  function will be called after ICefLifeSpanHandler.OnAfterCreated()
    //  is called for |browser| and before OnPopupBrowserViewCreated() is
    //  called for |browser|'s parent delegate if |browser| is a popup.
    //  </summary>
    property OnBrowserViewBrowserCreated: TOnBrowserViewBrowserCreatedEvent read FOnBrowserCreated write FOnBrowserCreated;
    //  <summary>
    //  Called when |browser| associated with |browser_view| is destroyed. Release
    //  all references to |browser| and do not attempt to execute any functions on
    //  |browser| after this callback returns. This function will be called before
    //  ICefLifeSpanHandler.OnBeforeClose() is called for |browser|.
    //  </summary>
    property OnBrowserViewBrowserDestroyed: TOnBrowserViewBrowserDestroyedEvent read FOnBrowserDestroyed write FOnBrowserDestroyed;
    //  <summary>
    //  Called before a new popup BrowserView is created. The popup originated
    //  from |browser_view|. |settings| and |client| are the values returned from
    //  ICefLifeSpanHandler.OnBeforePopup(). |is_devtools| will be true (1)
    //  if the popup will be a DevTools browser. Return the delegate that will be
    //  used for the new popup BrowserView.
    //  </summary>
    property OnBrowserViewGetDelegateForPopupBrowserView: TOnBrowserViewGetDelegateForPopupBrowserViewEvent read FOnGetDelegateForPopupBrowserView write FOnGetDelegateForPopupBrowserView;
    //  <summary>
    //  Called after |popup_browser_view| is created. This function will be called
    //  after ICefLifeSpanHandler.OnAfterCreated() and OnBrowserCreated()
    //  are called for the new popup browser. The popup originated from
    //  |browser_view|. |is_devtools| will be true (1) if the popup is a DevTools
    //  browser. Optionally add |popup_browser_view| to the views hierarchy
    //  yourself and return true (1). Otherwise return false (0) and a default
    //  ICefWindow will be created for the popup.
    //  </summary>
    property OnBrowserViewPopupBrowserViewCreated: TOnBrowserViewPopupBrowserViewCreatedEvent read FOnPopupBrowserViewCreated write FOnPopupBrowserViewCreated;
    //  <summary>
    //  Returns the Chrome toolbar type that will be available via
    //  ICefBrowserView.GetChromeToolbar(). See that function for related
    //  documentation.
    //  </summary>
    property OnBrowserViewGetChromeToolbarType: TOnBrowserViewGetChromeToolbarTypeEvent read FOnGetChromeToolbarType write FOnGetChromeToolbarType;
    //  <summary>
    //  Return true (1) to create frameless windows for Document picture-in-
    //  picture popups. Content in frameless windows should specify draggable
    //  regions using "-webkit-app-region: drag" CSS.
    //  </summary>
    property OnBrowserViewUseFramelessWindowForPictureInPicture: TOnBrowserViewUseFramelessWindowForPictureInPictureEvent read FOnUseFramelessWindowForPictureInPicture write FOnUseFramelessWindowForPictureInPicture;
    //  <summary>
    //  Called when |browser_view| receives a gesture command. Return true (1) to
    //  handle (or disable) a |gesture_command| or false (0) to propagate the
    //  gesture to the browser for default handling. With the Chrome runtime these
    //  commands can also be handled via cef_command_handler_t::OnChromeCommand.
    //  </summary>
    property OnBrowserViewGestureCommand: TOnBrowserViewGestureCommandEvent read FOnGestureCommand write FOnGestureCommand;
    //  <summary>
    //  Optionally change the runtime style for this BrowserView. See
    //  TCefRuntimeStyle documentation for details.
    //  </summary>
    property OnBrowserViewGetBrowserRuntimeStyle: TOnBrowserViewGetBrowserRuntimeStyleEvent read FOnGetBrowserRuntimeStyle write FOnGetBrowserRuntimeStyle;
  end;

  //  <summary>
  //  Implement this interface to handle Panel events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefPanelDelegate">Implements TCefPanelDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_panel_delegate_capi.h">CEF source file: /include/capi/views/cef_panel_delegate_capi.h (cef_panel_delegate_t)</see></para>
  //  </remarks>
  TEngPanelDelegate = class(TCefPanelDelegateOwn)
  public
    constructor Create(); reintroduce;
    destructor Destroy; override;
  protected
  protected
  published
  end;

  //  <summary>
  //  Implement this interface to handle Textfield events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefTextfieldDelegate">Implements TCefTextfieldDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_textfield_delegate_capi.h">CEF source file: /include/capi/views/cef_textfield_delegate_capi.h (cef_textfield_delegate_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when |textfield| receives a keyboard event. |event| contains
    //  information about the keyboard event. Return true (1) if the keyboard
    //  event was handled or false (0) otherwise for default handling.
    //  </summary>
    property OnTextfieldKey: TOnTextfieldKeyEvent read FOnKeyEvent write FOnKeyEvent;
    //  <summary>
    //  Called after performing a user action that may change |textfield|.
    //  </summary>
    property OnTextfieldAfterUserAction: TOnTextfieldAfterUserActionEvent read FOnAfterUserAction write FOnAfterUserAction;
  end;

  //  <summary>
  //  Implement this interface to handle view events. All size and position values
  //  are in density independent pixels (DIP) unless otherwise indicated. The
  //  functions of this interface will be called on the browser process UI thread
  //  unless otherwise indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefViewDelegate">Implements TCefViewDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_view_delegate_capi.h">CEF source file: /include/capi/views/cef_view_delegate_capi.h (cef_view_delegate_t)</see></para>
  //  </remarks>
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
    FOnThemeChanged: TOnViewThemeChangedEvent;
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
    procedure OnThemeChanged(const view: ICefView); override;
    procedure InitializeCEFMethods(); override;
  published
    //  <summary>
    //  Return the preferred size for |view|. The Layout will use this information
    //  to determine the display size.
    //  </summary>
    property OnViewGetPreferredSize: TOnViewGetPreferredSizeEvent read FOnGetPreferredSize write FOnGetPreferredSize;
    //  <summary>
    //  Return the minimum size for |view|.
    //  </summary>
    property OnViewGetMinimumSize: TOnViewGetMinimumSizeEvent read FOnGetMinimumSize write FOnGetMinimumSize;
    //  <summary>
    //  Return the maximum size for |view|.
    //  </summary>
    property OnViewGetMaximumSize: TOnViewGetMaximumSizeEvent read FOnGetMaximumSize write FOnGetMaximumSize;
    //  <summary>
    //  Return the height necessary to display |view| with the provided |width|.
    //  If not specified the result of get_preferred_size().height will be used by
    //  default. Override if |view|'s preferred height depends upon the width (for
    //  example, with Labels).
    //  </summary>
    property OnViewGetHeightForWidth: TOnViewGetHeightForWidthEvent read FOnGetHeightForWidth write FOnGetHeightForWidth;
    //  <summary>
    //  Called when the parent of |view| has changed. If |view| is being added to
    //  |parent| then |added| will be true (1). If |view| is being removed from
    //  |parent| then |added| will be false (0). If |view| is being reparented the
    //  remove notification will be sent before the add notification. Do not
    //  modify the view hierarchy in this callback.
    //  </summary>
    property OnViewParentViewChanged: TOnViewParentViewChangedEvent read FOnParentViewChanged write FOnParentViewChanged;
    //  <summary>
    //  Called when a child of |view| has changed. If |child| is being added to
    //  |view| then |added| will be true (1). If |child| is being removed from
    //  |view| then |added| will be false (0). If |child| is being reparented the
    //  remove notification will be sent to the old parent before the add
    //  notification is sent to the new parent. Do not modify the view hierarchy
    //  in this callback.
    //  </summary>
    property OnViewChildViewChanged: TOnViewChildViewChangedEvent read FOnChildViewChanged write FOnChildViewChanged;
    //  <summary>
    //  Called when |view| is added or removed from the ICefWindow.
    //  </summary>
    property OnViewWindowChanged: TOnViewWindowChangedEvent read FOnWindowChanged write FOnWindowChanged;
    //  <summary>
    //  Called when the layout of |view| has changed.
    //  </summary>
    property OnViewLayoutChanged: TOnViewLayoutChangedEvent read FOnLayoutChanged write FOnLayoutChanged;
    //  <summary>
    //  Called when |view| gains focus.
    //  </summary>
    property OnViewFocus: TOnViewFocusEvent read FOnFocus write FOnFocus;
    //  <summary>
    //  Called when |view| loses focus.
    //  </summary>
    property OnViewBlur: TOnViewBlurEvent read FOnBlur write FOnBlur;
    //  <summary>
    //  <para>Called when the theme for |view| has changed, after the new theme colors
    //  have already been applied. Views are notified via the component hierarchy
    //  in depth-first reverse order (children before parents).</para>
    //  <para>This will be called in the following cases:</para>
    //  <code>
    //  1. When |view|, or a parent of |view|, is added to a Window.
    //  2. When the native/OS or Chrome theme changes for the Window that contains
    //  |view|. See ICefWindowDelegate.OnThemeColorsChanged documentation.
    //  3. When the client explicitly calls ICefWindow.ThemeChanged on the
    //  Window that contains |view|.
    //  </code>
    //  <para>Optionally use this callback to override the new per-View theme colors by
    //  calling ICefView.SetBackgroundColor or the appropriate component-
    //  specific function. See ICefWindow.SetThemeColor documentation for how
    //  to customize additional Window theme colors.</para>
    //  <summary>
    property OnViewThemeChanged: TOnViewThemeChangedEvent read FOnThemeChanged write FOnThemeChanged;
  end;

  //  <summary>
  //  Implement this interface to handle audio events.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefAudioHandler">Implements TCefAudioHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_audio_handler_capi.h">CEF source file: /include/capi/cef_audio_handler_capi.h (cef_audio_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called on the UI thread to allow configuration of audio stream parameters.
    //  Return true (1) to proceed with audio stream capture, or false (0) to
    //  cancel it. All members of |params| can optionally be configured here, but
    //  they are also pre-filled with some sensible defaults.
    //  </summary>
    property OnAudioGetAudioParameters: TOnAudioGetAudioParametersEvent read FOnGetAudioParameters write FOnGetAudioParameters;
    //  <summary>
    //  Called on a browser audio capture thread when the browser starts streaming
    //  audio. OnAudioStreamStopped will always be called after
    //  OnAudioStreamStarted; both functions may be called multiple times for the
    //  same browser. |params| contains the audio parameters like sample rate and
    //  channel layout. |channels| is the number of channels.
    //  </summary>
    property OnAudioAudioStreamStarted: TOnAudioAudioStreamStartedEvent read FOnAudioStreamStarted write FOnAudioStreamStarted;
    //  <summary>
    //  Called on the audio stream thread when a PCM packet is received for the
    //  stream. |data| is an array representing the raw PCM data as a floating
    //  point type, i.e. 4-byte value(s). |frames| is the number of frames in the
    //  PCM packet. |pts| is the presentation timestamp (in milliseconds since the
    //  Unix Epoch) and represents the time at which the decompressed packet
    //  should be presented to the user. Based on |frames| and the
    //  |channel_layout| value passed to OnAudioStreamStarted you can calculate
    //  the size of the |data| array in bytes.
    //  </summary>
    property OnAudioAudioStreamPacket: TOnAudioAudioStreamPacketEvent read FOnAudioStreamPacket write FOnAudioStreamPacket;
    //  <summary>
    //  Called on the UI thread when the stream has stopped. OnAudioSteamStopped
    //  will always be called after OnAudioStreamStarted; both functions may be
    //  called multiple times for the same stream.
    //  </summary>
    property OnAudioAudioStreamStopped: TOnAudioAudioStreamStoppedEvent read FOnAudioStreamStopped write FOnAudioStreamStopped;
    //  <summary>
    //  Called on the UI or audio stream thread when an error occurred. During the
    //  stream creation phase this callback will be called on the UI thread while
    //  in the capturing phase it will be called on the audio stream thread. The
    //  stream will be stopped immediately.
    //  </summary>
    property OnAudioAudioStreamError: TOnAudioAudioStreamErrorEvent read FOnAudioStreamError write FOnAudioStreamError;
  end;

  //  <summary>
  //  Callback interface for ICefBrowserHost.AddDevToolsMessageObserver. The
  //  functions of this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefDevToolsMessageObserver">Implements TCefDevToolsMessageObserver</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_devtools_message_observer_capi.h">CEF source file: /include/capi/cef_devtools_message_observer_capi.h (cef_dev_tools_message_observer_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Method that will be called on receipt of a DevTools protocol message.
    //  |browser| is the originating browser instance. |message| is a UTF8-encoded
    //  JSON dictionary representing either a function result or an event.
    //  |message| is only valid for the scope of this callback and should be
    //  copied if necessary. Return true (1) if the message was handled or false
    //  (0) if the message should be further processed and passed to the
    //  OnDevToolsMethodResult or OnDevToolsEvent functions as appropriate.
    // 
    //  Method result dictionaries include an "id" (int) value that identifies the
    //  orginating function call sent from
    //  ICefBrowserHost.SendDevToolsMessage, and optionally either a "result"
    //  (dictionary) or "error" (dictionary) value. The "error" dictionary will
    //  contain "code" (int) and "message" (string) values. Event dictionaries
    //  include a "function" (string) value and optionally a "params" (dictionary)
    //  value. See the DevTools protocol documentation at
    //  https://chromedevtools.github.io/devtools-protocol/ for details of
    //  supported function calls and the expected "result" or "params" dictionary
    //  contents. JSON dictionaries can be parsed using the CefParseJSON function
    //  if desired, however be aware of performance considerations when parsing
    //  large messages (some of which may exceed 1MB in size).
    //  </summary>
    property OnDevToolsMessageObserverDevToolsMessage: TOnDevToolsMessageObserverDevToolsMessageEvent read FOnDevToolsMessage write FOnDevToolsMessage;
    //  <summary>
    //  Method that will be called after attempted execution of a DevTools
    //  protocol function. |browser| is the originating browser instance.
    //  |message_id| is the "id" value that identifies the originating function
    //  call message. If the function succeeded |success| will be true (1) and
    //  |result| will be the UTF8-encoded JSON "result" dictionary value (which
    //  may be NULL). If the function failed |success| will be false (0) and
    //  |result| will be the UTF8-encoded JSON "error" dictionary value. |result|
    //  is only valid for the scope of this callback and should be copied if
    //  necessary. See the OnDevToolsMessage documentation for additional details
    //  on |result| contents.
    //  </summary>
    property OnDevToolsMessageObserverDevToolsMethodResult: TOnDevToolsMessageObserverDevToolsMethodResultEvent read FOnDevToolsMethodResult write FOnDevToolsMethodResult;
    //  <summary>
    //  Method that will be called on receipt of a DevTools protocol event.
    //  |browser| is the originating browser instance. |function| is the
    //  "function" value. |params| is the UTF8-encoded JSON "params" dictionary
    //  value (which may be NULL). |params| is only valid for the scope of this
    //  callback and should be copied if necessary. See the OnDevToolsMessage
    //  documentation for additional details on |params| contents.
    //  </summary>
    property OnDevToolsMessageObserverDevTools: TOnDevToolsMessageObserverDevToolsEvent read FOnDevToolsEvent write FOnDevToolsEvent;
    //  <summary>
    //  Method that will be called when the DevTools agent has attached. |browser|
    //  is the originating browser instance. This will generally occur in response
    //  to the first message sent while the agent is detached.
    //  </summary>
    property OnDevToolsMessageObserverDevToolsAgentAttached: TOnDevToolsMessageObserverDevToolsAgentAttachedEvent read FOnDevToolsAgentAttached write FOnDevToolsAgentAttached;
    //  <summary>
    //  Method that will be called when the DevTools agent has detached. |browser|
    //  is the originating browser instance. Any function results that were
    //  pending before the agent became detached will not be delivered, and any
    //  active event subscriptions will be canceled.
    //  </summary>
    property OnDevToolsMessageObserverDevToolsAgentDetached: TOnDevToolsMessageObserverDevToolsAgentDetachedEvent read FOnDevToolsAgentDetached write FOnDevToolsAgentDetached;
  end;

  //  <summary>
  //  Callback interface for ICefMediaSink.GetDeviceInfo. The functions of
  //  this interface will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMediaSinkDeviceInfoCallback">Implements TCefMediaSinkDeviceInfoCallback</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_media_router_capi.h">CEF source file: /include/capi/cef_media_router_capi.h (cef_media_sink_device_info_callback_t)</see></para>
  //  </remarks>
  TEngMediaSinkDeviceInfoCallback = class(TCefMediaSinkDeviceInfoCallbackOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnMediaSinkDeviceInfo: TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent;
  protected
    procedure OnMediaSinkDeviceInfo(const ip_address: ustring; port: integer; const model_name: ustring); override;
  published
    //  <summary>
    //  Method that will be executed asyncronously once device information has
    //  been retrieved.
    //  </summary>
    property OnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfo: TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent read FOnMediaSinkDeviceInfo write FOnMediaSinkDeviceInfo;
  end;

  //  <summary>
  //  Implement this interface to handle printing on Linux. Each browser will have
  //  only one print job in progress at a time. The functions of this interface
  //  will be called on the browser process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefPrintHandler">Implements TCefPrintHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_print_handler_capi.h">CEF source file: /include/capi/cef_print_handler_capi.h (cef_print_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when printing has started for the specified |browser|. This
    //  function will be called before the other OnPrint*() functions and
    //  irrespective of how printing was initiated (e.g.
    //  ICefBrowserHost.print(), JavaScript window.print() or PDF extension
    //  print button).
    //  </summary>
    property OnPrintPrintStart: TOnPrintPrintStartEvent read FOnPrintStart write FOnPrintStart;
    //  <summary>
    //  Synchronize |settings| with client state. If |get_defaults| is true (1)
    //  then populate |settings| with the default print settings. Do not keep a
    //  reference to |settings| outside of this callback.
    //  </summary>
    property OnPrintPrintSettings: TOnPrintPrintSettingsEvent read FOnPrintSettings write FOnPrintSettings;
    //  <summary>
    //  Show the print dialog. Execute |callback| once the dialog is dismissed.
    //  Return true (1) if the dialog will be displayed or false (0) to cancel the
    //  printing immediately.
    //  </summary>
    property OnPrintPrintDialog: TOnPrintPrintDialogEvent read FOnPrintDialog write FOnPrintDialog;
    //  <summary>
    //  Send the print job to the printer. Execute |callback| once the job is
    //  completed. Return true (1) if the job will proceed or false (0) to cancel
    //  the job immediately.
    //  </summary>
    property OnPrintPrintJob: TOnPrintPrintJobEvent read FOnPrintJob write FOnPrintJob;
    //  <summary>
    //  Reset client state related to printing.
    //  </summary>
    property OnPrintPrintReset: TOnPrintPrintResetEvent read FOnPrintReset write FOnPrintReset;
    //  <summary>
    //  Return the PDF paper size in device units. Used in combination with
    //  ICefBrowserHost.PrintToPdf().
    //  </summary>
    property OnPrintGetPDFPaperSize: TOnPrintGetPDFPaperSizeEvent read FGetPDFPaperSize write FGetPDFPaperSize;
  end;

  //  <summary>
  //  Implement this interface to handle events related to ICefFrame life span.
  //  The order of callbacks is:
  // 
  //  (1) During initial ICefBrowserHost creation and navigation of the main
  //  frame:
  //  - ICefFrameHandler.OnFrameCreated => The initial main frame
  //  object has been created. Any commands will be queued until the frame is attached.
  //  - ICefFrameHandler.OnMainFrameChanged => The initial main frame object
  //  has been assigned to the browser.
  //  - ICefLifeSpanHandler.OnAfterCreated => The browser is now valid and
  //  can be used.
  //  - ICefFrameHandler.OnFrameAttached => The initial main frame object is
  //  now connected to its peer in the renderer process. Commands can be routed.
  // 
  //  (2) During further ICefBrowserHost navigation/loading of the main frame
  //  and/or sub-frames:
  //  - ICefFrameHandler.OnFrameCreated => A new main frame or sub-frame
  //  object has been created. Any commands will be queued until the frame is attached.
  //  - ICefFrameHandler.OnFrameAttached => A new main frame or sub-frame
  //  object is now connected to its peer in the renderer process. Commands can be routed.
  //  - ICefFrameHandler.OnFrameDetached => An existing main frame or sub-
  //  frame object has lost its connection to the renderer process. If multiple
  //  objects are detached at the same time then notifications will be sent for
  //  any sub-frame objects before the main frame object. Commands can no longer
  //  be routed and will be discarded.
  //  - ICefFrameHandler.OnMainFrameChanged => A new main frame object has
  //  been assigned to the browser. This will only occur with cross-origin navigation
  //  or re-navigation after renderer process termination (due to crashes, etc).
  // 
  //  (3) During final ICefBrowserHost destruction of the main frame:
  //  - ICefFrameHandler.OnFrameDetached => Any sub-frame objects have lost
  //  their connection to the renderer process. Commands can no longer be routed and
  //  will be discarded.
  //  - ICefLifeSpanHandler.OnBeforeClose => The browser has been destroyed.
  //  - ICefFrameHandler.OnFrameDetached => The main frame object have lost
  //  its connection to the renderer process. Notifications will be sent for any
  //  sub-frame objects before the main frame object. Commands can no longer be
  //  routed and will be discarded.
  //  - ICefFrameHandler.OnMainFrameChanged => The final main frame object has
  //  been removed from the browser.
  // 
  //  Cross-origin navigation and/or loading receives special handling.
  // 
  //  When the main frame navigates to a different origin the OnMainFrameChanged
  //  callback (2) will be executed with the old and new main frame objects.
  // 
  //  When a new sub-frame is loaded in, or an existing sub-frame is navigated to,
  //  a different origin from the parent frame, a temporary sub-frame object will
  //  first be created in the parent's renderer process. That temporary sub-frame
  //  will then be discarded after the real cross-origin sub-frame is created in
  //  the new/target renderer process. The client will receive cross-origin
  //  navigation callbacks (2) for the transition from the temporary sub-frame to
  //  the real sub-frame. The temporary sub-frame will not recieve or execute
  //  commands during this transitional period (any sent commands will be
  //  discarded).
  // 
  //  When a new popup browser is created in a different origin from the parent
  //  browser, a temporary main frame object for the popup will first be created
  //  in the parent's renderer process. That temporary main frame will then be
  //  discarded after the real cross-origin main frame is created in the
  //  new/target renderer process. The client will recieve creation and initial
  //  navigation callbacks (1) for the temporary main frame, followed by cross-
  //  origin navigation callbacks (2) for the transition from the temporary main
  //  frame to the real main frame. The temporary main frame may receive and
  //  execute commands during this transitional period (any sent commands may be
  //  executed, but the behavior is potentially undesirable since they execute in
  //  the parent browser's renderer process and not the new/target renderer
  //  process).
  // 
  //  Callbacks will not be executed for placeholders that may be created during
  //  pre-commit navigation for sub-frames that do not yet exist in the renderer
  //  process. Placeholders will have ICefFrame.GetIdentifier() == -4.
  // 
  //  The functions of this interface will be called on the UI thread unless
  //  otherwise indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefFrameHandler">Implements TCefFrameHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_frame_handler_capi.h">CEF source file: /include/capi/cef_frame_handler_capi.h (cef_frame_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when a new frame is created. This will be the first notification
    //  that references |frame|. Any commands that require transport to the
    //  associated renderer process (LoadRequest, SendProcessMessage, GetSource,
    //  etc.) will be queued until OnFrameAttached is called for |frame|.
    //  </summary>
    property OnFrameFrameCreated: TOnFrameFrameCreatedEvent read FOnFrameCreated write FOnFrameCreated;
    //  <summary>
    //  Called when a frame can begin routing commands to/from the associated
    //  renderer process. |reattached| will be true (1) if the frame was re-
    //  attached after exiting the BackForwardCache. Any commands that were queued
    //  have now been dispatched.
    //  </summary>
    property OnFrameFrameAttached: TOnFrameFrameAttachedEvent read FOnFrameAttached write FOnFrameAttached;
    //  <summary>
    //  Called when a frame loses its connection to the renderer process and will
    //  be destroyed. Any pending or future commands will be discarded and
    //  ICefFrame.IsValid() will now return false (0) for |frame|. If called
    //  after ICefLifeSpanHandler.OnBeforeClose() during browser
    //  destruction then ICefBrowser.IsValid() will return false (0) for
    //  |browser|.
    //  </summary>
    property OnFrameFrameDetached: TOnFrameFrameDetachedEvent read FOnFrameDetached write FOnFrameDetached;
    //  <summary>
    //  Called when the main frame changes due to (a) initial browser creation,
    //  (b) final browser destruction, (c) cross-origin navigation or (d) re-
    //  navigation after renderer process termination (due to crashes, etc).
    //  |old_frame| will be NULL and |new_frame| will be non-NULL when a main
    //  frame is assigned to |browser| for the first time. |old_frame| will be
    //  non-NULL and |new_frame| will be NULL and when a main frame is removed
    //  from |browser| for the last time. Both |old_frame| and |new_frame| will be
    //  non-NULL for cross-origin navigations or re-navigation after renderer
    //  process termination. This function will be called after on_frame_created()
    //  for |new_frame| and/or after OnFrameDetached() for |old_frame|. If
    //  called after ICefLifeSpanHandler.OnBeforeClose() during browser
    //  destruction then ICefBrowser.IsValid() will return false (0) for
    //  |browser|.
    //  </summary>
    property OnFrameMainFrameChanged: TOnFrameMainFrameChangedEvent read FOnMainFrameChanged write FOnMainFrameChanged;
  end;

  //  <summary>
  //  Implement this interface to handle events related to commands. The functions
  //  of this interface will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefCommandHandler">Implements TCefCommandHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_command_handler_capi.h">CEF source file: /include/capi/cef_command_handler_capi.h (cef_command_handler_t)</see></para>
  //  </remarks>
  TEngCommandHandler = class(TCefCommandHandlerOwn)
  public
    constructor Create(); override;
    destructor Destroy; override;
  protected
    FOnChromeCommand: TOnCommandChromeCommandEvent;
    FOnIsChromeAppMenuItemVisible: TOnCommandIsChromeAppMenuItemVisibleEvent;
    FOnIsChromeAppMenuItemEnabled: TOnCommandIsChromeAppMenuItemEnabledEvent;
    FOnIsChromePageActionIconVisible: TOnCommandIsChromePageActionIconVisibleEvent;
    FOnIsChromeToolbarButtonVisible: TOnCommandIsChromeToolbarButtonVisibleEvent;
  protected
    function OnChromeCommand(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean; override;
    function OnIsChromeAppMenuItemVisible(const browser: ICefBrowser; command_id: integer): boolean; override;
    function OnIsChromeAppMenuItemEnabled(const browser: ICefBrowser; command_id: integer): boolean; override;
    function OnIsChromePageActionIconVisible(icon_type: TCefChromePageActionIconType): boolean; override;
    function OnIsChromeToolbarButtonVisible(button_type: TCefChromeToolbarButtonType): boolean; override;
    procedure RemoveReferences(); override;
  published
    //  <summary>
    //  Called to execute a Chrome command triggered via menu selection or
    //  keyboard shortcut. Values for |command_id| can be found in the
    //  cef_command_ids.h file. |disposition| provides information about the
    //  intended command target. Return true (1) if the command was handled or
    //  false (0) for the default implementation. For context menu commands this
    //  will be called after ICefContextMenuHandler.OnContextMenuCommand.
    //  Only used with the Chrome runtime.
    //  </summary>
    property OnCommandChromeCommand: TOnCommandChromeCommandEvent read FOnChromeCommand write FOnChromeCommand;
    //  <summary>
    //  Called to check if a Chrome app menu item should be visible. Values for
    //  |command_id| can be found in the cef_command_ids.h file. Only called for
    //  menu items that would be visible by default. Only used with the Chrome
    //  runtime.
    //  </summary>
    property OnCommandIsChromeAppMenuItemVisible: TOnCommandIsChromeAppMenuItemVisibleEvent read FOnIsChromeAppMenuItemVisible write FOnIsChromeAppMenuItemVisible;
    //  <summary>
    //  Called to check if a Chrome app menu item should be enabled. Values for
    //  |command_id| can be found in the cef_command_ids.h file. Only called for
    //  menu items that would be enabled by default. Only used with the Chrome
    //  runtime.
    //  </summary>
    property OnCommandIsChromeAppMenuItemEnabled: TOnCommandIsChromeAppMenuItemEnabledEvent read FOnIsChromeAppMenuItemEnabled write FOnIsChromeAppMenuItemEnabled;
    //  <summary>
    //  Called during browser creation to check if a Chrome page action icon
    //  should be visible. Only called for icons that would be visible by default.
    //  Only used with the Chrome runtime.
    //  </summary>
    property OnCommandIsChromePageActionIconVisible: TOnCommandIsChromePageActionIconVisibleEvent read FOnIsChromePageActionIconVisible write FOnIsChromePageActionIconVisible;
    //  <summary>
    //  Called during browser creation to check if a Chrome toolbar button should
    //  be visible. Only called for buttons that would be visible by default. Only
    //  used with the Chrome runtime.
    //  </summary>
    property OnCommandIsChromeToolbarButtonVisible: TOnCommandIsChromeToolbarButtonVisibleEvent read FOnIsChromeToolbarButtonVisible write FOnIsChromeToolbarButtonVisible;
  end;

  //  <summary>
  //  Implement this interface to handle events related to permission requests.
  //  The functions of this interface will be called on the browser process UI
  //  thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefPermissionHandler">Implements TCefPermissionHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_permission_handler_capi.h">CEF source file: /include/capi/cef_permission_handler_capi.h (cef_permission_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when a page requests permission to access media.
    //  |requesting_origin| is the URL origin requesting permission.
    //  |requested_permissions| is a combination of values from
    //  TCefMediaAccessPermissionTypes that represent the requested
    //  permissions. Return true (1) and call ICefMediaAccessCallback
    //  functions either in this function or at a later time to continue or cancel
    //  the request. Return false (0) to proceed with default handling. With the
    //  Chrome runtime, default handling will display the permission request UI.
    //  With the Alloy runtime, default handling will deny the request. This
    //  function will not be called if the "--enable-media-stream" command-line
    //  switch is used to grant all permissions.
    //  </summary>
    property OnPermissionRequestMediaAccessPermission: TOnPermissionRequestMediaAccessPermissionEvent read FOnRequestMediaAccessPermission write FOnRequestMediaAccessPermission;
    //  <summary>
    //  Called when a page should show a permission prompt. |prompt_id| uniquely
    //  identifies the prompt. |requesting_origin| is the URL origin requesting
    //  permission. |requested_permissions| is a combination of values from
    //  TCefPermissionRequestTypes that represent the requested permissions.
    //  Return true (1) and call ICefPermissionPromptCallback.Continue either
    //  in this function or at a later time to continue or cancel the request.
    //  Return false (0) to proceed with default handling. With the Chrome
    //  runtime, default handling will display the permission prompt UI. With the
    //  Alloy runtime, default handling is CEF_PERMISSION_RESULT_IGNORE.
    //  </summary>
    property OnPermissionShowPermissionPrompt: TOnPermissionShowPermissionPromptEvent read FOnShowPermissionPrompt write FOnShowPermissionPrompt;
    //  <summary>
    //  Called when a permission prompt handled via OnShowPermissionPrompt is
    //  dismissed. |prompt_id| will match the value that was passed to
    //  OnShowPermissionPrompt. |result| will be the value passed to
    //  ICefPermissionPromptCallback.Continue or CEF_PERMISSION_RESULT_IGNORE
    //  if the dialog was dismissed for other reasons such as navigation, browser
    //  closure, etc. This function will not be called if OnShowPermissionPrompt
    //  returned false (0) for |prompt_id|.
    //  </summary>
    property OnPermissionDismissPermissionPrompt: TOnPermissionDismissPermissionPromptEvent read FOnDismissPermissionPrompt write FOnDismissPermissionPrompt;
  end;

  //  <summary>
  //  Implement this interface to handle events related to media access permission
  //  requests. The functions of this interface will be called on the browser
  //  process UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefMediaAccessHandler">Implements TCefMediaAccessHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_media_access_handler_capi.h">CEF source file: /include/capi/cef_media_access_handler_capi.h (cef_media_access_handler_t)</see></para>
  //  </remarks>
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

  //  <summary>
  //  Implement this interface to provide handler implementations.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefClient">Implements TCefClient</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_client_capi.h">CEF source file: /include/capi/cef_client_capi.h (cef_client_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when a new message is received from a different process. Return
    //  true (1) if the message was handled or false (0) otherwise. It is safe to
    //  keep a reference to |message| outside of this callback.
    //  </summary>
    property OnClientProcessMessageReceived: TOnClientProcessMessageReceivedEvent read FOnProcessMessageReceived write FOnProcessMessageReceived;
    //  <summary>
    //  Return the handler for audio rendering events.
    //  </summary>
    property OnClientGetAudioHandler: TOnClientGetAudioHandlerEvent read FGetAudioHandler write FGetAudioHandler;
    //  <summary>
    //  Return the handler for commands. If no handler is provided the default
    //  implementation will be used.
    //  </summary>
    property OnClientGetCommandHandler: TOnClientGetCommandHandlerEvent read FGetCommandHandler write FGetCommandHandler;
    //  <summary>
    //  Return the handler for context menus. If no handler is provided the
    //  default implementation will be used.
    //  </summary>
    property OnClientGetContextMenuHandler: TOnClientGetContextMenuHandlerEvent read FGetContextMenuHandler write FGetContextMenuHandler;
    //  <summary>
    //  Return the handler for dialogs. If no handler is provided the default
    //  implementation will be used.
    //  </summary>
    property OnClientGetDialogHandler: TOnClientGetDialogHandlerEvent read FGetDialogHandler write FGetDialogHandler;
    //  <summary>
    //  Return the handler for browser display state events.
    //  </summary>
    property OnClientGetDisplayHandler: TOnClientGetDisplayHandlerEvent read FGetDisplayHandler write FGetDisplayHandler;
    //  <summary>
    //  Return the handler for download events. If no handler is returned
    //  downloads will not be allowed.
    //  </summary>
    property OnClientGetDownloadHandler: TOnClientGetDownloadHandlerEvent read FGetDownloadHandler write FGetDownloadHandler;
    //  <summary>
    //  Return the handler for drag events.
    //  </summary>
    property OnClientGetDragHandler: TOnClientGetDragHandlerEvent read FGetDragHandler write FGetDragHandler;
    //  <summary>
    //  Return the handler for find result events.
    //  </summary>
    property OnClientGetFindHandler: TOnClientGetFindHandlerEvent read FGetFindHandler write FGetFindHandler;
    //  <summary>
    //  Return the handler for focus events.
    //  </summary>
    property OnClientGetFocusHandler: TOnClientGetFocusHandlerEvent read FGetFocusHandler write FGetFocusHandler;
    //  <summary>
    //  Return the handler for events related to ICefFrame lifespan. This
    //  function will be called once during ICefBrowser creation and the result
    //  will be cached for performance reasons.
    //  </summary>
    property OnClientGetFrameHandler: TOnClientGetFrameHandlerEvent read FGetFrameHandler write FGetFrameHandler;
    //  <summary>
    //  Return the handler for permission requests.
    //  </summary>
    property OnClientGetPermissionHandler: TOnClientGetPermissionHandlerEvent read FGetPermissionHandler write FGetPermissionHandler;
    //  <summary>
    //  Return the handler for JavaScript dialogs. If no handler is provided the
    //  default implementation will be used.
    //  </summary>
    property OnClientGetJsdialogHandler: TOnClientGetJsdialogHandlerEvent read FGetJsdialogHandler write FGetJsdialogHandler;
    //  <summary>
    //  Return the handler for keyboard events.
    //  </summary>
    property OnClientGetKeyboardHandler: TOnClientGetKeyboardHandlerEvent read FGetKeyboardHandler write FGetKeyboardHandler;
    //  <summary>
    //  Return the handler for browser life span events.
    //  </summary>
    property OnClientGetLifeSpanHandler: TOnClientGetLifeSpanHandlerEvent read FGetLifeSpanHandler write FGetLifeSpanHandler;
    //  <summary>
    //  Return the handler for browser load status events.
    //  </summary>
    property OnClientGetLoadHandler: TOnClientGetLoadHandlerEvent read FGetLoadHandler write FGetLoadHandler;
    //  <summary>
    //  Return the handler for printing on Linux. If a print handler is not
    //  provided then printing will not be supported on the Linux platform.
    //  </summary>
    property OnClientGetPrintHandler: TOnClientGetPrintHandlerEvent read FGetPrintHandler write FGetPrintHandler;
    //  <summary>
    //  Return the handler for off-screen rendering events.
    //  </summary>
    property OnClientGetRenderHandler: TOnClientGetRenderHandlerEvent read FGetRenderHandler write FGetRenderHandler;
    //  <summary>
    //  Return the handler for browser request events.
    //  </summary>
    property OnClientGetRequestHandler: TOnClientGetRequestHandlerEvent read FGetRequestHandler write FGetRequestHandler;
  end;

  //  <summary>
  //  Implement this interface to handle window events. The functions of this
  //  interface will be called on the browser process UI thread unless otherwise
  //  indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefWindowDelegate">Implements TCefWindowDelegate</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/views/cef_window_delegate_capi.h">CEF source file: /include/capi/views/cef_window_delegate_capi.h (cef_window_delegate_t)</see></para>
  //  </remarks>
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
    FOnWindowFullscreenTransition: TOnWindowWindowFullscreenTransitionEvent;
    FOnGetParentWindow: TOnWindowGetParentWindowEvent;
    FOnIsWindowModalDialog: TOnWindowIsWindowModalDialogEvent;
    FOnGetInitialBounds: TOnWindowGetInitialBoundsEvent;
    FOnGetInitialShowState: TOnWindowGetInitialShowStateEvent;
    FOnIsFrameless: TOnWindowIsFramelessEvent;
    FOnWithStandardWindowButtons: TOnWindowWithStandardWindowButtonsEvent;
    FOnGetTitlebarHeight: TOnWindowGetTitlebarHeightEvent;
    FOnAcceptsFirstMouse: TOnWindowAcceptsFirstMouseEvent;
    FOnCanResize: TOnWindowCanResizeEvent;
    FOnCanMaximize: TOnWindowCanMaximizeEvent;
    FOnCanMinimize: TOnWindowCanMinimizeEvent;
    FOnCanClose: TOnWindowCanCloseEvent;
    FOnAccelerator: TOnWindowAcceleratorEvent;
    FOnKeyEvent: TOnWindowKeyEvent;
    FOnThemeColorsChanged: TOnWindowThemeColorsChangedEvent;
    FOnGetWindowRuntimeStyle: TOnWindowGetWindowRuntimeStyleEvent;
  protected
    procedure OnWindowCreated(const window_: ICefWindow); override;
    procedure OnWindowClosing(const window_: ICefWindow); override;
    procedure OnWindowDestroyed(const window_: ICefWindow); override;
    procedure OnWindowActivationChanged(const window_: ICefWindow; active: boolean); override;
    procedure OnWindowBoundsChanged(const window_: ICefWindow; const new_bounds: TCefRect); override;
    procedure OnWindowFullscreenTransition(const window_: ICefWindow; is_completed: boolean); override;
    procedure OnGetParentWindow(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow); override;
    procedure OnIsWindowModalDialog(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnGetInitialBounds(const window_: ICefWindow; var aResult: TCefRect); override;
    procedure OnGetInitialShowState(const window_: ICefWindow; var aResult: TCefShowState); override;
    procedure OnIsFrameless(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnWithStandardWindowButtons(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnGetTitlebarHeight(const window_: ICefWindow; var titlebar_height: Single; var aResult: boolean); override;
    procedure OnAcceptsFirstMouse(const window_: ICefWindow; var aResult: TCefState); override;
    procedure OnCanResize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanMaximize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanMinimize(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnCanClose(const window_: ICefWindow; var aResult: boolean); override;
    procedure OnAccelerator(const window_: ICefWindow; command_id: Integer; var aResult: boolean); override;
    procedure OnKeyEvent(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean); override;
    procedure OnThemeColorsChanged(const window_: ICefWindow; chrome_theme: Integer); override;
    procedure OnGetWindowRuntimeStyle(var aResult: TCefRuntimeStyle); override;
    procedure InitializeCEFMethods();
  published
    //  <summary>
    //  Called when |window| is created.
    //  </summary>
    property OnWindowWindowCreated: TOnWindowWindowCreatedEvent read FOnWindowCreated write FOnWindowCreated;
    //  <summary>
    //  Called when |window| is closing.
    //  </summary>
    property OnWindowWindowClosing: TOnWindowWindowClosingEvent read FOnWindowClosing write FOnWindowClosing;
    //  <summary>
    //  Called when |window| is destroyed. Release all references to |window| and
    //  do not attempt to execute any functions on |window| after this callback
    //  returns.
    //  </summary>
    property OnWindowWindowDestroyed: TOnWindowWindowDestroyedEvent read FOnWindowDestroyed write FOnWindowDestroyed;
    //  <summary>
    //  Called when |window| is activated or deactivated.
    //  </summary>
    property OnWindowWindowActivationChanged: TOnWindowWindowActivationChangedEvent read FOnWindowActivationChanged write FOnWindowActivationChanged;
    //  <summary>
    //  Called when |window| bounds have changed. |new_bounds| will be in DIP
    //  screen coordinates.
    //  </summary>
    property OnWindowWindowBoundsChanged: TOnWindowWindowBoundsChangedEvent read FOnWindowBoundsChanged write FOnWindowBoundsChanged;
    //  <summary>
    //  Called when |window| is transitioning to or from fullscreen mode. On MacOS
    //  the transition occurs asynchronously with |is_competed| set to false (0)
    //  when the transition starts and true (1) after the transition completes. On
    //  other platforms the transition occurs synchronously with |is_completed|
    //  set to true (1) after the transition completes. With the Alloy runtime you
    //  must also implement ICefDisplayHandler.OnFullscreenModeChange to
    //  handle fullscreen transitions initiated by browser content.
    //  </summary>
    property OnWindowWindowFullscreenTransition: TOnWindowWindowFullscreenTransitionEvent read FOnWindowFullscreenTransition write FOnWindowFullscreenTransition;
    //  <summary>
    //  Return the parent for |window| or NULL if the |window| does not have a
    //  parent. Windows with parents will not get a taskbar button. Set |is_menu|
    //  to true (1) if |window| will be displayed as a menu, in which case it will
    //  not be clipped to the parent window bounds. Set |can_activate_menu| to
    //  false (0) if |is_menu| is true (1) and |window| should not be activated
    //  (given keyboard focus) when displayed.
    //  </summary>
    property OnWindowGetParentWindow: TOnWindowGetParentWindowEvent read FOnGetParentWindow write FOnGetParentWindow;
    //  <summary>
    //  Return true (1) if |window| should be created as a window modal dialog.
    //  Only called when a Window is returned via get_parent_window() with
    //  |is_menu| set to false (0). All controls in the parent Window will be
    //  disabled while |window| is visible. This functionality is not supported by
    //  all Linux window managers. Alternately, use
    //  ICefWindow.ShowAsBrowserModalDialog() for a browser modal dialog
    //  that works on all platforms.
    //  </summary>
    property OnWindowIsWindowModalDialog: TOnWindowIsWindowModalDialogEvent read FOnIsWindowModalDialog write FOnIsWindowModalDialog;
    //  <summary>
    //  Return the initial bounds for |window| in density independent pixel (DIP)
    //  coordinates. If this function returns an NULL CefRect then
    //  GetPreferredSize() will be called to retrieve the size, and the window
    //  will be placed on the screen with origin (0,0). This function can be used
    //  in combination with ICefView.GetBoundsInScreen() to restore the
    //  previous window bounds.
    //  </summary>
    property OnWindowGetInitialBounds: TOnWindowGetInitialBoundsEvent read FOnGetInitialBounds write FOnGetInitialBounds;
    //  <summary>
    //  Return the initial show state for |window|.
    //  </summary>
    property OnWindowGetInitialShowState: TOnWindowGetInitialShowStateEvent read FOnGetInitialShowState write FOnGetInitialShowState;
    //  <summary>
    //  Return true (1) if |window| should be created without a frame or title
    //  bar. The window will be resizable if can_resize() returns true (1). Use
    //  ICefWindow.SetDraggableRegions() to specify draggable regions.
    //  </summary>
    property OnWindowIsFrameless: TOnWindowIsFramelessEvent read FOnIsFrameless write FOnIsFrameless;
    //  <summary>
    //  Return true (1) if |window| should be created with standard window buttons
    //  like close, minimize and zoom. This function is only supported on macOS.
    //  </summary>
    property OnWindowWithStandardWindowButtons: TOnWindowWithStandardWindowButtonsEvent read FOnWithStandardWindowButtons write FOnWithStandardWindowButtons;
    //  <summary>
    //  Return whether the titlebar height should be overridden, and sets the
    //  height of the titlebar in |titlebar_height|. On macOS, it can also be used
    //  to adjust the vertical position of the traffic light buttons in frameless
    //  windows. The buttons will be positioned halfway down the titlebar at a
    //  height of |titlebar_height| / 2.
    //  </summary>
    property OnWindowGetTitlebarHeight: TOnWindowGetTitlebarHeightEvent read FOnGetTitlebarHeight write FOnGetTitlebarHeight;
    //  <summary>
    //  <para>Return whether the view should accept the initial mouse-down event,
    //  allowing it to respond to click-through behavior. If STATE_ENABLED is
    //  returned, the view will be sent a mouseDown: message for an initial mouse-
    //  down event, activating the view with one click, instead of clicking first
    //  to make the window active and then clicking the view.</para>
    //  <para>This function is only supported on macOS. For more details, refer to the
    //  documentation of acceptsFirstMouse.</para>
    //  </summary>
    property OnWindowAcceptsFirstMouse: TOnWindowAcceptsFirstMouseEvent read FOnAcceptsFirstMouse write FOnAcceptsFirstMouse;
    //  <summary>
    //  Return true (1) if |window| can be resized.
    //  </summary>
    property OnWindowCanResize: TOnWindowCanResizeEvent read FOnCanResize write FOnCanResize;
    //  <summary>
    //  Return true (1) if |window| can be maximized.
    //  </summary>
    property OnWindowCanMaximize: TOnWindowCanMaximizeEvent read FOnCanMaximize write FOnCanMaximize;
    //  <summary>
    //  Return true (1) if |window| can be minimized.
    //  </summary>
    property OnWindowCanMinimize: TOnWindowCanMinimizeEvent read FOnCanMinimize write FOnCanMinimize;
    //  <summary>
    //  Return true (1) if |window| can be closed. This will be called for user-
    //  initiated window close actions and when ICefWindow.close() is called.
    //  </summary>
    property OnWindowCanClose: TOnWindowCanCloseEvent read FOnCanClose write FOnCanClose;
    //  <summary>
    //  Called when a keyboard accelerator registered with
    //  ICefWindow.SetAccelerator is triggered. Return true (1) if the
    //  accelerator was handled or false (0) otherwise.
    //  </summary>
    property OnWindowAccelerator: TOnWindowAcceleratorEvent read FOnAccelerator write FOnAccelerator;
    //  <summary>
    //  Called after all other controls in the window have had a chance to handle
    //  the event. |event| contains information about the keyboard event. Return
    //  true (1) if the keyboard event was handled or false (0) otherwise.
    //  </summary>
    property OnWindowKey: TOnWindowKeyEvent read FOnKeyEvent write FOnKeyEvent;
    //  <summary>
    //  <para>Called after the native/OS or Chrome theme for |window| has changed.
    //  |chrome_theme| will be true (1) if the notification is for a Chrome theme.</para>
    //  <para>Native/OS theme colors are configured globally and do not need to be
    //  customized for each Window individually. An example of a native/OS theme
    //  change that triggers this callback is when the user switches between dark
    //  and light mode during application lifespan. Native/OS theme changes can be
    //  disabled by passing the `--force-dark-mode` or `--force-light-mode`
    //  command-line flag.</para>
    //  <para>Chrome theme colors will be applied and this callback will be triggered
    //  if/when a BrowserView is added to the Window's component hierarchy. Chrome
    //  theme colors can be configured on a per-RequestContext basis using
    //  ICefRequestContext.SetChromeColorScheme or (Chrome runtime only) by
    //  visiting chrome://settings/manageProfile. Any theme changes using those
    //  mechanisms will also trigger this callback. Chrome theme colors will be
    //  persisted and restored from disk cache with the Chrome runtime, and with
    //  the Alloy runtime if persist_user_preferences is set to true (1) via
    //  CefSettings or ICefRequestContext Settings.</para>
    //  <para>This callback is not triggered on Window creation so clients that wish to
    //  customize the initial native/OS theme must call
    //  ICefWindow.SetThemeColor and ICefWindow.ThemeChanged before showing
    //  the first Window.</para>
    //  <para>Theme colors will be reset to standard values before this callback is
    //  called for the first affected Window. Call ICefWindow.SetThemeColor
    //  from inside this callback to override a standard color or add a custom
    //  color. ICefViewDelegate.OnThemeChanged will be called after this
    //  callback for the complete |window| component hierarchy.</para>
    //  </summary>
    property OnWindowThemeColorsChanged: TOnWindowThemeColorsChangedEvent read FOnThemeColorsChanged write FOnThemeColorsChanged;
    //  <summary>
    //  Optionally change the runtime style for this Window. See
    //  TCefRuntimeStyle documentation for details.
    //  </summary>
    property OnWindowGetWindowRuntimeStyle: TOnWindowGetWindowRuntimeStyleEvent read FOnGetWindowRuntimeStyle write FOnGetWindowRuntimeStyle;
  end;

  //  <summary>
  //  Implement this interface to handle events related to browser extensions. The
  //  functions of this interface will be called on the UI thread. See
  //  ICefRequestContext.LoadExtension for information about extension
  //  loading.
  //  </summary>
  //  <remarks>
  //  <para>WARNING: This API is deprecated and will be removed in ~M127.</para>
  //  <para><see cref="uCEFTypes|TCefExtensionHandler">Implements TCefExtensionHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_extension_handler_capi.h">CEF source file: /include/capi/cef_extension_handler_capi.h (cef_extension_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called when an extension needs a browser to host a background script
    //  specified via the "background" manifest key. The browser will have no
    //  visible window and cannot be displayed. |extension| is the extension that
    //  is loading the background script. |url| is an internally generated
    //  reference to an HTML page that will be used to load the background script
    //  via a "<script>" src attribute. To allow creation of the browser
    //  optionally modify |client| and |settings| and return false (0). To cancel
    //  creation of the browser (and consequently cancel load of the background
    //  script) return true (1). Successful creation will be indicated by a call
    //  to ICefLifeSpanHandler.OnAfterCreated, and
    //  ICefBrowserHost.IsBackgroundHost will return true (1) for the
    //  resulting browser. See https://developer.chrome.com/extensions/event_pages
    //  for more information about extension background script usage.
    //  </summary>
    property OnExtensionBeforeBackgroundBrowser: TOnExtensionBeforeBackgroundBrowserEvent read FOnBeforeBackgroundBrowser write FOnBeforeBackgroundBrowser;
    //  <summary>
    //  Called when an extension API (e.g. chrome.tabs.create) requests creation
    //  of a new browser. |extension| and |browser| are the source of the API
    //  call. |active_browser| may optionally be specified via the windowId
    //  property or returned via the get_active_browser() callback and provides
    //  the default |client| and |settings| values for the new browser. |index| is
    //  the position value optionally specified via the index property. |url| is
    //  the URL that will be loaded in the browser. |active| is true (1) if the
    //  new browser should be active when opened. To allow creation of the
    //  browser optionally modify |windowInfo|, |client| and |settings| and return
    //  false (0). To cancel creation of the browser return true (1). Successful
    //  creation will be indicated by a call to
    //  ICefLifeSpanHandler.OnAfterCreated. Any modifications to |windowInfo|
    //  will be ignored if |active_browser| is wrapped in a ICefBrowserView.
    //  </summary>
    property OnExtensionBeforeBrowser: TOnExtensionBeforeBrowserEvent read FOnBeforeBrowser write FOnBeforeBrowser;
    //  <summary>
    //  Called when the tabId associated with |target_browser| is specified to an
    //  extension API call that accepts a tabId parameter (e.g. chrome.tabs.*).
    //  |extension| and |browser| are the source of the API call. Return true (1)
    //  to allow access of false (0) to deny access. Access to incognito browsers
    //  should not be allowed unless the source extension has incognito access
    //  enabled, in which case |include_incognito| will be true (1).
    //  </summary>
    property OnExtensionCanAccessBrowser: TOnExtensionCanAccessBrowserEvent read FCanAccessBrowser write FCanAccessBrowser;
    //  <summary>
    //  Called to retrieve an extension resource that would normally be loaded
    //  from disk (e.g. if a file parameter is specified to
    //  chrome.tabs.executeScript). |extension| and |browser| are the source of
    //  the resource request. |file| is the requested relative file path. To
    //  handle the resource request return true (1) and execute |callback| either
    //  synchronously or asynchronously. For the default behavior which reads the
    //  resource from the extension directory on disk return false (0).
    //  Localization substitutions will not be applied to resources handled via
    //  this function.
    //  </summary>
    property OnExtensionGetExtensionResource: TOnExtensionGetExtensionResourceEvent read FGetExtensionResource write FGetExtensionResource;
    //  <summary>
    //  Called if the ICefRequestContext.LoadExtension request fails. |result|
    //  will be the error code.
    //  </summary>
    property OnExtensionExtensionLoadFailed: TOnExtensionExtensionLoadFailedEvent read FOnExtensionLoadFailed write FOnExtensionLoadFailed;
    //  <summary>
    //  Called if the ICefRequestContext.LoadExtension request succeeds.
    //  |extension| is the loaded extension.
    //  </summary>
    property OnExtensionExtensionLoaded: TOnExtensionExtensionLoadedEvent read FOnExtensionLoaded write FOnExtensionLoaded;
    //  <summary>
    //  Called after the ICefExtension.Unload request has completed.
    //  </summary>
    property OnExtensionExtensionUnloaded: TOnExtensionExtensionUnloadedEvent read FOnExtensionUnloaded write FOnExtensionUnloaded;
    //  <summary>
    //  Called when no tabId is specified to an extension API call that accepts a
    //  tabId parameter (e.g. chrome.tabs.*). |extension| and |browser| are the
    //  source of the API call. Return the browser that will be acted on by the
    //  API call or return NULL to act on |browser|. The returned browser must
    //  share the same ICefRequestContext as |browser|. Incognito browsers
    //  should not be considered unless the source extension has incognito access
    //  enabled, in which case |include_incognito| will be true (1).
    //  </summary>
    property OnExtensionGetActiveBrowser: TOnExtensionGetActiveBrowserEvent read FGetActiveBrowser write FGetActiveBrowser;
  end;

  //  <summary>
  //  Implement this interface to receive accessibility notification when
  //  accessibility events have been registered. The functions of this interface
  //  will be called on the UI thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefAccessibilityHandler">Implements TCefAccessibilityHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_accessibility_handler_capi.h">CEF source file: /include/capi/cef_accessibility_handler_capi.h (cef_accessibility_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Called after renderer process sends accessibility tree changes to the
    //  browser process.
    //  </summary>
    property OnAccessibilityAccessibilityTreeChange: TOnAccessibilityAccessibilityTreeChangeEvent read FOnAccessibilityTreeChange write FOnAccessibilityTreeChange;
    //  <summary>
    //  Called after renderer process sends accessibility location changes to the
    //  browser process.
    //  </summary>
    property OnAccessibilityAccessibilityLocationChange: TOnAccessibilityAccessibilityLocationChangeEvent read FOnAccessibilityLocationChange write FOnAccessibilityLocationChange;
  end;

  //  <summary>
  //  Interface the client can implement to provide a custom stream writer. The
  //  functions of this interface may be called on any thread.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefWriteHandler">Implements TCefWriteHandler</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_stream_capi.h">CEF source file: /include/capi/cef_stream_capi.h (cef_write_handler_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Write raw binary data.
    //  </summary>
    property OnWriteWrite: TOnWriteWriteEvent read FWrite write FWrite;
    //  <summary>
    //  Seek to the specified offset position. |whence| may be any one of
    //  SEEK_CUR, SEEK_END or SEEK_SET. Return zero on success and non-zero on
    //  failure.
    //  </summary>
    property OnWriteSeek: TOnWriteSeekEvent read FSeek write FSeek;
    //  <summary>
    //  Return the current offset position.
    //  </summary>
    property OnWriteEll: TOnWriteEllEvent read FTell write FTell;
    //  <summary>
    //  Flush the stream.
    //  </summary>
    property OnWriteFlush: TOnWriteFlushEvent read FFlush write FFlush;
    //  <summary>
    //  Return true (1) if this handler performs work like accessing the file
    //  system which may block. Used as a hint for determining the thread to
    //  access the handler from.
    //  </summary>
    property OnWriteMayBlock: TOnWriteMayBlockEvent read FMayBlock write FMayBlock;
  end;

  //  <summary>
  //  Implement this interface to provide handler implementations. Methods will be
  //  called by the process and/or thread indicated.
  //  </summary>
  //  <remarks>
  //  <para><see cref="uCEFTypes|TCefApp">Implements TCefApp</see></para>
  //  <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_app_capi.h">CEF source file: /include/capi/cef_app_capi.h (cef_app_t)</see></para>
  //  </remarks>
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
    //  <summary>
    //  Provides an opportunity to view and/or modify command-line arguments
    //  before processing by CEF and Chromium. The |process_type| value will be
    //  NULL for the browser process. Do not keep a reference to the
    //  ICefCommandLine object passed to this function. The
    //  TCefSettings.command_line_args_disabled value can be used to start with
    //  an NULL command-line object. Any values specified in CefSettings that
    //  equate to command-line arguments will be set before this function is
    //  called. Be cautious when using this function to modify command-line
    //  arguments for non-browser processes as this may result in undefined
    //  behavior including crashes.
    //  </summary>
    property OnAppBeforeCommandLineProcessing: TOnAppBeforeCommandLineProcessingEvent read FOnBeforeCommandLineProcessing write FOnBeforeCommandLineProcessing;
    //  <summary>
    //  Provides an opportunity to register custom schemes. Do not keep a
    //  reference to the |registrar| object. This function is called on the main
    //  thread for each process and the registered schemes should be the same
    //  across all processes.
    //  </summary>
    property OnAppRegisterCustomSchemes: TOnAppRegisterCustomSchemesEvent read FOnRegisterCustomSchemes write FOnRegisterCustomSchemes;
    //  <summary>
    //  Return the handler for resource bundle events. If
    //  TCefSettings.pack_loading_disabled is true (1) a handler must be
    //  returned. If no handler is returned resources will be loaded from pack
    //  files. This function is called by the browser and render processes on
    //  multiple threads.
    //  </summary>
    property OnAppGetResourceBundleHandler: TOnAppGetResourceBundleHandlerEvent read FGetResourceBundleHandler write FGetResourceBundleHandler;
    //  <summary>
    //  Return the handler for functionality specific to the browser process. This
    //  function is called on multiple threads in the browser process.
    //  </summary>
    property OnAppGetBrowserProcessHandler: TOnAppGetBrowserProcessHandlerEvent read FGetBrowserProcessHandler write FGetBrowserProcessHandler;
    //  <summary>
    //  Return the handler for functionality specific to the render process. This
    //  function is called on the render process main thread.
    //  </summary>
    property OnAppGetRenderProcessHandler: TOnAppGetRenderProcessHandlerEvent read FGetRenderProcessHandler write FGetRenderProcessHandler;
  end;



implementation


destructor TEngBrowserProcessHandler.Destroy;
begin
  inherited Destroy;
  FOnRegisterCustomPreferences := nil;
  FOnContextInitialized := nil;
  FOnBeforeChildProcessLaunch := nil;
  FOnAlreadyRunningAppRelaunch := nil;
  FOnScheduleMessagePumpWork := nil;
  FGetDefaultClient := nil;
  FGetDefaultRequestContextHandler := nil;
end;

constructor TEngBrowserProcessHandler.Create();
begin
  inherited Create();
  FOnRegisterCustomPreferences := nil;
  FOnContextInitialized := nil;
  FOnBeforeChildProcessLaunch := nil;
  FOnAlreadyRunningAppRelaunch := nil;
  FOnScheduleMessagePumpWork := nil;
  FGetDefaultClient := nil;
  FGetDefaultRequestContextHandler := nil;
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

procedure TEngBrowserProcessHandler.OnAlreadyRunningAppRelaunch(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean);
begin
  if assigned(FOnAlreadyRunningAppRelaunch) then
    FOnAlreadyRunningAppRelaunch(commandLine, current_directory, aResult);
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

procedure TEngBrowserProcessHandler.GetDefaultRequestContextHandler(var aRequestContextHandler: ICefRequestContextHandler);
begin
  if assigned(FGetDefaultRequestContextHandler) then
    FGetDefaultRequestContextHandler(aRequestContextHandler);
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

function TEngDialogHandler.OnFileDialog(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const accept_extensions: TStrings; const accept_descriptions: TStrings; const callback: ICefFileDialogCallback): Boolean;
begin
  Result := false;
  if assigned(FOnFileDialog) then
    Result := FOnFileDialog(browser, mode, title, defaultFilePath, acceptFilters, accept_extensions, accept_descriptions, callback);
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

function TEngDownloadHandler.OnBeforeDownload(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback): boolean;
begin
  Result := false;
  if assigned(FOnBeforeDownload) then
    Result := FOnBeforeDownload(browser, downloadItem, suggestedName, callback);
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
  FOnBeforeDevToolsPopup := nil;
  FOnAfterCreated := nil;
  FOnBeforeClose := nil;
end;

constructor TEngLifeSpanHandler.Create();
begin
  inherited Create();
  FOnBeforePopup := nil;
  FDoClose := nil;
  FOnBeforeDevToolsPopup := nil;
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

procedure TEngLifeSpanHandler.OnBeforeDevToolsPopup(const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean);
begin
  if assigned(FOnBeforeDevToolsPopup) then
    FOnBeforeDevToolsPopup(browser, windowInfo, client, settings, extra_info, use_default_window);
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

procedure TEngRenderHandler.OnAcceleratedPaint(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo);
begin
  if assigned(FOnAcceleratedPaint) then
    FOnAcceleratedPaint(browser, kind, dirtyRectsCount, dirtyRects, info);
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
  FOnRenderProcessUnresponsive := nil;
  FGetResourceRequestHandler := nil;
  FOnRenderViewReady := nil;
  FOnRenderProcessResponsive := nil;
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
  FOnRenderProcessUnresponsive := nil;
  FGetResourceRequestHandler := nil;
  FOnRenderViewReady := nil;
  FOnRenderProcessResponsive := nil;
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

function TEngRequestHandler.OnRenderProcessUnresponsive(const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback): boolean;
begin
  Result := false;
  if assigned(FOnRenderProcessUnresponsive) then
    Result := FOnRenderProcessUnresponsive(browser, callback);
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

procedure TEngRequestHandler.OnRenderProcessResponsive(const browser: ICefBrowser);
begin
  if assigned(FOnRenderProcessResponsive) then
    FOnRenderProcessResponsive(browser);
end;

procedure TEngRequestHandler.OnRenderProcessTerminated(const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring);
begin
  if assigned(FOnRenderProcessTerminated) then
    FOnRenderProcessTerminated(browser, status, error_code, error_string);
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
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnGetDelegateForPopupBrowserView := nil;
  FOnPopupBrowserViewCreated := nil;
  FOnGetChromeToolbarType := nil;
  FOnUseFramelessWindowForPictureInPicture := nil;
  FOnGestureCommand := nil;
  FOnGetBrowserRuntimeStyle := nil;
end;

constructor TEngBrowserViewDelegate.Create();
begin
  inherited Create();
  FOnBrowserCreated := nil;
  FOnBrowserDestroyed := nil;
  FOnGetDelegateForPopupBrowserView := nil;
  FOnPopupBrowserViewCreated := nil;
  FOnGetChromeToolbarType := nil;
  FOnUseFramelessWindowForPictureInPicture := nil;
  FOnGestureCommand := nil;
  FOnGetBrowserRuntimeStyle := nil;
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

procedure TEngBrowserViewDelegate.OnGetChromeToolbarType(const browser_view: ICefBrowserView; var aResult: TCefChromeToolbarType);
begin
  if assigned(FOnGetChromeToolbarType) then
    FOnGetChromeToolbarType(browser_view, aResult);
end;

procedure TEngBrowserViewDelegate.OnUseFramelessWindowForPictureInPicture(const browser_view: ICefBrowserView; var aResult: boolean);
begin
  if assigned(FOnUseFramelessWindowForPictureInPicture) then
    FOnUseFramelessWindowForPictureInPicture(browser_view, aResult);
end;

procedure TEngBrowserViewDelegate.OnGestureCommand(const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean);
begin
  if assigned(FOnGestureCommand) then
    FOnGestureCommand(browser_view, gesture_command, aResult);
end;

procedure TEngBrowserViewDelegate.OnGetBrowserRuntimeStyle(var aResult: TCefRuntimeStyle);
begin
  if assigned(FOnGetBrowserRuntimeStyle) then
    FOnGetBrowserRuntimeStyle(aResult);
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
  FOnThemeChanged := nil;
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
  FOnThemeChanged := nil;
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

procedure TEngViewDelegate.OnThemeChanged(const view: ICefView);
begin
  if assigned(FOnThemeChanged) then
    FOnThemeChanged(view);
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
  FOnIsChromeAppMenuItemVisible := nil;
  FOnIsChromeAppMenuItemEnabled := nil;
  FOnIsChromePageActionIconVisible := nil;
  FOnIsChromeToolbarButtonVisible := nil;
end;

constructor TEngCommandHandler.Create();
begin
  inherited Create();
  FOnChromeCommand := nil;
  FOnIsChromeAppMenuItemVisible := nil;
  FOnIsChromeAppMenuItemEnabled := nil;
  FOnIsChromePageActionIconVisible := nil;
  FOnIsChromeToolbarButtonVisible := nil;
end;

function TEngCommandHandler.OnChromeCommand(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean;
begin
  Result := false;
  if assigned(FOnChromeCommand) then
    Result := FOnChromeCommand(browser, command_id, disposition);
end;

function TEngCommandHandler.OnIsChromeAppMenuItemVisible(const browser: ICefBrowser; command_id: integer): boolean;
begin
  Result := false;
  if assigned(FOnIsChromeAppMenuItemVisible) then
    Result := FOnIsChromeAppMenuItemVisible(browser, command_id);
end;

function TEngCommandHandler.OnIsChromeAppMenuItemEnabled(const browser: ICefBrowser; command_id: integer): boolean;
begin
  Result := false;
  if assigned(FOnIsChromeAppMenuItemEnabled) then
    Result := FOnIsChromeAppMenuItemEnabled(browser, command_id);
end;

function TEngCommandHandler.OnIsChromePageActionIconVisible(icon_type: TCefChromePageActionIconType): boolean;
begin
  Result := false;
  if assigned(FOnIsChromePageActionIconVisible) then
    Result := FOnIsChromePageActionIconVisible(icon_type);
end;

function TEngCommandHandler.OnIsChromeToolbarButtonVisible(button_type: TCefChromeToolbarButtonType): boolean;
begin
  Result := false;
  if assigned(FOnIsChromeToolbarButtonVisible) then
    Result := FOnIsChromeToolbarButtonVisible(button_type);
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
  FOnWindowFullscreenTransition := nil;
  FOnGetParentWindow := nil;
  FOnIsWindowModalDialog := nil;
  FOnGetInitialBounds := nil;
  FOnGetInitialShowState := nil;
  FOnIsFrameless := nil;
  FOnWithStandardWindowButtons := nil;
  FOnGetTitlebarHeight := nil;
  FOnAcceptsFirstMouse := nil;
  FOnCanResize := nil;
  FOnCanMaximize := nil;
  FOnCanMinimize := nil;
  FOnCanClose := nil;
  FOnAccelerator := nil;
  FOnKeyEvent := nil;
  FOnThemeColorsChanged := nil;
  FOnGetWindowRuntimeStyle := nil;
end;

constructor TEngWindowDelegate.Create();
begin
  inherited Create();
  FOnWindowCreated := nil;
  FOnWindowClosing := nil;
  FOnWindowDestroyed := nil;
  FOnWindowActivationChanged := nil;
  FOnWindowBoundsChanged := nil;
  FOnWindowFullscreenTransition := nil;
  FOnGetParentWindow := nil;
  FOnIsWindowModalDialog := nil;
  FOnGetInitialBounds := nil;
  FOnGetInitialShowState := nil;
  FOnIsFrameless := nil;
  FOnWithStandardWindowButtons := nil;
  FOnGetTitlebarHeight := nil;
  FOnAcceptsFirstMouse := nil;
  FOnCanResize := nil;
  FOnCanMaximize := nil;
  FOnCanMinimize := nil;
  FOnCanClose := nil;
  FOnAccelerator := nil;
  FOnKeyEvent := nil;
  FOnThemeColorsChanged := nil;
  FOnGetWindowRuntimeStyle := nil;
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

procedure TEngWindowDelegate.OnWindowFullscreenTransition(const window_: ICefWindow; is_completed: boolean);
begin
  if assigned(FOnWindowFullscreenTransition) then
    FOnWindowFullscreenTransition(window_, is_completed);
end;

procedure TEngWindowDelegate.OnGetParentWindow(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow);
begin
  if assigned(FOnGetParentWindow) then
    FOnGetParentWindow(window_, is_menu, can_activate_menu, aResult);
end;

procedure TEngWindowDelegate.OnIsWindowModalDialog(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnIsWindowModalDialog) then
    FOnIsWindowModalDialog(window_, aResult);
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

procedure TEngWindowDelegate.OnWithStandardWindowButtons(const window_: ICefWindow; var aResult: boolean);
begin
  if assigned(FOnWithStandardWindowButtons) then
    FOnWithStandardWindowButtons(window_, aResult);
end;

procedure TEngWindowDelegate.OnGetTitlebarHeight(const window_: ICefWindow; var titlebar_height: Single; var aResult: boolean);
begin
  if assigned(FOnGetTitlebarHeight) then
    FOnGetTitlebarHeight(window_, titlebar_height, aResult);
end;

procedure TEngWindowDelegate.OnAcceptsFirstMouse(const window_: ICefWindow; var aResult: TCefState);
begin
  if assigned(FOnAcceptsFirstMouse) then
    FOnAcceptsFirstMouse(window_, aResult);
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

procedure TEngWindowDelegate.OnThemeColorsChanged(const window_: ICefWindow; chrome_theme: Integer);
begin
  if assigned(FOnThemeColorsChanged) then
    FOnThemeColorsChanged(window_, chrome_theme);
end;

procedure TEngWindowDelegate.OnGetWindowRuntimeStyle(var aResult: TCefRuntimeStyle);
begin
  if assigned(FOnGetWindowRuntimeStyle) then
    FOnGetWindowRuntimeStyle(aResult);
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
