unit uWkInterface;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, CocoaAll, uWebKit;


// class events interface
type
  IReceiveScriptMessageDelegateEvent = interface
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
    //procedure doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition; var credential: NSURLCredential);
    procedure doWebContentProcessDidTerminate (webView: WKWebView);
    //function doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
    procedure doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    procedure doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
  end;

  IWKURLSchemeHandlerDelegateEvent = interface
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

  IWKDownloadDelegateEvent = interface
    ['{CA5E93CB-EC78-B968-334A-729495975831}']
    procedure doDownloadCancelCompletionHandler(download: WKDownload; aData: Pointer; aLength: Integer);
    procedure doDownloadDecideDestinationUsingResponseSuggestedFilename(download: WKDownload; response: NSURLResponse; suggestedFilename: NSString);
    procedure doDownloadWillPerformHTTPRedirectionNewRequest(download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
    //procedure doDownloadReceiveAuthenticationChallenge(download: WKDownload; challenge: NSURLAuthenticationChallenge);
    procedure doDownloadFinish (download: WKDownload);
    procedure doDownloadFailWithError(download: WKDownload; error: NSError; resumeData: NSData);
  end;


implementation

end.
