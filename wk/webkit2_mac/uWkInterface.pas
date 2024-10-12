unit uWkInterface;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, CocoaAll, uWebKit;

type
  IWKUserScript = interface;
  IWKScriptMessageHandler = interface;
  INSURLRequest = interface;
  IWKNavigationDelegate = interface;
  INSURL = interface;
  IWKURLSchemeHandler = interface;
  IWKUserContentController = interface;
  IWKURLSchemeTask = interface;
  IWKNavigation = interface;


// class events interface
type
  IReceiveScriptMessageEvent = interface
    ['{CA5E93CB-6A34-B968-565E-729497774925}']
    procedure doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  IWKNavigationDelegateEvent = interface
    ['{CA5E93CB-6A34-B968-565E-729895474921}']
    procedure doDecidePolicyForNavigationActionPreferences(webView: WKWebView; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy;
      var preferences: WKWebpagePreferences);
    procedure doDecidePolicyForNavigationResponse(webView: WKWebView; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition;
      var credential: NSURLCredential);
    procedure doWebContentProcessDidTerminate (webView: WKWebView);
    function doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
    procedure doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    procedure doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
  end;

  IWKURLSchemeHandlerEvent = interface
    ['{CA5E93CB-EC40-B968-334A-729497CD7678}']
    procedure doStartURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    procedure doStopURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
  end;

  IWKUIDelegateEvent = interface
    ['{CA5E93CB-EC78-B968-334A-729495930A21}']
    //procedure webView_decidePolicyForNavigationAction_preferences_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction;
    //  preferences: WKWebpagePreferences);
    function doCreateWebView(webView: WKWebView; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure doRunJavaScriptAlert (webView: WKWebView; message_: NSString; frame: WKFrameInfo);
    function doRunJavaScriptConfirmCompletion (webView: WKWebView; message_: NSString; frame: WKFrameInfo): Boolean;
    function doRunJavaScriptTextInputCompletion (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo): string;
    procedure doWebViewDidClose(webView: WKWebView);
  end;

// class interface
type

  IWKPreferences = interface
    ['{CA5E93CB-EC40-B968-456A-729497C8927D}']
    function Data(): WKPreferences;
    procedure SetMinimumFontSize(newValue: double);
    function MinimumFontSize: double;
    procedure SetJavaScriptEnabled(newValue: LongBool);
    function JavaScriptEnabled: LongBool;
    procedure SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
    function JavaScriptCanOpenWindowsAutomatically: LongBool;
    procedure SetJavaEnabled(newValue: LongBool);
    function JavaEnabled: LongBool;
    procedure SetPlugInsEnabled(newValue: LongBool);
    function PlugInsEnabled: LongBool;
    procedure SetTabFocusesLinks(newValue: LongBool);
    procedure SetFraudulentWebsiteWarningEnabled(newValue: LongBool);
    procedure SetTextInteractionEnabled(newValue: LongBool);// 11.3
    procedure SetElementFullscreenEnabled(newValue: LongBool);// 12.3
    procedure SetValueForKey(value: LongBool; key: string);
  end;

  IWKUserContentController = interface
    ['{CA5E93CB-EC40-B968-456A-729497C89865}']
    function Data(): WKUserContentController;
    function UserScripts: TStrings;
    procedure AddUserScript (userScript: IWKUserScript);
    procedure RemoveAllUserScripts;
    procedure AddScriptMessageHandlerName (scriptMessageHandler: IWKScriptMessageHandler; name: string);
    procedure RemoveScriptMessageHandlerForName (name: string);
  end;

  IWKWebViewConfiguration = interface
    ['{CA5E93CB-6734-B968-565A-729497C81234}']
    function Data(): WKWebViewConfiguration;
    procedure SetPreferences(preferences: IWKPreferences);
    function Preferences: IWKPreferences;
    procedure SetUserContentController(userContentController: IWKUserContentController);
    function UserContentController: IWKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
    function ApplicationNameForUserAgent: string;
    procedure SetApplicationNameForUserAgent(newValue: string);
    procedure SetURLSchemeHandlerForURLScheme(urlSchemeHandler: IWKURLSchemeHandler; urlScheme: string);
  end;

  IWKUserScript = interface
    ['{CA5E93CB-6734-B968-565A-729497C86537}']
    function Data(): WKUserScript;
    function Source: string;
    function InjectionTime: int64;
    function IsForMainFrameOnly: LongBool;
  end;

  IWKScriptMessageHandler = interface
    ['{CA5E93CB-6734-B968-565A-729497C74563}']
    function Data(): WKScriptMessageHandlerProtocol;
  end;

  IWKUIDelegate = interface
    ['{CA5E93CB-6734-B968-565A-729497B48123}']
    function Data(): WKUIDelegateProtocol;
  end;

  IWkWebview = interface
    ['{CA5E93CB-6734-B968-565A-729497B49467}']
    function Data(): WKWebView;
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
    function Configuration: IWKWebViewConfiguration;
    function LoadRequest (request: INSURLRequest): IWKNavigation;
    procedure SetNavigationDelegate(navigationDelegate: IWKNavigationDelegate);
    procedure SetUIDelegate(uiDelegate: IWKUIDelegate);
    procedure InitWithFrameConfiguration (AFrame: TRect; AConfiguration: IWKWebViewConfiguration);
    function Title: string;
    function URL: INSURL;
    function IsLoading: LongBool;
    function EstimatedProgress: double;
    function HasOnlySecureContent: LongBool;
    function CanGoBack: LongBool;
    function CanGoForward: LongBool;
    function GoBack: IWKNavigation;
    function GoForward: IWKNavigation;
    function Reload: IWKNavigation;
    function ReloadFromOrigin: IWKNavigation;
    procedure StopLoading;
    procedure EvaluateJavaScript(javaScriptString: string);
    procedure SetAllowsBackForwardNavigationGestures(newValue: LongBool);
    function AllowsBackForwardNavigationGestures: LongBool;
    procedure SetAllowsMagnification(newValue: LongBool);
    function AllowsMagnification: LongBool;
    procedure SetMagnification(newValue: double);
    function Magnification: double;
    procedure SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
  end;

  INSURL = interface
    ['{CA5E93CB-6734-B968-565A-729497B49467}']
    function Data(): NSURL;
    function AbsoluteString: string;
    function RelativeString: string;
    function BaseURL: INSURL;
    function AbsoluteURL: INSURL;
    function Scheme: string;
    function Host: string;
    function Port: Integer;
    function User: string;
    function Password: string;
    function Path: string;
    function Fragment: string;
    function ParameterString: string;
    function Query: string;
  end;

  INSURLRequest = interface
    ['{CA5E93CB-6734-B968-565E-729497B48365}']
    function Data(): NSURLRequest;
    function URL: INSURL;
    function CachePolicy: NSURLRequestCachePolicy;
    function TimeoutInterval: double;
    function MainDocumentURL: INSURL;
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    function AllowsCellularAccess: LongBool;
    function HTTPMethod: string;
    function AllHTTPHeaderFields: string;
    function ValueForHTTPHeaderField (aField: string): string;
  end;

  INSMutableURLRequest = interface(INSURLRequest)
    ['{CA5E93CB-6A3B-B968-565E-729497B44369}']
    function MutableData(): NSMutableURLRequest;
    procedure SetHTTPMethod(aMethod: string);
    procedure SetAllHTTPHeaderFields(headerFieldsJSONString: string);
    procedure SetValueForHTTPHeaderField (aValue: string; aField: string);
    procedure AddValueForHTTPHeaderField (aValue: string; aField: string);
  end;

  INSURLResponse = interface
    ['{CA5E93CB-6734-B968-565A-729497B47788}']
    function Data(): NSURLResponse;
    function InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: INSURL; MIMEType: string; length: Integer; name: String): INSURLResponse;
    function URL: INSURL;
    function MIMEType: string;
    function ExpectedContentLength: int64;
    function TextEncodingName: string;
    function SuggestedFilename: string;
  end;

  INSHTTPURLResponse = interface(INSURLResponse)
    ['{CA5E93CB-6734-B968-565A-729497B47788}']
    // headerFields json 格式, {key: []value, ...}
    function InitWithURLStatusCodeHTTPVersionHeaderFields (url_: INSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): INSURLResponse;
    function StatusCode: Integer;
    function AllHeaderFields: string;
  end;

  IWKNavigationDelegate = interface
    ['{CA5E93CB-6A34-B968-565E-729497753890}']
    function Data(): WKNavigationDelegateProtocol;
  end;

  IWKURLSchemeHandler = interface
    ['{CA5E93CB-6A34-B968-565E-7294D7753556}']
    function Data(): WKURLSchemeHandlerProtocol;
  end;

  IWKURLSchemeTask = interface
    ['{CA5E93CB-6A34-B968-565E-7294D7745672}']
    function Data(): WKURLSchemeTask;
    function Request(): INSURLRequest;
    procedure ReceiveResponse (response: INSURLResponse);
    procedure ReceiveData(ADataBytes: Pointer; ALength: Integer {NSData});
    procedure Finish ();
    procedure FailWithError (error: string {NSError});
  end;

  IWKFrameInfo = interface
    ['{CA5E93CB-6A34-B778-362E-7294D7715725}']
    function Data(): WKFrameInfo;
    function IsMainFrame: Boolean;
    function Request: INSURLRequest;
  end;

  IWKNavigationAction = interface
    ['{CA5E93CB-6A34-B778-362E-7294D7744489}']
    function Data(): WKNavigationAction;
    function SourceFrame: IWKFrameInfo;
    function TargetFrame: IWKFrameInfo;
    function NavigationType: WKNavigationType;
    function Request: INSURLRequest;
    function ModifierFlags: NSEventModifierFlags;
    function ButtonNumber: Integer;
  end;

  IWKWindowFeatures = interface
    ['{CA5E93CB-6A34-B778-362E-7294D77A2B31}']
    function Data(): WKWindowFeatures;
    function MenuBarVisibility: Boolean;
    function StatusBarVisibility: Boolean;
    function ToolbarsVisibility: Boolean;
    function AllowsResizing: Boolean;
    function X: Integer;
    function Y: Integer;
    function Width: Integer;
    function Height: Integer;
  end;

  IWKNavigation = interface
    ['{CA5E93CB-6A34-B778-362E-7294D7779468}']
    function Data(): WKNavigation;
    function EffectiveContentMode: WKContentMode;
  end;

  IWKWebpagePreferences = interface
    ['{CA5E93CB-6A34-BAB8-362E-CD94D7774466}']
    function Data(): WKWebpagePreferences;
    procedure SetPreferredContentMode(aValue: WKContentMode);
    function PreferredContentMode: WKContentMode;
    procedure SetAllowsContentJavaScript(aValue: LongBool);
    function AllowsContentJavaScript: LongBool;
  end;

  IWKNavigationResponse = interface
    ['{CA5E93CB-6A34-BAB8-362E-CD94D5839210}']
    function Data(): WKNavigationResponse;
  end;

implementation

end.
