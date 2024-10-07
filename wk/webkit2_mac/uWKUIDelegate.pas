unit uWKUIDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface;

type

  NSWKUIDelegate = objcclass(NSObject, WKUIDelegateProtocol)
  private
    FData: Pointer;
  public
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
  end;

  TWKUIDelegate = class(TInterfacedObject, IWKUIDelegate)
  private
    FData: NSWKUIDelegate;
  protected
    function Data(): WKUIDelegateProtocol;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
  end;


implementation


function NSWKUIDelegate.webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  Result := webView;
end;

constructor TWKUIDelegate.Create;
begin
  FData := NSWKUIDelegate.alloc.init;
  FData.FData := self;
  FData.autorelease;
end;

destructor TWKUIDelegate.Destroy;
begin
  //if Assigned(FData) then
  //begin
  //  FData.FData := nil;
  //  FData.release;
  //  FData := nil;
  //end;
  inherited Destroy;
end;

function TWKUIDelegate.Data(): WKUIDelegateProtocol;
begin
  Result := FData;
end;


end.
