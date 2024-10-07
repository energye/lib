unit uWKWebViewConfiguration;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit, uWkInterface, uWKPreferences, uWKUserContentController;

type

  TWKWebViewConfiguration = class(TInterfacedObject, IWKWebViewConfiguration)
  private
    FData: WKWebViewConfiguration;
  public
    constructor Create; overload;
    constructor Create(AData: WKWebViewConfiguration);
    destructor Destroy; override;
  public
    function Data(): WKWebViewConfiguration;
  public
    //procedure setProcessPool(newValue: WKProcessPool);
    //function processPool: WKProcessPool;
    procedure SetPreferences(newValue: IWKPreferences);
    function Preferences: IWKPreferences;
    procedure SetUserContentController(newValue: IWKUserContentController);
    function UserContentController: IWKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
    // Adopted protocols
    //function copyWithZone (zone: NSZonePtr): id;
  published
    //property OnReceiveScriptMessage;
  end;


implementation

constructor TWKWebViewConfiguration.Create;
begin
  inherited Create;
  FData := WKWebViewConfiguration.alloc.init;
end;

constructor TWKWebViewConfiguration.Create(AData: WKWebViewConfiguration);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKWebViewConfiguration.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKWebViewConfiguration.Data(): WKWebViewConfiguration;
begin
  Result := FData;
end;

procedure TWKWebViewConfiguration.SetPreferences(newValue: IWKPreferences);
begin
  if Assigned(FData) then
  begin
    FData.setPreferences(newValue.Data());
  end;
end;

function TWKWebViewConfiguration.Preferences: IWKPreferences;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKPreferences.Create(FData.preferences);
  end;
end;

procedure TWKWebViewConfiguration.SetUserContentController(newValue: IWKUserContentController);
begin
  if Assigned(FData) then
  begin
    FData.setUserContentController(newValue.Data());
  end;
end;

function TWKWebViewConfiguration.UserContentController: IWKUserContentController;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKUserContentController.Create(FData.userContentController);
  end;
end;

procedure TWKWebViewConfiguration.SetSuppressesIncrementalRendering(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setSuppressesIncrementalRendering(ObjcBool(newValue));
  end;
end;

function TWKWebViewConfiguration.SuppressesIncrementalRendering: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.suppressesIncrementalRendering);
  end;
end;

end.
