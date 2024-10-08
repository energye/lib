unit uWKWebViewConfiguration;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, uWebKit, uWkInterface, uWKPreferences, uWKUserContentController,
  uWKURLSchemeHandler;

type

  TWKWebViewConfiguration = class(TInterfacedObject, IWKWebViewConfiguration)
  private
    FData: WKWebViewConfiguration;
  protected
    function Data(): WKWebViewConfiguration;
  private
    FPreferences: IWKPreferences;
    FUserContentController: IWKUserContentController;
    FURLSchemeHandler: IWKURLSchemeHandler;
  public
    constructor Create; overload;
    constructor Create(AData: WKWebViewConfiguration);
    destructor Destroy; override;
  public
    procedure SetPreferences(preferences: IWKPreferences);
    function Preferences: IWKPreferences;
    procedure SetUserContentController(userContentController: IWKUserContentController);
    function UserContentController: IWKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
    function ApplicationNameForUserAgent: string;
    procedure SetApplicationNameForUserAgent(newValue: string);
    procedure SetURLSchemeHandlerForURLScheme(urlSchemeHandler: IWKURLSchemeHandler; urlScheme: string);

  end;


implementation

constructor TWKWebViewConfiguration.Create;
begin
  inherited Create;
  FData := WKWebViewConfiguration.alloc.init;
  FData.autorelease;
  FPreferences := nil;
  FUserContentController := nil;
  FURLSchemeHandler := nil;
end;

constructor TWKWebViewConfiguration.Create(AData: WKWebViewConfiguration);
begin
  inherited Create;
  FData := AData;
  FData.autorelease;
end;

destructor TWKWebViewConfiguration.Destroy;
begin
  //if Assigned(FData) then
  //begin
  //  FData.release;
  //  FData := nil;
  //end;
  FPreferences := nil;
  FUserContentController := nil;
  FURLSchemeHandler := nil;
  inherited Destroy;
end;

function TWKWebViewConfiguration.Data(): WKWebViewConfiguration;
begin
  Result := FData;
end;

procedure TWKWebViewConfiguration.SetPreferences(preferences: IWKPreferences);
begin
  if Assigned(FData) then
  begin
    FPreferences := preferences;
    FData.setPreferences(preferences.Data());
  end;
end;

function TWKWebViewConfiguration.Preferences: IWKPreferences;
begin
  Result := nil;
  if FPreferences <> nil then
  begin
    Result := FPreferences;
    exit;
  end;
  if Assigned(FData) then
  begin
    Result := TWKPreferences.Create(FData.preferences);
  end;
end;

procedure TWKWebViewConfiguration.SetUserContentController(userContentController: IWKUserContentController);
begin
  if Assigned(FData) then
  begin
    FUserContentController := userContentController;
    FData.setUserContentController(userContentController.Data());
  end;
end;

function TWKWebViewConfiguration.UserContentController: IWKUserContentController;
begin
  Result := nil;
  if FUserContentController <> nil then
  begin
    Result := FUserContentController;
    exit;
  end;
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

procedure TWKWebViewConfiguration.SetURLSchemeHandlerForURLScheme(urlSchemeHandler: IWKURLSchemeHandler; urlScheme: string);
begin
  if Assigned(FData) then
  begin
    FUrlSchemeHandler := urlSchemeHandler;
    FData.setURLSchemeHandlerForURLScheme (urlSchemeHandler.Data(), NSStringUtf8(urlScheme));
  end;
end;

end.
