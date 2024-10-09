unit uWKUIDelegate;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface;

type

  NSWKUIDelegate = objcclass(NSViewController, WKUIDelegateProtocol)
  private
    FData: Pointer;
  public
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
    procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
    procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
  end;

  TWKUIDelegate = class(TInterfacedObject, IWKUIDelegate)
  private
    FData: NSWKUIDelegate;
  protected
    function Data(): WKUIDelegateProtocol;
  public
    constructor Create(event: IWKUIDelegateEvent);
    destructor Destroy; override;
  public
  end;


implementation


function NSWKUIDelegate.webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView;
  configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  Result := webView;
end;

procedure NSWKUIDelegate.webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString;
  frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
begin
  completionHandler();
end;

procedure NSWKUIDelegate.webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString;
  frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
begin
  completionHandler();
end;
procedure NSWKUIDelegate.webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView;
  prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback);
begin
  completionHandler();
end;

constructor TWKUIDelegate.Create(event: IWKUIDelegateEvent);
begin
  FData := NSWKUIDelegate.alloc.init;
  FData.FData := event;
end;

destructor TWKUIDelegate.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKUIDelegate.Data(): WKUIDelegateProtocol;
begin
  Result := FData;
end;


end.
