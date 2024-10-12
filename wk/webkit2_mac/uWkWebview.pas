unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, CGGeometry, CGBase,
  uWebKit, uWkInterface, uWkWebviewEvents, uWKWebViewConfiguration, uNSURL,
  uWKURLSchemeTask, uWKNavigationAction, uWKFrameInfo, uWKWindowFeatures, uWKNavigation;

type

  TWkWebview = class(TComponent, IWkWebview, IReceiveScriptMessageEvent, IWKNavigationDelegateEvent, IWKURLSchemeHandlerEvent, IWKUIDelegateEvent, IWKDownloadEvent)
  private
    FData: WKWebView;
  protected
    function Data(): WKWebView;
    procedure FieldEmpty();
  private
    FConfiguration: IWKWebViewConfiguration;
    FNavigationDelegate: IWKNavigationDelegate;
    FUIDelegate: IWKUIDelegate;
  private
    FOnProcessMessage: TWkProcessMessageEvent;
    FOnStartProvisionalNavigation: TWkStartProvisionalNavigation;
    FOnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation;
    FOnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError;
    FOnCommitNavigation: TWkCommitNavigation;
    FOnFinishNavigation: TWkFinishNavigation;
    FOnFailNavigationWithError: TWkFailNavigationWithError;
    FOnStartURLSchemeTask: TWKStartURLSchemeTask;
    FOnStopURLSchemeTask: TWKStopURLSchemeTask;
    FOnCreateWebView: TWKCreateWebView;
    FOnRunJavaScriptAlert: TWKRunJavaScriptAlert;
    FOnRunJavaScriptConfirmCompletion: TWKRunJavaScriptConfirmCompletion;
    FOnRunJavaScriptTextInputCompletion: TWKRunJavaScriptTextInputCompletion;
    FOnWebViewDidClose: TWKWebViewDidClose;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
    function Configuration: IWKWebViewConfiguration;
    function LoadRequest (request: INSURLRequest): IWKNavigation;
    procedure SetNavigationDelegate(navigationDelegate: IWKNavigationDelegate);
    procedure SetUIDelegate(uiDelegate: IWKUIDelegate);
    procedure InitWithFrameConfiguration (AFrame: TRect; AConfiguration: IWKWebViewConfiguration);
    function Title: string;
    function URL: INSURL;
    function IsLoading: LongBool;
    // 根据接收到的总字节数，此值的范围为0.0到1.0，包括主文档及其所有潜在的子资源。
    // 导航加载完成后，估计进度值保持在1.0，直到新的导航开始，此时估计进度值重置为0.0。
    // WKWebView类符合此属性的键值观察（KVO）标准。
    function EstimatedProgress: double;
    function HasOnlySecureContent: LongBool;
    function CanGoBack: LongBool;
    function CanGoForward: LongBool;
    function GoBack: IWKNavigation;
    function GoForward: IWKNavigation;
    function Reload: IWKNavigation;
    function ReloadFromOrigin: IWKNavigation;
    procedure StopLoading;
    procedure EvaluateJavaScript(javaScriptString: string);
    procedure SetAllowsBackForwardNavigationGestures(newValue: LongBool);
    function AllowsBackForwardNavigationGestures: LongBool;
    procedure SetAllowsMagnification(newValue: LongBool);
    function AllowsMagnification: LongBool;
    procedure SetMagnification(newValue: double);
    function Magnification: double;
    procedure SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
  protected
    // WKScriptMessageHandlerProtocol
    procedure doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
    // WKNavigationDelegateProtocol
    procedure doDecidePolicyForNavigationActionPreferences(webView: WKWebView; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy;
      var preferences: WKWebpagePreferences);
    procedure doDecidePolicyForNavigationResponse(webView: WKWebView; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition;
      var credential: NSURLCredential);
    procedure doWebContentProcessDidTerminate (webView: WKWebView);
    function doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
    procedure doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    procedure doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
    // WKURLSchemeHandlerProtocol
    procedure doStartURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    procedure doStopURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    // WKUIDelegateProtocol
    function doCreateWebView (webView: WKWebView; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure doRunJavaScriptAlert (webView: WKWebView; message_: NSString; frame: WKFrameInfo);
    function doRunJavaScriptConfirmCompletion (webView: WKWebView; message_: NSString; frame: WKFrameInfo): Boolean;
    function doRunJavaScriptTextInputCompletion (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo): string;
    procedure doWebViewDidClose(webView: WKWebView);
    // WKDownload
    procedure doCancelCompletionHandler(download: WKDownload; aData: Pointer; aLength: Integer);
  published
    property OnProcessMessage: TWkProcessMessageEvent read FOnProcessMessage write FOnProcessMessage;
    property OnStartProvisionalNavigation: TWkStartProvisionalNavigation read FOnStartProvisionalNavigation write FOnStartProvisionalNavigation;
    property OnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation read FOnReceiveServerRedirectForProvisionalNavigation write FOnReceiveServerRedirectForProvisionalNavigation;
    property OnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError read FOnFailProvisionalNavigationWithError write FOnFailProvisionalNavigationWithError;
    property OnCommitNavigation: TWkCommitNavigation read FOnCommitNavigation write FOnCommitNavigation;
    property OnFinishNavigation: TWkFinishNavigation read FOnFinishNavigation write FOnFinishNavigation;
    property OnFailNavigationWithError: TWkFailNavigationWithError read FOnFailNavigationWithError write FOnFailNavigationWithError;
    property OnStartURLSchemeTask: TWKStartURLSchemeTask read FOnStartURLSchemeTask write FOnStartURLSchemeTask;
    property OnStopURLSchemeTask: TWKStopURLSchemeTask read FOnStopURLSchemeTask write FOnStopURLSchemeTask;
    property OnCreateWebView: TWKCreateWebView read FOnCreateWebView write FOnCreateWebView;
    property OnRunJavaScriptAlert: TWKRunJavaScriptAlert read FOnRunJavaScriptAlert write FOnRunJavaScriptAlert;
    property OnRunJavaScriptConfirmCompletion: TWKRunJavaScriptConfirmCompletion read FOnRunJavaScriptConfirmCompletion write FOnRunJavaScriptConfirmCompletion;
    property OnRunJavaScriptTextInputCompletion: TWKRunJavaScriptTextInputCompletion read FOnRunJavaScriptTextInputCompletion write FOnRunJavaScriptTextInputCompletion;
    property OnWebViewDidClose: TWKWebViewDidClose read FOnWebViewDidClose write FOnWebViewDidClose;
  end;


implementation

constructor TWkWebview.Create(AOwner: TComponent);
begin
  FieldEmpty();
  inherited Create(AOwner);
end;

destructor TWkWebview.Destroy;
begin
  FieldEmpty();
  inherited Destroy;
end;

procedure TWkWebview.FieldEmpty();
begin
  FData := nil;
  FConfiguration := nil;
  FNavigationDelegate := nil;
  FUIDelegate := nil;
  FOnProcessMessage := nil;
  FOnStartProvisionalNavigation := nil;
  FOnReceiveServerRedirectForProvisionalNavigation := nil;
  FOnFailProvisionalNavigationWithError := nil;
  FOnCommitNavigation := nil;
  FOnFinishNavigation := nil;
  FOnFailNavigationWithError := nil;
  FOnStartURLSchemeTask := nil;
  FOnStopURLSchemeTask := nil;
  FOnCreateWebView := nil;
  FOnRunJavaScriptAlert := nil;
  FOnRunJavaScriptConfirmCompletion := nil;
  FOnRunJavaScriptTextInputCompletion := nil;
  FOnWebViewDidClose := nil;
end;

function TWkWebview.Data(): WKWebView;
begin
  Result := FData;
end;

// event do

procedure TWkWebview.doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
var
  tempName, tempBody: string;
begin
  if Assigned(FOnProcessMessage) then
  begin
    tempName := NSStringToString(message_.name);
    tempBody := NSStringToString(NSString(message_.body));
    FOnProcessMessage(nil, tempName, tempBody);
  end;
end;

procedure TWkWebview.doDecidePolicyForNavigationActionPreferences(webView: WKWebView; navigationAction: WKNavigationAction;
  var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
begin
  if Assigned(FOnProcessMessage) then
  begin

  end;
end;

procedure TWkWebview.doDecidePolicyForNavigationResponse(webView: WKWebView; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
begin

end;

procedure TWkWebview.doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnStartProvisionalNavigation) then
  begin
    FOnStartProvisionalNavigation(self, TWKNavigation.Create(navigation));
  end;
end;

procedure TWkWebview.doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnReceiveServerRedirectForProvisionalNavigation) then
  begin
    FOnReceiveServerRedirectForProvisionalNavigation(self, TWKNavigation.Create(navigation));
  end;
end;

procedure TWkWebview.doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailProvisionalNavigationWithError) then
  begin
    FOnFailProvisionalNavigationWithError(self, TWKNavigation.Create(navigation), NSStringToString(error.localizedDescription));
  end;
end;

procedure TWkWebview.doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnCommitNavigation) then
  begin
    FOnCommitNavigation(self, TWKNavigation.Create(navigation));
  end;
end;

procedure TWkWebview.doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnFinishNavigation) then
  begin
    FOnFinishNavigation(self, TWKNavigation.Create(navigation));
  end;
end;

procedure TWkWebview.doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailNavigationWithError) then
  begin
    FOnFailNavigationWithError(self, TWKNavigation.Create(navigation), NSStringToString(error.localizedDescription));
  end;
end;

procedure TWkWebview.doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge;
  var disposition: NSURLSessionAuthChallengeDisposition; var credential: NSURLCredential);
begin

end;

procedure TWkWebview.doWebContentProcessDidTerminate (webView: WKWebView);
begin

end;

function TWkWebview.doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
begin
  Result := true;
end;

procedure TWkWebview.doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
begin

end;

procedure TWkWebview.doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
begin

end;

procedure TWkWebview.doStartURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if Assigned(FOnStartURLSchemeTask) then
  begin
    FOnStartURLSchemeTask(self, TWKURLSchemeTask.Create(urlSchemeTask));
  end;
end;

procedure TWkWebview.doStopURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if Assigned(FOnStopURLSchemeTask) then
  begin
    FOnStopURLSchemeTask(self, TWKURLSchemeTask.Create(urlSchemeTask));
  end;
end;

function TWkWebview.doCreateWebView (webView: WKWebView; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
var
  TempConfig: TWKWebViewConfiguration;
  TempResultWebview: IWKWebView;
  TempNavigationAction: TWKNavigationAction;
  TempWindowFeatures: TWKWindowFeatures;
begin
  Result := nil;
  if Assigned(FOnCreateWebView) then
  begin
    TempConfig := TWKWebViewConfiguration.Create(configuration_);
    TempNavigationAction := TWKNavigationAction.Create(navigationAction);
    TempWindowFeatures := TWKWindowFeatures.Create(windowFeatures);
    TempResultWebview := FOnCreateWebView(self, TempConfig, TempNavigationAction, TempWindowFeatures);
    if TempResultWebview <> nil then
      Result := TempResultWebview.Data();
  end;
end;

procedure TWkWebview.doRunJavaScriptAlert (webView: WKWebView; message_: NSString; frame: WKFrameInfo);
var
  TempFrameInfo: TWKFrameInfo;
begin
  if Assigned(FOnRunJavaScriptAlert) then
  begin
    TempFrameInfo := TWKFrameInfo.Create(frame);
    FOnRunJavaScriptAlert(self, NSStringToString(message_), TempFrameInfo);
  end;
end;

function TWkWebview.doRunJavaScriptConfirmCompletion (webView: WKWebView; message_: NSString; frame: WKFrameInfo): Boolean;
var
  TempFrameInfo: TWKFrameInfo;
begin
  Result := False;
  if Assigned(FOnRunJavaScriptConfirmCompletion) then
  begin
    TempFrameInfo := TWKFrameInfo.Create(frame);
    FOnRunJavaScriptConfirmCompletion(self, NSStringToString(message_), TempFrameInfo);
  end;
end;

function TWkWebview.doRunJavaScriptTextInputCompletion (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo): string;
var
  TempFrameInfo: TWKFrameInfo;
begin
  Result := '';
  if Assigned(FOnRunJavaScriptTextInputCompletion) then
  begin
    TempFrameInfo := TWKFrameInfo.Create(frame);
    Result := FOnRunJavaScriptTextInputCompletion(self, NSStringToString(prompt), NSStringToString(defaultText), TempFrameInfo);
  end;
end;

procedure TWkWebview.doWebViewDidClose(webView: WKWebView);
begin
  if Assigned(FOnWebViewDidClose) then
  begin
    FOnWebViewDidClose(self);
  end;
end;


// WKDownload
procedure TWkWebview.doCancelCompletionHandler(download: WKDownload; aData: Pointer; aLength: Integer);
begin

end;

// 功能方法

procedure TWkWebview.LoadHTML(AHtml, ABaseURL: string);
var
  AutoPool: NSAutoreleasePool;
  baseURL: NSURL;
begin
  if Assigned(FData) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      if ABaseURL <> '' then
      begin
        baseURL := NSURL.URLWithString(NSStringUtf8(ABaseURL));
        FData.loadHTMLString_baseURL(NSStringUtf8(AHtml), baseURL);
      end
      else
        FData.loadHTMLString_baseURL(NSStringUtf8(AHtml), nil);
    finally
      AutoPool.Release;
    end;
  end;
end;

procedure TWkWebview.LoadURL(AURL: string);
var
  URLReq: NSURLRequest;
  AutoPool: NSAutoreleasePool;
begin
  if Assigned(FData) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      URLReq := NSURLRequest.requestWithURL(NSURL.URLWithString(NSStringUTF8(AURL)));
      FData.loadRequest(URLReq);
    finally
      AutoPool.Release;
    end;
  end;
end;


function TWkWebview.Configuration: IWKWebViewConfiguration;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    if FConfiguration = nil then
    begin
      FConfiguration := TWKWebViewConfiguration.Create(FData.configuration);
    end;
    Result := FConfiguration;
  end;
end;

function TWkWebview.LoadRequest(request: INSURLRequest): IWKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKNavigation.Create(FData.loadRequest(request.Data()));
  end;
end;

procedure TWkWebview.SetNavigationDelegate(navigationDelegate: IWKNavigationDelegate);
begin
  if Assigned(FData) then
  begin
    FNavigationDelegate := navigationDelegate;
    FData.setNavigationDelegate(FNavigationDelegate.Data());
  end;
end;

procedure TWkWebview.SetUIDelegate(uiDelegate: IWKUIDelegate);
begin
  if Assigned(FData) then
  begin
    FUIDelegate := uiDelegate;
    FData.setUIDelegate(FUIDelegate.Data());
  end;
end;

procedure TWkWebview.InitWithFrameConfiguration (AFrame: TRect; AConfiguration: IWKWebViewConfiguration);
var
  TempFrame: CGRect;
begin
  if (FData = nil) and Assigned(AConfiguration) then
  begin
    FConfiguration := AConfiguration;

    TempFrame.origin.x := CGFloat(AFrame.Left);
    TempFrame.origin.y := CGFloat(AFrame.Top);
    TempFrame.size.Width := CGFloat(AFrame.Width);
    TempFrame.size.Height := CGFloat(AFrame.Height);

    FData := WKWebView.alloc.initWithFrame_configuration(TempFrame, FConfiguration.Data());
  end;
end;

function TWkWebview.Title: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.title);
  end;
end;

function TWkWebview.URL: INSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURL.Create(FData.URL);
  end;
end;

function TWkWebview.IsLoading: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isLoading);
  end;
end;

function TWkWebview.EstimatedProgress: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := FData.estimatedProgress;
  end;
end;

function TWkWebview.HasOnlySecureContent: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.hasOnlySecureContent);
  end;
end;

function TWkWebview.CanGoBack: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canGoBack);
  end;
end;

function TWkWebview.CanGoForward: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canGoForward);
  end;
end;

function TWkWebview.GoBack: IWKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKNavigation.Create(FData.goBack);
  end;
end;

function TWkWebview.GoForward: IWKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKNavigation.Create(FData.goForward);
  end;
end;

function TWkWebview.Reload: IWKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKNavigation.Create(FData.reload);
  end;
end;

function TWkWebview.ReloadFromOrigin: IWKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKNavigation.Create(FData.reloadFromOrigin);
  end;
end;

procedure TWkWebview.StopLoading;
begin
  if Assigned(FData) then
  begin
    FData.stopLoading;
  end;
end;

procedure TWkWebview.EvaluateJavaScript(javaScriptString: string);
begin
  if Assigned(FData) then
  begin
    FData.evaluateJavaScript_completionHandler(NSStringUtf8(javaScriptString), nil);
  end;
end;

procedure TWkWebview.SetAllowsBackForwardNavigationGestures(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsBackForwardNavigationGestures(ObjCBOOL(newValue));
  end;
end;

function TWkWebview.AllowsBackForwardNavigationGestures: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsBackForwardNavigationGestures);
  end;
end;

procedure TWkWebview.SetAllowsMagnification(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsMagnification(ObjCBOOL(newValue));
  end;
end;

function TWkWebview.AllowsMagnification: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsMagnification);
  end;
end;

procedure TWkWebview.SetMagnification(newValue: double);
begin
  if Assigned(FData) then
  begin
    FData.setMagnification(CGFloat(newValue));
  end;
end;

function TWkWebview.Magnification: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.magnification);
  end;
end;

procedure TWkWebview.SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
var
  TempPoint: CGPoint;
begin
  if Assigned(FData) then
  begin
    TempPoint.x := CGFloat(point.X);
    TempPoint.y := CGFloat(point.Y);
    FData.setMagnification_centeredAtPoint(CGFloat(magnification_), TempPoint);
  end;
end;


end.
