unit uWKNavigationDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface;

type

  NSWKNavigationDelegate = objcclass(NSObject, WKNavigationDelegateProtocol)
  private
    FData: Pointer;
  public
    procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
  end;

  TWKNavigationDelegate = class(TInterfacedObject, IWKNavigationDelegate)
  private
    FData: NSWKNavigationDelegate;
  protected
    function Data(): WKNavigationDelegateProtocol;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    procedure StartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure ReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure CommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
  end;


implementation

procedure NSWKNavigationDelegate.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegate.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegate.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

procedure NSWKNavigationDelegate.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegate.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegate.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

constructor TWKNavigationDelegate.Create;
begin
  inherited Create;
  FData := NSWKNavigationDelegate.alloc.init;
  FData.FData := self;
end;

destructor TWKNavigationDelegate.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.FData := nil;
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationDelegate.Data(): WKNavigationDelegateProtocol;
begin
  Result := FData;
end;

procedure TWKNavigationDelegate.StartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegate.ReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegate.FailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

procedure TWKNavigationDelegate.CommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegate.FinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegate.FailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

end.
