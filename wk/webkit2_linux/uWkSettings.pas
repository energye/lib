unit uWkSettings;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uLibWebkit;

type

  TWkSettings = class
  private
    FSetting: WebKitSettings;
  protected
    function GetEnableJavascript(): boolean;
    procedure SetEnableJavascript(aValue: boolean);
    function GetAutoLoadImages(): boolean;
    procedure SetAutoLoadImages(aValue: boolean);
    function GetEnableDeveloperExtras(): boolean;
    procedure SetEnableDeveloperExtras(aValue: boolean);
  public
    property EnableJavascript: boolean read GetEnableJavascript write SetEnableJavascript;
    property AutoLoadImages: boolean read GetAutoLoadImages write SetAutoLoadImages;
    property EnableDeveloperExtras: boolean read GetEnableDeveloperExtras write SetEnableDeveloperExtras;
  public
    constructor Create();
    constructor Create(aSetting: WebKitSettings);
    destructor Destroy; override;
    function Data(): WebKitSettings;
    procedure SetUserAgentWithApplicationDetails(application_name, application_version: string);
    procedure SetHardwareAccelerationPolicy(policy: WebKitHardwareAccelerationPolicy);
  end;

implementation

constructor TWkSettings.Create();
begin
  FSetting := webkit_settings_new();
end;

constructor TWkSettings.Create(aSetting: WebKitSettings);
begin
  FSetting := aSetting;
end;

destructor TWkSettings.Destroy;
begin
  inherited Destroy;
  FSetting := nil;
end;

function TWkSettings.Data(): WebKitSettings;
begin
  Result := FSetting;
end;

function TWkSettings.GetEnableJavascript(): boolean;
begin
  Result := False;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_javascript(FSetting);
end;

procedure TWkSettings.SetEnableJavascript(aValue: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_javascript(FSetting, aValue);
end;

function TWkSettings.GetAutoLoadImages(): boolean;
begin
  Result := False;
  if Assigned(FSetting) then
    Result := webkit_settings_get_auto_load_images(FSetting);
end;

procedure TWkSettings.SetAutoLoadImages(aValue: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_auto_load_images(FSetting, aValue);
end;

function TWkSettings.GetEnableDeveloperExtras(): boolean;
begin
  Result := False;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_developer_extras(FSetting);
end;

procedure TWkSettings.SetEnableDeveloperExtras(aValue: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_developer_extras(FSetting, aValue);
end;

procedure TWkSettings.SetUserAgentWithApplicationDetails(application_name, application_version: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_user_agent_with_application_details(FSetting, Pgchar(application_name), Pgchar(application_version));
end;

procedure TWkSettings.SetHardwareAccelerationPolicy(policy: WebKitHardwareAccelerationPolicy);
begin
  if Assigned(FSetting) then
    webkit_settings_set_hardware_acceleration_policy(FSetting, policy);
end;

end.
