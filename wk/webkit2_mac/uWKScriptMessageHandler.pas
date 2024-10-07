unit uWKScriptMessageHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uWkWebviewEvents, uWKUserContentController;

type

  NSWKScriptMessageHandler = objcclass(NSObject, WKScriptMessageHandlerProtocol)
  private
    FData: Pointer;
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  TWKScriptMessageHandler = class(TInterfacedObject, IWKScriptMessageHandler, IReceiveScriptMessageEvent)
  private
    FData: NSWKScriptMessageHandler;
  protected
    function Data(): WKScriptMessageHandlerProtocol;
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


procedure NSWKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
begin
  if Assigned(FData) then
  begin
    TWKScriptMessageHandler(FData).doReceiveScriptMessage(nil, message_);
  end;
end;

constructor TWKScriptMessageHandler.Create;
begin
  inherited Create;
  FOnProcessMessage := nil;
  FData := NSWKScriptMessageHandler.alloc.init;
  FData.FData := self;
  FData.autorelease;
end;

destructor TWKScriptMessageHandler.Destroy;
begin
  inherited Destroy;
end;

function TWKScriptMessageHandler.Data(): WKScriptMessageHandlerProtocol;
begin
  Result := FData;
end;

procedure TWKScriptMessageHandler.doReceiveScriptMessage(userContentController: IWKUserContentController; message_: WKScriptMessage);
var
  name, body: string;
begin
  if Assigned(FOnProcessMessage) then
  begin
    body := NSStringToString(NSString(message_.body));
    name := NSStringToString(message_.name);
    FOnProcessMessage(self, name, body);
  end;
end;


end.
