unit uWKURLSchemeHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit, uWkInterface;

type

  NSWKURLSchemeHandler = objcclass(NSObject, WKURLSchemeHandlerProtocol)
  private
    FData: Pointer;
  public
    procedure webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    procedure webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
  end;

  TWKURLSchemeHandler = class
  private
    FData: NSWKURLSchemeHandler;
  public
    constructor Create(event: IWKURLSchemeHandlerDelegateEvent);
    destructor Destroy; override;
    function Data(): WKURLSchemeHandlerProtocol;
  end;


implementation


procedure NSWKURLSchemeHandler.webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerDelegateEvent(FData).doStartURLSchemeTask(webView, urlSchemeTask);
end;

procedure NSWKURLSchemeHandler.webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerDelegateEvent(FData).doStopURLSchemeTask(webView, urlSchemeTask);
end;


constructor TWKURLSchemeHandler.Create(event: IWKURLSchemeHandlerDelegateEvent);
begin
  inherited Create;
  FData := NSWKURLSchemeHandler.alloc.init;
  FData.FData := event;
end;

destructor TWKURLSchemeHandler.Destroy;
begin
  if FData <> nil then
  begin
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKURLSchemeHandler.Data(): WKURLSchemeHandlerProtocol;
begin
  Result := FData;
end;

end.
