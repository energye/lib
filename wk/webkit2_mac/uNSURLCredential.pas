unit uNSURLCredential;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, uWkInterface;

type


  TNSURLCredential = class(TInterfacedObject, INSURLCredential)
  private
    FData: NSURLCredential;
  protected
    function Data(): NSURLCredential;
  public
    constructor Create(AData: NSURLCredential);
    destructor Destroy; override;
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
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
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
