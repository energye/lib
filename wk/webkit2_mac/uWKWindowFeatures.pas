unit uWKWindowFeatures;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, uWkInterface;

type


  TWKWindowFeatures = class(TInterfacedObject, IWKWindowFeatures)
  private
    FData: WKWindowFeatures;
  protected
    function Data(): WKWindowFeatures;
  public
    constructor Create(AData: WKWindowFeatures);
    destructor Destroy; override;
  public
    function MenuBarVisibility: Boolean;
    function StatusBarVisibility: Boolean;
    function ToolbarsVisibility: Boolean;
    function AllowsResizing: Boolean;
    function X: Integer;
    function Y: Integer;
    function Width: Integer;
    function Height: Integer;
  end;


implementation


constructor TWKWindowFeatures.Create(AData: WKWindowFeatures);
begin
  FData := AData;
  inherited Create;
end;

destructor TWKWindowFeatures.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKWindowFeatures.Data(): WKWindowFeatures;
begin
  Result := FData;
end;

function TWKWindowFeatures.MenuBarVisibility: Boolean;
var
  Temp: NSNumber;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Temp := FData.menuBarVisibility;
    if Temp <> nil then
      Result := Boolean(Temp.boolValue);
  end;
end;

function TWKWindowFeatures.StatusBarVisibility: Boolean;
var
  Temp: NSNumber;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Temp := FData.statusBarVisibility;
    if Temp <> nil then
      Result := Boolean(Temp.boolValue);
  end;
end;

function TWKWindowFeatures.ToolbarsVisibility: Boolean;
var
  Temp: NSNumber;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Temp := FData.toolbarsVisibility;
    if Temp <> nil then
      Result := Boolean(Temp.boolValue);
  end;
end;

function TWKWindowFeatures.AllowsResizing: Boolean;
var
  Temp: NSNumber;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Temp := FData.allowsResizing;
    if Temp <> nil then
      Result := Boolean(Temp.boolValue);
  end;
end;

function TWKWindowFeatures.X: Integer;
var
  Temp: NSNumber;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Temp := FData.x;
    if Temp <> nil then
      Result := Integer(Temp.integerValue);
  end;
end;

function TWKWindowFeatures.Y: Integer;
var
  Temp: NSNumber;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Temp := FData.y;
    if Temp <> nil then
      Result := Integer(Temp.integerValue);
  end;
end;

function TWKWindowFeatures.Width: Integer;
var
  Temp: NSNumber;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Temp := FData.width;
    if Temp <> nil then
      Result := Integer(Temp.integerValue);
  end;
end;

function TWKWindowFeatures.Height: Integer;
var
  Temp: NSNumber;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Temp := FData.height;
    if Temp <> nil then
      Result := Integer(Temp.integerValue);
  end;
end;

end.
