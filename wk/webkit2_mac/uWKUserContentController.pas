unit uWKUserContentController;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface;

type

  TWKUserContentController = class(TInterfacedObject, IWKUserContentController)
  private
    FData: WKUserContentController;
  protected
    function Data(): WKUserContentController;
  public
    constructor Create; overload;
    constructor Create(AData: WKUserContentController);
    destructor Destroy; override;
  public
    function UserScripts: TStrings;
    procedure AddUserScript (userScript: IWKUserScript);
    procedure RemoveAllUserScripts;
    procedure AddScriptMessageHandlerName (scriptMessageHandler: IWKScriptMessageHandler; name: string);
    procedure RemoveScriptMessageHandlerForName (name: string);
  end;


implementation


constructor TWKUserContentController.Create;
begin
  FData := WKUserContentController.alloc.init;
end;

constructor TWKUserContentController.Create(AData: WKUserContentController);
begin
  FData := AData;
end;

destructor TWKUserContentController.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
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

procedure TWKUserContentController.AddUserScript (userScript: IWKUserScript);
begin
  if Assigned(FData) then
  begin
    FData.addUserScript(userScript.Data());
  end;
end;

procedure TWKUserContentController.RemoveAllUserScripts;
begin
  if Assigned(FData) then
  begin
    FData.removeAllUserScripts;
  end;
end;

procedure TWKUserContentController.AddScriptMessageHandlerName (scriptMessageHandler: IWKScriptMessageHandler; name: string);
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
