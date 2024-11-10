unit uWKUserContentController;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWKScriptMessageHandler;

type

  TWKUserContentController = class
  private
    FData: WKUserContentController;
  public
    constructor Create(AData: WKUserContentController);
    destructor Destroy; override;
    function Data(): WKUserContentController;
    // Release the current object and Data pointer
    procedure Release();
  public
    class function New(): TWKUserContentController;
    function UserScripts: TStrings;
    procedure AddUserScript (userScript: WKUserScript);
    procedure RemoveAllUserScripts;
    procedure AddScriptMessageHandlerName (scriptMessageHandler: TWKScriptMessageHandler; name: string);
    procedure RemoveScriptMessageHandlerForName (name: string);
  end;


implementation

constructor TWKUserContentController.Create(AData: WKUserContentController);
begin
  FData := AData;
  inherited Create;
end;

destructor TWKUserContentController.Destroy;
begin
  if FData <> nil then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKUserContentController.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKUserContentController.New(): TWKUserContentController;
begin
  Result := Create(WKUserContentController.alloc.init);
end;

function TWKUserContentController.Data(): WKUserContentController;
begin
  Result := FData;
end;

function TWKUserContentController.UserScripts: TStrings;
var
  ResultData: TStringList;
  TempUserScripts: NSArray;
  Idx, TempCount: Integer;
  TempData: id;
begin
  ResultData := nil;
  if Assigned(FData) then
  begin
    try
      ResultData := TStringList.Create;
      TempUserScripts := FData.userScripts;
      if Assigned(TempUserScripts) then
      begin
        TempCount := Integer(TempUserScripts.count);
        for Idx := 0 to TempCount - 1 do
        begin
          TempData := TempUserScripts.objectAtIndex(NSUInteger(Idx));
          ResultData.Add(NSStringToString(TempData));
        end;
        TempUserScripts.release;
      end;
    finally
      TempUserScripts := nil;
    end;
  end;
  Result := ResultData;
end;

procedure TWKUserContentController.AddUserScript(userScript: WKUserScript);
begin
  if Assigned(FData) then
  begin
    FData.addUserScript(userScript);
  end;
end;

procedure TWKUserContentController.RemoveAllUserScripts;
begin
  if Assigned(FData) then
  begin
    FData.removeAllUserScripts;
  end;
end;

procedure TWKUserContentController.AddScriptMessageHandlerName (scriptMessageHandler: TWKScriptMessageHandler; name: string);
begin
  if Assigned(FData) then
  begin
    FData.addScriptMessageHandler_name(scriptMessageHandler.Data(), NSStringUtf8(name));
  end;
end;

procedure TWKUserContentController.RemoveScriptMessageHandlerForName (name: string);
begin
  if Assigned(FData) then
  begin
    FData.removeScriptMessageHandlerForName(NSStringUtf8(name));
  end;
end;

end.
