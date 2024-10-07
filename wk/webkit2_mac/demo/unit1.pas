unit Unit1;

{$mode objfpc}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  uWebKit, uWkInterface,
  uWkWebview, uWkWebviewParent, uWKScriptMessageHandler, uWKWebViewConfiguration, uWKUIDelegate, uWKPreferences,
  uWKNavigationDelegateProtocol, uWKUserContentController, uWKUserScript, uNSURLRequest, uNSURL;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Label1: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    FNavigationDelegate: NSWKNavigationDelegateProtocol;
    FWebView: IWkWebview;
    FWebViewParent: TWkWebviewParent;
  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
begin
  FWebViewParent := TWkWebviewParent.Create(self);
  FWebViewParent.Parent := self;
  //FWebViewParent.Align := AlClient;
  FWebViewParent.Align := AlCustom;
  FWebViewParent.Top := 50;
  FWebViewParent.Height := Height - 50;
  FWebViewParent.Width := Width;
  FWebViewParent.Anchors := [akTop, akLeft, akRight, akBottom];

  FWebView := TWkWebview.Create();
  FWebView.CreateBrowser(Width, Height - 50);
  FWebViewParent.SetWebview(FWebView);

  FNavigationDelegate := NSWKNavigationDelegateProtocol.alloc.init;
  FWebview.Data().setNavigationDelegate(FNavigationDelegate);
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  //FWebView.LoadURL('http://www.baidu.com');
  FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FWebView.LoadURL('https://energye.github.io');
  //FWebView.LoadURL('http://www.baidu.com');
  //FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
  //FWebView.LoadHTML('<html><head><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><meta http-equiv="content-type" content="text/html;charset=utf-8"><title>从字符串加载HTML</title></head><body><p>这是一个从字符串加载的HTML。</p></body></html>', '')
end;

end.
