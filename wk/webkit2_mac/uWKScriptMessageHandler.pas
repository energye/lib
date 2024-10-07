unit uWKScriptMessageHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit;

type

  NSWKScriptMessageHandler = objcclass(NSObject, WKScriptMessageHandlerProtocol)
  public
    FData: Pointer;
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  TWKScriptMessageHandler = class(TInterfacedObject)
  private
    FData: NSWKScriptMessageHandler;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): NSWKScriptMessageHandler;
  public
    procedure doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
  published
    //property OnReceiveScriptMessage;
  end;


implementation


procedure NSWKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
var
  name, body: string;
begin
  body := NSStringToString(NSString(message_.body));
  name := NSStringToString(message_.name);
  Application.MessageBox(PChar(body), PChar('ReceiveScriptMessage: ' + name));
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

function TWKScriptMessageHandler.Data(): NSWKScriptMessageHandler;
begin
  Result := FData;
end;

procedure TWKScriptMessageHandler.doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
var
  name, body: string;
begin
  body := NSStringToString(NSString(message_.body));
  name := NSStringToString(message_.name);
  Application.MessageBox(PChar(body), PChar('ReceiveScriptMessage: ' + name));
end;


end.
