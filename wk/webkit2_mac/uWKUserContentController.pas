unit uWKUserContentController;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface;

type

  TRefMessageHandle = record
    Name: string;
    Handler: IWKScriptMessageHandler;
  end;

  // 维护消息处理引用类，因为它是一个集合，所以用数组来引用维护
  TRefMessageHandles = class
  private
    FHandles: array of TRefMessageHandle;
  public
    constructor Create; overload;
    destructor Destroy; override;
    procedure Add(Name: string; Handler: IWKScriptMessageHandler);
    procedure Remove(Name: string);
  end;

  TWKUserContentController = class(TInterfacedObject, IWKUserContentController)
  private
    FData: WKUserContentController;
  protected
    function Data(): WKUserContentController;
  private
    FRefMessageHandles: TRefMessageHandles; // 引用类
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
  inherited Create;
  FRefMessageHandles := TRefMessageHandles.Create;
  FData := WKUserContentController.alloc.init;
end;

constructor TWKUserContentController.Create(AData: WKUserContentController);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKUserContentController.Destroy;
begin
  if FRefMessageHandles <> nil then
  begin
    FRefMessageHandles.Free;
    FRefMessageHandles := nil;
  end;
  if FData <> nil then
  begin
    //FData.release;
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
    FRefMessageHandles.Add(name, scriptMessageHandler);
    FData.addScriptMessageHandler_name(scriptMessageHandler.Data(), NSStringUtf8(name));
  end;
end;

procedure TWKUserContentController.RemoveScriptMessageHandlerForName (name: string);
begin
  if Assigned(FData) then
  begin
    FRefMessageHandles.Remove(name);
    FData.removeScriptMessageHandlerForName(NSStringUtf8(name));
  end;
end;

constructor TRefMessageHandles.Create;
begin
  inherited Create;
  SetLength(FHandles, 0);
end;

destructor TRefMessageHandles.Destroy;
begin
  SetLength(FHandles, 0);
  FHandles := nil;
end;

procedure TRefMessageHandles.Add(Name: string; Handler: IWKScriptMessageHandler);
var
  len: Integer;
  TempMessageHandle: TRefMessageHandle;
begin
  len := Length(FHandles);
  SetLength(FHandles, len + 1);
  TempMessageHandle.Name := Name;
  TempMessageHandle.Handler := Handler;
  FHandles[len] := TempMessageHandle;
end;

procedure TRefMessageHandles.Remove(Name: string);
var
  idx, deleteIndex: Integer;
  TempMessageHandle: TRefMessageHandle;
begin
  for idx := 0 to Length(FHandles) -1 do
  begin
    TempMessageHandle := FHandles[idx];
    if TempMessageHandle.Name = Name then
    begin
      deleteIndex := idx;
      break;
    end;
  end;
  for idx := deleteIndex to Length(FHandles) - 2 do
  begin
    FHandles[idx] := FHandles[idx + 1]
  end;
  SetLength(FHandles, Length(FHandles) - 1);
end;

end.
