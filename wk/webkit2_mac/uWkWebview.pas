unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, uDefinedWebKitClasses,
  uWebKit, CGGeometry;

type

  //WKUIDelegate = objcclass external (NSObject, WKUIDelegateProtocol)
  WKUIDelegate = objcclass(NSObject)
  public
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView; message 'webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:';
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler:';
    //procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler:';
    //procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:';
  end;

  // WKScriptMessageHandlerProtocol
  WKScriptMessageHandler = objcclass(NSObject)
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;

  // WKNavigationDelegateProtocol
  //WKNavigationDelegate = objcclass(NSObject)
  ////WKNavigationDelegate = objcclass(NSObject, WKNavigationDelegateProtocol)
  //public
  //  procedure webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; decisionHandler: OpaqueCBlock); message 'webView:decidePolicyForNavigationAction:decisionHandler:';
  //  procedure webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse; decisionHandler: OpaqueCBlock); message 'webView:decidePolicyForNavigationResponse:decisionHandler:';
  //  procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didStartProvisionalNavigation:';
  //  procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didReceiveServerRedirectForProvisionalNavigation:';
  //  procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailProvisionalNavigation:withError:';
  //  procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didCommitNavigation:';
  //  procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didFinishNavigation:';
  //  procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailNavigation:withError:';
  //  procedure webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge; completionHandler: OpaqueCBlock); message 'webView:didReceiveAuthenticationChallenge:completionHandler:';
  //end;

  TWkWebview = class(TComponent)
  private
    FWebview: WKWebView;
  public
    constructor Create(AOwner: TComponent); override;
    constructor Create(AOwner: TComponent; Width, Height: integer);
    destructor Destroy; override;
  public
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
  public
    property WebView: WKWebView read FWebView;
  end;

implementation

// WKUIDelegate
function WKUIDelegate.webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  Result := nil;
end;

procedure WKUIDelegate.webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock);
begin
  //WriteLn('webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler');
end;

// WKScriptMessageHandler
procedure WKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
var
  body: string;
begin
  body := NSStringToString(NSString(message_.body));
  WriteLn('didReceiveScriptMessage body: ', body);
  Application.MessageBox('text', 'caption');
end;

// WKNavigationDelegate
//procedure WKNavigationDelegate.webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; decisionHandler: OpaqueCBlock);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse; decisionHandler: OpaqueCBlock);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
//begin
//  //WriteLn('didStartProvisionalNavigation');
//end;
//
//procedure WKNavigationDelegate.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
//begin
//
//end;
//
//procedure WKNavigationDelegate.webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge; completionHandler: OpaqueCBlock);
//begin
//
//end;


constructor TWkWebview.Create(AOwner: TComponent);
begin
  Create(AOwner, 100, 100);
end;

constructor TWkWebview.Create(AOwner: TComponent; Width, Height: integer);
var
  frame: CGRect;
  config: WKWebViewConfiguration;
  userContentController: WKUserContentController;
  scriptMessageHandler: WKScriptMessageHandlerProtocol;
  //UIDelgate: WKUIDelegate;
  navigationDelegate: WKNavigationDelegateProtocol;
begin
  inherited Create(AOwner);

  config := WKWebViewConfiguration.alloc.init;

  // 问题，代理协议类不是这样用
  userContentController := WKUserContentController.alloc.init;
  scriptMessageHandler := WKScriptMessageHandlerProtocol.alloc.init;
  userContentController.addScriptMessageHandler_name(scriptMessageHandler, NSStringUtf8('energy'));
  config.setUserContentController(userContentController);

  config.autorelease();

  frame.origin.x := 0;
  frame.origin.y := 0;
  frame.size.Width := Width;
  frame.size.Height := Height;

  FWebview := WKWebView.alloc.initWithFrame_configuration(frame, config);
  FWebview.autorelease();

  //UIDelgate := WKUIDelegate.alloc.init;
  //FWebview.setUIDelegate(WKUIDelegateProtocol(UIDelgate));
  //navigationDelegate := WKNavigationDelegateProtocol.alloc.init;
  //FWebview.setNavigationDelegate(navigationDelegate);
end;

destructor TWkWebview.Destroy;
begin
  //if FWebview <> nil then
  //begin
  //  FWebview.release;
  //end;
  inherited Destroy;
end;

procedure TWkWebview.LoadHTML(AHtml, ABaseURL: string);
var
  AutoPool: NSAutoreleasePool;
  baseURL: NSURL;
begin
  if Assigned(FWebview) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      if ABaseURL <> '' then
      begin
        baseURL := NSURL.URLWithString(NSStringUtf8(ABaseURL));
        FWebview.loadHTMLString_baseURL(NSStringUtf8(AHtml), baseURL);
      end
      else
        FWebview.loadHTMLString_baseURL(NSStringUtf8(AHtml), nil);
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
  if Assigned(FWebview) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      URLReq := NSURLRequest.requestWithURL(NSURL.URLWithString(NSStringUTF8(AURL)));
      FWebview.loadRequest(URLReq);
    finally
      AutoPool.Release;
    end;
  end;
end;

end.
