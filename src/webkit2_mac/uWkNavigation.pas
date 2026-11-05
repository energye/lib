unit uWkNavigation;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit;

type

  // An object that tracks the loading progress of a webpage.
  // https://developer.apple.com/documentation/webkit/wknavigation?language=objc
  TWkNavigation = class
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
    // The content mode WebKit uses to load the webpage.
    function EffectiveContentMode: WKContentMode;
  end;


implementation


constructor TWkNavigation.Create(AData: WKNavigation);
begin
  FData := AData;
end;

destructor TWkNavigation.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkNavigation.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkNavigation.Data(): WKNavigation;
begin
  Result := FData;
end;

function TWkNavigation.EffectiveContentMode: WKContentMode;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.effectiveContentMode;
  end;
end;

end.
