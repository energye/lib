unit uWKWebpagePreferences;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit;

type


  // An object that specifies the behaviors to use when loading and rendering page content.
  // https://developer.apple.com/documentation/webkit/wkwebpagepreferences?language=objc
  TWKWebpagePreferences = class
  private
    FData: WKWebpagePreferences;
  public
    constructor Create(AData: WKWebpagePreferences);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKWebpagePreferences;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an WKUserScript object.
    class function New(): TWKWebpagePreferences;
    // Sets The content mode for the web view to use when it loads and renders a webpage.
    procedure SetPreferredContentMode(aValue: WKContentMode);
    // Returns The content mode for the web view to use when it loads and renders a webpage.
    function PreferredContentMode: WKContentMode;
    // Sets A Boolean value that indicates whether JavaScript from web content is allowed to run.
    procedure SetAllowsContentJavaScript(aValue: LongBool);
    // Returns A Boolean value that indicates whether JavaScript from web content is allowed to run.
    function AllowsContentJavaScript: LongBool;
  end;


implementation

constructor TWKWebpagePreferences.Create(AData: WKWebpagePreferences);
begin
  FData := AData;
end;

destructor TWKWebpagePreferences.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKWebpagePreferences.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKWebpagePreferences.New(): TWKWebpagePreferences;
begin
  Result := Create(WKWebpagePreferences.alloc.init);
end;

function TWKWebpagePreferences.Data(): WKWebpagePreferences;
begin
  Result := FData;
end;

procedure TWKWebpagePreferences.SetPreferredContentMode(aValue: WKContentMode);
begin
  if Assigned(FData) then
  begin
    FData.setPreferredContentMode(aValue);
  end;
end;

function TWKWebpagePreferences.PreferredContentMode: WKContentMode;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.preferredContentMode;
  end;
end;

procedure TWKWebpagePreferences.SetAllowsContentJavaScript(aValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsContentJavaScript(aValue);
  end;
end;

function TWKWebpagePreferences.AllowsContentJavaScript: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsContentJavaScript);
  end;
end;

end.
