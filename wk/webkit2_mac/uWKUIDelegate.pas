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
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptAlertCallback);
    procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptConfirmCallback);
    procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptTextInputCallback);
    procedure webViewDidClose(webView: WKWebView);
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
  Result := nil;
  if FData <> nil then
  begin
    Result := IWKUIDelegateEvent(FData).doCreateWebView(webView, configuration, navigationAction, windowFeatures);
  end;
end;

procedure NSWKUIDelegate.webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString;
  frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptAlertCallback);
begin
  if FData <> nil then
  begin
    IWKUIDelegateEvent(FData).doRunJavaScriptAlert(webView, message_, frame);
  end;
  completionHandler();
end;

procedure NSWKUIDelegate.webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString;
  frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptConfirmCallback);
var
  TempSuccess: Boolean;
begin
  if FData <> nil then
  begin
    TempSuccess := IWKUIDelegateEvent(FData).doRunJavaScriptConfirmCompletion(webView, message_, frame);
  end;
  completionHandler(ObjcBool(TempSuccess));
end;

procedure NSWKUIDelegate.webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView;
  prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateJavaScriptTextInputCallback);
var
  TempResult: string;
begin
  TempResult := '';
  if FData <> nil then
  begin
    TempResult := IWKUIDelegateEvent(FData).doRunJavaScriptTextInputCompletion(webView, prompt, defaultText, frame);
  end;
  completionHandler(NSStringUtf8(TempResult));
end;

procedure NSWKUIDelegate.webViewDidClose(webView: WKWebView);
begin
  if FData <> nil then
  begin
    IWKUIDelegateEvent(FData).doWebViewDidClose(webView);
  end;
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
    FData.release;
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
