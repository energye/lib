unit uWKNavigation;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit;

type


  TWKNavigation = class
  private
    FData: WKNavigation;
  public
    constructor Create(AData: WKNavigation);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKNavigation;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    function EffectiveContentMode: WKContentMode;
  end;


implementation


constructor TWKNavigation.Create(AData: WKNavigation);
begin
  FData := AData;
end;

destructor TWKNavigation.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKNavigation.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWKNavigation.Data(): WKNavigation;
begin
  Result := FData;
end;

function TWKNavigation.EffectiveContentMode: WKContentMode;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.effectiveContentMode;
  end;
end;

end.
