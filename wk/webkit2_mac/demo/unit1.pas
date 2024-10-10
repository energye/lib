unit Unit1;

{$mode objfpc}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  CocoaAll, CocoaUtils, uWebKit, uWkInterface,
  uWkWebview, uWkWebviewParent, uWKScriptMessageHandler, uWKWebViewConfiguration, uWKUIDelegate, uWKPreferences,
  uWKNavigationDelegate, uWKUserContentController, uWKUserScript, uNSURLRequest, uNSURLResponse,
  uNSURL, uWKURLSchemeHandler, uWKURLSchemeTask;

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
    FConfig: IWKWebViewConfiguration;
    FUserContentController: IWKUserContentController;
    FScriptMessageHandler: IWKScriptMessageHandler;
    FNavigationDelegate: IWKNavigationDelegate;
    FUIDelegate: IWKUIDelegate;
    FPreference: IWKPreferences;
    FURLSchemeHandler: TWKURLSchemeHandler;
  public
    constructor Create; overload;
    procedure OnProcessMessage(Sender: IWKUserContentController; AName, AData: string);
    procedure OnStartProvisionalNavigation(webView: IWKWebView; navigation: WKNavigation);
    procedure OnFinishNavigation(webView: IWKWebView; navigation: WKNavigation);
    procedure OnStartURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
    procedure OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
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

  FUserContentController := TWKUserContentController.Create;

  FScriptMessageHandler := TWKScriptMessageHandler.Create(FWebView);

  FUserContentController.AddScriptMessageHandlerName(FScriptMessageHandler, 'processMessage');

  FConfig := TWKWebViewConfiguration.Create;
  FConfig.SetUserContentController(FUserContentController);

  FURLSchemeHandler := TWKURLSchemeHandler.Create(FWebView);

  FConfig.SetSuppressesIncrementalRendering(true);
  FConfig.SetApplicationNameForUserAgent('energy.cn');
  FConfig.SetURLSchemeHandlerForURLScheme(FURLSchemeHandler, 'energy');


  FPreference := FConfig.Preferences;
  FPreference.SetTabFocusesLinks(true);
  FPreference.SetFraudulentWebsiteWarningEnabled(true);

  //FPreference.SetTextInteractionEnabled(true);// 11.3
  //FPreference.SetElementFullscreenEnabled(true);// 12.3


  FNavigationDelegate := TWKNavigationDelegate.Create(FWebView);
  FUIDelegate := TWKUIDelegate.Create(FWebView);

  FWebView.InitWithFrameConfiguration(TempFrame, FConfig);

  FWebView.SetNavigationDelegate(FNavigationDelegate);
  FWebView.SetUIDelegate(FUIDelegate);

  FWebViewParent.SetWebview(FWebView);

  // [webView.configuration.preferences setValue:@YES forKey:@"developerExtrasEnabled"];
  //FPreference.Data().setValue_forKey(ObjCBOOL(true), StrToNSString('developerExtrasEnabled'));

end;

procedure TForm1.OnProcessMessage(Sender: IWKUserContentController; AName, AData: string);
begin
  Application.MessageBox(PChar(AData), PChar('ReceiveScriptMessage: ' + AName));
  FWebView.EvaluateJavaScript('alert(1)');
end;

procedure TForm1.OnStartProvisionalNavigation(webView: IWKWebView; navigation: WKNavigation);
begin
  Process.Caption := 'start';
end;

procedure TForm1.OnFinishNavigation(webView: IWKWebView; navigation: WKNavigation);
begin
  Process.Caption := 'finish';
end;

procedure TForm1.OnStartURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
var
  request: INSURLRequest;
  response: INSURLResponse;
  tempNSURL: INSURL;
  tempUrl, tempHost, tempPath: string;
  tempHtml: string;
  tempDataBytesLength: Integer;
  tempHTTPHeader: string;
begin
  request := urlSchemeTask.Request();
  tempNSURL := request.URL;
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
  response := TNSURLResponse.Create;
  response.InitWithURLMIMETypeExpectedContentLengthTextEncodingName(tempNSURL, 'text/html', tempDataBytesLength, 'utf-8');
  //response.InitWithURLStatusCodeHTTPVersionHeaderFields(tempNSURL, 200, 'HTTP/1.1', tempHTTPHeader);//???
  //response.localizedStringForStatusCode(200);

  urlSchemeTask.ReceiveResponse(response);
  urlSchemeTask.ReceiveData(Pointer(tempHtml), tempDataBytesLength);
  urlSchemeTask.Finish();
end;

procedure TForm1.OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
begin
  WriteLn();
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
