unit uWKNavigationDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface, uWkWebviewEvents, uWkWebview;

type
  // 接受或拒绝导航更改以及跟踪导航请求进度的方法。
  // 在用于协调web视图主框架中的更改的对象中实现WKNavigationDelegate协议的方法。
  // 当用户尝试浏览web内容时，web视图与其导航代理协调以管理任何转换。
  // 例如，您可以使用这些方法来限制内容中特定链接的导航。
  // 您还可以使用它们来跟踪请求的进度，并对错误和身份验证挑战做出响应。
  NSWKNavigationDelegate = objcclass(NSViewController, WKNavigationDelegateProtocol)
  private
    FData: Pointer;
  public
    // 请求代理人根据指定的操作信息导航到新内容的权限。
    //procedure webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction;
    //  decisionHandler: WKDecidePolicyNavigationAction);
    // 根据指定的首选项和操作信息，请求代表允许导航到新内容。
    // 使用此方法允许或拒绝由指定操作发起的导航请求。
    // web视图在交互发生后但在尝试加载任何内容之前调用此方法。
    // 如果实现此方法，请始终在某个时候执行decisionHandler块。
    // 您可以从委托方法的实现中同步执行它，也可以在方法返回后异步执行它。
    // 如果您的委托对象实现了此方法，则web视图不会调用webView:decidePolicyForNavigationAction:decisionHandler:方法。
    procedure webView_decidePolicyForNavigationAction_preferences_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction;
      preferences: WKWebpagePreferences; decisionHandler: WKDecidePolicyNavigationActionPreferences);
    // 在web视图收到对其原始URL请求的响应后，使用此方法允许或拒绝导航请求。
    // navigationResponse参数包含响应的详细信息，包括响应包含的数据类型。
    // 如果实现此方法，请始终在某个时候执行decisionHandler块。
    // 您可以从委托方法的实现中同步执行它，也可以在方法返回后异步执行它。
    procedure webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse;
      decisionHandler: WKDecidePolicyNavigationResponse);
    procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
      completionHandler: WKReceiveAuthenticationChallenge);
    procedure webViewWebContentProcessDidTerminate (webView: WKWebView);
    procedure webView_authenticationChallenge_shouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
      decisionHandler: WKAuthenticationChallenge);
    // 告知代理导航操作已变为下载。实施此方法以开始跟踪下载进度。
    procedure webView_navigationAction_didBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    // 告知代理导航响应已变为下载。实施此方法以开始跟踪下载进度。
    procedure webView_navigationResponse_didBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
  end;

  TWKNavigationDelegate = class(TInterfacedObject, IWKNavigationDelegate)
  private
    FData: NSWKNavigationDelegate;
  protected
    function Data(): WKNavigationDelegateProtocol;
  public
    constructor Create(event: IWKNavigationDelegateEvent);
    destructor Destroy; override;
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

procedure NSWKNavigationDelegate.webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
  completionHandler: WKReceiveAuthenticationChallenge);
var
  TempDisposition: NSURLSessionAuthChallengeDisposition;
  TempCredential: NSURLCredential;
begin
  // default
  TempDisposition := NSURLSessionAuthChallengePerformDefaultHandling;
  TempCredential := nil;
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doReceiveAuthenticationChallenge(webView, challenge, TempDisposition, TempCredential);
  end;
  completionHandler(TempDisposition, TempCredential);
end;

procedure NSWKNavigationDelegate.webViewWebContentProcessDidTerminate (webView: WKWebView);
begin
  if FData <> nil then
  begin
    IWKNavigationDelegateEvent(FData).doWebContentProcessDidTerminate(webView);
  end;
end;

procedure NSWKNavigationDelegate.webView_authenticationChallenge_shouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge;
  decisionHandler: WKAuthenticationChallenge);
var
  TempDecision: Boolean;
begin
  TempDecision := True;
  if FData <> nil then
  begin
    TempDecision := IWKNavigationDelegateEvent(FData).doAuthenticationChallengeShouldAllowDeprecatedTLS(webView, challenge);
  end;
  decisionHandler(ObjcBool(TempDecision));
end;

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
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationDelegate.Data(): WKNavigationDelegateProtocol;
begin
  Result := FData;
end;

end.
