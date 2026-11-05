unit uWkWebview;

{$mode objfpc}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils, Controls,
  {$IFDEF LCLGtk2}
  gtk2, Gdk2, Glib2, Gtk2Proc,
  {$ENDIF}
  {$IFDEF LClGtk3}
  LazGtk3, LazGObject2, LazGLib2, LazGio2, LazGdk3, gtk3widgets, Gtk3Procs,
  {$ENDIF}
  dynlibs, Forms, LMessages,
  uWkInterfaces, uWkWebviewEvents, uLibWebkit, uWkTypes, uWkJSValue, uWkCookieManager,
  uWkSettings;

type
  TWkWebview = class;

   PJSExecuteContext = ^TJSExecuteContext;
   TJSExecuteContext = record
     ExecuteID: Integer;
     Webview: TWkWebview;
   end;

  TWkWebview = class(TComponent, IWkCookieManagerDelegateEvent, IWkSchemeRequestDelegateEvent)
  private
    FWebView: WebKitWebView;
    FContentManager: WebKitUserContentManager;
    FCookieManager: TWkCookieManager;
    FDargXRoot, FDargYRoot: longint;
    FDargTime, FDargMouseButton: longword;
    FContextMenuItemAction: PWkAction;
    FContextMenuItemActionID: gulong;
    FWkWindowParent: TWinControl;
  private
    FOnLoadChange: TWkLoadChangeEvent;
    FOnExecuteScriptFinished: TWkExecuteScriptFinishedEvent;
    FOnLoadFailed: TWkLoadFailedEvent;
    FOnURISchemeRequest: TWkURISchemeRequestEvent;
    FOnProcessMessage: TWkProcessMessageEvent;
    FOnMouseMove: TWkMouseEvent;
    FOnMousePress: TWkMouseEvent;
    FOnMouseRelease: TWkMouseEvent;
    FOnGetAcceptPolicyFinish: TWkGetAcceptPolicyFinishEvent;
    FOnAddCookieFinish: TWkAddCookieFinishEvent;
    FOnGetCookiesFinish: TWkGetCookiesFinishEvent;
    FOnDeleteCookieFinish: TWkDeleteCookieFinishEvent;
    FOnDecidePolicy: TWkDecidePolicyEvent;
    FOnWebProcessTerminated: TWkWebProcessTerminatedEvent;
    FOnContextMenu: TWkContextMenuEvent;
    FOnContextMenuCommand: TWkContextMenuCommandEvent;
    FOnContextMenuDismissed: TWkContextMenuDismissedEvent;
    FOnEnterFullscreen: TWkEnterFullscreenEvent;
  public
    property WebView: WebKitWebView read FWebView;
  private
    procedure InitContextMenuItemAction();
    function NewUserContentManager(): WebKitUserContentManager;
    function NewWebViewWithUserContentManager(): WebKitWebView;
  protected
    procedure doExecuteScriptFinished(jsValue: TWkJSValue; aId: Integer);
    procedure doGetAcceptPolicyFinish(policy: WebKitCookieAcceptPolicy; error: string);
    procedure doAddCookieFinish(aResult: boolean; error: string);
    procedure doGetCookiesFinish(cookieList: PList; error: string);
    procedure doDeleteCookieFinish(aResult: boolean; error: string);
    procedure doLoadChange(loadEvent: WebKitLoadEvent);
    function doLoadFailed(loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
    procedure doURISchemeRequest(uriSchemeRequest: WebKitURISchemeRequest);
    procedure doProcessMessage(const jsValue: TWkJSValue; processId: TWkProcessId);
    function doMouseMove(event: PWkButtonEvent): boolean;
    function doMousePress(event: PWkButtonEvent): boolean;
    function doMouseRelease(event: PWkButtonEvent): boolean;
    function doDecidePolicy(decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
    procedure doWebProcessTerminated(reason: WebKitWebProcessTerminationReason);
    function doContextMenu(contextMenu: WebKitContextMenu): boolean;
    procedure doContextMenuCommand(menuID: integer);
    procedure doContextMenuDismissed();
    procedure doEnterFullscreen();
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;

    procedure CreateBrowser();
    procedure GoBack();
    procedure GoForward();
    procedure Reload();
    procedure Stop();
    function CanGoBack(): boolean;
    function CanGoForward(): boolean;
    function IsLoading(): boolean;
    procedure StartDrag(aFormWindow: TWinControl);
    procedure TerminateWebProcess();
    procedure TryClose();
    function GetTitle(): string;
    function GetURI(): string;
    procedure ExecuteScript(const AScript: string; aId: Integer);
    procedure LoadHTML(const AHTML: string);
    procedure LoadURL(const AURL: string);
    procedure EnabledDevtools(aEnabled: boolean);
    procedure ShowDevtools();
    procedure RegisterScriptCode(scriptCode: string);
    // 注册JS消息处理器
    // window.webkit.messageHandlers.<name>.postMessage()
    procedure RegisterScriptMessageHandler(aName: string);
    function CookieManager(): TWkCookieManager;
    function GetSettings(): TWkSettings;
    procedure SetSettings(aSetting: TWkSettings);
    procedure FreeWebview();
    function AsCookieManagerDelegate(): IWkCookieManagerDelegateEvent;
    function AsSchemeRequestDelegate(): IWkSchemeRequestDelegateEvent;
  published
    // 当web_view中的加载操作改变时触发
    // 当发出新的加载请求时，WEBKIT_LOAD_STARTED发出信号，当加载成功完成或由于错误而完成时，WEBKIT_LOAD_FINISHED发出信号
    // 当正在进行的加载操作失败时，在WEBKIT_LOAD_FINISHED发出WebKitWebView::load-changed之前发出WebKitWebView::load-failed信号
    // 如果从服务器接收到重定向，则在WEBKIT_LOAD_STARTED初始发射之后，WEBKIT_LOAD_COMMITTED之前，用webkit_load_redirect发出此信号
    // 当页面内容开始到达时，使用WEBKIT_LOAD_COMMITTED事件发出信号
    // https://webkitgtk.org/reference/webkit2gtk/stable/signal.WebView.load-changed.html
    property OnLoadChange: TWkLoadChangeEvent read FOnLoadChange write FOnLoadChange;

    // 完成由webkit_web_view_run_javascript()开始的异步操作。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.WebView.run_javascript_finish.html
    property OnExecuteScriptFinished: TWkExecuteScriptFinishedEvent read FOnExecuteScriptFinished write FOnExecuteScriptFinished;

    // 在加载操作期间发生错误时触发。如果在开始加载页面数据时发生错误，load_event将是WEBKIT_LOAD_STARTED。如果它发生在加载提交的数据源时，load_event将是WEBKIT_LOAD_COMMITTED
    // 由于加载错误导致加载操作结束，WebKitWebView::load-changed信号将总是伴随着WEBKIT_LOAD_FINISHED事件紧随其后
    // 默认情况下，如果不处理该信号，将显示一个股票错误页面。如果希望提供自己的错误页面，则需要处理该信号
    // 默认的处理程序: 默认处理程序在通过g_signal_connect()添加处理程序后调用
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.delete_cookie.html?q=load-failed
    property OnLoadFailed: TWkLoadFailedEvent read FOnLoadFailed write FOnLoadFailed;

    // Webview 自定义协议: energy
    // 在上下文中注册scheme，这样当WebKitWebContext中发出带有scheme的URI请求时，注册的webkitur缺血erequestcallback将被webkitur缺血erequest调用
    // 可以异步处理URI方案请求，方法是在webkitur缺血性请求中调用g_object_ref()，然后在请求的数据可用时调用webkit_uri_scheme_request_finish()，或者在出现错误时调用webkit_uri_scheme_request_finish_error()
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.WebContext.register_uri_scheme.html
    property OnURISchemeRequest: TWkURISchemeRequestEvent read FOnURISchemeRequest write FOnURISchemeRequest;

    // Webview 自定义消息: processMessage, window.webkit.messageHandlers.<processMessage>.postMessage('data')
    // 当web视图中的JavaScript在使用webkit_user_content_manager_register_script_message_handler()注册后调用window.webkit.messageHandlers.<processMessage>.postMessage()时发出该信号。
    // 默认的处理程序: 默认处理程序在通过g_signal_connect()添加处理程序后调用。
    // 信号可以是详细的
    // https://webkitgtk.org/reference/webkit2gtk/stable/signal.UserContentManager.script-message-received.html
    // 注册一个新的用户脚本消息处理程序
    // 注册后，脚本可以使用window.webkit.messageHandlers.<name>. postmessage (value)发送消息
    // 通过将处理程序连接到WebKitUserContentManager::script-message-received信号来接收这些消息
    // 处理程序名称用作信号的详细信息
    // 为了避免在注册处理程序名称和开始接收信号之间的竞争条件，建议在注册处理程序名称之前连接到信号:
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.UserContentManager.register_script_message_handler.html
    property OnProcessMessage: TWkProcessMessageEvent read FOnProcessMessage write FOnProcessMessage;

    // 网页鼠标移动触发事件
    property OnMouseMove: TWkMouseEvent read FOnMouseMove write FOnMouseMove;

    // 网页鼠标按下触发事件
    property OnMousePress: TWkMouseEvent read FOnMousePress write FOnMousePress;

    // 网页鼠标释放触发事件
    property OnMouseRelease: TWkMouseEvent read FOnMouseRelease write FOnMouseRelease;

    // 完成由webkit_cookie_manager_get_accept_policy()启动的异步操作。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.get_accept_policy_finish.html
    property OnGetAcceptPolicyFinish: TWkGetAcceptPolicyFinishEvent read FOnGetAcceptPolicyFinish write FOnGetAcceptPolicyFinish;

    // 完成由webkit_cookie_manager_add_cookie()开始的异步操作。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.add_cookie_finish.html
    property OnAddCookieFinish: TWkAddCookieFinishEvent read FOnAddCookieFinish write FOnAddCookieFinish;

    // 完成由webkit_cookie_manager_get_cookies()开始的异步操作。
    // 返回值是SoupCookie实例的GSList，应该使用g_list_free_full()和soup_cookie_free()释放。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.get_cookies_finish.html
    property OnGetCookiesFinish: TWkGetCookiesFinishEvent read FOnGetCookiesFinish write FOnGetCookiesFinish;

    // 完成由webkit_cookie_manager_delete_cookie()开始的异步操作。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.delete_cookie_finish.html
    property OnDeleteCookieFinish: TWkDeleteCookieFinishEvent read FOnDeleteCookieFinish write FOnDeleteCookieFinish;

    // 当WebKit请求客户端决定一个策略决策时，例如是否导航到一个页面，打开一个新窗口，或者是否下载一个资源，就会发出这个信号。
    // 传入的参数是泛型类型，但在做出决策时应将其强制转换为更具体的类型。例如:WebKitNavigationPolicyDecisiondecision

    // 可以通过简单地调用参数并返回阻塞默认信号处理程序来异步地做出策略决策。
    // 如果最后一个引用被删除，并且没有明确做出决策，则将是默认的策略决策。
    // 默认信号处理程序将简单地调用webkit_policy_decision_use()。
    // 只有为给定选择的第一个策略决策才会有任何影响, g_object_ref() decision TRUE WebKitPolicyDecision webkit_policy_decision_use()
    // https://webkitgtk.org/reference/webkit2gtk/stable/signal.WebView.decide-policy.html
    property OnDecidePolicy: TWkDecidePolicyEvent read FOnDecidePolicy write FOnDecidePolicy;

    // 当web进程由于reason异常终止时，发出此信号
    // 默认处理程序在通过g_signal_connect()添加处理程序后被调用
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.WebView.terminate_web_process.html
    property OnWebProcessTerminated: TWkWebProcessTerminatedEvent read FOnWebProcessTerminated write FOnWebProcessTerminated;

    property OnContextMenu: TWkContextMenuEvent read FOnContextMenu write FOnContextMenu;
    property OnContextMenuCommand: TWkContextMenuCommandEvent read FOnContextMenuCommand write FOnContextMenuCommand;
    property OnContextMenuDismissed: TWkContextMenuDismissedEvent read FOnContextMenuDismissed write FOnContextMenuDismissed;

    //property OnEnterFullscreen: TWkEnterFullscreenEvent read FOnEnterFullscreen write FOnEnterFullscreen;
  end;

implementation

{ do events }

procedure doAPIProcessMessage(contentManager: WebKitUserContentManager; Result: WebKitJavascriptResult; user_data: gpointer); cdecl;
begin
  TWkWebview(user_data).doProcessMessage(TWkJSValue.Create(Result), WkPID_RENDER);
end;

procedure doAPILoadChange(web_view: WebKitWebView; load_event: WebKitLoadEvent; user_data: gpointer); cdecl;
begin
  TWkWebview(user_data).doLoadChange(load_event);
end;

function doAPILoadFailed(web_view: WebKitWebView; load_event: WebKitLoadEvent; failing_uri: Pgchar; error: PGError; user_data: gpointer): gboolean; cdecl;
begin
  Result := gboolean(TWkWebview(user_data).doLoadFailed(load_event, string(failing_uri), string(error^.message)));
end;

function doAPIDecidePolicy(web_view: WebKitWebView; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType; user_data: gpointer): gboolean; cdecl;
begin
  //if (type_ = WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION) or (type_ = WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION) then
  //  aDecision := TWkNavigationPolicyDecision.Create(decision)
  //else
  //  aDecision := TWkResponsePolicyDecision.Create(decision);
  Result := gboolean(TWkWebview(user_data).doDecidePolicy(decision, type_));
end;

procedure doAPIWebProcessTerminated(web_view: WebKitWebView; reason: WebKitWebProcessTerminationReason; user_data: gpointer); cdecl;
begin
  TWkWebview(user_data).doWebProcessTerminated(reason);
end;

function doAPIMotionNotify(web_view: WebKitWebView; event: PGdkEventMotion; user_data: gpointer): gboolean; cdecl;
var
  aBtnEvent: TWkButtonEvent;
begin
  if event <> nil then
  begin
    aBtnEvent.Button := Integer(event^.is_hint);
    aBtnEvent.Time := event^.time;
    aBtnEvent.EventType := event^.type_;
    aBtnEvent.State := event^.state;
    aBtnEvent.X := Integer(Round(event^.x));
    aBtnEvent.Y := Integer(Round(event^.y));
    aBtnEvent.XRoot := Integer(Round(event^.x_root));
    aBtnEvent.YRoot := Integer(Round(event^.y_root));
    Result := TWkWebview(user_data).doMouseMove(@aBtnEvent);
  end
  else
    Result := TWkWebview(user_data).doMouseMove(nil);
end;

function doAPIButtonPress(web_view: WebKitWebView; event: PGdkEventButton; user_data: gpointer): gboolean; cdecl;
var
  aBtnEvent: TWkButtonEvent;
begin
  if event <> nil then
  begin
    aBtnEvent.Button := event^.button;
    aBtnEvent.Time := event^.time;
    aBtnEvent.EventType := event^.type_;
    aBtnEvent.State := event^.state;
    aBtnEvent.X := Integer(Round(event^.x));
    aBtnEvent.Y := Integer(Round(event^.y));
    aBtnEvent.XRoot := Integer(Round(event^.x_root));
    aBtnEvent.YRoot := Integer(Round(event^.y_root));
    Result := TWkWebview(user_data).doMousePress(@aBtnEvent);
  end
  else
    Result := TWkWebview(user_data).doMousePress(nil);
end;

function doAPIButtonRelease(web_view: WebKitWebView; event: PGdkEventButton; user_data: gpointer): gboolean; cdecl;
var
  aBtnEvent: TWkButtonEvent;
begin
  if event <> nil then
  begin
    aBtnEvent.Button := event^.button;
    aBtnEvent.Time := event^.time;
    aBtnEvent.EventType := event^.type_;
    aBtnEvent.State := event^.state;
    aBtnEvent.X := Integer(Round(event^.x));
    aBtnEvent.Y := Integer(Round(event^.y));
    aBtnEvent.XRoot := Integer(Round(event^.x_root));
    aBtnEvent.YRoot := Integer(Round(event^.y_root));
    Result := TWkWebview(user_data).doMouseRelease(@aBtnEvent);
  end
  else
    Result := TWkWebview(user_data).doMouseRelease(nil);
end;

procedure doAPIExecuteScriptFinished(source_object: PGObject; res: PAsyncResult; user_data: gpointer); cdecl;
var
  aErr: PGError;
  aResult: WebKitJavascriptResult;
  aJSValue: TWkJSValue;
  JSExecuteContext: PJSExecuteContext;
begin
  JSExecuteContext := PJSExecuteContext(user_data);
  if not Assigned(JSExecuteContext) then Exit;

  try
    aErr := nil;
    aResult := webkit_web_view_run_javascript_finish(Webkit_Web_View(source_object), res, @aErr);
    if aResult = nil then
    begin
      aJSValue := TWkJSValue.Create(nil, True, string(aErr^.message));
      JSExecuteContext^.Webview.doExecuteScriptFinished(aJSValue, JSExecuteContext^.ExecuteID);
    end
    else
    begin
      aJSValue := TWkJSValue.Create(aResult, False, '');
      JSExecuteContext^.Webview.doExecuteScriptFinished(aJSValue, JSExecuteContext^.ExecuteID);
      //g_free(aValue);
      //g_object_unref
      //webkit_javascript_result_unref(aResult);
    end;
  finally
    Dispose(JSExecuteContext);
    if Assigned(aErr) then g_error_free(aErr);
  end;
end;

procedure doAPIContextMenuCommand(action: PGSimpleAction; Value: PGVariant; user_data: gpointer); cdecl;
var
  menuID: integer;
begin
  menuID := 0;
  if Value <> nil then
    menuID := integer(Value^.get_int32);
  TWkWebview(user_data).doContextMenuCommand(menuID);
end;

function doAPIContextMenu(web_view: WebKitWebView; context_menu: WebKitContextMenu; event: PGdkEvent; hit_test_result: WebKitHitTestResult; user_data: gpointer): gboolean; cdecl;
begin
  Result := TWkWebview(user_data).doContextMenu(context_menu);
end;

procedure doAPIContextMenuDismissed(web_view: WebKitWebView; user_data: gpointer); cdecl;
begin
  TWkWebview(user_data).doContextMenuDismissed();
end;

//function doAPIWebViewFocusInCallback(widget: PGtkWidget; event: PGdkEventFocus; user_data: gpointer): gboolean; cdecl;
//var
//  FocusMsg: TLMessage;
//  WkWebView: TWkWebview;
//begin
//  Result := False;
//  WkWebView := TWkWebview(user_data);
//  if WkWebView.WkWindowParent <> nil then
//  begin
//    FocusMsg.Msg := LM_SETFOCUS;
//    TGtk3Widget(WkWebView.WkWindowParent.Handle).DeliverMessage(FocusMsg, true);
//  end;
//end;
//
//function doAPIWebViewFocusOutCallback(widget: PGtkWidget; event: PGdkEventFocus; user_data: gpointer): gboolean; cdecl;
//var
//  FocusMsg: TLMessage;
//  WkWebView: TWkWebview;
//begin
//  Result := False;
//  WkWebView := TWkWebview(user_data);
//  if WkWebView.WkWindowParent <> nil then
//  begin
//    FocusMsg.Msg := LM_KILLFOCUS;
//    TGtk3Widget(WkWebView.WkWindowParent.Handle).DeliverMessage(FocusMsg, true);
//  end;
//end;

// 定义信号回调函数
procedure HandleEnterFullscreen(web_view: WebKitWebView; user_data: gpointer); cdecl;
begin
  // 阻止 WebKit 默认全屏行为
  g_signal_stop_emission_by_name(web_view, 'enter-fullscreen');
  TWkWebview(user_data).doEnterFullscreen();

  // 手动设置 Lazarus 窗口为全屏
  //Form1.WindowState := wsFullScreen;
  //Form1.BorderStyle := bsNone;

  // 强制调整 WebView 尺寸
  //WebView.Width := Form1.ClientWidth;
  //WebView.Height := Form1.ClientHeight;
end;

procedure HandleLeaveFullscreen(widget: PGtkWidget; user_data: gpointer); cdecl;
begin
  g_signal_stop_emission_by_name(widget, 'leave-fullscreen');

  // 退出全屏
  //Form1.WindowState := wsNormal;
  //Form1.BorderStyle := bsSizeable;
end;

{ TWebview }

constructor TWkWebview.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);

  FContentManager := nil;
  FCookieManager := nil;
  FDargXRoot := 0;
  FDargYRoot := 0;
  FDargTime := 0;
  FDargMouseButton := 0;

  FOnLoadChange := nil;
  FOnLoadFailed := nil;
  FOnExecuteScriptFinished := nil;
  FOnURISchemeRequest := nil;
  FOnProcessMessage := nil;
  FOnMousePress := nil;
  FOnMouseRelease := nil;
  FOnGetAcceptPolicyFinish := nil;
  FOnAddCookieFinish := nil;
  FOnGetCookiesFinish := nil;
  FOnDeleteCookieFinish := nil;
  FOnDecidePolicy := nil;
  FOnWebProcessTerminated := nil;

  InitContextMenuItemAction();

  FWebView := NewWebViewWithUserContentManager();
end;

destructor TWkWebview.Destroy;
begin
  g_signal_handler_disconnect(FContextMenuItemAction, FContextMenuItemActionID);
  FContextMenuItemAction := nil;
  FCookieManager := nil;
  //WriteLn('TWebview.Destroy');
  inherited Destroy;
end;

procedure TWkWebview.InitContextMenuItemAction();
var
  contextMenuItemActionVar: PGVariantType;
begin
  // context_menu_item event
  contextMenuItemActionVar := TGVariantType.new(Pgchar('i'));
  FContextMenuItemAction := TGSimpleAction.new('context_menu_item_action', contextMenuItemActionVar);
  FContextMenuItemActionID := g_signal_connect_data(FContextMenuItemAction, 'activate', TGCALLBACK(@doAPIContextMenuCommand), self, nil, G_CONNECT_DEFAULT);
  contextMenuItemActionVar := nil;
end;

procedure TWkWebview.CreateBrowser();
begin

  // 绑定进入全屏信号
  //g_signal_connect_data(FWebView, 'enter-fullscreen', TGCallback(@HandleEnterFullscreen), self, nil, G_CONNECT_DEFAULT);
  // 绑定退出全屏信号
  //g_signal_connect_data(FWebView, 'leave-fullscreen', TGCallback(@HandleLeaveFullscreen), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnLoadChange) then
    g_signal_connect_data(FWebView, 'load-changed', TGCALLBACK(@doAPILoadChange), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnLoadFailed) then
    g_signal_connect_data(FWebView, 'load-failed', TGCALLBACK(@doAPILoadFailed), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnDecidePolicy) then
    g_signal_connect_data(FWebView, 'decide_policy', TGCALLBACK(@doAPIDecidePolicy), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnWebProcessTerminated) then
    g_signal_connect_data(FWebView, 'web-process-terminated', TGCALLBACK(@doAPIWebProcessTerminated), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnContextMenu) then
    g_signal_connect_data(FWebView, 'context_menu', TGCALLBACK(@doAPIContextMenu), self, nil, G_CONNECT_DEFAULT);

  if Assigned(FOnContextMenuDismissed) then
    g_signal_connect_data(FWebView, 'context_menu_dismissed', TGCALLBACK(@doAPIContextMenuDismissed), self, nil, G_CONNECT_DEFAULT);


  // 默认注册函数
  g_signal_connect_data(FWebView, 'motion-notify-event', TGCALLBACK(@doAPIMotionNotify), self, nil, G_CONNECT_DEFAULT);
  g_signal_connect_data(FWebView, 'button-press-event', TGCALLBACK(@doAPIButtonPress), self, nil, G_CONNECT_DEFAULT);
  g_signal_connect_data(FWebView, 'button-release-event', TGCALLBACK(@doAPIButtonRelease), self, nil, G_CONNECT_DEFAULT);


  //g_signal_connect_data(FWebView, 'focus-in-event', TGCALLBACK(@doAPIWebViewFocusInCallback), Self, nil, G_CONNECT_DEFAULT);
  //g_signal_connect_data(FWebView, 'focus-out-event', TGCALLBACK(@doAPIWebViewFocusOutCallback), Self, nil, G_CONNECT_DEFAULT);

  //g_signal_connect_data gtk_widget_hide_on_delete

  FCookieManager := nil;
end;

function TWkWebview.doMouseMove(event: PWkButtonEvent): boolean;
begin
  Result := False;
  if Assigned(FOnMouseMove) then
    Result := FOnMouseMove(self, event);
end;

function TWkWebview.doMousePress(event: PWkButtonEvent): boolean;
begin
  Result := False;
  if event = nil then
  begin
    FDargXRoot := 0;
    FDargYRoot := 0;
    FDargTime := 0;
  end
  else if (event^.EventType = GDK_BUTTON_PRESS) and (event^.Button = 1) then
  begin
    FDargXRoot := event^.XRoot;
    FDargYRoot := event^.YRoot;
    FDargTime := event^.Time;
  end;
  if event <> nil then
    FDargMouseButton := event^.Button;
  if Assigned(FOnMousePress) then
    Result := FOnMousePress(self, event);
end;

function TWkWebview.doMouseRelease(event: PWkButtonEvent): boolean;
begin
  Result := False;
  if (event = nil) or ((event^.EventType = GDK_BUTTON_RELEASE) and (event^.Button = 1)) then
  begin
    FDargXRoot := 0;
    FDargYRoot := 0;
    FDargTime := 0;
  end;
  if Assigned(FOnMouseRelease) then
    Result := FOnMouseRelease(self, event);
end;

function TWkWebview.doDecidePolicy(decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
begin
  Result := False;
  if Assigned(FOnDecidePolicy) then
    Result := FOnDecidePolicy(self, decision, type_);
end;

procedure TWkWebview.doWebProcessTerminated(reason: WebKitWebProcessTerminationReason);
begin
  if Assigned(FOnWebProcessTerminated) then
    FOnWebProcessTerminated(self, reason);
end;

function TWkWebview.doContextMenu(contextMenu: WebKitContextMenu): boolean;
begin
  Result := False;
  if Assigned(FOnContextMenu) then
    Result := FOnContextMenu(self, contextMenu, FContextMenuItemAction);
end;

procedure TWkWebview.doContextMenuCommand(menuID: integer);
begin
  if Assigned(FOnContextMenuCommand) then
    FOnContextMenuCommand(self, menuID);
end;

procedure TWkWebview.doContextMenuDismissed();
begin
  if Assigned(FOnContextMenuDismissed) then
    FOnContextMenuDismissed(self);
end;

procedure TWkWebview.doProcessMessage(const jsValue: TWkJSValue; processId: TWkProcessId);
begin
  if Assigned(FOnProcessMessage) then
    FOnProcessMessage(self, jsValue, processId);
end;

procedure TWkWebview.doURISchemeRequest(uriSchemeRequest: WebKitURISchemeRequest);
begin
  if Assigned(FOnURISchemeRequest) then
    FOnURISchemeRequest(self, uriSchemeRequest);
end;

procedure TWkWebview.doExecuteScriptFinished(jsValue: TWkJSValue; aId: Integer);
begin
  if Assigned(FOnExecuteScriptFinished) then
    FOnExecuteScriptFinished(self, jsValue, aId);
end;

procedure TWkWebview.doLoadChange(loadEvent: WebKitLoadEvent);
begin
  if Assigned(FOnLoadChange) then
    FOnLoadChange(self, loadEvent);
end;

function TWkWebview.doLoadFailed(loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
begin
  Result := False;
  if Assigned(FOnLoadFailed) then
    Result := FOnLoadFailed(self, loadEvent, failingUri, error);
end;

procedure TWkWebview.doGetAcceptPolicyFinish(policy: WebKitCookieAcceptPolicy; error: string);
begin
  if Assigned(FOnGetAcceptPolicyFinish) then
    FOnGetAcceptPolicyFinish(self, policy, error);
end;

procedure TWkWebview.doAddCookieFinish(aResult: boolean; error: string);
begin
  if Assigned(FOnAddCookieFinish) then
    FOnAddCookieFinish(self, aResult, error);
end;

procedure TWkWebview.doDeleteCookieFinish(aResult: boolean; error: string);
begin
  if Assigned(FOnDeleteCookieFinish) then
    FOnDeleteCookieFinish(self, aResult, error);
end;

procedure TWkWebview.doGetCookiesFinish(cookieList: PList; error: string);
begin
  if Assigned(FOnGetCookiesFinish) then
    FOnGetCookiesFinish(self, cookieList, error);
end;

procedure TWkWebview.doEnterFullscreen();
begin
  if Assigned(FOnEnterFullscreen) then
    FOnEnterFullscreen(self);
end;

function TWkWebview.NewUserContentManager(): WebKitUserContentManager;
begin
  if FContentManager = nil then
    FContentManager := webkit_user_content_manager_new();
  Result := FContentManager;
end;

procedure TWkWebview.RegisterScriptCode(scriptCode: string);
var
  aScript: WebKitUserScript;
begin
  if scriptCode <> '' then
  begin
    aScript := webkit_user_script_new(Pgchar(scriptCode), WEBKIT_USER_CONTENT_INJECT_ALL_FRAMES, WEBKIT_USER_SCRIPT_INJECT_AT_DOCUMENT_START, nil, nil);
    webkit_user_content_manager_add_script(FContentManager, aScript);
    webkit_user_script_unref(aScript);
    aScript := nil;
  end;
end;

procedure TWkWebview.RegisterScriptMessageHandler(aName: string);
begin
  if FContentManager = nil then
    NewUserContentManager();
  g_signal_connect_data(FContentManager, Pgchar('script-message-received::' + aName), TGCALLBACK(@doAPIProcessMessage), self, nil, G_CONNECT_DEFAULT);
  if not boolean(webkit_user_content_manager_register_script_message_handler(FContentManager, Pgchar(aName))) then
    WriteLn('WebView Create RegisterScriptMessageHandler Failed Name: ', aName);
end;

function TWkWebview.NewWebViewWithUserContentManager(): WebKitWebView;
begin
  if FContentManager = nil then
    NewUserContentManager();
  if FWebView = nil then
    FWebView := Webkit_Web_View(webkit_web_view_new_with_user_content_manager(FContentManager));
  if FWebView = nil then
    raise Exception.Create('WebView Create Failed.');
  Result := FWebView;
end;

procedure TWkWebview.StartDrag(aFormWindow: TWinControl);
var
  aWindow: PGtkWindow;
begin
  aWindow := PGtkWindow(TGtk3Widget(aFormWindow.Handle).Widget);
  aWindow^.begin_move_drag(FDargMouseButton, FDargXRoot, FDargYRoot, FDargTime);
  aWindow := nil;
end;

procedure TWkWebview.TerminateWebProcess();
begin
  if Assigned(FWebview) then
    webkit_web_view_terminate_web_process(FWebview);
end;

procedure TWkWebview.TryClose();
begin
  if Assigned(FWebview) then
    webkit_web_view_try_close(FWebview);
end;

function TWkWebview.GetTitle(): string;
begin
  Result := '';
  if Assigned(FWebview) then
    Result := string(webkit_web_view_get_title(FWebview));
end;

function TWkWebview.GetURI(): string;
begin
  Result := '';
  if Assigned(FWebview) then
    Result := string(webkit_web_view_get_uri(FWebview));
end;

procedure TWkWebview.ExecuteScript(const AScript: string; aId: Integer);
var
  JSExecuteContext: PJSExecuteContext;
begin
  JSExecuteContext := nil;
  if Assigned(FWebview) and (Length(AScript) > 0) then
  begin
    {$ifdef LCLGtk2}
    webkit_web_view_execute_script(FWebview, Pgchar(AScript));
    {$endif}
    {$ifdef LCLGtk3}
    //webkit_web_view_run_javascript(FWebview, Pgchar(AScript), nil, nil, nil);
    //webkit_web_view_evaluate_javascript(FWebview, Pgchar(AScript), Gssize(length(AScript)), Pgchar(''), Pgchar(''), nil, nil, nil);
    JSExecuteContext := New(PJSExecuteContext);
    JSExecuteContext^.ExecuteID := aId;
    JSExecuteContext^.Webview := self;
    if Assigned(FOnExecuteScriptFinished) then
      webkit_web_view_run_javascript(FWebview, Pgchar(AScript), nil, TGCALLBACK(@doAPIExecuteScriptFinished), gpointer(JSExecuteContext))
    else
      webkit_web_view_run_javascript(FWebview, Pgchar(AScript), nil, nil, gpointer(JSExecuteContext));
    {$endif}
  end;
end;

procedure TWkWebview.GoBack();
begin
  if Assigned(FWebview) and webkit_web_view_can_go_back(FWebview) then
    webkit_web_view_go_back(FWebview);
end;

procedure TWkWebview.GoForward();
begin
  if Assigned(FWebview) and webkit_web_view_can_go_forward(FWebview) then
    webkit_web_view_go_forward(FWebview);
end;

procedure TWkWebview.Reload();
begin
  if Assigned(FWebview) then
    webkit_web_view_reload(FWebview);
end;

procedure TWkWebview.Stop();
begin
  if Assigned(FWebview) then
    webkit_web_view_stop_loading(FWebview);
end;

function TWkWebview.CanGoBack(): boolean;
begin
  Result := False;
  if Assigned(FWebview) then
    Result := boolean(webkit_web_view_can_go_back(FWebview));
end;

function TWkWebview.CanGoForward(): boolean;
begin
  Result := False;
  if Assigned(FWebview) then
    Result := boolean(webkit_web_view_can_go_forward(FWebview));
end;

function TWkWebview.IsLoading(): boolean;
begin
  Result := False;
  if Assigned(FWebview) then
    Result := boolean(webkit_web_view_is_loading(FWebview));
end;

procedure TWkWebview.LoadHTML(const AHTML: string);
begin
  if Assigned(FWebview) and (Length(AHTML) > 0) then
    webkit_web_view_load_html(FWebview, PChar(AHTML), 'about:blank');
end;

procedure TWkWebview.LoadURL(const AURL: string);
begin
  if Assigned(FWebview) and (Length(AURL) > 0) then
    webkit_web_view_load_uri(FWebview, PChar(AURL));
end;

procedure TWkWebview.EnabledDevtools(aEnabled: boolean);
var
  settings: WebKitSettings;
begin
  if Assigned(FWebview) then
  begin
    settings := webkit_web_view_get_settings(FWebview);
    webkit_settings_set_enable_developer_extras(settings, aEnabled);
  end;
end;

procedure TWkWebview.ShowDevtools();
var
  settings: WebKitSettings;
  inspector: WebKitWebInspector;
begin
  if Assigned(FWebview) then
  begin
    settings := webkit_web_view_get_settings(FWebview);
    if boolean(webkit_settings_get_enable_developer_extras(settings)) then
    begin
      inspector := webkit_web_view_get_inspector(FWebview);
      webkit_web_inspector_show(inspector);
    end;
  end;
end;

function TWkWebview.CookieManager(): TWkCookieManager;
begin
  if FCookieManager = nil then
  begin
    FCookieManager := TWkCookieManager.NewDelegate(webkit_web_context_get_cookie_manager(webkit_web_context_get_default()), self);
  end;
  Result := FCookieManager;
end;

function TWkWebview.GetSettings(): TWkSettings;
begin
  Result := nil;
  if Assigned(FWebview) then
  begin
    Result := TWkSettings.Create(webkit_web_view_get_settings(WEBKIT_WEB_VIEW(FWebView)));
  end;
end;

procedure TWkWebview.SetSettings(aSetting: TWkSettings);
begin
  if Assigned(FWebview) and Assigned(aSetting) then
  begin
    webkit_web_view_set_settings(FWebView, aSetting.Data());
  end;
end;

procedure TWkWebview.FreeWebview();
begin
  //if sendMessageId <> 0 then
  //begin
  //  g_signal_handler_disconnect(FContentManager, sendMessageId);
  //  sendMessageId := 0;
  //end;
  //if loadChangeId <> 0 then
  //begin
  //  g_signal_handler_disconnect(FWebView, loadChangeId);
  //  loadChangeId := 0;
  //end;
  if FContentManager <> nil then
  begin
    g_object_unref(FContentManager);
    FContentManager := nil;
  end;
  if FWebView <> nil then
  begin
    FWebView := nil;
  end;
  Free();
end;

function TWkWebview.AsCookieManagerDelegate(): IWkCookieManagerDelegateEvent;
begin
  Result := self as IWkCookieManagerDelegateEvent;
end;

function TWkWebview.AsSchemeRequestDelegate(): IWkSchemeRequestDelegateEvent;
begin
  Result := self as IWkSchemeRequestDelegateEvent;
end;

end.
