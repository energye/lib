unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  CocoaAll, uWebkit;

type
    // WKScriptMessageHandlerProtocol
    TWkProcessMessageEvent = procedure(sender: TObject; userContentController: WKUserContentController; name, data: string) of object;

    // WKNavigationDelegateProtocol
    TWKDecidePolicyForNavigationActionPreferences = procedure(sender: TObject; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences) of object;
    TWKDecidePolicyForNavigationResponse = procedure(sender: TObject; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy) of object;
    TWkStartProvisionalNavigation = procedure(sender: TObject; navigation: WKNavigation) of object;
    TWkReceiveServerRedirectForProvisionalNavigation = procedure(sender: TObject; navigation: WKNavigation) of object;
    TWkFailProvisionalNavigationWithError = procedure(sender: TObject; navigation: WKNavigation; error: string) of object;
    TWkCommitNavigation = procedure(sender: TObject; navigation: WKNavigation) of object;
    TWkFinishNavigation = procedure(sender: TObject; navigation: WKNavigation) of object;
    TWkFailNavigationWithError = procedure(sender: TObject; navigation: WKNavigation; error: string) of object;
    //TWkReceiveAuthenticationChallenge = procedure(sender: TObject; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition; var credential: INSURLCredential) of object;
    TWkWebContentProcessDidTerminate = procedure(sender: TObject) of object;
    //TWkAuthenticationChallengeShouldAllowDeprecatedTLS = function(sender: TObject; challenge: NSURLAuthenticationChallenge): Boolean of object;
    TWkNavigationActionDidBecomeDownload = procedure(sender: TObject; navigationAction: WKNavigationAction; download: WKDownload) of object;
    TWkNavigationResponseDidBecomeDownload = procedure(sender: TObject; navigationResponse: WKNavigationResponse; download: WKDownload) of object;

    // WKURLSchemeHandlerProtocol
    TWKStartURLSchemeTask = procedure(sender: TObject; urlSchemeTask: WKURLSchemeTask) of object;
    TWKStopURLSchemeTask = procedure(sender: TObject; urlSchemeTask: WKURLSchemeTask) of object;

    // WKUIDelegateProtocol
    TWKCreateWebView = function(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView of object;
    TWKRunJavaScriptAlert = procedure(sender: TObject; message_: string; frame: WKFrameInfo) of object;
    TWKRunJavaScriptConfirmCompletion = function(sender: TObject; message_: string; frame: WKFrameInfo): Boolean of object;
    TWKRunJavaScriptTextInputCompletion = function(sender: TObject; prompt: string; defaultText: string; frame: WKFrameInfo): string of object;
    TWKWebViewDidClose = procedure(sender: TObject) of object;

    // WKDownload
    TWKDownloadCancelCompletionHandler = procedure(sender: TObject; download: WKDownload; aData: Pointer; aLength: Integer {NSData}) of object;
    TWKDownloadDecideDestinationUsingResponseSuggestedFilename = procedure(sender: TObject; download: WKDownload; response: NSURLResponse; suggestedFilename: string) of object;
    TWKDownloadWillPerformHTTPRedirectionNewRequest = procedure(sender: TObject; download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest) of object;
    //TWKDownloadReceiveAuthenticationChallenge = procedure(sender: TObject; download: IWKDownload; challenge: NSURLAuthenticationChallenge) of object;
    TWKDownloadFinish = procedure(sender: TObject; download: WKDownload) of object;
    TWKDownloadFailWithError = procedure(sender: TObject; download: WKDownload; error: string; aData: Pointer; aLength: Integer {NSData}) of object;
implementation

end.
