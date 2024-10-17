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
    TWKDecidePolicyForNavigationActionPreferences = procedure(webView: IWKWebView; navigationAction: IWKNavigationAction; var actionPolicy: WKNavigationActionPolicy;
      var preferences: IWKWebpagePreferences) of object;
    TWKDecidePolicyForNavigationResponse = procedure(webView: IWKWebView; navigationResponse: IWKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy) of object;
    TWkStartProvisionalNavigation = procedure(webView: IWKWebView; navigation: IWKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(webView: IWKWebView; navigation: IWKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(webView: IWKWebView; navigation: IWKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(webView: IWKWebView; navigation: IWKNavigation) of object;
    TWkFinishNavigation = procedure(webView: IWKWebView; navigation: IWKNavigation) of object;
    TWkFailNavigationWithError = procedure(webView: IWKWebView; navigation: IWKNavigation; error: string) of object;
    //TWkReceiveAuthenticationChallenge = procedure(webView: IWKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition; var credential: INSURLCredential) of object;
    TWkWebContentProcessDidTerminate = procedure(webView: IWKWebView) of object;
    //TWkAuthenticationChallengeShouldAllowDeprecatedTLS = function(webView: IWKWebView; challenge: NSURLAuthenticationChallenge): Boolean of object;
    TWkNavigationActionDidBecomeDownload = procedure(webView: IWKWebView; navigationAction: IWKNavigationAction; download: IWKDownload) of object;
    TWkNavigationResponseDidBecomeDownload = procedure(webView: IWKWebView; navigationResponse: IWKNavigationResponse; download: IWKDownload) of object;

    // WKURLSchemeHandlerProtocol
    TWKStartURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask) of object;
    TWKStopURLSchemeTask = procedure(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask) of object;

    // WKUIDelegateProtocol
    TWKCreateWebView = function(webView: IWKWebView; configuration_: IWKWebViewConfiguration; navigationAction: IWKNavigationAction; windowFeatures: IWKWindowFeatures): IWKWebView of object;
    TWKRunJavaScriptAlert = procedure(webView: IWKWebView; message_: string; frame: IWKFrameInfo) of object;
    TWKRunJavaScriptConfirmCompletion = function(webView: IWKWebView; message_: string; frame: IWKFrameInfo): Boolean of object;
    TWKRunJavaScriptTextInputCompletion = function(webView: IWKWebView; prompt: string; defaultText: string; frame: IWKFrameInfo): string of object;
    TWKWebViewDidClose = procedure(webView: IWKWebView) of object;

    // WKDownload
    TWKDownloadCancelCompletionHandler = procedure(webView: IWKWebView; aData: Pointer; aLength: Integer {NSData}) of object;
    TWKDownloadDecideDestinationUsingResponseSuggestedFilename = procedure(download: IWKDownload; response: INSURLResponse; suggestedFilename: string) of object;
    TWKDownloadWillPerformHTTPRedirectionNewRequest = procedure(download: IWKDownload; response: INSHTTPURLResponse; request: INSURLRequest) of object;
    //TWKDownloadReceiveAuthenticationChallenge = procedure(download: IWKDownload; challenge: NSURLAuthenticationChallenge) of object;
    TWKDownloadFinish = procedure(download: IWKDownload) of object;
    TWKDownloadFailWithError = procedure(download: IWKDownload; error: string; aData: Pointer; aLength: Integer {NSData}) of object;
implementation

end.
