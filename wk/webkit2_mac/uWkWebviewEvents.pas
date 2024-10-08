unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  CocoaAll, uWebkit, uWkInterface;

type

    TWkProcessMessageEvent = procedure(Sender: TObject; name, data: string) of object;

    TWkStartProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFinishNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;



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

  IWkSchemeRequestDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990A-729497CD6537}']
  end;

implementation

end.
