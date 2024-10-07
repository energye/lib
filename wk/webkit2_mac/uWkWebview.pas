unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, CGGeometry,
  uWebKit, uWkInterface, uWkWebviewEvents, uWKScriptMessageHandler;

type

  TWkWebview = class(TComponent, IWkWebviewDelegateEvent)
  private
    FData: WKWebView;
  private
    FOnProcessMessage: TWkProcessMessageEvent;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure CreateBrowser(Width, Height: integer);
    procedure LoadHTML(AHtml, ABaseURL: string);
    procedure LoadURL(AURL: string);
  public
    property WebView: WKWebView read FData;
    property OnProcessMessage: TWkProcessMessageEvent read FOnProcessMessage write FOnProcessMessage;
  end;


implementation

constructor TWkWebview.Create(AOwner: TComponent);
begin
  FData := nil;
  inherited Create(AOwner);
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

end.
