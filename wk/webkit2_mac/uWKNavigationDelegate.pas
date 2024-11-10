unit uWKNavigationDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit, uWkInterface;

type
  NSWKNavigationDelegate = objcclass(NSViewController, WKNavigationDelegateProtocol)
  private
    FData: Pointer;
  public
    // Asks the delegate for permission to navigate to new content based on the specified action information.
    // procedure webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; decisionHandler: WKDecidePolicyNavigationAction);

    // Asks the delegate for permission to navigate to new content based on the specified preferences and action information.
    // Use this method to allow or deny a navigation request that originated with the specified action.
    // The web view calls this method after the interaction occurs but before it attempts to load any content.
    procedure webView_decidePolicyForNavigationAction_preferences_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; preferences: WKWebpagePreferences; decisionHandler: WKDecidePolicyNavigationActionPreferences);
    // Asks the delegate for permission to navigate to new content after the response to the navigation request is known.
    // Use this method to allow or deny a navigation request after the web view receives the response to its original URL request.
    // The navigationResponse parameter contains the details of the response, including the type of data that the response contains.
    procedure webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse; decisionHandler: WKDecidePolicyNavigationResponse);
    // Tells the delegate that navigation from the main frame has started.
    // The web view calls this method after it receives provisional approval to process a navigation request, but before it receives a response to that request.
    procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    // Tells the delegate that the web view received a server redirect for a request.
    procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    // Tells the delegate that an error occurred during the early navigation process.
    procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    // Tells the delegate that the web view has started to receive content for the main frame.
    procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    // Tells the delegate that navigation is complete.
    procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    // Tells the delegate that an error occurred during navigation.
    procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    // Asks the delegate to respond to an authentication challenge.
    //procedure webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge; completionHandler: WKReceiveAuthenticationChallenge);
    // Tells the delegate that the web view’s content process was terminated.
    procedure webViewWebContentProcessDidTerminate (webView: WKWebView);
    // Asks the delegate whether to continue with a connection that uses a deprecated version of TLS.
    //procedure webView_authenticationChallenge_shouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge; decisionHandler: WKAuthenticationChallenge);
    // Tells the delegate that a navigation action became a download.
    procedure webView_navigationAction_didBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    // Tells the delegate that a navigation response became a download.
    procedure webView_navigationResponse_didBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
  end;

  // https://developer.apple.com/documentation/webkit/wknavigationdelegate?language=objc
  // Methods for accepting or rejecting navigation changes, and for tracking the progress of navigation requests.
  TWKNavigationDelegate = class
  private
    FData: NSWKNavigationDelegate;
  public
    constructor Create(event: IWKNavigationDelegateEvent);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKNavigationDelegateProtocol;
    // Freeing the class and the objects it implements.
    procedure Release();
  end;


implementation

//procedure NSWKNavigationDelegate.webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction;
//  decisionHandler: WKDecidePolicyNavigationAction);
//begin
//  // default
//  decisionHandler(WKNavigationActionPolicyAllow);
//end;

procedure NSWKNavigationDelegate.webView_decidePolicyForNavigationAction_preferences_decisionHandler (webView: WKWebView;
  navigationAction: WKNavigationAction; preferences: WKWebpagePreferences; decisionHandler: WKDecidePolicyNavigationActionPreferences);
var
  TempActionPolicy: WKNavigationActionPolicy;
  TempPreferences: WKWebpagePreferences;
begin
  // default
  TempActionPolicy := WKNavigationActionPolicyAllow;
  TempPreferences := preferences;
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doDecidePolicyForNavigationActionPreferences(webView, navigationAction, TempActionPolicy, TempPreferences);
  end;
  decisionHandler(TempActionPolicy, TempPreferences);
end;

procedure NSWKNavigationDelegate.webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse;
  decisionHandler: WKDecidePolicyNavigationResponse);
var
  TempResponsePolicy: WKNavigationResponsePolicy;
begin
  // default
  TempResponsePolicy := WKNavigationResponsePolicyAllow;
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doDecidePolicyForNavigationResponse(webView, navigationResponse, TempResponsePolicy);
  end;
  decisionHandler(TempResponsePolicy);
end;

procedure NSWKNavigationDelegate.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doStartProvisionalNavigation(webView, navigation);
end;

procedure NSWKNavigationDelegate.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doReceiveServerRedirectForProvisionalNavigation(webView, navigation);
end;

procedure NSWKNavigationDelegate.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doFailProvisionalNavigationWithError(webView, navigation, error);
end;

procedure NSWKNavigationDelegate.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doCommitNavigation(webView, navigation);
end;

procedure NSWKNavigationDelegate.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doFinishNavigation(webView, navigation);
end;

procedure NSWKNavigationDelegate.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if FData = nil then
    exit;
  IWKNavigationDelegateEvent(FData).doFailNavigationWithError(webView, navigation, error);
end;

//procedure NSWKNavigationDelegate.webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
//  completionHandler: WKReceiveAuthenticationChallenge);
//var
//  TempDisposition: NSURLSessionAuthChallengeDisposition;
//  TempCredential: NSURLCredential;
//begin
//  // default
//  TempDisposition := NSURLSessionAuthChallengePerformDefaultHandling;
//  TempCredential := nil;
//  if FData <> nil then
//  begin
//    IWKNavigationDelegateEvent(FData).doReceiveAuthenticationChallenge(webView, challenge, TempDisposition, TempCredential);
//  end;
//  completionHandler(TempDisposition, TempCredential);
//end;

procedure NSWKNavigationDelegate.webViewWebContentProcessDidTerminate (webView: WKWebView);
begin
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doWebContentProcessDidTerminate(webView);
  end;
end;

//procedure NSWKNavigationDelegate.webView_authenticationChallenge_shouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
//  decisionHandler: WKAuthenticationChallenge);
//var
//  TempDecision: Boolean;
//begin
//  TempDecision := True;
//  if FData <> nil then
//  begin
//    TempDecision := IWKNavigationDelegateEvent(FData).doAuthenticationChallengeShouldAllowDeprecatedTLS(webView, challenge);
//  end;
//  decisionHandler(ObjcBool(TempDecision));
//end;

procedure NSWKNavigationDelegate.webView_navigationAction_didBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
begin
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doNavigationActionDidBecomeDownload(webView, navigationAction, download);
  end;
end;

procedure NSWKNavigationDelegate.webView_navigationResponse_didBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse;
  download: WKDownload);
begin
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doNavigationResponseDidBecomeDownload(webView, navigationResponse, download);
  end;
end;

constructor TWKNavigationDelegate.Create(event: IWKNavigationDelegateEvent);
begin
  inherited Create;
  FData := NSWKNavigationDelegate.alloc.init;
  FData.FData := event;
end;

destructor TWKNavigationDelegate.Destroy;
begin
  if FData <> nil then
  begin
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKNavigationDelegate.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWKNavigationDelegate.Data(): WKNavigationDelegateProtocol;
begin
  Result := FData;
end;

end.
