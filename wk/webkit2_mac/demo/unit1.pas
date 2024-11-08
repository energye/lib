unit Unit1;

{$mode objfpc}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  CocoaAll, CocoaUtils, uWebKit, uWkInterface,
  uWkWebview, uWkWebviewParent, uWKScriptMessageHandler, uWKWebViewConfiguration, uWKUIDelegate, uWKPreferences,
  uWKNavigationDelegate, uWKUserContentController, uWKUserScript, uNSURLRequest, uNSURLResponse,
  uNSURL, uWKURLSchemeHandler, uWKURLSchemeTask, uWKNavigationAction, uWKFrameInfo, uWKWindowFeatures,
  uWKNavigation, uWKWebpagePreferences, uWKNavigationResponse, uWKDownload, uWKDownloadDelegateProtocol,
  uNSURLCredential, uNSURLAuthenticationChallenge, uNSProgress;

type

  { TForm1 }

  TForm1 = class(TForm)
    Addr: TComboBox;
    GoURL: TButton;
    Back: TButton;
    Forwad: TButton;
    Stop: TButton;
    Process: TLabel;
    procedure GoURLClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    FWebView: TWkWebview;
    FWebViewParent: TWkWebviewParent;
    FConfig: TWKWebViewConfiguration;
    FUserContentController: TWKUserContentController;
    FScriptMessageHandler: TWKScriptMessageHandler;
    FNavigationDelegate: TWKNavigationDelegate;
    FUIDelegate: TWKUIDelegate;
    FPreference: TWKPreferences;
    FURLSchemeHandler: TWKURLSchemeHandler;
  public
    constructor Create; overload;
    procedure OnProcessMessage(sender: TObject; userContentController: WKUserContentController; AName, AData: string);
    procedure OnStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
    procedure OnFinishNavigation(sender: TObject; navigation: WKNavigation);
    procedure OnStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
    procedure OnStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
    function OnCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
  end;

procedure CreateGlobal();
var
  Form1: TForm1;

implementation

{$R *.lfm}
procedure CreateGlobal();
begin
end;

constructor TForm1.Create;
begin
end;

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
var
  TempFrame: TRect;
begin
  FWebView := TWkWebview.Create(self);
  FWebView.OnProcessMessage := @OnProcessMessage;
  FWebView.OnStartProvisionalNavigation := @OnStartProvisionalNavigation;
  FWebView.OnFinishNavigation := @OnFinishNavigation;
  FWebView.OnStartURLSchemeTask := @OnStartURLSchemeTask;
  FWebView.OnStopURLSchemeTask := @OnStopURLSchemeTask;
  FWebView.OnCreateWebView := @OnCreateWebView;

  FWebViewParent := TWkWebviewParent.Create(self);
  FWebViewParent.Parent := self;
  //FWebViewParent.Align := AlClient;
  FWebViewParent.Align := AlCustom;
  FWebViewParent.Top := 50;
  FWebViewParent.Height := Height - 50;
  FWebViewParent.Width := Width;
  FWebViewParent.Anchors := [akTop, akLeft, akRight, akBottom];

  TempFrame.Width := Width;
  TempFrame.Height := Height - 50;

  FUserContentController := TWKUserContentController.New;

  FScriptMessageHandler := TWKScriptMessageHandler.Create(FWebView);

  FUserContentController.AddScriptMessageHandlerName(FScriptMessageHandler, 'processMessage');

  FConfig := TWKWebViewConfiguration.New;
  FConfig.SetUserContentController(FUserContentController.Data());

  FURLSchemeHandler := TWKURLSchemeHandler.Create(FWebView);

  FConfig.SetSuppressesIncrementalRendering(true);
  FConfig.SetApplicationNameForUserAgent('energy.cn');
  FConfig.SetURLSchemeHandlerForURLScheme(FURLSchemeHandler.Data(), 'energy');


  FPreference := TWKPreferences.New();// FConfig.Preferences;
  FConfig.SetPreferences(FPreference.Data());

  FPreference.SetTabFocusesLinks(true);
  FPreference.SetFraudulentWebsiteWarningEnabled(true);
  //FPreference.SetValueForKey(true, 'developerExtrasEnabled');

  //FPreference.SetTextInteractionEnabled(true);// 11.3
  //FPreference.SetElementFullscreenEnabled(true);// 12.3


  FNavigationDelegate := TWKNavigationDelegate.Create(FWebView);
  FUIDelegate := TWKUIDelegate.Create(FWebView);

  FWebView.InitWithFrameConfiguration(TempFrame, FConfig.Data());

  FWebView.SetNavigationDelegate(FNavigationDelegate.Data());
  FWebView.SetUIDelegate(FUIDelegate.Data());

  FWebViewParent.SetWebview(FWebView.Data());

  // [webView.configuration.preferences setValue:@YES forKey:@"developerExtrasEnabled"];
  //FPreference.Data().setValue_forKey(ObjCBOOL(true), StrToNSString('developerExtrasEnabled'));

end;

procedure TForm1.OnProcessMessage(sender: TObject; userContentController: WKUserContentController; AName, AData: string);
begin
  Application.MessageBox(PChar(AData), PChar('ReceiveScriptMessage: ' + AName));
  FWebView.EvaluateJavaScript('alert(1)');
end;

procedure TForm1.OnStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
begin
  Process.Caption := 'start';
end;

procedure TForm1.OnFinishNavigation(sender: TObject; navigation: WKNavigation);
begin
  Process.Caption := 'finish';
end;

procedure TForm1.OnStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
var
  TempURLSchemeTask: TWKURLSchemeTask;
  request: TNSURLRequest;
  response: TNSURLResponse;
  tempNSURL: TNSURL;
  tempUrl, tempHost, tempPath: string;
  tempHtml: string;
  tempDataBytesLength: Integer;
  tempHTTPHeader: string;
begin
  TempURLSchemeTask := TWKURLSchemeTask.Create(urlSchemeTask);
  request := TNSURLRequest.Create(TempURLSchemeTask.Request());
  tempNSURL := TNSURL.Create(request.URL);
  tempUrl := tempNSURL.AbsoluteString;
  tempHost := tempNSURL.Host;
  tempPath := tempNSURL.Path;
  WriteLn(tempUrl, tempHost, tempPath);

  tempHtml := '<html><body><h1>Hello, World!中文中文中文中文中文</h1><h2>自定义 scheme: energy<h2></body></html>';
  tempDataBytesLength := Length(tempHtml);

  //NSDictionary
  tempHTTPHeader := request.AllHTTPHeaderFields;
  //tempHTTPHeader := '{"Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8"}';

  // 响应对象必须包含所请求资源的 MIME 类型
  response := TNSURLResponse.New;
  response.InitWithURLMIMETypeExpectedContentLengthTextEncodingName(tempNSURL.Data(), 'text/html', tempDataBytesLength, 'utf-8');
  //response.InitWithURLStatusCodeHTTPVersionHeaderFields(tempNSURL, 200, 'HTTP/1.1', tempHTTPHeader);//???
  //response.localizedStringForStatusCode(200);

  TempURLSchemeTask.ReceiveResponse(response.Data());
  TempURLSchemeTask.ReceiveData(Pointer(tempHtml), tempDataBytesLength);
  TempURLSchemeTask.Finish();
  TempURLSchemeTask.Free;
end;

procedure TForm1.OnStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
begin
  WriteLn();
end;

function TForm1.OnCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction;
  windowFeatures: WKWindowFeatures): WKWebView;
var
  TempSourceFrame: TWKFrameInfo;
  TempTargetFrame: TWKFrameInfo;
  TempSourceRequest: TNSURLRequest;
  TempTargetRequest: TNSURLRequest;
  TempSourceURL: string;
  TempTargetURL: string;
begin
  Result := nil;
  TempSourceFrame := TWKFrameInfo.Create(navigationAction.SourceFrame);
  TempTargetFrame := TWKFrameInfo.Create(navigationAction.TargetFrame);
  TempSourceRequest := TNSURLRequest.Create(TempSourceFrame.Request);
  TempTargetRequest := TNSURLRequest.Create(TempTargetFrame.Request);
  if TempSourceRequest <> nil then
    TempSourceURL := TNSURL.Create(TempSourceRequest.URL).AbsoluteString;
  if TempTargetRequest <> nil then
    TempTargetURL := TNSURL.Create(TempTargetRequest.URL).AbsoluteString;
  WriteLn(TempSourceURL);
  WriteLn(TempTargetURL);
end;

procedure TForm1.GoURLClick(Sender: TObject);
begin
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL(Addr.Text);
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  //FWebView.LoadURL('https://energye.github.io');
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL('energy://test.com');
  //FWebView.LoadHTML('<html><head><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><meta http-equiv="content-type" content="text/html;charset=utf-8"><title>从字符串加载HTML</title></head><body><p>这是一个从字符串加载的HTML。</p></body></html>', '')
end;

end.
