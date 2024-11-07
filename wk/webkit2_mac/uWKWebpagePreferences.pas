unit uWKWebpagePreferences;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit;

type


  TWKWebpagePreferences = class
  private
    FData: WKWebpagePreferences;
  public
    constructor Create(AData: WKWebpagePreferences);
    destructor Destroy; override;
    function Data(): WKWebpagePreferences;
  public
    class function New(): TWKWebpagePreferences;
    procedure SetPreferredContentMode(aValue: WKContentMode);
    function PreferredContentMode: WKContentMode;
    procedure SetAllowsContentJavaScript(aValue: LongBool);
    function AllowsContentJavaScript: LongBool;
  end;


implementation

constructor TWKWebpagePreferences.Create(AData: WKWebpagePreferences);
begin
  FData := AData;
end;

destructor TWKWebpagePreferences.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

class function TWKWebpagePreferences.New(): TWKWebpagePreferences;
begin
  Result := Create(WKWebpagePreferences.alloc.init);
end;

function TWKWebpagePreferences.Data(): WKWebpagePreferences;
begin
  Result := FData;
end;

procedure TWKWebpagePreferences.SetPreferredContentMode(aValue: WKContentMode);
begin
  if Assigned(FData) then
  begin
    FData.setPreferredContentMode(aValue);
  end;
end;

function TWKWebpagePreferences.PreferredContentMode: WKContentMode;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.preferredContentMode;
  end;
end;

procedure TWKWebpagePreferences.SetAllowsContentJavaScript(aValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsContentJavaScript(aValue);
  end;
end;

function TWKWebpagePreferences.AllowsContentJavaScript: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsContentJavaScript);
  end;
end;

end.
