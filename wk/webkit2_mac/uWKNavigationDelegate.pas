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

  TWKNavigationDelegate = class(TInterfacedObject, IWKNavigationDelegate, IWKNavigationDelegateEvent)
  private
    FData: NSWKNavigationDelegate;
  protected
    function Data(): WKNavigationDelegateProtocol;
  private
    FOnStartProvisionalNavigation: TWkStartProvisionalNavigation;
    FOnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation;
    FOnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError;
    FOnCommitNavigation: TWkCommitNavigation;
    FOnFinishNavigation: TWkFinishNavigation;
    FOnFailNavigationWithError: TWkFailNavigationWithError;
  public
    constructor Create; overload;
    constructor Create(event: IWKNavigationDelegateEvent);
    destructor Destroy; override;
  protected
    procedure doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
  published
    property OnStartProvisionalNavigation: TWkStartProvisionalNavigation read FOnStartProvisionalNavigation write FOnStartProvisionalNavigation;
    property OnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation read FOnReceiveServerRedirectForProvisionalNavigation write FOnReceiveServerRedirectForProvisionalNavigation;
    property OnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError read FOnFailProvisionalNavigationWithError write FOnFailProvisionalNavigationWithError;
    property OnCommitNavigation: TWkCommitNavigation read FOnCommitNavigation write FOnCommitNavigation;
    property OnFinishNavigation: TWkFinishNavigation read FOnFinishNavigation write FOnFinishNavigation;
    property OnFailNavigationWithError: TWkFailNavigationWithError read FOnFailNavigationWithError write FOnFailNavigationWithError;
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

constructor TWKNavigationDelegate.Create;
begin
  Create(self);
end;

constructor TWKNavigationDelegate.Create(event: IWKNavigationDelegateEvent);
begin
  FOnStartProvisionalNavigation := nil;
  FOnReceiveServerRedirectForProvisionalNavigation := nil;
  FOnFailProvisionalNavigationWithError := nil;
  FOnCommitNavigation := nil;
  FOnFinishNavigation := nil;
  FOnFailNavigationWithError := nil;
  FData := NSWKNavigationDelegate.alloc.init;
  FData.FData := event;
end;

destructor TWKNavigationDelegate.Destroy;
begin
  FOnStartProvisionalNavigation := nil;
  FOnReceiveServerRedirectForProvisionalNavigation := nil;
  FOnFailProvisionalNavigationWithError := nil;
  FOnCommitNavigation := nil;
  FOnFinishNavigation := nil;
  FOnFailNavigationWithError := nil;
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

procedure TWKNavigationDelegate.doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnStartProvisionalNavigation) then
  begin
    FOnStartProvisionalNavigation(nil, navigation);
  end;
end;

procedure TWKNavigationDelegate.doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnReceiveServerRedirectForProvisionalNavigation) then
  begin
    FOnReceiveServerRedirectForProvisionalNavigation(nil, navigation);
  end;
end;

procedure TWKNavigationDelegate.doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailProvisionalNavigationWithError) then
  begin
    FOnFailProvisionalNavigationWithError(nil, navigation, NSStringToString(error.localizedDescription));
  end;
end;

procedure TWKNavigationDelegate.doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnCommitNavigation) then
  begin
    FOnCommitNavigation(nil, navigation);
  end;
end;

procedure TWKNavigationDelegate.doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnFinishNavigation) then
  begin
    FOnFinishNavigation(nil, navigation);
  end;
end;

procedure TWKNavigationDelegate.doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailNavigationWithError) then
  begin
    FOnFailNavigationWithError(nil, navigation, NSStringToString(error.localizedDescription));
  end;
end;

end.
