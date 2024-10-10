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

    //WKURLSchemeHandlerProtocol
    TWKStartURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask) of object;
    TWKStopURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask) of object;

    // WKUIDelegateProtocol
    TWKRunJavaScriptAlert = procedure(webView: IWKWebView; message_: string; frame: WKFrameInfo) of object;
    TWKRunJavaScriptConfirmCompletion = function(webView: IWKWebView; message_: string; frame: WKFrameInfo): Boolean of object;
    TWKRunJavaScriptTextInputCompletion = function(webView: IWKWebView; prompt: string; defaultText: string; frame: WKFrameInfo): string of object;

implementation

end.
