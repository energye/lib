unit uWKURLSchemeTask;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface, uWkWebviewEvents, uNSURLRequest, uNSURLResponse;

type

  TWKURLSchemeTask = class(TInterfacedObject, IWKURLSchemeTask)
  private
    FData: WKURLSchemeTask;
  protected
    function Data(): WKURLSchemeTask;
  public
    constructor Create(AData: WKURLSchemeTask);
    destructor Destroy; override;
  public
    function Request(): INSURLRequest;
    procedure ReceiveResponse (response: INSURLResponse);
    procedure ReceiveData(ADataBytes: Pointer; ALength: Integer {NSData});
    procedure Finish ();
    procedure FailWithError (error: NSError);
  end;


implementation


constructor TWKURLSchemeTask.Create(AData: WKURLSchemeTask);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKURLSchemeTask.Destroy;
begin
  if FData <> nil then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKURLSchemeTask.Data(): WKURLSchemeTask;
begin
  Result := FData;
end;

function TWKURLSchemeTask.Request(): INSURLRequest;
begin
  Result := nil;
end;

procedure TWKURLSchemeTask.ReceiveResponse (response: INSURLResponse);
begin

end;

procedure TWKURLSchemeTask.ReceiveData (ADataBytes: Pointer; ALength: Integer {NSData});
begin

end;

procedure TWKURLSchemeTask.Finish ();
begin

end;

procedure TWKURLSchemeTask.FailWithError (error: NSError);
begin

end;


end.
