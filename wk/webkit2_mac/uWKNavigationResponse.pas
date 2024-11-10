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
    constructor Create(AData: WKNavigationResponse);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKNavigationResponse;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    class function New(): TWKNavigationResponse;
    function IsForMainFrame: LongBool;
    function Response: NSURLResponse;
    function CanShowMIMEType: LongBool;
  end;


implementation


constructor TWKNavigationResponse.Create(AData: WKNavigationResponse);
begin
  FData := AData;
end;

destructor TWKNavigationResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKNavigationResponse.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKNavigationResponse.New(): TWKNavigationResponse;
begin
  Result := Create(WKNavigationResponse.alloc.init);
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
