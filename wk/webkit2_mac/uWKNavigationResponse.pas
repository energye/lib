unit uWKNavigationResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type


  TWKNavigationResponse = class
  private
    FData: WKNavigationResponse;
  public
    constructor Create; overload;
    constructor Create(AData: WKNavigationResponse);
    destructor Destroy; override;
    function Data(): WKNavigationResponse;
  public
    function IsForMainFrame: LongBool;
    function Response: NSURLResponse;
    function CanShowMIMEType: LongBool;
  end;


implementation


constructor TWKNavigationResponse.Create;
begin
  FData := WKNavigationResponse.alloc.init;
end;

constructor TWKNavigationResponse.Create(AData: WKNavigationResponse);
begin
  FData := AData;
end;

destructor TWKNavigationResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationResponse.Data(): WKNavigationResponse;
begin
  Result := FData;
end;

function TWKNavigationResponse.IsForMainFrame: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isForMainFrame);
  end;
end;

function TWKNavigationResponse.Response: NSURLResponse;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.response;
  end;
end;

function TWKNavigationResponse.CanShowMIMEType: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canShowMIMEType);
  end;
end;

end.
