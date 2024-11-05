unit uWKFrameInfo;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type


  TWKFrameInfo = class
  private
    FData: WKFrameInfo;
  public
    constructor Create(AData: WKFrameInfo);
    destructor Destroy; override;
    function Data(): WKFrameInfo;
  public
    function IsMainFrame: Boolean;
    function Request: NSURLRequest;
  end;


implementation

constructor TWKFrameInfo.Create(AData: WKFrameInfo);
begin
  FData := AData;
  inherited Create;
end;

destructor TWKFrameInfo.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKFrameInfo.Data(): WKFrameInfo;
begin
  Result := FData;
end;

function TWKFrameInfo.IsMainFrame: Boolean;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := Boolean(FData.isMainFrame);
  end;
end;

function TWKFrameInfo.Request: NSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.request;
  end;
end;

end.
