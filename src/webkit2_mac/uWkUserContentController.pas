unit uWkUserContentController;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkScriptMessageHandler;

type

  // An object for managing interactions between JavaScript code and your web view, and for filtering content in your web view.
  // https://developer.apple.com/documentation/webkit/wkusercontentcontroller?language=objc
  TWkUserContentController = class
  private
    FData: WKUserContentController;
  public
    constructor Create(AData: WKUserContentController);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKUserContentController;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an WKUserContentController object.
    class function New(): TWkUserContentController;
    // The user scripts associated with the user content controller.
    function UserScripts: TStrings;
    // Injects the specified script into the webpage’s content.
    procedure AddUserScript (userScript: WKUserScript);
    // Removes all user scripts from the web view.
    procedure RemoveAllUserScripts;
    // Installs a message handler that you can call from your JavaScript code.
    procedure AddScriptMessageHandlerName (scriptMessageHandler: TWKScriptMessageHandler; name: string);
    // Uninstalls the custom message handler with the specified name from your JavaScript code.
    procedure RemoveScriptMessageHandlerForName (name: string);
  end;


implementation

constructor TWkUserContentController.Create(AData: WKUserContentController);
begin
  FData := AData;
  inherited Create;
end;

destructor TWkUserContentController.Destroy;
begin
  if FData <> nil then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkUserContentController.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWkUserContentController.New(): TWkUserContentController;
begin
  Result := Create(WKUserContentController.alloc.init);
end;

function TWkUserContentController.Data(): WKUserContentController;
begin
  Result := FData;
end;

function TWkUserContentController.UserScripts: TStrings;
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

procedure TWkUserContentController.AddUserScript(userScript: WKUserScript);
begin
  if Assigned(FData) then
  begin
    FData.addUserScript(userScript);
  end;
end;

procedure TWkUserContentController.RemoveAllUserScripts;
begin
  if Assigned(FData) then
  begin
    FData.removeAllUserScripts;
  end;
end;

procedure TWkUserContentController.AddScriptMessageHandlerName (scriptMessageHandler: TWKScriptMessageHandler; name: string);
begin
  if Assigned(FData) then
  begin
    FData.addScriptMessageHandler_name(scriptMessageHandler.Data(), NSStringUtf8(name));
  end;
end;

procedure TWkUserContentController.RemoveScriptMessageHandlerForName (name: string);
begin
  if Assigned(FData) then
  begin
    FData.removeScriptMessageHandlerForName(NSStringUtf8(name));
  end;
end;

end.
