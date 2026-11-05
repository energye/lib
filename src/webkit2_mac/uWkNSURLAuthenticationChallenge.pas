unit uWkNSURLAuthenticationChallenge;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll;

type

  // A challenge from a server requiring authentication from the client.
  // https://developer.apple.com/documentation/foundation/nsurlauthenticationchallenge?language=objc
  // No Impl
  TWkNSURLAuthenticationChallenge = class
  private
    FData: NSURLAuthenticationChallenge;
  public
    constructor Create(AData: NSURLAuthenticationChallenge);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): NSURLAuthenticationChallenge;
    // Freeing the class and the objects it implements.
    procedure Release();
  end;


implementation

constructor TWkNSURLAuthenticationChallenge.Create(AData: NSURLAuthenticationChallenge);
begin
  inherited Create;
  FData := AData;
end;

destructor TWkNSURLAuthenticationChallenge.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkNSURLAuthenticationChallenge.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkNSURLAuthenticationChallenge.Data(): NSURLAuthenticationChallenge;
begin
  Result := FData;
end;

end.
