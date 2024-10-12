unit uWKNavigationResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uNSURLResponse;

type


  TWKNavigationResponse = class(TInterfacedObject, IWKNavigationResponse)
  private
    FData: WKNavigationResponse;
  protected
    function Data(): WKNavigationResponse;
  public
    constructor Create; overload;
    constructor Create(AData: WKNavigationResponse);
    destructor Destroy; override;
  public
    function IsForMainFrame: LongBool;
    function Response: INSURLResponse;
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

function TWKNavigationResponse.Response: INSURLResponse;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURLResponse.Create(FData.response);
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
