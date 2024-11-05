unit uWKURLSchemeTask;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type

  TWKURLSchemeTask = class
  private
    FData: WKURLSchemeTask;
  public
    constructor Create(AData: WKURLSchemeTask);
    destructor Destroy; override;
    function Data(): WKURLSchemeTask;
  public
    function Request(): NSURLRequest;
    procedure ReceiveResponse (response: NSURLResponse);
    procedure ReceiveData(ADataBytes: Pointer; ALength: Integer {NSData});
    procedure Finish ();
    procedure FailWithError (error: string {NSError});
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
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKURLSchemeTask.Data(): WKURLSchemeTask;
begin
  Result := FData;
end;

function TWKURLSchemeTask.Request(): NSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.request();
  end;
end;

procedure TWKURLSchemeTask.ReceiveResponse (response: NSURLResponse);
begin
  if Assigned(FData) then
  begin
    FData.didReceiveResponse(response);
  end;
end;

procedure TWKURLSchemeTask.ReceiveData (ADataBytes: Pointer; ALength: Integer {NSData});
var
  TempData: NSData;
begin
  if Assigned(FData) then
  begin
    TempData := NSData.dataWithBytes_length(ADataBytes, NSUInteger(ALength));
    FData.didReceiveData(TempData);
  end;
end;

procedure TWKURLSchemeTask.Finish ();
begin
  if Assigned(FData) then
  begin
    FData.didFinish();
  end;
end;

procedure TWKURLSchemeTask.FailWithError (error: string {NSError});
begin
  if Assigned(FData) then
  begin
  end;
end;


end.
