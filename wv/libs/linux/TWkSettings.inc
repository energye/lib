// constructor
function TWkSettings_Create(): TWkSettings; extdecl;
begin
  {$define handleExceptionID := 3000}
  handleExceptionBegin
  Result := TWkSettings.Create();
  handleExceptionEnd
end;

// constructor
function TWkSettings_CreateWithWebKitSettings(aSetting: WebKitSettings): TWkSettings; extdecl;
begin
  {$define handleExceptionID := 3001}
  handleExceptionBegin
  Result := TWkSettings.Create(aSetting);
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_javascript(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3002}
  handleExceptionBegin
  Result := AObj.get_enable_javascript();
  handleExceptionEnd
end;

// function
function TWkSettings_get_auto_load_images(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3003}
  handleExceptionBegin
  Result := AObj.get_auto_load_images();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_html5_local_storage(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3004}
  handleExceptionBegin
  Result := AObj.get_enable_html5_local_storage();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_html5_database(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3005}
  handleExceptionBegin
  Result := AObj.get_enable_html5_database();
  handleExceptionEnd
end;

// function
function TWkSettings_get_javascript_can_open_windows_automatically(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3006}
  handleExceptionBegin
  Result := AObj.get_javascript_can_open_windows_automatically();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_hyperlink_auditing(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3007}
  handleExceptionBegin
  Result := AObj.get_enable_hyperlink_auditing();
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_default_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3008}
  handleExceptionBegin
  StringBufferCreate(AObj.get_default_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_monospace_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3009}
  handleExceptionBegin
  StringBufferCreate(AObj.get_monospace_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_serif_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3010}
  handleExceptionBegin
  StringBufferCreate(AObj.get_serif_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_sans_serif_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3011}
  handleExceptionBegin
  StringBufferCreate(AObj.get_sans_serif_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_cursive_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3012}
  handleExceptionBegin
  StringBufferCreate(AObj.get_cursive_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_fantasy_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3013}
  handleExceptionBegin
  StringBufferCreate(AObj.get_fantasy_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_pictograph_font_family(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3014}
  handleExceptionBegin
  StringBufferCreate(AObj.get_pictograph_font_family(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkSettings_get_default_font_size(AObj: TWkSettings): integer; extdecl;
begin
  {$define handleExceptionID := 3015}
  handleExceptionBegin
  Result := AObj.get_default_font_size();
  handleExceptionEnd
end;

// function
function TWkSettings_get_default_monospace_font_size(AObj: TWkSettings): integer; extdecl;
begin
  {$define handleExceptionID := 3016}
  handleExceptionBegin
  Result := AObj.get_default_monospace_font_size();
  handleExceptionEnd
end;

// function
function TWkSettings_get_minimum_font_size(AObj: TWkSettings): integer; extdecl;
begin
  {$define handleExceptionID := 3017}
  handleExceptionBegin
  Result := AObj.get_minimum_font_size();
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_default_charset(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3018}
  handleExceptionBegin
  StringBufferCreate(AObj.get_default_charset(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_developer_extras(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3019}
  handleExceptionBegin
  Result := AObj.get_enable_developer_extras();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_resizable_text_areas(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3020}
  handleExceptionBegin
  Result := AObj.get_enable_resizable_text_areas();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_tabs_to_links(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3021}
  handleExceptionBegin
  Result := AObj.get_enable_tabs_to_links();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_caret_browsing(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3022}
  handleExceptionBegin
  Result := AObj.get_enable_caret_browsing();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_fullscreen(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3023}
  handleExceptionBegin
  Result := AObj.get_enable_fullscreen();
  handleExceptionEnd
end;

// function
function TWkSettings_get_print_backgrounds(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3024}
  handleExceptionBegin
  Result := AObj.get_print_backgrounds();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_webaudio(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3025}
  handleExceptionBegin
  Result := AObj.get_enable_webaudio();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_webgl(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3026}
  handleExceptionBegin
  Result := AObj.get_enable_webgl();
  handleExceptionEnd
end;

// function
function TWkSettings_get_allow_modal_dialogs(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3027}
  handleExceptionBegin
  Result := AObj.get_allow_modal_dialogs();
  handleExceptionEnd
end;

// function
function TWkSettings_get_zoom_text_only(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3028}
  handleExceptionBegin
  Result := AObj.get_zoom_text_only();
  handleExceptionEnd
end;

// function
function TWkSettings_get_javascript_can_access_clipboard(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3029}
  handleExceptionBegin
  Result := AObj.get_javascript_can_access_clipboard();
  handleExceptionEnd
end;

// function
function TWkSettings_get_media_playback_requires_user_gesture(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3030}
  handleExceptionBegin
  Result := AObj.get_media_playback_requires_user_gesture();
  handleExceptionEnd
end;

// function
function TWkSettings_get_media_playback_allows_inline(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3031}
  handleExceptionBegin
  Result := AObj.get_media_playback_allows_inline();
  handleExceptionEnd
end;

// function
function TWkSettings_get_draw_compositing_indicators(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3032}
  handleExceptionBegin
  Result := AObj.get_draw_compositing_indicators();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_site_specific_quirks(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3033}
  handleExceptionBegin
  Result := AObj.get_enable_site_specific_quirks();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_page_cache(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3034}
  handleExceptionBegin
  Result := AObj.get_enable_page_cache();
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_user_agent(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3035}
  handleExceptionBegin
  StringBufferCreate(AObj.get_user_agent(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_smooth_scrolling(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3036}
  handleExceptionBegin
  Result := AObj.get_enable_smooth_scrolling();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_2d_canvas_acceleration(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3037}
  handleExceptionBegin
  Result := AObj.get_enable_2d_canvas_acceleration();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_write_console_messages_to_stdout(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3038}
  handleExceptionBegin
  Result := AObj.get_enable_write_console_messages_to_stdout();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_media_stream(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3039}
  handleExceptionBegin
  Result := AObj.get_enable_media_stream();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_mock_capture_devices(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3040}
  handleExceptionBegin
  Result := AObj.get_enable_mock_capture_devices();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_spatial_navigation(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3041}
  handleExceptionBegin
  Result := AObj.get_enable_spatial_navigation();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_mediasource(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3042}
  handleExceptionBegin
  Result := AObj.get_enable_mediasource();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_encrypted_media(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3043}
  handleExceptionBegin
  Result := AObj.get_enable_encrypted_media();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_media_capabilities(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3044}
  handleExceptionBegin
  Result := AObj.get_enable_media_capabilities();
  handleExceptionEnd
end;

// function
function TWkSettings_get_allow_file_access_from_file_urls(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3045}
  handleExceptionBegin
  Result := AObj.get_allow_file_access_from_file_urls();
  handleExceptionEnd
end;

// function
function TWkSettings_get_allow_universal_access_from_file_urls(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3046}
  handleExceptionBegin
  Result := AObj.get_allow_universal_access_from_file_urls();
  handleExceptionEnd
end;

// function
function TWkSettings_get_allow_top_navigation_to_data_urls(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3047}
  handleExceptionBegin
  Result := AObj.get_allow_top_navigation_to_data_urls();
  handleExceptionEnd
end;

// function
function TWkSettings_get_hardware_acceleration_policy(AObj: TWkSettings): WebKitHardwareAccelerationPolicy; extdecl;
begin
  {$define handleExceptionID := 3048}
  handleExceptionBegin
  Result := AObj.get_hardware_acceleration_policy();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_back_forward_navigation_gestures(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3049}
  handleExceptionBegin
  Result := AObj.get_enable_back_forward_navigation_gestures();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_javascript_markup(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3050}
  handleExceptionBegin
  Result := AObj.get_enable_javascript_markup();
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_media(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3051}
  handleExceptionBegin
  Result := AObj.get_enable_media();
  handleExceptionEnd
end;

// function
procedure TWkSettings_get_media_content_types_requiring_hardware_support(AObj: TWkSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3052}
  handleExceptionBegin
  StringBufferCreate(AObj.get_media_content_types_requiring_hardware_support(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkSettings_get_enable_webrtc(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3053}
  handleExceptionBegin
  Result := AObj.get_enable_webrtc();
  handleExceptionEnd
end;

// function
function TWkSettings_get_disable_web_security(AObj: TWkSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 3054}
  handleExceptionBegin
  Result := AObj.get_disable_web_security();
  handleExceptionEnd
end;

// function
function TWkSettings_Data(AObj: TWkSettings): WebKitSettings; extdecl;
begin
  {$define handleExceptionID := 3055}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_javascript(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3056}
  handleExceptionBegin
  AObj.set_enable_javascript(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_auto_load_images(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3057}
  handleExceptionBegin
  AObj.set_auto_load_images(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_html5_local_storage(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3058}
  handleExceptionBegin
  AObj.set_enable_html5_local_storage(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_html5_database(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3059}
  handleExceptionBegin
  AObj.set_enable_html5_database(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_javascript_can_open_windows_automatically(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3060}
  handleExceptionBegin
  AObj.set_javascript_can_open_windows_automatically(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_hyperlink_auditing(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3061}
  handleExceptionBegin
  AObj.set_enable_hyperlink_auditing(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_default_font_family(AObj: TWkSettings; default_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3062}
  handleExceptionBegin
  AObj.set_default_font_family(default_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_monospace_font_family(AObj: TWkSettings; monospace_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3063}
  handleExceptionBegin
  AObj.set_monospace_font_family(monospace_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_serif_font_family(AObj: TWkSettings; serif_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3064}
  handleExceptionBegin
  AObj.set_serif_font_family(serif_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_sans_serif_font_family(AObj: TWkSettings; sans_serif_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3065}
  handleExceptionBegin
  AObj.set_sans_serif_font_family(sans_serif_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_cursive_font_family(AObj: TWkSettings; cursive_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3066}
  handleExceptionBegin
  AObj.set_cursive_font_family(cursive_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_fantasy_font_family(AObj: TWkSettings; fantasy_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3067}
  handleExceptionBegin
  AObj.set_fantasy_font_family(fantasy_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_pictograph_font_family(AObj: TWkSettings; pictograph_font_family: PChar); extdecl;
begin
  {$define handleExceptionID := 3068}
  handleExceptionBegin
  AObj.set_pictograph_font_family(pictograph_font_family);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_default_font_size(AObj: TWkSettings; font_size: integer); extdecl;
begin
  {$define handleExceptionID := 3069}
  handleExceptionBegin
  AObj.set_default_font_size(font_size);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_default_monospace_font_size(AObj: TWkSettings; font_size: integer); extdecl;
begin
  {$define handleExceptionID := 3070}
  handleExceptionBegin
  AObj.set_default_monospace_font_size(font_size);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_minimum_font_size(AObj: TWkSettings; font_size: integer); extdecl;
begin
  {$define handleExceptionID := 3071}
  handleExceptionBegin
  AObj.set_minimum_font_size(font_size);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_default_charset(AObj: TWkSettings; default_charset: PChar); extdecl;
begin
  {$define handleExceptionID := 3072}
  handleExceptionBegin
  AObj.set_default_charset(default_charset);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_developer_extras(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3073}
  handleExceptionBegin
  AObj.set_enable_developer_extras(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_resizable_text_areas(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3074}
  handleExceptionBegin
  AObj.set_enable_resizable_text_areas(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_tabs_to_links(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3075}
  handleExceptionBegin
  AObj.set_enable_tabs_to_links(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_caret_browsing(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3076}
  handleExceptionBegin
  AObj.set_enable_caret_browsing(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_fullscreen(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3077}
  handleExceptionBegin
  AObj.set_enable_fullscreen(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_print_backgrounds(AObj: TWkSettings; print_backgrounds: LongBool); extdecl;
begin
  {$define handleExceptionID := 3078}
  handleExceptionBegin
  AObj.set_print_backgrounds(print_backgrounds);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_webaudio(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3079}
  handleExceptionBegin
  AObj.set_enable_webaudio(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_webgl(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3080}
  handleExceptionBegin
  AObj.set_enable_webgl(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_allow_modal_dialogs(AObj: TWkSettings; allowed: LongBool); extdecl;
begin
  {$define handleExceptionID := 3081}
  handleExceptionBegin
  AObj.set_allow_modal_dialogs(allowed);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_zoom_text_only(AObj: TWkSettings; zoom_text_only: LongBool); extdecl;
begin
  {$define handleExceptionID := 3082}
  handleExceptionBegin
  AObj.set_zoom_text_only(zoom_text_only);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_javascript_can_access_clipboard(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3083}
  handleExceptionBegin
  AObj.set_javascript_can_access_clipboard(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_media_playback_requires_user_gesture(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3084}
  handleExceptionBegin
  AObj.set_media_playback_requires_user_gesture(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_media_playback_allows_inline(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3085}
  handleExceptionBegin
  AObj.set_media_playback_allows_inline(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_draw_compositing_indicators(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3086}
  handleExceptionBegin
  AObj.set_draw_compositing_indicators(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_site_specific_quirks(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3087}
  handleExceptionBegin
  AObj.set_enable_site_specific_quirks(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_page_cache(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3088}
  handleExceptionBegin
  AObj.set_enable_page_cache(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_user_agent(AObj: TWkSettings; user_agent: PChar); extdecl;
begin
  {$define handleExceptionID := 3089}
  handleExceptionBegin
  AObj.set_user_agent(user_agent);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_user_agent_with_application_details(AObj: TWkSettings; application_name: PChar; application_version: PChar); extdecl;
begin
  {$define handleExceptionID := 3090}
  handleExceptionBegin
  AObj.set_user_agent_with_application_details(application_name, application_version);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_smooth_scrolling(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3091}
  handleExceptionBegin
  AObj.set_enable_smooth_scrolling(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_2d_canvas_acceleration(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3092}
  handleExceptionBegin
  AObj.set_enable_2d_canvas_acceleration(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_write_console_messages_to_stdout(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3093}
  handleExceptionBegin
  AObj.set_enable_write_console_messages_to_stdout(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_media_stream(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3094}
  handleExceptionBegin
  AObj.set_enable_media_stream(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_mock_capture_devices(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3095}
  handleExceptionBegin
  AObj.set_enable_mock_capture_devices(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_spatial_navigation(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3096}
  handleExceptionBegin
  AObj.set_enable_spatial_navigation(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_mediasource(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3097}
  handleExceptionBegin
  AObj.set_enable_mediasource(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_encrypted_media(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3098}
  handleExceptionBegin
  AObj.set_enable_encrypted_media(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_media_capabilities(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3099}
  handleExceptionBegin
  AObj.set_enable_media_capabilities(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_allow_file_access_from_file_urls(AObj: TWkSettings; allowed: LongBool); extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  AObj.set_allow_file_access_from_file_urls(allowed);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_allow_universal_access_from_file_urls(AObj: TWkSettings; allowed: LongBool); extdecl;
begin
  {$define handleExceptionID := 3101}
  handleExceptionBegin
  AObj.set_allow_universal_access_from_file_urls(allowed);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_allow_top_navigation_to_data_urls(AObj: TWkSettings; allowed: LongBool); extdecl;
begin
  {$define handleExceptionID := 3102}
  handleExceptionBegin
  AObj.set_allow_top_navigation_to_data_urls(allowed);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_hardware_acceleration_policy(AObj: TWkSettings; policy: WebKitHardwareAccelerationPolicy); extdecl;
begin
  {$define handleExceptionID := 3103}
  handleExceptionBegin
  AObj.set_hardware_acceleration_policy(policy);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_back_forward_navigation_gestures(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3104}
  handleExceptionBegin
  AObj.set_enable_back_forward_navigation_gestures(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_javascript_markup(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3105}
  handleExceptionBegin
  AObj.set_enable_javascript_markup(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_media(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3106}
  handleExceptionBegin
  AObj.set_enable_media(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_media_content_types_requiring_hardware_support(AObj: TWkSettings; content_types: PChar); extdecl;
begin
  {$define handleExceptionID := 3107}
  handleExceptionBegin
  AObj.set_media_content_types_requiring_hardware_support(content_types);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_enable_webrtc(AObj: TWkSettings; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3108}
  handleExceptionBegin
  AObj.set_enable_webrtc(enabled);
  handleExceptionEnd
end;

// procedure
procedure TWkSettings_set_disable_web_security(AObj: TWkSettings; disabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 3109}
  handleExceptionBegin
  AObj.set_disable_web_security(disabled);
  handleExceptionEnd
end;

exports
  TWkSettings_Create,
  TWkSettings_CreateWithWebKitSettings,
  TWkSettings_get_enable_javascript,
  TWkSettings_get_auto_load_images,
  TWkSettings_get_enable_html5_local_storage,
  TWkSettings_get_enable_html5_database,
  TWkSettings_get_javascript_can_open_windows_automatically,
  TWkSettings_get_enable_hyperlink_auditing,
  TWkSettings_get_default_font_family,
  TWkSettings_get_monospace_font_family,
  TWkSettings_get_serif_font_family,
  TWkSettings_get_sans_serif_font_family,
  TWkSettings_get_cursive_font_family,
  TWkSettings_get_fantasy_font_family,
  TWkSettings_get_pictograph_font_family,
  TWkSettings_get_default_font_size,
  TWkSettings_get_default_monospace_font_size,
  TWkSettings_get_minimum_font_size,
  TWkSettings_get_default_charset,
  TWkSettings_get_enable_developer_extras,
  TWkSettings_get_enable_resizable_text_areas,
  TWkSettings_get_enable_tabs_to_links,
  TWkSettings_get_enable_caret_browsing,
  TWkSettings_get_enable_fullscreen,
  TWkSettings_get_print_backgrounds,
  TWkSettings_get_enable_webaudio,
  TWkSettings_get_enable_webgl,
  TWkSettings_get_allow_modal_dialogs,
  TWkSettings_get_zoom_text_only,
  TWkSettings_get_javascript_can_access_clipboard,
  TWkSettings_get_media_playback_requires_user_gesture,
  TWkSettings_get_media_playback_allows_inline,
  TWkSettings_get_draw_compositing_indicators,
  TWkSettings_get_enable_site_specific_quirks,
  TWkSettings_get_enable_page_cache,
  TWkSettings_get_user_agent,
  TWkSettings_get_enable_smooth_scrolling,
  TWkSettings_get_enable_2d_canvas_acceleration,
  TWkSettings_get_enable_write_console_messages_to_stdout,
  TWkSettings_get_enable_media_stream,
  TWkSettings_get_enable_mock_capture_devices,
  TWkSettings_get_enable_spatial_navigation,
  TWkSettings_get_enable_mediasource,
  TWkSettings_get_enable_encrypted_media,
  TWkSettings_get_enable_media_capabilities,
  TWkSettings_get_allow_file_access_from_file_urls,
  TWkSettings_get_allow_universal_access_from_file_urls,
  TWkSettings_get_allow_top_navigation_to_data_urls,
  TWkSettings_get_hardware_acceleration_policy,
  TWkSettings_get_enable_back_forward_navigation_gestures,
  TWkSettings_get_enable_javascript_markup,
  TWkSettings_get_enable_media,
  TWkSettings_get_media_content_types_requiring_hardware_support,
  TWkSettings_get_enable_webrtc,
  TWkSettings_get_disable_web_security,
  TWkSettings_Data,
  TWkSettings_set_enable_javascript,
  TWkSettings_set_auto_load_images,
  TWkSettings_set_enable_html5_local_storage,
  TWkSettings_set_enable_html5_database,
  TWkSettings_set_javascript_can_open_windows_automatically,
  TWkSettings_set_enable_hyperlink_auditing,
  TWkSettings_set_default_font_family,
  TWkSettings_set_monospace_font_family,
  TWkSettings_set_serif_font_family,
  TWkSettings_set_sans_serif_font_family,
  TWkSettings_set_cursive_font_family,
  TWkSettings_set_fantasy_font_family,
  TWkSettings_set_pictograph_font_family,
  TWkSettings_set_default_font_size,
  TWkSettings_set_default_monospace_font_size,
  TWkSettings_set_minimum_font_size,
  TWkSettings_set_default_charset,
  TWkSettings_set_enable_developer_extras,
  TWkSettings_set_enable_resizable_text_areas,
  TWkSettings_set_enable_tabs_to_links,
  TWkSettings_set_enable_caret_browsing,
  TWkSettings_set_enable_fullscreen,
  TWkSettings_set_print_backgrounds,
  TWkSettings_set_enable_webaudio,
  TWkSettings_set_enable_webgl,
  TWkSettings_set_allow_modal_dialogs,
  TWkSettings_set_zoom_text_only,
  TWkSettings_set_javascript_can_access_clipboard,
  TWkSettings_set_media_playback_requires_user_gesture,
  TWkSettings_set_media_playback_allows_inline,
  TWkSettings_set_draw_compositing_indicators,
  TWkSettings_set_enable_site_specific_quirks,
  TWkSettings_set_enable_page_cache,
  TWkSettings_set_user_agent,
  TWkSettings_set_user_agent_with_application_details,
  TWkSettings_set_enable_smooth_scrolling,
  TWkSettings_set_enable_2d_canvas_acceleration,
  TWkSettings_set_enable_write_console_messages_to_stdout,
  TWkSettings_set_enable_media_stream,
  TWkSettings_set_enable_mock_capture_devices,
  TWkSettings_set_enable_spatial_navigation,
  TWkSettings_set_enable_mediasource,
  TWkSettings_set_enable_encrypted_media,
  TWkSettings_set_enable_media_capabilities,
  TWkSettings_set_allow_file_access_from_file_urls,
  TWkSettings_set_allow_universal_access_from_file_urls,
  TWkSettings_set_allow_top_navigation_to_data_urls,
  TWkSettings_set_hardware_acceleration_policy,
  TWkSettings_set_enable_back_forward_navigation_gestures,
  TWkSettings_set_enable_javascript_markup,
  TWkSettings_set_enable_media,
  TWkSettings_set_media_content_types_requiring_hardware_support,
  TWkSettings_set_enable_webrtc,
  TWkSettings_set_disable_web_security;