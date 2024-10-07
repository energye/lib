unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, CGGeometry,
  uWebKit, uWkInterface, uWkWebviewEvents, uWKScriptMessageHandler,
  uWKNavigationDelegateProtocol, uWKUIDelegate, uWKWebViewConfiguration;

type

  TWkWebview = class(TComponent, IWkWebview)
  private
    FData: WKWebView;
  protected
    function Data(): WKWebView;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure CreateBrowser(Width, Height: integer);
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
    function Configuration: IWKWebViewConfiguration;
    function LoadRequest (request: NSURLRequest): WKNavigation;
    procedure SetNavigationDelegate(newValue: TWKNavigationDelegateProtocol);
    function NavigationDelegate: TWKNavigationDelegateProtocol;
    procedure SetUIDelegate(newValue: TWKUIDelegate);
    function UIDelegate: TWKUIDelegate;
    function BackForwardList: WKBackForwardList;
    function InitWithFrameConfiguration (frame: TRect; configuration_: IWKWebViewConfiguration): TWkWebview;
    function GoToBackForwardListItem (item: WKBackForwardListItem): WKNavigation;
    function Title: string;
    function URL: NSURL;
    function IsLoading: LongBool;
    // 根据接收到的总字节数，此值的范围为0.0到1.0，包括主文档及其所有潜在的子资源。
    // 导航加载完成后，估计进度值保持在1.0，直到新的导航开始，此时估计进度值重置为0.0。
    // WKWebView类符合此属性的键值观察（KVO）标准。
    function EstimatedProgress: double;
    function HasOnlySecureContent: LongBool;
    function CanGoBack: LongBool;
    function CanGoForward: LongBool;
    function GoBack: WKNavigation;
    function GoForward: WKNavigation;
    function Reload: WKNavigation;
    function ReloadFromOrigin: WKNavigation;
    procedure StopLoading;
    procedure EvaluateJavaScriptCompletionHandler (javaScriptString: string; completionHandler: OpaqueCBlock);
    procedure SetAllowsBackForwardNavigationGestures(newValue: LongBool);
    function AllowsBackForwardNavigationGestures: LongBool;
    procedure SetAllowsMagnification(newValue: LongBool);
    function AllowsMagnification: LongBool;
    procedure SetMagnification(newValue: double);
    function Magnification: double;
    procedure SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
  end;


implementation

constructor TWkWebview.Create(AOwner: TComponent);
begin
  FData := nil;
  inherited Create(AOwner);
end;

destructor TWkWebview.Destroy;
begin
  //if FData <> nil then
  //begin
  //  FData.release;
  //  FData := nil;
  //end;
  inherited Destroy;
end;

function TWkWebview.Data(): WKWebView;
begin
  Result := FData;
end;

procedure TWkWebview.CreateBrowser(Width, Height: integer);
var
  frame: CGRect;
  config: WKWebViewConfiguration;
  userContentController: WKUserContentController;
  scriptMessageHandler: NSWKScriptMessageHandler;
begin

  config := WKWebViewConfiguration.alloc.init;
  config.autorelease();

  frame.origin.x := 0;
  frame.origin.y := 0;
  frame.size.Width := Width;
  frame.size.Height := Height;

  userContentController := WKUserContentController.alloc.init;
  scriptMessageHandler := NSWKScriptMessageHandler.alloc.init;
  userContentController.addScriptMessageHandler_name(scriptMessageHandler, NSStringUtf8('energy'));
  config.setUserContentController(userContentController);

  FData := WKWebView.alloc.initWithFrame_configuration(frame, config);
  FData.autorelease();
end;

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
    Result := TWKWebViewConfiguration.Create(FData.configuration);
  end;
end;

function TWkWebview.LoadRequest (request: NSURLRequest): WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetNavigationDelegate(newValue: TWKNavigationDelegateProtocol);
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.NavigationDelegate: TWKNavigationDelegateProtocol;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetUIDelegate(newValue: TWKUIDelegate);
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.UIDelegate: TWKUIDelegate;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.BackForwardList: WKBackForwardList;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.InitWithFrameConfiguration (frame: TRect; configuration_: IWKWebViewConfiguration): TWkWebview;
begin
  if Assigned(FData) then
  begin

  end;
end;

//function TWkWebview.InitWithCoder (coder: NSCoder): TWkWebview;
//begin
//  if Assigned(FData) then
//  begin
//
//  end;
//end;

function TWkWebview.GoToBackForwardListItem (item: WKBackForwardListItem): WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.Title: string;
begin
end;

function TWkWebview.URL: NSURL;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.IsLoading: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.EstimatedProgress: double;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.HasOnlySecureContent: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.CanGoBack: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.CanGoForward: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.GoBack: WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.GoForward: WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.Reload: WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.ReloadFromOrigin: WKNavigation;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.StopLoading;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.EvaluateJavaScriptCompletionHandler (javaScriptString: string; completionHandler: OpaqueCBlock);
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetAllowsBackForwardNavigationGestures(newValue: LongBool);
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.AllowsBackForwardNavigationGestures: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetAllowsMagnification(newValue: LongBool);
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.AllowsMagnification: LongBool;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetMagnification(newValue: double);
begin
  if Assigned(FData) then
  begin

  end;
end;

function TWkWebview.Magnification: double;
begin
  if Assigned(FData) then
  begin

  end;
end;

procedure TWkWebview.SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
begin
  if Assigned(FData) then
  begin

  end;
end;


end.
