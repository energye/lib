unit uWKScriptMessageHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uWKUserContentController;

type

  NSWKScriptMessageHandler = objcclass(NSObject, WKScriptMessageHandlerProtocol)
  public
    FData: Pointer;
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  TWKScriptMessageHandler = class(TInterfacedObject, IWKScriptMessageHandler)
  private
    FData: NSWKScriptMessageHandler;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): WKScriptMessageHandlerProtocol;
  public
    procedure doReceiveScriptMessage(userContentController: IWKUserContentController; message_: WKScriptMessage);
  published
    //property OnReceiveScriptMessage;
  end;


implementation


procedure NSWKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
begin
  if Assigned(FData) then
  begin
    TWKScriptMessageHandler(FData).doReceiveScriptMessage(TWKUserContentController.Create(userContentController), message_);
  end;
end;

constructor TWKScriptMessageHandler.Create;
begin
  FData := NSWKScriptMessageHandler.alloc.init;
  FData.FData := self;
end;

destructor TWKScriptMessageHandler.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.FData := nil;
    FData.release;
    FData := nil;
  end;
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
  body := NSStringToString(NSString(message_.body));
  name := NSStringToString(message_.name);
  Application.MessageBox(PChar(body), PChar('ReceiveScriptMessage: ' + name));
end;


end.
