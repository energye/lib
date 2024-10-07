unit uWKUIDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit;

type

  NSWKUIDelegate = objcclass(NSObject, WKUIDelegateProtocol)
  public
    FData: Pointer;
  public
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
  end;

  TWKUIDelegate = class(TInterfacedObject)
  private
    FData: NSWKUIDelegate;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): NSWKUIDelegate;
  public
  end;


implementation


function NSWKUIDelegate.webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin

end;

constructor TWKUIDelegate.Create;
begin
  FData := NSWKUIDelegate.alloc.init;
  FData.FData := self;
end;

destructor TWKUIDelegate.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.FData := nil;
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKUIDelegate.Data(): NSWKUIDelegate;
begin
  Result := FData;
end;


end.
