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

  TWKURLSchemeHandler = class(TInterfacedObject, IWKURLSchemeHandler)
  private
    FData: NSWKURLSchemeHandler;
  protected
    function Data(): WKURLSchemeHandlerProtocol;
  public
    constructor Create(event: IWKURLSchemeHandlerEvent);
    destructor Destroy; override;
  end;


implementation


procedure NSWKURLSchemeHandler.webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerEvent(FData).doStartURLSchemeTask(webView, urlSchemeTask);
end;

procedure NSWKURLSchemeHandler.webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerEvent(FData).doStopURLSchemeTask(webView, urlSchemeTask);
end;


constructor TWKURLSchemeHandler.Create(event: IWKURLSchemeHandlerEvent);
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
