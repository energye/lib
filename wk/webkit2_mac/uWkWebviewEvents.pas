unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uWebkit, uWkInterface, uWKNavigationAction, uWKWebpagePreferences, uWKNavigationResponse,
  uWKDownload, uWKURLSchemeTask, uWKWebViewConfiguration, uWKWindowFeatures, uWKFrameInfo, uNSURLRequest,
  uNSURLResponse, uWKUserContentController, uWKNavigation;

type
    // WKScriptMessageHandlerProtocol
    TWkProcessMessageEvent = procedure(sender: TWKUserContentController; name, data: string) of object;

    // WKNavigationDelegateProtocol
    TWKDecidePolicyForNavigationActionPreferences = procedure(webView: IWKWebView; navigationAction: TWKNavigationAction; var actionPolicy: WKNavigationActionPolicy;
      var preferences: TWKWebpagePreferences) of object;
    TWKDecidePolicyForNavigationResponse = procedure(webView: IWKWebView; navigationResponse: TWKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy) of object;
    TWkStartProvisionalNavigation = procedure(webView: IWKWebView; navigation: TWKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(webView: IWKWebView; navigation: TWKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(webView: IWKWebView; navigation: TWKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(webView: IWKWebView; navigation: TWKNavigation) of object;
    TWkFinishNavigation = procedure(webView: IWKWebView; navigation: TWKNavigation) of object;
    TWkFailNavigationWithError = procedure(webView: IWKWebView; navigation: TWKNavigation; error: string) of object;
    //TWkReceiveAuthenticationChallenge = procedure(webView: IWKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition; var credential: INSURLCredential) of object;
    TWkWebContentProcessDidTerminate = procedure(webView: IWKWebView) of object;
    //TWkAuthenticationChallengeShouldAllowDeprecatedTLS = function(webView: IWKWebView; challenge: NSURLAuthenticationChallenge): Boolean of object;
    TWkNavigationActionDidBecomeDownload = procedure(webView: IWKWebView; navigationAction: TWKNavigationAction; download: TWKDownload) of object;
    TWkNavigationResponseDidBecomeDownload = procedure(webView: IWKWebView; navigationResponse: TWKNavigationResponse; download: TWKDownload) of object;

    // WKURLSchemeHandlerProtocol
    TWKStartURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask) of object;
    TWKStopURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask) of object;

    // WKUIDelegateProtocol
    TWKCreateWebView = function(webView: IWKWebView; configuration_: TWKWebViewConfiguration; navigationAction: TWKNavigationAction; windowFeatures: TWKWindowFeatures): IWKWebView of object;
    TWKRunJavaScriptAlert = procedure(webView: IWKWebView; message_: string; frame: TWKFrameInfo) of object;
    TWKRunJavaScriptConfirmCompletion = function(webView: IWKWebView; message_: string; frame: TWKFrameInfo): Boolean of object;
    TWKRunJavaScriptTextInputCompletion = function(webView: IWKWebView; prompt: string; defaultText: string; frame: TWKFrameInfo): string of object;
    TWKWebViewDidClose = procedure(webView: IWKWebView) of object;

    // WKDownload
    TWKDownloadCancelCompletionHandler = procedure(webView: IWKWebView; download: TWKDownload; aData: Pointer; aLength: Integer {NSData}) of object;
    TWKDownloadDecideDestinationUsingResponseSuggestedFilename = procedure(webView: IWKWebView; download: TWKDownload; response: TNSURLResponse; suggestedFilename: string) of object;
    TWKDownloadWillPerformHTTPRedirectionNewRequest = procedure(webView: IWKWebView; download: TWKDownload; response: TNSHTTPURLResponse; request: TNSURLRequest) of object;
    //TWKDownloadReceiveAuthenticationChallenge = procedure(webView: IWKWebView; download: IWKDownload; challenge: NSURLAuthenticationChallenge) of object;
    TWKDownloadFinish = procedure(webView: IWKWebView; download: TWKDownload) of object;
    TWKDownloadFailWithError = procedure(webView: IWKWebView; download: TWKDownload; error: string; aData: Pointer; aLength: Integer {NSData}) of object;
implementation

end.
