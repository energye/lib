unit uWKNavigation;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, uWkInterface;

type


  TWKNavigation = class(TInterfacedObject, IWKNavigation)
  private
    FData: WKNavigation;
  protected
    function Data(): WKNavigation;
  public
    constructor Create(AData: WKNavigation);
    destructor Destroy; override;
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
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
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
