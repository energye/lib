unit uLibWebkit;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils,
{$IFDEF LClGtk3}
  LazGtk3, LazGObject2, LazGLib2, LazGio2, gtk3procs,
  //gtk3widgets,
  //LazWebKit3,
  //LazSoup2_4,
{$ENDIF}
  dynlibs;


type
  PSoupMessageHeaders = gpointer; // 是Soup库的一部分，Soup是一个C语言的HTTP客户端/服务器库
  PSoupMessageHeadersIter = gpointer;
  PSoupCookie = gpointer;
  PSoupDate = gpointer;

  PCancellable = PGCancellable;
  PInputStream = PGInputStream;

  PList = PGList;
  PAsyncResult = PGAsyncResult;

  WebKitWebView = PGtkWidget;
  WebKitUserContentManager = gpointer;
  WebKitJavascriptResult = gpointer;
  WebKitNotification = gpointer;
  WebKitWebContext = gpointer;
  WebKitCookieManager = gpointer;
  WebKitURISchemeRequest = gpointer;
  WebKitURISchemeResponse = gpointer;
  WebKitURIRequest = gpointer;
  WebKitURIResponse = gpointer;
  WebKitSettings = gpointer;
  WebKitWebInspector = gpointer;
  WebKitUserScript = gpointer;
  WebKitPolicyDecision = gpointer;
  WebKitNavigationPolicyDecision = WebKitPolicyDecision;
  WebKitResponsePolicyDecision = WebKitPolicyDecision;
  WebKitWebsitePolicies = gpointer;
  WebKitNavigationAction = gpointer;
  WebKitContextMenu = gpointer;
  WebKitContextMenuItem = gpointer;
  WebKitHitTestResult = gpointer;
  JSCValue = gpointer;
  JSCContext = gpointer;
  JSCException = gpointer;
  JSGlobalContextRef = gpointer;
  JSValueRef = gpointer;
  JSStringRef = gpointer;
  JSObjectRef = gpointer;
  JSContextRef = gpointer;
  PWkAction = PGSimpleAction;
  TWkURISchemeRequestCallback = TGCallback; // procedure(request: WebKitURISchemeRequest; data: gpointer); cdecl;
  TAsyncReadyCallback = TGCallback; // procedure(source_object: PGObject; res: PGAsyncResult; user_data: gpointer); cdecl;
  TDestroyNotify = TGDestroyNotify; // procedure(data: gpointer);

  TScrolledWindow = {$IFDEF LCLGtk2}PGtkWidget{$ENDIF} {$IFDEF LCLGtk3}PGtkScrolledWindow{$ENDIF};

  TSoupMessageHeadersForeachFunc = procedure(name: Pgchar; value: Pgchar; user_data: gpointer); cdecl;

  // 值用于表示在#WebKitWebView加载操作期间发生的不同事件。
  WebKitLoadEvent = (
    WEBKIT_LOAD_STARTED,    // 已发出新的加载请求。尚未接收到数据，已分配空结构来执行加载;由于传输问题，例如无法解析名称或连接到端口，负载仍然可能失败
    WEBKIT_LOAD_REDIRECTED, // 临时数据源收到服务器重定向
    WEBKIT_LOAD_COMMITTED,  // 内容开始到达页面加载。建立了必要的运输要求，并且正在执行装载
    WEBKIT_LOAD_FINISHED    // 加载完成。所有资源都已完成加载，或者在加载操作期间出现错误
  );

  // 用于确定硬件加速策略的值
  WebKitHardwareAccelerationPolicy = (
    WEBKIT_HARDWARE_ACCELERATION_POLICY_ON_DEMAND, // 硬件加速根据web内容的请求启用/禁用。
    WEBKIT_HARDWARE_ACCELERATION_POLICY_ALWAYS,    // 硬件加速总是启用的，即使对于没有请求它的网站也是如此
    WEBKIT_HARDWARE_ACCELERATION_POLICY_NEVER      // 硬件加速总是被禁用的，即使是对于请求它的网站
  );

  // 用于确定#WebKitWebContext缓存模型的值
  WebKitCacheModel = (
    WEBKIT_CACHE_MODEL_DOCUMENT_VIEWER, // 完全禁用缓存，这将大大减少内存使用。对于只访问单个本地文件而不导航到其他页面的应用程序非常有用。不会缓存任何远程资源。
    WEBKIT_CACHE_MODEL_WEB_BROWSER,     // 为查看一系列本地文件而优化的缓存模型——例如，文档查看器或网站设计器。WebKit将缓存适度数量的资源。
    WEBKIT_CACHE_MODEL_DOCUMENT_BROWSER // 通过缓存大量资源和以前查看的内容，大大提高文档加载速度。
  );

  // 用于表示cookie持久存储类型的值。
  WebKitCookiePersistentStorage = (
   WEBKIT_COOKIE_PERSISTENT_STORAGE_TEXT,  // cookie存储在Mozilla的" Cookies .txt"格式的文本文件中
   WEBKIT_COOKIE_PERSISTENT_STORAGE_SQLITE // cookie以当前Mozilla格式存储在SQLite文件中
  );

  // 用于表示cookie接受策略的值。
  WebKitCookieAcceptPolicy = (
   WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS,    // 无条件接受所有cookie
   WEBKIT_COOKIE_POLICY_ACCEPT_NEVER,     // 无条件拒绝所有cookie
   WEBKIT_COOKIE_POLICY_ACCEPT_NO_THIRD_PARTY // 仅接受由加载的主文档设置的cookie
  );

  // 指定要在哪些框架中插入用户样式表。
  WebKitUserContentInjectedFrames = (
   WEBKIT_USER_CONTENT_INJECT_ALL_FRAMES, // 将用户样式表插入到web视图加载的所有框架中，包括嵌套框架。这是默认值
   WEBKIT_USER_CONTENT_INJECT_TOP_FRAME   // 在web视图加载的顶层框架中*只*插入用户样式表，而在嵌套框架中*不插入
  );

  // 指定如何处理用户样式表。
  WebKitUserStyleLevel = (
   WEBKIT_USER_STYLE_LEVEL_USER,  // 样式表是用户样式表，其内容总是覆盖其他样式表。这是默认值
   WEBKIT_USER_STYLE_LEVEL_AUTHOR // 样式表将被视为由加载的文档提供的样式表。这意味着其他用户样式表可能仍然会覆盖它
  );

  // 指定将在文档的哪个位置插入用户脚本。
  WebKitUserScriptInjectionTime = (
   WEBKIT_USER_SCRIPT_INJECT_AT_DOCUMENT_START, // 在加载文档的开头插入用户脚本的代码。这是默认值
   WEBKIT_USER_SCRIPT_INJECT_AT_DOCUMENT_END    // 在加载文档的末尾插入用户脚本的代码
  );

  // 用于确定期间的策略决策类型的值
  WebKitPolicyDecisionType = (
    // 这种类型的政策决定是在WebKit即将在主框架或子框架中导航到新页面时请求的
    // 可接受的政策决定是webkit_policy_decision_use()或webkit_policy_decision_ignore()
    // 这种类型的政策决定始终是 WebKitNavigationPolicyDecision
    WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION,
    // 当WebKit要创建一个新窗口时，需要这种类型的策略决策。可接受的策略决策是webkit_policy_decision_use()或webkit_policy_decision_ignore()
    // 这种类型的策略决策总是一个 WebKitNavigationPolicyDecision
    // 这些决定对于为新窗口实现特殊操作非常有用，例如，当键盘修饰符处于活动状态时，强制在选项卡中打开新窗口，或者处理<a>元素上的特殊目标属性
    WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION,
    // 当WebKit收到网络资源的响应并准备开始加载时，使用这种类型的决策
    // 注意，这些资源包括页面的所有子资源，例如图像和样式表以及主文档
    // 对该决策的适当策略响应是webkit_policy_decision_use()、webkit_policy_decision_ignore()或webkit_policy_decision_download()
    // 这种类型的策略决策总是一个 WebKitResponsePolicyDecision
    // 这个决定对于强制下载某些类型的资源而不是在WebView中呈现或完全阻止资源的传输非常有用
    WEBKIT_POLICY_DECISION_TYPE_RESPONSE
  );

  // 用于指定自动播放策略的值
  WebKitAutoplayPolicy = (
    WEBKIT_AUTOPLAY_ALLOW,               // 不要限制自动播放
    WEBKIT_AUTOPLAY_ALLOW_WITHOUT_SOUND, // 允许视频自动播放，如果他们没有音轨，或者如果他们的音轨是静音的
    WEBKIT_AUTOPLAY_DENY                 // 永远不要允许自动播放
  );

  // 用于指定web进程异常终止原因的值
  WebKitWebProcessTerminationReason = (
    WEBKIT_WEB_PROCESS_CRASHED,               // web进程崩溃
    WEBKIT_WEB_PROCESS_EXCEEDED_MEMORY_LIMIT, // web进程超过内存限制。处理步骤
    WEBKIT_WEB_PROCESS_TERMINATED_BY_API      // web进程终止由API调用请求。自:2.34
  );

  WebKitContextMenuAction = (
    WEBKIT_CONTEXT_MENU_ACTION_NO_ACTION = 0,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK_IN_NEW_WINDOW,
    WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_LINK_TO_DISK,
    WEBKIT_CONTEXT_MENU_ACTION_COPY_LINK_TO_CLIPBOARD,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_IMAGE_IN_NEW_WINDOW,
    WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_IMAGE_TO_DISK,
    WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_TO_CLIPBOARD,
    WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_URL_TO_CLIPBOARD,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_FRAME_IN_NEW_WINDOW,
    WEBKIT_CONTEXT_MENU_ACTION_GO_BACK,
    WEBKIT_CONTEXT_MENU_ACTION_GO_FORWARD,
    WEBKIT_CONTEXT_MENU_ACTION_STOP,
    WEBKIT_CONTEXT_MENU_ACTION_RELOAD,
    WEBKIT_CONTEXT_MENU_ACTION_COPY,
    WEBKIT_CONTEXT_MENU_ACTION_CUT,
    WEBKIT_CONTEXT_MENU_ACTION_PASTE,
    WEBKIT_CONTEXT_MENU_ACTION_DELETE,
    WEBKIT_CONTEXT_MENU_ACTION_SELECT_ALL,
    WEBKIT_CONTEXT_MENU_ACTION_INPUT_METHODS,
    WEBKIT_CONTEXT_MENU_ACTION_UNICODE,
    WEBKIT_CONTEXT_MENU_ACTION_SPELLING_GUESS,
    WEBKIT_CONTEXT_MENU_ACTION_NO_GUESSES_FOUND,
    WEBKIT_CONTEXT_MENU_ACTION_IGNORE_SPELLING,
    WEBKIT_CONTEXT_MENU_ACTION_LEARN_SPELLING,
    WEBKIT_CONTEXT_MENU_ACTION_IGNORE_GRAMMAR,
    WEBKIT_CONTEXT_MENU_ACTION_FONT_MENU,
    WEBKIT_CONTEXT_MENU_ACTION_BOLD,
    WEBKIT_CONTEXT_MENU_ACTION_ITALIC,
    WEBKIT_CONTEXT_MENU_ACTION_UNDERLINE,
    WEBKIT_CONTEXT_MENU_ACTION_OUTLINE,
    WEBKIT_CONTEXT_MENU_ACTION_INSPECT_ELEMENT,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_VIDEO_IN_NEW_WINDOW,
    WEBKIT_CONTEXT_MENU_ACTION_OPEN_AUDIO_IN_NEW_WINDOW,
    WEBKIT_CONTEXT_MENU_ACTION_COPY_VIDEO_LINK_TO_CLIPBOARD,
    WEBKIT_CONTEXT_MENU_ACTION_COPY_AUDIO_LINK_TO_CLIPBOARD,
    WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_CONTROLS,
    WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_LOOP,
    WEBKIT_CONTEXT_MENU_ACTION_ENTER_VIDEO_FULLSCREEN,
    WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PLAY,
    WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PAUSE,
    WEBKIT_CONTEXT_MENU_ACTION_MEDIA_MUTE,
    WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_VIDEO_TO_DISK,
    WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_AUDIO_TO_DISK,
    WEBKIT_CONTEXT_MENU_ACTION_INSERT_EMOJI,
    WEBKIT_CONTEXT_MENU_ACTION_PASTE_AS_PLAIN_TEXT,
    WEBKIT_CONTEXT_MENU_ACTION_CUSTOM = 10000
  );

 JSCValuePropertyFlags = (
    JSC_VALUE_PROPERTY_CONFIGURABLE = 1 shl 0,
    JSC_VALUE_PROPERTY_ENUMERABLE   = 1 shl 1,
    JSC_VALUE_PROPERTY_WRITABLE     = 1 shl 2
 );

 JSCTypedArrayType = (
    JSC_TYPED_ARRAY_NONE = 0,
    JSC_TYPED_ARRAY_INT8,
    JSC_TYPED_ARRAY_INT16,
    JSC_TYPED_ARRAY_INT32,
    JSC_TYPED_ARRAY_INT64,
    JSC_TYPED_ARRAY_UINT8,
    JSC_TYPED_ARRAY_UINT8_CLAMPED,
    JSC_TYPED_ARRAY_UINT16,
    JSC_TYPED_ARRAY_UINT32,
    JSC_TYPED_ARRAY_UINT64,
    JSC_TYPED_ARRAY_FLOAT32,
    JSC_TYPED_ARRAY_FLOAT64
 );

 JSCCheckSyntaxMode = (
   JSC_CHECK_SYNTAX_MODE_SCRIPT,
   JSC_CHECK_SYNTAX_MODE_MODULE
 );

 JSCCheckSyntaxResult = (
    JSC_CHECK_SYNTAX_RESULT_SUCCESS,
    JSC_CHECK_SYNTAX_RESULT_RECOVERABLE_ERROR,
    JSC_CHECK_SYNTAX_RESULT_IRRECOVERABLE_ERROR,
    JSC_CHECK_SYNTAX_RESULT_UNTERMINATED_LITERAL_ERROR,
    JSC_CHECK_SYNTAX_RESULT_OUT_OF_MEMORY_ERROR,
    JSC_CHECK_SYNTAX_RESULT_STACK_OVERFLOW_ERROR
 );

 JSType = (
    kJSTypeUndefined,
    kJSTypeNull,
    kJSTypeBoolean,
    kJSTypeNumber,
    kJSTypeString,
    kJSTypeObject
 );

  TSoupMessageHeadersType = (
    SOUP_MESSAGE_HEADERS_REQUEST,
    SOUP_MESSAGE_HEADERS_RESPONSE,
    SOUP_MESSAGE_HEADERS_MULTIPART
  );

  TSoupDateFormat = (
    SOUP_DATE_HTTP                 = 1,
    SOUP_DATE_COOKIE               = 2,
    SOUP_DATE_RFC2822              = 3,
    SOUP_DATE_ISO8601_COMPACT      = 4,
    SOUP_DATE_ISO8601_FULL         = 5,
    SOUP_DATE_ISO8601              = 5,
    SOUP_DATE_ISO8601_XMLRPC       = 6
  );

var
  // Webkit dll
  LibWebkitGtkHandle: TLibHandle;
  // JavascriptCore dll
  LibJavascriptCoreGtkHandle: TLibHandle;
  // Soup dll
  LibSoupHandle: TLibHandle;

  { Webkit API }
  webkit_get_major_version  : function(): guint; cdecl;
  webkit_get_minor_version  : function(): guint; cdecl;
  webkit_get_micro_version  : function(): guint; cdecl;

  webkit_web_view_new                : function(): PGtkWidget; cdecl;
  webkit_web_view_load_uri           : procedure(webview: WebKitWebView; aurl: Pgchar); cdecl;
  webkit_web_view_get_title          : function(webview: WebKitWebView): Pgchar; cdecl;
  webkit_web_view_can_go_back        : function(webview: WebKitWebView): gboolean; cdecl;
  webkit_web_view_go_back            : procedure(webview: WebKitWebView); cdecl;
  webkit_web_view_can_go_forward     : function(webview: WebKitWebView): gboolean; cdecl;
  webkit_web_view_go_forward         : procedure(webview: WebKitWebView); cdecl;
  webkit_web_view_reload             : procedure(webview: WebKitWebView); cdecl;
  webkit_web_view_stop_loading       : procedure(webview: WebKitWebView); cdecl;
  webkit_web_view_is_loading         : function(webview: WebKitWebView): gboolean; cdecl;
  webkit_web_view_load_html          : procedure(webview: WebKitWebView; content, base_uri: Pgchar); cdecl;
  webkit_web_view_new_with_user_content_manager   : function(contentManager: WebKitUserContentManager): PGtkWidget; cdecl;
  webkit_web_view_get_settings                    : function (webview: WebKitWebView): WebKitSettings; cdecl;
  webkit_web_view_set_settings                    : procedure(webview: WebKitWebView; settings: WebKitSettings); cdecl;
  webkit_web_view_try_close                       : procedure(webview: WebKitWebView); cdecl;
  webkit_web_view_run_javascript                  : procedure(webview: WebKitWebView; script: Pgchar; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_web_view_run_javascript_finish           : function(webview: WebKitWebView; result: PAsyncResult; error: PGError): WebKitJavascriptResult; cdecl;
  webkit_web_view_evaluate_javascript             : procedure(webview: WebKitWebView; script: Pgchar; length: gssize; world_name, source_uri: Pgchar; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_web_view_evaluate_javascript_finish      : function(webview: WebKitWebView; result: PAsyncResult; error: PGError): WebKitJavascriptResult; cdecl;
  webkit_web_view_get_inspector                   : function(settings: WebKitSettings): WebKitWebInspector; cdecl;
  webkit_web_view_terminate_web_process           : procedure(webview: WebKitWebView); cdecl;

  webkit_user_content_manager_new                                   : function(): WebKitUserContentManager; cdecl;
  webkit_user_content_manager_register_script_message_handler       : function(manager: WebKitUserContentManager; name: Pgchar): gboolean; cdecl;
  webkit_user_content_manager_add_script                            : procedure(manager: WebKitUserContentManager; script: WebKitUserScript); cdecl; // 2.6
  webkit_user_content_manager_remove_script                         : procedure(manager: WebKitUserContentManager; script: WebKitUserScript); cdecl; // 2.32

  webkit_web_context_get_default               : function(): WebKitWebContext; cdecl;
  webkit_web_context_new                       : function(): WebKitWebContext; cdecl;
  webkit_web_context_register_uri_scheme       : procedure(context: WebKitWebContext; scheme: Pgchar; callback: TWkURISchemeRequestCallback; user_data: gpointer; user_data_destroy_func: TDestroyNotify); cdecl;
  webkit_web_context_set_cache_model           : procedure(webview: WebKitWebView; cache_model : WebKitCacheModel); cdecl;
  webkit_web_context_download_uri              : procedure(context: WebKitWebContext; uri : Pgchar); cdecl;
  webkit_web_context_get_cookie_manager        : function(context: WebKitWebContext): WebKitCookieManager; cdecl;
  webkit_web_context_set_preferred_languages   : procedure(context: WebKitWebContext; languages : PGList); cdecl;

  webkit_settings_new                          : function(): WebKitSettings; cdecl;
  webkit_settings_get_enable_javascript        : function(settings: WebKitSettings): gboolean; cdecl;
  webkit_settings_set_enable_javascript        : procedure(settings: WebKitSettings; enabled: gboolean); cdecl;
  webkit_settings_get_auto_load_images         : function(settings: WebKitSettings): gboolean; cdecl;
  webkit_settings_set_auto_load_images         : procedure(settings: WebKitSettings; enabled: gboolean); cdecl;
  webkit_settings_set_user_agent_with_application_details    : procedure(settings: WebKitSettings; application_name, application_version: Pgchar); cdecl;
  webkit_settings_set_hardware_acceleration_policy           : procedure(settings: WebKitSettings; policy: WebKitHardwareAccelerationPolicy); cdecl;
  webkit_settings_get_enable_developer_extras                : function(settings: WebKitSettings): gboolean; cdecl;
  webkit_settings_set_enable_developer_extras                : procedure(settings: WebKitSettings; enabled: gboolean); cdecl;

  webkit_web_inspector_close                    : procedure(inspector: WebKitWebInspector); cdecl;
  webkit_web_inspector_show                     : procedure(inspector: WebKitWebInspector); cdecl;

  webkit_javascript_result_get_js_value         : function(js_result: WebKitJavascriptResult): JSCValue; cdecl;
  webkit_javascript_result_get_global_context   : function(js_result: WebKitJavascriptResult): JSGlobalContextRef; cdecl; // 自 2.22 版起已弃用, 改用 jsc_value_get_context()
  webkit_javascript_result_get_value            : function(js_result: WebKitJavascriptResult): JSValueRef; cdecl; // 自 2.22 版起已弃用
  webkit_javascript_result_unref                : procedure(js_result: WebKitJavascriptResult); cdecl;

  webkit_notification_close                     : procedure(notification: WebKitNotification); cdecl;

  webkit_user_script_ref                        : function(user_script: WebKitUserScript): WebKitUserScript; cdecl;
  webkit_user_script_unref                      : procedure(user_script: WebKitUserScript); cdecl;
  webkit_user_script_new                        : function(source: Pgchar; injected_frames: WebKitUserContentInjectedFrames; injection_time: WebKitUserScriptInjectionTime; allow_list, block_list: Pgchar): WebKitUserScript; cdecl;

  // ContextMenu
  webkit_context_menu_new                     : function(): WebKitContextMenu; cdecl;
  webkit_context_menu_prepend                 : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
  webkit_context_menu_append                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
  webkit_context_menu_insert                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem; position: gint); cdecl;
  webkit_context_menu_get_n_items             : function(menu: WebKitContextMenu): gint; cdecl;
  webkit_context_menu_get_item_at_position    : function(menu: WebKitContextMenu; position: gint): WebKitContextMenuItem; cdecl;
  webkit_context_menu_remove                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
  webkit_context_menu_remove_all              : procedure(menu: WebKitContextMenu); cdecl;

  // ContextMenuItem
  webkit_context_menu_item_new_from_gaction         : function(action: PGSimpleAction; label_: Pgchar; target: PGVariant): WebKitContextMenuItem; cdecl;
  webkit_context_menu_item_new_from_stock_action    : function(action: WebKitContextMenuAction): WebKitContextMenuItem; cdecl;
  webkit_context_menu_item_new_from_stock_action_with_label    : function(action: WebKitContextMenuAction; label_: Pgchar): WebKitContextMenuItem; cdecl;
  webkit_context_menu_item_new_with_submenu         : function(label_: Pgchar; submenu: WebKitContextMenu): WebKitContextMenuItem; cdecl;
  webkit_context_menu_item_get_submenu              : function(item: WebKitContextMenuItem): WebKitContextMenu; cdecl;
  webkit_context_menu_item_set_submenu              : procedure(menu: WebKitContextMenuItem; submenu: WebKitContextMenu); cdecl;
  webkit_context_menu_item_get_gaction              : function(item: WebKitContextMenuItem): PGSimpleAction; cdecl;
  webkit_context_menu_item_get_stock_action         : function(item: WebKitContextMenuItem): WebKitContextMenuAction; cdecl;
  webkit_context_menu_item_new_separator            : function(): WebKitContextMenuItem; cdecl;
  webkit_context_menu_item_is_separator             : function(item: WebKitContextMenuItem): gboolean; cdecl;

  // PolicyDecision
  webkit_policy_decision_use                    : procedure(decision: WebKitPolicyDecision); cdecl;
  webkit_policy_decision_use_with_policies      : procedure(decision: WebKitPolicyDecision; policies: WebKitWebsitePolicies); cdecl;
  webkit_policy_decision_ignore                 : procedure(decision: WebKitPolicyDecision); cdecl;
  webkit_policy_decision_download               : procedure(decision: WebKitPolicyDecision); cdecl;

  // WebsitePolicies
  webkit_website_policies_new                   : function(): WebKitWebsitePolicies; cdecl;
  webkit_website_policies_new_with_policies     : function(first_policy_name: Pgchar): WebKitWebsitePolicies; cdecl;
  webkit_website_policies_get_autoplay_policy   : function(policies: WebKitWebsitePolicies): WebKitAutoplayPolicy; cdecl;

  // NavigationPolicyDecision
  webkit_navigation_policy_decision_get_navigation_action    : function(decision :WebKitNavigationPolicyDecision): WebKitNavigationAction; cdecl;

  // ResponsePolicyDecision
  webkit_response_policy_decision_get_request    : function(decision :WebKitResponsePolicyDecision): WebKitURIRequest; cdecl;
  webkit_response_policy_decision_get_response   : function(decision :WebKitResponsePolicyDecision): WebKitURIResponse; cdecl;

  // NavigationAction
  webkit_navigation_action_get_request    : function(navigation :WebKitNavigationAction): WebKitURIRequest; cdecl;
  webkit_navigation_action_free           : procedure(navigation: WebKitNavigationAction); cdecl;

  // URISchemeRequest
  webkit_uri_scheme_request_get_scheme           : function(request: WebKitURISchemeRequest): Pgchar; cdecl;
  webkit_uri_scheme_request_get_uri              : function(request: WebKitURISchemeRequest): Pgchar; cdecl;
  webkit_uri_scheme_request_get_path             : function(request: WebKitURISchemeRequest): Pgchar; cdecl;
  webkit_uri_scheme_request_get_web_view         : function(request: WebKitURISchemeRequest): WebKitWebView; cdecl;
  webkit_uri_scheme_request_get_http_method      : function(request: WebKitURISchemeRequest): Pgchar; cdecl;
  webkit_uri_scheme_request_get_http_headers     : function(request: WebKitURISchemeRequest): PSoupMessageHeaders; cdecl;
  webkit_uri_scheme_request_get_http_body        : function(request: WebKitURISchemeRequest): PGInputStream; cdecl;
  webkit_uri_scheme_request_finish               : procedure(request: WebKitURISchemeRequest; stream: PGInputStream; stream_length: gint64; content_type: Pgchar); cdecl;
  webkit_uri_scheme_request_finish_with_response : procedure(request: WebKitURISchemeRequest; response: WebKitURISchemeResponse); cdecl;
  webkit_uri_scheme_request_finish_error         : procedure(request: WebKitURISchemeRequest; error: PGError); cdecl;

  // URISchemeResponse
  webkit_uri_scheme_response_new               : function(input_stream: PGInputStream; stream_length: gint64): WebKitURISchemeResponse; cdecl;
  webkit_uri_scheme_response_set_status        : procedure(response: WebKitURISchemeResponse; status_code: guint; reason_phrase: Pgchar); cdecl;
  webkit_uri_scheme_response_set_content_type  : procedure(response: WebKitURISchemeResponse; content_type: Pgchar); cdecl;
  webkit_uri_scheme_response_set_http_headers  : procedure(response: WebKitURISchemeResponse; headers: PSoupMessageHeaders); cdecl;

  // URIRequest
  webkit_uri_request_new                       : function(uri: Pgchar): WebKitURIRequest; cdecl;
  webkit_uri_request_get_uri                   : function(request: WebKitURIRequest): Pgchar; cdecl;
  webkit_uri_request_set_uri                   : procedure(request: WebKitURIRequest; uri: Pgchar); cdecl;
  webkit_uri_request_get_http_method           : function(request: WebKitURIRequest): Pgchar; cdecl;
  webkit_uri_request_get_http_headers          : function(request: WebKitURIRequest): PSoupMessageHeaders; cdecl;

  // URIResponse
  webkit_uri_response_get_uri                  : function(request: WebKitURIResponse): Pgchar; cdecl;
  webkit_uri_response_get_status_code          : function(request: WebKitURIResponse): guint; cdecl;
  webkit_uri_response_get_content_length       : function(request: WebKitURIResponse): guint64; cdecl;
  webkit_uri_response_get_mime_type            : function(request: WebKitURIResponse): Pgchar; cdecl;
  webkit_uri_response_get_suggested_filename   : function(request: WebKitURIResponse): Pgchar; cdecl;
  webkit_uri_response_get_http_headers         : function(request: WebKitURIResponse): PSoupMessageHeaders; cdecl;

  // CookieManager
  webkit_cookie_manager_set_persistent_storage    : procedure(cookie_manager: WebKitCookieManager; filename: Pgchar; storage: WebKitCookiePersistentStorage); cdecl;
  webkit_cookie_manager_set_accept_policy         : procedure(cookie_manager: WebKitCookieManager; policy: WebKitCookieAcceptPolicy); cdecl;
  webkit_cookie_manager_get_accept_policy         : procedure(cookie_manager: WebKitCookieManager; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_cookie_manager_get_accept_policy_finish  : function(cookie_manager: WebKitCookieManager; result: PAsyncResult; error: PPGError): WebKitCookieAcceptPolicy; cdecl;
  webkit_cookie_manager_add_cookie                : procedure(cookie_manager: WebKitCookieManager; cookie: PSoupCookie; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_cookie_manager_add_cookie_finish         : function(cookie_manager: WebKitCookieManager; result: PAsyncResult; error: PPGError): gboolean; cdecl;
  webkit_cookie_manager_get_cookies               : procedure(cookie_manager: WebKitCookieManager; uri: Pgchar; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_cookie_manager_get_cookies_finish        : function(cookie_manager: WebKitCookieManager; result: PAsyncResult; error: PPGError): PGList; cdecl;
  webkit_cookie_manager_delete_cookie             : procedure(cookie_manager: WebKitCookieManager; cookie: PSoupCookie; cancellable: PCancellable; callback: TAsyncReadyCallback; user_data: gpointer); cdecl;
  webkit_cookie_manager_delete_cookie_finish      : function(cookie_manager: WebKitCookieManager; result: PAsyncResult; error: PPGError): gboolean; cdecl;
  webkit_cookie_manager_delete_cookies_for_domain : procedure(cookie_manager: WebKitCookieManager; domain: Pgchar); cdecl;
  webkit_cookie_manager_delete_all_cookies        : procedure(cookie_manager: WebKitCookieManager); cdecl;

  { JavascriptCore API }
  // JSC Value
  jsc_value_get_context    : function(value: JSCValue): JSCContext; cdecl;
  jsc_value_new_undefined  : function(context: JSCContext): JSCValue; cdecl;
  jsc_value_is_undefined   : function(value: JSCValue): gboolean; cdecl;
  jsc_value_new_null       : function(context: JSCContext): JSCValue; cdecl;
  jsc_value_is_null        : function(value: JSCValue): gboolean; cdecl;
  jsc_value_new_number     : function(context: JSCContext; newValue: gdouble): JSCValue; cdecl;
  jsc_value_is_number      : function(value: JSCValue): gboolean; cdecl;
  jsc_value_to_double      : function(value: JSCValue): gdouble; cdecl;
  jsc_value_to_int32       : function(value: JSCValue): gint32; cdecl;
  jsc_value_new_boolean    : function(context: JSCContext; newValue: gboolean): JSCValue; cdecl;
  jsc_value_is_boolean     : function(value: JSCValue): gboolean; cdecl;
  jsc_value_to_boolean     : function(value: JSCValue): gboolean; cdecl;
  jsc_value_new_string     : function(value: JSCValue; newValue: Pgchar): JSCValue; cdecl;
  jsc_value_is_string      : function(value: JSCValue): gboolean; cdecl;
  jsc_value_to_string      : function(value: JSCValue): Pgchar; cdecl;

  // JS Value Ref
  JSValueGetType           : function(context: JSContextRef; value: JSValueRef): JSType; cdecl;
  JSValueMakeUndefined     : function(context: JSContextRef): JSValueRef; cdecl;
  JSValueMakeNull          : function(context: JSContextRef): JSValueRef; cdecl;
  JSValueMakeBoolean       : function(context: JSContextRef; value: gboolean): JSValueRef; cdecl;
  JSValueToBoolean         : function(context: JSContextRef; value: JSValueRef): gboolean; cdecl;
  JSValueMakeNumber        : function(context: JSContextRef; value: gdouble): JSValueRef; cdecl;
  JSValueToNumber          : function(context: JSContextRef; value: JSValueRef; exception: JSValueRef): gdouble; cdecl;
  JSValueMakeString        : function(context: JSContextRef; value: JSStringRef): JSValueRef; cdecl;
  JSValueToStringCopy      : function(context: JSContextRef; value: JSValueRef; exception: JSValueRef): JSStringRef; cdecl;

  // JS String Ref
  JSStringCreateWithCharacters        : function(value: Pgchar; numChars: size_t): JSStringRef; cdecl;
  JSStringCreateWithUTF8CString       : function(value: Pgchar): JSStringRef; cdecl;
  JSStringRelease                     : procedure(value: JSStringRef); cdecl;
  JSStringGetLength                   : function(value: JSStringRef): size_t; cdecl;
  JSStringGetMaximumUTF8CStringSize   : function(value: JSStringRef): size_t; cdecl;
  JSStringGetUTF8CString              : function(value: JSStringRef; buffer: Pgchar; bufferSize: size_t): size_t; cdecl;

  // JSC Context
  jsc_context_new              : function(value: JSCValue): JSCContext; cdecl;
  jsc_context_get_exception    : function(context: JSCContext): JSCException; cdecl;
  jsc_context_get_current      : function(): JSCContext; cdecl;
  jsc_context_clear_exception  : procedure(context: JSCContext); cdecl;
  jsc_context_evaluate         : function(context: JSCContext; code: Pgchar; size: gssize): JSCValue; cdecl;
  jsc_context_set_value        : procedure(context: JSCContext; name: Pgchar; value: JSCValue); cdecl;
  jsc_context_get_value        : function(context: JSCContext; name: Pgchar): JSCValue; cdecl;

  // JSC Exception
  jsc_exception_get_message    : function(exception: JSCException): Pgchar; cdecl;

  // soup 2_4
  soup_message_headers_new          : function(type_: TSoupMessageHeadersType): PSoupMessageHeaders; cdecl;
  soup_message_headers_iter_init    : procedure(iter: PSoupMessageHeadersIter; hdrs: PSoupMessageHeaders); cdecl;
  soup_message_headers_iter_next    : function(iter: PSoupMessageHeadersIter; name: PPgchar; value: PPgchar): gboolean; cdecl;
  soup_message_headers_foreach      : procedure(hdrs: PSoupMessageHeaders; func: TSoupMessageHeadersForeachFunc; user_data: gpointer); cdecl;
  soup_message_headers_append       : procedure(hdrs: PSoupMessageHeaders; name: Pgchar; value: Pgchar); cdecl;
  soup_message_headers_clear        : procedure(hdrs: PSoupMessageHeaders); cdecl;
  soup_message_headers_remove       : procedure(hdrs: PSoupMessageHeaders; name: Pgchar); cdecl;
  soup_message_headers_replace      : procedure(hdrs: PSoupMessageHeaders; name: Pgchar; value: Pgchar); cdecl;
  soup_message_headers_free         : procedure(hdrs: PSoupMessageHeaders); cdecl;

  soup_cookie_new          : function(name: Pgchar; value: Pgchar; domain: Pgchar; path: Pgchar; max_age: gint): PSoupCookie; cdecl;
  soup_cookie_free         : procedure(cookie: PSoupCookie); cdecl;
  soup_cookie_get_domain   : function(cookie: PSoupCookie): Pgchar; cdecl;
  soup_cookie_get_expires  : function(cookie: PSoupCookie): PSoupDate; cdecl;
  soup_cookie_get_http_only: function(cookie: PSoupCookie): gboolean; cdecl;
  soup_cookie_get_name     : function (cookie: PSoupCookie): Pgchar; cdecl;
  soup_cookie_get_path     : function(cookie: PSoupCookie): Pgchar; cdecl;
  soup_cookie_get_secure   : function(cookie: PSoupCookie): gboolean; cdecl;
  soup_cookie_get_value    : function(cookie: PSoupCookie): Pgchar; cdecl;
  soup_cookie_set_domain   : procedure(cookie: PSoupCookie; domain: Pgchar); cdecl;
  soup_cookie_set_expires  : procedure(cookie: PSoupCookie; expires: PSoupDate); cdecl;
  soup_cookie_set_http_only : procedure(cookie: PSoupCookie; http_only: gboolean); cdecl;
  soup_cookie_set_max_age   : procedure(cookie: PSoupCookie; max_age: gint); cdecl;
  soup_cookie_set_name      : procedure(cookie: PSoupCookie; name: Pgchar); cdecl;
  soup_cookie_set_path      : procedure(cookie: PSoupCookie; path: Pgchar); cdecl;
  soup_cookie_set_secure    : procedure(cookie: PSoupCookie; secure: gboolean); cdecl;
  soup_cookie_set_value     : procedure(cookie: PSoupCookie; value: Pgchar); cdecl;

  soup_date_new             : function(year: gint; month: gint; day: gint; hour: gint; minute: gint; second: gint): PSoupDate; cdecl;
  soup_date_get_year        : function(date: PSoupDate): gint; cdecl;
  soup_date_get_month       : function(date: PSoupDate): gint; cdecl;
  soup_date_get_day         : function(date: PSoupDate): gint; cdecl;
  soup_date_get_hour        : function(date: PSoupDate): gint; cdecl;
  soup_date_get_minute      : function(date: PSoupDate): gint; cdecl;
  soup_date_get_second      : function(date: PSoupDate): gint; cdecl;
  soup_date_get_utc         : function(date: PSoupDate): gint; cdecl;
  soup_date_get_offset      : function(date: PSoupDate): gint; cdecl;
  soup_date_to_string       : function(date: PSoupDate; format: TSoupDateFormat): Pgchar; cdecl;
  soup_date_to_time_t       : function(date: PSoupDate): glong; cdecl;
  soup_date_free            : procedure(date: PSoupDate); cdecl;

  // Webit utils
  function Webkit_Web_View(webview: PGtkWidget): WebKitWebView; inline;
  function Webkit_Web_View(aObject: PGObject): WebKitWebView; inline;
  function webkit_major_version(): Integer;
  function webkit_minor_version(): Integer;
  function webkit_micro_version(): Integer;

implementation

uses math;

const
 // webkit dll version
 {$IF Defined(LCLGtk2)}
   libwebkitso = 'libwebkitgtk-1.0.so.0';
   libjavascriptcoregtkso = '';
 {$ELSEIF Defined(LCLGtk3) }
   //libwebkitso = 'libwebkitgtk-3.0.so.0';
   //libjavascriptcoregtkso = 'libjavascriptcoregtk-3.0.so.0';

   libwebkitso = 'libwebkit2gtk-4.0.so';
   //libwebkitso = 'libwebkit2gtk-4.0.so.37';
   libjavascriptcoregtkso = 'libjavascriptcoregtk-4.0.so';
   //libjavascriptcoregtkso = 'libjavascriptcoregtk-4.0.so.18';
   libsoup2_4 = 'libsoup-2.4.so.1';
 {$ELSE}
   libwebkitso = '';
   libjavascriptcoregtkso = '';
 {$ENDIF}


function Webkit_Web_View(webview: PGtkWidget): WebKitWebView; inline;
begin
  Result := WebKitWebView(webview);
end;

function Webkit_Web_View(aObject: PGObject): WebKitWebView; inline;
begin
  Result := WebKitWebView(aObject);
end;

function webkit_major_version(): Integer;
begin
  Result := Integer(webkit_get_major_version());
end;

function webkit_minor_version(): Integer;
begin
  Result := Integer(webkit_get_minor_version());
end;

function webkit_micro_version(): Integer;
begin
  Result := Integer(webkit_get_micro_version());
end;

procedure LoadLibWebkitGtk;
begin
  // load LibWebKit
  if LibWebkitGtkHandle = 0 then
    LibWebkitGtkHandle := dynlibs.SafeLoadLibrary(libwebkitso);
  // check
  if LibWebkitGtkHandle = 0 then
    raise Exception.Create('WebView Webkit Lib Load Failed.' + libwebkitso);

  {$IFDEF LCLGtk3}
  // load LibJavascriptCore
  if LibJavascriptCoreGtkHandle = 0 then
    LibJavascriptCoreGtkHandle := dynlibs.SafeLoadLibrary(libjavascriptcoregtkso);
  // check
  if LibJavascriptCoreGtkHandle = 0 then
    raise Exception.Create('WebView Webkit JavascriptCore Lib Load Failed.' + libjavascriptcoregtkso);

  // load Libsoup 2_4
  if LibSoupHandle = 0 then
    LibSoupHandle := dynlibs.SafeLoadLibrary(libsoup2_4);
  // check
  if LibSoupHandle = 0 then
    raise Exception.Create('WebView Webkit Soup Lib Load Failed.' + libsoup2_4);
  {$ENDIF}

  // LibWebKit
  if LibWebkitGtkHandle <> 0 then
  begin
    Pointer(webkit_get_major_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_major_version');
    Pointer(webkit_get_minor_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_minor_version');
    Pointer(webkit_get_micro_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_micro_version');

    Pointer(webkit_web_view_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_new');
    Pointer(webkit_web_view_load_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_load_uri');
    Pointer(webkit_web_view_get_title) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_get_title');
    Pointer(webkit_web_view_can_go_back) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_can_go_back');
    Pointer(webkit_web_view_go_back) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_go_back');
    Pointer(webkit_web_view_can_go_forward) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_can_go_forward');
    Pointer(webkit_web_view_go_forward) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_go_forward');
    Pointer(webkit_web_view_reload) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_reload');
    Pointer(webkit_web_view_stop_loading) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_stop_loading');
    Pointer(webkit_web_view_is_loading) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_is_loading');
    Pointer(webkit_web_view_load_html) := dynlibs.GetProcAddress(LibWebkitGtkHandle, {$IFDEF LCLgtk3}'webkit_web_view_load_html'{$ELSE}'webkit_web_view_load_html_string'{$ENDIF});
    Pointer(webkit_web_view_new_with_user_content_manager) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_new_with_user_content_manager');
    Pointer(webkit_web_view_get_settings) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_get_settings');
    Pointer(webkit_web_view_set_settings) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_set_settings');
    Pointer(webkit_web_view_try_close) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_try_close');
    Pointer(webkit_web_view_run_javascript) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_run_javascript'); // gtk3
    Pointer(webkit_web_view_run_javascript_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_run_javascript_finish'); // gtk3
    Pointer(webkit_web_view_evaluate_javascript) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_evaluate_javascript'); // gtk3 2.40
    Pointer(webkit_web_view_evaluate_javascript_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_evaluate_javascript_finish'); // gtk3 2.40
    Pointer(webkit_web_view_get_inspector) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_get_inspector');
    Pointer(webkit_web_view_terminate_web_process) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_terminate_web_process');

    Pointer(webkit_user_content_manager_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_new');
    Pointer(webkit_user_content_manager_register_script_message_handler) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_register_script_message_handler');
    Pointer(webkit_user_content_manager_add_script) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_add_script');
    Pointer(webkit_user_content_manager_remove_script) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_remove_script');

    Pointer(webkit_web_context_get_default) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_get_default');
    Pointer(webkit_web_context_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_new');
    Pointer(webkit_web_context_register_uri_scheme) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_register_uri_scheme');
    Pointer(webkit_web_context_set_cache_model) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_set_cache_model');
    Pointer(webkit_web_context_download_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_download_uri');
    Pointer(webkit_web_context_get_cookie_manager) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_get_cookie_manager');
    Pointer(webkit_web_context_set_preferred_languages) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_set_preferred_languages');

    Pointer(webkit_settings_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_new');
    Pointer(webkit_settings_get_enable_javascript) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_get_enable_javascript');
    Pointer(webkit_settings_set_enable_javascript) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_set_enable_javascript');
    Pointer(webkit_settings_get_auto_load_images) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_get_auto_load_images');
    Pointer(webkit_settings_set_auto_load_images) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_set_auto_load_images');
    Pointer(webkit_settings_set_user_agent_with_application_details) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_set_user_agent_with_application_details');
    Pointer(webkit_settings_set_hardware_acceleration_policy) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_set_hardware_acceleration_policy');
    Pointer(webkit_settings_set_enable_developer_extras) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_set_enable_developer_extras');
    Pointer(webkit_settings_get_enable_developer_extras) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_settings_get_enable_developer_extras');

    Pointer(webkit_web_inspector_close) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_inspector_close');
    Pointer(webkit_web_inspector_show) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_inspector_show');

    Pointer(webkit_javascript_result_get_js_value) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_js_value');
    Pointer(webkit_javascript_result_get_global_context) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_global_context');
    Pointer(webkit_javascript_result_get_value) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_value');
    Pointer(webkit_javascript_result_unref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_unref');
    
    Pointer(webkit_notification_close) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_notification_close');

    Pointer(webkit_user_script_ref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_ref');
    Pointer(webkit_user_script_unref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_unref');
    Pointer(webkit_user_script_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_new');

    // ContextMenu
    Pointer(webkit_context_menu_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_new');
    Pointer(webkit_context_menu_prepend) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_prepend');
    Pointer(webkit_context_menu_append) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_append');
    Pointer(webkit_context_menu_insert) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_insert');
    Pointer(webkit_context_menu_get_n_items) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_get_n_items');
    Pointer(webkit_context_menu_get_item_at_position) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_get_item_at_position');
    Pointer(webkit_context_menu_remove) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_remove');
    Pointer(webkit_context_menu_remove_all) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_remove_all');

    // ContextMenuItem
    Pointer(webkit_context_menu_item_new_from_gaction) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_gaction');
    Pointer(webkit_context_menu_item_new_from_stock_action) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_stock_action');
    Pointer(webkit_context_menu_item_new_from_stock_action_with_label) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_stock_action_with_label');
    Pointer(webkit_context_menu_item_new_with_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_with_submenu');
    Pointer(webkit_context_menu_item_get_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_submenu');
    Pointer(webkit_context_menu_item_set_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_set_submenu');
    Pointer(webkit_context_menu_item_get_gaction) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_gaction');
    Pointer(webkit_context_menu_item_get_stock_action) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_stock_action');
    Pointer(webkit_context_menu_item_new_separator) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_separator');
    Pointer(webkit_context_menu_item_is_separator) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_is_separator');

    // PolicyDecision
    Pointer(webkit_policy_decision_use) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_use');
    Pointer(webkit_policy_decision_use_with_policies) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_use_with_policies');
    Pointer(webkit_policy_decision_ignore) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_ignore');
    Pointer(webkit_policy_decision_download) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_download');

    // WebsitePolicies
    Pointer(webkit_website_policies_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_website_policies_new');
    Pointer(webkit_website_policies_new_with_policies) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_website_policies_new_with_policies');
    Pointer(webkit_website_policies_get_autoplay_policy) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_website_policies_get_autoplay_policy');

    // NavigationPolicyDecision
    Pointer(webkit_navigation_policy_decision_get_navigation_action) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_navigation_policy_decision_get_navigation_action');

    // ResponsePolicyDecision
    Pointer(webkit_response_policy_decision_get_request) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_response_policy_decision_get_request');
    Pointer(webkit_response_policy_decision_get_response) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_response_policy_decision_get_response');

    // NavigationAction
    Pointer(webkit_navigation_action_get_request) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_navigation_action_get_request');
    Pointer(webkit_navigation_action_free) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_navigation_action_free');

    // URISchemeRequest
    Pointer(webkit_uri_scheme_request_get_scheme) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_scheme');
    Pointer(webkit_uri_scheme_request_get_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_uri');
    Pointer(webkit_uri_scheme_request_get_path) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_path');
    Pointer(webkit_uri_scheme_request_get_web_view) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_web_view');
    Pointer(webkit_uri_scheme_request_get_http_method) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_http_method');
    Pointer(webkit_uri_scheme_request_get_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_http_headers');
    Pointer(webkit_uri_scheme_request_get_http_body) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_get_http_body');
    Pointer(webkit_uri_scheme_request_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_finish');
    Pointer(webkit_uri_scheme_request_finish_with_response) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_finish_with_response');
    Pointer(webkit_uri_scheme_request_finish_error) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_request_finish_error');

    // URISchemeResponse
    Pointer(webkit_uri_scheme_response_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_new');
    Pointer(webkit_uri_scheme_response_set_status) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_status');
    Pointer(webkit_uri_scheme_response_set_content_type) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_content_type');
    Pointer(webkit_uri_scheme_response_set_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_http_headers');

    // URIRequest
    Pointer(webkit_uri_request_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_new');
    Pointer(webkit_uri_request_get_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_uri');
    Pointer(webkit_uri_request_set_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_set_uri');
    Pointer(webkit_uri_request_get_http_method) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_http_method');
    Pointer(webkit_uri_request_get_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_http_headers');

    // URIResponse
    Pointer(webkit_uri_response_get_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_uri');
    Pointer(webkit_uri_response_get_status_code) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_status_code');
    Pointer(webkit_uri_response_get_content_length) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_content_length');
    Pointer(webkit_uri_response_get_mime_type) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_mime_type');
    Pointer(webkit_uri_response_get_suggested_filename) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_suggested_filename');
    Pointer(webkit_uri_response_get_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_http_headers');

    // CookieManager
    Pointer(webkit_cookie_manager_set_persistent_storage) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_set_persistent_storage');
    Pointer(webkit_cookie_manager_set_accept_policy) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_set_accept_policy');
    Pointer(webkit_cookie_manager_get_accept_policy) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_get_accept_policy');
    Pointer(webkit_cookie_manager_get_accept_policy_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_get_accept_policy_finish');
    Pointer(webkit_cookie_manager_add_cookie) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_add_cookie');
    Pointer(webkit_cookie_manager_add_cookie_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_add_cookie_finish');
    Pointer(webkit_cookie_manager_get_cookies) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_get_cookies');
    Pointer(webkit_cookie_manager_get_cookies_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_get_cookies_finish');
    Pointer(webkit_cookie_manager_delete_cookie) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_delete_cookie');
    Pointer(webkit_cookie_manager_delete_cookie_finish) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_delete_cookie_finish');
    Pointer(webkit_cookie_manager_delete_cookies_for_domain) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_delete_cookies_for_domain');
    Pointer(webkit_cookie_manager_delete_all_cookies) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_cookie_manager_delete_all_cookies');

  {$IFDEF LCLGtk2}
    Pointer(webkit_web_view_execute_script) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_view_execute_script');
  {$ENDIF}
  end;

  {$IFDEF LCLGtk3}
  // LibJavascriptCore
  if LibJavascriptCoreGtkHandle <> 0 then
  begin
    // JSCValue
    Pointer(jsc_value_get_context) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_get_context');
    Pointer(jsc_value_new_undefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_undefined');
    Pointer(jsc_value_is_undefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_undefined');
    Pointer(jsc_value_new_null) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_null');
    Pointer(jsc_value_is_null) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_null');
    Pointer(jsc_value_new_number) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_number');
    Pointer(jsc_value_is_number) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_number');
    Pointer(jsc_value_to_double) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_double');
    Pointer(jsc_value_to_int32) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_int32');
    Pointer(jsc_value_new_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_boolean');
    Pointer(jsc_value_is_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_boolean');
    Pointer(jsc_value_to_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_boolean');
    Pointer(jsc_value_new_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_string');
    Pointer(jsc_value_is_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_string');
    Pointer(jsc_value_to_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_string');

    // JS Value Ref
    Pointer(JSValueGetType) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueGetType');
    Pointer(JSValueMakeUndefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeUndefined');
    Pointer(JSValueMakeNull) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeNull');
    Pointer(JSValueMakeBoolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeBoolean');
    Pointer(JSValueToBoolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToBoolean');
    Pointer(JSValueMakeNumber) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeNumber');
    Pointer(JSValueToNumber) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToNumber');
    Pointer(JSValueMakeString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeString');
    Pointer(JSValueToStringCopy) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToStringCopy');

    // JS String Ref
    Pointer(JSStringCreateWithCharacters) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringCreateWithCharacters');
    Pointer(JSStringCreateWithUTF8CString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringCreateWithUTF8CString');
    Pointer(JSStringRelease) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringRelease');
    Pointer(JSStringGetLength) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetLength');
    Pointer(JSStringGetMaximumUTF8CStringSize) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetMaximumUTF8CStringSize');
    Pointer(JSStringGetUTF8CString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetUTF8CString');

    // JSCContext
    Pointer(jsc_context_new) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_new');
    Pointer(jsc_context_get_exception) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_exception');
    Pointer(jsc_context_get_current) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_current');
    Pointer(jsc_context_clear_exception) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_clear_exception');
    Pointer(jsc_context_evaluate) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_evaluate');
    Pointer(jsc_context_set_value) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_set_value');
    Pointer(jsc_context_get_value) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_value');

    // JSC Exception
    Pointer(jsc_exception_get_message) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_exception_get_message');

    // soup 2_4
    Pointer(soup_message_headers_new) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_new');
    Pointer(soup_message_headers_iter_init) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_iter_init');
    Pointer(soup_message_headers_iter_next) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_iter_next');
    Pointer(soup_message_headers_foreach) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_foreach');
    Pointer(soup_message_headers_append) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_append');
    Pointer(soup_message_headers_clear) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_clear');
    Pointer(soup_message_headers_remove) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_remove');
    Pointer(soup_message_headers_replace) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_replace');
    Pointer(soup_message_headers_free) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_message_headers_free');

    Pointer(soup_cookie_new) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_new');
    Pointer(soup_cookie_free) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_free');
    Pointer(soup_cookie_get_domain) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_domain');
    Pointer(soup_cookie_get_expires) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_expires');
    Pointer(soup_cookie_get_http_only) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_http_only');
    Pointer(soup_cookie_get_name) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_name');
    Pointer(soup_cookie_get_path) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_path');
    Pointer(soup_cookie_get_secure) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_secure');
    Pointer(soup_cookie_get_value) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_get_value');
    Pointer(soup_cookie_set_domain) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_domain');
    Pointer(soup_cookie_set_expires) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_expires');
    Pointer(soup_cookie_set_http_only) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_http_only');
    Pointer(soup_cookie_set_max_age) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_max_age');
    Pointer(soup_cookie_set_name) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_name');
    Pointer(soup_cookie_set_path) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_path');
    Pointer(soup_cookie_set_secure) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_secure');
    Pointer(soup_cookie_set_value) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_cookie_set_value');

    Pointer(soup_date_new) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_new');
    Pointer(soup_date_get_year) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_year');
    Pointer(soup_date_get_month) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_month');
    Pointer(soup_date_get_day) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_day');
    Pointer(soup_date_get_hour) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_hour');
    Pointer(soup_date_get_minute) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_minute');
    Pointer(soup_date_get_second) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_second');
    Pointer(soup_date_get_utc) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_utc');
    Pointer(soup_date_get_offset) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_get_offset');
    Pointer(soup_date_to_string) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_to_string');
    Pointer(soup_date_to_time_t) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_to_time_t');
    Pointer(soup_date_free) := dynlibs.GetProcAddress(LibSoupHandle, 'soup_date_free');


  end;
  {$ENDIF}
end;

procedure FreeLibWebkitGtk;
begin
  if LibWebkitGtkHandle <> 0 then
  begin
    dynlibs.UnloadLibrary(LibWebkitGtkHandle);
    LibWebkitGtkHandle := 0;
  end;
  if LibJavascriptCoreGtkHandle <> 0 then
  begin
    dynlibs.UnloadLibrary(LibJavascriptCoreGtkHandle);
    LibJavascriptCoreGtkHandle := 0;
  end;
end;

initialization
  // 屏蔽浮点异常
  SetExceptionMask([exInvalidOp..exPrecision]);
  LoadLibWebkitGtk;

finalization
  FreeLibWebkitGtk;

end.

