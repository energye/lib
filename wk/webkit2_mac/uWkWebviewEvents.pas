unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uWebkit, uWkInterface;

type

    TWkProcessMessageEvent = procedure(Sender: TObject; name, data: string) of object;

    TWkStartProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFinishNavigation = procedure(webView: IWKWebView; navigation: WKNavigation) of object;
    TWkFailNavigationWithError = procedure(webView: IWKWebView; navigation: WKNavigation; error: string) of object;

implementation

end.
