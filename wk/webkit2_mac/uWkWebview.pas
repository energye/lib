unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, CGGeometry;

type

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
begin
  inherited Create(AOwner);

  config := WKWebViewConfiguration.alloc.init;
  config.autorelease();

  userContentController := WKUserContentController.alloc.init;
  scriptMessageHandler := WKScriptMessageHandlerProtocol.alloc.init;
  userContentController.addScriptMessageHandler_name(scriptMessageHandler, NSStringUtf8('energy'));
  config.setUserContentController(userContentController);

  frame.origin.x := 0;
  frame.origin.y := 0;
  frame.size.Width := Width;
  frame.size.Height := Height;

  FWebview := WKWebView.alloc.initWithFrame_configuration(frame, config);
  FWebview.autorelease();
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
