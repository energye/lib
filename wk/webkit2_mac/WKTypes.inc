const
  WKErrorUnknown = 1;
  WKErrorWebContentProcessTerminated = 2;
  WKErrorWebViewInvalidated = 3;
  WKErrorJavaScriptExceptionOccurred = 4;

const
  WKNavigationTypeLinkActivated = 0;
  WKNavigationTypeFormSubmitted = 1;
  WKNavigationTypeBackForward = 2;
  WKNavigationTypeReload = 3;
  WKNavigationTypeFormResubmitted = 4;
  WKNavigationTypeOther = -1;

const
  WKNavigationActionPolicyCancel = 0;
  WKNavigationActionPolicyAllow = 1;

const
  WKNavigationResponsePolicyCancel = 0;
  WKNavigationResponsePolicyAllow = 1;

const
  WKUserScriptInjectionTimeAtDocumentStart = 0;
  WKUserScriptInjectionTimeAtDocumentEnd = 1;

const
  WKSelectionGranularityDynamic = 0;
  WKSelectionGranularityCharacter = 1;

type
  WKErrorCode = NSInteger;
  WKErrorCodePtr = ^WKErrorCode;

type
  WKNavigationType = NSInteger;
  WKNavigationTypePtr = ^WKNavigationType;

type
  WKNavigationActionPolicy = NSInteger;
  WKNavigationActionPolicyPtr = ^WKNavigationActionPolicy;

type
  WKNavigationResponsePolicy = NSInteger;
  WKNavigationResponsePolicyPtr = ^WKNavigationResponsePolicy;

type
  WKUserScriptInjectionTime = NSInteger;
  WKUserScriptInjectionTimePtr = ^WKUserScriptInjectionTime;

type
  WKSelectionGranularity = NSInteger;
  WKSelectionGranularityPtr = ^WKSelectionGranularity;

type
  WKBackForwardListItemPtr = ^WKBackForwardListItem;
  WKBackForwardListPtr = ^WKBackForwardList;
  WKFrameInfoPtr = ^WKFrameInfo;
  WKNavigationPtr = ^WKNavigation;
  WKNavigationActionPtr = ^WKNavigationAction;
  WKNavigationDelegateProtocolPtr = ^WKNavigationDelegateProtocol;
  WKNavigationResponsePtr = ^WKNavigationResponse;
  WKPreferencesPtr = ^WKPreferences;
  WKProcessPoolPtr = ^WKProcessPool;
  WKScriptMessagePtr = ^WKScriptMessage;
  WKScriptMessageHandlerProtocolPtr = ^WKScriptMessageHandlerProtocol;
  WKUIDelegateProtocolPtr = ^WKUIDelegateProtocol;
  WKUserContentControllerPtr = ^WKUserContentController;
  WKWebViewPtr = ^WKWebView;
  WKWebViewConfigurationPtr = ^WKWebViewConfiguration;
  WKWindowFeaturesPtr = ^WKWindowFeatures;


type
  // WebKit.framework WKBackForwardList.h
  WKBackForwardList = objcclass external (NSObject)
  public
    function currentItem: WKBackForwardListItem; message 'currentItem';
    function backItem: WKBackForwardListItem; message 'backItem';
    function forwardItem: WKBackForwardListItem; message 'forwardItem';
    function itemAtIndex (index: NSInteger): WKBackForwardListItem; message 'itemAtIndex:';
    function backList: NSArray; message 'backList';
    function forwardList: NSArray; message 'forwardList';
  end;

  // WebKit.framework WKBackForwardListItem.h
  WKBackForwardListItem = objcclass external (NSObject)
  public
    function URL: NSURL; message 'URL';
    function title: NSString; message 'title';
    function initialURL: NSURL; message 'initialURL';
  end;

  // WebKit.framework WKFrameInfo.h
  WKFrameInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isMainFrame: ObjCBOOL; message 'isMainFrame';
    function request: NSURLRequest; message 'request';
    // Adopted protocols
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

  // WebKit.framework WKNavigation.h
  WKNavigation = objcclass external (NSObject)
  end;

  // WebKit.framework WKNavigationAction.h
  WKNavigationAction = objcclass external (NSObject)
  public
    function sourceFrame: WKFrameInfo; message 'sourceFrame';
    function targetFrame: WKFrameInfo; message 'targetFrame';
    function navigationType: WKNavigationType; message 'navigationType';
    function request: NSURLRequest; message 'request';
    function modifierFlags: NSEventModifierFlags; message 'modifierFlags';
    function buttonNumber: NSInteger; message 'buttonNumber';
  end;

  // WebKit.framework WKNavigationDelegate.h
  WKNavigationDelegateProtocol = objcclass(NSObject)
  public
  //WKNavigationDelegateProtocol = objcprotocol external name 'WKNavigationDelegate' (NSObjectProtocol)
  //optional
    //procedure webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; decisionHandler: OpaqueCBlock); message 'webView:decidePolicyForNavigationAction:decisionHandler:';
    //procedure webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse; decisionHandler: OpaqueCBlock); message 'webView:decidePolicyForNavigationResponse:decisionHandler:';
    procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didStartProvisionalNavigation:';
    procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didReceiveServerRedirectForProvisionalNavigation:';
    procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailProvisionalNavigation:withError:';
    procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didCommitNavigation:';
    procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didFinishNavigation:';
    procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailNavigation:withError:';
    //procedure webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge; completionHandler: OpaqueCBlock); message 'webView:didReceiveAuthenticationChallenge:completionHandler:';
  end;

  // WebKit.framework WKNavigationResponse.h
  WKNavigationResponse = objcclass external (NSObject)
  public
    function isForMainFrame: ObjCBOOL; message 'isForMainFrame';
    function response: NSURLResponse; message 'response';
    function canShowMIMEType: ObjCBOOL; message 'canShowMIMEType';
  end;

  // WebKit.framework WKPreferences.h
  WKPreferences = objcclass external (NSObject)
  public
    procedure setMinimumFontSize(newValue: CGFloat); message 'setMinimumFontSize:';
    function minimumFontSize: CGFloat; message 'minimumFontSize';
    procedure setJavaScriptEnabled(newValue: ObjCBOOL); message 'setJavaScriptEnabled:';
    function javaScriptEnabled: ObjCBOOL; message 'javaScriptEnabled';
    procedure setJavaScriptCanOpenWindowsAutomatically(newValue: ObjCBOOL); message 'setJavaScriptCanOpenWindowsAutomatically:';
    function javaScriptCanOpenWindowsAutomatically: ObjCBOOL; message 'javaScriptCanOpenWindowsAutomatically';
    procedure setJavaEnabled(newValue: ObjCBOOL); message 'setJavaEnabled:';
    function javaEnabled: ObjCBOOL; message 'javaEnabled';
    procedure setPlugInsEnabled(newValue: ObjCBOOL); message 'setPlugInsEnabled:';
    function plugInsEnabled: ObjCBOOL; message 'plugInsEnabled';
  end;

  // WebKit.framework WKProcessPool.h
  WKProcessPool = objcclass external (NSObject)
  end;

  // WebKit.framework WKScriptMessage.h
  WKScriptMessage = objcclass external (NSObject)
  public
    function body: id; message 'body';
    function webView: WKWebView; message 'webView';
    function frameInfo: WKFrameInfo; message 'frameInfo';
    function name: NSString; message 'name';
  end;

  // WebKit.framework WKScriptMessageHandler.h
  WKScriptMessageHandlerProtocol = objcclass(NSObject)
  public
  //WKScriptMessageHandlerProtocol = objcprotocol external name 'WKScriptMessageHandler' (NSObjectProtocol)
  //optional
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;

  // WebKit.framework WKUIDelegate.h
  //WKUIDelegateProtocol = objcclass(NSObject)
  //public
  WKUIDelegateProtocol = objcprotocol external name 'WKUIDelegate' (NSObjectProtocol)
  optional
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView; message 'webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:';
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:';
  end;

  // WebKit.framework WKUserContentController.h
  WKUserContentController = objcclass external (NSObject)
  public
    function userScripts: NSArray; message 'userScripts';
    procedure addUserScript (userScript: WKUserScript); message 'addUserScript:';
    procedure removeAllUserScripts; message 'removeAllUserScripts';
    procedure addScriptMessageHandler_name (scriptMessageHandler: WKScriptMessageHandlerProtocol; name: NSString); message 'addScriptMessageHandler:name:';
    procedure removeScriptMessageHandlerForName (name: NSString); message 'removeScriptMessageHandlerForName:';
  end;

  // WebKit.framework WKUserScript.h
  WKUserScript = objcclass external (NSObject, NSCopyingProtocol)
  public
    function source: NSString; message 'source';
    function injectionTime: WKUserScriptInjectionTime; message 'injectionTime';
    function isForMainFrameOnly: ObjCBOOL; message 'isForMainFrameOnly';
    function initWithSource_injectionTime_forMainFrameOnly (source_: NSString; injectionTime_: WKUserScriptInjectionTime; forMainFrameOnly: ObjCBOOL): instancetype; message 'initWithSource:injectionTime:forMainFrameOnly:';
    // Adopted protocols
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

  // WebKit.framework WKWebView.h
  WKWebView = objcclass external (NSView)
  public
    function configuration: WKWebViewConfiguration; message 'configuration';
    procedure setNavigationDelegate(newValue: WKNavigationDelegateProtocol); message 'setNavigationDelegate:';
    function navigationDelegate: WKNavigationDelegateProtocol; message 'navigationDelegate';
    procedure setUIDelegate(newValue: WKUIDelegateProtocol); message 'setUIDelegate:';
    function UIDelegate: WKUIDelegateProtocol; message 'UIDelegate';
    function backForwardList: WKBackForwardList; message 'backForwardList';
    function initWithFrame_configuration (frame: CGRect; configuration_: WKWebViewConfiguration): instancetype; message 'initWithFrame:configuration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:';
    function loadRequest (request: NSURLRequest): WKNavigation; message 'loadRequest:';
    function loadHTMLString_baseURL (string_: NSString; baseURL: NSURL): WKNavigation; message 'loadHTMLString:baseURL:';
    function goToBackForwardListItem (item: WKBackForwardListItem): WKNavigation; message 'goToBackForwardListItem:';
    function title: NSString; message 'title';
    function URL: NSURL; message 'URL';
    function isLoading: ObjCBOOL; message 'isLoading';
    function estimatedProgress: double; message 'estimatedProgress';
    function hasOnlySecureContent: ObjCBOOL; message 'hasOnlySecureContent';
    function canGoBack: ObjCBOOL; message 'canGoBack';
    function canGoForward: ObjCBOOL; message 'canGoForward';
    function goBack: WKNavigation; message 'goBack';
    function goForward: WKNavigation; message 'goForward';
    function reload: WKNavigation; message 'reload';
    function reloadFromOrigin: WKNavigation; message 'reloadFromOrigin';
    procedure stopLoading; message 'stopLoading';
    procedure evaluateJavaScript_completionHandler (javaScriptString: NSString; completionHandler: OpaqueCBlock); message 'evaluateJavaScript:completionHandler:';
    procedure setAllowsBackForwardNavigationGestures(newValue: ObjCBOOL); message 'setAllowsBackForwardNavigationGestures:';
    function allowsBackForwardNavigationGestures: ObjCBOOL; message 'allowsBackForwardNavigationGestures';
    procedure setAllowsMagnification(newValue: ObjCBOOL); message 'setAllowsMagnification:';
    function allowsMagnification: ObjCBOOL; message 'allowsMagnification';
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
    procedure setMagnification_centeredAtPoint (magnification_: CGFloat; point: CGPoint); message 'setMagnification:centeredAtPoint:';
  end;

  WKIBActions = objccategory external (WKWebView)
    procedure goBack_ (sender: id); message 'goBack:';
    procedure goForward_ (sender: id); message 'goForward:';
    procedure reload_ (sender: id); message 'reload:';
    procedure reloadFromOrigin_ (sender: id); message 'reloadFromOrigin:';
    procedure stopLoading_ (sender: id); message 'stopLoading:';
  end;

  // WebKit.framework WKWebViewConfiguration.h
  WKWebViewConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setProcessPool(newValue: WKProcessPool); message 'setProcessPool:';
    function processPool: WKProcessPool; message 'processPool';
    procedure setPreferences(newValue: WKPreferences); message 'setPreferences:';
    function preferences: WKPreferences; message 'preferences';
    procedure setUserContentController(newValue: WKUserContentController); message 'setUserContentController:';
    function userContentController: WKUserContentController; message 'userContentController';
    procedure setSuppressesIncrementalRendering(newValue: ObjCBOOL); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: ObjCBOOL; message 'suppressesIncrementalRendering';
    // Adopted protocols
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

  // WebKit.framework WKWindowFeatures.h
  WKWindowFeatures = objcclass external (NSObject)
  public
    function menuBarVisibility: NSNumber; message 'menuBarVisibility';
    function statusBarVisibility: NSNumber; message 'statusBarVisibility';
    function toolbarsVisibility: NSNumber; message 'toolbarsVisibility';
    function allowsResizing: NSNumber; message 'allowsResizing';
    function x: NSNumber; message 'x';
    function y: NSNumber; message 'y';
    function width: NSNumber; message 'width';
    function height: NSNumber; message 'height';
  end;


// 所有问题：回调函数-参数有 OpaqueCBlock 类型报错，没搞明白咋回事！！！
