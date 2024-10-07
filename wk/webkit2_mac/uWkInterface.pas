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

  IWkBase = interface
    ['{CA5E93CB-EC40-B968-990B-729497C8927A}']
  end;

  IWkWebviewDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990B-729497C8B869}']
  end;

  IWkSchemeRequestDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990A-729497CD6537}']
  end;

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
    procedure SetPreferences(newValue: IWKPreferences);
    function Preferences: IWKPreferences;
    procedure SetUserContentController(newValue: IWKUserContentController);
    function UserContentController: IWKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
  end;

  IWKUserScript = interface
    ['{CA5E93CB-6734-B968-565A-729497C86537}']
    function Data(): WKUserScript;
    function Source: string;
    function InjectionTime: int64;
    function IsForMainFrameOnly: LongBool;
    function InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
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
    procedure CreateBrowser(AFrame: TRect; AConfig: IWKWebViewConfiguration);
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
    function Configuration: IWKWebViewConfiguration;
    function LoadRequest (request: INSURLRequest): WKNavigation;
    procedure SetNavigationDelegate(newValue: IWKNavigationDelegate);
    procedure SetUIDelegate(newValue: IWKUIDelegate);
    function InitWithFrameConfiguration (frame: TRect; configuration_: IWKWebViewConfiguration): IWkWebview;
    function Title: string;
    function URL: INSURL;
    function IsLoading: LongBool;
    function EstimatedProgress: double;
    function HasOnlySecureContent: LongBool;
    function CanGoBack: LongBool;
    function CanGoForward: LongBool;
    function GoBack: WKNavigation;
    function GoForward: WKNavigation;
    function Reload: WKNavigation;
    function ReloadFromOrigin: WKNavigation;
    procedure StopLoading;
    procedure EvaluateJavaScriptCompletionHandler (javaScriptString: string; completionHandler: OpaqueCBlock);
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
    function Data(): NSURLRequest;function URL: INSURL;
    function CachePolicy: NSURLRequestCachePolicy;
    function TimeoutInterval: double;
    function MainDocumentURL: INSURL;
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    function AllowsCellularAccess: LongBool;
  end;

  IWKNavigationDelegate = interface
    ['{CA5E93CB-6A34-B968-565E-729497753890}']
    function Data(): WKNavigationDelegateProtocol;
  end;

  IReceiveScriptMessageEvent = interface
    ['{CA5E93CB-6A34-B968-565E-729497774925}']
    procedure doReceiveScriptMessage(userContentController: IWKUserContentController; message_: WKScriptMessage);
  end;

  IWKNavigationDelegateEvent = interface
    ['{CA5E93CB-6A34-B968-565E-729895474921}']
    procedure doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
  end;

implementation

end.
