unit uNSURLCredential;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll;

type


  TNSURLCredential = class
  private
    FData: NSURLCredential;
  public
    constructor Create(AData: NSURLCredential);
    destructor Destroy; override;
    function Data(): NSURLCredential;
    // Release the current object and Data pointer
    procedure Release();
  public
    function Persistence: NSURLCredentialPersistence;
  end;


implementation

constructor TNSURLCredential.Create(AData: NSURLCredential);
begin
  inherited Create;
  FData := AData;
end;

destructor TNSURLCredential.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TNSURLCredential.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TNSURLCredential.Data(): NSURLCredential;
begin
  Result := FData;
end;

function TNSURLCredential.Persistence: NSURLCredentialPersistence;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.persistence;
  end;
end;

end.
