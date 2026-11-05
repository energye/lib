unit uWkNavigationResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type

  // An object that contains the response to a navigation request, and which you use to make navigation-related policy decisions.
  // https://developer.apple.com/documentation/webkit/wknavigationresponse?language=objc
  TWkNavigationResponse = class
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
    // Creates and returns an WKNavigationResponse object.
    class function New(): TWkNavigationResponse;
    // A Boolean value that indicates whether the response targets the web view’s main frame.
    function IsForMainFrame: LongBool;
    // The frame’s response.
    function Response: NSURLResponse;
    // A Boolean value that indicates whether WebKit is capable of displaying the response’s MIME type natively.
    function CanShowMIMEType: LongBool;
  end;


implementation


constructor TWkNavigationResponse.Create(AData: WKNavigationResponse);
begin
  inherited Create;
  FData := AData;
end;

destructor TWkNavigationResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkNavigationResponse.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWkNavigationResponse.New(): TWkNavigationResponse;
begin
  Result := Create(WKNavigationResponse.alloc.init);
end;

function TWkNavigationResponse.Data(): WKNavigationResponse;
begin
  Result := FData;
end;

function TWkNavigationResponse.IsForMainFrame: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isForMainFrame);
  end;
end;

function TWkNavigationResponse.Response: NSURLResponse;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.response;
  end;
end;

function TWkNavigationResponse.CanShowMIMEType: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canShowMIMEType);
  end;
end;

end.
