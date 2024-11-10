unit uWKScriptMessageHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit, uWkInterface;

type

  NSWKScriptMessageHandler = objcclass(NSObject, WKScriptMessageHandlerProtocol)
  private
    FData: Pointer;
  public
    // Tells the handler that a webpage sent a script message.
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
  end;

  // An interface for receiving messages from JavaScript code running in a webpage.
  // https://developer.apple.com/documentation/webkit/wkscriptmessagehandler?language=objc
  TWKScriptMessageHandler = class
  private
    FData: NSWKScriptMessageHandler;
  public
    constructor Create(event: IReceiveScriptMessageDelegateEvent);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKScriptMessageHandlerProtocol;
    // Freeing the class and the objects it implements.
    procedure Release();
  end;


implementation


procedure NSWKScriptMessageHandler.userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage);
begin
  if FData = nil then
    exit;
  IReceiveScriptMessageDelegateEvent(FData).doReceiveScriptMessage(userContentController, message_);
end;

constructor TWKScriptMessageHandler.Create(event: IReceiveScriptMessageDelegateEvent);
begin
  inherited Create;
  FData := NSWKScriptMessageHandler.alloc.init;
  FData.FData := event;
end;

destructor TWKScriptMessageHandler.Destroy;
begin
  if FData <> nil then
  begin
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKScriptMessageHandler.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWKScriptMessageHandler.Data(): WKScriptMessageHandlerProtocol;
begin
  Result := FData;
end;

end.
