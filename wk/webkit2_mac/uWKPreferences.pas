unit uWKPreferences;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CGBase, CocoaUtils,
  uWebKit;

type

  TWKPreferences = class
  private
    FData: WKPreferences;
  public
    constructor Create(AData: WKPreferences);
    destructor Destroy; override;
    function Data(): WKPreferences;
    procedure Release();
  public
    class function New(): TWKPreferences;
    procedure SetMinimumFontSize(newValue: double);
    function MinimumFontSize: double;
    procedure SetJavaScriptEnabled(newValue: LongBool);
    function JavaScriptEnabled: LongBool;
    procedure SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
    function JavaScriptCanOpenWindowsAutomatically: LongBool;
    procedure SetJavaEnabled(newValue: LongBool);
    function JavaEnabled: LongBool;
    procedure SetPlugInsEnabled(newValue: LongBool);
    function PlugInsEnabled: LongBool;
    procedure SetTabFocusesLinks(newValue: LongBool);
    procedure SetFraudulentWebsiteWarningEnabled(newValue: LongBool);
    procedure SetTextInteractionEnabled(newValue: LongBool); // 11.3
    procedure SetElementFullscreenEnabled(newValue: LongBool); // 12.3
    procedure SetValueForKey(value: LongBool; key: string);
  end;


implementation

constructor TWKPreferences.Create(AData: WKPreferences);
begin
  FData := AData;
  inherited Create();
end;

destructor TWKPreferences.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKPreferences.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKPreferences.New(): TWKPreferences;
begin
  Result := Create(WKPreferences.alloc.init);
end;

function TWKPreferences.Data(): WKPreferences;
begin
  Result := FData;
end;

procedure TWKPreferences.SetMinimumFontSize(newValue: double);
begin
  if Assigned(FData) then
  begin
    FData.setMinimumFontSize(CGFloat(newValue));
  end;
end;

function TWKPreferences.MinimumFontSize: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.minimumFontSize());
  end;
end;

procedure TWKPreferences.SetTabFocusesLinks(newValue: LongBool);
begin
    FData.setTabFocusesLinks(ObjCBOOL(newValue));
end;

procedure TWKPreferences.SetJavaScriptEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaScriptEnabled(ObjCBOOL(newValue));
  end;
end;

function TWKPreferences.JavaScriptEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaScriptEnabled);
  end;
end;

procedure TWKPreferences.SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaScriptCanOpenWindowsAutomatically(ObjCBOOL(newValue));
  end;
end;

function TWKPreferences.JavaScriptCanOpenWindowsAutomatically: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaScriptCanOpenWindowsAutomatically);
  end;
end;

procedure TWKPreferences.SetJavaEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaEnabled(ObjCBOOL(newValue));
  end;
end;

function TWKPreferences.JavaEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaEnabled);
  end;
end;

procedure TWKPreferences.SetPlugInsEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setPlugInsEnabled(ObjCBOOL(newValue));
  end;
end;

function TWKPreferences.PlugInsEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.plugInsEnabled);
  end;
end;

procedure TWKPreferences.SetFraudulentWebsiteWarningEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setFraudulentWebsiteWarningEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWKPreferences.SetTextInteractionEnabled(newValue: LongBool);// 11.3
begin
  if Assigned(FData) then
  begin
    FData.setTextInteractionEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWKPreferences.SetElementFullscreenEnabled(newValue: LongBool);// 12.3
begin
  if Assigned(FData) then
  begin
    FData.setElementFullscreenEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWKPreferences.SetValueForKey(value: LongBool; key: string);
begin
  if Assigned(FData) then
  begin
    FData.setValue_forKey(ObjCBOOL(value), StrToNSString(key));
  end;
end;

end.
