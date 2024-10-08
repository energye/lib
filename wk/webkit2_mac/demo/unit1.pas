unit Unit1;

{$mode objfpc}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  CocoaAll, uWebKit, uWkInterface,
  uWkWebview, uWkWebviewParent, uWKScriptMessageHandler, uWKWebViewConfiguration, uWKUIDelegate, uWKPreferences,
  uWKNavigationDelegate, uWKUserContentController, uWKUserScript, uNSURLRequest,
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
    FPreference: IWKPreferences;
    FURLSchemeHandler: TWKURLSchemeHandler;
  public
    procedure OnProcessMessage(Sender: IWKUserContentController; AName, AData: string);
    procedure OnStartProvisionalNavigation(webView: IWKWebView; navigation: WKNavigation);
    procedure OnFinishNavigation(webView: IWKWebView; navigation: WKNavigation);
    procedure OnStartURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
    procedure OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
var
  TempFrame: TRect;
  TempNavigationDelegate: TWKNavigationDelegate;
  TempScriptMessageHandler: TWKScriptMessageHandler;
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

  TempScriptMessageHandler := TWKScriptMessageHandler.Create(FWebView);

  FUserContentController.AddScriptMessageHandlerName(TempScriptMessageHandler, 'energy');

  FConfig := TWKWebViewConfiguration.Create;
  FConfig.SetUserContentController(FUserContentController);

  FURLSchemeHandler := TWKURLSchemeHandler.Create(FWebView);

  FConfig.SetSuppressesIncrementalRendering(true);
  FConfig.SetApplicationNameForUserAgent('energy.cn');
  FConfig.SetURLSchemeHandlerForURLScheme(FURLSchemeHandler, 'energy');


  FPreference := FConfig.Preferences;
  FPreference.SetTabFocusesLinks(true);
  FPreference.SetFraudulentWebsiteWarningEnabled(true);
  //FPreference.SetTextInteractionEnabled(true);
  //FPreference.SetElementFullscreenEnabled(true);

  TempNavigationDelegate := TWKNavigationDelegate.Create(FWebView);
  //FNavigationDelegate := TempNavigationDelegate;

  FWebView.InitWithFrameConfiguration(TempFrame, FConfig);

  FWebView.SetNavigationDelegate(TempNavigationDelegate);

  FWebViewParent.SetWebview(FWebView);


end;

procedure TForm1.OnProcessMessage(Sender: IWKUserContentController; AName, AData: string);
begin
  Application.MessageBox(PChar(AData), PChar('ReceiveScriptMessage: ' + AName));
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
  tempNSURL: INSURL;
  tempUrl, tempHost, tempPath: string;
begin
  request := urlSchemeTask.Request();
  tempNSURL := request.URL;
  tempUrl := tempNSURL.AbsoluteString;
  tempHost := tempNSURL.Host;
  tempPath := tempNSURL.Path;
  WriteLn(tempUrl, tempHost, tempPath);

end;

procedure TForm1.OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: IWKURLSchemeTask);
begin
end;

procedure TForm1.GoURLClick(Sender: TObject);
begin
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL(Addr.Text);
  //FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  //FWebView.LoadURL('https://energye.github.io');
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
  //FWebView.LoadHTML('<html><head><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><meta http-equiv="content-type" content="text/html;charset=utf-8"><title>从字符串加载HTML</title></head><body><p>这是一个从字符串加载的HTML。</p></body></html>', '')
end;

end.
