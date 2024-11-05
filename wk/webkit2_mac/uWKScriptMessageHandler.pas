unit uWKScriptMessageHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface;

type

  NSWKScriptMessageHandler = objcclass(NSObject, WKScriptMessageHandlerProtocol)
  private
    FData: Pointer;
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  TWKScriptMessageHandler = class
  private
    FData: NSWKScriptMessageHandler;
  public
    constructor Create(event: IReceiveScriptMessageEvent);
    destructor Destroy; override;
    function Data(): WKScriptMessageHandlerProtocol;
  end;


implementation


procedure NSWKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
begin
  if FData = nil then
    exit;
  IReceiveScriptMessageEvent(FData).doReceiveScriptMessage(userContentController, message_);
end;

constructor TWKScriptMessageHandler.Create(event: IReceiveScriptMessageEvent);
begin
  inherited Create;
  FData := NSWKScriptMessageHandler.alloc.init;
  FData.FData := event;
end;

destructor TWKScriptMessageHandler.Destroy;
begin
  if FData <> nil then
  begin
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKScriptMessageHandler.Data(): WKScriptMessageHandlerProtocol;
begin
  Result := FData;
end;

end.
