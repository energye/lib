unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils,
  CocoaAll, CocoaUtils, uWebKit, CGGeometry;

type

  TWkWebview = class(TComponent)
  private
    FWebview: WKWebView;
  public
    constructor Create(AOwner: TComponent; Width, Height: Integer);
    destructor Destroy; override;

  end;

implementation

constructor TWkWebview.Create(AOwner: TComponent; Width, Height: Integer);
var
  frame: CGRect;
  config: WKWebViewConfiguration;
  LReq: NSURLRequest;
begin
  inherited Create(AOwner);

  config := WKWebViewConfiguration.alloc.init;
  config.autorelease();

  frame.origin.x := 0;
  frame.origin.y := 0;
  frame.size.width := Width;
  frame.size.height := Height;

  FWebview := WKWebView.alloc.initWithFrame_configuration(frame, config);
  FWebview.autorelease();

  LReq := NSURLRequest.requestWithURL(NSURL.URLWithString(NSStringUTF8('https://www.baidu.com')));
  FWebview.loadRequest(LReq);
end;

destructor TWkWebview.Destroy;
begin
  //if FWebview <> nil then
  //begin
  //  FWebview.release;
  //end;
  inherited Destroy;
end;

end.
