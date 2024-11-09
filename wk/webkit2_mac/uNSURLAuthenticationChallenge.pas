unit uNSURLAuthenticationChallenge;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, uWkInterface;

type


  TNSURLAuthenticationChallenge = class
  private
    FData: NSURLAuthenticationChallenge;
  public
    constructor Create(AData: NSURLAuthenticationChallenge);
    destructor Destroy; override;
    function Data(): NSURLAuthenticationChallenge;
    procedure Release();
  end;


implementation

constructor TNSURLAuthenticationChallenge.Create(AData: NSURLAuthenticationChallenge);
begin
  inherited Create;
  FData := AData;
end;

destructor TNSURLAuthenticationChallenge.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TNSURLAuthenticationChallenge.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TNSURLAuthenticationChallenge.Data(): NSURLAuthenticationChallenge;
begin
  Result := FData;
end;

end.
