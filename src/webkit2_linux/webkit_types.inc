type
    PSoupMessageHeaders = gpointer; // 2.4 3.0
    PSoupMessageHeadersIter = gpointer; // 2.4 3.0
    PSoupCookie = gpointer; // 2.4 3.0
    PSoupDate = gpointer; // 2.4

    PWkDateTime = gpointer; // 2.4: PSoupDate, 3.0: PGDateTime

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
