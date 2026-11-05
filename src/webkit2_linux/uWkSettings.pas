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
  public
    function get_enable_javascript(): boolean;
    procedure set_enable_javascript(enabled: boolean);
    function get_auto_load_images(): boolean;
    procedure set_auto_load_images(enabled: boolean);
    function get_enable_html5_local_storage(): boolean;
    procedure set_enable_html5_local_storage(enabled: boolean);
    function get_enable_html5_database(): boolean;
    procedure set_enable_html5_database(enabled: boolean);
    function get_javascript_can_open_windows_automatically(): boolean;
    procedure set_javascript_can_open_windows_automatically(enabled: boolean);
    function get_enable_hyperlink_auditing(): boolean;
    procedure set_enable_hyperlink_auditing(enabled: boolean);
    function get_default_font_family(): string;
    procedure set_default_font_family(default_font_family: string);
    function get_monospace_font_family(): string;
    procedure set_monospace_font_family(monospace_font_family: string);
    function get_serif_font_family(): string;
    procedure set_serif_font_family(serif_font_family: string);
    function get_sans_serif_font_family(): string;
    procedure set_sans_serif_font_family(sans_serif_font_family: string);
    function get_cursive_font_family(): string;
    procedure set_cursive_font_family(cursive_font_family: string);
    function get_fantasy_font_family(): string;
    procedure set_fantasy_font_family(fantasy_font_family: string);
    function get_pictograph_font_family(): string;
    procedure set_pictograph_font_family(pictograph_font_family: string);
    function get_default_font_size(): integer;
    procedure set_default_font_size(font_size: integer);
    function get_default_monospace_font_size(): integer;
    procedure set_default_monospace_font_size(font_size: integer);
    function get_minimum_font_size(): integer;
    procedure set_minimum_font_size(font_size: integer);
    function get_default_charset(): string;
    procedure set_default_charset(default_charset: string);
    function get_enable_developer_extras(): boolean;
    procedure set_enable_developer_extras(enabled: boolean);
    function get_enable_resizable_text_areas(): boolean;
    procedure set_enable_resizable_text_areas(enabled: boolean);
    function get_enable_tabs_to_links(): boolean;
    procedure set_enable_tabs_to_links(enabled: boolean);
    function get_enable_caret_browsing(): boolean;
    procedure set_enable_caret_browsing(enabled: boolean);
    function get_enable_fullscreen(): boolean;
    procedure set_enable_fullscreen(enabled: boolean);
    function get_print_backgrounds(): boolean;
    procedure set_print_backgrounds(print_backgrounds: boolean);
    function get_enable_webaudio(): boolean;
    procedure set_enable_webaudio(enabled: boolean);
    function get_enable_webgl(): boolean;
    procedure set_enable_webgl(enabled: boolean);
    procedure set_allow_modal_dialogs(allowed: boolean);
    function get_allow_modal_dialogs(): boolean;
    procedure set_zoom_text_only(zoom_text_only: boolean);
    function get_zoom_text_only(): boolean;
    function get_javascript_can_access_clipboard(): boolean;
    procedure set_javascript_can_access_clipboard(enabled: boolean);
    function get_media_playback_requires_user_gesture(): boolean;
    procedure set_media_playback_requires_user_gesture(enabled: boolean);
    function get_media_playback_allows_inline(): boolean;
    procedure set_media_playback_allows_inline(enabled: boolean);
    function get_draw_compositing_indicators(): boolean;
    procedure set_draw_compositing_indicators(enabled: boolean);
    function get_enable_site_specific_quirks(): boolean;
    procedure set_enable_site_specific_quirks(enabled: boolean);
    function get_enable_page_cache(): boolean;
    procedure set_enable_page_cache(enabled: boolean);
    function get_user_agent(): string;
    procedure set_user_agent(user_agent: string);
    procedure set_user_agent_with_application_details(application_name: string; application_version: string);
    function get_enable_smooth_scrolling(): boolean;
    procedure set_enable_smooth_scrolling(enabled: boolean);
    function get_enable_2d_canvas_acceleration(): boolean;
    procedure set_enable_2d_canvas_acceleration(enabled: boolean);
    function get_enable_write_console_messages_to_stdout(): boolean;
    procedure set_enable_write_console_messages_to_stdout(enabled: boolean);
    function get_enable_media_stream(): boolean;
    procedure set_enable_media_stream(enabled: boolean);
    function get_enable_mock_capture_devices(): boolean;
    procedure set_enable_mock_capture_devices(enabled: boolean);
    function get_enable_spatial_navigation(): boolean;
    procedure set_enable_spatial_navigation(enabled: boolean);
    function get_enable_mediasource(): boolean;
    procedure set_enable_mediasource(enabled: boolean);
    function get_enable_encrypted_media(): boolean;
    procedure set_enable_encrypted_media(enabled: boolean);
    function get_enable_media_capabilities(): boolean;
    procedure set_enable_media_capabilities(enabled: boolean);
    function get_allow_file_access_from_file_urls(): boolean;
    procedure set_allow_file_access_from_file_urls(allowed: boolean);
    function get_allow_universal_access_from_file_urls(): boolean;
    procedure set_allow_universal_access_from_file_urls(allowed: boolean);
    function get_allow_top_navigation_to_data_urls(): boolean;
    procedure set_allow_top_navigation_to_data_urls(allowed: boolean);
    function get_hardware_acceleration_policy(): WebKitHardwareAccelerationPolicy;
    procedure set_hardware_acceleration_policy(policy: WebKitHardwareAccelerationPolicy);
    function get_enable_back_forward_navigation_gestures(): boolean;
    procedure set_enable_back_forward_navigation_gestures(enabled: boolean);
    function get_enable_javascript_markup(): boolean;
    procedure set_enable_javascript_markup(enabled: boolean);
    function get_enable_media(): boolean;
    procedure set_enable_media(enabled: boolean);
    function get_media_content_types_requiring_hardware_support(): string;
    procedure set_media_content_types_requiring_hardware_support(content_types: string);
    function get_enable_webrtc(): boolean;
    procedure set_enable_webrtc(enabled: boolean);
    function get_disable_web_security(): boolean;
    procedure set_disable_web_security(disabled: boolean);
  public
    constructor Create();
    constructor Create(aSetting: WebKitSettings);
    destructor Destroy; override;
    function Data(): WebKitSettings;
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

function TWkSettings.get_enable_javascript(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_javascript(FSetting);
end;

procedure TWkSettings.set_enable_javascript(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_javascript(FSetting, enabled);
end;

function TWkSettings.get_auto_load_images(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_auto_load_images(FSetting);
end;

procedure TWkSettings.set_auto_load_images(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_auto_load_images(FSetting, enabled);
end;

function TWkSettings.get_enable_html5_local_storage(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_html5_local_storage(FSetting);
end;

procedure TWkSettings.set_enable_html5_local_storage(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_html5_local_storage(FSetting, enabled);
end;

function TWkSettings.get_enable_html5_database(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_html5_database(FSetting);
end;

procedure TWkSettings.set_enable_html5_database(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_html5_database(FSetting, enabled);
end;

function TWkSettings.get_javascript_can_open_windows_automatically(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_javascript_can_open_windows_automatically(FSetting);
end;

procedure TWkSettings.set_javascript_can_open_windows_automatically(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_javascript_can_open_windows_automatically(FSetting, enabled);
end;

function TWkSettings.get_enable_hyperlink_auditing(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_hyperlink_auditing(FSetting);
end;

procedure TWkSettings.set_enable_hyperlink_auditing(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_hyperlink_auditing(FSetting, enabled);
end;

function TWkSettings.get_default_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_default_font_family(FSetting));
end;

procedure TWkSettings.set_default_font_family(default_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_default_font_family(FSetting, Pgchar(default_font_family));
end;

function TWkSettings.get_monospace_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_monospace_font_family(FSetting));
end;

procedure TWkSettings.set_monospace_font_family(monospace_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_monospace_font_family(FSetting, Pgchar(monospace_font_family));
end;

function TWkSettings.get_serif_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_serif_font_family(FSetting));
end;

procedure TWkSettings.set_serif_font_family(serif_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_serif_font_family(FSetting, Pgchar(serif_font_family));
end;

function TWkSettings.get_sans_serif_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_sans_serif_font_family(FSetting));
end;

procedure TWkSettings.set_sans_serif_font_family(sans_serif_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_sans_serif_font_family(FSetting, Pgchar(sans_serif_font_family));
end;

function TWkSettings.get_cursive_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_cursive_font_family(FSetting));
end;

procedure TWkSettings.set_cursive_font_family(cursive_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_cursive_font_family(FSetting, Pgchar(cursive_font_family));
end;

function TWkSettings.get_fantasy_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_fantasy_font_family(FSetting));
end;

procedure TWkSettings.set_fantasy_font_family(fantasy_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_fantasy_font_family(FSetting, Pgchar(fantasy_font_family));
end;

function TWkSettings.get_pictograph_font_family(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_pictograph_font_family(FSetting));
end;

procedure TWkSettings.set_pictograph_font_family(pictograph_font_family: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_pictograph_font_family(FSetting, Pgchar(pictograph_font_family));
end;

function TWkSettings.get_default_font_size(): integer;
begin
  Result := 0;
  if Assigned(FSetting) then
    Result := integer(webkit_settings_get_default_font_size(FSetting));
end;

procedure TWkSettings.set_default_font_size(font_size: integer);
begin
  if Assigned(FSetting) then
    webkit_settings_set_default_font_size(FSetting, guint32(font_size));
end;

function TWkSettings.get_default_monospace_font_size(): integer;
begin
  Result := 0;
  if Assigned(FSetting) then
    Result := integer(webkit_settings_get_default_monospace_font_size(FSetting));
end;

procedure TWkSettings.set_default_monospace_font_size(font_size: integer);
begin
  if Assigned(FSetting) then
    webkit_settings_set_default_monospace_font_size(FSetting, guint32(font_size));
end;

function TWkSettings.get_minimum_font_size(): integer;
begin
  Result := 0;
  if Assigned(FSetting) then
    Result := integer(webkit_settings_get_minimum_font_size(FSetting));
end;

procedure TWkSettings.set_minimum_font_size(font_size: integer);
begin
  if Assigned(FSetting) then
    webkit_settings_set_minimum_font_size(FSetting, guint32(font_size));
end;

function TWkSettings.get_default_charset(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_default_charset(FSetting));
end;

procedure TWkSettings.set_default_charset(default_charset: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_default_charset(FSetting, Pgchar(default_charset));
end;

function TWkSettings.get_enable_developer_extras(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_developer_extras(FSetting);
end;

procedure TWkSettings.set_enable_developer_extras(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_developer_extras(FSetting, enabled);
end;

function TWkSettings.get_enable_resizable_text_areas(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_resizable_text_areas(FSetting);
end;

procedure TWkSettings.set_enable_resizable_text_areas(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_resizable_text_areas(FSetting, enabled);
end;

function TWkSettings.get_enable_tabs_to_links(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_tabs_to_links(FSetting);
end;

procedure TWkSettings.set_enable_tabs_to_links(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_tabs_to_links(FSetting, enabled);
end;

function TWkSettings.get_enable_caret_browsing(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_caret_browsing(FSetting);
end;

procedure TWkSettings.set_enable_caret_browsing(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_caret_browsing(FSetting, enabled);
end;

function TWkSettings.get_enable_fullscreen(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_fullscreen(FSetting);
end;

procedure TWkSettings.set_enable_fullscreen(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_fullscreen(FSetting, enabled);
end;

function TWkSettings.get_print_backgrounds(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_print_backgrounds(FSetting);
end;

procedure TWkSettings.set_print_backgrounds(print_backgrounds: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_print_backgrounds(FSetting, print_backgrounds);
end;

function TWkSettings.get_enable_webaudio(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_webaudio(FSetting);
end;

procedure TWkSettings.set_enable_webaudio(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_webaudio(FSetting, enabled);
end;

function TWkSettings.get_enable_webgl(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_webgl(FSetting);
end;

procedure TWkSettings.set_enable_webgl(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_webgl(FSetting, enabled);
end;

procedure TWkSettings.set_allow_modal_dialogs(allowed: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_allow_modal_dialogs(FSetting, allowed);
end;

function TWkSettings.get_allow_modal_dialogs(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_allow_modal_dialogs(FSetting);
end;

procedure TWkSettings.set_zoom_text_only(zoom_text_only: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_zoom_text_only(FSetting, zoom_text_only);
end;

function TWkSettings.get_zoom_text_only(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_zoom_text_only(FSetting);
end;

function TWkSettings.get_javascript_can_access_clipboard(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_javascript_can_access_clipboard(FSetting);
end;

procedure TWkSettings.set_javascript_can_access_clipboard(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_javascript_can_access_clipboard(FSetting, enabled);
end;

function TWkSettings.get_media_playback_requires_user_gesture(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_media_playback_requires_user_gesture(FSetting);
end;

procedure TWkSettings.set_media_playback_requires_user_gesture(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_media_playback_requires_user_gesture(FSetting, enabled);
end;

function TWkSettings.get_media_playback_allows_inline(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_media_playback_allows_inline(FSetting);
end;

procedure TWkSettings.set_media_playback_allows_inline(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_media_playback_allows_inline(FSetting, enabled);
end;

function TWkSettings.get_draw_compositing_indicators(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_draw_compositing_indicators(FSetting);
end;

procedure TWkSettings.set_draw_compositing_indicators(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_draw_compositing_indicators(FSetting, enabled);
end;

function TWkSettings.get_enable_site_specific_quirks(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_site_specific_quirks(FSetting);
end;

procedure TWkSettings.set_enable_site_specific_quirks(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_site_specific_quirks(FSetting, enabled);
end;

function TWkSettings.get_enable_page_cache(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_page_cache(FSetting);
end;

procedure TWkSettings.set_enable_page_cache(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_page_cache(FSetting, enabled);
end;

function TWkSettings.get_user_agent(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_user_agent(FSetting));
end;

procedure TWkSettings.set_user_agent(user_agent: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_user_agent(FSetting, Pgchar(user_agent));
end;

procedure TWkSettings.set_user_agent_with_application_details(application_name: string; application_version: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_user_agent_with_application_details(FSetting, Pgchar(application_name), Pgchar(application_version));
end;

function TWkSettings.get_enable_smooth_scrolling(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_smooth_scrolling(FSetting);
end;

procedure TWkSettings.set_enable_smooth_scrolling(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_smooth_scrolling(FSetting, enabled);
end;

function TWkSettings.get_enable_2d_canvas_acceleration(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_2d_canvas_acceleration(FSetting);
end;

procedure TWkSettings.set_enable_2d_canvas_acceleration(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_2d_canvas_acceleration(FSetting, enabled);
end;

function TWkSettings.get_enable_write_console_messages_to_stdout(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_write_console_messages_to_stdout(FSetting);
end;

procedure TWkSettings.set_enable_write_console_messages_to_stdout(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_write_console_messages_to_stdout(FSetting, enabled);
end;

function TWkSettings.get_enable_media_stream(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_media_stream(FSetting);
end;

procedure TWkSettings.set_enable_media_stream(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_media_stream(FSetting, enabled);
end;

function TWkSettings.get_enable_mock_capture_devices(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_mock_capture_devices(FSetting);
end;

procedure TWkSettings.set_enable_mock_capture_devices(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_mock_capture_devices(FSetting, enabled);
end;

function TWkSettings.get_enable_spatial_navigation(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_spatial_navigation(FSetting);
end;

procedure TWkSettings.set_enable_spatial_navigation(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_spatial_navigation(FSetting, enabled);
end;

function TWkSettings.get_enable_mediasource(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_mediasource(FSetting);
end;

procedure TWkSettings.set_enable_mediasource(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_mediasource(FSetting, enabled);
end;

function TWkSettings.get_enable_encrypted_media(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_encrypted_media(FSetting);
end;

procedure TWkSettings.set_enable_encrypted_media(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_encrypted_media(FSetting, enabled);
end;

function TWkSettings.get_enable_media_capabilities(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_media_capabilities(FSetting);
end;

procedure TWkSettings.set_enable_media_capabilities(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_media_capabilities(FSetting, enabled);
end;

function TWkSettings.get_allow_file_access_from_file_urls(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_allow_file_access_from_file_urls(FSetting);
end;

procedure TWkSettings.set_allow_file_access_from_file_urls(allowed: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_allow_file_access_from_file_urls(FSetting, allowed);
end;

function TWkSettings.get_allow_universal_access_from_file_urls(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_allow_universal_access_from_file_urls(FSetting);
end;

procedure TWkSettings.set_allow_universal_access_from_file_urls(allowed: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_allow_universal_access_from_file_urls(FSetting, allowed);
end;

function TWkSettings.get_allow_top_navigation_to_data_urls(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_allow_top_navigation_to_data_urls(FSetting);
end;

procedure TWkSettings.set_allow_top_navigation_to_data_urls(allowed: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_allow_top_navigation_to_data_urls(FSetting, allowed);
end;

function TWkSettings.get_hardware_acceleration_policy(): WebKitHardwareAccelerationPolicy;
begin
  Result := WEBKIT_HARDWARE_ACCELERATION_POLICY_ON_DEMAND;
  if Assigned(FSetting) then
    Result := webkit_settings_get_hardware_acceleration_policy(FSetting);
end;

procedure TWkSettings.set_hardware_acceleration_policy(policy: WebKitHardwareAccelerationPolicy);
begin
  if Assigned(FSetting) then
    webkit_settings_set_hardware_acceleration_policy(FSetting, policy);
end;

function TWkSettings.get_enable_back_forward_navigation_gestures(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_back_forward_navigation_gestures(FSetting);
end;

procedure TWkSettings.set_enable_back_forward_navigation_gestures(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_back_forward_navigation_gestures(FSetting, enabled);
end;

function TWkSettings.get_enable_javascript_markup(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_javascript_markup(FSetting);
end;

procedure TWkSettings.set_enable_javascript_markup(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_javascript_markup(FSetting, enabled);
end;

function TWkSettings.get_enable_media(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_media(FSetting);
end;

procedure TWkSettings.set_enable_media(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_media(FSetting, enabled);
end;

function TWkSettings.get_media_content_types_requiring_hardware_support(): string;
begin
  Result := '';
  if Assigned(FSetting) then
    Result := string(webkit_settings_get_media_content_types_requiring_hardware_support(FSetting));
end;

procedure TWkSettings.set_media_content_types_requiring_hardware_support(content_types: string);
begin
  if Assigned(FSetting) then
    webkit_settings_set_media_content_types_requiring_hardware_support(FSetting, Pgchar(content_types));
end;

function TWkSettings.get_enable_webrtc(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_enable_webrtc(FSetting);
end;

procedure TWkSettings.set_enable_webrtc(enabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_enable_webrtc(FSetting, enabled);
end;

function TWkSettings.get_disable_web_security(): boolean;
begin
  Result := false;
  if Assigned(FSetting) then
    Result := webkit_settings_get_disable_web_security(FSetting);
end;

procedure TWkSettings.set_disable_web_security(disabled: boolean);
begin
  if Assigned(FSetting) then
    webkit_settings_set_disable_web_security(FSetting, disabled);
end;



end.
