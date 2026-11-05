//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uCEFEventCallback;

{$mode objfpc}{$H+}

{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Controls, Forms, ComCtrls, Menus, ExtCtrls, Classes, SysUtils, Graphics, LCLType, ImgList, FPImage, Messages,
  // cef
  uCEFInterfaces, uCEFTypes, uCEFPreferenceRegistrar, uCEFSchemeRegistrar,
  uTools, uCEFRecordStruct, uArrayWrap;

const
  // CALL 最长参数数
  CALL_MAX_PARAM = 18;

type
  // 基础事件回调函数
  TCEFEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TCEFRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;
  // 特殊的消息事件回调
  TCEFMessageCallbackPtr = function(f: Pointer; msg: Pointer): Pointer; extdecl;

var
  GCEFEventCallbackPtr: TCEFEventCallbackPtr;
  GCEFRemoveEventCallbackPtr: TCEFRemoveEventCallPtr;
  GCEFMessageCallbackPtr: TCEFMessageCallbackPtr;

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
    // ----------------- 事件定义 -------------------------------
    procedure TBufferPanel_TConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
    procedure TBufferPanel_TContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
    procedure TBufferPanel_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
    procedure TBufferPanel_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure TBufferPanel_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
    procedure TBufferPanel_TGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
    procedure TBufferPanel_TMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure TBufferPanel_TMouseMoveEvent(Sender: TObject; Shift: TShiftState; X, Y: Integer);
    procedure TBufferPanel_TMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
    procedure TBufferPanel_TNotifyEvent(Sender: TObject);
    procedure TBufferPanel_TOnHandledMessageEvent(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
    procedure TBufferPanel_TOnIMECommitTextEvent(Sender: TObject; const aText : ustring; const replacement_range : PCefRange; relative_cursor_pos : integer);
    procedure TBufferPanel_TOnIMESetCompositionEvent(Sender: TObject; const aText : ustring; const underlines : TCefCompositionUnderlineDynArray; const replacement_range, selection_range : TCefRange);
    procedure TBufferPanel_TStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
    procedure TBufferPanel_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);
    procedure TCEFBrowserViewComponent_TOnBrowserCreatedEvent(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure TCEFBrowserViewComponent_TOnBrowserDestroyedEvent(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure TCEFBrowserViewComponent_TOnGestureCommandEvent(const Sender: TObject; const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult : boolean);
    procedure TCEFBrowserViewComponent_TOnGetBrowserRuntimeStyleEvent(const Sender: TObject; var aResult : TCefRuntimeStyle);
    procedure TCEFBrowserViewComponent_TOnGetChromeToolbarTypeEvent(const Sender: TObject; const browser_view: ICefBrowserView; var aChromeToolbarType: TCefChromeToolbarType);
    procedure TCEFBrowserViewComponent_TOnGetDelegateForPopupBrowserViewEvent(const Sender: TObject; const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult : ICefBrowserViewDelegate);
    procedure TCEFBrowserViewComponent_TOnPopupBrowserViewCreatedEvent(const Sender: TObject; const browser_view, popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult : boolean);
    procedure TCEFBrowserViewComponent_TOnUseFramelessWindowForPictureInPicture(const Sender: TObject; const browser_view: ICefBrowserView; var aResult : boolean);
    procedure TCEFButtonComponent_TOnButtonPressedEvent(const Sender: TObject; const button: ICefButton);
    procedure TCEFButtonComponent_TOnButtonStateChangedEvent(const Sender: TObject; const button: ICefButton);
    procedure TCEFMenuButtonComponent_TOnMenuButtonPressedEvent(const Sender: TObject; const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);
    procedure TCEFSentinel_TNotifyEvent(Sender: TObject);
    procedure TCEFServerComponent_TOnClientConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure TCEFServerComponent_TOnClientDisconnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure TCEFServerComponent_TOnHttpRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
    procedure TCEFServerComponent_TOnServerCreated(Sender: TObject; const server: ICefServer);
    procedure TCEFServerComponent_TOnServerDestroyed(Sender: TObject; const server: ICefServer);
    procedure TCEFServerComponent_TOnWebSocketConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
    procedure TCEFServerComponent_TOnWebSocketMessage(Sender: TObject; const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
    procedure TCEFServerComponent_TOnWebSocketRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
    procedure TCEFTextfieldComponent_TOnAfterUserActionEvent(const Sender: TObject; const textfield: ICefTextfield);
    procedure TCEFTextfieldComponent_TOnTextfieldKeyEventEvent(const Sender: TObject; const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult : boolean);
    procedure TCEFTimerWorkScheduler_TOnAllowEvent(Sender: TObject; var allow : boolean);
    procedure TCEFUrlRequestClientComponent_TNotifyEvent(Sender: TObject);
    procedure TCEFUrlRequestClientComponent_TOnDownloadData(Sender: TObject; const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
    procedure TCEFUrlRequestClientComponent_TOnDownloadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
    procedure TCEFUrlRequestClientComponent_TOnGetAuthCredentials(Sender: TObject; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; var aResult : Boolean);
    procedure TCEFUrlRequestClientComponent_TOnRequestComplete(Sender: TObject; const request: ICefUrlRequest);
    procedure TCEFUrlRequestClientComponent_TOnUploadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
    procedure TCEFViewComponent_TOnBlurEvent(const Sender: TObject; const view: ICefView);
    procedure TCEFViewComponent_TOnChildViewChangedEvent(const Sender: TObject; const view: ICefView; added: boolean; const child: ICefView);
    procedure TCEFViewComponent_TOnFocusEvent(const Sender: TObject; const view: ICefView);
    procedure TCEFViewComponent_TOnGetHeightForWidthEvent(const Sender: TObject; const view: ICefView; width: Integer; var aResult: Integer);
    procedure TCEFViewComponent_TOnGetMaximumSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure TCEFViewComponent_TOnGetMinimumSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure TCEFViewComponent_TOnGetPreferredSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
    procedure TCEFViewComponent_TOnLayoutChangedEvent(const Sender: TObject; const view: ICefView; new_bounds: TCefRect);
    procedure TCEFViewComponent_TOnParentViewChangedEvent(const Sender: TObject; const view: ICefView; added: boolean; const parent: ICefView);
    procedure TCEFViewComponent_TOnThemeChangedEvent(const Sender: TObject; const view: ICefView);
    procedure TCEFViewComponent_TOnWindowChangedEvent(const Sender: TObject; const view: ICefView; added: boolean);
    procedure TCEFWinControl_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
    procedure TCEFWinControl_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure TCEFWinControl_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
    procedure TCEFWinControl_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);
    procedure TCEFWindowComponent_TOnAcceleratorEvent(const Sender: TObject; const window_: ICefWindow; command_id: Integer; var aResult : boolean);
    procedure TCEFWindowComponent_TOnAcceptsFirstMouseEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefState);
    procedure TCEFWindowComponent_TOnCanCloseEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnCanMaximizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnCanMinimizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnCanResizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnGetInitialBoundsEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefRect);
    procedure TCEFWindowComponent_TOnGetInitialShowStateEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefShowState);
    procedure TCEFWindowComponent_TOnGetParentWindowEvent(const Sender: TObject; const window_: ICefWindow; var is_menu, can_activate_menu: boolean; var aResult : ICefWindow);
    procedure TCEFWindowComponent_TOnGetTitlebarHeightEvent(const Sender: TObject; const window_: ICefWindow; var titlebar_height: Single; var aResult : boolean);
    procedure TCEFWindowComponent_TOnGetWindowRuntimeStyleEvent(const Sender: TObject; var aResult : TCefRuntimeStyle);
    procedure TCEFWindowComponent_TOnIsFramelessEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnIsWindowModalDialogEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TCEFWindowComponent_TOnThemeColorsChangedEvent(const Sender: TObject; const window_: ICefWindow; chrome_theme: Integer);
    procedure TCEFWindowComponent_TOnWindowActivationChangedEvent(const Sender: TObject; const window_: ICefWindow; active: boolean);
    procedure TCEFWindowComponent_TOnWindowBoundsChangedEvent(const Sender: TObject; const window_: ICefWindow; const new_bounds: TCefRect);
    procedure TCEFWindowComponent_TOnWindowClosingEvent(const Sender: TObject; const window_: ICefWindow);
    procedure TCEFWindowComponent_TOnWindowCreatedEvent(const Sender: TObject; const window_: ICefWindow);
    procedure TCEFWindowComponent_TOnWindowDestroyedEvent(const Sender: TObject; const window_: ICefWindow);
    procedure TCEFWindowComponent_TOnWindowFullscreenTransitionEvent(const Sender: TObject; const window_: ICefWindow; is_completed: boolean);
    procedure TCEFWindowComponent_TOnWindowKeyEventEvent(const Sender: TObject; const window_: ICefWindow; const event: TCefKeyEvent; var aResult : boolean);
    procedure TCEFWindowComponent_TOnWithStandardWindowButtonsEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
    procedure TChromiumCore_TNotifyEvent(Sender: TObject);
    procedure TChromiumCore_TOnAcceleratedPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo);
    procedure TChromiumCore_TOnAddressChange(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
    procedure TChromiumCore_TOnAfterCreated(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnAudioStreamErrorEvent(Sender: TObject; const browser: ICefBrowser; const message_: ustring);
    procedure TChromiumCore_TOnAudioStreamPacketEvent(Sender: TObject; const browser: ICefBrowser; const data : PPSingle; frames: integer; pts: int64);
    procedure TChromiumCore_TOnAudioStreamStartedEvent(Sender: TObject; const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
    procedure TChromiumCore_TOnAudioStreamStoppedEvent(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnAutoResize(Sender: TObject; const browser: ICefBrowser; const new_size: PCefSize; out Result: Boolean);
    procedure TChromiumCore_TOnBeforeBackgroundBrowserEvent(Sender: TObject; const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings; var aResult : boolean);
    procedure TChromiumCore_TOnBeforeBrowse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture, isRedirect: Boolean; out Result: Boolean);
    procedure TChromiumCore_TOnBeforeBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser, active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var aResult : boolean);
    procedure TChromiumCore_TOnBeforeClose(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnBeforeContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
    procedure TChromiumCore_TOnBeforeDevToolsPopup(Sender: TObject; const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean);
    procedure TChromiumCore_TOnBeforeDownload(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback; var aResult : boolean);
    procedure TChromiumCore_TOnBeforePopup(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl, targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean; var Result: Boolean);
    procedure TChromiumCore_TOnBeforeResourceLoad(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback; out Result: TCefReturnValue);
    procedure TChromiumCore_TOnBeforeUnloadDialog(Sender: TObject; const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback; out Result: Boolean);
    procedure TChromiumCore_TOnCanAccessBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser; var aResult : boolean);
    procedure TChromiumCore_TOnCanDownloadEvent(Sender: TObject; const browser: ICefBrowser; const url, request_method: ustring; var aResult: boolean);
    procedure TChromiumCore_TOnCanSaveCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie; var aResult : boolean);
    procedure TChromiumCore_TOnCanSendCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie; var aResult: boolean);
    procedure TChromiumCore_TOnCertificateError(Sender: TObject; const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback; out Result: Boolean);
    procedure TChromiumCore_TOnChromeCommandEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition; var aResult: boolean);
    procedure TChromiumCore_TOnClose(Sender: TObject; const browser: ICefBrowser; var aAction : TCefCloseBrowserAction);
    procedure TChromiumCore_TOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
    procedure TChromiumCore_TOnConsoleMessage(Sender: TObject; const browser: ICefBrowser; level: TCefLogSeverity; const message, source: ustring; line: Integer; out Result: Boolean);
    procedure TChromiumCore_TOnContextMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags; out Result: Boolean);
    procedure TChromiumCore_TOnContextMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure TChromiumCore_TOnCookieSet(Sender: TObject; aSuccess : boolean; aID : integer);
    procedure TChromiumCore_TOnCookieVisitorDestroyed(Sender: TObject; aID : integer);
    procedure TChromiumCore_TOnCookiesDeletedEvent(Sender: TObject; numDeleted : integer);
    procedure TChromiumCore_TOnCookiesVisited(Sender: TObject; const name_, value, domain, path: ustring; secure, httponly, hasExpires: Boolean; const creation, lastAccess, expires: TDateTime; count, total, aID : Integer; same_site : TCefCookieSameSite; priority : TCefCookiePriority; var aDeleteCookie, aResult : Boolean);
    procedure TChromiumCore_TOnCursorChange(Sender: TObject; const browser: ICefBrowser; cursor_: TCefCursorHandle; cursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult : boolean);
    procedure TChromiumCore_TOnDevToolsAgentAttachedEvent(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnDevToolsAgentDetachedEvent(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnDevToolsEventEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: ICefValue);
    procedure TChromiumCore_TOnDevToolsEventRawEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt);
    procedure TChromiumCore_TOnDevToolsMessageEvent(Sender: TObject; const browser: ICefBrowser; const message_: ICefValue; var aHandled: boolean);
    procedure TChromiumCore_TOnDevToolsMethodRawResultEvent(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt);
    procedure TChromiumCore_TOnDevToolsMethodResultEvent(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const result: ICefValue);
    procedure TChromiumCore_TOnDevToolsRawMessageEvent(Sender: TObject; const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean);
    procedure TChromiumCore_TOnDialogClosed(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnDismissPermissionPromptEvent(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult);
    procedure TChromiumCore_TOnDocumentAvailableInMainFrame(Sender: Tobject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnDownloadImageFinishedEvent(Sender: TObject; const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage);
    procedure TChromiumCore_TOnDownloadUpdated(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
    procedure TChromiumCore_TOnDragEnter(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations; out Result: Boolean);
    procedure TChromiumCore_TOnDraggableRegionsChanged(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
    procedure TChromiumCore_TOnExecuteTaskOnCefThread(Sender: TObject; aTaskID : cardinal);
    procedure TChromiumCore_TOnExtensionLoadFailedEvent(Sender: TObject; result: TCefErrorcode);
    procedure TChromiumCore_TOnExtensionLoadedEvent(Sender: TObject; const extension: ICefExtension);
    procedure TChromiumCore_TOnExtensionUnloadedEvent(Sender: TObject; const extension: ICefExtension);
    procedure TChromiumCore_TOnFavIconUrlChange(Sender: TObject; const browser: ICefBrowser; const iconUrls: TStrings);
    procedure TChromiumCore_TOnFileDialog(Sender: TObject; const browser: ICefBrowser; mode: TCefFileDialogMode; const title, defaultFilePath: ustring; const acceptFilters, accept_extensions, accept_descriptions: TStrings; const callback: ICefFileDialogCallback; var Result: Boolean);
    procedure TChromiumCore_TOnFindResult(Sender: TObject; const browser: ICefBrowser; identifier, count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
    procedure TChromiumCore_TOnFrameAttached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
    procedure TChromiumCore_TOnFrameCreated(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure TChromiumCore_TOnFrameDetached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure TChromiumCore_TOnFullScreenModeChange(Sender: TObject; const browser: ICefBrowser; fullscreen: Boolean);
    procedure TChromiumCore_TOnGetAccessibilityHandler(Sender: TObject; var aAccessibilityHandler : ICefAccessibilityHandler);
    procedure TChromiumCore_TOnGetActiveBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser : ICefBrowser);
    procedure TChromiumCore_TOnGetAudioParametersEvent(Sender: TObject; const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
    procedure TChromiumCore_TOnGetAuthCredentials(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; out Result: Boolean);
    procedure TChromiumCore_TOnGetExtensionResourceEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback; var aResult : boolean);
    procedure TChromiumCore_TOnGetPDFPaperSizeEvent(Sender: TObject; const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult : TCefSize);
    procedure TChromiumCore_TOnGetResourceHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler : ICefResourceHandler);
    procedure TChromiumCore_TOnGetResourceRequestHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aExternalResourceRequestHandler : ICefResourceRequestHandler);
    procedure TChromiumCore_TOnGetResourceResponseFilter(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: ICefResponseFilter);
    procedure TChromiumCore_TOnGetRootScreenRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect; out Result: Boolean);
    procedure TChromiumCore_TOnGetScreenInfo(Sender: TObject; const browser: ICefBrowser; var screenInfo: TCefScreenInfo; out Result: Boolean);
    procedure TChromiumCore_TOnGetScreenPoint(Sender: TObject; const browser: ICefBrowser; viewX, viewY: Integer; var screenX, screenY: Integer; out Result: Boolean);
    procedure TChromiumCore_TOnGetTouchHandleSize(Sender: TObject; const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
    procedure TChromiumCore_TOnGetViewRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect);
    procedure TChromiumCore_TOnGotFocus(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnIMECompositionRangeChanged(Sender: TObject; const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect);
    procedure TChromiumCore_TOnIsChromeAppMenuItemEnabledEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
    procedure TChromiumCore_TOnIsChromeAppMenuItemVisibleEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
    procedure TChromiumCore_TOnIsChromePageActionIconVisibleEvent(Sender: TObject; icon_type: TCefChromePageActionIconType; var aResult: boolean);
    procedure TChromiumCore_TOnIsChromeToolbarButtonVisibleEvent(Sender: TObject; button_type: TCefChromeToolbarButtonType; var aResult: boolean);
    procedure TChromiumCore_TOnJsdialog(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText, defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean; out Result: Boolean);
    procedure TChromiumCore_TOnKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out Result: Boolean);
    procedure TChromiumCore_TOnLoadEnd(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
    procedure TChromiumCore_TOnLoadError(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);
    procedure TChromiumCore_TOnLoadStart(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
    procedure TChromiumCore_TOnLoadingProgressChange(Sender: TObject; const browser: ICefBrowser; const progress: double);
    procedure TChromiumCore_TOnLoadingStateChange(Sender: TObject; const browser: ICefBrowser; isLoading, canGoBack, canGoForward: Boolean);
    procedure TChromiumCore_TOnMainFrameChanged(Sender: TObject; const browser: ICefBrowser; const old_frame, new_frame: ICefFrame);
    procedure TChromiumCore_TOnMediaAccessChange(Sender: TObject; const browser: ICefBrowser; has_video_access, has_audio_access: boolean);
    procedure TChromiumCore_TOnMediaRouteCreateFinishedEvent(Sender: TObject; result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
    procedure TChromiumCore_TOnMediaSinkDeviceInfoEvent(Sender: TObject; const ip_address: ustring; port: integer; const model_name: ustring);
    procedure TChromiumCore_TOnNavigationVisitorResultAvailableEvent(Sender: TObject; const entry: ICefNavigationEntry; current: Boolean; index, total: Integer; var aResult : boolean);
    procedure TChromiumCore_TOnOpenUrlFromTab(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; out Result: Boolean);
    procedure TChromiumCore_TOnPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width, height: Integer);
    procedure TChromiumCore_TOnPdfPrintFinishedEvent(Sender: TObject; aResultOK : boolean);
    procedure TChromiumCore_TOnPopupShow(Sender: TObject; const browser: ICefBrowser; show: Boolean);
    procedure TChromiumCore_TOnPopupSize(Sender: TObject; const browser: ICefBrowser; const rect: PCefRect);
    procedure TChromiumCore_TOnPreKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean; out Result: Boolean);
    procedure TChromiumCore_TOnPrefsAvailableEvent(Sender: TObject; aResultOK : boolean);
    procedure TChromiumCore_TOnPrintDialogEvent(Sender: TObject; const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult : boolean);
    procedure TChromiumCore_TOnPrintJobEvent(Sender: TObject; const browser: ICefBrowser; const documentName, PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult : boolean);
    procedure TChromiumCore_TOnPrintResetEvent(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnPrintSettingsEvent(Sender: TObject; const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
    procedure TChromiumCore_TOnPrintStartEvent(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnProcessMessageReceived(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message: ICefProcessMessage; out Result: Boolean);
    procedure TChromiumCore_TOnProtocolExecution(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean);
    procedure TChromiumCore_TOnQuickMenuCommandEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags; var aResult: Boolean);
    procedure TChromiumCore_TOnQuickMenuDismissedEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
    procedure TChromiumCore_TOnRenderProcessResponsive(Sender: Tobject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnRenderProcessTerminated(Sender: TObject; const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring);
    procedure TChromiumCore_TOnRenderProcessUnresponsive(Sender: Tobject; const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback; var aResult: boolean);
    procedure TChromiumCore_TOnRenderViewReady(Sender: Tobject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnRequestContextInitialized(Sender: TObject; const request_context: ICefRequestContext);
    procedure TChromiumCore_TOnRequestMediaAccessPermissionEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback; var aResult: boolean);
    procedure TChromiumCore_TOnResetDialogState(Sender: TObject; const browser: ICefBrowser);
    procedure TChromiumCore_TOnResolvedIPsAvailableEvent(Sender: TObject; result: TCefErrorCode; const resolvedIps: TStrings);
    procedure TChromiumCore_TOnResourceLoadComplete(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64);
    procedure TChromiumCore_TOnResourceRedirect(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
    procedure TChromiumCore_TOnResourceResponse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: Boolean);
    procedure TChromiumCore_TOnRouteMessageReceivedEvent(Sender: TObject; const route: ICefMediaRoute; const message_: ustring);
    procedure TChromiumCore_TOnRouteStateChangedEvent(Sender: TObject; const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
    procedure TChromiumCore_TOnRoutesEvent(Sender: TObject; const routes: TCefMediaRouteArray);
    procedure TChromiumCore_TOnRunContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback; var aResult : Boolean);
    procedure TChromiumCore_TOnRunQuickMenuEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; location: TCefPoint; size: TCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback; var aResult : Boolean);
    procedure TChromiumCore_TOnScrollOffsetChanged(Sender: TObject; const browser: ICefBrowser; x, y: Double);
    procedure TChromiumCore_TOnSelectClientCertificate(Sender: TObject; const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback; var aResult : boolean);
    procedure TChromiumCore_TOnSetFocus(Sender: TObject; const browser: ICefBrowser; source: TCefFocusSource; out Result: Boolean);
    procedure TChromiumCore_TOnShowPermissionPromptEvent(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback; var aResult: boolean);
    procedure TChromiumCore_TOnSinksEvent(Sender: TObject; const sinks: TCefMediaSinkArray);
    procedure TChromiumCore_TOnStartDragging(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x, y: Integer; out Result: Boolean);
    procedure TChromiumCore_TOnStatusMessage(Sender: TObject; const browser: ICefBrowser; const value: ustring);
    procedure TChromiumCore_TOnTakeFocus(Sender: TObject; const browser: ICefBrowser; next: Boolean);
    procedure TChromiumCore_TOnTextResultAvailableEvent(Sender: TObject; const aText : ustring);
    procedure TChromiumCore_TOnTextSelectionChanged(Sender: TObject; const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
    procedure TChromiumCore_TOnTitleChange(Sender: TObject; const browser: ICefBrowser; const title: ustring);
    procedure TChromiumCore_TOnTooltip(Sender: TObject; const browser: ICefBrowser; var text: ustring; out Result: Boolean);
    procedure TChromiumCore_TOnTouchHandleStateChanged(Sender: TObject; const browser: ICefBrowser; const state: TCefTouchHandleState);
    procedure TChromiumCore_TOnUpdateDragCursor(Sender: TObject; const browser: ICefBrowser; operation: TCefDragOperation);
    procedure TChromiumCore_TOnVirtualKeyboardRequested(Sender: TObject; const browser: ICefBrowser; input_mode: TCefTextInpuMode);
    procedure TChromiumCore_TOnZoomPctAvailable(Sender: TObject; const aZoomPct : double);
    procedure TChromiumWindow_TNotifyEvent(Sender: TObject);
    procedure TCustomAccessibilityHandler_TOnAccessibilityEvent(Sender: TObject; const value: ICefValue);
    procedure TCustomResponseFilter_TOnFilterEvent(Sender: TObject; data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size : NativeUInt; var data_out_written: NativeUInt; var aResult : TCefResponseFilterStatus);
    procedure TCustomResponseFilter_TOnInitFilterEvent(Sender: TObject; var aResult : boolean);
    procedure TEngAccessibilityHandler_TOnAccessibilityAccessibilityLocationChangeEvent(const value: ICefValue);
    procedure TEngAccessibilityHandler_TOnAccessibilityAccessibilityTreeChangeEvent(const value: ICefValue);
    procedure TEngApp_TOnAppBeforeCommandLineProcessingEvent(const processType: ustring; const commandLine: ICefCommandLine);
    procedure TEngApp_TOnAppGetBrowserProcessHandlerEvent(var aHandler: ICefBrowserProcessHandler);
    procedure TEngApp_TOnAppGetRenderProcessHandlerEvent(var aHandler: ICefRenderProcessHandler);
    procedure TEngApp_TOnAppGetResourceBundleHandlerEvent(var aHandler: ICefResourceBundleHandler);
    procedure TEngApp_TOnAppRegisterCustomSchemesEvent(const registrar: TCefSchemeRegistrarRef);
    procedure TEngAudioHandler_TOnAudioAudioStreamErrorEvent(const browser: ICefBrowser; const message_: ustring);
    procedure TEngAudioHandler_TOnAudioAudioStreamPacketEvent(const browser: ICefBrowser; const data: PPSingle; frames: integer; pts: int64);
    procedure TEngAudioHandler_TOnAudioAudioStreamStartedEvent(const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
    procedure TEngAudioHandler_TOnAudioAudioStreamStoppedEvent(const browser: ICefBrowser);
    procedure TEngAudioHandler_TOnAudioGetAudioParametersEvent(const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessAlreadyRunningAppRelaunchEvent(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessBeforeChildProcessLaunchEvent(const commandLine: ICefCommandLine);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessContextInitializedEvent();
    procedure TEngBrowserProcessHandler_TOnBrowserProcessGetDefaultClientEvent(var aClient: ICefClient);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessGetDefaultRequestContextHandlerEvent(var aRequestContextHandler: ICefRequestContextHandler);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessRegisterCustomPreferencesEvent(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar);
    procedure TEngBrowserProcessHandler_TOnBrowserProcessScheduleMessagePumpWorkEvent(const delayMs: Int64);
    procedure TEngBrowserViewDelegate_TOnBrowserViewBrowserCreatedEvent(const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure TEngBrowserViewDelegate_TOnBrowserViewBrowserDestroyedEvent(const browser_view: ICefBrowserView; const browser: ICefBrowser);
    procedure TEngBrowserViewDelegate_TOnBrowserViewGestureCommandEvent(const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean);
    procedure TEngBrowserViewDelegate_TOnBrowserViewGetBrowserRuntimeStyleEvent(var aResult: TCefRuntimeStyle);
    procedure TEngBrowserViewDelegate_TOnBrowserViewGetChromeToolbarTypeEvent(const browser_view: ICefBrowserView; var aResult: TCefChromeToolbarType);
    procedure TEngBrowserViewDelegate_TOnBrowserViewGetDelegateForPopupBrowserViewEvent(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate);
    procedure TEngBrowserViewDelegate_TOnBrowserViewPopupBrowserViewCreatedEvent(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean);
    procedure TEngBrowserViewDelegate_TOnBrowserViewUseFramelessWindowForPictureInPictureEvent(const browser_view: ICefBrowserView; var aResult: boolean);
    procedure TEngButtonDelegate_TOnButtonButtonPressedEvent(const button: ICefButton);
    procedure TEngButtonDelegate_TOnButtonButtonStateChangedEvent(const button: ICefButton);
    procedure TEngClient_TOnClientGetAudioHandlerEvent(var aHandler: ICefAudioHandler);
    procedure TEngClient_TOnClientGetCommandHandlerEvent(var aHandler: ICefCommandHandler);
    procedure TEngClient_TOnClientGetContextMenuHandlerEvent(var aHandler: ICefContextMenuHandler);
    procedure TEngClient_TOnClientGetDialogHandlerEvent(var aHandler: ICefDialogHandler);
    procedure TEngClient_TOnClientGetDisplayHandlerEvent(var aHandler: ICefDisplayHandler);
    procedure TEngClient_TOnClientGetDownloadHandlerEvent(var aHandler: ICefDownloadHandler);
    procedure TEngClient_TOnClientGetDragHandlerEvent(var aHandler: ICefDragHandler);
    procedure TEngClient_TOnClientGetFindHandlerEvent(var aHandler: ICefFindHandler);
    procedure TEngClient_TOnClientGetFocusHandlerEvent(var aHandler: ICefFocusHandler);
    procedure TEngClient_TOnClientGetFrameHandlerEvent(var aHandler: ICefFrameHandler);
    procedure TEngClient_TOnClientGetJsdialogHandlerEvent(var aHandler: ICefJsdialogHandler);
    procedure TEngClient_TOnClientGetKeyboardHandlerEvent(var aHandler: ICefKeyboardHandler);
    procedure TEngClient_TOnClientGetLifeSpanHandlerEvent(var aHandler: ICefLifeSpanHandler);
    procedure TEngClient_TOnClientGetLoadHandlerEvent(var aHandler: ICefLoadHandler);
    procedure TEngClient_TOnClientGetPermissionHandlerEvent(var aHandler: ICefPermissionHandler);
    procedure TEngClient_TOnClientGetPrintHandlerEvent(var aHandler: ICefPrintHandler);
    procedure TEngClient_TOnClientGetRenderHandlerEvent(var aHandler: ICefRenderHandler);
    procedure TEngClient_TOnClientGetRequestHandlerEvent(var aHandler: ICefRequestHandler);
    function TEngClient_TOnClientProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message_: ICefProcessMessage): Boolean;
    function TEngCommandHandler_TOnCommandChromeCommandEvent(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean;
    function TEngCommandHandler_TOnCommandIsChromeAppMenuItemEnabledEvent(const browser: ICefBrowser; command_id: integer): boolean;
    function TEngCommandHandler_TOnCommandIsChromeAppMenuItemVisibleEvent(const browser: ICefBrowser; command_id: integer): boolean;
    function TEngCommandHandler_TOnCommandIsChromePageActionIconVisibleEvent(icon_type: TCefChromePageActionIconType): boolean;
    function TEngCommandHandler_TOnCommandIsChromeToolbarButtonVisibleEvent(button_type: TCefChromeToolbarButtonType): boolean;
    procedure TEngCompletionCallback_TOnCompletionCallbackCompleteEvent();
    procedure TEngContextMenuHandler_TOnContextMenuBeforeContextMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
    function TEngContextMenuHandler_TOnContextMenuContextMenuCommandEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags): Boolean;
    procedure TEngContextMenuHandler_TOnContextMenuContextMenuDismissedEvent(const browser: ICefBrowser; const frame: ICefFrame);
    function TEngContextMenuHandler_TOnContextMenuQuickMenuCommandEvent(const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags): boolean;
    procedure TEngContextMenuHandler_TOnContextMenuQuickMenuDismissedEvent(const browser: ICefBrowser; const frame: ICefFrame);
    function TEngContextMenuHandler_TOnContextMenuRunContextMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback): Boolean;
    function TEngContextMenuHandler_TOnContextMenuRunQuickMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; location: PCefPoint; size: PCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback): boolean;
    function TEngCookieAccessFilter_TOnCookieAccessFilterCanSaveCookieEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie): boolean;
    function TEngCookieAccessFilter_TOnCookieAccessFilterCanSendCookieEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie): boolean;
    function TEngCookieVisitor_TOnCookieVisitorVisitEvent(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean;
    procedure TEngDeleteCookiesCallback_TOnDeleteCookiesCallbackCompleteEvent(numDeleted: Integer);
    procedure TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentAttachedEvent(const browser: ICefBrowser);
    procedure TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentDetachedEvent(const browser: ICefBrowser);
    procedure TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsEvent(const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt);
    procedure TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMessageEvent(const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean);
    procedure TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMethodResultEvent(const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt);
    function TEngDialogHandler_TOnDialogFileDialogEvent(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const accept_extensions: TStrings; const accept_descriptions: TStrings; const callback: ICefFileDialogCallback): Boolean;
    procedure TEngDisplayHandler_TOnDisplayAddressChangeEvent(const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
    function TEngDisplayHandler_TOnDisplayAutoResizeEvent(const browser: ICefBrowser; const new_size: PCefSize): Boolean;
    function TEngDisplayHandler_TOnDisplayConsoleMessageEvent(const browser: ICefBrowser; level: TCefLogSeverity; const message_: ustring; const source: ustring; line: Integer): Boolean;
    procedure TEngDisplayHandler_TOnDisplayCursorChangeEvent(const browser: ICefBrowser; cursor_: TCefCursorHandle; CursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean);
    procedure TEngDisplayHandler_TOnDisplayFaviconUrlChangeEvent(const browser: ICefBrowser; const iconUrls: TStrings);
    procedure TEngDisplayHandler_TOnDisplayFullScreenModeChangeEvent(const browser: ICefBrowser; fullscreen: Boolean);
    procedure TEngDisplayHandler_TOnDisplayLoadingProgressChangeEvent(const browser: ICefBrowser; const progress: double);
    procedure TEngDisplayHandler_TOnDisplayMediaAccessChangeEvent(const browser: ICefBrowser; has_video_access: boolean; has_audio_access: boolean);
    procedure TEngDisplayHandler_TOnDisplayStatusMessageEvent(const browser: ICefBrowser; const value: ustring);
    procedure TEngDisplayHandler_TOnDisplayTitleChangeEvent(const browser: ICefBrowser; const title: ustring);
    function TEngDisplayHandler_TOnDisplayTooltipEvent(const browser: ICefBrowser; var text: ustring): Boolean;
    procedure TEngDomVisitor_TOnDomVisitorVisitEvent(const document: ICefDomDocument);
    function TEngDownloadHandler_TOnDownloadBeforeDownloadEvent(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback): boolean;
    function TEngDownloadHandler_TOnDownloadCanDownloadEvent(const browser: ICefBrowser; const url: ustring; const request_method: ustring): boolean;
    procedure TEngDownloadHandler_TOnDownloadDownloadUpdatedEvent(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
    procedure TEngDownloadImageCallback_TOnDownloadImageCallbackDownloadImageFinishedEvent(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage);
    function TEngDragHandler_TOnDragDragEnterEvent(const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations): Boolean;
    procedure TEngDragHandler_TOnDragDraggableRegionsChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
    procedure TEngEndTracingCallback_TOnEndTracingCallbackEndTracingCompleteEvent(const tracingFile: ustring);
    function TEngExtensionHandler_TOnExtensionBeforeBackgroundBrowserEvent(const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
    function TEngExtensionHandler_TOnExtensionBeforeBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; const active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
    function TEngExtensionHandler_TOnExtensionCanAccessBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser): boolean;
    procedure TEngExtensionHandler_TOnExtensionExtensionLoadFailedEvent(result: TCefErrorcode);
    procedure TEngExtensionHandler_TOnExtensionExtensionLoadedEvent(const extension: ICefExtension);
    procedure TEngExtensionHandler_TOnExtensionExtensionUnloadedEvent(const extension: ICefExtension);
    procedure TEngExtensionHandler_TOnExtensionGetActiveBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser);
    function TEngExtensionHandler_TOnExtensionGetExtensionResourceEvent(const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback): boolean;
    procedure TEngFindHandler_TOnFindFindResultEvent(const browser: ICefBrowser; identifier: Integer; count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
    procedure TEngFocusHandler_TOnFocusGotFocusEvent(const browser: ICefBrowser);
    function TEngFocusHandler_TOnFocusSetFocusEvent(const browser: ICefBrowser; source: TCefFocusSource): Boolean;
    procedure TEngFocusHandler_TOnFocusTakeFocusEvent(const browser: ICefBrowser; next: Boolean);
    procedure TEngFrameHandler_TOnFrameFrameAttachedEvent(const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
    procedure TEngFrameHandler_TOnFrameFrameCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame);
    procedure TEngFrameHandler_TOnFrameFrameDetachedEvent(const browser: ICefBrowser; const frame: ICefFrame);
    procedure TEngFrameHandler_TOnFrameMainFrameChangedEvent(const browser: ICefBrowser; const old_frame: ICefFrame; const new_frame: ICefFrame);
    function TEngJsDialogHandler_TOnJsDialogBeforeUnloadDialogEvent(const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback): Boolean;
    procedure TEngJsDialogHandler_TOnJsDialogDialogClosedEvent(const browser: ICefBrowser);
    function TEngJsDialogHandler_TOnJsDialogJsdialogEvent(const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText: ustring; const defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean): Boolean;
    procedure TEngJsDialogHandler_TOnJsDialogResetDialogStateEvent(const browser: ICefBrowser);
    function TEngKeyboardHandler_TOnKeyboardKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle): Boolean;
    function TEngKeyboardHandler_TOnKeyboardPreKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean): Boolean;
    procedure TEngLifeSpanHandler_TOnLifeSpanAfterCreatedEvent(const browser: ICefBrowser);
    procedure TEngLifeSpanHandler_TOnLifeSpanBeforeCloseEvent(const browser: ICefBrowser);
    procedure TEngLifeSpanHandler_TOnLifeSpanBeforeDevToolsPopupEvent(const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean);
    function TEngLifeSpanHandler_TOnLifeSpanBeforePopupEvent(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean;
    function TEngLifeSpanHandler_TOnLifeSpanDoCloseEvent(const browser: ICefBrowser): Boolean;
    procedure TEngLoadHandler_TOnLoadLoadEndEvent(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
    procedure TEngLoadHandler_TOnLoadLoadErrorEvent(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText: ustring; const failedUrl: ustring);
    procedure TEngLoadHandler_TOnLoadLoadStartEvent(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
    procedure TEngLoadHandler_TOnLoadLoadingStateChangeEvent(const browser: ICefBrowser; isLoading: Boolean; canGoBack: Boolean; canGoForward: Boolean);
    function TEngMediaAccessHandler_TOnMediaAccessRequestMediaAccessPermissionEvent(const browser: ICefBrowser; const frame: ICefFrame; const requesting_url: ustring; requested_permissions: TCefMediaAccessPermissionTypes; const callback: ICefMediaAccessCallback): boolean;
    procedure TEngMediaObserver_TOnMediaObserverRouteMessageReceivedEvent(const route: ICefMediaRoute; const message_: ustring);
    procedure TEngMediaObserver_TOnMediaObserverRouteStateChangedEvent(const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
    procedure TEngMediaObserver_TOnMediaObserverRoutesEvent(const routes: TCefMediaRouteArray);
    procedure TEngMediaObserver_TOnMediaObserverSinksEvent(const sinks: TCefMediaSinkArray);
    procedure TEngMediaRouteCreateCallback_TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
    procedure TEngMediaSinkDeviceInfoCallback_TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent(const ip_address: ustring; port: integer; const model_name: ustring);
    procedure TEngMenuButtonDelegate_TOnMenuButtonMenuButtonPressedEvent(const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);
    procedure TEngMenuModelDelegate_TOnMenuModelExecuteCommandEvent(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags);
    function TEngMenuModelDelegate_TOnMenuModelFormatLabelEvent(const menuModel: ICefMenuModel; var label_: ustring): boolean;
    procedure TEngMenuModelDelegate_TOnMenuModelMenuClosedEvent(const menuModel: ICefMenuModel);
    procedure TEngMenuModelDelegate_TOnMenuModelMenuWillShowEvent(const menuModel: ICefMenuModel);
    procedure TEngMenuModelDelegate_TOnMenuModelMouseOutsideMenuEvent(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
    procedure TEngMenuModelDelegate_TOnMenuModelUnhandledCloseSubmenuEvent(const menuModel: ICefMenuModel; isRTL: boolean);
    procedure TEngMenuModelDelegate_TOnMenuModelUnhandledOpenSubmenuEvent(const menuModel: ICefMenuModel; isRTL: boolean);
    function TEngNavigationEntryVisitor_TOnNavigationEntryVisitorVisitEvent(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean;
    procedure TEngPdfPrintCallback_TOnPdfPrintCallbackPdfPrintFinishedEvent(const path: ustring; ok: Boolean);
    procedure TEngPermissionHandler_TOnPermissionDismissPermissionPromptEvent(const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult);
    function TEngPermissionHandler_TOnPermissionRequestMediaAccessPermissionEvent(const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback): boolean;
    function TEngPermissionHandler_TOnPermissionShowPermissionPromptEvent(const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback): boolean;
    procedure TEngPrintHandler_TOnPrintGetPDFPaperSizeEvent(const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult: TCefSize);
    procedure TEngPrintHandler_TOnPrintPrintDialogEvent(const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean);
    procedure TEngPrintHandler_TOnPrintPrintJobEvent(const browser: ICefBrowser; const documentName: ustring; const PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult: boolean);
    procedure TEngPrintHandler_TOnPrintPrintResetEvent(const browser: ICefBrowser);
    procedure TEngPrintHandler_TOnPrintPrintSettingsEvent(const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
    procedure TEngPrintHandler_TOnPrintPrintStartEvent(const browser: ICefBrowser);
    procedure TEngRenderHandler_TOnRenderAcceleratedPaintEvent(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo);
    procedure TEngRenderHandler_TOnRenderGetAccessibilityHandlerEvent(var aAccessibilityHandler: ICefAccessibilityHandler);
    function TEngRenderHandler_TOnRenderGetRootScreenRectEvent(const browser: ICefBrowser; var rect: TCefRect): Boolean;
    function TEngRenderHandler_TOnRenderGetScreenInfoEvent(const browser: ICefBrowser; var screenInfo: TCefScreenInfo): Boolean;
    function TEngRenderHandler_TOnRenderGetScreenPointEvent(const browser: ICefBrowser; viewX: Integer; viewY: Integer; var screenX: Integer; var screenY: Integer): Boolean;
    procedure TEngRenderHandler_TOnRenderGetTouchHandleSizeEvent(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
    procedure TEngRenderHandler_TOnRenderGetViewRectEvent(const browser: ICefBrowser; var rect: TCefRect);
    procedure TEngRenderHandler_TOnRenderIMECompositionRangeChangedEvent(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect);
    procedure TEngRenderHandler_TOnRenderPaintEvent(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width: Integer; height: Integer);
    procedure TEngRenderHandler_TOnRenderPopupShowEvent(const browser: ICefBrowser; show: Boolean);
    procedure TEngRenderHandler_TOnRenderPopupSizeEvent(const browser: ICefBrowser; const rect: PCefRect);
    procedure TEngRenderHandler_TOnRenderScrollOffsetChangedEvent(const browser: ICefBrowser; x: Double; y: Double);
    function TEngRenderHandler_TOnRenderStartDraggingEvent(const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x: Integer; y: Integer): Boolean;
    procedure TEngRenderHandler_TOnRenderTextSelectionChangedEvent(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
    procedure TEngRenderHandler_TOnRenderTouchHandleStateChangedEvent(const browser: ICefBrowser; const state: TCefTouchHandleState);
    procedure TEngRenderHandler_TOnRenderUpdateDragCursorEvent(const browser: ICefBrowser; operation: TCefDragOperation);
    procedure TEngRenderHandler_TOnRenderVirtualKeyboardRequestedEvent(const browser: ICefBrowser; input_mode: TCefTextInpuMode);
    procedure TEngRenderProcessHandler_TOnRenderProcessBrowserCreatedEvent(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
    procedure TEngRenderProcessHandler_TOnRenderProcessBrowserDestroyedEvent(const browser: ICefBrowser);
    procedure TEngRenderProcessHandler_TOnRenderProcessContextCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
    procedure TEngRenderProcessHandler_TOnRenderProcessContextReleasedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
    procedure TEngRenderProcessHandler_TOnRenderProcessFocusedNodeChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
    function TEngRenderProcessHandler_TOnRenderProcessGetLoadHandlerEvent(): ICefLoadHandler;
    function TEngRenderProcessHandler_TOnRenderProcessProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage): Boolean;
    procedure TEngRenderProcessHandler_TOnRenderProcessUncaughtExceptionEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const V8Exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
    procedure TEngRenderProcessHandler_TOnRenderProcessWebKitInitializedEvent();
    procedure TEngRequestContextHandler_TOnRequestContextGetResourceRequestHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
    procedure TEngRequestContextHandler_TOnRequestContextRequestContextInitializedEvent(const request_context: ICefRequestContext);
    function TEngRequestHandler_TOnRequestBeforeBrowseEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean;
    function TEngRequestHandler_TOnRequestCertificateErrorEvent(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean;
    procedure TEngRequestHandler_TOnRequestDocumentAvailableInMainFrameEvent(const browser: ICefBrowser);
    function TEngRequestHandler_TOnRequestGetAuthCredentialsEvent(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
    procedure TEngRequestHandler_TOnRequestGetResourceRequestHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
    function TEngRequestHandler_TOnRequestOpenUrlFromTabEvent(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean;
    procedure TEngRequestHandler_TOnRequestRenderProcessResponsiveEvent(const browser: ICefBrowser);
    procedure TEngRequestHandler_TOnRequestRenderProcessTerminatedEvent(const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring);
    function TEngRequestHandler_TOnRequestRenderProcessUnresponsiveEvent(const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback): boolean;
    procedure TEngRequestHandler_TOnRequestRenderViewReadyEvent(const browser: ICefBrowser);
    function TEngRequestHandler_TOnRequestSelectClientCertificateEvent(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean;
    procedure TEngResolveCallback_TOnResolveCallbackResolveCompletedEvent(result: TCefErrorCode; const resolvedIps: TStrings);
    function TEngResourceBundleHandler_TOnResourceBundleGetDataResourceEvent(resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): Boolean;
    function TEngResourceBundleHandler_TOnResourceBundleGetDataResourceForScaleEvent(resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): Boolean;
    function TEngResourceBundleHandler_TOnResourceBundleGetLocalizedStringEvent(stringid: Integer; var stringVal: ustring): Boolean;
    procedure TEngResourceHandler_TOnResourceCancelEvent();
    procedure TEngResourceHandler_TOnResourceGetResponseHeadersEvent(const response: ICefResponse; out responseLength: Int64; out redirectUrl: ustring);
    function TEngResourceHandler_TOnResourceOpenEvent(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
    function TEngResourceHandler_TOnResourceProcessRequestEvent(const request: ICefRequest; const callback: ICefCallback): Boolean;
    function TEngResourceHandler_TOnResourceReadEvent(const data_out: Pointer; bytes_to_read: Integer; var bytes_read: Integer; const callback: ICefResourceReadCallback): boolean;
    function TEngResourceHandler_TOnResourceReadResponseEvent(const dataOut: Pointer; bytesToRead: Integer; var bytesRead: Integer; const callback: ICefCallback): Boolean;
    function TEngResourceHandler_TOnResourceSkipEvent(bytes_to_skip: int64; var bytes_skipped: Int64; const callback: ICefResourceSkipCallback): boolean;
    function TEngResourceRequestHandler_TOnResourceRequestBeforeResourceLoadEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback): TCefReturnValue;
    procedure TEngResourceRequestHandler_TOnResourceRequestGetCookieAccessFilterEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aFilter: ICefCookieAccessFilter);
    procedure TEngResourceRequestHandler_TOnResourceRequestGetResourceHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler);
    procedure TEngResourceRequestHandler_TOnResourceRequestGetResourceResponseFilterEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var aResponseFilter: ICefResponseFilter);
    procedure TEngResourceRequestHandler_TOnResourceRequestProtocolExecutionEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean);
    procedure TEngResourceRequestHandler_TOnResourceRequestResourceLoadCompleteEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64);
    procedure TEngResourceRequestHandler_TOnResourceRequestResourceRedirectEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
    function TEngResourceRequestHandler_TOnResourceRequestResourceResponseEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse): Boolean;
    function TEngResponseFilter_TOnResponseFilterFilterEvent(data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size: NativeUInt; var data_out_written: NativeUInt): TCefResponseFilterStatus;
    function TEngResponseFilter_TOnResponseFilterInitFilterEvent(): Boolean;
    procedure TEngRunFileDialogCallback_TOnRunFileDialogCallbackFileDialogDismissedEvent(const filePaths: TStrings);
    function TEngSchemeHandlerFactory_TOnSchemeFactoryNewEvent(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;
    procedure TEngServerHandler_TOnServerClientConnectedEvent(const server: ICefServer; connection_id: Integer);
    procedure TEngServerHandler_TOnServerClientDisconnectedEvent(const server: ICefServer; connection_id: Integer);
    procedure TEngServerHandler_TOnServerHttpRequestEvent(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
    procedure TEngServerHandler_TOnServerServerCreatedEvent(const server: ICefServer);
    procedure TEngServerHandler_TOnServerServerDestroyedEvent(const server: ICefServer);
    procedure TEngServerHandler_TOnServerWebSocketConnectedEvent(const server: ICefServer; connection_id: Integer);
    procedure TEngServerHandler_TOnServerWebSocketMessageEvent(const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
    procedure TEngServerHandler_TOnServerWebSocketRequestEvent(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
    procedure TEngSetCookieCallback_TOnSetCookieCallbackCompleteEvent(success: Boolean);
    procedure TEngStringVisitor_TOnStringVisitorVisitEvent(const str: ustring);
    procedure TEngTask_TOnTaskExecuteEvent();
    procedure TEngTextfieldDelegate_TOnTextfieldAfterUserActionEvent(const textfield: ICefTextfield);
    procedure TEngTextfieldDelegate_TOnTextfieldKeyEvent(const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean);
    procedure TEngUrlrequestClient_TOnUrlrequestClientDownloadDataEvent(const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
    procedure TEngUrlrequestClient_TOnUrlrequestClientDownloadProgressEvent(const request: ICefUrlRequest; current: Int64; total: Int64);
    function TEngUrlrequestClient_TOnUrlrequestClientGetAuthCredentialsEvent(isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
    procedure TEngUrlrequestClient_TOnUrlrequestClientRequestCompleteEvent(const request: ICefUrlRequest);
    procedure TEngUrlrequestClient_TOnUrlrequestClientUploadProgressEvent(const request: ICefUrlRequest; current: Int64; total: Int64);
    function TEngV8Accessor_TOnV8AccessorGetEvent(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): Boolean;
    function TEngV8Accessor_TOnV8AccessorSet_Event(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): Boolean;
    procedure TEngV8ArrayBufferReleaseCallback_TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent(buffer: Pointer);
    function TEngV8Handler_TOnV8ExecuteEvent(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean;
    function TEngV8Interceptor_TOnV8InterceptorGetByIndexEvent(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
    function TEngV8Interceptor_TOnV8InterceptorGetByNameEvent(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
    function TEngV8Interceptor_TOnV8InterceptorSetByIndexEvent(index: integer; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
    function TEngV8Interceptor_TOnV8InterceptorSetByNameEvent(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
    procedure TEngViewDelegate_TOnViewBlurEvent(const view: ICefView);
    procedure TEngViewDelegate_TOnViewChildViewChangedEvent(const view: ICefView; added: boolean; const child: ICefView);
    procedure TEngViewDelegate_TOnViewFocusEvent(const view: ICefView);
    procedure TEngViewDelegate_TOnViewGetHeightForWidthEvent(const view: ICefView; width: Integer; var aResult: Integer);
    procedure TEngViewDelegate_TOnViewGetMaximumSizeEvent(const view: ICefView; var aResult: TCefSize);
    procedure TEngViewDelegate_TOnViewGetMinimumSizeEvent(const view: ICefView; var aResult: TCefSize);
    procedure TEngViewDelegate_TOnViewGetPreferredSizeEvent(const view: ICefView; var aResult: TCefSize);
    procedure TEngViewDelegate_TOnViewLayoutChangedEvent(const view: ICefView; new_bounds: TCefRect);
    procedure TEngViewDelegate_TOnViewParentViewChangedEvent(const view: ICefView; added: boolean; const parent: ICefView);
    procedure TEngViewDelegate_TOnViewThemeChangedEvent(const view: ICefView);
    procedure TEngViewDelegate_TOnViewWindowChangedEvent(const view: ICefView; added: boolean);
    procedure TEngWindowDelegate_TOnWindowAcceleratorEvent(const window_: ICefWindow; command_id: Integer; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowAcceptsFirstMouseEvent(const window_: ICefWindow; var aResult: TCefState);
    procedure TEngWindowDelegate_TOnWindowCanCloseEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowCanMaximizeEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowCanMinimizeEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowCanResizeEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowGetInitialBoundsEvent(const window_: ICefWindow; var aResult: TCefRect);
    procedure TEngWindowDelegate_TOnWindowGetInitialShowStateEvent(const window_: ICefWindow; var aResult: TCefShowState);
    procedure TEngWindowDelegate_TOnWindowGetParentWindowEvent(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow);
    procedure TEngWindowDelegate_TOnWindowGetTitlebarHeightEvent(const window_: ICefWindow; var titlebar_height: Single; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowGetWindowRuntimeStyleEvent(var aResult: TCefRuntimeStyle);
    procedure TEngWindowDelegate_TOnWindowIsFramelessEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowIsWindowModalDialogEvent(const window_: ICefWindow; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowKeyEvent(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean);
    procedure TEngWindowDelegate_TOnWindowThemeColorsChangedEvent(const window_: ICefWindow; chrome_theme: Integer);
    procedure TEngWindowDelegate_TOnWindowWindowActivationChangedEvent(const window_: ICefWindow; active: boolean);
    procedure TEngWindowDelegate_TOnWindowWindowBoundsChangedEvent(const window_: ICefWindow; const new_bounds: TCefRect);
    procedure TEngWindowDelegate_TOnWindowWindowClosingEvent(const window_: ICefWindow);
    procedure TEngWindowDelegate_TOnWindowWindowCreatedEvent(const window_: ICefWindow);
    procedure TEngWindowDelegate_TOnWindowWindowDestroyedEvent(const window_: ICefWindow);
    procedure TEngWindowDelegate_TOnWindowWindowFullscreenTransitionEvent(const window_: ICefWindow; is_completed: boolean);
    procedure TEngWindowDelegate_TOnWindowWithStandardWindowButtonsEvent(const window_: ICefWindow; var aResult: boolean);
    function TEngWriteHandler_TOnWriteEllEvent(): Int64;
    function TEngWriteHandler_TOnWriteFlushEvent(): Integer;
    function TEngWriteHandler_TOnWriteMayBlockEvent(): Boolean;
    function TEngWriteHandler_TOnWriteSeekEvent(offset: Int64; whence: Integer): Integer;
    function TEngWriteHandler_TOnWriteWriteEvent(const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt;

  end;

// 公共发送事件函数
procedure CEFSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

// 非 of object 事件方法定义, 此处包括 var 指针定义部分
procedure TCefApplicationCore_TOnAlreadyRunningAppRelaunchEvent(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean);
procedure TCefApplicationCore_TOnBeforeChildProcessLaunchEvent(const commandLine: ICefCommandLine);
procedure TCefApplicationCore_TOnBrowserCreatedEvent(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
procedure TCefApplicationCore_TOnBrowserDestroyedEvent(const browser: ICefBrowser);
procedure TCefApplicationCore_TOnContextCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
procedure TCefApplicationCore_TOnContextInitializedEvent();
procedure TCefApplicationCore_TOnContextReleasedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
procedure TCefApplicationCore_TOnFocusedNodeChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
procedure TCefApplicationCore_TOnGetDataResourceEvent(resourceId: Integer; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
procedure TCefApplicationCore_TOnGetDataResourceForScaleEvent(resourceId: Integer; scaleFactor: TCefScaleFactor; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
procedure TCefApplicationCore_TOnGetDefaultClientEvent(var aClient : ICefClient);
procedure TCefApplicationCore_TOnGetDefaultRequestContextHandlerEvent(var aRequestContextHandler : ICefRequestContextHandler);
procedure TCefApplicationCore_TOnGetLocalizedStringEvent(stringId: Integer; out stringVal: ustring; var aResult : Boolean);
procedure TCefApplicationCore_TOnProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message: ICefProcessMessage; var aHandled : boolean);
procedure TCefApplicationCore_TOnRegisterCustomPreferencesEvent(type_: TCefPreferencesType; const registrar: TCefPreferenceRegistrarRef);
procedure TCefApplicationCore_TOnRegisterCustomSchemesEvent(const registrar: TCefSchemeRegistrarRef);
procedure TCefApplicationCore_TOnRenderLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
procedure TCefApplicationCore_TOnRenderLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);
procedure TCefApplicationCore_TOnRenderLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
procedure TCefApplicationCore_TOnRenderLoadingStateChange(const browser: ICefBrowser; isLoading, canGoBack, canGoForward: Boolean);
procedure TCefApplicationCore_TOnScheduleMessagePumpWorkEvent(const delayMs: Int64);
procedure TCefApplicationCore_TOnUncaughtExceptionEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
procedure TCefApplicationCore_TOnWebKitInitializedEvent();

var
  TCefApplicationCore_TOnAlreadyRunningAppRelaunchEventPtr : Pointer = nil;
  TCefApplicationCore_TOnBeforeChildProcessLaunchEventPtr : Pointer = nil;
  TCefApplicationCore_TOnBrowserCreatedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnBrowserDestroyedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnContextCreatedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnContextInitializedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnContextReleasedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnFocusedNodeChangedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnGetDataResourceEventPtr : Pointer = nil;
  TCefApplicationCore_TOnGetDataResourceForScaleEventPtr : Pointer = nil;
  TCefApplicationCore_TOnGetDefaultClientEventPtr : Pointer = nil;
  TCefApplicationCore_TOnGetDefaultRequestContextHandlerEventPtr : Pointer = nil;
  TCefApplicationCore_TOnGetLocalizedStringEventPtr : Pointer = nil;
  TCefApplicationCore_TOnProcessMessageReceivedEventPtr : Pointer = nil;
  TCefApplicationCore_TOnRegisterCustomPreferencesEventPtr : Pointer = nil;
  TCefApplicationCore_TOnRegisterCustomSchemesEventPtr : Pointer = nil;
  TCefApplicationCore_TOnRenderLoadEndPtr : Pointer = nil;
  TCefApplicationCore_TOnRenderLoadErrorPtr : Pointer = nil;
  TCefApplicationCore_TOnRenderLoadStartPtr : Pointer = nil;
  TCefApplicationCore_TOnRenderLoadingStateChangePtr : Pointer = nil;
  TCefApplicationCore_TOnScheduleMessagePumpWorkEventPtr : Pointer = nil;
  TCefApplicationCore_TOnUncaughtExceptionEventPtr : Pointer = nil;
  TCefApplicationCore_TOnWebKitInitializedEventPtr : Pointer = nil;

implementation

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
    CEFSendEventByPointer(DataPtr, AArgs);
  end;
end;

procedure CEFSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
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

// ----------------- 事件定义实现 -------------------------------

procedure TCEFEvent.TBufferPanel_TConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
begin
  SendEvent([Sender, @MinWidth, @MinHeight, @MaxWidth, @MaxHeight]);
end;

procedure TCEFEvent.TBufferPanel_TContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, @MousePos, @Handled]);
end;

procedure TCEFEvent.TBufferPanel_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TCEFEvent.TBufferPanel_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), @Accept]);
end;

procedure TCEFEvent.TBufferPanel_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TCEFEvent.TBufferPanel_TGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
begin
  SendEvent([Sender, DockClient, @InfluenceRect, @MousePos, @CanDock]);
end;

procedure TCEFEvent.TBufferPanel_TMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, Integer(Button), PInteger(@Shift)^, X, Y]);
end;

procedure TCEFEvent.TBufferPanel_TMouseMoveEvent(Sender: TObject; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, PInteger(@Shift)^, X, Y]);
end;

procedure TCEFEvent.TBufferPanel_TMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, PInteger(@Shift)^, WheelDelta, @MousePos, @Handled]);
end;

procedure TCEFEvent.TBufferPanel_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.TBufferPanel_TOnHandledMessageEvent(Sender: TObject; var aMessage: TMessage; var aHandled : boolean);
begin
  SendEvent([Sender, @aMessage, @aHandled]);
end;

procedure TCEFEvent.TBufferPanel_TOnIMECommitTextEvent(Sender: TObject; const aText : ustring; const replacement_range : PCefRange; relative_cursor_pos : integer);
var
  replacement_rangePtr: TCefRangePtr;
begin
  replacement_rangePtr := TCefRangeToGo(replacement_range^);
  SendEvent([Sender, ToPChar(aText), @replacement_rangePtr, relative_cursor_pos]);
end;

procedure TCEFEvent.TBufferPanel_TOnIMESetCompositionEvent(Sender: TObject; const aText : ustring; const underlines : TCefCompositionUnderlineDynArray; const replacement_range, selection_range : TCefRange);
var
  underlinesPtr: Pointer = nil;
  underlinesLen: Integer;
  replacement_rangePtr: TCefRangePtr;
  selection_rangePtr: TCefRangePtr;
begin
  underlinesLen := Length(underlines);
  if underlinesLen > 0 then
    underlinesPtr := @underlines[0];
  replacement_rangePtr := TCefRangeToGo(replacement_range);
  selection_rangePtr := TCefRangeToGo(selection_range);
  SendEvent([Sender, ToPChar(aText), underlinesPtr, underlinesLen, @replacement_rangePtr, @selection_rangePtr]);
end;

procedure TCEFEvent.TBufferPanel_TStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TCEFEvent.TBufferPanel_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnBrowserCreatedEvent(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser_view, browser]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnBrowserDestroyedEvent(const Sender: TObject; const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser_view, browser]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnGestureCommandEvent(const Sender: TObject; const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult : boolean);
begin
  SendEvent([Sender, browser_view, Integer(gesture_command), @aResult]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnGetBrowserRuntimeStyleEvent(const Sender: TObject; var aResult : TCefRuntimeStyle);
begin
  SendEvent([Sender, @aResult]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnGetChromeToolbarTypeEvent(const Sender: TObject; const browser_view: ICefBrowserView; var aChromeToolbarType: TCefChromeToolbarType);
begin
  SendEvent([Sender, browser_view, @aChromeToolbarType]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnGetDelegateForPopupBrowserViewEvent(const Sender: TObject; const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult : ICefBrowserViewDelegate);
var
  settingsPtr: TCefBrowserSettingsPtr;
begin
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([Sender, browser_view, @settingsPtr, client, is_devtools, @aResult]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnPopupBrowserViewCreatedEvent(const Sender: TObject; const browser_view, popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult : boolean);
begin
  SendEvent([Sender, browser_view, popup_browser_view, is_devtools, @aResult]);
end;

procedure TCEFEvent.TCEFBrowserViewComponent_TOnUseFramelessWindowForPictureInPicture(const Sender: TObject; const browser_view: ICefBrowserView; var aResult : boolean);
begin
  SendEvent([Sender, browser_view, @aResult]);
end;

procedure TCEFEvent.TCEFButtonComponent_TOnButtonPressedEvent(const Sender: TObject; const button: ICefButton);
begin
  SendEvent([Sender, button]);
end;

procedure TCEFEvent.TCEFButtonComponent_TOnButtonStateChangedEvent(const Sender: TObject; const button: ICefButton);
begin
  SendEvent([Sender, button]);
end;

procedure TCEFEvent.TCEFMenuButtonComponent_TOnMenuButtonPressedEvent(const Sender: TObject; const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);
var
  screen_pointPtr: TCefPointPtr;
begin
  screen_pointPtr := TCefPointToGo(screen_point);
  SendEvent([Sender, menu_button, @screen_pointPtr, button_pressed_lock]);
end;

procedure TCEFEvent.TCEFSentinel_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnClientConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnClientDisconnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnHttpRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
begin
  SendEvent([Sender, server, connection_id, ToPChar(client_address), request]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnServerCreated(Sender: TObject; const server: ICefServer);
begin
  SendEvent([Sender, server]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnServerDestroyed(Sender: TObject; const server: ICefServer);
begin
  SendEvent([Sender, server]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnWebSocketConnected(Sender: TObject; const server: ICefServer; connection_id: Integer);
begin
  SendEvent([Sender, server, connection_id]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnWebSocketMessage(Sender: TObject; const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
begin
  SendEvent([Sender, server, connection_id, data, uint32(data_size)]);
end;

procedure TCEFEvent.TCEFServerComponent_TOnWebSocketRequest(Sender: TObject; const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
begin
  SendEvent([Sender, server, connection_id, ToPChar(client_address), request, callback]);
end;

procedure TCEFEvent.TCEFTextfieldComponent_TOnAfterUserActionEvent(const Sender: TObject; const textfield: ICefTextfield);
begin
  SendEvent([Sender, textfield]);
end;

procedure TCEFEvent.TCEFTextfieldComponent_TOnTextfieldKeyEventEvent(const Sender: TObject; const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult : boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event);
  SendEvent([Sender, textfield, @eventPtr, @aResult]);
end;

procedure TCEFEvent.TCEFTimerWorkScheduler_TOnAllowEvent(Sender: TObject; var allow : boolean);
begin
  SendEvent([Sender, @allow]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TOnDownloadData(Sender: TObject; const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
begin
  SendEvent([Sender, request, data, uint32(dataLength)]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TOnDownloadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
begin
  SendEvent([Sender, request, @current, @total]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TOnGetAuthCredentials(Sender: TObject; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; var aResult : Boolean);
begin
  SendEvent([Sender, isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @aResult]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TOnRequestComplete(Sender: TObject; const request: ICefUrlRequest);
begin
  SendEvent([Sender, request]);
end;

procedure TCEFEvent.TCEFUrlRequestClientComponent_TOnUploadProgress(Sender: TObject; const request: ICefUrlRequest; current, total: Int64);
begin
  SendEvent([Sender, request, @current, @total]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnBlurEvent(const Sender: TObject; const view: ICefView);
begin
  SendEvent([Sender, view]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnChildViewChangedEvent(const Sender: TObject; const view: ICefView; added: boolean; const child: ICefView);
begin
  SendEvent([Sender, view, added, child]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnFocusEvent(const Sender: TObject; const view: ICefView);
begin
  SendEvent([Sender, view]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnGetHeightForWidthEvent(const Sender: TObject; const view: ICefView; width: Integer; var aResult: Integer);
begin
  SendEvent([Sender, view, width, @aResult]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnGetMaximumSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([Sender, view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TCEFViewComponent_TOnGetMinimumSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([Sender, view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TCEFViewComponent_TOnGetPreferredSizeEvent(const Sender: TObject; const view: ICefView; var aResult : TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([Sender, view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TCEFViewComponent_TOnLayoutChangedEvent(const Sender: TObject; const view: ICefView; new_bounds: TCefRect);
var
  new_boundsPtr: TCefRectPtr;
begin
  new_boundsPtr := TCefRectToGo(new_bounds);
  SendEvent([Sender, view, @new_boundsPtr]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnParentViewChangedEvent(const Sender: TObject; const view: ICefView; added: boolean; const parent: ICefView);
begin
  SendEvent([Sender, view, added, parent]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnThemeChangedEvent(const Sender: TObject; const view: ICefView);
begin
  SendEvent([Sender, view]);
end;

procedure TCEFEvent.TCEFViewComponent_TOnWindowChangedEvent(const Sender: TObject; const view: ICefView; added: boolean);
begin
  SendEvent([Sender, view, added]);
end;

procedure TCEFEvent.TCEFWinControl_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TCEFEvent.TCEFWinControl_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), @Accept]);
end;

procedure TCEFEvent.TCEFWinControl_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TCEFEvent.TCEFWinControl_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnAcceleratorEvent(const Sender: TObject; const window_: ICefWindow; command_id: Integer; var aResult : boolean);
begin
  SendEvent([Sender, window_, command_id, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnAcceptsFirstMouseEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefState);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnCanCloseEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnCanMaximizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnCanMinimizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnCanResizeEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnGetInitialBoundsEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefRect);
var
  aResultPtr: TCefRectPtr;
begin
  aResultPtr := TCefRectToGo(aResult);
  SendEvent([Sender, window_, @aResultPtr]);
  aResult := TCefRectToPas(aResultPtr);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnGetInitialShowStateEvent(const Sender: TObject; const window_: ICefWindow; var aResult : TCefShowState);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnGetParentWindowEvent(const Sender: TObject; const window_: ICefWindow; var is_menu, can_activate_menu: boolean; var aResult : ICefWindow);
begin
  SendEvent([Sender, window_, @is_menu, @can_activate_menu, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnGetTitlebarHeightEvent(const Sender: TObject; const window_: ICefWindow; var titlebar_height: Single; var aResult : boolean);
begin
  SendEvent([Sender, window_, @titlebar_height, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnGetWindowRuntimeStyleEvent(const Sender: TObject; var aResult : TCefRuntimeStyle);
begin
  SendEvent([Sender, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnIsFramelessEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnIsWindowModalDialogEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnThemeColorsChangedEvent(const Sender: TObject; const window_: ICefWindow; chrome_theme: Integer);
begin
  SendEvent([Sender, window_, chrome_theme]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowActivationChangedEvent(const Sender: TObject; const window_: ICefWindow; active: boolean);
begin
  SendEvent([Sender, window_, active]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowBoundsChangedEvent(const Sender: TObject; const window_: ICefWindow; const new_bounds: TCefRect);
var
  new_boundsPtr: TCefRectPtr;
begin
  new_boundsPtr := TCefRectToGo(new_bounds);
  SendEvent([Sender, window_, @new_boundsPtr]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowClosingEvent(const Sender: TObject; const window_: ICefWindow);
begin
  SendEvent([Sender, window_]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowCreatedEvent(const Sender: TObject; const window_: ICefWindow);
begin
  SendEvent([Sender, window_]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowDestroyedEvent(const Sender: TObject; const window_: ICefWindow);
begin
  SendEvent([Sender, window_]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowFullscreenTransitionEvent(const Sender: TObject; const window_: ICefWindow; is_completed: boolean);
begin
  SendEvent([Sender, window_, is_completed]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWindowKeyEventEvent(const Sender: TObject; const window_: ICefWindow; const event: TCefKeyEvent; var aResult : boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event);
  SendEvent([Sender, window_, @eventPtr, @aResult]);
end;

procedure TCEFEvent.TCEFWindowComponent_TOnWithStandardWindowButtonsEvent(const Sender: TObject; const window_: ICefWindow; var aResult : boolean);
begin
  SendEvent([Sender, window_, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.TChromiumCore_TOnAcceleratedPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo);
var
  dirtyRectsPtr: Pointer = nil;
  infoPtr: TCefAcceleratedPaintInfoPtr;
begin
  if dirtyRectsCount > 0 then
      dirtyRectsPtr := @dirtyRects^[0];
  infoPtr := TCefAcceleratedPaintInfoToGo(info^);
  SendEvent([Sender, browser, Integer(type_), uint32(dirtyRectsCount), dirtyRectsPtr, @infoPtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnAddressChange(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
begin
  SendEvent([Sender, browser, frame, ToPChar(url)]);
end;

procedure TCEFEvent.TChromiumCore_TOnAfterCreated(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnAudioStreamErrorEvent(Sender: TObject; const browser: ICefBrowser; const message_: ustring);
begin
  SendEvent([Sender, browser, ToPChar(message_)]);
end;

procedure TCEFEvent.TChromiumCore_TOnAudioStreamPacketEvent(Sender: TObject; const browser: ICefBrowser; const data : PPSingle; frames: integer; pts: int64);
begin
  SendEvent([Sender, browser, data, frames, @pts]);
end;

procedure TCEFEvent.TChromiumCore_TOnAudioStreamStartedEvent(Sender: TObject; const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
var
  paramsPtr: TCefAudioParametersPtr;
begin
  paramsPtr := TCefAudioParametersToGo(params);
  SendEvent([Sender, browser, @paramsPtr, channels]);
end;

procedure TCEFEvent.TChromiumCore_TOnAudioStreamStoppedEvent(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnAutoResize(Sender: TObject; const browser: ICefBrowser; const new_size: PCefSize; out Result: Boolean);
var
  new_sizePtr: TCefSizePtr;
begin
  new_sizePtr := TCefSizeToGo(new_size^);
  SendEvent([Sender, browser, @new_sizePtr, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeBackgroundBrowserEvent(Sender: TObject; const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings; var aResult : boolean);
var
  settingsPtr: TCefBrowserSettingsPtr;
begin
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([Sender, extension, ToPChar(url), @client, @settingsPtr, @aResult]);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeBrowse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture, isRedirect: Boolean; out Result: Boolean);
begin
  SendEvent([Sender, browser, frame, request, user_gesture, isRedirect, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser, active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var aResult : boolean);
var
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([Sender, extension, browser, active_browser, index, ToPChar(url), active, @windowInfoPtr, @client, @settingsPtr, @aResult]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeClose(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
begin
  SendEvent([Sender, browser, frame, params, model]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeDevToolsPopup(Sender: TObject; const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean);
var
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([Sender, browser, @windowInfoPtr, @client, @settingsPtr, @extra_info, @use_default_window]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeDownload(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback; var aResult : boolean);
begin
  SendEvent([Sender, browser, downloadItem, ToPChar(suggestedName), callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforePopup(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl, targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean; var Result: Boolean);
var
  popupFeaturesPtr: TCefPopupFeaturesPtr;
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  popupFeaturesPtr := TCefPopupFeaturesToGo(popupFeatures);
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([Sender, browser, frame, ToPChar(targetUrl), ToPChar(targetFrameName), Integer(targetDisposition), userGesture, @popupFeaturesPtr, @windowInfoPtr, @client, @settingsPtr, @extra_info, @noJavascriptAccess, @Result]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeResourceLoad(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback; out Result: TCefReturnValue);
begin
  SendEvent([Sender, browser, frame, request, callback, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnBeforeUnloadDialog(Sender: TObject; const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback; out Result: Boolean);
begin
  SendEvent([Sender, browser, ToPChar(messageText), isReload, callback, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnCanAccessBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser; var aResult : boolean);
begin
  SendEvent([Sender, extension, browser, include_incognito, target_browser, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnCanDownloadEvent(Sender: TObject; const browser: ICefBrowser; const url, request_method: ustring; var aResult: boolean);
begin
  SendEvent([Sender, browser, ToPChar(url), ToPChar(request_method), @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnCanSaveCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie; var aResult : boolean);
var
  cookiePtr: TCefCookiePtr;
begin
  cookiePtr := TCefCookieToGo(cookie^);
  SendEvent([Sender, browser, frame, request, response, @cookiePtr, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnCanSendCookie(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie; var aResult: boolean);
var
  cookiePtr: TCefCookiePtr;
begin
  cookiePtr := TCefCookieToGo(cookie^);
  SendEvent([Sender, browser, frame, request, @cookiePtr, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnCertificateError(Sender: TObject; const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback; out Result: Boolean);
begin
  SendEvent([Sender, browser, certError, ToPChar(requestUrl), sslInfo, callback, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnChromeCommandEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, Integer(disposition), @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnClose(Sender: TObject; const browser: ICefBrowser; var aAction : TCefCloseBrowserAction);
begin
  SendEvent([Sender, browser, @aAction]);
end;

procedure TCEFEvent.TChromiumCore_TOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
begin
  SendEvent([Sender, @aMessage, @aHandled]);
end;

procedure TCEFEvent.TChromiumCore_TOnConsoleMessage(Sender: TObject; const browser: ICefBrowser; level: TCefLogSeverity; const message, source: ustring; line: Integer; out Result: Boolean);
begin
  SendEvent([Sender, browser, level, ToPChar(message), ToPChar(source), line, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnContextMenuCommand(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags; out Result: Boolean);
begin
  SendEvent([Sender, browser, frame, params, commandId, eventFlags, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnContextMenuDismissed(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.TChromiumCore_TOnCookieSet(Sender: TObject; aSuccess : boolean; aID : integer);
begin
  SendEvent([Sender, aSuccess, aID]);
end;

procedure TCEFEvent.TChromiumCore_TOnCookieVisitorDestroyed(Sender: TObject; aID : integer);
begin
  SendEvent([Sender, aID]);
end;

procedure TCEFEvent.TChromiumCore_TOnCookiesDeletedEvent(Sender: TObject; numDeleted : integer);
begin
  SendEvent([Sender, numDeleted]);
end;

procedure TCEFEvent.TChromiumCore_TOnCookiesVisited(Sender: TObject; const name_, value, domain, path: ustring; secure, httponly, hasExpires: Boolean; const creation, lastAccess, expires: TDateTime; count, total, aID : Integer; same_site : TCefCookieSameSite; priority : TCefCookiePriority; var aDeleteCookie, aResult : Boolean);
begin
  SendEvent([Sender, ToPChar(name_), ToPChar(value), ToPChar(domain), ToPChar(path), secure, httponly, hasExpires, @creation, @lastAccess, @expires, count, total, aID, Integer(same_site), priority, @aDeleteCookie, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnCursorChange(Sender: TObject; const browser: ICefBrowser; cursor_: TCefCursorHandle; cursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult : boolean);
var
  customCursorInfoPtr: TCefCursorInfoPtr;
begin
  customCursorInfoPtr := TCefCursorInfoToGo(customCursorInfo^);
  SendEvent([Sender, browser, cursor_, Integer(cursorType), @customCursorInfoPtr, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsAgentAttachedEvent(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsAgentDetachedEvent(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsEventEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: ICefValue);
begin
  SendEvent([Sender, browser, ToPChar(method), params]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsEventRawEvent(Sender: TObject; const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt);
begin
  SendEvent([Sender, browser, ToPChar(method), params, uint32(params_size)]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsMessageEvent(Sender: TObject; const browser: ICefBrowser; const message_: ICefValue; var aHandled: boolean);
begin
  SendEvent([Sender, browser, message_, @aHandled]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsMethodRawResultEvent(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt);
begin
  SendEvent([Sender, browser, message_id, success, result, uint32(result_size)]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsMethodResultEvent(Sender: TObject; const browser: ICefBrowser; message_id: integer; success: boolean; const result: ICefValue);
begin
  SendEvent([Sender, browser, message_id, success, result]);
end;

procedure TCEFEvent.TChromiumCore_TOnDevToolsRawMessageEvent(Sender: TObject; const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean);
begin
  SendEvent([Sender, browser, message_, uint32(message_size), @aHandled]);
end;

procedure TCEFEvent.TChromiumCore_TOnDialogClosed(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnDismissPermissionPromptEvent(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult);
begin
  SendEvent([Sender, browser, @prompt_id, Integer(result)]);
end;

procedure TCEFEvent.TChromiumCore_TOnDocumentAvailableInMainFrame(Sender: Tobject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnDownloadImageFinishedEvent(Sender: TObject; const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage);
begin
  SendEvent([Sender, ToPChar(imageUrl), httpStatusCode, image]);
end;

procedure TCEFEvent.TChromiumCore_TOnDownloadUpdated(Sender: TObject; const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
begin
  SendEvent([Sender, browser, downloadItem, callback]);
end;

procedure TCEFEvent.TChromiumCore_TOnDragEnter(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations; out Result: Boolean);
begin
  SendEvent([Sender, browser, dragData, mask, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnDraggableRegionsChanged(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
var
  regionsPtr: Pointer = nil;
begin
  if regionsCount > 0 then
      regionsPtr := @regions^[0];
  SendEvent([Sender, browser, frame, uint32(regionsCount), regionsPtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnExecuteTaskOnCefThread(Sender: TObject; aTaskID : cardinal);
begin
  SendEvent([Sender, aTaskID]);
end;

procedure TCEFEvent.TChromiumCore_TOnExtensionLoadFailedEvent(Sender: TObject; result: TCefErrorcode);
begin
  SendEvent([Sender, result]);
end;

procedure TCEFEvent.TChromiumCore_TOnExtensionLoadedEvent(Sender: TObject; const extension: ICefExtension);
begin
  SendEvent([Sender, extension]);
end;

procedure TCEFEvent.TChromiumCore_TOnExtensionUnloadedEvent(Sender: TObject; const extension: ICefExtension);
begin
  SendEvent([Sender, extension]);
end;

procedure TCEFEvent.TChromiumCore_TOnFavIconUrlChange(Sender: TObject; const browser: ICefBrowser; const iconUrls: TStrings);
begin
  SendEvent([Sender, browser, iconUrls]);
end;

procedure TCEFEvent.TChromiumCore_TOnFileDialog(Sender: TObject; const browser: ICefBrowser; mode: TCefFileDialogMode; const title, defaultFilePath: ustring; const acceptFilters, accept_extensions, accept_descriptions: TStrings; const callback: ICefFileDialogCallback; var Result: Boolean);
begin
  SendEvent([Sender, browser, mode, ToPChar(title), ToPChar(defaultFilePath), acceptFilters, accept_extensions, accept_descriptions, callback, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnFindResult(Sender: TObject; const browser: ICefBrowser; identifier, count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
var
  selectionRectPtr: TCefRectPtr;
begin
  selectionRectPtr := TCefRectToGo(selectionRect^);
  SendEvent([Sender, browser, identifier, count, @selectionRectPtr, activeMatchOrdinal, finalUpdate]);
end;

procedure TCEFEvent.TChromiumCore_TOnFrameAttached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
begin
  SendEvent([Sender, browser, frame, reattached]);
end;

procedure TCEFEvent.TChromiumCore_TOnFrameCreated(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.TChromiumCore_TOnFrameDetached(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.TChromiumCore_TOnFullScreenModeChange(Sender: TObject; const browser: ICefBrowser; fullscreen: Boolean);
begin
  SendEvent([Sender, browser, fullscreen]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetAccessibilityHandler(Sender: TObject; var aAccessibilityHandler : ICefAccessibilityHandler);
begin
  SendEvent([Sender, @aAccessibilityHandler]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetActiveBrowserEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser : ICefBrowser);
begin
  SendEvent([Sender, extension, browser, include_incognito, @aRsltBrowser]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetAudioParametersEvent(Sender: TObject; const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
var
  paramsPtr: TCefAudioParametersPtr;
begin
  paramsPtr := TCefAudioParametersToGo(params);
  SendEvent([Sender, browser, @paramsPtr, @aResult]);
  params := TCefAudioParametersToPas(paramsPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGetAuthCredentials(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm, scheme: ustring; const callback: ICefAuthCallback; out Result: Boolean);
begin
  SendEvent([Sender, browser, ToPChar(originUrl), isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetExtensionResourceEvent(Sender: TObject; const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback; var aResult : boolean);
begin
  SendEvent([Sender, extension, browser, ToPChar(file_), callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetPDFPaperSizeEvent(Sender: TObject; const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult : TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([Sender, browser, deviceUnitsPerInch, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGetResourceHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler : ICefResourceHandler);
begin
  SendEvent([Sender, browser, frame, request, @aResourceHandler]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetResourceRequestHandler(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation, is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aExternalResourceRequestHandler : ICefResourceRequestHandler);
begin
  SendEvent([Sender, browser, frame, request, is_navigation, is_download, ToPChar(request_initiator), @disable_default_handling, @aExternalResourceRequestHandler]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetResourceResponseFilter(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: ICefResponseFilter);
begin
  SendEvent([Sender, browser, frame, request, response, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetRootScreenRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect; out Result: Boolean);
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect);
  SendEvent([Sender, browser, @rectPtr, @Result]);
  rect := TCefRectToPas(rectPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGetScreenInfo(Sender: TObject; const browser: ICefBrowser; var screenInfo: TCefScreenInfo; out Result: Boolean);
var
  screenInfoPtr: TCefScreenInfoPtr;
begin
  screenInfoPtr := TCefScreenInfoToGo(screenInfo);
  SendEvent([Sender, browser, @screenInfoPtr, @Result]);
  screenInfo := TCefScreenInfoToPas(screenInfoPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGetScreenPoint(Sender: TObject; const browser: ICefBrowser; viewX, viewY: Integer; var screenX, screenY: Integer; out Result: Boolean);
begin
  SendEvent([Sender, browser, viewX, viewY, @screenX, @screenY, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnGetTouchHandleSize(Sender: TObject; const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
var
  sizePtr: TCefSizePtr;
begin
  sizePtr := TCefSizeToGo(size);
  SendEvent([Sender, browser, Integer(orientation), @sizePtr]);
  size := TCefSizeToPas(sizePtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGetViewRect(Sender: TObject; const browser: ICefBrowser; var rect: TCefRect);
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect);
  SendEvent([Sender, browser, @rectPtr]);
  rect := TCefRectToPas(rectPtr);
end;

procedure TCEFEvent.TChromiumCore_TOnGotFocus(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnIMECompositionRangeChanged(Sender: TObject; const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect);
var
  selected_rangePtr: TCefRangePtr;
  character_boundsPtr: TCefRectPtr;
begin
  selected_rangePtr := TCefRangeToGo(selected_range^);
  character_boundsPtr := TCefRectToGo(character_bounds^);
  SendEvent([Sender, browser, @selected_rangePtr, uint32(character_boundsCount), @character_boundsPtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnIsChromeAppMenuItemEnabledEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnIsChromeAppMenuItemVisibleEvent(Sender: TObject; const browser: ICefBrowser; command_id: integer; var aResult: boolean);
begin
  SendEvent([Sender, browser, command_id, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnIsChromePageActionIconVisibleEvent(Sender: TObject; icon_type: TCefChromePageActionIconType; var aResult: boolean);
begin
  SendEvent([Sender, Integer(icon_type), @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnIsChromeToolbarButtonVisibleEvent(Sender: TObject; button_type: TCefChromeToolbarButtonType; var aResult: boolean);
begin
  SendEvent([Sender, Integer(button_type), @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnJsdialog(Sender: TObject; const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText, defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean; out Result: Boolean);
begin
  SendEvent([Sender, browser, ToPChar(originUrl), Integer(dialogType), ToPChar(messageText), ToPChar(defaultPromptText), callback, @suppressMessage, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out Result: Boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event^);
  SendEvent([Sender, browser, @eventPtr, osEvent, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnLoadEnd(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
begin
  SendEvent([Sender, browser, frame, httpStatusCode]);
end;

procedure TCEFEvent.TChromiumCore_TOnLoadError(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);
begin
  SendEvent([Sender, browser, frame, errorCode, ToPChar(errorText), ToPChar(failedUrl)]);
end;

procedure TCEFEvent.TChromiumCore_TOnLoadStart(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  SendEvent([Sender, browser, frame, transitionType]);
end;

procedure TCEFEvent.TChromiumCore_TOnLoadingProgressChange(Sender: TObject; const browser: ICefBrowser; const progress: double);
begin
  SendEvent([Sender, browser, @progress]);
end;

procedure TCEFEvent.TChromiumCore_TOnLoadingStateChange(Sender: TObject; const browser: ICefBrowser; isLoading, canGoBack, canGoForward: Boolean);
begin
  SendEvent([Sender, browser, isLoading, canGoBack, canGoForward]);
end;

procedure TCEFEvent.TChromiumCore_TOnMainFrameChanged(Sender: TObject; const browser: ICefBrowser; const old_frame, new_frame: ICefFrame);
begin
  SendEvent([Sender, browser, old_frame, new_frame]);
end;

procedure TCEFEvent.TChromiumCore_TOnMediaAccessChange(Sender: TObject; const browser: ICefBrowser; has_video_access, has_audio_access: boolean);
begin
  SendEvent([Sender, browser, has_video_access, has_audio_access]);
end;

procedure TCEFEvent.TChromiumCore_TOnMediaRouteCreateFinishedEvent(Sender: TObject; result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
begin
  SendEvent([Sender, result, ToPChar(error), route]);
end;

procedure TCEFEvent.TChromiumCore_TOnMediaSinkDeviceInfoEvent(Sender: TObject; const ip_address: ustring; port: integer; const model_name: ustring);
begin
  SendEvent([Sender, ToPChar(ip_address), port, ToPChar(model_name)]);
end;

procedure TCEFEvent.TChromiumCore_TOnNavigationVisitorResultAvailableEvent(Sender: TObject; const entry: ICefNavigationEntry; current: Boolean; index, total: Integer; var aResult : boolean);
begin
  SendEvent([Sender, entry, current, index, total, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnOpenUrlFromTab(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; out Result: Boolean);
begin
  SendEvent([Sender, browser, frame, ToPChar(targetUrl), Integer(targetDisposition), userGesture, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnPaint(Sender: TObject; const browser: ICefBrowser; type_: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width, height: Integer);
var
  dirtyRectsPtr: Pointer = nil;
begin
  if dirtyRectsCount > 0 then
      dirtyRectsPtr := @dirtyRects^[0];
  SendEvent([Sender, browser, Integer(type_), uint32(dirtyRectsCount), dirtyRectsPtr, buffer, width, height]);
end;

procedure TCEFEvent.TChromiumCore_TOnPdfPrintFinishedEvent(Sender: TObject; aResultOK : boolean);
begin
  SendEvent([Sender, aResultOK]);
end;

procedure TCEFEvent.TChromiumCore_TOnPopupShow(Sender: TObject; const browser: ICefBrowser; show: Boolean);
begin
  SendEvent([Sender, browser, show]);
end;

procedure TCEFEvent.TChromiumCore_TOnPopupSize(Sender: TObject; const browser: ICefBrowser; const rect: PCefRect);
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect^);
  SendEvent([Sender, browser, @rectPtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnPreKeyEvent(Sender: TObject; const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean; out Result: Boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event^);
  SendEvent([Sender, browser, @eventPtr, osEvent, @isKeyboardShortcut, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrefsAvailableEvent(Sender: TObject; aResultOK : boolean);
begin
  SendEvent([Sender, aResultOK]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrintDialogEvent(Sender: TObject; const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult : boolean);
begin
  SendEvent([Sender, browser, hasSelection, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrintJobEvent(Sender: TObject; const browser: ICefBrowser; const documentName, PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult : boolean);
begin
  SendEvent([Sender, browser, ToPChar(documentName), ToPChar(PDFFilePath), callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrintResetEvent(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrintSettingsEvent(Sender: TObject; const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
begin
  SendEvent([Sender, browser, settings, getDefaults]);
end;

procedure TCEFEvent.TChromiumCore_TOnPrintStartEvent(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnProcessMessageReceived(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message: ICefProcessMessage; out Result: Boolean);
begin
  SendEvent([Sender, browser, frame, Integer(sourceProcess), message, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnProtocolExecution(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean);
begin
  SendEvent([Sender, browser, frame, request, @allowOsExecution]);
end;

procedure TCEFEvent.TChromiumCore_TOnQuickMenuCommandEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags; var aResult: Boolean);
begin
  SendEvent([Sender, browser, frame, command_id, event_flags, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnQuickMenuDismissedEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([Sender, browser, frame]);
end;

procedure TCEFEvent.TChromiumCore_TOnRenderProcessResponsive(Sender: Tobject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnRenderProcessTerminated(Sender: TObject; const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring);
begin
  SendEvent([Sender, browser, Integer(status), error_code, ToPChar(error_string)]);
end;

procedure TCEFEvent.TChromiumCore_TOnRenderProcessUnresponsive(Sender: Tobject; const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnRenderViewReady(Sender: Tobject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnRequestContextInitialized(Sender: TObject; const request_context: ICefRequestContext);
begin
  SendEvent([Sender, request_context]);
end;

procedure TCEFEvent.TChromiumCore_TOnRequestMediaAccessPermissionEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, frame, ToPChar(requesting_origin), requested_permissions, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnResetDialogState(Sender: TObject; const browser: ICefBrowser);
begin
  SendEvent([Sender, browser]);
end;

procedure TCEFEvent.TChromiumCore_TOnResolvedIPsAvailableEvent(Sender: TObject; result: TCefErrorCode; const resolvedIps: TStrings);
begin
  SendEvent([Sender, result, resolvedIps]);
end;

procedure TCEFEvent.TChromiumCore_TOnResourceLoadComplete(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64);
begin
  SendEvent([Sender, browser, frame, request, response, Integer(status), @receivedContentLength]);
end;

procedure TCEFEvent.TChromiumCore_TOnResourceRedirect(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
var
  RetnewUrl: PChar;
begin
  RetnewUrl := ToPChar(newUrl);
  SendEvent([Sender, browser, frame, request, response, @RetnewUrl]);
  newUrl := PCharToUStr(RetnewUrl);
end;

procedure TCEFEvent.TChromiumCore_TOnResourceResponse(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; out Result: Boolean);
begin
  SendEvent([Sender, browser, frame, request, response, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnRouteMessageReceivedEvent(Sender: TObject; const route: ICefMediaRoute; const message_: ustring);
begin
  SendEvent([Sender, route, ToPChar(message_)]);
end;

procedure TCEFEvent.TChromiumCore_TOnRouteStateChangedEvent(Sender: TObject; const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
begin
  SendEvent([Sender, route, Integer(state)]);
end;

procedure TCEFEvent.TChromiumCore_TOnRoutesEvent(Sender: TObject; const routes: TCefMediaRouteArray);
var
  routesPtr: Pointer = nil;
  routesLen: Integer;
begin
  routesLen := Length(routes);
  if routesLen > 0 then
    routesPtr := @routes[0];
  SendEvent([Sender, routesPtr, routesLen]);
end;

procedure TCEFEvent.TChromiumCore_TOnRunContextMenu(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback; var aResult : Boolean);
begin
  SendEvent([Sender, browser, frame, params, model, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnRunQuickMenuEvent(Sender: TObject; const browser: ICefBrowser; const frame: ICefFrame; location: TCefPoint; size: TCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback; var aResult : Boolean);
var
  locationPtr: TCefPointPtr;
  sizePtr: TCefSizePtr;
begin
  locationPtr := TCefPointToGo(location);
  sizePtr := TCefSizeToGo(size);
  SendEvent([Sender, browser, frame, @locationPtr, @sizePtr, edit_state_flags, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnScrollOffsetChanged(Sender: TObject; const browser: ICefBrowser; x, y: Double);
begin
  SendEvent([Sender, browser, @x, @y]);
end;

procedure TCEFEvent.TChromiumCore_TOnSelectClientCertificate(Sender: TObject; const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback; var aResult : boolean);
var
  certificatesPtr: Pointer = nil;
begin
  if certificatesCount > 0 then
    certificatesPtr := @certificates[0];
  SendEvent([Sender, browser, isProxy, ToPChar(host), port, uint32(certificatesCount), certificatesPtr, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnSetFocus(Sender: TObject; const browser: ICefBrowser; source: TCefFocusSource; out Result: Boolean);
begin
  SendEvent([Sender, browser, Integer(source), @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnShowPermissionPromptEvent(Sender: TObject; const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback; var aResult: boolean);
begin
  SendEvent([Sender, browser, @prompt_id, ToPChar(requesting_origin), requested_permissions, callback, @aResult]);
end;

procedure TCEFEvent.TChromiumCore_TOnSinksEvent(Sender: TObject; const sinks: TCefMediaSinkArray);
var
  sinksPtr: Pointer = nil;
  sinksLen: Integer;
begin
  sinksLen := Length(sinks);
  if sinksLen > 0 then
    sinksPtr := @sinks[0];
  SendEvent([Sender, sinksPtr, sinksLen]);
end;

procedure TCEFEvent.TChromiumCore_TOnStartDragging(Sender: TObject; const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x, y: Integer; out Result: Boolean);
begin
  SendEvent([Sender, browser, dragData, allowedOps, x, y, @Result]);
end;

procedure TCEFEvent.TChromiumCore_TOnStatusMessage(Sender: TObject; const browser: ICefBrowser; const value: ustring);
begin
  SendEvent([Sender, browser, ToPChar(value)]);
end;

procedure TCEFEvent.TChromiumCore_TOnTakeFocus(Sender: TObject; const browser: ICefBrowser; next: Boolean);
begin
  SendEvent([Sender, browser, next]);
end;

procedure TCEFEvent.TChromiumCore_TOnTextResultAvailableEvent(Sender: TObject; const aText : ustring);
begin
  SendEvent([Sender, ToPChar(aText)]);
end;

procedure TCEFEvent.TChromiumCore_TOnTextSelectionChanged(Sender: TObject; const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
var
  selected_rangePtr: TCefRangePtr;
begin
  selected_rangePtr := TCefRangeToGo(selected_range^);
  SendEvent([Sender, browser, ToPChar(selected_text), @selected_rangePtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnTitleChange(Sender: TObject; const browser: ICefBrowser; const title: ustring);
begin
  SendEvent([Sender, browser, ToPChar(title)]);
end;

procedure TCEFEvent.TChromiumCore_TOnTooltip(Sender: TObject; const browser: ICefBrowser; var text: ustring; out Result: Boolean);
var
  Rettext: PChar;
begin
  Rettext := ToPChar(text);
  SendEvent([Sender, browser, @Rettext, @Result]);
  text := PCharToUStr(Rettext);
end;

procedure TCEFEvent.TChromiumCore_TOnTouchHandleStateChanged(Sender: TObject; const browser: ICefBrowser; const state: TCefTouchHandleState);
var
  statePtr: TCefTouchHandleStatePtr;
begin
  statePtr := TCefTouchHandleStateToGo(state);
  SendEvent([Sender, browser, @statePtr]);
end;

procedure TCEFEvent.TChromiumCore_TOnUpdateDragCursor(Sender: TObject; const browser: ICefBrowser; operation: TCefDragOperation);
begin
  SendEvent([Sender, browser, operation]);
end;

procedure TCEFEvent.TChromiumCore_TOnVirtualKeyboardRequested(Sender: TObject; const browser: ICefBrowser; input_mode: TCefTextInpuMode);
begin
  SendEvent([Sender, browser, Integer(input_mode)]);
end;

procedure TCEFEvent.TChromiumCore_TOnZoomPctAvailable(Sender: TObject; const aZoomPct : double);
begin
  SendEvent([Sender, @aZoomPct]);
end;

procedure TCEFEvent.TChromiumWindow_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TCEFEvent.TCustomAccessibilityHandler_TOnAccessibilityEvent(Sender: TObject; const value: ICefValue);
begin
  SendEvent([Sender, value]);
end;

procedure TCEFEvent.TCustomResponseFilter_TOnFilterEvent(Sender: TObject; data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size : NativeUInt; var data_out_written: NativeUInt; var aResult : TCefResponseFilterStatus);
begin
  SendEvent([Sender, data_in, uint32(data_in_size), @data_in_read, data_out, uint32(data_out_size), @data_out_written, @aResult]);
end;

procedure TCEFEvent.TCustomResponseFilter_TOnInitFilterEvent(Sender: TObject; var aResult : boolean);
begin
  SendEvent([Sender, @aResult]);
end;

procedure TCEFEvent.TEngAccessibilityHandler_TOnAccessibilityAccessibilityLocationChangeEvent(const value: ICefValue);
begin
  SendEvent([value]);
end;

procedure TCEFEvent.TEngAccessibilityHandler_TOnAccessibilityAccessibilityTreeChangeEvent(const value: ICefValue);
begin
  SendEvent([value]);
end;

procedure TCEFEvent.TEngApp_TOnAppBeforeCommandLineProcessingEvent(const processType: ustring; const commandLine: ICefCommandLine);
begin
  SendEvent([ToPChar(processType), commandLine]);
end;

procedure TCEFEvent.TEngApp_TOnAppGetBrowserProcessHandlerEvent(var aHandler: ICefBrowserProcessHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngApp_TOnAppGetRenderProcessHandlerEvent(var aHandler: ICefRenderProcessHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngApp_TOnAppGetResourceBundleHandlerEvent(var aHandler: ICefResourceBundleHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngApp_TOnAppRegisterCustomSchemesEvent(const registrar: TCefSchemeRegistrarRef);
begin
  SendEvent([registrar]);
end;

procedure TCEFEvent.TEngAudioHandler_TOnAudioAudioStreamErrorEvent(const browser: ICefBrowser; const message_: ustring);
begin
  SendEvent([browser, ToPChar(message_)]);
end;

procedure TCEFEvent.TEngAudioHandler_TOnAudioAudioStreamPacketEvent(const browser: ICefBrowser; const data: PPSingle; frames: integer; pts: int64);
begin
  SendEvent([browser, data, frames, @pts]);
end;

procedure TCEFEvent.TEngAudioHandler_TOnAudioAudioStreamStartedEvent(const browser: ICefBrowser; const params: TCefAudioParameters; channels: integer);
var
  paramsPtr: TCefAudioParametersPtr;
begin
  paramsPtr := TCefAudioParametersToGo(params);
  SendEvent([browser, @paramsPtr, channels]);
end;

procedure TCEFEvent.TEngAudioHandler_TOnAudioAudioStreamStoppedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngAudioHandler_TOnAudioGetAudioParametersEvent(const browser: ICefBrowser; var params: TCefAudioParameters; var aResult: boolean);
var
  paramsPtr: TCefAudioParametersPtr;
begin
  paramsPtr := TCefAudioParametersToGo(params);
  SendEvent([browser, @paramsPtr, @aResult]);
  params := TCefAudioParametersToPas(paramsPtr);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessAlreadyRunningAppRelaunchEvent(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean);
begin
  SendEvent([commandLine, ToPChar(current_directory), @aResult]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessBeforeChildProcessLaunchEvent(const commandLine: ICefCommandLine);
begin
  SendEvent([commandLine]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessContextInitializedEvent();
begin
  SendEvent([]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessGetDefaultClientEvent(var aClient: ICefClient);
begin
  SendEvent([@aClient]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessGetDefaultRequestContextHandlerEvent(var aRequestContextHandler: ICefRequestContextHandler);
begin
  SendEvent([@aRequestContextHandler]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessRegisterCustomPreferencesEvent(type_: TCefPreferencesType; registrar: PCefPreferenceRegistrar);
var
  registrarPtr: TCefPreferenceRegistrarPtr;
begin
  registrarPtr := TCefPreferenceRegistrarToGo(registrar^);
  SendEvent([Integer(type_), @registrarPtr]);
end;

procedure TCEFEvent.TEngBrowserProcessHandler_TOnBrowserProcessScheduleMessagePumpWorkEvent(const delayMs: Int64);
begin
  SendEvent([@delayMs]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewBrowserCreatedEvent(const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([browser_view, browser]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewBrowserDestroyedEvent(const browser_view: ICefBrowserView; const browser: ICefBrowser);
begin
  SendEvent([browser_view, browser]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewGestureCommandEvent(const browser_view: ICefBrowserView; gesture_command: TCefGestureCommand; var aResult: boolean);
begin
  SendEvent([browser_view, Integer(gesture_command), @aResult]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewGetBrowserRuntimeStyleEvent(var aResult: TCefRuntimeStyle);
begin
  SendEvent([@aResult]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewGetChromeToolbarTypeEvent(const browser_view: ICefBrowserView; var aResult: TCefChromeToolbarType);
begin
  SendEvent([browser_view, @aResult]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewGetDelegateForPopupBrowserViewEvent(const browser_view: ICefBrowserView; const settings: TCefBrowserSettings; const client: ICefClient; is_devtools: boolean; var aResult: ICefBrowserViewDelegate);
var
  settingsPtr: TCefBrowserSettingsPtr;
begin
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([browser_view, @settingsPtr, client, is_devtools, @aResult]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewPopupBrowserViewCreatedEvent(const browser_view: ICefBrowserView; const popup_browser_view: ICefBrowserView; is_devtools: boolean; var aResult: boolean);
begin
  SendEvent([browser_view, popup_browser_view, is_devtools, @aResult]);
end;

procedure TCEFEvent.TEngBrowserViewDelegate_TOnBrowserViewUseFramelessWindowForPictureInPictureEvent(const browser_view: ICefBrowserView; var aResult: boolean);
begin
  SendEvent([browser_view, @aResult]);
end;

procedure TCEFEvent.TEngButtonDelegate_TOnButtonButtonPressedEvent(const button: ICefButton);
begin
  SendEvent([button]);
end;

procedure TCEFEvent.TEngButtonDelegate_TOnButtonButtonStateChangedEvent(const button: ICefButton);
begin
  SendEvent([button]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetAudioHandlerEvent(var aHandler: ICefAudioHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetCommandHandlerEvent(var aHandler: ICefCommandHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetContextMenuHandlerEvent(var aHandler: ICefContextMenuHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetDialogHandlerEvent(var aHandler: ICefDialogHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetDisplayHandlerEvent(var aHandler: ICefDisplayHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetDownloadHandlerEvent(var aHandler: ICefDownloadHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetDragHandlerEvent(var aHandler: ICefDragHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetFindHandlerEvent(var aHandler: ICefFindHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetFocusHandlerEvent(var aHandler: ICefFocusHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetFrameHandlerEvent(var aHandler: ICefFrameHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetJsdialogHandlerEvent(var aHandler: ICefJsdialogHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetKeyboardHandlerEvent(var aHandler: ICefKeyboardHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetLifeSpanHandlerEvent(var aHandler: ICefLifeSpanHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetLoadHandlerEvent(var aHandler: ICefLoadHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetPermissionHandlerEvent(var aHandler: ICefPermissionHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetPrintHandlerEvent(var aHandler: ICefPrintHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetRenderHandlerEvent(var aHandler: ICefRenderHandler);
begin
  SendEvent([@aHandler]);
end;

procedure TCEFEvent.TEngClient_TOnClientGetRequestHandlerEvent(var aHandler: ICefRequestHandler);
begin
  SendEvent([@aHandler]);
end;

function TCEFEvent.TEngClient_TOnClientProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message_: ICefProcessMessage): Boolean;
begin
  SendEvent([browser, frame, Integer(sourceProcess), message_, @Result]);
end;

function TCEFEvent.TEngCommandHandler_TOnCommandChromeCommandEvent(const browser: ICefBrowser; command_id: integer; disposition: TCefWindowOpenDisposition): boolean;
begin
  SendEvent([browser, command_id, Integer(disposition), @Result]);
end;

function TCEFEvent.TEngCommandHandler_TOnCommandIsChromeAppMenuItemEnabledEvent(const browser: ICefBrowser; command_id: integer): boolean;
begin
  SendEvent([browser, command_id, @Result]);
end;

function TCEFEvent.TEngCommandHandler_TOnCommandIsChromeAppMenuItemVisibleEvent(const browser: ICefBrowser; command_id: integer): boolean;
begin
  SendEvent([browser, command_id, @Result]);
end;

function TCEFEvent.TEngCommandHandler_TOnCommandIsChromePageActionIconVisibleEvent(icon_type: TCefChromePageActionIconType): boolean;
begin
  SendEvent([Integer(icon_type), @Result]);
end;

function TCEFEvent.TEngCommandHandler_TOnCommandIsChromeToolbarButtonVisibleEvent(button_type: TCefChromeToolbarButtonType): boolean;
begin
  SendEvent([Integer(button_type), @Result]);
end;

procedure TCEFEvent.TEngCompletionCallback_TOnCompletionCallbackCompleteEvent();
begin
  SendEvent([]);
end;

procedure TCEFEvent.TEngContextMenuHandler_TOnContextMenuBeforeContextMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel);
begin
  SendEvent([browser, frame, params, model]);
end;

function TCEFEvent.TEngContextMenuHandler_TOnContextMenuContextMenuCommandEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; commandId: Integer; eventFlags: TCefEventFlags): Boolean;
begin
  SendEvent([browser, frame, params, commandId, eventFlags, @Result]);
end;

procedure TCEFEvent.TEngContextMenuHandler_TOnContextMenuContextMenuDismissedEvent(const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([browser, frame]);
end;

function TCEFEvent.TEngContextMenuHandler_TOnContextMenuQuickMenuCommandEvent(const browser: ICefBrowser; const frame: ICefFrame; command_id: integer; event_flags: TCefEventFlags): boolean;
begin
  SendEvent([browser, frame, command_id, event_flags, @Result]);
end;

procedure TCEFEvent.TEngContextMenuHandler_TOnContextMenuQuickMenuDismissedEvent(const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([browser, frame]);
end;

function TCEFEvent.TEngContextMenuHandler_TOnContextMenuRunContextMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; const params: ICefContextMenuParams; const model: ICefMenuModel; const callback: ICefRunContextMenuCallback): Boolean;
begin
  SendEvent([browser, frame, params, model, callback, @Result]);
end;

function TCEFEvent.TEngContextMenuHandler_TOnContextMenuRunQuickMenuEvent(const browser: ICefBrowser; const frame: ICefFrame; location: PCefPoint; size: PCefSize; edit_state_flags: TCefQuickMenuEditStateFlags; const callback: ICefRunQuickMenuCallback): boolean;
var
  locationPtr: TCefPointPtr;
  sizePtr: TCefSizePtr;
begin
  locationPtr := TCefPointToGo(location^);
  sizePtr := TCefSizeToGo(size^);
  SendEvent([browser, frame, @locationPtr, @sizePtr, edit_state_flags, callback, @Result]);
end;

function TCEFEvent.TEngCookieAccessFilter_TOnCookieAccessFilterCanSaveCookieEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; const cookie: PCefCookie): boolean;
var
  cookiePtr: TCefCookiePtr;
begin
  cookiePtr := TCefCookieToGo(cookie^);
  SendEvent([browser, frame, request, response, @cookiePtr, @Result]);
end;

function TCEFEvent.TEngCookieAccessFilter_TOnCookieAccessFilterCanSendCookieEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const cookie: PCefCookie): boolean;
var
  cookiePtr: TCefCookiePtr;
begin
  cookiePtr := TCefCookieToGo(cookie^);
  SendEvent([browser, frame, request, @cookiePtr, @Result]);
end;

function TCEFEvent.TEngCookieVisitor_TOnCookieVisitorVisitEvent(const name: ustring; const value: ustring; const domain: ustring; const path: ustring; secure: Boolean; httponly: Boolean; hasExpires: Boolean; const creation: TDateTime; const lastAccess: TDateTime; const expires: TDateTime; count: Integer; total: Integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: Boolean): Boolean;
begin
  SendEvent([ToPChar(name), ToPChar(value), ToPChar(domain), ToPChar(path), secure, httponly, hasExpires, @creation, @lastAccess, @expires, count, total, Integer(same_site), priority, @deleteCookie, @Result]);
end;

procedure TCEFEvent.TEngDeleteCookiesCallback_TOnDeleteCookiesCallbackCompleteEvent(numDeleted: Integer);
begin
  SendEvent([numDeleted]);
end;

procedure TCEFEvent.TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentAttachedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentDetachedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsEvent(const browser: ICefBrowser; const method: ustring; const params: Pointer; params_size: NativeUInt);
begin
  SendEvent([browser, ToPChar(method), params, uint32(params_size)]);
end;

procedure TCEFEvent.TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMessageEvent(const browser: ICefBrowser; const message_: Pointer; message_size: NativeUInt; var aHandled: boolean);
begin
  SendEvent([browser, message_, uint32(message_size), @aHandled]);
end;

procedure TCEFEvent.TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMethodResultEvent(const browser: ICefBrowser; message_id: integer; success: boolean; const result: Pointer; result_size: NativeUInt);
begin
  SendEvent([browser, message_id, success, result, uint32(result_size)]);
end;

function TCEFEvent.TEngDialogHandler_TOnDialogFileDialogEvent(const browser: ICefBrowser; mode: TCefFileDialogMode; const title: ustring; const defaultFilePath: ustring; const acceptFilters: TStrings; const accept_extensions: TStrings; const accept_descriptions: TStrings; const callback: ICefFileDialogCallback): Boolean;
begin
  SendEvent([browser, mode, ToPChar(title), ToPChar(defaultFilePath), acceptFilters, accept_extensions, accept_descriptions, callback, @Result]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayAddressChangeEvent(const browser: ICefBrowser; const frame: ICefFrame; const url: ustring);
begin
  SendEvent([browser, frame, ToPChar(url)]);
end;

function TCEFEvent.TEngDisplayHandler_TOnDisplayAutoResizeEvent(const browser: ICefBrowser; const new_size: PCefSize): Boolean;
var
  new_sizePtr: TCefSizePtr;
begin
  new_sizePtr := TCefSizeToGo(new_size^);
  SendEvent([browser, @new_sizePtr, @Result]);
end;

function TCEFEvent.TEngDisplayHandler_TOnDisplayConsoleMessageEvent(const browser: ICefBrowser; level: TCefLogSeverity; const message_: ustring; const source: ustring; line: Integer): Boolean;
begin
  SendEvent([browser, level, ToPChar(message_), ToPChar(source), line, @Result]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayCursorChangeEvent(const browser: ICefBrowser; cursor_: TCefCursorHandle; CursorType: TCefCursorType; const customCursorInfo: PCefCursorInfo; var aResult: boolean);
var
  customCursorInfoPtr: TCefCursorInfoPtr;
begin
  customCursorInfoPtr := TCefCursorInfoToGo(customCursorInfo^);
  SendEvent([browser, cursor_, Integer(CursorType), @customCursorInfoPtr, @aResult]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayFaviconUrlChangeEvent(const browser: ICefBrowser; const iconUrls: TStrings);
begin
  SendEvent([browser, iconUrls]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayFullScreenModeChangeEvent(const browser: ICefBrowser; fullscreen: Boolean);
begin
  SendEvent([browser, fullscreen]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayLoadingProgressChangeEvent(const browser: ICefBrowser; const progress: double);
begin
  SendEvent([browser, @progress]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayMediaAccessChangeEvent(const browser: ICefBrowser; has_video_access: boolean; has_audio_access: boolean);
begin
  SendEvent([browser, has_video_access, has_audio_access]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayStatusMessageEvent(const browser: ICefBrowser; const value: ustring);
begin
  SendEvent([browser, ToPChar(value)]);
end;

procedure TCEFEvent.TEngDisplayHandler_TOnDisplayTitleChangeEvent(const browser: ICefBrowser; const title: ustring);
begin
  SendEvent([browser, ToPChar(title)]);
end;

function TCEFEvent.TEngDisplayHandler_TOnDisplayTooltipEvent(const browser: ICefBrowser; var text: ustring): Boolean;
var
  Rettext: PChar;
begin
  Rettext := ToPChar(text);
  SendEvent([browser, @Rettext, @Result]);
  text := PCharToUStr(Rettext);
end;

procedure TCEFEvent.TEngDomVisitor_TOnDomVisitorVisitEvent(const document: ICefDomDocument);
begin
  SendEvent([document]);
end;

function TCEFEvent.TEngDownloadHandler_TOnDownloadBeforeDownloadEvent(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const suggestedName: ustring; const callback: ICefBeforeDownloadCallback): boolean;
begin
  SendEvent([browser, downloadItem, ToPChar(suggestedName), callback, @Result]);
end;

function TCEFEvent.TEngDownloadHandler_TOnDownloadCanDownloadEvent(const browser: ICefBrowser; const url: ustring; const request_method: ustring): boolean;
begin
  SendEvent([browser, ToPChar(url), ToPChar(request_method), @Result]);
end;

procedure TCEFEvent.TEngDownloadHandler_TOnDownloadDownloadUpdatedEvent(const browser: ICefBrowser; const downloadItem: ICefDownloadItem; const callback: ICefDownloadItemCallback);
begin
  SendEvent([browser, downloadItem, callback]);
end;

procedure TCEFEvent.TEngDownloadImageCallback_TOnDownloadImageCallbackDownloadImageFinishedEvent(const imageUrl: ustring; httpStatusCode: Integer; const image: ICefImage);
begin
  SendEvent([ToPChar(imageUrl), httpStatusCode, image]);
end;

function TCEFEvent.TEngDragHandler_TOnDragDragEnterEvent(const browser: ICefBrowser; const dragData: ICefDragData; mask: TCefDragOperations): Boolean;
begin
  SendEvent([browser, dragData, mask, @Result]);
end;

procedure TCEFEvent.TEngDragHandler_TOnDragDraggableRegionsChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray);
var
  regionsPtr: Pointer = nil;
begin
  if regionsCount > 0 then
      regionsPtr := @regions^[0];
  SendEvent([browser, frame, uint32(regionsCount), regionsPtr]);
end;

procedure TCEFEvent.TEngEndTracingCallback_TOnEndTracingCallbackEndTracingCompleteEvent(const tracingFile: ustring);
begin
  SendEvent([ToPChar(tracingFile)]);
end;

function TCEFEvent.TEngExtensionHandler_TOnExtensionBeforeBackgroundBrowserEvent(const extension: ICefExtension; const url: ustring; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
var
  settingsPtr: TCefBrowserSettingsPtr;
begin
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([extension, ToPChar(url), @client, @settingsPtr, @Result]);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

function TCEFEvent.TEngExtensionHandler_TOnExtensionBeforeBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; const active_browser: ICefBrowser; index: Integer; const url: ustring; active: boolean; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings): boolean;
var
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([extension, browser, active_browser, index, ToPChar(url), active, @windowInfoPtr, @client, @settingsPtr, @Result]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

function TCEFEvent.TEngExtensionHandler_TOnExtensionCanAccessBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; const target_browser: ICefBrowser): boolean;
begin
  SendEvent([extension, browser, include_incognito, target_browser, @Result]);
end;

procedure TCEFEvent.TEngExtensionHandler_TOnExtensionExtensionLoadFailedEvent(result: TCefErrorcode);
begin
  SendEvent([result]);
end;

procedure TCEFEvent.TEngExtensionHandler_TOnExtensionExtensionLoadedEvent(const extension: ICefExtension);
begin
  SendEvent([extension]);
end;

procedure TCEFEvent.TEngExtensionHandler_TOnExtensionExtensionUnloadedEvent(const extension: ICefExtension);
begin
  SendEvent([extension]);
end;

procedure TCEFEvent.TEngExtensionHandler_TOnExtensionGetActiveBrowserEvent(const extension: ICefExtension; const browser: ICefBrowser; include_incognito: boolean; var aRsltBrowser: ICefBrowser);
begin
  SendEvent([extension, browser, include_incognito, @aRsltBrowser]);
end;

function TCEFEvent.TEngExtensionHandler_TOnExtensionGetExtensionResourceEvent(const extension: ICefExtension; const browser: ICefBrowser; const file_: ustring; const callback: ICefGetExtensionResourceCallback): boolean;
begin
  SendEvent([extension, browser, ToPChar(file_), callback, @Result]);
end;

procedure TCEFEvent.TEngFindHandler_TOnFindFindResultEvent(const browser: ICefBrowser; identifier: Integer; count: Integer; const selectionRect: PCefRect; activeMatchOrdinal: Integer; finalUpdate: Boolean);
var
  selectionRectPtr: TCefRectPtr;
begin
  selectionRectPtr := TCefRectToGo(selectionRect^);
  SendEvent([browser, identifier, count, @selectionRectPtr, activeMatchOrdinal, finalUpdate]);
end;

procedure TCEFEvent.TEngFocusHandler_TOnFocusGotFocusEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

function TCEFEvent.TEngFocusHandler_TOnFocusSetFocusEvent(const browser: ICefBrowser; source: TCefFocusSource): Boolean;
begin
  SendEvent([browser, Integer(source), @Result]);
end;

procedure TCEFEvent.TEngFocusHandler_TOnFocusTakeFocusEvent(const browser: ICefBrowser; next: Boolean);
begin
  SendEvent([browser, next]);
end;

procedure TCEFEvent.TEngFrameHandler_TOnFrameFrameAttachedEvent(const browser: ICefBrowser; const frame: ICefFrame; reattached: boolean);
begin
  SendEvent([browser, frame, reattached]);
end;

procedure TCEFEvent.TEngFrameHandler_TOnFrameFrameCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([browser, frame]);
end;

procedure TCEFEvent.TEngFrameHandler_TOnFrameFrameDetachedEvent(const browser: ICefBrowser; const frame: ICefFrame);
begin
  SendEvent([browser, frame]);
end;

procedure TCEFEvent.TEngFrameHandler_TOnFrameMainFrameChangedEvent(const browser: ICefBrowser; const old_frame: ICefFrame; const new_frame: ICefFrame);
begin
  SendEvent([browser, old_frame, new_frame]);
end;

function TCEFEvent.TEngJsDialogHandler_TOnJsDialogBeforeUnloadDialogEvent(const browser: ICefBrowser; const messageText: ustring; isReload: Boolean; const callback: ICefJsDialogCallback): Boolean;
begin
  SendEvent([browser, ToPChar(messageText), isReload, callback, @Result]);
end;

procedure TCEFEvent.TEngJsDialogHandler_TOnJsDialogDialogClosedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

function TCEFEvent.TEngJsDialogHandler_TOnJsDialogJsdialogEvent(const browser: ICefBrowser; const originUrl: ustring; dialogType: TCefJsDialogType; const messageText: ustring; const defaultPromptText: ustring; const callback: ICefJsDialogCallback; out suppressMessage: Boolean): Boolean;
begin
  SendEvent([browser, ToPChar(originUrl), Integer(dialogType), ToPChar(messageText), ToPChar(defaultPromptText), callback, @suppressMessage, @Result]);
end;

procedure TCEFEvent.TEngJsDialogHandler_TOnJsDialogResetDialogStateEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

function TCEFEvent.TEngKeyboardHandler_TOnKeyboardKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle): Boolean;
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event^);
  SendEvent([browser, @eventPtr, osEvent, @Result]);
end;

function TCEFEvent.TEngKeyboardHandler_TOnKeyboardPreKeyEvent(const browser: ICefBrowser; const event: PCefKeyEvent; osEvent: TCefEventHandle; out isKeyboardShortcut: Boolean): Boolean;
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event^);
  SendEvent([browser, @eventPtr, osEvent, @isKeyboardShortcut, @Result]);
end;

procedure TCEFEvent.TEngLifeSpanHandler_TOnLifeSpanAfterCreatedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngLifeSpanHandler_TOnLifeSpanBeforeCloseEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngLifeSpanHandler_TOnLifeSpanBeforeDevToolsPopupEvent(const browser: ICefBrowser; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var use_default_window: boolean);
var
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([browser, @windowInfoPtr, @client, @settingsPtr, @extra_info, @use_default_window]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

function TCEFEvent.TEngLifeSpanHandler_TOnLifeSpanBeforePopupEvent(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; const targetFrameName: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean; const popupFeatures: TCefPopupFeatures; var windowInfo: TCefWindowInfo; var client: ICefClient; var settings: TCefBrowserSettings; var extra_info: ICefDictionaryValue; var noJavascriptAccess: Boolean): Boolean;
var
  popupFeaturesPtr: TCefPopupFeaturesPtr;
  windowInfoPtr: TCefWindowInfoPtr;
  settingsPtr: TCefBrowserSettingsPtr;
begin
  popupFeaturesPtr := TCefPopupFeaturesToGo(popupFeatures);
  windowInfoPtr := TCefWindowInfoToGo(windowInfo);
  settingsPtr := TCefBrowserSettingsToGo(settings);
  SendEvent([browser, frame, ToPChar(targetUrl), ToPChar(targetFrameName), Integer(targetDisposition), userGesture, @popupFeaturesPtr, @windowInfoPtr, @client, @settingsPtr, @extra_info, @noJavascriptAccess, @Result]);
  windowInfo := TCefWindowInfoToPas(windowInfoPtr);
  settings := TCefBrowserSettingsToPas(settingsPtr);
end;

function TCEFEvent.TEngLifeSpanHandler_TOnLifeSpanDoCloseEvent(const browser: ICefBrowser): Boolean;
begin
  SendEvent([browser, @Result]);
end;

procedure TCEFEvent.TEngLoadHandler_TOnLoadLoadEndEvent(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
begin
  SendEvent([browser, frame, httpStatusCode]);
end;

procedure TCEFEvent.TEngLoadHandler_TOnLoadLoadErrorEvent(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText: ustring; const failedUrl: ustring);
begin
  SendEvent([browser, frame, errorCode, ToPChar(errorText), ToPChar(failedUrl)]);
end;

procedure TCEFEvent.TEngLoadHandler_TOnLoadLoadStartEvent(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  SendEvent([browser, frame, transitionType]);
end;

procedure TCEFEvent.TEngLoadHandler_TOnLoadLoadingStateChangeEvent(const browser: ICefBrowser; isLoading: Boolean; canGoBack: Boolean; canGoForward: Boolean);
begin
  SendEvent([browser, isLoading, canGoBack, canGoForward]);
end;

function TCEFEvent.TEngMediaAccessHandler_TOnMediaAccessRequestMediaAccessPermissionEvent(const browser: ICefBrowser; const frame: ICefFrame; const requesting_url: ustring; requested_permissions: TCefMediaAccessPermissionTypes; const callback: ICefMediaAccessCallback): boolean;
begin
  SendEvent([browser, frame, ToPChar(requesting_url), requested_permissions, callback, @Result]);
end;

procedure TCEFEvent.TEngMediaObserver_TOnMediaObserverRouteMessageReceivedEvent(const route: ICefMediaRoute; const message_: ustring);
begin
  SendEvent([route, ToPChar(message_)]);
end;

procedure TCEFEvent.TEngMediaObserver_TOnMediaObserverRouteStateChangedEvent(const route: ICefMediaRoute; state: TCefMediaRouteConnectionState);
begin
  SendEvent([route, Integer(state)]);
end;

procedure TCEFEvent.TEngMediaObserver_TOnMediaObserverRoutesEvent(const routes: TCefMediaRouteArray);
var
  routesPtr: Pointer = nil;
  routesLen: Integer;
begin
  routesLen := Length(routes);
  if routesLen > 0 then
    routesPtr := @routes[0];
  SendEvent([routesPtr, routesLen]);
end;

procedure TCEFEvent.TEngMediaObserver_TOnMediaObserverSinksEvent(const sinks: TCefMediaSinkArray);
var
  sinksPtr: Pointer = nil;
  sinksLen: Integer;
begin
  sinksLen := Length(sinks);
  if sinksLen > 0 then
    sinksPtr := @sinks[0];
  SendEvent([sinksPtr, sinksLen]);
end;

procedure TCEFEvent.TEngMediaRouteCreateCallback_TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent(result: TCefMediaRouterCreateResult; const error: ustring; const route: ICefMediaRoute);
begin
  SendEvent([result, ToPChar(error), route]);
end;

procedure TCEFEvent.TEngMediaSinkDeviceInfoCallback_TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent(const ip_address: ustring; port: integer; const model_name: ustring);
begin
  SendEvent([ToPChar(ip_address), port, ToPChar(model_name)]);
end;

procedure TCEFEvent.TEngMenuButtonDelegate_TOnMenuButtonMenuButtonPressedEvent(const menu_button: ICefMenuButton; const screen_point: TCefPoint; const button_pressed_lock: ICefMenuButtonPressedLock);
var
  screen_pointPtr: TCefPointPtr;
begin
  screen_pointPtr := TCefPointToGo(screen_point);
  SendEvent([menu_button, @screen_pointPtr, button_pressed_lock]);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelExecuteCommandEvent(const menuModel: ICefMenuModel; commandId: Integer; eventFlags: TCefEventFlags);
begin
  SendEvent([menuModel, commandId, eventFlags]);
end;

function TCEFEvent.TEngMenuModelDelegate_TOnMenuModelFormatLabelEvent(const menuModel: ICefMenuModel; var label_: ustring): boolean;
var
  Retlabel_: PChar;
begin
  Retlabel_ := ToPChar(label_);
  SendEvent([menuModel, @Retlabel_, @Result]);
  label_ := PCharToUStr(Retlabel_);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelMenuClosedEvent(const menuModel: ICefMenuModel);
begin
  SendEvent([menuModel]);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelMenuWillShowEvent(const menuModel: ICefMenuModel);
begin
  SendEvent([menuModel]);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelMouseOutsideMenuEvent(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
var
  screenPointPtr: TCefPointPtr;
begin
  screenPointPtr := TCefPointToGo(screenPoint^);
  SendEvent([menuModel, @screenPointPtr]);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelUnhandledCloseSubmenuEvent(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  SendEvent([menuModel, isRTL]);
end;

procedure TCEFEvent.TEngMenuModelDelegate_TOnMenuModelUnhandledOpenSubmenuEvent(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  SendEvent([menuModel, isRTL]);
end;

function TCEFEvent.TEngNavigationEntryVisitor_TOnNavigationEntryVisitorVisitEvent(const entry: ICefNavigationEntry; current: Boolean; index: Integer; total: Integer): Boolean;
begin
  SendEvent([entry, current, index, total, @Result]);
end;

procedure TCEFEvent.TEngPdfPrintCallback_TOnPdfPrintCallbackPdfPrintFinishedEvent(const path: ustring; ok: Boolean);
begin
  SendEvent([ToPChar(path), ok]);
end;

procedure TCEFEvent.TEngPermissionHandler_TOnPermissionDismissPermissionPromptEvent(const browser: ICefBrowser; prompt_id: uint64; result: TCefPermissionRequestResult);
begin
  SendEvent([browser, @prompt_id, Integer(result)]);
end;

function TCEFEvent.TEngPermissionHandler_TOnPermissionRequestMediaAccessPermissionEvent(const browser: ICefBrowser; const frame: ICefFrame; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefMediaAccessCallback): boolean;
begin
  SendEvent([browser, frame, ToPChar(requesting_origin), requested_permissions, callback, @Result]);
end;

function TCEFEvent.TEngPermissionHandler_TOnPermissionShowPermissionPromptEvent(const browser: ICefBrowser; prompt_id: uint64; const requesting_origin: ustring; requested_permissions: cardinal; const callback: ICefPermissionPromptCallback): boolean;
begin
  SendEvent([browser, @prompt_id, ToPChar(requesting_origin), requested_permissions, callback, @Result]);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintGetPDFPaperSizeEvent(const browser: ICefBrowser; deviceUnitsPerInch: Integer; var aResult: TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([browser, deviceUnitsPerInch, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintPrintDialogEvent(const browser: ICefBrowser; hasSelection: boolean; const callback: ICefPrintDialogCallback; var aResult: boolean);
begin
  SendEvent([browser, hasSelection, callback, @aResult]);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintPrintJobEvent(const browser: ICefBrowser; const documentName: ustring; const PDFFilePath: ustring; const callback: ICefPrintJobCallback; var aResult: boolean);
begin
  SendEvent([browser, ToPChar(documentName), ToPChar(PDFFilePath), callback, @aResult]);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintPrintResetEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintPrintSettingsEvent(const browser: ICefBrowser; const settings: ICefPrintSettings; getDefaults: boolean);
begin
  SendEvent([browser, settings, getDefaults]);
end;

procedure TCEFEvent.TEngPrintHandler_TOnPrintPrintStartEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderAcceleratedPaintEvent(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const info: PCefAcceleratedPaintInfo);
var
  dirtyRectsPtr: Pointer = nil;
  infoPtr: TCefAcceleratedPaintInfoPtr;
begin
  if dirtyRectsCount > 0 then
      dirtyRectsPtr := @dirtyRects^[0];
  infoPtr := TCefAcceleratedPaintInfoToGo(info^);
  SendEvent([browser, Integer(kind), uint32(dirtyRectsCount), dirtyRectsPtr, @infoPtr]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderGetAccessibilityHandlerEvent(var aAccessibilityHandler: ICefAccessibilityHandler);
begin
  SendEvent([@aAccessibilityHandler]);
end;

function TCEFEvent.TEngRenderHandler_TOnRenderGetRootScreenRectEvent(const browser: ICefBrowser; var rect: TCefRect): Boolean;
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect);
  SendEvent([browser, @rectPtr, @Result]);
  rect := TCefRectToPas(rectPtr);
end;

function TCEFEvent.TEngRenderHandler_TOnRenderGetScreenInfoEvent(const browser: ICefBrowser; var screenInfo: TCefScreenInfo): Boolean;
var
  screenInfoPtr: TCefScreenInfoPtr;
begin
  screenInfoPtr := TCefScreenInfoToGo(screenInfo);
  SendEvent([browser, @screenInfoPtr, @Result]);
  screenInfo := TCefScreenInfoToPas(screenInfoPtr);
end;

function TCEFEvent.TEngRenderHandler_TOnRenderGetScreenPointEvent(const browser: ICefBrowser; viewX: Integer; viewY: Integer; var screenX: Integer; var screenY: Integer): Boolean;
begin
  SendEvent([browser, viewX, viewY, @screenX, @screenY, @Result]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderGetTouchHandleSizeEvent(const browser: ICefBrowser; orientation: TCefHorizontalAlignment; var size: TCefSize);
var
  sizePtr: TCefSizePtr;
begin
  sizePtr := TCefSizeToGo(size);
  SendEvent([browser, Integer(orientation), @sizePtr]);
  size := TCefSizeToPas(sizePtr);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderGetViewRectEvent(const browser: ICefBrowser; var rect: TCefRect);
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect);
  SendEvent([browser, @rectPtr]);
  rect := TCefRectToPas(rectPtr);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderIMECompositionRangeChangedEvent(const browser: ICefBrowser; const selected_range: PCefRange; character_boundsCount: NativeUInt; const character_bounds: PCefRect);
var
  selected_rangePtr: TCefRangePtr;
  character_boundsPtr: TCefRectPtr;
begin
  selected_rangePtr := TCefRangeToGo(selected_range^);
  character_boundsPtr := TCefRectToGo(character_bounds^);
  SendEvent([browser, @selected_rangePtr, uint32(character_boundsCount), @character_boundsPtr]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderPaintEvent(const browser: ICefBrowser; kind: TCefPaintElementType; dirtyRectsCount: NativeUInt; const dirtyRects: PCefRectArray; const buffer: Pointer; width: Integer; height: Integer);
var
  dirtyRectsPtr: Pointer = nil;
begin
  if dirtyRectsCount > 0 then
      dirtyRectsPtr := @dirtyRects^[0];
  SendEvent([browser, Integer(kind), uint32(dirtyRectsCount), dirtyRectsPtr, buffer, width, height]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderPopupShowEvent(const browser: ICefBrowser; show: Boolean);
begin
  SendEvent([browser, show]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderPopupSizeEvent(const browser: ICefBrowser; const rect: PCefRect);
var
  rectPtr: TCefRectPtr;
begin
  rectPtr := TCefRectToGo(rect^);
  SendEvent([browser, @rectPtr]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderScrollOffsetChangedEvent(const browser: ICefBrowser; x: Double; y: Double);
begin
  SendEvent([browser, @x, @y]);
end;

function TCEFEvent.TEngRenderHandler_TOnRenderStartDraggingEvent(const browser: ICefBrowser; const dragData: ICefDragData; allowedOps: TCefDragOperations; x: Integer; y: Integer): Boolean;
begin
  SendEvent([browser, dragData, allowedOps, x, y, @Result]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderTextSelectionChangedEvent(const browser: ICefBrowser; const selected_text: ustring; const selected_range: PCefRange);
var
  selected_rangePtr: TCefRangePtr;
begin
  selected_rangePtr := TCefRangeToGo(selected_range^);
  SendEvent([browser, ToPChar(selected_text), @selected_rangePtr]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderTouchHandleStateChangedEvent(const browser: ICefBrowser; const state: TCefTouchHandleState);
var
  statePtr: TCefTouchHandleStatePtr;
begin
  statePtr := TCefTouchHandleStateToGo(state);
  SendEvent([browser, @statePtr]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderUpdateDragCursorEvent(const browser: ICefBrowser; operation: TCefDragOperation);
begin
  SendEvent([browser, operation]);
end;

procedure TCEFEvent.TEngRenderHandler_TOnRenderVirtualKeyboardRequestedEvent(const browser: ICefBrowser; input_mode: TCefTextInpuMode);
begin
  SendEvent([browser, Integer(input_mode)]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessBrowserCreatedEvent(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
begin
  SendEvent([browser, extra_info]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessBrowserDestroyedEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessContextCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  SendEvent([browser, frame, context]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessContextReleasedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  SendEvent([browser, frame, context]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessFocusedNodeChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
begin
  SendEvent([browser, frame, node]);
end;

function TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessGetLoadHandlerEvent(): ICefLoadHandler;
begin
  SendEvent([@Result]);
end;

function TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const aMessage: ICefProcessMessage): Boolean;
begin
  SendEvent([browser, frame, Integer(sourceProcess), aMessage, @Result]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessUncaughtExceptionEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const V8Exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
begin
  SendEvent([browser, frame, context, V8Exception, stackTrace]);
end;

procedure TCEFEvent.TEngRenderProcessHandler_TOnRenderProcessWebKitInitializedEvent();
begin
  SendEvent([]);
end;

procedure TCEFEvent.TEngRequestContextHandler_TOnRequestContextGetResourceRequestHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
begin
  SendEvent([browser, frame, request, is_navigation, is_download, ToPChar(request_initiator), @disable_default_handling, @aResourceRequestHandler]);
end;

procedure TCEFEvent.TEngRequestContextHandler_TOnRequestContextRequestContextInitializedEvent(const request_context: ICefRequestContext);
begin
  SendEvent([request_context]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestBeforeBrowseEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; user_gesture: Boolean; isRedirect: Boolean): Boolean;
begin
  SendEvent([browser, frame, request, user_gesture, isRedirect, @Result]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestCertificateErrorEvent(const browser: ICefBrowser; certError: TCefErrorcode; const requestUrl: ustring; const sslInfo: ICefSslInfo; const callback: ICefCallback): Boolean;
begin
  SendEvent([browser, certError, ToPChar(requestUrl), sslInfo, callback, @Result]);
end;

procedure TCEFEvent.TEngRequestHandler_TOnRequestDocumentAvailableInMainFrameEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestGetAuthCredentialsEvent(const browser: ICefBrowser; const originUrl: ustring; isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
begin
  SendEvent([browser, ToPChar(originUrl), isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @Result]);
end;

procedure TCEFEvent.TEngRequestHandler_TOnRequestGetResourceRequestHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; is_navigation: boolean; is_download: boolean; const request_initiator: ustring; var disable_default_handling: boolean; var aResourceRequestHandler: ICefResourceRequestHandler);
begin
  SendEvent([browser, frame, request, is_navigation, is_download, ToPChar(request_initiator), @disable_default_handling, @aResourceRequestHandler]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestOpenUrlFromTabEvent(const browser: ICefBrowser; const frame: ICefFrame; const targetUrl: ustring; targetDisposition: TCefWindowOpenDisposition; userGesture: Boolean): Boolean;
begin
  SendEvent([browser, frame, ToPChar(targetUrl), Integer(targetDisposition), userGesture, @Result]);
end;

procedure TCEFEvent.TEngRequestHandler_TOnRequestRenderProcessResponsiveEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

procedure TCEFEvent.TEngRequestHandler_TOnRequestRenderProcessTerminatedEvent(const browser: ICefBrowser; status: TCefTerminationStatus; error_code: integer; const error_string: ustring);
begin
  SendEvent([browser, Integer(status), error_code, ToPChar(error_string)]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestRenderProcessUnresponsiveEvent(const browser: ICefBrowser; const callback: ICefUnresponsiveProcessCallback): boolean;
begin
  SendEvent([browser, callback, @Result]);
end;

procedure TCEFEvent.TEngRequestHandler_TOnRequestRenderViewReadyEvent(const browser: ICefBrowser);
begin
  SendEvent([browser]);
end;

function TCEFEvent.TEngRequestHandler_TOnRequestSelectClientCertificateEvent(const browser: ICefBrowser; isProxy: boolean; const host: ustring; port: integer; certificatesCount: NativeUInt; const certificates: TCefX509CertificateArray; const callback: ICefSelectClientCertificateCallback): boolean;
var
  certificatesPtr: Pointer = nil;
  certificatesLen: Integer;
begin
  certificatesLen := Length(certificates);
  if certificatesLen > 0 then
    certificatesPtr := @certificates[0];
  SendEvent([browser, isProxy, ToPChar(host), port, uint32(certificatesCount), certificatesPtr, certificatesLen, callback, @Result]);
end;

procedure TCEFEvent.TEngResolveCallback_TOnResolveCallbackResolveCompletedEvent(result: TCefErrorCode; const resolvedIps: TStrings);
begin
  SendEvent([result, resolvedIps]);
end;

function TCEFEvent.TEngResourceBundleHandler_TOnResourceBundleGetDataResourceEvent(resourceId: Integer; var data: Pointer; var dataSize: NativeUInt): Boolean;
begin
  SendEvent([resourceId, @data, @dataSize, @Result]);
end;

function TCEFEvent.TEngResourceBundleHandler_TOnResourceBundleGetDataResourceForScaleEvent(resourceId: Integer; scaleFactor: TCefScaleFactor; var data: Pointer; var dataSize: NativeUInt): Boolean;
begin
  SendEvent([resourceId, Integer(scaleFactor), @data, @dataSize, @Result]);
end;

function TCEFEvent.TEngResourceBundleHandler_TOnResourceBundleGetLocalizedStringEvent(stringid: Integer; var stringVal: ustring): Boolean;
var
  RetstringVal: PChar;
begin
  RetstringVal := ToPChar(stringVal);
  SendEvent([stringid, @RetstringVal, @Result]);
  stringVal := PCharToUStr(RetstringVal);
end;

procedure TCEFEvent.TEngResourceHandler_TOnResourceCancelEvent();
begin
  SendEvent([]);
end;

procedure TCEFEvent.TEngResourceHandler_TOnResourceGetResponseHeadersEvent(const response: ICefResponse; out responseLength: Int64; out redirectUrl: ustring);
var
  RetredirectUrl: PChar;
begin
  SendEvent([response, @responseLength, @RetredirectUrl]);
  redirectUrl := PCharToUStr(RetredirectUrl);
end;

function TCEFEvent.TEngResourceHandler_TOnResourceOpenEvent(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
begin
  SendEvent([request, @handle_request, callback, @Result]);
end;

function TCEFEvent.TEngResourceHandler_TOnResourceProcessRequestEvent(const request: ICefRequest; const callback: ICefCallback): Boolean;
begin
  SendEvent([request, callback, @Result]);
end;

function TCEFEvent.TEngResourceHandler_TOnResourceReadEvent(const data_out: Pointer; bytes_to_read: Integer; var bytes_read: Integer; const callback: ICefResourceReadCallback): boolean;
begin
  SendEvent([data_out, bytes_to_read, @bytes_read, callback, @Result]);
end;

function TCEFEvent.TEngResourceHandler_TOnResourceReadResponseEvent(const dataOut: Pointer; bytesToRead: Integer; var bytesRead: Integer; const callback: ICefCallback): Boolean;
begin
  SendEvent([dataOut, bytesToRead, @bytesRead, callback, @Result]);
end;

function TCEFEvent.TEngResourceHandler_TOnResourceSkipEvent(bytes_to_skip: int64; var bytes_skipped: Int64; const callback: ICefResourceSkipCallback): boolean;
begin
  SendEvent([@bytes_to_skip, @bytes_skipped, callback, @Result]);
end;

function TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestBeforeResourceLoadEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const callback: ICefCallback): TCefReturnValue;
begin
  SendEvent([browser, frame, request, callback, @Result]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestGetCookieAccessFilterEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aFilter: ICefCookieAccessFilter);
begin
  SendEvent([browser, frame, request, @aFilter]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestGetResourceHandlerEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var aResourceHandler: ICefResourceHandler);
begin
  SendEvent([browser, frame, request, @aResourceHandler]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestGetResourceResponseFilterEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var aResponseFilter: ICefResponseFilter);
begin
  SendEvent([browser, frame, request, response, @aResponseFilter]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestProtocolExecutionEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; var allowOsExecution: Boolean);
begin
  SendEvent([browser, frame, request, @allowOsExecution]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestResourceLoadCompleteEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; status: TCefUrlRequestStatus; receivedContentLength: Int64);
begin
  SendEvent([browser, frame, request, response, Integer(status), @receivedContentLength]);
end;

procedure TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestResourceRedirectEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse; var newUrl: ustring);
var
  RetnewUrl: PChar;
begin
  RetnewUrl := ToPChar(newUrl);
  SendEvent([browser, frame, request, response, @RetnewUrl]);
  newUrl := PCharToUStr(RetnewUrl);
end;

function TCEFEvent.TEngResourceRequestHandler_TOnResourceRequestResourceResponseEvent(const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; const response: ICefResponse): Boolean;
begin
  SendEvent([browser, frame, request, response, @Result]);
end;

function TCEFEvent.TEngResponseFilter_TOnResponseFilterFilterEvent(data_in: Pointer; data_in_size: NativeUInt; var data_in_read: NativeUInt; data_out: Pointer; data_out_size: NativeUInt; var data_out_written: NativeUInt): TCefResponseFilterStatus;
begin
  SendEvent([data_in, uint32(data_in_size), @data_in_read, data_out, uint32(data_out_size), @data_out_written, @Result]);
end;

function TCEFEvent.TEngResponseFilter_TOnResponseFilterInitFilterEvent(): Boolean;
begin
  SendEvent([@Result]);
end;

procedure TCEFEvent.TEngRunFileDialogCallback_TOnRunFileDialogCallbackFileDialogDismissedEvent(const filePaths: TStrings);
begin
  SendEvent([filePaths]);
end;

function TCEFEvent.TEngSchemeHandlerFactory_TOnSchemeFactoryNewEvent(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;
begin
  SendEvent([browser, frame, ToPChar(schemeName), request, @Result]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerClientConnectedEvent(const server: ICefServer; connection_id: Integer);
begin
  SendEvent([server, connection_id]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerClientDisconnectedEvent(const server: ICefServer; connection_id: Integer);
begin
  SendEvent([server, connection_id]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerHttpRequestEvent(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest);
begin
  SendEvent([server, connection_id, ToPChar(client_address), request]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerServerCreatedEvent(const server: ICefServer);
begin
  SendEvent([server]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerServerDestroyedEvent(const server: ICefServer);
begin
  SendEvent([server]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerWebSocketConnectedEvent(const server: ICefServer; connection_id: Integer);
begin
  SendEvent([server, connection_id]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerWebSocketMessageEvent(const server: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt);
begin
  SendEvent([server, connection_id, data, uint32(data_size)]);
end;

procedure TCEFEvent.TEngServerHandler_TOnServerWebSocketRequestEvent(const server: ICefServer; connection_id: Integer; const client_address: ustring; const request: ICefRequest; const callback: ICefCallback);
begin
  SendEvent([server, connection_id, ToPChar(client_address), request, callback]);
end;

procedure TCEFEvent.TEngSetCookieCallback_TOnSetCookieCallbackCompleteEvent(success: Boolean);
begin
  SendEvent([success]);
end;

procedure TCEFEvent.TEngStringVisitor_TOnStringVisitorVisitEvent(const str: ustring);
begin
  SendEvent([ToPChar(str)]);
end;

procedure TCEFEvent.TEngTask_TOnTaskExecuteEvent();
begin
  SendEvent([]);
end;

procedure TCEFEvent.TEngTextfieldDelegate_TOnTextfieldAfterUserActionEvent(const textfield: ICefTextfield);
begin
  SendEvent([textfield]);
end;

procedure TCEFEvent.TEngTextfieldDelegate_TOnTextfieldKeyEvent(const textfield: ICefTextfield; const event: TCefKeyEvent; var aResult: boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event);
  SendEvent([textfield, @eventPtr, @aResult]);
end;

procedure TCEFEvent.TEngUrlrequestClient_TOnUrlrequestClientDownloadDataEvent(const request: ICefUrlRequest; data: Pointer; dataLength: NativeUInt);
begin
  SendEvent([request, data, uint32(dataLength)]);
end;

procedure TCEFEvent.TEngUrlrequestClient_TOnUrlrequestClientDownloadProgressEvent(const request: ICefUrlRequest; current: Int64; total: Int64);
begin
  SendEvent([request, @current, @total]);
end;

function TCEFEvent.TEngUrlrequestClient_TOnUrlrequestClientGetAuthCredentialsEvent(isProxy: Boolean; const host: ustring; port: Integer; const realm: ustring; const scheme: ustring; const callback: ICefAuthCallback): Boolean;
begin
  SendEvent([isProxy, ToPChar(host), port, ToPChar(realm), ToPChar(scheme), callback, @Result]);
end;

procedure TCEFEvent.TEngUrlrequestClient_TOnUrlrequestClientRequestCompleteEvent(const request: ICefUrlRequest);
begin
  SendEvent([request]);
end;

procedure TCEFEvent.TEngUrlrequestClient_TOnUrlrequestClientUploadProgressEvent(const request: ICefUrlRequest; current: Int64; total: Int64);
begin
  SendEvent([request, @current, @total]);
end;

function TCEFEvent.TEngV8Accessor_TOnV8AccessorGetEvent(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): Boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([ToPChar(name), object_, @retval, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

function TCEFEvent.TEngV8Accessor_TOnV8AccessorSet_Event(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): Boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([ToPChar(name), object_, value, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

procedure TCEFEvent.TEngV8ArrayBufferReleaseCallback_TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent(buffer: Pointer);
begin
  SendEvent([buffer]);
end;

function TCEFEvent.TEngV8Handler_TOnV8ExecuteEvent(const name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var exception: ustring): Boolean;
var
  argumentsPtr: Pointer = nil;
  argumentsLen: Integer;
  Retexception: PChar;
begin
  argumentsLen := Length(arguments);
  if argumentsLen > 0 then
    argumentsPtr := @arguments[0];
  Retexception := ToPChar(exception);
  SendEvent([ToPChar(name), object_, argumentsPtr, argumentsLen, @retval, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

function TCEFEvent.TEngV8Interceptor_TOnV8InterceptorGetByIndexEvent(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([index, object_, @retval, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

function TCEFEvent.TEngV8Interceptor_TOnV8InterceptorGetByNameEvent(const name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var exception: ustring): boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([ToPChar(name), object_, @retval, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

function TCEFEvent.TEngV8Interceptor_TOnV8InterceptorSetByIndexEvent(index: integer; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([index, object_, value, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

function TCEFEvent.TEngV8Interceptor_TOnV8InterceptorSetByNameEvent(const name: ustring; const object_: ICefv8Value; const value: ICefv8Value; var exception: ustring): boolean;
var
  Retexception: PChar;
begin
  Retexception := ToPChar(exception);
  SendEvent([ToPChar(name), object_, value, @Retexception, @Result]);
  exception := PCharToUStr(Retexception);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewBlurEvent(const view: ICefView);
begin
  SendEvent([view]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewChildViewChangedEvent(const view: ICefView; added: boolean; const child: ICefView);
begin
  SendEvent([view, added, child]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewFocusEvent(const view: ICefView);
begin
  SendEvent([view]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewGetHeightForWidthEvent(const view: ICefView; width: Integer; var aResult: Integer);
begin
  SendEvent([view, width, @aResult]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewGetMaximumSizeEvent(const view: ICefView; var aResult: TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewGetMinimumSizeEvent(const view: ICefView; var aResult: TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewGetPreferredSizeEvent(const view: ICefView; var aResult: TCefSize);
var
  aResultPtr: TCefSizePtr;
begin
  aResultPtr := TCefSizeToGo(aResult);
  SendEvent([view, @aResultPtr]);
  aResult := TCefSizeToPas(aResultPtr);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewLayoutChangedEvent(const view: ICefView; new_bounds: TCefRect);
var
  new_boundsPtr: TCefRectPtr;
begin
  new_boundsPtr := TCefRectToGo(new_bounds);
  SendEvent([view, @new_boundsPtr]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewParentViewChangedEvent(const view: ICefView; added: boolean; const parent: ICefView);
begin
  SendEvent([view, added, parent]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewThemeChangedEvent(const view: ICefView);
begin
  SendEvent([view]);
end;

procedure TCEFEvent.TEngViewDelegate_TOnViewWindowChangedEvent(const view: ICefView; added: boolean);
begin
  SendEvent([view, added]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowAcceleratorEvent(const window_: ICefWindow; command_id: Integer; var aResult: boolean);
begin
  SendEvent([window_, command_id, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowAcceptsFirstMouseEvent(const window_: ICefWindow; var aResult: TCefState);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowCanCloseEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowCanMaximizeEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowCanMinimizeEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowCanResizeEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowGetInitialBoundsEvent(const window_: ICefWindow; var aResult: TCefRect);
var
  aResultPtr: TCefRectPtr;
begin
  aResultPtr := TCefRectToGo(aResult);
  SendEvent([window_, @aResultPtr]);
  aResult := TCefRectToPas(aResultPtr);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowGetInitialShowStateEvent(const window_: ICefWindow; var aResult: TCefShowState);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowGetParentWindowEvent(const window_: ICefWindow; var is_menu: boolean; var can_activate_menu: boolean; var aResult: ICefWindow);
begin
  SendEvent([window_, @is_menu, @can_activate_menu, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowGetTitlebarHeightEvent(const window_: ICefWindow; var titlebar_height: Single; var aResult: boolean);
begin
  SendEvent([window_, @titlebar_height, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowGetWindowRuntimeStyleEvent(var aResult: TCefRuntimeStyle);
begin
  SendEvent([@aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowIsFramelessEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowIsWindowModalDialogEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowKeyEvent(const window_: ICefWindow; const event: TCefKeyEvent; var aResult: boolean);
var
  eventPtr: TCefKeyEventPtr;
begin
  eventPtr := TCefKeyEventToGo(event);
  SendEvent([window_, @eventPtr, @aResult]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowThemeColorsChangedEvent(const window_: ICefWindow; chrome_theme: Integer);
begin
  SendEvent([window_, chrome_theme]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowActivationChangedEvent(const window_: ICefWindow; active: boolean);
begin
  SendEvent([window_, active]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowBoundsChangedEvent(const window_: ICefWindow; const new_bounds: TCefRect);
var
  new_boundsPtr: TCefRectPtr;
begin
  new_boundsPtr := TCefRectToGo(new_bounds);
  SendEvent([window_, @new_boundsPtr]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowClosingEvent(const window_: ICefWindow);
begin
  SendEvent([window_]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowCreatedEvent(const window_: ICefWindow);
begin
  SendEvent([window_]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowDestroyedEvent(const window_: ICefWindow);
begin
  SendEvent([window_]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWindowFullscreenTransitionEvent(const window_: ICefWindow; is_completed: boolean);
begin
  SendEvent([window_, is_completed]);
end;

procedure TCEFEvent.TEngWindowDelegate_TOnWindowWithStandardWindowButtonsEvent(const window_: ICefWindow; var aResult: boolean);
begin
  SendEvent([window_, @aResult]);
end;

function TCEFEvent.TEngWriteHandler_TOnWriteEllEvent(): Int64;
begin
  SendEvent([@Result]);
end;

function TCEFEvent.TEngWriteHandler_TOnWriteFlushEvent(): Integer;
begin
  SendEvent([@Result]);
end;

function TCEFEvent.TEngWriteHandler_TOnWriteMayBlockEvent(): Boolean;
begin
  SendEvent([@Result]);
end;

function TCEFEvent.TEngWriteHandler_TOnWriteSeekEvent(offset: Int64; whence: Integer): Integer;
begin
  SendEvent([@offset, whence, @Result]);
end;

function TCEFEvent.TEngWriteHandler_TOnWriteWriteEvent(const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt;
begin
  SendEvent([ptr, uint32(size), uint32(n), @Result]);
end;



// 非 of object 事件方法定义实现
procedure TCefApplicationCore_TOnAlreadyRunningAppRelaunchEvent(const commandLine: ICefCommandLine; const current_directory: ustring; var aResult: boolean);
begin
  if TCefApplicationCore_TOnAlreadyRunningAppRelaunchEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnAlreadyRunningAppRelaunchEventPtr, [commandLine, ToPChar(current_directory), @aResult]);
end;

procedure TCefApplicationCore_TOnBeforeChildProcessLaunchEvent(const commandLine: ICefCommandLine);
begin
  if TCefApplicationCore_TOnBeforeChildProcessLaunchEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnBeforeChildProcessLaunchEventPtr, [commandLine]);
end;

procedure TCefApplicationCore_TOnBrowserCreatedEvent(const browser: ICefBrowser; const extra_info: ICefDictionaryValue);
begin
  if TCefApplicationCore_TOnBrowserCreatedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnBrowserCreatedEventPtr, [browser, extra_info]);
end;

procedure TCefApplicationCore_TOnBrowserDestroyedEvent(const browser: ICefBrowser);
begin
  if TCefApplicationCore_TOnBrowserDestroyedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnBrowserDestroyedEventPtr, [browser]);
end;

procedure TCefApplicationCore_TOnContextCreatedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  if TCefApplicationCore_TOnContextCreatedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnContextCreatedEventPtr, [browser, frame, context]);
end;

procedure TCefApplicationCore_TOnContextInitializedEvent();
begin
  if TCefApplicationCore_TOnContextInitializedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnContextInitializedEventPtr, []);
end;

procedure TCefApplicationCore_TOnContextReleasedEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context);
begin
  if TCefApplicationCore_TOnContextReleasedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnContextReleasedEventPtr, [browser, frame, context]);
end;

procedure TCefApplicationCore_TOnFocusedNodeChangedEvent(const browser: ICefBrowser; const frame: ICefFrame; const node: ICefDomNode);
begin
  if TCefApplicationCore_TOnFocusedNodeChangedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnFocusedNodeChangedEventPtr, [browser, frame, node]);
end;

procedure TCefApplicationCore_TOnGetDataResourceEvent(resourceId: Integer; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
begin
  if TCefApplicationCore_TOnGetDataResourceEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnGetDataResourceEventPtr, [resourceId, @data, @dataSize, @aResult]);
end;

procedure TCefApplicationCore_TOnGetDataResourceForScaleEvent(resourceId: Integer; scaleFactor: TCefScaleFactor; out data: Pointer; out dataSize: NativeUInt; var aResult : Boolean);
begin
  if TCefApplicationCore_TOnGetDataResourceForScaleEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnGetDataResourceForScaleEventPtr, [resourceId, Integer(scaleFactor), @data, @dataSize, @aResult]);
end;

procedure TCefApplicationCore_TOnGetDefaultClientEvent(var aClient : ICefClient);
begin
  if TCefApplicationCore_TOnGetDefaultClientEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnGetDefaultClientEventPtr, [@aClient]);
end;

procedure TCefApplicationCore_TOnGetDefaultRequestContextHandlerEvent(var aRequestContextHandler : ICefRequestContextHandler);
begin
  if TCefApplicationCore_TOnGetDefaultRequestContextHandlerEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnGetDefaultRequestContextHandlerEventPtr, [@aRequestContextHandler]);
end;

procedure TCefApplicationCore_TOnGetLocalizedStringEvent(stringId: Integer; out stringVal: ustring; var aResult : Boolean);
var
  RetstringVal: PChar;
begin
  if TCefApplicationCore_TOnGetLocalizedStringEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnGetLocalizedStringEventPtr, [stringId, @RetstringVal, @aResult]);
  stringVal := PCharToUStr(RetstringVal);
end;

procedure TCefApplicationCore_TOnProcessMessageReceivedEvent(const browser: ICefBrowser; const frame: ICefFrame; sourceProcess: TCefProcessId; const message: ICefProcessMessage; var aHandled : boolean);
begin
  if TCefApplicationCore_TOnProcessMessageReceivedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnProcessMessageReceivedEventPtr, [browser, frame, Integer(sourceProcess), message, @aHandled]);
end;

procedure TCefApplicationCore_TOnRegisterCustomPreferencesEvent(type_: TCefPreferencesType; const registrar: TCefPreferenceRegistrarRef);
begin
  if TCefApplicationCore_TOnRegisterCustomPreferencesEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRegisterCustomPreferencesEventPtr, [Integer(type_), registrar]);
end;

procedure TCefApplicationCore_TOnRegisterCustomSchemesEvent(const registrar: TCefSchemeRegistrarRef);
begin
  if TCefApplicationCore_TOnRegisterCustomSchemesEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRegisterCustomSchemesEventPtr, [registrar]);
end;

procedure TCefApplicationCore_TOnRenderLoadEnd(const browser: ICefBrowser; const frame: ICefFrame; httpStatusCode: Integer);
begin
  if TCefApplicationCore_TOnRenderLoadEndPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRenderLoadEndPtr, [browser, frame, httpStatusCode]);
end;

procedure TCefApplicationCore_TOnRenderLoadError(const browser: ICefBrowser; const frame: ICefFrame; errorCode: TCefErrorCode; const errorText, failedUrl: ustring);
begin
  if TCefApplicationCore_TOnRenderLoadErrorPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRenderLoadErrorPtr, [browser, frame, errorCode, ToPChar(errorText), ToPChar(failedUrl)]);
end;

procedure TCefApplicationCore_TOnRenderLoadStart(const browser: ICefBrowser; const frame: ICefFrame; transitionType: TCefTransitionType);
begin
  if TCefApplicationCore_TOnRenderLoadStartPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRenderLoadStartPtr, [browser, frame, transitionType]);
end;

procedure TCefApplicationCore_TOnRenderLoadingStateChange(const browser: ICefBrowser; isLoading, canGoBack, canGoForward: Boolean);
begin
  if TCefApplicationCore_TOnRenderLoadingStateChangePtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnRenderLoadingStateChangePtr, [browser, isLoading, canGoBack, canGoForward]);
end;

procedure TCefApplicationCore_TOnScheduleMessagePumpWorkEvent(const delayMs: Int64);
begin
  if TCefApplicationCore_TOnScheduleMessagePumpWorkEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnScheduleMessagePumpWorkEventPtr, [@delayMs]);
end;

procedure TCefApplicationCore_TOnUncaughtExceptionEvent(const browser: ICefBrowser; const frame: ICefFrame; const context: ICefv8Context; const exception: ICefV8Exception; const stackTrace: ICefV8StackTrace);
begin
  if TCefApplicationCore_TOnUncaughtExceptionEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnUncaughtExceptionEventPtr, [browser, frame, context, exception, stackTrace]);
end;

procedure TCefApplicationCore_TOnWebKitInitializedEvent();
begin
  if TCefApplicationCore_TOnWebKitInitializedEventPtr <> nil then
    CEFSendEventByPointer(TCefApplicationCore_TOnWebKitInitializedEventPtr, []);
end;



end.
