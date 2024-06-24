//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uCEF_EventCallback;

{$mode objfpc}{$H+}

{$I ExtDecl.inc}

interface

uses
  Controls,
  Forms,
  ComCtrls,
  Menus,
  ExtCtrls,
  Classes,
  SysUtils,
  Graphics,
  LCLType,
  ImgList,
  FPImage,
  Messages,
  // cef
  uCEFInterfaces, uCEFTypes,
  uTools, uCEF_RecordStruct, uCEF_TypesConvert;

type
  // 基础事件回调函数
  TCEFEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TCEFRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;

var
  GCEFEventCallbackPtr: TCEFEventCallbackPtr;
  GCEFRemoveEventCallbackPtr: TCEFRemoveEventCallPtr;

type

  { TCEFEventBase }
  TCEFEventBase = class
  private class var
    FEventObjectsLock: TRtlCriticalSection;
    FEventObjects: TEventObjectList;
  public
    class constructor Create;
    class destructor Destroy;
  private
    // 保存传入的，一个标识吧
    FHostDataPtr: Pointer;
    function GetDataPtr: Pointer;
    // 不单独使用的，配置其他使用
    class procedure CallRemoveEvent(AMethod: TMethod);
  protected
    procedure SendEvent(AArgs: array of const);
    function CheckDataPtr: Boolean;
  public
    constructor Create(AHostDataPtr: Pointer);
    destructor Destroy; override;
    property DataPtr: Pointer read GetDataPtr;

    // 移除事件中的对象
    class procedure Remove(AMethod: TMethod);
    class function CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
  end;

  { TCEFEvent }
  TCEFEvent = class(TCEFEventBase)
  public
    // 事件定义
    procedure ChromiumCore_OnAcceleratedPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: nativeuint; const dirtyRects: PCefRectArray; shared_handle: Pointer);
    procedure ChromiumCore_OnAllConnectionsClosed(Sender: TObject);
    procedure ChromiumCore_OnAudioStreamError(Sender: TObject; const browser: ICefBrowser; const message_: ustring);
    procedure ChromiumCore_OnAudioStreamPacket(Sender: TObject; const browser: ICefBrowser; const Data: PPSingle; frames: integer; pts: int64);
    procedure ChromiumCore_OnAudioStreamStarted(Sender: TObject; const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
    procedure ChromiumCore_OnAudioStreamStopped(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnAutoResize(Sender: TObject; const browser: ICefBrowser; const new_size: PCefSize; out Result: boolean);
    procedure ChromiumCore_OnBeforeUnloadDialog(Sender: TObject; const browser: ICefBrowser; const messageText: ustring; isReload: boolean; const callback: ICefJsDialogCallback; out Result: boolean);
    procedure ChromiumCore_OnCanDownload(Sender: TObject; const browser: ICefBrowser; const url, request_method: ustring; var aResult: boolean);
    procedure ChromiumCore_OnCanSaveCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie; var aResult: boolean);
    procedure ChromiumCore_OnCanSendCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie; var aResult: boolean);
    procedure ChromiumCore_OnCertificateError(Sender: TObject; const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback; out Result: boolean);
    procedure ChromiumCore_OnCertificateExceptionsCleared(Sender: TObject);
    procedure ChromiumCore_OnChromeCommand(Sender: TObject; const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition; var aResult: boolean);
    procedure ChromiumCore_OnConsoleMessage(Sender: TObject; const browser: ICefBrowser; level: TCefLogSeverity; const message, Source: ustring; line: integer; out Result: boolean);
    procedure ChromiumCore_OnCursorChange(Sender: TObject; const browser: ICefBrowser; cursor_: TCefCursorHandle; cursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean);
    procedure ChromiumCore_OnDevToolsAgentAttached(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnDevToolsAgentDetached(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnDevToolsEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: ICefValue);
    procedure ChromiumCore_OnDevToolsMessage(Sender: TObject; const browser: ICefBrowser; const message_: ICefValue; var aHandled: boolean);
    procedure ChromiumCore_OnDevToolsMethodRawResult(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const Result: Pointer; result_size: nativeuint);
    procedure ChromiumCore_OnDevToolsMethodResult(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const Result: ICefValue);
    procedure ChromiumCore_OnDevToolsRawEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: nativeuint);
    procedure ChromiumCore_OnDevToolsRawMessage(Sender: TObject; const browser: ICefBrowser; const message_: Pointer; message_size: nativeuint; var aHandled: boolean);
    procedure ChromiumCore_OnDialogClosed(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnDismissPermissionPrompt(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; Result: TCefPermissionRequestResult);
    procedure ChromiumCore_OnDocumentAvailableInMainFrame(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnDownloadImageFinished(Sender: TObject; const imageUrl: ustring; httpStatusCode: integer; const image: ICefImage);
    procedure ChromiumCore_OnExecuteTaskOnCefThread(Sender: TObject; aTaskID: cardinal);
    procedure ChromiumCore_OnFavIconUrlChange(Sender: TObject; const browser: ICefBrowser; const iconUrls: TStrings);
    procedure ChromiumCore_OnFileDialog(Sender: TObject; const browser: ICefBrowser; mode: TCefFileDialogMode; const title, defaultFilePath: ustring; const acceptFilters: TStrings; const callback: ICefFileDialogCallback; var Result: boolean);
    procedure ChromiumCore_OnGetAccessibilityHandler(Sender: TObject; var aAccessibilityHandler: ICefAccessibilityHandler);
    procedure ChromiumCore_OnGetAudioParameters(Sender: TObject; const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
    procedure ChromiumCore_OnGetResourceHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler);
    procedure ChromiumCore_OnGetResourceRequestHandler_ReqCtxHdlr(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aExternalResourceRequestHandler: ICefResourceRequestHandler);
    procedure ChromiumCore_OnGetResourceRequestHandler_ReqHdlr(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aExternalResourceRequestHandler: ICefResourceRequestHandler);
    procedure ChromiumCore_OnGetResourceResponseFilter(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: ICefResponseFilter);
    procedure ChromiumCore_OnGetRootScreenRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect; out Result: boolean);
    procedure ChromiumCore_OnGetScreenInfo(Sender: TObject; const browser: ICefBrowser; var screenInfo: TCefScreenInfo; out Result: boolean);
    procedure ChromiumCore_OnGetScreenPoint(Sender: TObject; const browser: ICefBrowser; viewX, viewY: integer; var screenX, screenY: integer; out Result: boolean);
    procedure ChromiumCore_OnGetTouchHandleSize(Sender: TObject; const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
    procedure ChromiumCore_OnGetViewRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect);
    procedure ChromiumCore_OnGotFocus(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnHttpAuthCredentialsCleared(Sender: TObject);
    procedure ChromiumCore_OnIMECompositionRangeChanged(Sender: TObject; const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: nativeuint; const character_bounds: PCefRect);
    procedure ChromiumCore_OnJsDialog(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText, defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: boolean; out Result: boolean);
    procedure ChromiumCore_OnMediaAccessChange(Sender: TObject; const browser: ICefBrowser; has_video_access, has_audio_access: boolean);
    procedure ChromiumCore_OnMediaRouteCreateFinished(Sender: TObject; Result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
    procedure ChromiumCore_OnMediaSinkDeviceInfo(Sender: TObject; const ip_address: ustring; port: integer; const model_name: ustring);
    procedure ChromiumCore_OnCanFocus(Sender: TObject);
    procedure ChromiumCore_OnNavigationVisitorResultAvailable(Sender: TObject; const entry: ICefNavigationEntry; current: boolean; index, total: integer; var aResult: boolean);
    procedure ChromiumCore_OnPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: nativeuint; const dirtyRects: PCefRectArray; const buffer: Pointer; Width, Height: integer);
    procedure ChromiumCore_OnPopupShow(Sender: TObject; const browser: ICefBrowser; Show: boolean);
    procedure ChromiumCore_OnPopupSize(Sender: TObject; const browser: ICefBrowser; const rect: PCefRect);
    procedure ChromiumCore_OnPrefsAvailable(Sender: TObject; aResultOK: boolean);
    procedure ChromiumCore_OnPrefsUpdated(Sender: TObject);
    procedure ChromiumCore_OnPreKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: boolean; out Result: boolean);
    procedure ChromiumCore_OnProtocolExecution(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: boolean);
    procedure ChromiumCore_OnQuickMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags; var aResult: boolean);
    procedure ChromiumCore_OnQuickMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure ChromiumCore_OnRequestContextInitialized(Sender: TObject; const request_context: ICefRequestContext);
    procedure ChromiumCore_OnRequestMediaAccessPermission(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback; var aResult: boolean);
    procedure ChromiumCore_OnResetDialogState(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnResolvedHostAvailable(Sender: TObject; Result: TCefErrorCode; const resolvedIps: TStrings);
    procedure ChromiumCore_OnRouteMessageReceived(Sender: TObject; const route: ICefMediaRoute; const message_: ustring);
    procedure ChromiumCore_OnRoutes(Sender: TObject; const routes: TCefMediaRouteArray);
    procedure ChromiumCore_OnRouteStateChanged(Sender: TObject; const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
    procedure ChromiumCore_OnRunContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback; var aResult: boolean);
    procedure ChromiumCore_OnRunQuickMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; location: TCefPoint; size: TCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback; var aResult: boolean);
    procedure ChromiumCore_OnSelectClientCertificate(Sender: TObject; const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: nativeuint; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback; var aResult: boolean);
    procedure ChromiumCore_OnSetFocus(Sender: TObject; const browser: ICefBrowser; Source: TCefFocusSource; out Result: boolean);
    procedure ChromiumCore_OnShowPermissionPrompt(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback; var aResult: boolean);
    procedure ChromiumCore_OnSinks(Sender: TObject; const sinks: TCefMediaSinkArray);
    procedure ChromiumCore_OnStartDragging(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x, y: integer; out Result: boolean);
    procedure ChromiumCore_OnStatusMessage(Sender: TObject; const browser: ICefBrowser; const Value: ustring);
    procedure ChromiumCore_OnTakeFocus(Sender: TObject; const browser: ICefBrowser; Next: boolean);
    procedure ChromiumCore_OnTextResultAvailable(Sender: TObject; const aText: ustring);
    procedure ChromiumCore_OnTextSelectionChanged(Sender: TObject; const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
    procedure ChromiumCore_OnTooltip(Sender: TObject; const browser: ICefBrowser; var Text: ustring; out Result: boolean);
    procedure ChromiumCore_OnTouchHandleStateChanged(Sender: TObject; const browser: ICefBrowser; const state: TCefTouchHandleState);
    procedure ChromiumCore_OnUpdateDragCursor(Sender: TObject; const browser: ICefBrowser; operation: TCefDragOperation);
    procedure ChromiumCore_OnVirtualKeyboardRequested(Sender: TObject; const browser: ICefBrowser; input_mode: TCefTextInpuMode);
    procedure ChromiumCore_OnIsChromeAppMenuItemVisible(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
    procedure ChromiumCore_OnIsChromeAppMenuItemEnabled(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
    procedure ChromiumCore_OnIsChromePageActionIconVisible(Sender: TObject; icon_type: TCefChromePageActionIconType; var aResult: boolean);
    procedure ChromiumCore_OnIsChromeToolbarButtonVisible(Sender: TObject; button_type: TCefChromeToolbarButtonType; var aResult: boolean);

    procedure ChromiumCore_OnAfterCreated(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnBeforeBrowse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture, isRedirect: Boolean; out Result: Boolean);
    procedure ChromiumCore_OnAddressChange(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
    procedure ChromiumCore_OnBeforeClose(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnClose(Sender: TObject; const browser: ICefBrowser; var aAction: TCefCloseBrowserAction);
    procedure ChromiumCore_OnBeforeContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
    procedure ChromiumCore_OnContextMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: Cardinal; out Result: Boolean);
    procedure ChromiumCore_OnContextMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure ChromiumCore_OnPdfPrintFinished(Sender: TObject; aResultOK: boolean);
    procedure ChromiumCore_OnKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out Result: boolean);
    procedure ChromiumCore_OnLoadStart(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
    procedure ChromiumCore_OnLoadingStateChange(Sender: TObject; const browser: ICefBrowser; isLoading, canGoBack, canGoForward: boolean);
    procedure ChromiumCore_OnLoadingProgressChange(Sender: TObject; const browser: ICefBrowser; const progress: double);
    procedure ChromiumCore_OnLoadError(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; errorCode: integer; const errorText, failedUrl: ustring);
    procedure ChromiumCore_OnLoadEnd(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: integer);
    procedure ChromiumCore_OnBeforeDownload(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback);
    procedure ChromiumCore_OnDownloadUpdated(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
    procedure ChromiumCore_OnZoomPctAvailable(Sender: TObject; const aZoomPct: double);
    procedure ChromiumCore_OnFullScreenModeChange(Sender: TObject;  const browser: ICefBrowser; fullscreen: boolean);
    procedure ChromiumCore_OnBeforePopup(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl, targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures;
      var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean;  var Result: Boolean);
    procedure ChromiumCore_OnOpenUrlFromTab(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; out Result: Boolean);
    procedure ChromiumCore_OnTitleChange(Sender: TObject; const browser: ICefBrowser; const title: ustring);
    procedure ChromiumCore_OnRenderCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
    procedure ChromiumCore_OnWidgetCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
    procedure ChromiumCore_OnBrowserCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
    procedure ChromiumCore_OnRenderProcessTerminated(Sender: TObject; const browser: ICefBrowser; status: TCefTerminationStatus);
    procedure ChromiumCore_OnRenderViewReady(Sender: Tobject; const browser: ICefBrowser);
    procedure ChromiumCore_OnScrollOffsetChanged(Sender: TObject; const browser: ICefBrowser; x, y: Double);
    procedure ChromiumCore_OnProcessMessageReceived(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message: ICefProcessMessage; out Result: Boolean);
    procedure ChromiumCore_OnFindResult(Sender: TObject; const browser: ICefBrowser; identifier, count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
    procedure ChromiumCore_OnBeforeResourceLoad(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback; out Result: TCefReturnValue);
    procedure ChromiumCore_OnResourceResponse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: boolean);
    procedure ChromiumCore_OnResourceRedirect(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
    procedure ChromiumCore_OnResourceLoadComplete(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse;
      status: TCefUrlRequestStatus; receivedContentLength: Int64);
    procedure ChromiumCore_OnCookieSet(Sender: TObject; aSuccess: boolean; aID: integer);
    procedure ChromiumCore_OnCookiesDeleted(Sender: TObject; numDeleted: Integer);
    procedure ChromiumCore_OnCookiesFlushed(Sender: TObject);
    procedure ChromiumCore_OnCookiesVisited(Sender: TObject; const name_, value, domain, path: ustring; secure, httponly, hasExpires: Boolean; const creation, lastAccess, expires: TDateTime; count, total, aID: Integer; same_site: TCefCookieSameSite; priority: Integer; var aDeleteCookie, aResult: Boolean);
    procedure ChromiumCore_OnCookieVisitorDestroyed(Sender: TObject; aID: integer);
    procedure ChromiumCore_OnFrameAttached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
    procedure ChromiumCore_OnFrameCreated(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure ChromiumCore_OnFrameDetached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure ChromiumCore_OnMainFrameChanged(Sender: TObject; const browser: ICefBrowser; const old_frame, new_frame: ICefFrame);
    procedure ChromiumCore_OnDragEnter(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations; out Result: Boolean);
    procedure ChromiumCore_OnDraggableRegionsChanged(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
    procedure ChromiumCore_OnGetAuthCredentials(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; out Result: Boolean);
    procedure ChromiumCore_OnExtensionBeforeBackgroundBrowser(Sender: TObject; const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings; var aResult: boolean);
    procedure ChromiumCore_OnExtensionBeforeBrowser(Sender: TObject; const extension: ICefExtension; const browser, active_browser: ICefBrowser; index: integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var aResult: boolean);
    procedure ChromiumCore_OnExtensionCanAccessBrowser(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser; var aResult: boolean);
    procedure ChromiumCore_OnExtensionGetActiveBrowser(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser);
    procedure ChromiumCore_OnExtensionGetExtensionResource(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback; var aResult: boolean);
    procedure ChromiumCore_OnExtensionLoaded(Sender: TObject; const extension: ICefExtension);
    procedure ChromiumCore_OnExtensionLoadFailed(Sender: TObject; Result: TCefErrorcode);
    procedure ChromiumCore_OnExtensionUnloaded(Sender: TObject; const extension: ICefExtension);
    procedure ChromiumCore_OnPrintStart(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnPrintSettings(Sender: TObject; const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
    procedure ChromiumCore_OnPrintDialog(Sender: TObject; const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult : boolean);
    procedure ChromiumCore_OnPrintJob(Sender: TObject; const browser: ICefBrowser; const documentName, PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult : boolean);
    procedure ChromiumCore_OnPrintReset(Sender: TObject; const browser: ICefBrowser);
    procedure ChromiumCore_OnGetPDFPaperSize(Sender: TObject; const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult : TCefSize);

    // TCefCookieVisitor
    function CookieVisitor_OnCookieVisit(const Name, Value, domain, path: ustring; secure, httponly, hasExpires: boolean; const creation, lastAccess, expires: TDateTime; Count, total: integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: boolean): boolean;
    procedure SetCookieCallback_OnSetCookieComplete(success: boolean);
    procedure DeleteCookiesCallback_OnDeleteCookiesComplete(numDeleted: integer);

    // TCEFUrlRequestClientComponent
    procedure UrlRequestClientComponent_OnRequestComplete    (Sender: TObject; const request: ICefUrlRequest);
    procedure UrlRequestClientComponent_OnUploadProgress     (Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
    procedure UrlRequestClientComponent_OnDownloadProgress   (Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
    procedure UrlRequestClientComponent_OnDownloadData       (Sender: TObject; const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
    procedure UrlRequestClientComponent_OnGetAuthCredentials (Sender: TObject; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; var aResult : Boolean);
    procedure UrlRequestClientComponent_OnCreateURLRequest   (Sender: TObject);

    // window parent
    procedure CEFWindowEvent_OnEnter(Sender: TObject);
    procedure CEFWindowEvent_OnExit(Sender: TObject);

    // TCEFWindowComponent
    procedure WindowComponent_OnWindowCreated(const Sender: TObject; const window: ICefWindow);
    procedure WindowComponent_OnWindowDestroyed(const Sender: TObject; const window: ICefWindow);
    procedure WindowComponent_OnWindowActivationChanged(const Sender: TObject; const window: ICefWindow; active: boolean);
    procedure WindowComponent_OnGetParentWindow(const Sender: TObject; const window: ICefWindow; var is_menu, can_activate_menu: boolean; var aResult : ICefWindow);
    procedure WindowComponent_OnIsWindowModalDialog(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnGetInitialBounds(const Sender: TObject; const window: ICefWindow; var aResult : TCefRect);
    procedure WindowComponent_OnGetInitialShowState(const Sender: TObject; const window: ICefWindow; var aResult : TCefShowState);
    procedure WindowComponent_OnIsFrameless(const Sender: TObject; const window: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnWithStandardWindowButtons(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnGetTitlebarHeight(const Sender: TObject; const window_: ICefWindow; var titlebar_height: Single; var aResult : boolean);
    procedure WindowComponent_OnCanResize(const Sender: TObject; const window: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnCanMaximize(const Sender: TObject; const window: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnCanMinimize(const Sender: TObject; const window: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnCanClose(const Sender: TObject; const window: ICefWindow; var aResult : boolean);
    procedure WindowComponent_OnAccelerator(const Sender: TObject; const window: ICefWindow; command_id: Integer; var aResult : boolean);
    procedure WindowComponent_OnKeyEvent(const Sender: TObject; const window: ICefWindow; const event: TCefKeyEvent; var aResult : boolean);
    procedure WindowComponent_OnWindowFullscreenTransition(const Sender: TObject; const window_: ICefWindow; is_completed: boolean);
    procedure WindowComponent_OnWindowBoundsChanged(const Sender: TObject; const window_: ICefWindow; const new_bounds: TCefRect);
    procedure WindowComponent_OnWindowClosing(const Sender: TObject; const window_: ICefWindow);

    //CEFBrowserViewComponent
    procedure BrowserViewComponent_OnBrowserCreated(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure BrowserViewComponent_OnBrowserDestroyed(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure BrowserViewComponent_OnGetDelegateForPopupBrowserView(const Sender: TObject; const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult : ICefBrowserViewDelegate);
    procedure BrowserViewComponent_OnPopupBrowserViewCreated(const Sender: TObject; const browser_view, popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult : boolean);
    procedure BrowserViewComponent_OnGetChromeToolbarType(const Sender: TObject; const browser_view: ICefBrowserView; var aChromeToolbarType: TCefChromeToolbarType);
    procedure BrowserViewComponent_OnUseFramelessWindowForPictureInPicture(const Sender: TObject; const browser_view: ICefBrowserView; var aResult : boolean);
    procedure BrowserViewComponent_OnGestureCommand(const Sender: TObject; const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult : boolean);

    //TCEFViewComponent
    procedure ViewComponent_OnGetPreferredSize(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure ViewComponent_OnGetMinimumSize(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure ViewComponent_OnGetMaximumSize(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure ViewComponent_OnGetHeightForWidth(const Sender: TObject; const view: ICefView; width: Integer; var aResult: Integer);
    procedure ViewComponent_OnParentViewChanged(const Sender: TObject; const view: ICefView; added: boolean; const parent: ICefView);
    procedure ViewComponent_OnChildViewChanged(const Sender: TObject; const view: ICefView; added: boolean; const child: ICefView);
    procedure ViewComponent_OnWindowChanged(const Sender: TObject; const view: ICefView; added: boolean);
    procedure ViewComponent_OnLayoutChanged(const Sender: TObject; const view: ICefView; new_bounds: TCefRect);
    procedure ViewComponent_OnFocus(const Sender: TObject; const view: ICefView);
    procedure ViewComponent_OnBlur(const Sender: TObject; const view: ICefView);

    //TCEFButtonComponent
    procedure ButtonComponent_OnButtonPressed(const Sender: TObject; const button: ICefButton);
    procedure ButtonComponent_OnButtonStateChanged(const Sender: TObject; const button: ICefButton);

    //TCEFMenuButtonComponent
    procedure MenuButtonComponent_OnMenuButtonPressed(const Sender: TObject; const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);

    //TCEFTextfieldComponent
    procedure TextfieldComponent_OnTextfieldKeyEvent(const Sender: TObject; const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult : boolean);
    procedure TextfieldComponent_OnAfterUserAction(const Sender: TObject; const textfield: ICefTextfield);

    //DomVisitor
    procedure DomVisitor_OnDomVisitor(const document: ICefDomDocument);

    // TMenuModelDelegate
    procedure MenuModelDelegate_OnExecuteCommand(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags);
    procedure MenuModelDelegate_OnMouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
    procedure MenuModelDelegate_OnUnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
    procedure MenuModelDelegate_OnUnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
    procedure MenuModelDelegate_OnMenuWillShow(const menuModel: ICefMenuModel);
    procedure MenuModelDelegate_OnMenuClosed(const menuModel: ICefMenuModel);
    function MenuModelDelegate_OnFormatLabel(const menuModel: ICefMenuModel; var label_ : ustring) : boolean;

    // TResourceHandler
    function ResourceHandler_OnOpen(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
    function ResourceHandler_OnProcessRequest(const request: ICefRequest; const callback: ICefCallback): boolean;
    procedure ResourceHandler_OnGetResponseHeaders(const response: ICefResponse; out responseLength: int64; out redirectUrl: ustring);
    function ResourceHandler_OnSkip(bytes_to_skip: int64; var bytes_skipped: int64; const callback: ICefResourceSkipCallback): boolean;
    function ResourceHandler_OnRead(const data_out: Pointer; bytes_to_read: integer; var bytes_read: integer; const callback: ICefResourceReadCallback): boolean;
    function ResourceHandler_OnReadResponse(const dataOut: Pointer; bytesToRead: integer; var bytesRead: integer; const callback: ICefCallback): boolean;
    procedure ResourceHandler_OnCancel();

    // TRunFileDialogCallback
    procedure RunFileDialogCallback_OnRunFileDialogDismissed(const filePaths: TStrings);

    // TSchemeHandlerFactory
    function SchemeHandlerFactory_OnNew(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;

    // TV8ArrayBufferReleaseCallback
    procedure V8ArrayBufferReleaseCallback_OnReleaseBuffer(buffer: Pointer);

    // TV8Handler
    function V8Handler_OnExecute(const Name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var Exception: ustring): boolean;

    // TV8Accessor
    function V8Accessor_OnGet(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
    function V8Accessor_OnSet(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;

    // TV8Interceptor
    function V8Interceptor_OnGetByName(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
    function V8Interceptor_OnGetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
    function V8Interceptor_OnSetByName(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
    function V8Interceptor_OnSetByIndex(index: integer; const object_, Value: ICefv8Value; var Exception: ustring): boolean;

    // TCEFWinControl
    procedure WinControl_OnDragDrop(Sender, Source: TObject; X,Y: Integer);
    procedure WinControl_OnDragOver(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure WinControl_OnStartDrag(Sender: TObject; var DragObject: TDragObject);
    procedure WinControl_OnEndDrag(Sender, Target: TObject; X,Y: Integer);

    // TBufferPanel
    {$IFDEF MSWINDOWS}
    procedure BufferPanel_OnIMECancelComposition(Sender: TObject);
    procedure BufferPanel_OnIMECommitText(Sender: TObject; const aText : ustring; const replacement_range : PCefRange; relative_cursor_pos : integer);
    procedure BufferPanel_OnIMESetComposition(Sender: TObject; const aText : ustring; const underlines : TCefCompositionUnderlineDynArray; const replacement_range, selection_range : TCefRange);
    procedure BufferPanel_OnCustomTouch(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
    procedure BufferPanel_OnPointerDown(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
    procedure BufferPanel_OnPointerUp(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
    procedure BufferPanel_OnPointerUpdate(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
    {$ENDIF}
    procedure BufferPanel_OnPaintParentBkg(Sender: TObject);
    procedure BufferPanel_OnConstrainedResize(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
    procedure BufferPanel_OnContextPopup(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
    procedure BufferPanel_OnDblClick(Sender: TObject);
    procedure BufferPanel_OnDragDrop(Sender, Source: TObject; X,Y: Integer);
    procedure BufferPanel_OnDragOver(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure BufferPanel_OnEndDock(Sender, Target: TObject; X,Y: Integer);
    procedure BufferPanel_OnEndDrag(Sender, Target: TObject; X,Y: Integer);
    procedure BufferPanel_OnGetSiteInfo(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
    procedure BufferPanel_OnMouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure BufferPanel_OnMouseMove(Sender: TObject; Shift: TShiftState; X, Y: Integer);
    procedure BufferPanel_OnMouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure BufferPanel_OnMouseWheel(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
    procedure BufferPanel_OnStartDock(Sender: TObject; var DragObject: TDragDockObject);
    procedure BufferPanel_OnStartDrag(Sender: TObject; var DragObject: TDragObject);

    // TCEFServerComponent
    procedure  ServerComponent_OnServerCreated(Sender: TObject; const server: ICefServer);
    procedure  ServerComponent_OnServerDestroyed(Sender: TObject; const server: ICefServer);
    procedure  ServerComponent_OnClientConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure  ServerComponent_OnClientDisconnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure  ServerComponent_OnHttpRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
    procedure  ServerComponent_OnWebSocketRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
    procedure  ServerComponent_OnWebSocketConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure  ServerComponent_OnWebSocketMessage(Sender: TObject; const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);

    // TCEFSentinel
    procedure Sentinel_OnClose(Sender: TObject);

    // TAccessibilityHandler
    procedure AccessibilityHandler_OnTreeChange(Sender: TObject; const Value: ICefValue);
    procedure AccessibilityHandler_OnLocationChange(Sender: TObject; const Value: ICefValue);

    // TCustomResponseFilter
    procedure CustomResponseFilter_OnInitFilter(Sender: TObject;  var aResult : boolean);
    procedure CustomResponseFilter_OnFilter(Sender: TObject; data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size : NativeUInt; var data_out_written: NativeUInt; var aResult: TCefResponseFilterStatus);

    // TTask
    procedure Task_OnExecute();

  end;


// CEF公共事件函数
procedure SendCEFEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation

{ TCEFEventBase }

class constructor TCEFEventBase.Create;
begin
  InitCriticalSection(FEventObjectsLock);
  FEventObjects := TEventObjectList.Create();
end;

class destructor TCEFEventBase.Destroy;
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.Clear;
    FreeAndNil(FEventObjects);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
    DoneCriticalsection(FEventObjectsLock);
  end;
end;

function TCEFEventBase.CheckDataPtr: Boolean;
begin
  Result := FHostDataPtr <> nil;
end;

function TCEFEventBase.GetDataPtr: Pointer;
begin
  Result := FHostDataPtr;
end;

class procedure TCEFEventBase.CallRemoveEvent(AMethod: TMethod);
begin
  // 通知宿主程序，某个事件要清除了，解除引用。
  if Assigned(GCEFRemoveEventCallbackPtr) then
    GCEFRemoveEventCallbackPtr(TCEFEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TCEFEventBase.SendEvent(AArgs: array of const);
begin
  if Assigned(GCEFEventCallbackPtr) and CheckDataPtr then
  begin
    // 这里要替换为 Pointer
    SendCEFEventByPointer(DataPtr, AArgs);
  end;
end;

procedure SendCEFEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
var
  LParams: array[0..CALL_MAX_PARAM-1] of Pointer;
  LArgLen: Integer;
  LV: TVarRec;
  I: Integer;
begin
  LArgLen := Length(AArgs);
  if LArgLen <= Length(LParams) then
  begin
    for I := 0 to LArgLen - 1 do
    begin
      LV := AArgs[I];
      case LV.VType of
        vtInteger       : LParams[I] := Pointer(LV.VInteger);
        vtBoolean       : LParams[I] := Pointer(Byte(LV.VBoolean));
        vtChar          : LParams[I] := Pointer(Ord(LV.VChar));
        vtExtended      : LParams[I] := LV.VExtended;
        vtString        : LParams[I] := {$IFDEF MSWINDOWS}LV.VString{$ELSE}LV.VAnsiString{$ENDIF};
        vtPointer       : LParams[I] := LV.VPointer;
        vtPChar         : LParams[I] := LV.VPChar;
        vtObject        : LParams[I] := LV.VObject;
        vtClass         : LParams[I] := LV.VClass;
        vtWideChar      : LParams[I] := Pointer(Ord(LV.VWideChar));
        vtPWideChar     : LParams[I] := LV.VPWideChar;
        vtAnsiString    : LParams[I] := LV.VAnsiString;
        vtInterface     : LParams[I] := LV.VInterface;
        vtWideString    : LParams[I] := LV.VWideString;
        vtInt64         : LParams[I] := LV.VInt64;
        vtUnicodeString : LParams[I] := LV.VUnicodeString;
      end;
    end;
    GCEFEventCallbackPtr(EventDataPtr, @LParams[0], LArgLen);
  end;
end;

constructor TCEFEventBase.Create(AHostDataPtr: Pointer);
begin
  inherited Create;
  FHostDataPtr := AHostDataPtr;
  // 并自己添加到对象列表，以便整个程序结束后清理对象
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.AddOrSetData(Pointer(Self), Self);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

destructor TCEFEventBase.Destroy;
begin
  inherited Destroy;
end;

class procedure TCEFEventBase.Remove(AMethod: TMethod);
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    // 这是一个class，找到后会删除并Free掉这个对象
    if AMethod.Data <> nil then
    begin
      CallRemoveEvent(AMethod);
      FEventObjects.Remove(AMethod.Data);
    end;
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

class function TCEFEventBase.CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
begin
  Result := False;
  System.EnterCriticalSection(FEventObjectsLock);
   try
     if AMethod.Data <> nil then
     begin
       // 只有当要替换的数据不同时，则更新
       if TCEFEventBase(AMethod.Data).FHostDataPtr <> AHostDataPtr then
       begin
         CallRemoveEvent(AMethod);
         TCEFEventBase(AMethod.Data).FHostDataPtr := AHostDataPtr;
         Result := True;
       end;
     end;
   finally
     System.LeaveCriticalSection(FEventObjectsLock);
   end;
end;

{ TCEFEvent }

// ----------------- 事件实现 -------------------------------

procedure TCEFEvent.ChromiumCore_OnAcceleratedPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType;
  dirtyRectsCount: nativeuint; const dirtyRects: PCefRectArray; shared_handle: Pointer);
begin
  SendEvent([Sender, browser, type_, dirtyRectsCount, dirtyRects, shared_handle]);
end;

procedure TCEFEvent.ChromiumCore_OnAllConnectionsClosed(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnAudioStreamError(Sender: TObject; const browser: ICefBrowser; const message_: ustring);
begin
  SendEvent([Sender, browser, ToPChar(message_)]);
end;

procedure TCEFEvent.ChromiumCore_OnAudioStreamPacket(Sender: TObject; const browser: ICefBrowser; const Data: PPSingle; frames: integer; pts: int64);
begin
  SendEvent([Sender, browser, Data, frames, pts]);
end;

procedure TCEFEvent.ChromiumCore_OnAudioStreamStarted(Sender: TObject; const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
begin
  SendEvent([Sender, browser, @params, channels]);
end;

procedure TCEFEvent.ChromiumCore_OnAudioStreamStopped(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnAutoResize(Sender: TObject; const browser: ICefBrowser; const new_size: PCefSize; out Result: boolean);
begin
  SendEvent([Sender, browser, new_size, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeUnloadDialog(Sender: TObject; const browser: ICefBrowser; const messageText: ustring; isReload: boolean;
  const callback: ICefJsDialogCallback; out Result: boolean);
begin
  SendEvent([Sender, browser, ToPChar(messageText), isReload, callback, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnCanDownload(Sender: TObject; const browser: ICefBrowser; const url, request_method: ustring; var aResult: boolean);
begin
  SendEvent([Sender, browser, ToPChar(url), ToPChar(request_method), @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnCanSaveCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  const response: ICefResponse; const cookie: PCefCookie; var aResult: boolean);
var
  cookiePtr: TEngCookiePtr;
begin
  cookiePtr := EngCookieToGo(cookie^);
  SendEvent([Sender, browser, frame, request, response, @cookiePtr, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnCanSendCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  const cookie: PCefCookie; var aResult: boolean);
var
  cookiePtr: TEngCookiePtr;
begin
  cookiePtr := EngCookieToGo(cookie^);
  SendEvent([Sender, browser, frame, request, @cookiePtr, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnCertificateError(Sender: TObject; const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring;
  const sslInfo: ICefSslInfo; const callback: ICefCallback; out Result: boolean);
begin
  SendEvent([Sender, browser, certError, ToPChar(requestUrl), sslInfo, callback, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnCertificateExceptionsCleared(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnChromeCommand(Sender: TObject; const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, disposition, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnConsoleMessage(Sender: TObject; const browser: ICefBrowser; level: TCefLogSeverity; const message, Source: ustring;
  line: integer; out Result: boolean);
begin
  SendEvent([Sender, browser, level, ToPChar(message), ToPChar(Source), line, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnCursorChange(Sender: TObject; const browser: ICefBrowser; cursor_: TCefCursorHandle; cursorType: TCefCursorType;
  const customCursorInfo: PCefCursorInfo; var aResult: boolean);
begin
  SendEvent([Sender, browser, cursor_, CursorType, customCursorInfo, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsAgentAttached(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsAgentDetached(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: ICefValue);
begin
  SendEvent([Sender, browser, ToPChar(method), params]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsMessage(Sender: TObject; const browser: ICefBrowser; const message_: ICefValue; var aHandled: boolean);
begin
  SendEvent([Sender, browser, message_, @aHandled]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsMethodRawResult(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean;
  const Result: Pointer; result_size: nativeuint);
begin
  SendEvent([Sender, browser, message_id, success, Result, result_size]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsMethodResult(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const Result: ICefValue);
begin
  SendEvent([Sender, browser, message_id, success, Result]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsRawEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: nativeuint);
begin
  SendEvent([Sender, browser, ToPChar(method), params, params_size]);
end;

procedure TCEFEvent.ChromiumCore_OnDevToolsRawMessage(Sender: TObject; const browser: ICefBrowser; const message_: Pointer; message_size: nativeuint; var aHandled: boolean);
begin
  SendEvent([Sender, browser, message_, message_size, @aHandled]);
end;

procedure TCEFEvent.ChromiumCore_OnDialogClosed(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnDismissPermissionPrompt(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; Result: TCefPermissionRequestResult);
begin
  SendEvent([Sender, browser, @prompt_id, Result]);
end;

procedure TCEFEvent.ChromiumCore_OnDocumentAvailableInMainFrame(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnDownloadImageFinished(Sender: TObject; const imageUrl: ustring; httpStatusCode: integer; const image: ICefImage);
begin
  SendEvent([Sender, ToPChar(imageUrl), httpStatusCode, image]);
end;

procedure TCEFEvent.ChromiumCore_OnExecuteTaskOnCefThread(Sender: TObject; aTaskID: cardinal);
begin
  SendEvent([Sender, aTaskID]);
end;

procedure TCEFEvent.ChromiumCore_OnFavIconUrlChange(Sender: TObject; const browser: ICefBrowser; const iconUrls: TStrings);
begin
  SendEvent([Sender, browser, iconUrls]);
end;

procedure TCEFEvent.ChromiumCore_OnFileDialog(Sender: TObject; const browser: ICefBrowser; mode: TCefFileDialogMode; const title, defaultFilePath: ustring;
  const acceptFilters: TStrings; const callback: ICefFileDialogCallback; var Result: boolean);
begin
  SendEvent([Sender, browser, mode, ToPChar(title), ToPChar(defaultFilePath), acceptFilters, callback, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnGetAccessibilityHandler(Sender: TObject; var aAccessibilityHandler: ICefAccessibilityHandler);
begin
  SendEvent([Sender, @aAccessibilityHandler]);
end;

procedure TCEFEvent.ChromiumCore_OnGetAudioParameters(Sender: TObject; const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
begin
  SendEvent([Sender, browser, @params, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnGetResourceHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  var aResourceHandler: ICefResourceHandler);
begin
  SendEvent([Sender, browser, frame, request, @aResourceHandler]);
end;

procedure TCEFEvent.ChromiumCore_OnGetResourceRequestHandler_ReqCtxHdlr(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean;
  var aExternalResourceRequestHandler: ICefResourceRequestHandler);
begin
  SendEvent([Sender, browser, frame, request, is_navigation, is_download, ToPChar(request_initiator), @disable_default_handling, @aExternalResourceRequestHandler]);
end;

procedure TCEFEvent.ChromiumCore_OnGetResourceRequestHandler_ReqHdlr(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean;
  var aExternalResourceRequestHandler: ICefResourceRequestHandler);
begin
  SendEvent([Sender, browser, frame, request, is_navigation, is_download, ToPChar(request_initiator), @disable_default_handling, @aExternalResourceRequestHandler]);
end;

procedure TCEFEvent.ChromiumCore_OnGetResourceResponseFilter(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const request: ICefRequest; const response: ICefResponse; out Result: ICefResponseFilter);
begin
  SendEvent([Sender, browser, frame, request, response, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnGetRootScreenRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect; out Result: boolean);
begin
  SendEvent([Sender, browser, @rect, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnGetScreenInfo(Sender: TObject; const browser: ICefBrowser; var screenInfo: TCefScreenInfo; out Result: boolean);
begin
  SendEvent([Sender, browser, @screenInfo, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnGetScreenPoint(Sender: TObject; const browser: ICefBrowser; viewX, viewY: integer; var screenX, screenY: integer; out Result: boolean);
begin
  SendEvent([Sender, browser, viewX, viewY, @screenX, @screenY, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnGetTouchHandleSize(Sender: TObject; const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
begin
  SendEvent([Sender, browser, orientation, @size]);
end;

procedure TCEFEvent.ChromiumCore_OnGetViewRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect);
begin
  SendEvent([Sender, browser, @rect]);
end;

procedure TCEFEvent.ChromiumCore_OnGotFocus(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnHttpAuthCredentialsCleared(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnIMECompositionRangeChanged(Sender: TObject; const browser: ICefBrowser; const selected_range: PCefRange;
  character_boundsCount: nativeuint; const character_bounds: PCefRect);
begin
  SendEvent([Sender, browser, selected_range, character_boundsCount, character_bounds]);
end;

procedure TCEFEvent.ChromiumCore_OnJsDialog(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType;
  const messageText, defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: boolean; out Result: boolean);
begin
  SendEvent([Sender, browser, ToPChar(originUrl), integer(dialogType), ToPChar(messageText), ToPChar(defaultPromptText), callback, @suppressMessage, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnMediaAccessChange(Sender: TObject; const browser: ICefBrowser; has_video_access, has_audio_access: boolean);
begin
  SendEvent([Sender, browser, has_video_access, has_audio_access]);
end;

procedure TCEFEvent.ChromiumCore_OnMediaRouteCreateFinished(Sender: TObject; Result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
begin
  SendEvent([Sender, integer(Result), ToPChar(error), route]);
end;

procedure TCEFEvent.ChromiumCore_OnMediaSinkDeviceInfo(Sender: TObject; const ip_address: ustring; port: integer; const model_name: ustring);
begin
  SendEvent([Sender, ToPChar(ip_address), port, ToPChar(model_name)]);
end;

procedure TCEFEvent.ChromiumCore_OnCanFocus(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnNavigationVisitorResultAvailable(Sender: TObject; const entry: ICefNavigationEntry; current: boolean;
  index, total: integer; var aResult: boolean);
begin
  SendEvent([Sender, entry, current, index, total, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: nativeuint;
  const dirtyRects: PCefRectArray; const buffer: Pointer; Width, Height: integer);
begin
  SendEvent([Sender, browser, type_, uint32(dirtyRectsCount), dirtyRects, buffer, Width, Height]);
end;

procedure TCEFEvent.ChromiumCore_OnPopupShow(Sender: TObject; const browser: ICefBrowser; Show: boolean);
begin
  SendEvent([Sender, browser, Show]);
end;

procedure TCEFEvent.ChromiumCore_OnPopupSize(Sender: TObject; const browser: ICefBrowser; const rect: PCefRect);
begin
  SendEvent([Sender, browser, rect]);
end;

procedure TCEFEvent.ChromiumCore_OnPrefsAvailable(Sender: TObject; aResultOK: boolean);
begin
  SendEvent([Sender, aResultOK]);
end;

procedure TCEFEvent.ChromiumCore_OnPrefsUpdated(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnPreKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle;
  out isKeyboardShortcut: boolean; out Result: boolean);
begin
  SendEvent([Sender, browser, event, osEvent, @isKeyboardShortcut, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnProtocolExecution(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  var allowOsExecution: boolean);
begin
  SendEvent([Sender, browser, frame, request, @allowOsExecution]);
end;

procedure TCEFEvent.ChromiumCore_OnQuickMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; command_id: integer;
  event_flags: TCefEventFlags; var aResult: boolean);
begin
  SendEvent([Sender, browser, frame, command_id, event_flags, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnQuickMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.ChromiumCore_OnRequestContextInitialized(Sender: TObject; const request_context: ICefRequestContext);
begin
  SendEvent([Sender, request_context]);
end;

procedure TCEFEvent.ChromiumCore_OnRequestMediaAccessPermission(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, frame, ToPChar(requesting_origin), requested_permissions, callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnResetDialogState(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnResolvedHostAvailable(Sender: TObject; Result: TCefErrorCode; const resolvedIps: TStrings);
begin
  SendEvent([Sender, integer(Result), resolvedIps]);
end;

procedure TCEFEvent.ChromiumCore_OnRouteMessageReceived(Sender: TObject; const route: ICefMediaRoute; const message_: ustring);
begin
  SendEvent([Sender, route, ToPChar(message_)]);
end;

procedure TCEFEvent.ChromiumCore_OnRoutes(Sender: TObject; const routes: TCefMediaRouteArray);
begin
  SendEvent([Sender, @routes, Integer(Length(routes))]);
end;

procedure TCEFEvent.ChromiumCore_OnRouteStateChanged(Sender: TObject; const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
begin
  SendEvent([Sender, route, integer(state)]);
end;

procedure TCEFEvent.ChromiumCore_OnRunContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams;
  const model: ICefMenuModel; const callback: ICefRunContextMenuCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, frame, params, model, callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnRunQuickMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; location: TCefPoint;
  size: TCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, frame, @location, @size, edit_state_flags, callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnSelectClientCertificate(Sender: TObject; const browser: ICefBrowser; isProxy: boolean; const host: ustring;
  port: integer; certificatesCount: nativeuint; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, isProxy, ToPChar(host), port, integer(certificatesCount), @certificates, callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnSetFocus(Sender: TObject; const browser: ICefBrowser; Source: TCefFocusSource; out Result: boolean);
begin
  SendEvent([Sender, browser, integer(Source), @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnShowPermissionPrompt(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring;
  requested_permissions: cardinal; const callback: ICefPermissionPromptCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, @prompt_id, ToPChar(requesting_origin), requested_permissions, callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnSinks(Sender: TObject; const sinks: TCefMediaSinkArray);
begin
  SendEvent([Sender, @sinks, Integer(Length(sinks))]);
end;

procedure TCEFEvent.ChromiumCore_OnStartDragging(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData;
  allowedOps: TCefDragOperations; x, y: integer; out Result: boolean);
begin
  SendEvent([Sender, browser, dragData, allowedOps, x, y, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnStatusMessage(Sender: TObject; const browser: ICefBrowser; const Value: ustring);
begin
  SendEvent([Sender, browser, ToPChar(Value)]);
end;

procedure TCEFEvent.ChromiumCore_OnTakeFocus(Sender: TObject; const browser: ICefBrowser; Next: boolean);
begin
  SendEvent([Sender, browser, Next]);
end;

procedure TCEFEvent.ChromiumCore_OnTextResultAvailable(Sender: TObject; const aText: ustring);
begin
  SendEvent([Sender, ToPChar(aText)]);
end;

procedure TCEFEvent.ChromiumCore_OnTextSelectionChanged(Sender: TObject; const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
begin
  SendEvent([Sender, browser, ToPChar(selected_text), selected_range]);
end;

procedure TCEFEvent.ChromiumCore_OnTooltip(Sender: TObject; const browser: ICefBrowser; var Text: ustring; out Result: boolean);
var
  PText: PChar;
begin
  PText := ToPChar(Text);
  SendEvent([Sender, browser, @PText, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnTouchHandleStateChanged(Sender: TObject; const browser: ICefBrowser; const state: TCefTouchHandleState);
begin
  SendEvent([Sender, browser, @state]);
end;

procedure TCEFEvent.ChromiumCore_OnUpdateDragCursor(Sender: TObject; const browser: ICefBrowser; operation: TCefDragOperation);
begin
  SendEvent([Sender, browser, operation]);
end;

procedure TCEFEvent.ChromiumCore_OnVirtualKeyboardRequested(Sender: TObject; const browser: ICefBrowser; input_mode: TCefTextInpuMode);
begin
  SendEvent([Sender, browser, input_mode]);
end;

procedure TCEFEvent.ChromiumCore_OnIsChromeAppMenuItemVisible(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnIsChromeAppMenuItemEnabled(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnIsChromePageActionIconVisible(Sender: TObject; icon_type: TCefChromePageActionIconType; var aResult: boolean);
begin
  SendEvent([Sender, icon_type, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnIsChromeToolbarButtonVisible(Sender: TObject; button_type: TCefChromeToolbarButtonType; var aResult: boolean);
begin
  SendEvent([Sender, button_type, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnAfterCreated(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeBrowse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  user_gesture, isRedirect: boolean; out Result: boolean);
begin
  SendEvent([Sender, browser, frame, request, user_gesture, isRedirect, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnAddressChange(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
begin
  SendEvent([Sender, browser, frame, ToPChar(url)]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeClose(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnClose(Sender: TObject; const browser: ICefBrowser; var aAction: TCefCloseBrowserAction);
begin
  SendEvent([Sender, browser, @aAction]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const params: ICefContextMenuParams; const model: ICefMenuModel);
begin
  SendEvent([Sender, browser, frame, params, model]);
end;

procedure TCEFEvent.ChromiumCore_OnContextMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const params: ICefContextMenuParams; commandId: integer; eventFlags: cardinal; out Result: boolean);
begin
  SendEvent([Sender, browser, frame, params, commandId, eventFlags, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnContextMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.ChromiumCore_OnPdfPrintFinished(Sender: TObject; aResultOK: boolean);
begin
  SendEvent([Sender, aResultOK]);
end;

procedure TCEFEvent.ChromiumCore_OnKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out Result: boolean);
begin
  SendEvent([Sender, browser, event, osEvent, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnLoadStart(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  SendEvent([Sender, browser, frame, transitionType]);
end;

procedure TCEFEvent.ChromiumCore_OnLoadingStateChange(Sender: TObject; const browser: ICefBrowser; isLoading, canGoBack, canGoForward: boolean);
begin
  SendEvent([Sender, browser, isLoading, canGoBack, canGoForward]);
end;

procedure TCEFEvent.ChromiumCore_OnLoadingProgressChange(Sender: TObject; const browser: ICefBrowser; const progress: double);
begin
  SendEvent([Sender, browser, @progress]);
end;

procedure TCEFEvent.ChromiumCore_OnLoadError(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; errorCode: integer; const errorText, failedUrl: ustring);
begin
  SendEvent([Sender, browser, frame, errorCode, ToPChar(errorText), ToPChar(failedUrl)]);
end;

procedure TCEFEvent.ChromiumCore_OnLoadEnd(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: integer);
begin
  SendEvent([Sender, browser, frame, httpStatusCode]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeDownload(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem;
  const suggestedName: ustring; const callback: ICefBeforeDownloadCallback);
begin
  SendEvent([Sender, browser, downloadItem, ToPChar(suggestedName), callback]);
end;

procedure TCEFEvent.ChromiumCore_OnDownloadUpdated(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
begin
  SendEvent([Sender, browser, downloadItem, callback]);
end;

procedure TCEFEvent.ChromiumCore_OnZoomPctAvailable(Sender: TObject; const aZoomPct: double);
begin
  SendEvent([Sender, @aZoomPct]);
end;

procedure TCEFEvent.ChromiumCore_OnFullScreenModeChange(Sender: TObject; const browser: ICefBrowser; fullscreen: boolean);
begin
  SendEvent([Sender, browser, fullscreen]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforePopup(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl, targetFrameName: ustring;
  targetDisposition: TCefWindowOpenDisposition; userGesture: boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo;
  var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: boolean; var Result: boolean);
var
  beforePopupPtr: TBeforePopupPtr;
  windowInfoPtr: TEngWindowInfoPtr;
  browserSettingsPtr: TEngBrowserSettingsPtr;
begin
  // popup info
  beforePopupPtr.TargetUrl := ToPChar(targetUrl);
  beforePopupPtr.TargetFrameName := ToPChar(targetFrameName);
  beforePopupPtr.TargetDisposition := @(integer(targetDisposition));
  beforePopupPtr.UserGesture := @userGesture;
  // windowInfo
  windowInfoPtr := EngWindowInfoToGo(windowInfo);
  // settings
  browserSettingsPtr := EngBrowserSettingsToGo(settings);

  SendEvent([Sender, browser, frame, @beforePopupPtr, @popupFeatures, @windowInfoPtr, @client, @browserSettingsPtr, @extra_info, @noJavascriptAccess, @Result]);

  windowInfo := EngWindowInfoToPas(windowInfoPtr);
  settings := EngBrowserSettingsToPas(browserSettingsPtr);
end;

procedure TCEFEvent.ChromiumCore_OnOpenUrlFromTab(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring;
  targetDisposition: TCefWindowOpenDisposition; userGesture: boolean; out Result: boolean);
begin
  SendEvent([Sender, browser, frame, ToPChar(targetUrl), integer(targetDisposition), userGesture, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnTitleChange(Sender: TObject; const browser: ICefBrowser; const title: ustring);
begin
  SendEvent([Sender, browser, ToPChar(title)]);
end;

procedure TCEFEvent.ChromiumCore_OnRenderCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  MessageResult := aMessage.Result;
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.ChromiumCore_OnWidgetCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  MessageResult := aMessage.Result;
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.ChromiumCore_OnBrowserCompMsg(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  MessageResult := aMessage.Result;
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.ChromiumCore_OnRenderProcessTerminated(Sender: TObject; const browser: ICefBrowser; status: TCefTerminationStatus);
begin
  SendEvent([Sender, browser, status]);
end;

procedure TCEFEvent.ChromiumCore_OnRenderViewReady(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnScrollOffsetChanged(Sender: TObject; const browser: ICefBrowser; x, y: double);
begin
  SendEvent([Sender, browser, @x, @y]);
end;

procedure TCEFEvent.ChromiumCore_OnProcessMessageReceived(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  sourceProcess: TCefProcessId; const message: ICefProcessMessage; out Result: boolean);
begin
  // 为了和ApplicationCore事件一样，去除了Sender参数
  SendEvent([browser, frame, sourceProcess, message, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnFindResult(Sender: TObject; const browser: ICefBrowser; identifier, Count: integer; const selectionRect: PCefRect;
  activeMatchOrdinal: integer; finalUpdate: boolean);
begin
  SendEvent([Sender, browser, identifier, Count, selectionRect, activeMatchOrdinal, finalUpdate]);
end;

procedure TCEFEvent.ChromiumCore_OnCookieSet(Sender: TObject; aSuccess: boolean; aID: integer);
begin
  SendEvent([Sender, aSuccess, aID]);
end;

procedure TCEFEvent.ChromiumCore_OnCookiesDeleted(Sender: TObject; numDeleted: integer);
begin
  SendEvent([Sender, numDeleted]);
end;

procedure TCEFEvent.ChromiumCore_OnCookiesFlushed(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.ChromiumCore_OnCookiesVisited(Sender: TObject; const name_, Value, domain, path: ustring; secure, httponly, hasExpires: boolean;
  const creation, lastAccess, expires: TDateTime; Count, total, aID: integer; same_site: TCefCookieSameSite; priority: integer; var aDeleteCookie, aResult: boolean);
var
  cookiePtr: TCookiePtr;
begin
  cookiePtr.Name:= ToPChar(name_);
  cookiePtr.Value:= ToPChar(Value);
  cookiePtr.Domain:= ToPChar(domain);
  cookiePtr.Path:= ToPChar(path);
  cookiePtr.Secure:= @secure;
  cookiePtr.Httponly:= @httponly;
  cookiePtr.Creation:= @creation;
  cookiePtr.LastAccess:= @lastAccess;
  cookiePtr.HasExpires:= @hasExpires;
  cookiePtr.Expires:= @expires;
  cookiePtr.SameSite:= @same_site;
  cookiePtr.Priority:= @priority;

  SendEvent([Sender, @cookiePtr, Count, total, aID, @aDeleteCookie, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnCookieVisitorDestroyed(Sender: TObject; aID: integer);
begin
  SendEvent([Sender, aID]);
end;

procedure TCEFEvent.ChromiumCore_OnBeforeResourceLoad(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  const callback: ICefCallback; out Result: TCefReturnValue);
begin
  SendEvent([Sender, browser, frame, request, callback, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnResourceResponse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  const response: ICefResponse; out Result: boolean);
begin
  SendEvent([Sender, browser, frame, request, response, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnResourceRedirect(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest;
  const response: ICefResponse; var newUrl: ustring);
var
  pNewUrl: PChar;
begin
  pNewUrl := ToPChar(newUrl);
  SendEvent([Sender, browser, frame, request, response, @pNewUrl]);
  newUrl := PCharToUStr(pNewUrl);
  pNewUrl := nil;
end;


procedure TCEFEvent.ChromiumCore_OnResourceLoadComplete(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: int64);
begin
  SendEvent([Sender, browser, frame, request, response, integer(status), @receivedContentLength]);
end;

procedure TCEFEvent.ChromiumCore_OnFrameAttached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
begin
  SendEvent([Sender, browser, frame, reattached]);
end;

procedure TCEFEvent.ChromiumCore_OnFrameCreated(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.ChromiumCore_OnFrameDetached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.ChromiumCore_OnMainFrameChanged(Sender: TObject; const browser: ICefBrowser; const old_frame, new_frame: ICefFrame);
begin
  SendEvent([Sender, browser, old_frame, new_frame]);
end;

procedure TCEFEvent.ChromiumCore_OnDragEnter(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations; out Result: boolean);
begin
  SendEvent([Sender, browser, dragData, mask, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnDraggableRegionsChanged(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame;
  regionsCount: nativeuint; const regions: PCefDraggableRegionArray);
begin
  SendEvent([Sender, browser, frame, integer(regionsCount), regions]);
end;

procedure TCEFEvent.ChromiumCore_OnGetAuthCredentials(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; isProxy: boolean;
  const host: ustring; port: integer; const realm, scheme: ustring; const callback: ICefAuthCallback; out Result: boolean);
begin
  SendEvent([Sender, browser, ToPChar(originUrl), isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @Result]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionBeforeBackgroundBrowser(Sender: TObject; const extension: ICefExtension; const url: ustring;
  var client: ICefClient; var settings: TCefBrowserSettings; var aResult: boolean);
var
  browserSettingsPtr: TEngBrowserSettingsPtr;
begin
  browserSettingsPtr := EngBrowserSettingsToGo(settings);
  SendEvent([Sender, extension, ToPChar(url), @client, @browserSettingsPtr, @aResult]);
  settings := EngBrowserSettingsToPas(browserSettingsPtr);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionBeforeBrowser(Sender: TObject; const extension: ICefExtension; const browser, active_browser: ICefBrowser;
  index: integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var aResult: boolean);
var
  windowInfoPtr: TEngWindowInfoPtr;
  browserSettingsPtr: TEngBrowserSettingsPtr;
begin
  windowInfoPtr := EngWindowInfoToGo(windowInfo);
  browserSettingsPtr := EngBrowserSettingsToGo(settings);
  SendEvent([Sender, extension, browser, active_browser, index, ToPChar(url), active, @windowInfoPtr, @client, @browserSettingsPtr, @aResult]);
  windowInfo := EngWindowInfoToPas(windowInfoPtr);
  settings := EngBrowserSettingsToPas(browserSettingsPtr);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionCanAccessBrowser(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser;
  include_incognito: boolean; const target_browser: ICefBrowser; var aResult: boolean);
begin
  SendEvent([Sender, extension, browser, include_incognito, target_browser, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionGetActiveBrowser(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser;
  include_incognito: boolean; var aRsltBrowser: ICefBrowser);
begin
  SendEvent([Sender, extension, browser, include_incognito, @aRsltBrowser]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionGetExtensionResource(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser;
  const file_: ustring; const callback: ICefGetExtensionResourceCallback; var aResult: boolean);
begin
  SendEvent([Sender, extension, browser, ToPChar(file_), callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionLoaded(Sender: TObject; const extension: ICefExtension);
begin
  SendEvent([Sender, extension]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionLoadFailed(Sender: TObject; Result: TCefErrorcode);
begin
  SendEvent([Sender, Result]);
end;

procedure TCEFEvent.ChromiumCore_OnExtensionUnloaded(Sender: TObject; const extension: ICefExtension);
begin
  SendEvent([Sender, extension]);
end;

procedure TCEFEvent.ChromiumCore_OnPrintStart(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnPrintSettings(Sender: TObject; const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
begin
  SendEvent([Sender, browser, settings, longbool(getDefaults)]);
end;

procedure TCEFEvent.ChromiumCore_OnPrintDialog(Sender: TObject; const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, longbool(hasSelection), callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnPrintJob(Sender: TObject; const browser: ICefBrowser; const documentName, PDFFilePath: ustring;
  const callback: ICefPrintJobCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, ToPChar(documentName), ToPChar(PDFFilePath), callback, @aResult]);
end;

procedure TCEFEvent.ChromiumCore_OnPrintReset(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.ChromiumCore_OnGetPDFPaperSize(Sender: TObject; const browser: ICefBrowser; deviceUnitsPerInch: integer; var aResult: TCefSize);
begin
  SendEvent([Sender, browser, deviceUnitsPerInch, @aResult]);
end;

{== TCefCookieVisitor ==}
function TCEFEvent.CookieVisitor_OnCookieVisit(const Name, Value, domain, path: ustring; secure, httponly, hasExpires: boolean; const creation, lastAccess, expires: TDateTime;
  Count, total: integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: boolean): boolean;
var
  cookiePtr: TCookiePtr;
begin
  cookiePtr.Name:= ToPChar(Name);
  cookiePtr.Value:= ToPChar(Value);
  cookiePtr.Domain:= ToPChar(domain);
  cookiePtr.Path:= ToPChar(path);
  cookiePtr.Secure:= @secure;
  cookiePtr.Httponly:= @httponly;
  cookiePtr.Creation:= @creation;
  cookiePtr.LastAccess:= @lastAccess;
  cookiePtr.HasExpires:= @hasExpires;
  cookiePtr.Expires:= @expires;
  cookiePtr.SameSite:= @same_site;
  cookiePtr.Priority:= @priority;

  SendEvent([@cookiePtr, Count, total, @deleteCookie, @Result]);
end;

procedure TCEFEvent.SetCookieCallback_OnSetCookieComplete(success: boolean);
begin
  SendEvent([success]);
end;

procedure TCEFEvent.DeleteCookiesCallback_OnDeleteCookiesComplete(numDeleted: integer);
begin
  SendEvent([numDeleted]);
end;

// TCEFUrlRequestClientComponent
procedure TCEFEvent.UrlRequestClientComponent_OnRequestComplete(Sender: TObject; const request: ICefUrlRequest);
begin
  SendEvent([Sender, request]);
end;

procedure TCEFEvent.UrlRequestClientComponent_OnUploadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: int64);
begin
  SendEvent([Sender, request, @current, @total]);
end;

procedure TCEFEvent.UrlRequestClientComponent_OnDownloadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: int64);
begin
  SendEvent([Sender, request, @current, @total]);
end;

procedure TCEFEvent.UrlRequestClientComponent_OnDownloadData(Sender: TObject; const request: ICefUrlRequest; Data: Pointer; dataLength: nativeuint);
begin
  SendEvent([Sender, request, Data, dataLength]);
end;

procedure TCEFEvent.UrlRequestClientComponent_OnGetAuthCredentials(Sender: TObject; isProxy: boolean; const host: ustring; port: integer;
  const realm, scheme: ustring; const callback: ICefAuthCallback; var aResult: boolean);
begin
  SendEvent([Sender, isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @aResult]);
end;

procedure TCEFEvent.UrlRequestClientComponent_OnCreateURLRequest(Sender: TObject);
begin
  SendEvent([Sender]);
end;

{== window parent ==}
procedure TCEFEvent.CEFWindowEvent_OnEnter(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.CEFWindowEvent_OnExit(Sender: TObject);
begin
  SendEvent([Sender]);
end;

{== TCEFWindowComponent ==}
procedure TCEFEvent.WindowComponent_OnWindowCreated(const Sender: TObject; const window: ICefWindow);
begin
  SendEvent([Sender, window]);
end;

procedure TCEFEvent.WindowComponent_OnWindowDestroyed(const Sender: TObject; const window: ICefWindow);
begin
  SendEvent([Sender, window]);
end;

procedure TCEFEvent.WindowComponent_OnWindowActivationChanged(const Sender: TObject; const window: ICefWindow; active: boolean);
begin
  SendEvent([Sender, window, active]);
end;

procedure TCEFEvent.WindowComponent_OnGetParentWindow(const Sender: TObject; const window: ICefWindow; var is_menu, can_activate_menu: boolean; var aResult: ICefWindow);
begin
  SendEvent([Sender, window, @is_menu, @can_activate_menu, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnIsWindowModalDialog(const Sender: TObject; const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnGetInitialBounds(const Sender: TObject; const window: ICefWindow; var aResult: TCefRect);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnGetInitialShowState(const Sender: TObject; const window: ICefWindow; var aResult: TCefShowState);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnIsFrameless(const Sender: TObject; const window: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnWithStandardWindowButtons(const Sender: TObject; const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnGetTitlebarHeight(const Sender: TObject; const window_: ICefWindow; var titlebar_height: single; var aResult: boolean);
begin
  SendEvent([Sender, window_, @titlebar_height, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnCanResize(const Sender: TObject; const window: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnCanMaximize(const Sender: TObject; const window: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnCanMinimize(const Sender: TObject; const window: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnCanClose(const Sender: TObject; const window: ICefWindow; var aResult: boolean);
begin
  SendEvent([Sender, window, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnAccelerator(const Sender: TObject; const window: ICefWindow; command_id: integer; var aResult: boolean);
begin
  SendEvent([Sender, window, command_id, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnKeyEvent(const Sender: TObject; const window: ICefWindow; const event: TCefKeyEvent; var aResult: boolean);
begin
  SendEvent([Sender, window, @event, @aResult]);
end;

procedure TCEFEvent.WindowComponent_OnWindowFullscreenTransition(const Sender: TObject; const window_: ICefWindow; is_completed: boolean);
begin
  SendEvent([Sender, window_, is_completed]);
end;

procedure TCEFEvent.WindowComponent_OnWindowBoundsChanged(const Sender: TObject; const window_: ICefWindow; const new_bounds: TCefRect);
begin
  SendEvent([Sender, window_, @new_bounds]);
end;

procedure TCEFEvent.WindowComponent_OnWindowClosing(const Sender: TObject; const window_: ICefWindow);
begin
  SendEvent([Sender, window_]);
end;

{==CEFBrowserViewComponent==}
procedure TCEFEvent.BrowserViewComponent_OnBrowserCreated(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser_view, browser]);
end;

procedure TCEFEvent.BrowserViewComponent_OnBrowserDestroyed(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser_view, browser]);
end;

procedure TCEFEvent.BrowserViewComponent_OnGetDelegateForPopupBrowserView(const Sender: TObject; const browser_view: ICefBrowserView;
  const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate);
var
  browserSettingsPtr: TEngBrowserSettingsPtr;
begin
  browserSettingsPtr := EngBrowserSettingsToGo(settings);
  SendEvent([Sender, browser_view, @browserSettingsPtr, client, is_devtools, @aResult]);
end;

procedure TCEFEvent.BrowserViewComponent_OnPopupBrowserViewCreated(const Sender: TObject; const browser_view, popup_browser_view: ICefBrowserView;
  is_devtools: boolean; var aResult: boolean);
begin
  SendEvent([Sender, browser_view, popup_browser_view, is_devtools, @aResult]);
end;

procedure TCEFEvent.BrowserViewComponent_OnGetChromeToolbarType(const Sender: TObject; const browser_view: ICefBrowserView; var aChromeToolbarType: TCefChromeToolbarType);
begin
  SendEvent([Sender, browser_view, @aChromeToolbarType]);
end;

procedure TCEFEvent.BrowserViewComponent_OnUseFramelessWindowForPictureInPicture(const Sender: TObject; const browser_view: ICefBrowserView; var aResult: boolean);
begin
  SendEvent([Sender, browser_view, @aResult]);
end;

procedure TCEFEvent.BrowserViewComponent_OnGestureCommand(const Sender: TObject; const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean);
begin
  SendEvent([Sender, browser_view, gesture_command, @aResult]);
end;

{==TCEFViewComponent==}
procedure TCEFEvent.ViewComponent_OnGetPreferredSize(const Sender: TObject; const view: ICefView; var aResult: TCefSize);
begin
  SendEvent([Sender, view, @aResult]);
end;

procedure TCEFEvent.ViewComponent_OnGetMinimumSize(const Sender: TObject; const view: ICefView; var aResult: TCefSize);
begin
  SendEvent([Sender, view, @aResult]);
end;

procedure TCEFEvent.ViewComponent_OnGetMaximumSize(const Sender: TObject; const view: ICefView; var aResult: TCefSize);
begin
  SendEvent([Sender, view, @aResult]);
end;

procedure TCEFEvent.ViewComponent_OnGetHeightForWidth(const Sender: TObject; const view: ICefView; Width: integer; var aResult: integer);
begin
  SendEvent([Sender, view, Width, @aResult]);
end;

procedure TCEFEvent.ViewComponent_OnParentViewChanged(const Sender: TObject; const view: ICefView; added: boolean; const parent: ICefView);
begin
  SendEvent([Sender, view, added, parent]);
end;

procedure TCEFEvent.ViewComponent_OnChildViewChanged(const Sender: TObject; const view: ICefView; added: boolean; const child: ICefView);
begin
  SendEvent([Sender, view, added, child]);
end;

procedure TCEFEvent.ViewComponent_OnWindowChanged(const Sender: TObject; const view: ICefView; added: boolean);
begin
  SendEvent([Sender, view, added]);
end;

procedure TCEFEvent.ViewComponent_OnLayoutChanged(const Sender: TObject; const view: ICefView; new_bounds: TCefRect);
begin
  SendEvent([Sender, view, @new_bounds]);
end;

procedure TCEFEvent.ViewComponent_OnFocus(const Sender: TObject; const view: ICefView);
begin
  SendEvent([Sender, view]);
end;

procedure TCEFEvent.ViewComponent_OnBlur(const Sender: TObject; const view: ICefView);
begin
  SendEvent([Sender, view]);
end;

{==TCEFButtonComponent==}
procedure TCEFEvent.ButtonComponent_OnButtonPressed(const Sender: TObject; const button: ICefButton);
begin
  SendEvent([Sender, button]);
end;

procedure TCEFEvent.ButtonComponent_OnButtonStateChanged(const Sender: TObject; const button: ICefButton);
begin
  SendEvent([Sender, button]);
end;

{==TCEFMenuButtonComponent==}
procedure TCEFEvent.MenuButtonComponent_OnMenuButtonPressed(const Sender: TObject; const menu_button: ICefMenuButton; const screen_point: TCefPoint;
  const button_pressed_lock: ICefMenuButtonPressedLock);
begin
  SendEvent([Sender, menu_button, @screen_point, button_pressed_lock]);
end;

{==TCEFTextfieldComponent==}
procedure TCEFEvent.TextfieldComponent_OnTextfieldKeyEvent(const Sender: TObject; const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean);
begin
  SendEvent([Sender, textfield, @event, @aResult]);
end;

procedure TCEFEvent.TextfieldComponent_OnAfterUserAction(const Sender: TObject; const textfield: ICefTextfield);
begin
  SendEvent([Sender, textfield]);
end;

//DomVisitor
procedure TCEFEvent.DomVisitor_OnDomVisitor(const document: ICefDomDocument);
begin
  SendEvent([document]);
end;

// TMenuModelDelegate
procedure TCEFEvent.MenuModelDelegate_OnExecuteCommand(const menuModel: ICefMenuModel; commandId: integer; eventFlags: TCefEventFlags);
begin
  SendEvent([menuModel, commandId, eventFlags]);
end;

procedure TCEFEvent.MenuModelDelegate_OnMouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
begin
  SendEvent([menuModel, screenPoint]);
end;

procedure TCEFEvent.MenuModelDelegate_OnUnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  SendEvent([menuModel, isRTL]);
end;

procedure TCEFEvent.MenuModelDelegate_OnUnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  SendEvent([menuModel, isRTL]);
end;

procedure TCEFEvent.MenuModelDelegate_OnMenuWillShow(const menuModel: ICefMenuModel);
begin
  SendEvent([menuModel]);
end;

procedure TCEFEvent.MenuModelDelegate_OnMenuClosed(const menuModel: ICefMenuModel);
begin
  SendEvent([menuModel]);
end;

function TCEFEvent.MenuModelDelegate_OnFormatLabel(const menuModel: ICefMenuModel; var label_: ustring): boolean;
var
  RetLabel: PChar;
begin
  RetLabel := ToPChar(label_);
  SendEvent([menuModel, @RetLabel, @Result]);
  label_ := PCharToUStr(RetLabel);
end;

// TResourceHandler
function TCEFEvent.ResourceHandler_OnOpen(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
begin
  SendEvent([request, @handle_request, callback, @Result]);
end;

function TCEFEvent.ResourceHandler_OnProcessRequest(const request: ICefRequest; const callback: ICefCallback): boolean;
begin
  SendEvent([request, callback, @Result]);
end;

procedure TCEFEvent.ResourceHandler_OnGetResponseHeaders(const response: ICefResponse; out responseLength: int64; out redirectUrl: ustring);
var
  RetRedirectUrl: PChar;
begin
  RetRedirectUrl := ToPChar(redirectUrl);
  SendEvent([response, @responseLength, @RetRedirectUrl]);
  redirectUrl := PCharToUStr(RetRedirectUrl);
end;

function TCEFEvent.ResourceHandler_OnSkip(bytes_to_skip: int64; var bytes_skipped: int64; const callback: ICefResourceSkipCallback): boolean;
begin
  SendEvent([@bytes_to_skip, @bytes_skipped, callback, @Result]);
end;

function TCEFEvent.ResourceHandler_OnRead(const data_out: Pointer; bytes_to_read: integer; var bytes_read: integer; const callback: ICefResourceReadCallback): boolean;
begin
  SendEvent([data_out, bytes_to_read, @bytes_read, callback, @Result]);
end;

function TCEFEvent.ResourceHandler_OnReadResponse(const dataOut: Pointer; bytesToRead: integer; var bytesRead: integer; const callback: ICefCallback): boolean;
begin
  SendEvent([dataOut, bytesToRead, @bytesRead, callback, @Result]);
end;

procedure TCEFEvent.ResourceHandler_OnCancel();
begin
  SendEvent([]);
end;

// TRunFileDialogCallback
procedure TCEFEvent.RunFileDialogCallback_OnRunFileDialogDismissed(const filePaths: TStrings);
begin
  SendEvent([filePaths]);
end;

// TSchemeHandlerFactory
function TCEFEvent.SchemeHandlerFactory_OnNew(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;
begin
  SendEvent([browser, frame, ToPChar(schemeName), request, @Result]);
end;

// TV8ArrayBufferReleaseCallback
procedure TCEFEvent.V8ArrayBufferReleaseCallback_OnReleaseBuffer(buffer: Pointer);
begin
  SendEvent([buffer]);
end;

// TV8Handler
function TCEFEvent.V8Handler_OnExecute(const Name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([ToPChar(Name), object_, @arguments[0], Integer(Length(arguments)), @retval, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

// TV8Accessor
function TCEFEvent.V8Accessor_OnGet(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([ToPChar(Name), object_, @retval, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

function TCEFEvent.V8Accessor_OnSet(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([ToPChar(Name), object_, Value, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

// TV8Interceptor
function TCEFEvent.V8Interceptor_OnGetByName(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([ToPChar(Name), object_, @retval, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

function TCEFEvent.V8Interceptor_OnGetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([index, object_, @retval, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

function TCEFEvent.V8Interceptor_OnSetByName(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([ToPChar(Name), object_, Value, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

function TCEFEvent.V8Interceptor_OnSetByIndex(index: integer; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
var
  PException: PChar;
begin
  SendEvent([index, object_, Value, @PException, @Result]);
  if PException <> nil then
    Exception := PCharToUStr(PException);
  PException := nil;
end;

// TCEFWinControl
procedure TCEFEvent.WinControl_OnDragDrop(Sender, Source: TObject; X, Y: integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TCEFEvent.WinControl_OnDragOver(Sender, Source: TObject; X, Y: integer; State: TDragState; var Accept: boolean);
begin
  SendEvent([Sender, Source, X, Y, integer(State), Pointer(@Accept)]);
end;

procedure TCEFEvent.WinControl_OnStartDrag(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TCEFEvent.WinControl_OnEndDrag(Sender, Target: TObject; X, Y: integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

// TBufferPanel
{$IFDEF MSWINDOWS}
procedure TCEFEvent.BufferPanel_OnIMECancelComposition(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.BufferPanel_OnIMECommitText(Sender: TObject; const aText: ustring; const replacement_range: PCefRange; relative_cursor_pos: integer);
begin
  SendEvent([Sender, ToPChar(aText), replacement_range, relative_cursor_pos]);
end;

procedure TCEFEvent.BufferPanel_OnIMESetComposition(Sender: TObject; const aText: ustring; const underlines: TCefCompositionUnderlineDynArray; const replacement_range, selection_range: TCefRange);
begin
  SendEvent([Sender, ToPChar(aText), @underlines, integer(Length(underlines)), @replacement_range, @selection_range]);
end;

procedure TCEFEvent.BufferPanel_OnCustomTouch(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.BufferPanel_OnPointerDown(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.BufferPanel_OnPointerUp(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;

procedure TCEFEvent.BufferPanel_OnPointerUpdate(Sender: TObject; var aMessage: TMessage; var aHandled: boolean);
var
  MessageResult: LRESULT;
begin
  SendEvent([Sender, @aMessage, @MessageResult, @aHandled]);
  if MessageResult > 0 then
  begin
    aMessage.Result := MessageResult;
  end;
end;
{$ENDIF}

procedure TCEFEvent.BufferPanel_OnPaintParentBkg(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.BufferPanel_OnConstrainedResize(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
begin
  SendEvent([Sender, @MinWidth, @MinHeight, @MaxWidth, @MaxHeight]);
end;

procedure TCEFEvent.BufferPanel_OnContextPopup(Sender: TObject; MousePos: TPoint; var Handled: boolean);
begin
  SendEvent([Sender, Pointer(@MousePos), Pointer(@Handled)]);
end;

procedure TCEFEvent.BufferPanel_OnDblClick(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.BufferPanel_OnDragDrop(Sender, Source: TObject; X, Y: integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnDragOver(Sender, Source: TObject; X, Y: integer; State: TDragState; var Accept: boolean);
begin
  SendEvent([Sender, Source, X, Y, State, @Accept]);
end;

procedure TCEFEvent.BufferPanel_OnEndDock(Sender, Target: TObject; X, Y: integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnEndDrag(Sender, Target: TObject; X, Y: integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnGetSiteInfo(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: boolean);
begin
  SendEvent([Sender, DockClient, @InfluenceRect, @MousePos, @CanDock]);
end;

procedure TCEFEvent.BufferPanel_OnMouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: integer);
begin
  SendEvent([Sender, Button, PWord(@Shift)^, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnMouseMove(Sender: TObject; Shift: TShiftState; X, Y: integer);
begin
  SendEvent([Sender, PWord(@Shift)^, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnMouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: integer);
begin
  SendEvent([Sender, Button, PWord(@Shift)^, X, Y]);
end;

procedure TCEFEvent.BufferPanel_OnMouseWheel(Sender: TObject; Shift: TShiftState; WheelDelta: integer; MousePos: TPoint; var Handled: boolean);
begin
  SendEvent([Sender, PWord(@Shift)^, WheelDelta, @MousePos, @Handled]);
end;

procedure TCEFEvent.BufferPanel_OnStartDock(Sender: TObject; var DragObject: TDragDockObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TCEFEvent.BufferPanel_OnStartDrag(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

// TCEFServerComponent
procedure  TCEFEvent.ServerComponent_OnServerCreated(Sender: TObject; const server: ICefServer);
begin
  SendEvent([Sender, server]);
end;

procedure  TCEFEvent.ServerComponent_OnServerDestroyed(Sender: TObject; const server: ICefServer);
begin
  SendEvent([Sender, server]);
end;

procedure  TCEFEvent.ServerComponent_OnClientConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure  TCEFEvent.ServerComponent_OnClientDisconnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure  TCEFEvent.ServerComponent_OnHttpRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
begin
  SendEvent([Sender, server, connection_id, ToPChar(client_address), request]);
end;

procedure  TCEFEvent.ServerComponent_OnWebSocketRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
begin
  SendEvent([Sender, server, connection_id, ToPChar(client_address), request, callback]);
end;

procedure  TCEFEvent.ServerComponent_OnWebSocketConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure  TCEFEvent.ServerComponent_OnWebSocketMessage(Sender: TObject; const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
begin
  SendEvent([Sender, server, connection_id, data, data_size]);
end;

// TCEFSentinel
procedure TCEFEvent.Sentinel_OnClose(Sender: TObject);
begin
  SendEvent([Sender]);
end;

// TAccessibilityHandler
procedure TCEFEvent.AccessibilityHandler_OnTreeChange(Sender: TObject; const Value: ICefValue);
begin
  SendEvent([Sender, value]);
end;

procedure TCEFEvent.AccessibilityHandler_OnLocationChange(Sender: TObject; const Value: ICefValue);
begin
  SendEvent([Sender, value]);
end;

// TCustomResponseFilter
procedure TCEFEvent.CustomResponseFilter_OnInitFilter(Sender: TObject;  var aResult : boolean);
begin
  SendEvent([Sender, @aResult]);
end;

procedure TCEFEvent.CustomResponseFilter_OnFilter(Sender: TObject; data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size : NativeUInt; var data_out_written: NativeUInt; var aResult: TCefResponseFilterStatus);
begin
  SendEvent([Sender, data_in, uint32(data_in_size), @data_in_read, data_out, uint32(data_out_size), @data_out_written, @aResult]);
end;

// TTask
procedure TCEFEvent.Task_OnExecute();
begin
  SendEvent([]);
end;

end.
