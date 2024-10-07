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
    FScriptMessageHandler: NSWKScriptMessageHandler;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    procedure doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
  public
    function ScriptMessageHandler(): NSWKScriptMessageHandler;
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
  FScriptMessageHandler := NSWKScriptMessageHandler.alloc.init;
  FScriptMessageHandler.FData := self;
end;

destructor TWKScriptMessageHandler.Destroy;
begin
  if Assigned(FScriptMessageHandler) then
  begin
    FScriptMessageHandler.FData := nil;
    FScriptMessageHandler.release;
    FScriptMessageHandler := nil;
  end;
  inherited Destroy;
end;

function TWKScriptMessageHandler.ScriptMessageHandler(): NSWKScriptMessageHandler;
begin
  Result := FScriptMessageHandler;
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
