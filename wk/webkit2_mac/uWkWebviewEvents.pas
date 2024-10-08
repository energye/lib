unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  CocoaAll, uWebkit, uWkInterface;

type
    // WKScriptMessageHandlerProtocol
    TWkProcessMessageEvent = procedure(sender: IWKUserContentController; name, data: string) of object;

    // WKNavigationDelegateProtocol
    TWkStartProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFinishNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;

implementation

end.
