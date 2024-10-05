unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs,
  uWkWebview, uWkWebviewParent;

type

  { TForm1 }

  TForm1 = class(TForm)
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    FWebView: TWkWebview;
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
  FWebViewParent.Align := AlClient;
  //FWebViewParent.Align := AlCustom;
  //FWebViewParent.Top:=50;
  //FWebViewParent.Left:=50;

  FWebView := TWkWebview.Create(self, Width, Height);
  FWebViewParent.SetWebview(FWebView);
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  //FWebView.LoadURL('https://www.baidu.com');
  FWebView.LoadURL('file:///Users/yanghy/app/github.com/energye/golcl/samples/miniwebview/test.html');
  //FWebView.LoadHTML('<html><head><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><meta http-equiv="content-type" content="text/html;charset=utf-8"><title>从字符串加载HTML</title></head><body><p>这是一个从字符串加载的HTML。</p></body></html>', '')
end;

end.

