unit uWKWebViewConfiguration;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, uWebKit;

type

  TWKWebViewConfiguration = class
  private
    FData: WKWebViewConfiguration;
  protected
    procedure FieldEmpty();
  private
    FPreferences: WKPreferences;
    FUserContentController: WKUserContentController;
    FURLSchemeHandler: WKURLSchemeHandler;
  public
    constructor Create; overload;
    constructor Create(AData: WKWebViewConfiguration);
    destructor Destroy; override;
    function Data(): WKWebViewConfiguration;
  public
    procedure SetPreferences(preferences: WKPreferences);
    function Preferences: WKPreferences;
    procedure SetUserContentController(userContentController: WKUserContentController);
    function UserContentController: WKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
    function ApplicationNameForUserAgent: string;
    procedure SetApplicationNameForUserAgent(newValue: string);
    procedure SetURLSchemeHandlerForURLScheme(urlSchemeHandler: WKURLSchemeHandler; urlScheme: string);

  end;


implementation

constructor TWKWebViewConfiguration.Create;
begin
  inherited Create;
  FData := WKWebViewConfiguration.alloc.init;
  FieldEmpty();
end;

constructor TWKWebViewConfiguration.Create(AData: WKWebViewConfiguration);
begin
  inherited Create;
  FData := AData;
  FieldEmpty();
end;

destructor TWKWebViewConfiguration.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  FieldEmpty();
  inherited Destroy;
end;

procedure TWKWebViewConfiguration.FieldEmpty();
begin
  FPreferences := nil;
  FUserContentController := nil;
  FURLSchemeHandler := nil;
end;

function TWKWebViewConfiguration.Data(): WKWebViewConfiguration;
begin
  Result := FData;
end;

procedure TWKWebViewConfiguration.SetPreferences(preferences: WKPreferences);
begin
  if Assigned(FData) then
  begin
    FPreferences := preferences;
    FData.setPreferences(preferences);
  end;
end;

function TWKWebViewConfiguration.Preferences: WKPreferences;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    if FPreferences = nil then
    begin
      FPreferences := FData.preferences;
    end;
    Result := FPreferences;
  end;
end;

procedure TWKWebViewConfiguration.SetUserContentController(userContentController: WKUserContentController);
begin
  if Assigned(FData) then
  begin
    FUserContentController := userContentController;
    FData.setUserContentController(userContentController);
  end;
end;

function TWKWebViewConfiguration.UserContentController: WKUserContentController;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    if FUserContentController = nil then
    begin
      FUserContentController := FData.userContentController;
    end;
    Result := FUserContentController;
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

function TWKWebViewConfiguration.ApplicationNameForUserAgent: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.applicationNameForUserAgent);
  end;
end;

procedure TWKWebViewConfiguration.SetApplicationNameForUserAgent(newValue: string);
begin
  if Assigned(FData) then
  begin
    FData.setApplicationNameForUserAgent(NSStringUtf8(newValue));
  end;
end;

procedure TWKWebViewConfiguration.SetURLSchemeHandlerForURLScheme(urlSchemeHandler: WKURLSchemeHandler; urlScheme: string);
begin
  if Assigned(FData) then
  begin
    FUrlSchemeHandler := urlSchemeHandler;
    FData.setURLSchemeHandlerForURLScheme (urlSchemeHandler, NSStringUtf8(urlScheme));
  end;
end;

end.
