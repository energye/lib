unit uWKNavigationDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface, uWkWebviewEvents, uWkWebview;

type

  NSWKNavigationDelegate = objcclass(NSViewController, WKNavigationDelegateProtocol)
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
    constructor Create(event: IWKNavigationDelegateEvent);
    destructor Destroy; override;
  end;


implementation

procedure NSWKNavigationDelegate.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doStartProvisionalNavigation(webView, navigation);
  end;
end;

procedure NSWKNavigationDelegate.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doReceiveServerRedirectForProvisionalNavigation(webView, navigation);
  end;
end;

procedure NSWKNavigationDelegate.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doFailProvisionalNavigationWithError(webView, navigation, error);
  end;
end;

procedure NSWKNavigationDelegate.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doCommitNavigation(webView, navigation);
  end;
end;

procedure NSWKNavigationDelegate.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doFinishNavigation(webView, navigation);
  end;
end;

procedure NSWKNavigationDelegate.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FData) then
  begin
    IWKNavigationDelegateEvent(FData).doFailNavigationWithError(webView, navigation, error);
  end;
end;

constructor TWKNavigationDelegate.Create(event: IWKNavigationDelegateEvent);
begin
  inherited Create;
  FData := NSWKNavigationDelegate.alloc.init;
  FData.FData := event;
end;

destructor TWKNavigationDelegate.Destroy;
begin
  if FData <> nil then
  begin
    FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationDelegate.Data(): WKNavigationDelegateProtocol;
begin
  Result := FData;
end;

end.
