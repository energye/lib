unit uWKPreferences;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit;

type

  TWKPreferences = class(TInterfacedObject)
  private
    FData: WKPreferences;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): WKPreferences;
  public
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
  end;


implementation

constructor TWKPreferences.Create;
begin
  FData := WKPreferences.alloc.init;
end;

destructor TWKPreferences.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKPreferences.Data(): WKPreferences;
begin
  Result := FData;
end;

procedure TWKPreferences.SetMinimumFontSize(newValue: double);
begin

end;

function TWKPreferences.MinimumFontSize: double;
begin

end;

procedure TWKPreferences.SetJavaScriptEnabled(newValue: LongBool);
begin

end;

function TWKPreferences.JavaScriptEnabled: LongBool;
begin

end;

procedure TWKPreferences.SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
begin

end;

function TWKPreferences.JavaScriptCanOpenWindowsAutomatically: LongBool;
begin

end;

procedure TWKPreferences.SetJavaEnabled(newValue: LongBool);
begin

end;

function TWKPreferences.JavaEnabled: LongBool;
begin

end;

procedure TWKPreferences.SetPlugInsEnabled(newValue: LongBool);
begin

end;

function TWKPreferences.PlugInsEnabled: LongBool;
begin

end;

end.
