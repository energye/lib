unit uWKFrameInfo;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uNSURLRequest;

type


  TWKFrameInfo = class(TInterfacedObject, IWKFrameInfo)
  private
    FData: WKFrameInfo;
  protected
    function Data(): WKFrameInfo;
  public
    constructor Create(AData: WKFrameInfo);
    destructor Destroy; override;
  public
    function IsMainFrame: Boolean;
    function Request: INSURLRequest;
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

function TWKFrameInfo.Request: INSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURLRequest.Create(FData.request);
  end;
end;

end.
