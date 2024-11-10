unit uWKWebViewConfiguration;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, uWebKit;

type

  // A collection of properties that you use to initialize a web view.
  // https://developer.apple.com/documentation/webkit/wkwebviewconfiguration?language=objc
  TWKWebViewConfiguration = class
  private
    FData: WKWebViewConfiguration;
  public
    constructor Create(AData: WKWebViewConfiguration);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKWebViewConfiguration;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an NSMutableURLRequest object.
    class function New(): TWKWebViewConfiguration;
    // Sets The object that manages the preference-related settings for the web view.
    procedure SetPreferences(preferences: WKPreferences);
    // Returns The object that manages the preference-related settings for the web view.
    function Preferences: WKPreferences;
    // Sets The object that coordinates interactions between your app’s native code and the webpage’s scripts and other content.
    procedure SetUserContentController(userContentController: WKUserContentController);
    // Returns The object that coordinates interactions between your app’s native code and the webpage’s scripts and other content.
    function UserContentController: WKUserContentController;
    // Sets A Boolean value that indicates whether the web view suppresses content rendering until the content is fully loaded into memory.
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    // Returns A Boolean value that indicates whether the web view suppresses content rendering until the content is fully loaded into memory.
    function SuppressesIncrementalRendering: LongBool;
    // Sets The app name that appears in the user agent string.
    procedure SetApplicationNameForUserAgent(newValue: string);
    // Returns The app name that appears in the user agent string.
    function ApplicationNameForUserAgent: string;
    // Sets Registers an object to load resources associated with the specified URL scheme.
    procedure SetURLSchemeHandlerForURLScheme(urlSchemeHandler: WKURLSchemeHandler; urlScheme: string);
  end;


implementation

constructor TWKWebViewConfiguration.Create(AData: WKWebViewConfiguration);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKWebViewConfiguration.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKWebViewConfiguration.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKWebViewConfiguration.New(): TWKWebViewConfiguration;
begin
  Result := Create(WKWebViewConfiguration.alloc.init);
end;

function TWKWebViewConfiguration.Data(): WKWebViewConfiguration;
begin
  Result := FData;
end;

procedure TWKWebViewConfiguration.SetPreferences(preferences: WKPreferences);
begin
  if Assigned(FData) then
  begin
    FData.setPreferences(preferences);
  end;
end;

function TWKWebViewConfiguration.Preferences: WKPreferences;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.preferences;
  end;
end;

procedure TWKWebViewConfiguration.SetUserContentController(userContentController: WKUserContentController);
begin
  if Assigned(FData) then
  begin
    FData.setUserContentController(userContentController);
  end;
end;

function TWKWebViewConfiguration.UserContentController: WKUserContentController;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.userContentController;
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
    FData.setURLSchemeHandlerForURLScheme (urlSchemeHandler, NSStringUtf8(urlScheme));
  end;
end;

end.
