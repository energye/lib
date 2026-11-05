unit uCEFRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses {$IFDEF LINUX}xlib,{$ENDIF}{$IFnDEF MSWINDOWS} LCLType,{$ENDIF}{$IFDEF MSWINDOWS} Windows,{$ENDIF} Types, Classes, SysUtils, Graphics, Controls, uCEFTypes, uCEFMiscFunctions, uCEFInterfaces, uTools;

type


{$IFDEF LINUX}
  TCefAcceleratedPaintNativePixmapPlaneInfoPtr = record
  {$IFDEF LINUX}
    stride: Cardinal; // Cardinal
  {$ENDIF}
  {$IFDEF LINUX}
    offset: uint64; // uint64
  {$ENDIF}
  {$IFDEF LINUX}
    size: uint64; // uint64
  {$ENDIF}
  {$IFDEF LINUX}
    fd: integer; // integer
  {$ENDIF}
  end;
{$ENDIF}

{$IFDEF LINUX}
  TCefAcceleratedPaintNativePixmapPlaneInfoPtrArray = array of TCefAcceleratedPaintNativePixmapPlaneInfoPtr;
{$ENDIF}
  TCefSizePtr = record
    width: Integer; // Integer
    height: Integer; // Integer
  end;

  TCefRectPtr = record
    x: Integer; // Integer
    y: Integer; // Integer
    width: Integer; // Integer
    height: Integer; // Integer
  end;

  TCefAcceleratedPaintInfoCommonPtr = record
    timestamp: uint64; // uint64
    coded_size: TCefSizePtr; // TCefSize
    visible_rect: TCefRectPtr; // TCefRect
    content_rect: TCefRectPtr; // TCefRect
    source_size: TCefSizePtr; // TCefSize
    capture_update_rect: TCefRectPtr; // TCefRect
    region_capture_rect: TCefRectPtr; // TCefRect
    capture_counter: uint64; // uint64
    has_capture_update_rect: byte; // byte
    has_region_capture_rect: byte; // byte
    has_source_size: byte; // byte
    has_capture_counter: byte; // byte
  end;

  TCefAcceleratedPaintInfoPtr = record
  {$IFDEF MSWINDOWS}
    shared_texture_handle: TCefSharedTextureHandle; // TCefSharedTextureHandle
  {$ENDIF}
  {$IFDEF MACOSX}
    shared_texture_io_surface: TCefSharedTextureHandle; // TCefSharedTextureHandle
  {$ENDIF}
  {$IFDEF LINUX}
    planes: ^TCefAcceleratedPaintNativePixmapPlaneInfoPtrArray; // array [0..pred(CEF_KACCELERATEDPAINTMAXPLANES)] of TCefAcceleratedPaintNativePixmapPlaneInfo
    planesSize: Integer; // 数组长度 
  {$ENDIF}
  {$IFDEF LINUX}
    plane_count: integer; // integer
  {$ENDIF}
  {$IFDEF LINUX}
    modifier: uint64; // uint64
  {$ENDIF}
    format: Integer; // TCefColorType
    extra: TCefAcceleratedPaintInfoCommonPtr; // TCefAcceleratedPaintInfoCommon
  end;

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
    main_axis_alignment: Integer; // TCefAxisAlignment
    cross_axis_alignment: Integer; // TCefAxisAlignment
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
    databases_deprecated: Integer; // TCefState
    webgl: Integer; // TCefState
    background_color: TCefColor; // TCefColor
    chrome_status_bubble: Integer; // TCefState
    chrome_zoom_bubble: Integer; // TCefState
    ax_viewport_collapse: Integer; // TCefState
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
    generate_tagged_pdf: integer; // integer
    generate_document_outline: integer; // integer
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
    isPopup: Integer; // Integer
  end;

  TCefBaseScopedPtr = record
    del: procedure(self:PCefBaseScoped); stdcall; // procedure(self:PCefBaseScoped); stdcall
  end;

  TCefPreferenceRegistrarPtr = record
    base: TCefBaseScopedPtr; // TCefBaseScoped
    add_preference: function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall; // function(self:PCefPreferenceRegistrar; const name:PCefString; default_value:PCefValue):Integer; stdcall
  end;

  TCefRangePtr = record
    from: cardinal; // cardinal
    to_: cardinal; // cardinal
  end;

  TCefRequestContextSettingsPtr = record
    cache_path: PChar; // TCefString
    persist_session_cookies: Integer; // Integer
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

  TCefVersionInfoPtr = record
    VersionMajor: integer; // integer
    VersionMinor: integer; // integer
    VersionPatch: integer; // integer
    CommitNumber: integer; // integer
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
  {$IFDEF MSWINDOWS}
    runtime_style: Integer; // TCefRuntimeStyle
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
  {$IFDEF MACOSX}
    runtime_style: Integer; // TCefRuntimeStyle
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
  {$IFDEF LINUX}
    runtime_style: Integer; // TCefRuntimeStyle
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

  TChromiumCoreSimulateKeyEventArgs = record
    type_: TSimulatedCefKeyEventType; // TSimulatedCefKeyEventType
    modifiers: integer; // integer
    timestamp: single; // single
    text: ustring; // ustring
    unmodifiedtext: ustring; // ustring
    keyIdentifier: ustring; // ustring
    code: ustring; // ustring
    key: ustring; // ustring
    windowsVirtualKeyCode: integer; // integer
    nativeVirtualKeyCode: integer; // integer
    autoRepeat: boolean; // boolean
    isKeypad: boolean; // boolean
    isSystemKey: boolean; // boolean
    location: TCefKeyLocation; // TCefKeyLocation
    commands: TCefEditingCommand; // TCefEditingCommand
  end;

  TChromiumCoreSimulateKeyEventArgsPtr = record
    type_: Integer; // TSimulatedCefKeyEventType
    modifiers: integer; // integer
    timestamp: single; // single
    text: PChar; // ustring
    unmodifiedtext: PChar; // ustring
    keyIdentifier: PChar; // ustring
    code: PChar; // ustring
    key: PChar; // ustring
    windowsVirtualKeyCode: integer; // integer
    nativeVirtualKeyCode: integer; // integer
    autoRepeat: LongBool; // boolean
    isKeypad: LongBool; // boolean
    isSystemKey: LongBool; // boolean
    location: Integer; // TCefKeyLocation
    commands: Integer; // TCefEditingCommand
  end;

  TChromiumCoreSimulateMouseEventArgs = record
    type_: TCefSimulatedMouseEventType; // TCefSimulatedMouseEventType
    x: single; // single
    y: single; // single
    modifiers: integer; // integer
    timestamp: single; // single
    button: TCefSimulatedMouseButton; // TCefSimulatedMouseButton
    buttons: integer; // integer
    clickCount: integer; // integer
    force: single; // single
    tangentialPressure: single; // single
    tiltX: single; // single
    tiltY: single; // single
    twist: integer; // integer
    deltaX: single; // single
    deltaY: single; // single
    pointerType: TCefSimulatedPointerType; // TCefSimulatedPointerType
  end;

  TChromiumCoreSimulateMouseEventArgsPtr = record
    type_: Integer; // TCefSimulatedMouseEventType
    x: single; // single
    y: single; // single
    modifiers: integer; // integer
    timestamp: single; // single
    button: Integer; // TCefSimulatedMouseButton
    buttons: integer; // integer
    clickCount: integer; // integer
    force: single; // single
    tangentialPressure: single; // single
    tiltX: single; // single
    tiltY: single; // single
    twist: integer; // integer
    deltaX: single; // single
    deltaY: single; // single
    pointerType: Integer; // TCefSimulatedPointerType
  end;

  TChromiumVersionInfoPtr = record
    VersionMajor: integer; // integer
    VersionMinor: integer; // integer
    VersionBuild: integer; // integer
    VersionPatch: integer; // integer
  end;

  TCustomTaskInfoPtr = record
    id: int64; // int64
    type_: Integer; // TCefTaskType
    is_killable: LongBool; // boolean
    title: PChar; // ustring
    cpu_usage: double; // double
    number_of_processors: integer; // integer
    memory: int64; // int64
    gpu_memory: int64; // int64
    is_gpu_memory_inflated: LongBool; // boolean
  end;

  TLinuxWindowPropertiesPtr = record
    wayland_app_id: PChar; // ustring
    wm_class_class: PChar; // ustring
    wm_class_name: PChar; // ustring
    wm_role_name: PChar; // ustring
  end;

// TCefAcceleratedPaintInfo
function TCefAcceleratedPaintInfoToGo(const ACefAcceleratedPaintInfo: TCefAcceleratedPaintInfo): TCefAcceleratedPaintInfoPtr;
function TCefAcceleratedPaintInfoToPas(const ACefAcceleratedPaintInfo: TCefAcceleratedPaintInfoPtr): TCefAcceleratedPaintInfo;

// TCefAcceleratedPaintInfoCommon
function TCefAcceleratedPaintInfoCommonToGo(const ACefAcceleratedPaintInfoCommon: TCefAcceleratedPaintInfoCommon): TCefAcceleratedPaintInfoCommonPtr;
function TCefAcceleratedPaintInfoCommonToPas(const ACefAcceleratedPaintInfoCommon: TCefAcceleratedPaintInfoCommonPtr): TCefAcceleratedPaintInfoCommon;

{$IFDEF LINUX}
// TCefAcceleratedPaintNativePixmapPlaneInfo
function TCefAcceleratedPaintNativePixmapPlaneInfoToGo(const ACefAcceleratedPaintNativePixmapPlaneInfo: TCefAcceleratedPaintNativePixmapPlaneInfo): TCefAcceleratedPaintNativePixmapPlaneInfoPtr;
function TCefAcceleratedPaintNativePixmapPlaneInfoToPas(const ACefAcceleratedPaintNativePixmapPlaneInfo: TCefAcceleratedPaintNativePixmapPlaneInfoPtr): TCefAcceleratedPaintNativePixmapPlaneInfo;
{$ENDIF}

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

// TCefVersionInfo
function TCefVersionInfoToGo(const ACefVersionInfo: TCefVersionInfo): TCefVersionInfoPtr;
function TCefVersionInfoToPas(const ACefVersionInfo: TCefVersionInfoPtr): TCefVersionInfo;

// TCefWindowInfo
function TCefWindowInfoToGo(const ACefWindowInfo: TCefWindowInfo): TCefWindowInfoPtr;
function TCefWindowInfoToPas(const ACefWindowInfo: TCefWindowInfoPtr): TCefWindowInfo;

// TChromiumCoreSetCookieArgs
function TChromiumCoreSetCookieArgsToGo(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgs): TChromiumCoreSetCookieArgsPtr;
function TChromiumCoreSetCookieArgsToPas(const AChromiumCoreSetCookieArgs: TChromiumCoreSetCookieArgsPtr): TChromiumCoreSetCookieArgs;

// TChromiumCoreSimulateKeyEventArgs
function TChromiumCoreSimulateKeyEventArgsToGo(const AChromiumCoreSimulateKeyEventArgs: TChromiumCoreSimulateKeyEventArgs): TChromiumCoreSimulateKeyEventArgsPtr;
function TChromiumCoreSimulateKeyEventArgsToPas(const AChromiumCoreSimulateKeyEventArgs: TChromiumCoreSimulateKeyEventArgsPtr): TChromiumCoreSimulateKeyEventArgs;

// TChromiumCoreSimulateMouseEventArgs
function TChromiumCoreSimulateMouseEventArgsToGo(const AChromiumCoreSimulateMouseEventArgs: TChromiumCoreSimulateMouseEventArgs): TChromiumCoreSimulateMouseEventArgsPtr;
function TChromiumCoreSimulateMouseEventArgsToPas(const AChromiumCoreSimulateMouseEventArgs: TChromiumCoreSimulateMouseEventArgsPtr): TChromiumCoreSimulateMouseEventArgs;

// TChromiumVersionInfo
function TChromiumVersionInfoToGo(const AChromiumVersionInfo: TChromiumVersionInfo): TChromiumVersionInfoPtr;
function TChromiumVersionInfoToPas(const AChromiumVersionInfo: TChromiumVersionInfoPtr): TChromiumVersionInfo;

// TCustomTaskInfo
function TCustomTaskInfoToGo(const ACustomTaskInfo: TCustomTaskInfo): TCustomTaskInfoPtr;
function TCustomTaskInfoToPas(const ACustomTaskInfo: TCustomTaskInfoPtr): TCustomTaskInfo;

// TLinuxWindowProperties
function TLinuxWindowPropertiesToGo(const ALinuxWindowProperties: TLinuxWindowProperties): TLinuxWindowPropertiesPtr;
function TLinuxWindowPropertiesToPas(const ALinuxWindowProperties: TLinuxWindowPropertiesPtr): TLinuxWindowProperties;

implementation

// TCefAcceleratedPaintInfo
function TCefAcceleratedPaintInfoToGo(const ACefAcceleratedPaintInfo: TCefAcceleratedPaintInfo): TCefAcceleratedPaintInfoPtr;
begin
{$IFDEF MSWINDOWS}
  Result.shared_texture_handle := ACefAcceleratedPaintInfo.shared_texture_handle; // TCefSharedTextureHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.shared_texture_io_surface := ACefAcceleratedPaintInfo.shared_texture_io_surface; // TCefSharedTextureHandle
{$ENDIF}
{$IFDEF LINUX}
  Result.planesSize := Length(ACefAcceleratedPaintInfo.planes); // array [0..pred(CEF_KACCELERATEDPAINTMAXPLANES)] of TCefAcceleratedPaintNativePixmapPlaneInfo
  if length(ACefAcceleratedPaintInfo.planes) > 0 then
    Result.planes := @ACefAcceleratedPaintInfo.planes[0]; // array [0..pred(CEF_KACCELERATEDPAINTMAXPLANES)] of TCefAcceleratedPaintNativePixmapPlaneInfo
{$ENDIF}
{$IFDEF LINUX}
  Result.plane_count := ACefAcceleratedPaintInfo.plane_count; // integer
{$ENDIF}
{$IFDEF LINUX}
  Result.modifier := ACefAcceleratedPaintInfo.modifier; // uint64
{$ENDIF}
  Result.format := Integer(ACefAcceleratedPaintInfo.format); // TCefColorType
  Result.extra := TCefAcceleratedPaintInfoCommonToGo(ACefAcceleratedPaintInfo.extra); // TCefAcceleratedPaintInfoCommon
end;

function TCefAcceleratedPaintInfoToPas(const ACefAcceleratedPaintInfo: TCefAcceleratedPaintInfoPtr): TCefAcceleratedPaintInfo;
var
  planesIdx: Integer;
begin
  Result.size := SizeOf(TCefAcceleratedPaintInfo); // NativeUInt
{$IFDEF MSWINDOWS}
  Result.shared_texture_handle := ACefAcceleratedPaintInfo.shared_texture_handle; // TCefSharedTextureHandle
{$ENDIF}
{$IFDEF MACOSX}
  Result.shared_texture_io_surface := ACefAcceleratedPaintInfo.shared_texture_io_surface; // TCefSharedTextureHandle
{$ENDIF}
{$IFDEF LINUX}
  for planesIdx := 0 to ACefAcceleratedPaintInfo.planesSize - 1 do
    Result.planes[planesIdx] := TCefAcceleratedPaintNativePixmapPlaneInfoToPas(ACefAcceleratedPaintInfo.planes^[planesIdx]); // array [0..pred(CEF_KACCELERATEDPAINTMAXPLANES)] of TCefAcceleratedPaintNativePixmapPlaneInfo
{$ENDIF}
{$IFDEF LINUX}
  Result.plane_count := ACefAcceleratedPaintInfo.plane_count; // integer
{$ENDIF}
{$IFDEF LINUX}
  Result.modifier := ACefAcceleratedPaintInfo.modifier; // uint64
{$ENDIF}
  Result.format := TCefColorType(ACefAcceleratedPaintInfo.format); // TCefColorType
  Result.extra := TCefAcceleratedPaintInfoCommonToPas(ACefAcceleratedPaintInfo.extra); // TCefAcceleratedPaintInfoCommon
end;

// TCefAcceleratedPaintInfoCommon
function TCefAcceleratedPaintInfoCommonToGo(const ACefAcceleratedPaintInfoCommon: TCefAcceleratedPaintInfoCommon): TCefAcceleratedPaintInfoCommonPtr;
begin
  Result.timestamp := ACefAcceleratedPaintInfoCommon.timestamp; // uint64
  Result.coded_size := TCefSizeToGo(ACefAcceleratedPaintInfoCommon.coded_size); // TCefSize
  Result.visible_rect := TCefRectToGo(ACefAcceleratedPaintInfoCommon.visible_rect); // TCefRect
  Result.content_rect := TCefRectToGo(ACefAcceleratedPaintInfoCommon.content_rect); // TCefRect
  Result.source_size := TCefSizeToGo(ACefAcceleratedPaintInfoCommon.source_size); // TCefSize
  Result.capture_update_rect := TCefRectToGo(ACefAcceleratedPaintInfoCommon.capture_update_rect); // TCefRect
  Result.region_capture_rect := TCefRectToGo(ACefAcceleratedPaintInfoCommon.region_capture_rect); // TCefRect
  Result.capture_counter := ACefAcceleratedPaintInfoCommon.capture_counter; // uint64
  Result.has_capture_update_rect := ACefAcceleratedPaintInfoCommon.has_capture_update_rect; // byte
  Result.has_region_capture_rect := ACefAcceleratedPaintInfoCommon.has_region_capture_rect; // byte
  Result.has_source_size := ACefAcceleratedPaintInfoCommon.has_source_size; // byte
  Result.has_capture_counter := ACefAcceleratedPaintInfoCommon.has_capture_counter; // byte
end;

function TCefAcceleratedPaintInfoCommonToPas(const ACefAcceleratedPaintInfoCommon: TCefAcceleratedPaintInfoCommonPtr): TCefAcceleratedPaintInfoCommon;
begin
  Result.size := SizeOf(TCefAcceleratedPaintInfoCommon); // NativeUInt
  Result.timestamp := ACefAcceleratedPaintInfoCommon.timestamp; // uint64
  Result.coded_size := TCefSizeToPas(ACefAcceleratedPaintInfoCommon.coded_size); // TCefSize
  Result.visible_rect := TCefRectToPas(ACefAcceleratedPaintInfoCommon.visible_rect); // TCefRect
  Result.content_rect := TCefRectToPas(ACefAcceleratedPaintInfoCommon.content_rect); // TCefRect
  Result.source_size := TCefSizeToPas(ACefAcceleratedPaintInfoCommon.source_size); // TCefSize
  Result.capture_update_rect := TCefRectToPas(ACefAcceleratedPaintInfoCommon.capture_update_rect); // TCefRect
  Result.region_capture_rect := TCefRectToPas(ACefAcceleratedPaintInfoCommon.region_capture_rect); // TCefRect
  Result.capture_counter := ACefAcceleratedPaintInfoCommon.capture_counter; // uint64
  Result.has_capture_update_rect := ACefAcceleratedPaintInfoCommon.has_capture_update_rect; // byte
  Result.has_region_capture_rect := ACefAcceleratedPaintInfoCommon.has_region_capture_rect; // byte
  Result.has_source_size := ACefAcceleratedPaintInfoCommon.has_source_size; // byte
  Result.has_capture_counter := ACefAcceleratedPaintInfoCommon.has_capture_counter; // byte
end;

{$IFDEF LINUX}
// TCefAcceleratedPaintNativePixmapPlaneInfo
function TCefAcceleratedPaintNativePixmapPlaneInfoToGo(const ACefAcceleratedPaintNativePixmapPlaneInfo: TCefAcceleratedPaintNativePixmapPlaneInfo): TCefAcceleratedPaintNativePixmapPlaneInfoPtr;
begin
{$IFDEF LINUX}
  Result.stride := ACefAcceleratedPaintNativePixmapPlaneInfo.stride; // Cardinal
{$ENDIF}
{$IFDEF LINUX}
  Result.offset := ACefAcceleratedPaintNativePixmapPlaneInfo.offset; // uint64
{$ENDIF}
{$IFDEF LINUX}
  Result.size := ACefAcceleratedPaintNativePixmapPlaneInfo.size; // uint64
{$ENDIF}
{$IFDEF LINUX}
  Result.fd := ACefAcceleratedPaintNativePixmapPlaneInfo.fd; // integer
{$ENDIF}
end;

function TCefAcceleratedPaintNativePixmapPlaneInfoToPas(const ACefAcceleratedPaintNativePixmapPlaneInfo: TCefAcceleratedPaintNativePixmapPlaneInfoPtr): TCefAcceleratedPaintNativePixmapPlaneInfo;
begin
{$IFDEF LINUX}
  Result.stride := ACefAcceleratedPaintNativePixmapPlaneInfo.stride; // Cardinal
{$ENDIF}
{$IFDEF LINUX}
  Result.offset := ACefAcceleratedPaintNativePixmapPlaneInfo.offset; // uint64
{$ENDIF}
{$IFDEF LINUX}
  Result.size := ACefAcceleratedPaintNativePixmapPlaneInfo.size; // uint64
{$ENDIF}
{$IFDEF LINUX}
  Result.fd := ACefAcceleratedPaintNativePixmapPlaneInfo.fd; // integer
{$ENDIF}
end;
{$ENDIF}

// TCefAudioParameters
function TCefAudioParametersToGo(const ACefAudioParameters: TCefAudioParameters): TCefAudioParametersPtr;
begin
  Result.channel_layout := Integer(ACefAudioParameters.channel_layout); // TCefChannelLayout
  Result.sample_rate := ACefAudioParameters.sample_rate; // integer
  Result.frames_per_buffer := ACefAudioParameters.frames_per_buffer; // integer
end;

function TCefAudioParametersToPas(const ACefAudioParameters: TCefAudioParametersPtr): TCefAudioParameters;
begin
  Result.size := SizeOf(TCefAudioParameters); // NativeUInt
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
  Result.main_axis_alignment := Integer(ACefBoxLayoutSettings.main_axis_alignment); // TCefAxisAlignment
  Result.cross_axis_alignment := Integer(ACefBoxLayoutSettings.cross_axis_alignment); // TCefAxisAlignment
  Result.minimum_cross_axis_size := ACefBoxLayoutSettings.minimum_cross_axis_size; // Integer
  Result.default_flex := ACefBoxLayoutSettings.default_flex; // Integer
end;

function TCefBoxLayoutSettingsToPas(const ACefBoxLayoutSettings: TCefBoxLayoutSettingsPtr): TCefBoxLayoutSettings;
begin
  Result.size := SizeOf(TCefBoxLayoutSettings); // NativeUInt
  Result.horizontal := ACefBoxLayoutSettings.horizontal; // Integer
  Result.inside_border_horizontal_spacing := ACefBoxLayoutSettings.inside_border_horizontal_spacing; // Integer
  Result.inside_border_vertical_spacing := ACefBoxLayoutSettings.inside_border_vertical_spacing; // Integer
  Result.inside_border_insets := TCefInsetsToPas(ACefBoxLayoutSettings.inside_border_insets); // TCefInsets
  Result.between_child_spacing := ACefBoxLayoutSettings.between_child_spacing; // Integer
  Result.main_axis_alignment := TCefAxisAlignment(ACefBoxLayoutSettings.main_axis_alignment); // TCefAxisAlignment
  Result.cross_axis_alignment := TCefAxisAlignment(ACefBoxLayoutSettings.cross_axis_alignment); // TCefAxisAlignment
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
  Result.databases_deprecated := Integer(ACefBrowserSettings.databases_deprecated); // TCefState
  Result.webgl := Integer(ACefBrowserSettings.webgl); // TCefState
  Result.background_color := ACefBrowserSettings.background_color; // TCefColor
  Result.chrome_status_bubble := Integer(ACefBrowserSettings.chrome_status_bubble); // TCefState
  Result.chrome_zoom_bubble := Integer(ACefBrowserSettings.chrome_zoom_bubble); // TCefState
  Result.ax_viewport_collapse := Integer(ACefBrowserSettings.ax_viewport_collapse); // TCefState
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
  Result.databases_deprecated := TCefState(ACefBrowserSettings.databases_deprecated); // TCefState
  Result.webgl := TCefState(ACefBrowserSettings.webgl); // TCefState
  Result.background_color := ACefBrowserSettings.background_color; // TCefColor
  Result.chrome_status_bubble := TCefState(ACefBrowserSettings.chrome_status_bubble); // TCefState
  Result.chrome_zoom_bubble := TCefState(ACefBrowserSettings.chrome_zoom_bubble); // TCefState
  Result.ax_viewport_collapse := TCefState(ACefBrowserSettings.ax_viewport_collapse); // TCefState
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
  Result.size := SizeOf(TCefCookie); // NativeUInt
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
  Result.size := SizeOf(TCefKeyEvent); // NativeUInt
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
  Result.generate_tagged_pdf := ACefPdfPrintSettings.generate_tagged_pdf; // integer
  Result.generate_document_outline := ACefPdfPrintSettings.generate_document_outline; // integer
end;

function TCefPdfPrintSettingsToPas(const ACefPdfPrintSettings: TCefPdfPrintSettingsPtr): TCefPdfPrintSettings;
begin
  Result.size := SizeOf(TCefPdfPrintSettings); // NativeUInt
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
  Result.generate_tagged_pdf := ACefPdfPrintSettings.generate_tagged_pdf; // integer
  Result.generate_document_outline := ACefPdfPrintSettings.generate_document_outline; // integer
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
  Result.isPopup := ACefPopupFeatures.isPopup; // Integer
end;

function TCefPopupFeaturesToPas(const ACefPopupFeatures: TCefPopupFeaturesPtr): TCefPopupFeatures;
begin
  Result.size := SizeOf(TCefPopupFeatures); // NativeUInt
  Result.x := ACefPopupFeatures.x; // Integer
  Result.xSet := ACefPopupFeatures.xSet; // Integer
  Result.y := ACefPopupFeatures.y; // Integer
  Result.ySet := ACefPopupFeatures.ySet; // Integer
  Result.width := ACefPopupFeatures.width; // Integer
  Result.widthSet := ACefPopupFeatures.widthSet; // Integer
  Result.height := ACefPopupFeatures.height; // Integer
  Result.heightSet := ACefPopupFeatures.heightSet; // Integer
  Result.isPopup := ACefPopupFeatures.isPopup; // Integer
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
  Result.from := ACefRange.from; // cardinal
  Result.to_ := ACefRange.to_; // cardinal
end;

function TCefRangeToPas(const ACefRange: TCefRangePtr): TCefRange;
begin
  Result.from := ACefRange.from; // cardinal
  Result.to_ := ACefRange.to_; // cardinal
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
  Result.accept_language_list := ToPChar(CefString(@ACefRequestContextSettings.accept_language_list)); // TCefString
  Result.cookieable_schemes_list := ToPChar(CefString(@ACefRequestContextSettings.cookieable_schemes_list)); // TCefString
  Result.cookieable_schemes_exclude_defaults := ACefRequestContextSettings.cookieable_schemes_exclude_defaults; // integer
end;

function TCefRequestContextSettingsToPas(const ACefRequestContextSettings: TCefRequestContextSettingsPtr): TCefRequestContextSettings;
begin
  Result.size := SizeOf(TCefRequestContextSettings); // NativeUInt
  Result.cache_path := CefString(PCharToUStr(ACefRequestContextSettings.cache_path)); // TCefString
  Result.persist_session_cookies := ACefRequestContextSettings.persist_session_cookies; // Integer
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
  Result.size := SizeOf(TCefScreenInfo); // NativeUInt
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
  Result.size := SizeOf(TCefTouchHandleState); // NativeUInt
  Result.touch_handle_id := ACefTouchHandleState.touch_handle_id; // integer
  Result.flags := ACefTouchHandleState.flags; // cardinal
  Result.enabled := ACefTouchHandleState.enabled; // integer
  Result.orientation := TCefHorizontalAlignment(ACefTouchHandleState.orientation); // TCefHorizontalAlignment
  Result.mirror_vertical := ACefTouchHandleState.mirror_vertical; // integer
  Result.mirror_horizontal := ACefTouchHandleState.mirror_horizontal; // integer
  Result.origin := TCefPointToPas(ACefTouchHandleState.origin); // TCefPoint
  Result.alpha := ACefTouchHandleState.alpha; // single
end;

// TCefVersionInfo
function TCefVersionInfoToGo(const ACefVersionInfo: TCefVersionInfo): TCefVersionInfoPtr;
begin
  Result.VersionMajor := ACefVersionInfo.VersionMajor; // integer
  Result.VersionMinor := ACefVersionInfo.VersionMinor; // integer
  Result.VersionPatch := ACefVersionInfo.VersionPatch; // integer
  Result.CommitNumber := ACefVersionInfo.CommitNumber; // integer
end;

function TCefVersionInfoToPas(const ACefVersionInfo: TCefVersionInfoPtr): TCefVersionInfo;
begin
  Result.VersionMajor := ACefVersionInfo.VersionMajor; // integer
  Result.VersionMinor := ACefVersionInfo.VersionMinor; // integer
  Result.VersionPatch := ACefVersionInfo.VersionPatch; // integer
  Result.CommitNumber := ACefVersionInfo.CommitNumber; // integer
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
{$IFDEF MSWINDOWS}
  Result.runtime_style := Integer(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
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
{$IFDEF MACOSX}
  Result.runtime_style := Integer(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
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
{$IFDEF LINUX}
  Result.runtime_style := Integer(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
{$ENDIF}
end;

function TCefWindowInfoToPas(const ACefWindowInfo: TCefWindowInfoPtr): TCefWindowInfo;
begin
  Result.size := SizeOf(TCefWindowInfo); // NativeUInt
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
{$IFDEF MSWINDOWS}
  Result.runtime_style := TCefRuntimeStyle(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
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
{$IFDEF MACOSX}
  Result.runtime_style := TCefRuntimeStyle(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
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
{$IFDEF LINUX}
  Result.runtime_style := TCefRuntimeStyle(ACefWindowInfo.runtime_style); // TCefRuntimeStyle
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

// TChromiumCoreSimulateKeyEventArgs
function TChromiumCoreSimulateKeyEventArgsToGo(const AChromiumCoreSimulateKeyEventArgs: TChromiumCoreSimulateKeyEventArgs): TChromiumCoreSimulateKeyEventArgsPtr;
begin
  Result.type_ := Integer(AChromiumCoreSimulateKeyEventArgs.type_); // TSimulatedCefKeyEventType
  Result.modifiers := AChromiumCoreSimulateKeyEventArgs.modifiers; // integer
  Result.timestamp := AChromiumCoreSimulateKeyEventArgs.timestamp; // single
  Result.text := ToPChar(AChromiumCoreSimulateKeyEventArgs.text); // ustring
  Result.unmodifiedtext := ToPChar(AChromiumCoreSimulateKeyEventArgs.unmodifiedtext); // ustring
  Result.keyIdentifier := ToPChar(AChromiumCoreSimulateKeyEventArgs.keyIdentifier); // ustring
  Result.code := ToPChar(AChromiumCoreSimulateKeyEventArgs.code); // ustring
  Result.key := ToPChar(AChromiumCoreSimulateKeyEventArgs.key); // ustring
  Result.windowsVirtualKeyCode := AChromiumCoreSimulateKeyEventArgs.windowsVirtualKeyCode; // integer
  Result.nativeVirtualKeyCode := AChromiumCoreSimulateKeyEventArgs.nativeVirtualKeyCode; // integer
  Result.autoRepeat := AChromiumCoreSimulateKeyEventArgs.autoRepeat; // boolean
  Result.isKeypad := AChromiumCoreSimulateKeyEventArgs.isKeypad; // boolean
  Result.isSystemKey := AChromiumCoreSimulateKeyEventArgs.isSystemKey; // boolean
  Result.location := Integer(AChromiumCoreSimulateKeyEventArgs.location); // TCefKeyLocation
  Result.commands := Integer(AChromiumCoreSimulateKeyEventArgs.commands); // TCefEditingCommand
end;

function TChromiumCoreSimulateKeyEventArgsToPas(const AChromiumCoreSimulateKeyEventArgs: TChromiumCoreSimulateKeyEventArgsPtr): TChromiumCoreSimulateKeyEventArgs;
begin
  Result.type_ := TSimulatedCefKeyEventType(AChromiumCoreSimulateKeyEventArgs.type_); // TSimulatedCefKeyEventType
  Result.modifiers := AChromiumCoreSimulateKeyEventArgs.modifiers; // integer
  Result.timestamp := AChromiumCoreSimulateKeyEventArgs.timestamp; // single
  Result.text := string(AChromiumCoreSimulateKeyEventArgs.text); // ustring
  Result.unmodifiedtext := string(AChromiumCoreSimulateKeyEventArgs.unmodifiedtext); // ustring
  Result.keyIdentifier := string(AChromiumCoreSimulateKeyEventArgs.keyIdentifier); // ustring
  Result.code := string(AChromiumCoreSimulateKeyEventArgs.code); // ustring
  Result.key := string(AChromiumCoreSimulateKeyEventArgs.key); // ustring
  Result.windowsVirtualKeyCode := AChromiumCoreSimulateKeyEventArgs.windowsVirtualKeyCode; // integer
  Result.nativeVirtualKeyCode := AChromiumCoreSimulateKeyEventArgs.nativeVirtualKeyCode; // integer
  Result.autoRepeat := AChromiumCoreSimulateKeyEventArgs.autoRepeat; // boolean
  Result.isKeypad := AChromiumCoreSimulateKeyEventArgs.isKeypad; // boolean
  Result.isSystemKey := AChromiumCoreSimulateKeyEventArgs.isSystemKey; // boolean
  Result.location := TCefKeyLocation(AChromiumCoreSimulateKeyEventArgs.location); // TCefKeyLocation
  Result.commands := TCefEditingCommand(AChromiumCoreSimulateKeyEventArgs.commands); // TCefEditingCommand
end;

// TChromiumCoreSimulateMouseEventArgs
function TChromiumCoreSimulateMouseEventArgsToGo(const AChromiumCoreSimulateMouseEventArgs: TChromiumCoreSimulateMouseEventArgs): TChromiumCoreSimulateMouseEventArgsPtr;
begin
  Result.type_ := Integer(AChromiumCoreSimulateMouseEventArgs.type_); // TCefSimulatedMouseEventType
  Result.x := AChromiumCoreSimulateMouseEventArgs.x; // single
  Result.y := AChromiumCoreSimulateMouseEventArgs.y; // single
  Result.modifiers := AChromiumCoreSimulateMouseEventArgs.modifiers; // integer
  Result.timestamp := AChromiumCoreSimulateMouseEventArgs.timestamp; // single
  Result.button := Integer(AChromiumCoreSimulateMouseEventArgs.button); // TCefSimulatedMouseButton
  Result.buttons := AChromiumCoreSimulateMouseEventArgs.buttons; // integer
  Result.clickCount := AChromiumCoreSimulateMouseEventArgs.clickCount; // integer
  Result.force := AChromiumCoreSimulateMouseEventArgs.force; // single
  Result.tangentialPressure := AChromiumCoreSimulateMouseEventArgs.tangentialPressure; // single
  Result.tiltX := AChromiumCoreSimulateMouseEventArgs.tiltX; // single
  Result.tiltY := AChromiumCoreSimulateMouseEventArgs.tiltY; // single
  Result.twist := AChromiumCoreSimulateMouseEventArgs.twist; // integer
  Result.deltaX := AChromiumCoreSimulateMouseEventArgs.deltaX; // single
  Result.deltaY := AChromiumCoreSimulateMouseEventArgs.deltaY; // single
  Result.pointerType := Integer(AChromiumCoreSimulateMouseEventArgs.pointerType); // TCefSimulatedPointerType
end;

function TChromiumCoreSimulateMouseEventArgsToPas(const AChromiumCoreSimulateMouseEventArgs: TChromiumCoreSimulateMouseEventArgsPtr): TChromiumCoreSimulateMouseEventArgs;
begin
  Result.type_ := TCefSimulatedMouseEventType(AChromiumCoreSimulateMouseEventArgs.type_); // TCefSimulatedMouseEventType
  Result.x := AChromiumCoreSimulateMouseEventArgs.x; // single
  Result.y := AChromiumCoreSimulateMouseEventArgs.y; // single
  Result.modifiers := AChromiumCoreSimulateMouseEventArgs.modifiers; // integer
  Result.timestamp := AChromiumCoreSimulateMouseEventArgs.timestamp; // single
  Result.button := TCefSimulatedMouseButton(AChromiumCoreSimulateMouseEventArgs.button); // TCefSimulatedMouseButton
  Result.buttons := AChromiumCoreSimulateMouseEventArgs.buttons; // integer
  Result.clickCount := AChromiumCoreSimulateMouseEventArgs.clickCount; // integer
  Result.force := AChromiumCoreSimulateMouseEventArgs.force; // single
  Result.tangentialPressure := AChromiumCoreSimulateMouseEventArgs.tangentialPressure; // single
  Result.tiltX := AChromiumCoreSimulateMouseEventArgs.tiltX; // single
  Result.tiltY := AChromiumCoreSimulateMouseEventArgs.tiltY; // single
  Result.twist := AChromiumCoreSimulateMouseEventArgs.twist; // integer
  Result.deltaX := AChromiumCoreSimulateMouseEventArgs.deltaX; // single
  Result.deltaY := AChromiumCoreSimulateMouseEventArgs.deltaY; // single
  Result.pointerType := TCefSimulatedPointerType(AChromiumCoreSimulateMouseEventArgs.pointerType); // TCefSimulatedPointerType
end;

// TChromiumVersionInfo
function TChromiumVersionInfoToGo(const AChromiumVersionInfo: TChromiumVersionInfo): TChromiumVersionInfoPtr;
begin
  Result.VersionMajor := AChromiumVersionInfo.VersionMajor; // integer
  Result.VersionMinor := AChromiumVersionInfo.VersionMinor; // integer
  Result.VersionBuild := AChromiumVersionInfo.VersionBuild; // integer
  Result.VersionPatch := AChromiumVersionInfo.VersionPatch; // integer
end;

function TChromiumVersionInfoToPas(const AChromiumVersionInfo: TChromiumVersionInfoPtr): TChromiumVersionInfo;
begin
  Result.VersionMajor := AChromiumVersionInfo.VersionMajor; // integer
  Result.VersionMinor := AChromiumVersionInfo.VersionMinor; // integer
  Result.VersionBuild := AChromiumVersionInfo.VersionBuild; // integer
  Result.VersionPatch := AChromiumVersionInfo.VersionPatch; // integer
end;

// TCustomTaskInfo
function TCustomTaskInfoToGo(const ACustomTaskInfo: TCustomTaskInfo): TCustomTaskInfoPtr;
begin
  Result.id := ACustomTaskInfo.id; // int64
  Result.type_ := Integer(ACustomTaskInfo.type_); // TCefTaskType
  Result.is_killable := ACustomTaskInfo.is_killable; // boolean
  Result.title := ToPChar(ACustomTaskInfo.title); // ustring
  Result.cpu_usage := ACustomTaskInfo.cpu_usage; // double
  Result.number_of_processors := ACustomTaskInfo.number_of_processors; // integer
  Result.memory := ACustomTaskInfo.memory; // int64
  Result.gpu_memory := ACustomTaskInfo.gpu_memory; // int64
  Result.is_gpu_memory_inflated := ACustomTaskInfo.is_gpu_memory_inflated; // boolean
end;

function TCustomTaskInfoToPas(const ACustomTaskInfo: TCustomTaskInfoPtr): TCustomTaskInfo;
begin
  Result.id := ACustomTaskInfo.id; // int64
  Result.type_ := TCefTaskType(ACustomTaskInfo.type_); // TCefTaskType
  Result.is_killable := ACustomTaskInfo.is_killable; // boolean
  Result.title := string(ACustomTaskInfo.title); // ustring
  Result.cpu_usage := ACustomTaskInfo.cpu_usage; // double
  Result.number_of_processors := ACustomTaskInfo.number_of_processors; // integer
  Result.memory := ACustomTaskInfo.memory; // int64
  Result.gpu_memory := ACustomTaskInfo.gpu_memory; // int64
  Result.is_gpu_memory_inflated := ACustomTaskInfo.is_gpu_memory_inflated; // boolean
end;

// TLinuxWindowProperties
function TLinuxWindowPropertiesToGo(const ALinuxWindowProperties: TLinuxWindowProperties): TLinuxWindowPropertiesPtr;
begin
  Result.wayland_app_id := ToPChar(ALinuxWindowProperties.wayland_app_id); // ustring
  Result.wm_class_class := ToPChar(ALinuxWindowProperties.wm_class_class); // ustring
  Result.wm_class_name := ToPChar(ALinuxWindowProperties.wm_class_name); // ustring
  Result.wm_role_name := ToPChar(ALinuxWindowProperties.wm_role_name); // ustring
end;

function TLinuxWindowPropertiesToPas(const ALinuxWindowProperties: TLinuxWindowPropertiesPtr): TLinuxWindowProperties;
begin
  Result.wayland_app_id := string(ALinuxWindowProperties.wayland_app_id); // ustring
  Result.wm_class_class := string(ALinuxWindowProperties.wm_class_class); // ustring
  Result.wm_class_name := string(ALinuxWindowProperties.wm_class_name); // ustring
  Result.wm_role_name := string(ALinuxWindowProperties.wm_role_name); // ustring
end;


end.
