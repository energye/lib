unit uWKNavigationDelegateProtocol;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit;

type

  NSWKNavigationDelegateProtocol = objcclass(NSObject, WKNavigationDelegateProtocol)
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

  TWKNavigationDelegateProtocol = class(TInterfacedObject)
  private
    FData: NSWKNavigationDelegateProtocol;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): WKNavigationDelegateProtocol;
  public
    procedure StartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure ReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure CommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure FailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
  end;


implementation

procedure NSWKNavigationDelegateProtocol.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegateProtocol.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegateProtocol.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

procedure NSWKNavigationDelegateProtocol.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegateProtocol.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure NSWKNavigationDelegateProtocol.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

constructor TWKNavigationDelegateProtocol.Create;
begin
  FData := NSWKNavigationDelegateProtocol.alloc.init;
  FData.FData := self;
end;

destructor TWKNavigationDelegateProtocol.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.FData := nil;
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationDelegateProtocol.Data(): WKNavigationDelegateProtocol;
begin
  Result := FData;
end;

procedure TWKNavigationDelegateProtocol.StartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegateProtocol.ReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegateProtocol.FailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

procedure TWKNavigationDelegateProtocol.CommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegateProtocol.FinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin

end;

procedure TWKNavigationDelegateProtocol.FailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin

end;

end.
