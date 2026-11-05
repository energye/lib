unit uCEFRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses {$IFDEF LINUX}xlib,{$ENDIF}{$IFnDEF MSWINDOWS} LCLType,{$ENDIF}{$IFDEF MSWINDOWS} Windows,{$ENDIF} Types, Classes, SysUtils, Graphics, Controls, uCEFTypes, uCEFMiscFunctions, uCEFInterfaces, uTools;

type


  TCefAudioParametersPtr = record
    channel_layout: Integer; // TCefChannelLayout
    sample_rate: integer; // integer
    frames_per_buffer: integer; // integer
  end;

  TCefInsetsPtr = record
    top: Integer; // Integer
    left: Integer; // Integer
    bottom: Integer; // Integer
    right: Integer; // Integer
  end;

  TCefBoxLayoutSettingsPtr = record
    horizontal: Integer; // Integer
    inside_border_horizontal_spacing: Integer; // Integer
    inside_border_vertical_spacing: Integer; // Integer
    inside_border_insets: TCefInsetsPtr; // TCefInsets
    between_child_spacing: Integer; // Integer
    main_axis_alignment: Integer; // TCefMainAxisAlignment
    cross_axis_alignment: Integer; // TCefCrossAxisAlignment
    minimum_cross_axis_size: Integer; // Integer
    default_flex: Integer; // Integer
  end;

  TCefBrowserSettingsPtr = record
    windowless_frame_rate: Integer; // Integer
    standard_font_family: PChar; // TCefString
    fixed_font_family: PChar; // TCefString
    serif_font_family: PChar; // TCefString
    sans_serif_font_family: PChar; // TCefString
    cursive_font_family: PChar; // TCefString
    fantasy_font_family: PChar; // TCefString
    default_font_size: Integer; // Integer
    default_fixed_font_size: Integer; // Integer
    minimum_font_size: Integer; // Integer
    minimum_logical_font_size: Integer; // Integer
    default_encoding: PChar; // TCefString
    remote_fonts: Integer; // TCefState
    javascript: Integer; // TCefState
    javascript_close_windows: Integer; // TCefState
    javascript_access_clipboard: Integer; // TCefState
    javascript_dom_paste: Integer; // TCefState
    image_loading: Integer; // TCefState
    image_shrink_standalone_to_fit: Integer; // TCefState
    text_area_resize: Integer; // TCefState
    tab_to_links: Integer; // TCefState
    local_storage: Integer; // TCefState
    databases: Integer; // TCefState
    webgl: Integer; // TCefState
    background_color: TCefColor; // TCefColor
    accept_language_list: PChar; // TCefString
    chrome_status_bubble: Integer; // TCefState
  end;

  TCefCookiePtr = record
    name: PChar; // TCefString
    value: PChar; // TCefString
    domain: PChar; // TCefString
    path: PChar; // TCefString
    secure: Integer; // Integer
    httponly: Integer; // Integer
    creation: TCefBaseTime; // TCefBaseTime
    last_access: TCefBaseTime; // TCefBaseTime
    has_expires: Integer; // Integer
    expires: TCefBaseTime; // TCefBaseTime
    same_site: Integer; // TCefCookieSameSite
    priority: TCefCookiePriority; // TCefCookiePriority
  end;

  TCefCookieManagerRefSetCookieArgs = record
    url: ustring; // ustring
    name: ustring; // ustring
    value: ustring; // ustring
    domain: ustring; // ustring
    path: ustring; // ustring
    secure: Boolean; // Boolean
    httponly: Boolean; // Boolean
    hasExpires: Boolean; // Boolean
    creation: TDateTime; // TDateTime
    lastAccess: TDateTime; // TDateTime
    expires: TDateTime; // TDateTime
    same_site: TCefCookieSameSite; // TCefCookieSameSite
    priority: TCefCookiePriority; // TCefCookiePriority
    callback: ICefSetCookieCallback; // ICefSetCookieCallback
  end;

  TCefCookieManagerRefSetCookieArgsPtr = record
    url: PChar; // ustring
    name: PChar; // ustring
    value: PChar; // ustring
    domain: PChar; // ustring
    path: PChar; // ustring
    secure: LongBool; // Boolean
    httponly: LongBool; // Boolean
    hasExpires: LongBool; // Boolean
    creation: Double; // TDateTime
    lastAccess: Double; // TDateTime
    expires: Double; // TDateTime
    same_site: Integer; // TCefCookieSameSite
    priority: TCefCookiePriority; // TCefCookiePriority
    callback: ICefSetCookieCallback; // ICefSetCookieCallback
  end;

  TCefPointPtr = record
    x: Integer; // Integer
    y: Integer; // Integer
  end;

  TCefSizePtr = record
    width: Integer; // Integer
    height: Integer; // Integer
  end;

  TCefCursorInfoPtr = record
    hotspot: TCefPointPtr; // TCefPoint
    image_scale_factor: Single; // Single
    buffer: Pointer; // Pointer
    size: TCefSizePtr; // TCefSize
  end;

  TCefKeyEventPtr = record
    kind: Integer; // TCefKeyEventType
    modifiers: TCefEventFlags; // TCefEventFlags
    windows_key_code: Integer; // Integer
    native_key_code: Integer; // Integer
    is_system_key: Integer; // Integer
    character: WideChar; // WideChar
    unmodified_character: WideChar; // WideChar
    focus_on_editable_field: Integer; // Integer
  end;

  TCefMouseEventPtr = record
    x: Integer; // Integer
    y: Integer; // Integer
    modifiers: TCefEventFlags; // TCefEventFlags
  end;

  TCefPdfPrintSettingsPtr = record
    landscape: Integer; // Integer
    print_background: Integer; // Integer
    scale: double; // double
    paper_width: double; // double
    paper_height: double; // double
    prefer_css_page_size: Integer; // Integer
    margin_type: Integer; // TCefPdfPrintMarginType
    margin_top: double; // double
    margin_right: double; // double
    margin_bottom: double; // double
    margin_left: double; // double
    page_ranges: PChar; // TCefString
    display_header_footer: Integer; // Integer
    header_template: PChar; // TCefString
    footer_template: PChar; // TCefString
  end;

  TCefPopupFeaturesPtr = record
    x: Integer; // Integer
    xSet: Integer; // Integer
    y: Integer; // Integer
    ySet: Integer; // Integer
    width: Integer; // Integer
    widthSet: Integer; // Integer
    height: Integer; // Integer
    heightSet: Integer; // Integer
    menuBarVisible: Integer; // Integer
    statusBarVisible: Integer; // Integer
    toolBarVisible: Integer; // Integer
    scrollbarsVisible: Integer; // Integer
  end;

  TCefBaseScopedPtr = record
    del: procedure(self:PCefBaseScoped); stdcall; // procedure(self:PCefBaseScoped); stdcall
  end;

  TCefPreferenceRegistrarPtr = record
    base: TCefBaseScopedPtr; // TCefBaseScoped
    add_preference: function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall; // function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall
  end;

  TCefRangePtr = record
    from: Integer; // Integer
    to_: Integer; // Integer
  end;

  TCefRectPtr = record
    x: Integer; // Integer
    y: Integer; // Integer
    width: Integer; // Integer
    height: Integer; // Integer
  end;

  TCefRequestContextSettingsPtr = record
    cache_path: PChar; // TCefString
    persist_session_cookies: Integer; // Integer
    persist_user_preferences: Integer; // Integer
    accept_language_list: PChar; // TCefString
    cookieable_schemes_list: PChar; // TCefString
    cookieable_schemes_exclude_defaults: integer; // integer
  end;

  TCefScreenInfoPtr = record
    device_scale_factor: single; // single
    depth: integer; // integer
    depth_per_component: integer; // integer
    is_monochrome: integer; // integer
    rect: TCefRectPtr; // TCefRect
    available_rect: TCefRectPtr; // TCefRect
  end;

  TCefTimePtr = record
    year: Integer; // Integer
    month: Integer; // Integer
    day_of_week: Integer; // Integer
    day_of_month: Integer; // Integer
    hour: Integer; // Integer
    minute: Integer; // Integer
    second: Integer; // Integer
    millisecond: Integer; // Integer
  end;

  TCefTouchEventPtr = record
    id: integer; // integer
    x: single; // single
    y: single; // single
    radius_x: single; // single
    radius_y: single; // single
    rotation_angle: single; // single
    pressure: single; // single
    type_: Integer; // TCefTouchEeventType
    modifiers: TCefEventFlags; // TCefEventFlags
    pointer_type: Integer; // TCefPointerType
  end;

  TCefTouchHandleStatePtr = record
    touch_handle_id: integer; // integer
    flags: cardinal; // cardinal
    enabled: integer; // integer
    orientation: Integer; // TCefHorizontalAlignment
    mirror_vertical: integer; // integer
    mirror_horizontal: integer; // integer
    origin: TCefPointPtr; // TCefPoint
    alpha: single; // single
  end;

  TCefWindowInfoPtr = record
  {$IFDEF MSWINDOWS}
    ex_style: DWORD; // DWORD
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    window_name: PChar; // TCefString
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    style: DWORD; // DWORD
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    bounds: TCefRectPtr; // TCefRect
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    parent_window: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    menu: HMENU; // HMENU
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    windowless_rendering_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    shared_texture_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    external_begin_frame_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MSWINDOWS}
    window: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  {$IFDEF MACOSX}
    window_name: PChar; // TCefString
  {$ENDIF}
  {$IFDEF MACOSX}
    bounds: TCefRectPtr; // TCefRect
  {$ENDIF}
  {$IFDEF MACOSX}
    hidden: Integer; // Integer
  {$ENDIF}
  {$IFDEF MACOSX}
    parent_view: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  {$IFDEF MACOSX}
    windowless_rendering_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MACOSX}
    shared_texture_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MACOSX}
    external_begin_frame_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF MACOSX}
    view: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  {$IFDEF LINUX}
    window_name: PChar; // TCefString
  {$ENDIF}
  {$IFDEF LINUX}
    bounds: TCefRectPtr; // TCefRect
  {$ENDIF}
  {$IFDEF LINUX}
    parent_window: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  {$IFDEF LINUX}
    windowless_rendering_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF LINUX}
    shared_texture_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF LINUX}
    external_begin_frame_enabled: Integer; // Integer
  {$ENDIF}
  {$IFDEF LINUX}
    window: TCefWindowHandle; // TCefWindowHandle
  {$ENDIF}
  end;

  TChromiumCoreSetCookieArgs = record
    url: ustring; // ustring
    name_: ustring; // ustring
    value: ustring; // ustring
    domain: ustring; // ustring
    path: ustring; // ustring
    secure: Boolean; // Boolean
    httponly: Boolean; // Boolean
    hasExpires: Boolean; // Boolean
    creation: TDateTime; // TDateTime
    lastAccess: TDateTime; // TDateTime
    expires: TDateTime; // TDateTime
    same_site: TCefCookieSameSite; // TCefCookieSameSite
    priority: TCefCookiePriority; // TCefCookiePriority
    aSetImmediately: boolean; // boolean
    aID: integer; // integer
  end;

  TChromiumCoreSetCookieArgsPtr = record
    url: PChar; // ustring
    name_: PChar; // ustring
    value: PChar; // ustring
    domain: PChar; // ustring
    path: PChar; // ustring
    secure: LongBool; // Boolean
    httponly: LongBool; // Boolean
    hasExpires: LongBool; // Boolean
    creation: Double; // TDateTime
    lastAccess: Double; // TDateTime
    expires: Double; // TDateTime
    same_site: Integer; // TCefCookieSameSite
    priority: TCefCookiePriority; // TCefCookiePriority
    aSetImmediately: LongBool; // boolean
    aID: integer; // integer
  end;

// TCefAudioParameters
function TCefAudioParametersToGo(const ACefAudioParameters: TCefAudioParameters): TCefAudioParametersPtr;
function TCefAudioParametersToPas(const ACefAudioParameters: TCefAudioParametersPtr): TCefAudioParameters;

// TCefBaseScoped
function TCefBaseScopedToGo(const ACefBaseScoped: TCefBaseScoped): TCefBaseScopedPtr;
function TCefBaseScopedToPas(const ACefBaseScoped: TCefBaseScopedPtr): TCefBaseScoped;

// TCefBoxLayoutSettings
function TCefBoxLayoutSettingsToGo(const ACefBoxLayoutSettings: TCefBoxLayoutSettings): TCefBoxLayoutSettingsPtr;
function TCefBoxLayoutSettingsToPas(const ACefBoxLayoutSettings: TCefBoxLayoutSettingsPtr): TCefBoxLayoutSettings;

// TCefBrowserSettings
function TCefBrowserSettingsToGo(const ACefBrowserSettings: TCefBrowserSettings): TCefBrowserSettingsPtr;
function TCefBrowserSettingsToPas(const ACefBrowserSettings: TCefBrowserSettingsPtr): TCefBrowserSettings;

// TCefCookie
function TCefCookieToGo(const ACefCookie: TCefCookie): TCefCookiePtr;
function TCefCookieToPas(const ACefCookie: TCefCookiePtr): TCefCookie;

// TCefCookieManagerRefSetCookieArgs
function TCefCookieManagerRefSetCookieArgsToGo(const ACefCookieManagerRefSetCookieArgs: TCefCookieManagerRefSetCookieArgs): TCefCookieManagerRefSetCookieArgsPtr;
function TCefCookieManagerRefSetCookieArgsToPas(const ACefCookieManagerRefSetCookieArgs: TCefCookieManagerRefSetCookieArgsPtr): TCefCookieManagerRefSetCookieArgs;

// TCefCursorInfo
function TCefCursorInfoToGo(const ACefCursorInfo: TCefCursorInfo): TCefCursorInfoPtr;
function TCefCursorInfoToPas(const ACefCursorInfo: TCefCursorInfoPtr): TCefCursorInfo;

// TCefInsets
function TCefInsetsToGo(const ACefInsets: TCefInsets): TCefInsetsPtr;
function TCefInsetsToPas(const ACefInsets: TCefInsetsPtr): TCefInsets;

// TCefKeyEvent
function TCefKeyEventToGo(const ACefKeyEvent: TCefKeyEvent): TCefKeyEventPtr;
function TCefKeyEventToPas(const ACefKeyEvent: TCefKeyEventPtr): TCefKeyEvent;

// TCefMouseEvent
function TCefMouseEventToGo(const ACefMouseEvent: TCefMouseEvent): TCefMouseEventPtr;
function TCefMouseEventToPas(const ACefMouseEvent: TCefMouseEventPtr): TCefMouseEvent;

// TCefPdfPrintSettings
function TCefPdfPrintSettingsToGo(const ACefPdfPrintSettings: TCefPdfPrintSettings): TCefPdfPrintSettingsPtr;
function TCefPdfPrintSettingsToPas(const ACefPdfPrintSettings: TCefPdfPrintSettingsPtr): TCefPdfPrintSettings;

// TCefPoint
function TCefPointToGo(const ACefPoint: TCefPoint): TCefPointPtr;
function TCefPointToPas(const ACefPoint: TCefPointPtr): TCefPoint;

// TCefPopupFeatures
function TCefPopupFeaturesToGo(const ACefPopupFeatures: TCefPopupFeatures): TCefPopupFeaturesPtr;
function TCefPopupFeaturesToPas(const ACefPopupFeatures: TCefPopupFeaturesPtr): TCefPopupFeatures;

// TCefPreferenceRegistrar
function TCefPreferenceRegistrarToGo(const ACefPreferenceRegistrar: TCefPreferenceRegistrar): TCefPreferenceRegistrarPtr;
function TCefPreferenceRegistrarToPas(const ACefPreferenceRegistrar: TCefPreferenceRegistrarPtr): TCefPreferenceRegistrar;

// TCefRange
function TCefRangeToGo(const ACefRange: TCefRange): TCefRangePtr;
function TCefRangeToPas(const ACefRange: TCefRangePtr): TCefRange;

// TCefRect
function TCefRectToGo(const ACefRect: TCefRect): TCefRectPtr;
function TCefRectToPas(const ACefRect: TCefRectPtr): TCefRect;

// TCefRequestContextSettings
function TCefRequestContextSettingsToGo(const ACefRequestContextSettings: TCefRequestContextSettings): TCefRequestContextSettingsPtr;
function TCefRequestContextSettingsToPas(const ACefRequestContextSettings: TCefRequestContextSettingsPtr): TCefRequestContextSettings;

// TCefScreenInfo
function TCefScreenInfoToGo(const ACefScreenInfo: TCefScreenInfo): TCefScreenInfoPtr;
function TCefScreenInfoToPas(const ACefScreenInfo: TCefScreenInfoPtr): TCefScreenInfo;

// TCefSize
function TCefSizeToGo(const ACefSize: TCefSize): TCefSizePtr;
function TCefSizeToPas(const ACefSize: TCefSizePtr): TCefSize;

// TCefTime
function TCefTimeToGo(const ACefTime: TCefTime): TCefTimePtr;
function TCefTimeToPas(const ACefTime: TCefTimePtr): TCefTime;

// TCefTouchEvent
function TCefTouchEventToGo(const ACefTouchEvent: TCefTouchEvent): TCefTouchEventPtr;
function TCefTouchEventToPas(const ACefTouchEvent: TCefTouchEventPtr): TCefTouchEvent;

// TCefTouchHandleState
function TCefTouchHandleStateToGo(const ACefTouchHandleState: TCefTouchHandleState): TCefTouchHandleStatePtr;
function TCefTouchHandleStateToPas(const ACefTouchHandleState: TCefTouchHandleStatePtr): TCefTouchHandleState;

// TCefWindowInfo
function TCefWindowInfoToGo(const ACefWindowInfo: TCefWindowInfo): TCefWindowInfoPtr;
function TCefWindowInfoToPas(const ACefWindowInfo: TCefWindowInfoPtr): TCefWindowInfo;

// TChromiumCoreSetCookieArgs
function TChromiumCoreSetCookieArgsToGo(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgs): TChromiumCoreSetCookieArgsPtr;
function TChromiumCoreSetCookieArgsToPas(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgsPtr): TChromiumCoreSetCookieArgs;

implementation

// TCefAudioParameters
function TCefAudioParametersToGo(const ACefAudioParameters: TCefAudioParameters): TCefAudioParametersPtr;
begin
  Result.channel_layout := Integer(ACefAudioParameters.channel_layout); // TCefChannelLayout
  Result.sample_rate := ACefAudioParameters.sample_rate; // integer
  Result.frames_per_buffer := ACefAudioParameters.frames_per_buffer; // integer
end;

function TCefAudioParametersToPas(const ACefAudioParameters: TCefAudioParametersPtr): TCefAudioParameters;
begin
  Result.channel_layout := TCefChannelLayout(ACefAudioParameters.channel_layout); // TCefChannelLayout
  Result.sample_rate := ACefAudioParameters.sample_rate; // integer
  Result.frames_per_buffer := ACefAudioParameters.frames_per_buffer; // integer
end;

// TCefBaseScoped
function TCefBaseScopedToGo(const ACefBaseScoped: TCefBaseScoped): TCefBaseScopedPtr;
begin
  Result.del := ACefBaseScoped.del; // procedure(self:PCefBaseScoped); stdcall
end;

function TCefBaseScopedToPas(const ACefBaseScoped: TCefBaseScopedPtr): TCefBaseScoped;
begin
  Result.size := SizeOf(TCefBaseScoped); // NativeUInt
  Result.del := ACefBaseScoped.del; // procedure(self:PCefBaseScoped); stdcall
end;

// TCefBoxLayoutSettings
function TCefBoxLayoutSettingsToGo(const ACefBoxLayoutSettings: TCefBoxLayoutSettings): TCefBoxLayoutSettingsPtr;
begin
  Result.horizontal := ACefBoxLayoutSettings.horizontal; // Integer
  Result.inside_border_horizontal_spacing := ACefBoxLayoutSettings.inside_border_horizontal_spacing; // Integer
  Result.inside_border_vertical_spacing := ACefBoxLayoutSettings.inside_border_vertical_spacing; // Integer
  Result.inside_border_insets := TCefInsetsToGo(ACefBoxLayoutSettings.inside_border_insets); // TCefInsets
  Result.between_child_spacing := ACefBoxLayoutSettings.between_child_spacing; // Integer
  Result.main_axis_alignment := Integer(ACefBoxLayoutSettings.main_axis_alignment); // TCefMainAxisAlignment
  Result.cross_axis_alignment := Integer(ACefBoxLayoutSettings.cross_axis_alignment); // TCefCrossAxisAlignment
  Result.minimum_cross_axis_size := ACefBoxLayoutSettings.minimum_cross_axis_size; // Integer
  Result.default_flex := ACefBoxLayoutSettings.default_flex; // Integer
end;

function TCefBoxLayoutSettingsToPas(const ACefBoxLayoutSettings: TCefBoxLayoutSettingsPtr): TCefBoxLayoutSettings;
begin
  Result.horizontal := ACefBoxLayoutSettings.horizontal; // Integer
  Result.inside_border_horizontal_spacing := ACefBoxLayoutSettings.inside_border_horizontal_spacing; // Integer
  Result.inside_border_vertical_spacing := ACefBoxLayoutSettings.inside_border_vertical_spacing; // Integer
  Result.inside_border_insets := TCefInsetsToPas(ACefBoxLayoutSettings.inside_border_insets); // TCefInsets
  Result.between_child_spacing := ACefBoxLayoutSettings.between_child_spacing; // Integer
  Result.main_axis_alignment := TCefMainAxisAlignment(ACefBoxLayoutSettings.main_axis_alignment); // TCefMainAxisAlignment
  Result.cross_axis_alignment := TCefCrossAxisAlignment(ACefBoxLayoutSettings.cross_axis_alignment); // TCefCrossAxisAlignment
  Result.minimum_cross_axis_size := ACefBoxLayoutSettings.minimum_cross_axis_size; // Integer
  Result.default_flex := ACefBoxLayoutSettings.default_flex; // Integer
end;

// TCefBrowserSettings
function TCefBrowserSettingsToGo(const ACefBrowserSettings: TCefBrowserSettings): TCefBrowserSettingsPtr;
begin
  Result.windowless_frame_rate := ACefBrowserSettings.windowless_frame_rate; // Integer
  Result.standard_font_family := ToPChar(CefString(@ACefBrowserSettings.standard_font_family)); // TCefString
  Result.fixed_font_family := ToPChar(CefString(@ACefBrowserSettings.fixed_font_family)); // TCefString
  Result.serif_font_family := ToPChar(CefString(@ACefBrowserSettings.serif_font_family)); // TCefString
  Result.sans_serif_font_family := ToPChar(CefString(@ACefBrowserSettings.sans_serif_font_family)); // TCefString
  Result.cursive_font_family := ToPChar(CefString(@ACefBrowserSettings.cursive_font_family)); // TCefString
  Result.fantasy_font_family := ToPChar(CefString(@ACefBrowserSettings.fantasy_font_family)); // TCefString
  Result.default_font_size := ACefBrowserSettings.default_font_size; // Integer
  Result.default_fixed_font_size := ACefBrowserSettings.default_fixed_font_size; // Integer
  Result.minimum_font_size := ACefBrowserSettings.minimum_font_size; // Integer
  Result.minimum_logical_font_size := ACefBrowserSettings.minimum_logical_font_size; // Integer
  Result.default_encoding := ToPChar(CefString(@ACefBrowserSettings.default_encoding)); // TCefString
  Result.remote_fonts := Integer(ACefBrowserSettings.remote_fonts); // TCefState
  Result.javascript := Integer(ACefBrowserSettings.javascript); // TCefState
  Result.javascript_close_windows := Integer(ACefBrowserSettings.javascript_close_windows); // TCefState
  Result.javascript_access_clipboard := Integer(ACefBrowserSettings.javascript_access_clipboard); // TCefState
  Result.javascript_dom_paste := Integer(ACefBrowserSettings.javascript_dom_paste); // TCefState
  Result.image_loading := Integer(ACefBrowserSettings.image_loading); // TCefState
  Result.image_shrink_standalone_to_fit := Integer(ACefBrowserSettings.image_shrink_standalone_to_fit); // TCefState
  Result.text_area_resize := Integer(ACefBrowserSettings.text_area_resize); // TCefState
  Result.tab_to_links := Integer(ACefBrowserSettings.tab_to_links); // TCefState
  Result.local_storage := Integer(ACefBrowserSettings.local_storage); // TCefState
  Result.databases := Integer(ACefBrowserSettings.databases); // TCefState
  Result.webgl := Integer(ACefBrowserSettings.webgl); // TCefState
  Result.background_color := ACefBrowserSettings.background_color; // TCefColor
  Result.accept_language_list := ToPChar(CefString(@ACefBrowserSettings.accept_language_list)); // TCefString
  Result.chrome_status_bubble := Integer(ACefBrowserSettings.chrome_status_bubble); // TCefState
end;

function TCefBrowserSettingsToPas(const ACefBrowserSettings: TCefBrowserSettingsPtr): TCefBrowserSettings;
begin
  Result.size := SizeOf(TCefBrowserSettings); // NativeUInt
  Result.windowless_frame_rate := ACefBrowserSettings.windowless_frame_rate; // Integer
  Result.standard_font_family := CefString(PCharToUStr(ACefBrowserSettings.standard_font_family)); // TCefString
  Result.fixed_font_family := CefString(PCharToUStr(ACefBrowserSettings.fixed_font_family)); // TCefString
  Result.serif_font_family := CefString(PCharToUStr(ACefBrowserSettings.serif_font_family)); // TCefString
  Result.sans_serif_font_family := CefString(PCharToUStr(ACefBrowserSettings.sans_serif_font_family)); // TCefString
  Result.cursive_font_family := CefString(PCharToUStr(ACefBrowserSettings.cursive_font_family)); // TCefString
  Result.fantasy_font_family := CefString(PCharToUStr(ACefBrowserSettings.fantasy_font_family)); // TCefString
  Result.default_font_size := ACefBrowserSettings.default_font_size; // Integer
  Result.default_fixed_font_size := ACefBrowserSettings.default_fixed_font_size; // Integer
  Result.minimum_font_size := ACefBrowserSettings.minimum_font_size; // Integer
  Result.minimum_logical_font_size := ACefBrowserSettings.minimum_logical_font_size; // Integer
  Result.default_encoding := CefString(PCharToUStr(ACefBrowserSettings.default_encoding)); // TCefString
  Result.remote_fonts := TCefState(ACefBrowserSettings.remote_fonts); // TCefState
  Result.javascript := TCefState(ACefBrowserSettings.javascript); // TCefState
  Result.javascript_close_windows := TCefState(ACefBrowserSettings.javascript_close_windows); // TCefState
  Result.javascript_access_clipboard := TCefState(ACefBrowserSettings.javascript_access_clipboard); // TCefState
  Result.javascript_dom_paste := TCefState(ACefBrowserSettings.javascript_dom_paste); // TCefState
  Result.image_loading := TCefState(ACefBrowserSettings.image_loading); // TCefState
  Result.image_shrink_standalone_to_fit := TCefState(ACefBrowserSettings.image_shrink_standalone_to_fit); // TCefState
  Result.text_area_resize := TCefState(ACefBrowserSettings.text_area_resize); // TCefState
  Result.tab_to_links := TCefState(ACefBrowserSettings.tab_to_links); // TCefState
  Result.local_storage := TCefState(ACefBrowserSettings.local_storage); // TCefState
  Result.databases := TCefState(ACefBrowserSettings.databases); // TCefState
  Result.webgl := TCefState(ACefBrowserSettings.webgl); // TCefState
  Result.background_color := ACefBrowserSettings.background_color; // TCefColor
  Result.accept_language_list := CefString(PCharToUStr(ACefBrowserSettings.accept_language_list)); // TCefString
  Result.chrome_status_bubble := TCefState(ACefBrowserSettings.chrome_status_bubble); // TCefState
end;

// TCefCookie
function TCefCookieToGo(const ACefCookie: TCefCookie): TCefCookiePtr;
begin
  Result.name := ToPChar(CefString(@ACefCookie.name)); // TCefString
  Result.value := ToPChar(CefString(@ACefCookie.value)); // TCefString
  Result.domain := ToPChar(CefString(@ACefCookie.domain)); // TCefString
  Result.path := ToPChar(CefString(@ACefCookie.path)); // TCefString
  Result.secure := ACefCookie.secure; // Integer
  Result.httponly := ACefCookie.httponly; // Integer
  Result.creation := ACefCookie.creation; // TCefBaseTime
  Result.last_access := ACefCookie.last_access; // TCefBaseTime
  Result.has_expires := ACefCookie.has_expires; // Integer
  Result.expires := ACefCookie.expires; // TCefBaseTime
  Result.same_site := Integer(ACefCookie.same_site); // TCefCookieSameSite
  Result.priority := ACefCookie.priority; // TCefCookiePriority
end;

function TCefCookieToPas(const ACefCookie: TCefCookiePtr): TCefCookie;
begin
  Result.name := CefString(PCharToUStr(ACefCookie.name)); // TCefString
  Result.value := CefString(PCharToUStr(ACefCookie.value)); // TCefString
  Result.domain := CefString(PCharToUStr(ACefCookie.domain)); // TCefString
  Result.path := CefString(PCharToUStr(ACefCookie.path)); // TCefString
  Result.secure := ACefCookie.secure; // Integer
  Result.httponly := ACefCookie.httponly; // Integer
  Result.creation := ACefCookie.creation; // TCefBaseTime
  Result.last_access := ACefCookie.last_access; // TCefBaseTime
  Result.has_expires := ACefCookie.has_expires; // Integer
  Result.expires := ACefCookie.expires; // TCefBaseTime
  Result.same_site := TCefCookieSameSite(ACefCookie.same_site); // TCefCookieSameSite
  Result.priority := ACefCookie.priority; // TCefCookiePriority
end;

// TCefCookieManagerRefSetCookieArgs
function TCefCookieManagerRefSetCookieArgsToGo(const ACefCookieManagerRefSetCookieArgs: TCefCookieManagerRefSetCookieArgs): TCefCookieManagerRefSetCookieArgsPtr;
begin
  Result.url := ToPChar(ACefCookieManagerRefSetCookieArgs.url); // ustring
  Result.name := ToPChar(ACefCookieManagerRefSetCookieArgs.name); // ustring
  Result.value := ToPChar(ACefCookieManagerRefSetCookieArgs.value); // ustring
  Result.domain := ToPChar(ACefCookieManagerRefSetCookieArgs.domain); // ustring
  Result.path := ToPChar(ACefCookieManagerRefSetCookieArgs.path); // ustring
  Result.secure := ACefCookieManagerRefSetCookieArgs.secure; // Boolean
  Result.httponly := ACefCookieManagerRefSetCookieArgs.httponly; // Boolean
  Result.hasExpires := ACefCookieManagerRefSetCookieArgs.hasExpires; // Boolean
  Result.creation := ACefCookieManagerRefSetCookieArgs.creation; // TDateTime
  Result.lastAccess := ACefCookieManagerRefSetCookieArgs.lastAccess; // TDateTime
  Result.expires := ACefCookieManagerRefSetCookieArgs.expires; // TDateTime
  Result.same_site := Integer(ACefCookieManagerRefSetCookieArgs.same_site); // TCefCookieSameSite
  Result.priority := ACefCookieManagerRefSetCookieArgs.priority; // TCefCookiePriority
  Result.callback := ACefCookieManagerRefSetCookieArgs.callback; // ICefSetCookieCallback
end;

function TCefCookieManagerRefSetCookieArgsToPas(const ACefCookieManagerRefSetCookieArgs: TCefCookieManagerRefSetCookieArgsPtr): TCefCookieManagerRefSetCookieArgs;
begin
  Result.url := string(ACefCookieManagerRefSetCookieArgs.url); // ustring
  Result.name := string(ACefCookieManagerRefSetCookieArgs.name); // ustring
  Result.value := string(ACefCookieManagerRefSetCookieArgs.value); // ustring
  Result.domain := string(ACefCookieManagerRefSetCookieArgs.domain); // ustring
  Result.path := string(ACefCookieManagerRefSetCookieArgs.path); // ustring
  Result.secure := ACefCookieManagerRefSetCookieArgs.secure; // Boolean
  Result.httponly := ACefCookieManagerRefSetCookieArgs.httponly; // Boolean
  Result.hasExpires := ACefCookieManagerRefSetCookieArgs.hasExpires; // Boolean
  Result.creation := ACefCookieManagerRefSetCookieArgs.creation; // TDateTime
  Result.lastAccess := ACefCookieManagerRefSetCookieArgs.lastAccess; // TDateTime
  Result.expires := ACefCookieManagerRefSetCookieArgs.expires; // TDateTime
  Result.same_site := TCefCookieSameSite(ACefCookieManagerRefSetCookieArgs.same_site); // TCefCookieSameSite
  Result.priority := ACefCookieManagerRefSetCookieArgs.priority; // TCefCookiePriority
  Result.callback := ACefCookieManagerRefSetCookieArgs.callback; // ICefSetCookieCallback
end;

// TCefCursorInfo
function TCefCursorInfoToGo(const ACefCursorInfo: TCefCursorInfo): TCefCursorInfoPtr;
begin
  Result.hotspot := TCefPointToGo(ACefCursorInfo.hotspot); // TCefPoint
  Result.image_scale_factor := ACefCursorInfo.image_scale_factor; // Single
  Result.buffer := ACefCursorInfo.buffer; // Pointer
  Result.size := TCefSizeToGo(ACefCursorInfo.size); // TCefSize
end;

function TCefCursorInfoToPas(const ACefCursorInfo: TCefCursorInfoPtr): TCefCursorInfo;
begin
  Result.hotspot := TCefPointToPas(ACefCursorInfo.hotspot); // TCefPoint
  Result.image_scale_factor := ACefCursorInfo.image_scale_factor; // Single
  Result.buffer := ACefCursorInfo.buffer; // Pointer
  Result.size := TCefSizeToPas(ACefCursorInfo.size); // TCefSize
end;

// TCefInsets
function TCefInsetsToGo(const ACefInsets: TCefInsets): TCefInsetsPtr;
begin
  Result.top := ACefInsets.top; // Integer
  Result.left := ACefInsets.left; // Integer
  Result.bottom := ACefInsets.bottom; // Integer
  Result.right := ACefInsets.right; // Integer
end;

function TCefInsetsToPas(const ACefInsets: TCefInsetsPtr): TCefInsets;
begin
  Result.top := ACefInsets.top; // Integer
  Result.left := ACefInsets.left; // Integer
  Result.bottom := ACefInsets.bottom; // Integer
  Result.right := ACefInsets.right; // Integer
end;

// TCefKeyEvent
function TCefKeyEventToGo(const ACefKeyEvent: TCefKeyEvent): TCefKeyEventPtr;
begin
  Result.kind := Integer(ACefKeyEvent.kind); // TCefKeyEventType
  Result.modifiers := ACefKeyEvent.modifiers; // TCefEventFlags
  Result.windows_key_code := ACefKeyEvent.windows_key_code; // Integer
  Result.native_key_code := ACefKeyEvent.native_key_code; // Integer
  Result.is_system_key := ACefKeyEvent.is_system_key; // Integer
  Result.character := ACefKeyEvent.character; // WideChar
  Result.unmodified_character := ACefKeyEvent.unmodified_character; // WideChar
  Result.focus_on_editable_field := ACefKeyEvent.focus_on_editable_field; // Integer
end;

function TCefKeyEventToPas(const ACefKeyEvent: TCefKeyEventPtr): TCefKeyEvent;
begin
  Result.kind := TCefKeyEventType(ACefKeyEvent.kind); // TCefKeyEventType
  Result.modifiers := ACefKeyEvent.modifiers; // TCefEventFlags
  Result.windows_key_code := ACefKeyEvent.windows_key_code; // Integer
  Result.native_key_code := ACefKeyEvent.native_key_code; // Integer
  Result.is_system_key := ACefKeyEvent.is_system_key; // Integer
  Result.character := ACefKeyEvent.character; // WideChar
  Result.unmodified_character := ACefKeyEvent.unmodified_character; // WideChar
  Result.focus_on_editable_field := ACefKeyEvent.focus_on_editable_field; // Integer
end;

// TCefMouseEvent
function TCefMouseEventToGo(const ACefMouseEvent: TCefMouseEvent): TCefMouseEventPtr;
begin
  Result.x := ACefMouseEvent.x; // Integer
  Result.y := ACefMouseEvent.y; // Integer
  Result.modifiers := ACefMouseEvent.modifiers; // TCefEventFlags
end;

function TCefMouseEventToPas(const ACefMouseEvent: TCefMouseEventPtr): TCefMouseEvent;
begin
  Result.x := ACefMouseEvent.x; // Integer
  Result.y := ACefMouseEvent.y; // Integer
  Result.modifiers := ACefMouseEvent.modifiers; // TCefEventFlags
end;

// TCefPdfPrintSettings
function TCefPdfPrintSettingsToGo(const ACefPdfPrintSettings: TCefPdfPrintSettings): TCefPdfPrintSettingsPtr;
begin
  Result.landscape := ACefPdfPrintSettings.landscape; // Integer
  Result.print_background := ACefPdfPrintSettings.print_background; // Integer
  Result.scale := ACefPdfPrintSettings.scale; // double
  Result.paper_width := ACefPdfPrintSettings.paper_width; // double
  Result.paper_height := ACefPdfPrintSettings.paper_height; // double
  Result.prefer_css_page_size := ACefPdfPrintSettings.prefer_css_page_size; // Integer
  Result.margin_type := Integer(ACefPdfPrintSettings.margin_type); // TCefPdfPrintMarginType
  Result.margin_top := ACefPdfPrintSettings.margin_top; // double
  Result.margin_right := ACefPdfPrintSettings.margin_right; // double
  Result.margin_bottom := ACefPdfPrintSettings.margin_bottom; // double
  Result.margin_left := ACefPdfPrintSettings.margin_left; // double
  Result.page_ranges := ToPChar(CefString(@ACefPdfPrintSettings.page_ranges)); // TCefString
  Result.display_header_footer := ACefPdfPrintSettings.display_header_footer; // Integer
  Result.header_template := ToPChar(CefString(@ACefPdfPrintSettings.header_template)); // TCefString
  Result.footer_template := ToPChar(CefString(@ACefPdfPrintSettings.footer_template)); // TCefString
end;

function TCefPdfPrintSettingsToPas(const ACefPdfPrintSettings: TCefPdfPrintSettingsPtr): TCefPdfPrintSettings;
begin
  Result.landscape := ACefPdfPrintSettings.landscape; // Integer
  Result.print_background := ACefPdfPrintSettings.print_background; // Integer
  Result.scale := ACefPdfPrintSettings.scale; // double
  Result.paper_width := ACefPdfPrintSettings.paper_width; // double
  Result.paper_height := ACefPdfPrintSettings.paper_height; // double
  Result.prefer_css_page_size := ACefPdfPrintSettings.prefer_css_page_size; // Integer
  Result.margin_type := TCefPdfPrintMarginType(ACefPdfPrintSettings.margin_type); // TCefPdfPrintMarginType
  Result.margin_top := ACefPdfPrintSettings.margin_top; // double
  Result.margin_right := ACefPdfPrintSettings.margin_right; // double
  Result.margin_bottom := ACefPdfPrintSettings.margin_bottom; // double
  Result.margin_left := ACefPdfPrintSettings.margin_left; // double
  Result.page_ranges := CefString(PCharToUStr(ACefPdfPrintSettings.page_ranges)); // TCefString
  Result.display_header_footer := ACefPdfPrintSettings.display_header_footer; // Integer
  Result.header_template := CefString(PCharToUStr(ACefPdfPrintSettings.header_template)); // TCefString
  Result.footer_template := CefString(PCharToUStr(ACefPdfPrintSettings.footer_template)); // TCefString
end;

// TCefPoint
function TCefPointToGo(const ACefPoint: TCefPoint): TCefPointPtr;
begin
  Result.x := ACefPoint.x; // Integer
  Result.y := ACefPoint.y; // Integer
end;

function TCefPointToPas(const ACefPoint: TCefPointPtr): TCefPoint;
begin
  Result.x := ACefPoint.x; // Integer
  Result.y := ACefPoint.y; // Integer
end;

// TCefPopupFeatures
function TCefPopupFeaturesToGo(const ACefPopupFeatures: TCefPopupFeatures): TCefPopupFeaturesPtr;
begin
  Result.x := ACefPopupFeatures.x; // Integer
  Result.xSet := ACefPopupFeatures.xSet; // Integer
  Result.y := ACefPopupFeatures.y; // Integer
  Result.ySet := ACefPopupFeatures.ySet; // Integer
  Result.width := ACefPopupFeatures.width; // Integer
  Result.widthSet := ACefPopupFeatures.widthSet; // Integer
  Result.height := ACefPopupFeatures.height; // Integer
  Result.heightSet := ACefPopupFeatures.heightSet; // Integer
  Result.menuBarVisible := ACefPopupFeatures.menuBarVisible; // Integer
  Result.statusBarVisible := ACefPopupFeatures.statusBarVisible; // Integer
  Result.toolBarVisible := ACefPopupFeatures.toolBarVisible; // Integer
  Result.scrollbarsVisible := ACefPopupFeatures.scrollbarsVisible; // Integer
end;

function TCefPopupFeaturesToPas(const ACefPopupFeatures: TCefPopupFeaturesPtr): TCefPopupFeatures;
begin
  Result.x := ACefPopupFeatures.x; // Integer
  Result.xSet := ACefPopupFeatures.xSet; // Integer
  Result.y := ACefPopupFeatures.y; // Integer
  Result.ySet := ACefPopupFeatures.ySet; // Integer
  Result.width := ACefPopupFeatures.width; // Integer
  Result.widthSet := ACefPopupFeatures.widthSet; // Integer
  Result.height := ACefPopupFeatures.height; // Integer
  Result.heightSet := ACefPopupFeatures.heightSet; // Integer
  Result.menuBarVisible := ACefPopupFeatures.menuBarVisible; // Integer
  Result.statusBarVisible := ACefPopupFeatures.statusBarVisible; // Integer
  Result.toolBarVisible := ACefPopupFeatures.toolBarVisible; // Integer
  Result.scrollbarsVisible := ACefPopupFeatures.scrollbarsVisible; // Integer
end;

// TCefPreferenceRegistrar
function TCefPreferenceRegistrarToGo(const ACefPreferenceRegistrar: TCefPreferenceRegistrar): TCefPreferenceRegistrarPtr;
begin
  Result.base := TCefBaseScopedToGo(ACefPreferenceRegistrar.base); // TCefBaseScoped
  Result.add_preference := ACefPreferenceRegistrar.add_preference; // function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall
end;

function TCefPreferenceRegistrarToPas(const ACefPreferenceRegistrar: TCefPreferenceRegistrarPtr): TCefPreferenceRegistrar;
begin
  Result.base := TCefBaseScopedToPas(ACefPreferenceRegistrar.base); // TCefBaseScoped
  Result.add_preference := ACefPreferenceRegistrar.add_preference; // function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall
end;

// TCefRange
function TCefRangeToGo(const ACefRange: TCefRange): TCefRangePtr;
begin
  Result.from := ACefRange.from; // Integer
  Result.to_ := ACefRange.to_; // Integer
end;

function TCefRangeToPas(const ACefRange: TCefRangePtr): TCefRange;
begin
  Result.from := ACefRange.from; // Integer
  Result.to_ := ACefRange.to_; // Integer
end;

// TCefRect
function TCefRectToGo(const ACefRect: TCefRect): TCefRectPtr;
begin
  Result.x := ACefRect.x; // Integer
  Result.y := ACefRect.y; // Integer
  Result.width := ACefRect.width; // Integer
  Result.height := ACefRect.height; // Integer
end;

function TCefRectToPas(const ACefRect: TCefRectPtr): TCefRect;
begin
  Result.x := ACefRect.x; // Integer
  Result.y := ACefRect.y; // Integer
  Result.width := ACefRect.width; // Integer
  Result.height := ACefRect.height; // Integer
end;

// TCefRequestContextSettings
function TCefRequestContextSettingsToGo(const ACefRequestContextSettings: TCefRequestContextSettings): TCefRequestContextSettingsPtr;
begin
  Result.cache_path := ToPChar(CefString(@ACefRequestContextSettings.cache_path)); // TCefString
  Result.persist_session_cookies := ACefRequestContextSettings.persist_session_cookies; // Integer
  Result.persist_user_preferences := ACefRequestContextSettings.persist_user_preferences; // Integer
  Result.accept_language_list := ToPChar(CefString(@ACefRequestContextSettings.accept_language_list)); // TCefString
  Result.cookieable_schemes_list := ToPChar(CefString(@ACefRequestContextSettings.cookieable_schemes_list)); // TCefString
  Result.cookieable_schemes_exclude_defaults := ACefRequestContextSettings.cookieable_schemes_exclude_defaults; // integer
end;

function TCefRequestContextSettingsToPas(const ACefRequestContextSettings: TCefRequestContextSettingsPtr): TCefRequestContextSettings;
begin
  Result.size := SizeOf(TCefRequestContextSettings); // NativeUInt
  Result.cache_path := CefString(PCharToUStr(ACefRequestContextSettings.cache_path)); // TCefString
  Result.persist_session_cookies := ACefRequestContextSettings.persist_session_cookies; // Integer
  Result.persist_user_preferences := ACefRequestContextSettings.persist_user_preferences; // Integer
  Result.accept_language_list := CefString(PCharToUStr(ACefRequestContextSettings.accept_language_list)); // TCefString
  Result.cookieable_schemes_list := CefString(PCharToUStr(ACefRequestContextSettings.cookieable_schemes_list)); // TCefString
  Result.cookieable_schemes_exclude_defaults := ACefRequestContextSettings.cookieable_schemes_exclude_defaults; // integer
end;

// TCefScreenInfo
function TCefScreenInfoToGo(const ACefScreenInfo: TCefScreenInfo): TCefScreenInfoPtr;
begin
  Result.device_scale_factor := ACefScreenInfo.device_scale_factor; // single
  Result.depth := ACefScreenInfo.depth; // integer
  Result.depth_per_component := ACefScreenInfo.depth_per_component; // integer
  Result.is_monochrome := ACefScreenInfo.is_monochrome; // integer
  Result.rect := TCefRectToGo(ACefScreenInfo.rect); // TCefRect
  Result.available_rect := TCefRectToGo(ACefScreenInfo.available_rect); // TCefRect
end;

function TCefScreenInfoToPas(const ACefScreenInfo: TCefScreenInfoPtr): TCefScreenInfo;
begin
  Result.device_scale_factor := ACefScreenInfo.device_scale_factor; // single
  Result.depth := ACefScreenInfo.depth; // integer
  Result.depth_per_component := ACefScreenInfo.depth_per_component; // integer
  Result.is_monochrome := ACefScreenInfo.is_monochrome; // integer
  Result.rect := TCefRectToPas(ACefScreenInfo.rect); // TCefRect
  Result.available_rect := TCefRectToPas(ACefScreenInfo.available_rect); // TCefRect
end;

// TCefSize
function TCefSizeToGo(const ACefSize: TCefSize): TCefSizePtr;
begin
  Result.width := ACefSize.width; // Integer
  Result.height := ACefSize.height; // Integer
end;

function TCefSizeToPas(const ACefSize: TCefSizePtr): TCefSize;
begin
  Result.width := ACefSize.width; // Integer
  Result.height := ACefSize.height; // Integer
end;

// TCefTime
function TCefTimeToGo(const ACefTime: TCefTime): TCefTimePtr;
begin
  Result.year := ACefTime.year; // Integer
  Result.month := ACefTime.month; // Integer
  Result.day_of_week := ACefTime.day_of_week; // Integer
  Result.day_of_month := ACefTime.day_of_month; // Integer
  Result.hour := ACefTime.hour; // Integer
  Result.minute := ACefTime.minute; // Integer
  Result.second := ACefTime.second; // Integer
  Result.millisecond := ACefTime.millisecond; // Integer
end;

function TCefTimeToPas(const ACefTime: TCefTimePtr): TCefTime;
begin
  Result.year := ACefTime.year; // Integer
  Result.month := ACefTime.month; // Integer
  Result.day_of_week := ACefTime.day_of_week; // Integer
  Result.day_of_month := ACefTime.day_of_month; // Integer
  Result.hour := ACefTime.hour; // Integer
  Result.minute := ACefTime.minute; // Integer
  Result.second := ACefTime.second; // Integer
  Result.millisecond := ACefTime.millisecond; // Integer
end;

// TCefTouchEvent
function TCefTouchEventToGo(const ACefTouchEvent: TCefTouchEvent): TCefTouchEventPtr;
begin
  Result.id := ACefTouchEvent.id; // integer
  Result.x := ACefTouchEvent.x; // single
  Result.y := ACefTouchEvent.y; // single
  Result.radius_x := ACefTouchEvent.radius_x; // single
  Result.radius_y := ACefTouchEvent.radius_y; // single
  Result.rotation_angle := ACefTouchEvent.rotation_angle; // single
  Result.pressure := ACefTouchEvent.pressure; // single
  Result.type_ := Integer(ACefTouchEvent.type_); // TCefTouchEeventType
  Result.modifiers := ACefTouchEvent.modifiers; // TCefEventFlags
  Result.pointer_type := Integer(ACefTouchEvent.pointer_type); // TCefPointerType
end;

function TCefTouchEventToPas(const ACefTouchEvent: TCefTouchEventPtr): TCefTouchEvent;
begin
  Result.id := ACefTouchEvent.id; // integer
  Result.x := ACefTouchEvent.x; // single
  Result.y := ACefTouchEvent.y; // single
  Result.radius_x := ACefTouchEvent.radius_x; // single
  Result.radius_y := ACefTouchEvent.radius_y; // single
  Result.rotation_angle := ACefTouchEvent.rotation_angle; // single
  Result.pressure := ACefTouchEvent.pressure; // single
  Result.type_ := TCefTouchEeventType(ACefTouchEvent.type_); // TCefTouchEeventType
  Result.modifiers := ACefTouchEvent.modifiers; // TCefEventFlags
  Result.pointer_type := TCefPointerType(ACefTouchEvent.pointer_type); // TCefPointerType
end;

// TCefTouchHandleState
function TCefTouchHandleStateToGo(const ACefTouchHandleState: TCefTouchHandleState): TCefTouchHandleStatePtr;
begin
  Result.touch_handle_id := ACefTouchHandleState.touch_handle_id; // integer
  Result.flags := ACefTouchHandleState.flags; // cardinal
  Result.enabled := ACefTouchHandleState.enabled; // integer
  Result.orientation := Integer(ACefTouchHandleState.orientation); // TCefHorizontalAlignment
  Result.mirror_vertical := ACefTouchHandleState.mirror_vertical; // integer
  Result.mirror_horizontal := ACefTouchHandleState.mirror_horizontal; // integer
  Result.origin := TCefPointToGo(ACefTouchHandleState.origin); // TCefPoint
  Result.alpha := ACefTouchHandleState.alpha; // single
end;

function TCefTouchHandleStateToPas(const ACefTouchHandleState: TCefTouchHandleStatePtr): TCefTouchHandleState;
begin
  Result.touch_handle_id := ACefTouchHandleState.touch_handle_id; // integer
  Result.flags := ACefTouchHandleState.flags; // cardinal
  Result.enabled := ACefTouchHandleState.enabled; // integer
  Result.orientation := TCefHorizontalAlignment(ACefTouchHandleState.orientation); // TCefHorizontalAlignment
  Result.mirror_vertical := ACefTouchHandleState.mirror_vertical; // integer
  Result.mirror_horizontal := ACefTouchHandleState.mirror_horizontal; // integer
  Result.origin := TCefPointToPas(ACefTouchHandleState.origin); // TCefPoint
  Result.alpha := ACefTouchHandleState.alpha; // single
end;

// TCefWindowInfo
function TCefWindowInfoToGo(const ACefWindowInfo: TCefWindowInfo): TCefWindowInfoPtr;
begin
{$IFDEF MSWINDOWS}
  Result.ex_style := ACefWindowInfo.ex_style; // DWORD
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.window_name := ToPChar(CefString(@ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.style := ACefWindowInfo.style; // DWORD
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.bounds := TCefRectToGo(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.parent_window := ACefWindowInfo.parent_window; // TCefWindowHandle
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.menu := ACefWindowInfo.menu; // HMENU
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.window := ACefWindowInfo.window; // TCefWindowHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.window_name := ToPChar(CefString(@ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF MACOSX}
  Result.bounds := TCefRectToGo(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF MACOSX}
  Result.hidden := ACefWindowInfo.hidden; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.parent_view := ACefWindowInfo.parent_view; // TCefWindowHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.view := ACefWindowInfo.view; // TCefWindowHandle
{$ENDIF}
{$IFDEF LINUX}
  Result.window_name := ToPChar(CefString(@ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF LINUX}
  Result.bounds := TCefRectToGo(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF LINUX}
  Result.parent_window := ACefWindowInfo.parent_window; // TCefWindowHandle
{$ENDIF}
{$IFDEF LINUX}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.window := ACefWindowInfo.window; // TCefWindowHandle
{$ENDIF}
end;

function TCefWindowInfoToPas(const ACefWindowInfo: TCefWindowInfoPtr): TCefWindowInfo;
begin
{$IFDEF MSWINDOWS}
  Result.ex_style := ACefWindowInfo.ex_style; // DWORD
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.window_name := CefString(PCharToUStr(ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.style := ACefWindowInfo.style; // DWORD
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.bounds := TCefRectToPas(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.parent_window := ACefWindowInfo.parent_window; // TCefWindowHandle
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.menu := ACefWindowInfo.menu; // HMENU
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF MSWINDOWS}
  Result.window := ACefWindowInfo.window; // TCefWindowHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.window_name := CefString(PCharToUStr(ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF MACOSX}
  Result.bounds := TCefRectToPas(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF MACOSX}
  Result.hidden := ACefWindowInfo.hidden; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.parent_view := ACefWindowInfo.parent_view; // TCefWindowHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF MACOSX}
  Result.view := ACefWindowInfo.view; // TCefWindowHandle
{$ENDIF}
{$IFDEF LINUX}
  Result.window_name := CefString(PCharToUStr(ACefWindowInfo.window_name)); // TCefString
{$ENDIF}
{$IFDEF LINUX}
  Result.bounds := TCefRectToPas(ACefWindowInfo.bounds); // TCefRect
{$ENDIF}
{$IFDEF LINUX}
  Result.parent_window := ACefWindowInfo.parent_window; // TCefWindowHandle
{$ENDIF}
{$IFDEF LINUX}
  Result.windowless_rendering_enabled := ACefWindowInfo.windowless_rendering_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.shared_texture_enabled := ACefWindowInfo.shared_texture_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.external_begin_frame_enabled := ACefWindowInfo.external_begin_frame_enabled; // Integer
{$ENDIF}
{$IFDEF LINUX}
  Result.window := ACefWindowInfo.window; // TCefWindowHandle
{$ENDIF}
end;

// TChromiumCoreSetCookieArgs
function TChromiumCoreSetCookieArgsToGo(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgs): TChromiumCoreSetCookieArgsPtr;
begin
  Result.url := ToPChar(AChromiumCoreSetCookieArgs.url); // ustring
  Result.name_ := ToPChar(AChromiumCoreSetCookieArgs.name_); // ustring
  Result.value := ToPChar(AChromiumCoreSetCookieArgs.value); // ustring
  Result.domain := ToPChar(AChromiumCoreSetCookieArgs.domain); // ustring
  Result.path := ToPChar(AChromiumCoreSetCookieArgs.path); // ustring
  Result.secure := AChromiumCoreSetCookieArgs.secure; // Boolean
  Result.httponly := AChromiumCoreSetCookieArgs.httponly; // Boolean
  Result.hasExpires := AChromiumCoreSetCookieArgs.hasExpires; // Boolean
  Result.creation := AChromiumCoreSetCookieArgs.creation; // TDateTime
  Result.lastAccess := AChromiumCoreSetCookieArgs.lastAccess; // TDateTime
  Result.expires := AChromiumCoreSetCookieArgs.expires; // TDateTime
  Result.same_site := Integer(AChromiumCoreSetCookieArgs.same_site); // TCefCookieSameSite
  Result.priority := AChromiumCoreSetCookieArgs.priority; // TCefCookiePriority
  Result.aSetImmediately := AChromiumCoreSetCookieArgs.aSetImmediately; // boolean
  Result.aID := AChromiumCoreSetCookieArgs.aID; // integer
end;

function TChromiumCoreSetCookieArgsToPas(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgsPtr): TChromiumCoreSetCookieArgs;
begin
  Result.url := string(AChromiumCoreSetCookieArgs.url); // ustring
  Result.name_ := string(AChromiumCoreSetCookieArgs.name_); // ustring
  Result.value := string(AChromiumCoreSetCookieArgs.value); // ustring
  Result.domain := string(AChromiumCoreSetCookieArgs.domain); // ustring
  Result.path := string(AChromiumCoreSetCookieArgs.path); // ustring
  Result.secure := AChromiumCoreSetCookieArgs.secure; // Boolean
  Result.httponly := AChromiumCoreSetCookieArgs.httponly; // Boolean
  Result.hasExpires := AChromiumCoreSetCookieArgs.hasExpires; // Boolean
  Result.creation := AChromiumCoreSetCookieArgs.creation; // TDateTime
  Result.lastAccess := AChromiumCoreSetCookieArgs.lastAccess; // TDateTime
  Result.expires := AChromiumCoreSetCookieArgs.expires; // TDateTime
  Result.same_site := TCefCookieSameSite(AChromiumCoreSetCookieArgs.same_site); // TCefCookieSameSite
  Result.priority := AChromiumCoreSetCookieArgs.priority; // TCefCookiePriority
  Result.aSetImmediately := AChromiumCoreSetCookieArgs.aSetImmediately; // boolean
  Result.aID := AChromiumCoreSetCookieArgs.aID; // integer
end;


end.
