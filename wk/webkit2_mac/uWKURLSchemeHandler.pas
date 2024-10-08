unit uWKURLSchemeHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uWkWebviewEvents;

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
  private
    FOnProcessMessage: TWkProcessMessageEvent;
  public
    constructor Create; overload;
    destructor Destroy; override;
  protected
    procedure doReceiveScriptMessage(userContentController: IWKUserContentController; message_: WKScriptMessage);
  published
    property OnProcessMessage: TWkProcessMessageEvent read FOnProcessMessage write FOnProcessMessage;
  end;


implementation


procedure NSWKURLSchemeHandler.webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin

end;

procedure NSWKURLSchemeHandler.webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin

end;


constructor TWKURLSchemeHandler.Create;
begin
  inherited Create;
  FOnProcessMessage := nil;
  FData := NSWKURLSchemeHandler.alloc.init;
  FData.FData := self;
  FData.autorelease;
end;

destructor TWKURLSchemeHandler.Destroy;
begin
  inherited Destroy;
end;

function TWKURLSchemeHandler.Data(): WKURLSchemeHandlerProtocol;
begin
  Result := FData;
end;

procedure TWKURLSchemeHandler.doReceiveScriptMessage(userContentController: IWKUserContentController; message_: WKScriptMessage);
var
  name, body: string;
begin
  if Assigned(FOnProcessMessage) then
  begin
    body := NSStringToString(NSString(message_.body));
    name := NSStringToString(message_.name);
    FOnProcessMessage(userContentController, name, body);
  end;
end;


end.
