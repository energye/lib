unit Unit1;

{$mode objfpc}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  uWebKit, uWkInterface,
  uWkWebview, uWkWebviewParent, uWKScriptMessageHandler, uWKWebViewConfiguration, uWKUIDelegate, uWKPreferences,
  uWKNavigationDelegate, uWKUserContentController, uWKUserScript, uNSURLRequest, uNSURL;

type

  { TForm1 }

  TForm1 = class(TForm)
    GoURL: TButton;
    Back: TButton;
    Forwad: TButton;
    Stop: TButton;
    Addr: TEdit;
    Process: TLabel;
    procedure GoURLClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    FNavigationDelegate: NSWKNavigationDelegate;
    FWebView: IWkWebview;
    FWebViewParent: TWkWebviewParent;
  public
    procedure OnProcessMessage(Sender: TObject; AName, AData: string);
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
var
  TempFrame: TRect;
  TempConfig: TWKWebViewConfiguration;
  TempUserContentController: TWKUserContentController;
  TempScriptMessageHandler: TWKScriptMessageHandler;
begin
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

  TempUserContentController := TWKUserContentController.Create;

  TempScriptMessageHandler := TWKScriptMessageHandler.Create;
  TempScriptMessageHandler.OnProcessMessage := @OnProcessMessage;

  TempUserContentController.AddScriptMessageHandlerName(TempScriptMessageHandler, 'energy');

  TempConfig := TWKWebViewConfiguration.Create;
  TempConfig.SetUserContentController(TempUserContentController);


  FWebView := TWkWebview.Create();
  FWebView.CreateBrowser(TempFrame, TempConfig);

  FWebViewParent.SetWebview(FWebView);

  FNavigationDelegate := NSWKNavigationDelegate.alloc.init;
  FWebview.Data().setNavigationDelegate(FNavigationDelegate);
end;

procedure TForm1.OnProcessMessage(Sender: TObject; AName, AData: string);
begin
  Application.MessageBox(PChar(AData), PChar('ReceiveScriptMessage: ' + AName));
end;

procedure TForm1.GoURLClick(Sender: TObject);
begin
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL(Addr.Text);
  //FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FWebView.LoadURL('https://energye.github.io');
  //FWebView.LoadURL('http://www.baidu.com');
  //FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
  //FWebView.LoadHTML('<html><head><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><meta http-equiv="content-type" content="text/html;charset=utf-8"><title>从字符串加载HTML</title></head><body><p>这是一个从字符串加载的HTML。</p></body></html>', '')
end;

end.
