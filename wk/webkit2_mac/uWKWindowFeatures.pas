unit uWKWindowFeatures;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type

  // Display-related attributes that a webpage requests for its window.
  // https://developer.apple.com/documentation/webkit/wkwindowfeatures?language=objc
  TWKWindowFeatures = class
  private
    FData: WKWindowFeatures;
  public
    constructor Create(AData: WKWindowFeatures);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKWindowFeatures;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // A Boolean value that indicates whether the webpage requests a visible menu bar.
    function MenuBarVisibility: Boolean;
    // A Boolean value that indicates whether the webpage requested a visible status bar.
    function StatusBarVisibility: Boolean;
    // A Boolean value that indicates whether the webpage requested a visible toolbar.
    function ToolbarsVisibility: Boolean;
    // A Boolean value that indicates whether to make the containing window window resizable.
    function AllowsResizing: Boolean;
    // The requested x-coordinate of the containing window.
    function X: Integer;
    // The requested y-coordinate of the containing window.
    function Y: Integer;
    // The requested width of the containing window.
    function Width: Integer;
    // The requested height of the containing window.
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
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKWindowFeatures.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
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
