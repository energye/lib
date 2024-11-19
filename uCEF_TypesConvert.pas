//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uCEF_TypesConvert;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  Classes,
  uTools,
  uCEFMiscFunctions, uCEFTypes;

type

  PEngBrowserSettingsPtr = ^TEngBrowserSettingsPtr;

  TEngBrowserSettingsPtr = record
    WindowlessFrameRate: PInteger; // Integer
    StandardFontFamily: PChar; // TCefString
    FixedFontFamily: PChar; // TCefString
    SerifFontFamily: PChar; // TCefString
    SansSerifFontFamily: PChar; // TCefString
    CursiveFontFamily: PChar; // TCefString
    FantasyFontFamily: PChar; // TCefString
    DefaultFontSize: PInteger; // Integer
    DefaultFixedFontSize: PInteger; // Integer
    MinimumFontSize: PInteger; // Integer
    MinimumLogicalFontSize: PInteger; // Integer
    DefaultEncoding: PChar; // TCefString
    RemoteFonts: PInteger; // TCefState
    Javascript: PInteger; // TCefState
    JavascriptCloseWindows: PInteger; // TCefState
    JavascriptAccessClipboard: PInteger; // TCefState
    JavascriptDomPaste: PInteger; // TCefState
    Plugins: PInteger; // TCefState
    UniversalAccessFromFileUrls: PInteger; // TCefState
    FileAccessFromFileUrls: PInteger; // TCefState
    WebSecurity: PInteger; // TCefState
    ImageLoading: PInteger; // TCefState
    ImageShrinkStandaloneToFit: PInteger; // TCefState
    TextAreaResize: PInteger; // TCefState
    TabToLinks: PInteger; // TCefState
    LocalStorage: PInteger; // TCefState
    Databases: PInteger; // TCefState
    ApplicationCache: PInteger; // TCefState
    Webgl: PInteger; // TCefState
    BackgroundColor: PInteger; // TCefColor
    AcceptLanguageList: PChar; // TCefString
  end;

  PEngCookiePtr = ^TEngCookiePtr;

  TEngCookiePtr = record
    Name: PChar; // TCefString
    Value: PChar; // TCefString
    Domain: PChar; // TCefString
    Path: PChar; // TCefString
    Secure: PInteger; // Integer
    Httponly: PInteger; // Integer
    Creation: PCefTime; // TCefTime
    LastAccess: PCefTime; // TCefTime
    HasExpires: PInteger; // Integer
    Expires: PCefTime; // TCefTime
    SameSite: PInteger; // TCefCookieSameSite
    Priority: PInteger; // TCefCookiePriority
  end;

  PEngMediaSinkDeviceInfoPtr = ^TEngMediaSinkDeviceInfoPtr;

  TEngMediaSinkDeviceInfoPtr = record
    IpAddress: PChar; // TCefString
    Port: PInteger; // integer
    ModelName: PChar; // TCefString
  end;

  PEngPdfPrintSettingsPtr = ^TEngPdfPrintSettingsPtr;

  TEngPdfPrintSettingsPtr = record
    HeaderFooterTitle: PChar; // TCefString
    HeaderFooterUrl: PChar; // TCefString
    PageWidth: PInteger; // Integer
    PageHeight: PInteger; // Integer
    ScaleFactor: PInteger; // Integer
    MarginTop: PInteger; // Integer
    MarginRight: PInteger; // Integer
    MarginBottom: PInteger; // Integer
    MarginLeft: PInteger; // Integer
    MarginType: PInteger; // TCefPdfPrintMarginType
    HeaderFooterEnabled: PInteger; // Integer
    SelectionOnly: PInteger; // Integer
    Landscape: PInteger; // Integer
    BackgroundsEnabled: PInteger; // Integer
  end;

  PEngRequestContextSettingsPtr = ^TEngRequestContextSettingsPtr;

  TEngRequestContextSettingsPtr = record
    CachePath: PChar; // TCefString
    PersistSessionCookies: PInteger; // Integer
    PersistUserPreferences: PInteger; // Integer
    IgnoreCertificateErrors: PInteger; // Integer
    AcceptLanguageList: PChar; // TCefString
  end;

  PEngSettingsPtr = ^TEngSettingsPtr;

  TEngSettingsPtr = record
    NoSandbox: PInteger; // Integer
    BrowserSubprocessPath: PChar; // TCefString
    FrameworkDirPath: PChar; // TCefString
    MainBundlePath: PChar; // TCefString
    ChromeRuntime: PInteger; // Integer
    MultiThreadedMessageLoop: PInteger; // Integer
    ExternalMessagePump: PInteger; // Integer
    WindowlessRenderingEnabled: PInteger; // Integer
    CommandLineArgsDisabled: PInteger; // Integer
    CachePath: PChar; // TCefString
    RootCachePath: PChar; // TCefString
    UserDataPath: PChar; // TCefString
    PersistSessionCookies: PInteger; // Integer
    PersistUserPreferences: PInteger; // Integer
    UserAgent: PChar; // TCefString
    ProductVersion: PChar; // TCefString
    Locale: PChar; // TCefString
    LogFile: PChar; // TCefString
    LogSeverity: PInteger; // TCefLogSeverity
    JavascriptFlags: PChar; // TCefString
    ResourcesDirPath: PChar; // TCefString
    LocalesDirPath: PChar; // TCefString
    PackLoadingDisabled: PInteger; // Integer
    RemoteDebuggingPort: PInteger; // Integer
    UncaughtExceptionStackSize: PInteger; // Integer
    IgnoreCertificateErrors: PInteger; // Integer
    BackgroundColor: PInteger; // TCefColor
    AcceptLanguageList: PChar; // TCefString
    ApplicationClientIdForFileScanning: PChar; // TCefString
  end;

  PEngUrlPartsPtr = ^TEngUrlPartsPtr;

  TEngUrlPartsPtr = record
    Spec: PChar; // TCefString
    Scheme: PChar; // TCefString
    Username: PChar; // TCefString
    Password: PChar; // TCefString
    Host: PChar; // TCefString
    Port: PChar; // TCefString
    Origin: PChar; // TCefString
    Path: PChar; // TCefString
    Query: PChar; // TCefString
    Fragment: PChar; // TCefString
  end;

  PCookiePtr = ^TCookiePtr;

  TCookiePtr = record
    Name: PChar; // ustring
    Value: PChar; // ustring
    Domain: PChar; // ustring
    Path: PChar; // ustring
    Creation: PDouble; // TDateTime
    LastAccess: PDouble; // TDateTime
    Expires: PDouble; // TDateTime
    Secure: PBoolean; // boolean
    Httponly: PBoolean; // boolean
    HasExpires: PBoolean; // boolean
    SameSite: PInteger; // TCefCookieSameSite
    Priority: PInteger; // TCefCookiePriority
  end;

  PUrlPartsPtr = ^TUrlPartsPtr;

  TUrlPartsPtr = record
    Spec: PChar; // ustring
    Scheme: PChar; // ustring
    Username: PChar; // ustring
    Password: PChar; // ustring
    Host: PChar; // ustring
    Port: PChar; // ustring
    Origin: PChar; // ustring
    Path: PChar; // ustring
    Query: PChar; // ustring
    Fragment: PChar; // ustring
  end;

// TCefBrowserSettings
function EngBrowserSettingsToGo(const AData: TCefBrowserSettings): TEngBrowserSettingsPtr;
function EngBrowserSettingsToPas(const AData: TEngBrowserSettingsPtr): TCefBrowserSettings;

// TCefCookie
function EngCookieToGo(const AData: TCefCookie): TEngCookiePtr;
function EngCookieToPas(const AData: TEngCookiePtr): TCefCookie;

// TCefMediaSinkDeviceInfo
function EngMediaSinkDeviceInfoToGo(const AData: TCefMediaSinkDeviceInfo): TEngMediaSinkDeviceInfoPtr;
function EngMediaSinkDeviceInfoToPas(const AData: TEngMediaSinkDeviceInfoPtr): TCefMediaSinkDeviceInfo;

// TCefPdfPrintSettings
function EngPdfPrintSettingsToGo(const AData: TCefPdfPrintSettings): TEngPdfPrintSettingsPtr;
function EngPdfPrintSettingsToPas(const AData: TEngPdfPrintSettingsPtr): TCefPdfPrintSettings;

// TCefRequestContextSettings
function EngRequestContextSettingsToGo(const AData: TCefRequestContextSettings): TEngRequestContextSettingsPtr;
function EngRequestContextSettingsToPas(const AData: TEngRequestContextSettingsPtr): TCefRequestContextSettings;

// TCefSettings
function EngSettingsToGo(const AData: TCefSettings): TEngSettingsPtr;
function EngSettingsToPas(const AData: TEngSettingsPtr): TCefSettings;

// TCefUrlParts
function EngUrlPartsToGo(const AData: TCefUrlParts): TEngUrlPartsPtr;
function EngUrlPartsToPas(const AData: TEngUrlPartsPtr): TCefUrlParts;

// TCookie
function CookieToGo(const AData: TCookie): TCookiePtr;
function CookieToPas(const AData: TCookiePtr): TCookie;

// TUrlParts
function UrlPartsToGo(const AData: TUrlParts): TUrlPartsPtr;
function UrlPartsToPas(const AData: TUrlPartsPtr): TUrlParts;

implementation

// TCefBrowserSettings
function EngBrowserSettingsToGo(const AData: TCefBrowserSettings): TEngBrowserSettingsPtr;
begin
  Result.WindowlessFrameRate := @(AData.windowless_frame_rate);
  Result.StandardFontFamily := ToPChar(CefString(@AData.standard_font_family));
  Result.FixedFontFamily := ToPChar(CefString(@AData.fixed_font_family));
  Result.SerifFontFamily := ToPChar(CefString(@AData.serif_font_family));
  Result.SansSerifFontFamily := ToPChar(CefString(@AData.sans_serif_font_family));
  Result.CursiveFontFamily := ToPChar(CefString(@AData.cursive_font_family));
  Result.FantasyFontFamily := ToPChar(CefString(@AData.fantasy_font_family));
  Result.DefaultFontSize := @(AData.default_font_size);
  Result.DefaultFixedFontSize := @(AData.default_fixed_font_size);
  Result.MinimumFontSize := @(AData.minimum_font_size);
  Result.MinimumLogicalFontSize := @(AData.minimum_logical_font_size);
  Result.DefaultEncoding := ToPChar(CefString(@AData.default_encoding));
  Result.RemoteFonts := @(AData.remote_fonts);
  Result.Javascript := @(AData.javascript);
  Result.JavascriptCloseWindows := @(AData.javascript_close_windows);
  Result.JavascriptAccessClipboard := @(AData.javascript_access_clipboard);
  Result.JavascriptDomPaste := @(AData.javascript_dom_paste);
  Result.Plugins := @(AData.plugins);
  Result.UniversalAccessFromFileUrls := @(AData.universal_access_from_file_urls);
  Result.FileAccessFromFileUrls := @(AData.file_access_from_file_urls);
  Result.WebSecurity := @(AData.web_security);
  Result.ImageLoading := @(AData.image_loading);
  Result.ImageShrinkStandaloneToFit := @(AData.image_shrink_standalone_to_fit);
  Result.TextAreaResize := @(AData.text_area_resize);
  Result.TabToLinks := @(AData.tab_to_links);
  Result.LocalStorage := @(AData.local_storage);
  Result.Databases := @(AData.databases);
  Result.ApplicationCache := @(AData.application_cache);
  Result.Webgl := @(AData.webgl);
  Result.BackgroundColor := @(AData.background_color);
  Result.AcceptLanguageList := ToPChar(CefString(@AData.accept_language_list));
end;

function EngBrowserSettingsToPas(const AData: TEngBrowserSettingsPtr): TCefBrowserSettings;
begin
  Result.size := SizeOf(TCefBrowserSettings);
  Result.windowless_frame_rate := Integer(AData.WindowlessFrameRate^);
  Result.standard_font_family := CefString(PCharToUStr(AData.StandardFontFamily));
  Result.fixed_font_family := CefString(PCharToUStr(AData.FixedFontFamily));
  Result.serif_font_family := CefString(PCharToUStr(AData.SerifFontFamily));
  Result.sans_serif_font_family := CefString(PCharToUStr(AData.SansSerifFontFamily));
  Result.cursive_font_family := CefString(PCharToUStr(AData.CursiveFontFamily));
  Result.fantasy_font_family := CefString(PCharToUStr(AData.FantasyFontFamily));
  Result.default_font_size := Integer(AData.DefaultFontSize^);
  Result.default_fixed_font_size := Integer(AData.DefaultFixedFontSize^);
  Result.minimum_font_size := Integer(AData.MinimumFontSize^);
  Result.minimum_logical_font_size := Integer(AData.MinimumLogicalFontSize^);
  Result.default_encoding := CefString(PCharToUStr(AData.DefaultEncoding));
  Result.remote_fonts := TCefState(AData.RemoteFonts^);
  Result.javascript := TCefState(AData.Javascript^);
  Result.javascript_close_windows := TCefState(AData.JavascriptCloseWindows^);
  Result.javascript_access_clipboard := TCefState(AData.JavascriptAccessClipboard^);
  Result.javascript_dom_paste := TCefState(AData.JavascriptDomPaste^);
  Result.plugins := TCefState(AData.Plugins^);
  Result.universal_access_from_file_urls := TCefState(AData.UniversalAccessFromFileUrls^);
  Result.file_access_from_file_urls := TCefState(AData.FileAccessFromFileUrls^);
  Result.web_security := TCefState(AData.WebSecurity^);
  Result.image_loading := TCefState(AData.ImageLoading^);
  Result.image_shrink_standalone_to_fit := TCefState(AData.ImageShrinkStandaloneToFit^);
  Result.text_area_resize := TCefState(AData.TextAreaResize^);
  Result.tab_to_links := TCefState(AData.TabToLinks^);
  Result.local_storage := TCefState(AData.LocalStorage^);
  Result.databases := TCefState(AData.Databases^);
  Result.application_cache := TCefState(AData.ApplicationCache^);
  Result.webgl := TCefState(AData.Webgl^);
  Result.background_color := TCefColor(AData.BackgroundColor^);
  Result.accept_language_list := CefString(PCharToUStr(AData.AcceptLanguageList));
end;

// TCefCookie
function EngCookieToGo(const AData: TCefCookie): TEngCookiePtr;
begin
  Result.Name := ToPChar(CefString(@AData.name));
  Result.Value := ToPChar(CefString(@AData.value));
  Result.Domain := ToPChar(CefString(@AData.domain));
  Result.Path := ToPChar(CefString(@AData.path));
  Result.Secure := @(AData.secure);
  Result.Httponly := @(AData.httponly);
  Result.Creation := @(AData.creation);
  Result.LastAccess := @(AData.last_access);;
  Result.HasExpires := @(AData.has_expires);
  Result.Expires := @(AData.expires);
  Result.SameSite := @(AData.same_site);
  Result.Priority := @(AData.priority);
end;

function EngCookieToPas(const AData: TEngCookiePtr): TCefCookie;
begin
  Result.name := CefString(PCharToUStr(AData.Name));
  Result.value := CefString(PCharToUStr(AData.Value));
  Result.domain := CefString(PCharToUStr(AData.Domain));
  Result.path := CefString(PCharToUStr(AData.Path));
  Result.secure := Integer(AData.Secure^);
  Result.httponly := Integer(AData.Httponly^);
  Result.creation := AData.Creation^;
  Result.last_access := AData.LastAccess^;
  Result.has_expires := Integer(AData.HasExpires^);
  Result.expires := AData.Expires^;
  Result.same_site := TCefCookieSameSite(AData.SameSite^);
  Result.priority := TCefCookiePriority(AData.Priority^);
end;

// TCefMediaSinkDeviceInfo
function EngMediaSinkDeviceInfoToGo(const AData: TCefMediaSinkDeviceInfo): TEngMediaSinkDeviceInfoPtr;
begin
  Result.IpAddress := ToPChar(CefString(@AData.ip_address));
  Result.Port := @(AData.port);
  Result.ModelName := ToPChar(CefString(@AData.model_name));
end;

function EngMediaSinkDeviceInfoToPas(const AData: TEngMediaSinkDeviceInfoPtr): TCefMediaSinkDeviceInfo;
begin
  Result.ip_address := CefString(PCharToUStr(AData.IpAddress));
  Result.port := integer(AData.Port^);
  Result.model_name := CefString(PCharToUStr(AData.ModelName));
end;

// TCefPdfPrintSettings
function EngPdfPrintSettingsToGo(const AData: TCefPdfPrintSettings): TEngPdfPrintSettingsPtr;
begin
  Result.HeaderFooterTitle := ToPChar(CefString(@AData.header_footer_title));
  Result.HeaderFooterUrl := ToPChar(CefString(@AData.header_footer_url));
  Result.PageWidth := @(AData.page_width);
  Result.PageHeight := @(AData.page_height);
  Result.ScaleFactor := @(AData.scale_factor);
  Result.MarginTop := @(AData.margin_top);
  Result.MarginRight := @(AData.margin_right);
  Result.MarginBottom := @(AData.margin_bottom);
  Result.MarginLeft := @(AData.margin_left);
  Result.MarginType := @(AData.margin_type);
  Result.HeaderFooterEnabled := @(AData.header_footer_enabled);
  Result.SelectionOnly := @(AData.selection_only);
  Result.Landscape := @(AData.landscape);
  Result.BackgroundsEnabled := @(AData.backgrounds_enabled);
end;

function EngPdfPrintSettingsToPas(const AData: TEngPdfPrintSettingsPtr): TCefPdfPrintSettings;
begin
  Result.header_footer_title := CefString(PCharToUStr(AData.HeaderFooterTitle));
  Result.header_footer_url := CefString(PCharToUStr(AData.HeaderFooterUrl));
  Result.page_width := Integer(AData.PageWidth^);
  Result.page_height := Integer(AData.PageHeight^);
  Result.scale_factor := Integer(AData.ScaleFactor^);
  Result.margin_top := Integer(AData.MarginTop^);
  Result.margin_right := Integer(AData.MarginRight^);
  Result.margin_bottom := Integer(AData.MarginBottom^);
  Result.margin_left := Integer(AData.MarginLeft^);
  Result.margin_type := TCefPdfPrintMarginType(AData.MarginType^);
  Result.header_footer_enabled := Integer(AData.HeaderFooterEnabled^);
  Result.selection_only := Integer(AData.SelectionOnly^);
  Result.landscape := Integer(AData.Landscape^);
  Result.backgrounds_enabled := Integer(AData.BackgroundsEnabled^);
end;

// TCefRequestContextSettings
function EngRequestContextSettingsToGo(const AData: TCefRequestContextSettings): TEngRequestContextSettingsPtr;
begin
  Result.CachePath := ToPChar(CefString(@AData.cache_path));
  Result.PersistSessionCookies := @(AData.persist_session_cookies);
  Result.PersistUserPreferences := @(AData.persist_user_preferences);
  Result.IgnoreCertificateErrors := @(AData.ignore_certificate_errors);
  Result.AcceptLanguageList := ToPChar(CefString(@AData.accept_language_list));
end;

function EngRequestContextSettingsToPas(const AData: TEngRequestContextSettingsPtr): TCefRequestContextSettings;
begin
  Result.size := SizeOf(TCefRequestContextSettings);
  Result.cache_path := CefString(PCharToUStr(AData.CachePath));
  Result.persist_session_cookies := Integer(AData.PersistSessionCookies^);
  Result.persist_user_preferences := Integer(AData.PersistUserPreferences^);
  Result.ignore_certificate_errors := Integer(AData.IgnoreCertificateErrors^);
  Result.accept_language_list := CefString(PCharToUStr(AData.AcceptLanguageList));
end;

// TCefSettings
function EngSettingsToGo(const AData: TCefSettings): TEngSettingsPtr;
begin
  Result.NoSandbox := @(AData.no_sandbox);
  Result.BrowserSubprocessPath := ToPChar(CefString(@AData.browser_subprocess_path));
  Result.FrameworkDirPath := ToPChar(CefString(@AData.framework_dir_path));
  Result.MainBundlePath := ToPChar(CefString(@AData.main_bundle_path));
  Result.ChromeRuntime := @(AData.chrome_runtime);
  Result.MultiThreadedMessageLoop := @(AData.multi_threaded_message_loop);
  Result.ExternalMessagePump := @(AData.external_message_pump);
  Result.WindowlessRenderingEnabled := @(AData.windowless_rendering_enabled);
  Result.CommandLineArgsDisabled := @(AData.command_line_args_disabled);
  Result.CachePath := ToPChar(CefString(@AData.cache_path));
  Result.RootCachePath := ToPChar(CefString(@AData.root_cache_path));
  Result.UserDataPath := ToPChar(CefString(@AData.user_data_path));
  Result.PersistSessionCookies := @(AData.persist_session_cookies);
  Result.PersistUserPreferences := @(AData.persist_user_preferences);
  Result.UserAgent := ToPChar(CefString(@AData.user_agent));
  Result.ProductVersion := ToPChar(CefString(@AData.product_version));
  Result.Locale := ToPChar(CefString(@AData.locale));
  Result.LogFile := ToPChar(CefString(@AData.log_file));
  Result.LogSeverity := @(AData.log_severity);
  Result.JavascriptFlags := ToPChar(CefString(@AData.javascript_flags));
  Result.ResourcesDirPath := ToPChar(CefString(@AData.resources_dir_path));
  Result.LocalesDirPath := ToPChar(CefString(@AData.locales_dir_path));
  Result.PackLoadingDisabled := @(AData.pack_loading_disabled);
  Result.RemoteDebuggingPort := @(AData.remote_debugging_port);
  Result.UncaughtExceptionStackSize := @(AData.uncaught_exception_stack_size);
  Result.IgnoreCertificateErrors := @(AData.ignore_certificate_errors);
  Result.BackgroundColor := @(AData.background_color);
  Result.AcceptLanguageList := ToPChar(CefString(@AData.accept_language_list));
  Result.ApplicationClientIdForFileScanning := ToPChar(CefString(@AData.application_client_id_for_file_scanning));
end;

function EngSettingsToPas(const AData: TEngSettingsPtr): TCefSettings;
begin
  Result.size := SizeOf(TCefSettings);
  Result.no_sandbox := Integer(AData.NoSandbox^);
  Result.browser_subprocess_path := CefString(PCharToUStr(AData.BrowserSubprocessPath));
  Result.framework_dir_path := CefString(PCharToUStr(AData.FrameworkDirPath));
  Result.main_bundle_path := CefString(PCharToUStr(AData.MainBundlePath));
  Result.chrome_runtime := Integer(AData.ChromeRuntime^);
  Result.multi_threaded_message_loop := Integer(AData.MultiThreadedMessageLoop^);
  Result.external_message_pump := Integer(AData.ExternalMessagePump^);
  Result.windowless_rendering_enabled := Integer(AData.WindowlessRenderingEnabled^);
  Result.command_line_args_disabled := Integer(AData.CommandLineArgsDisabled^);
  Result.cache_path := CefString(PCharToUStr(AData.CachePath));
  Result.root_cache_path := CefString(PCharToUStr(AData.RootCachePath));
  Result.user_data_path := CefString(PCharToUStr(AData.UserDataPath));
  Result.persist_session_cookies := Integer(AData.PersistSessionCookies^);
  Result.persist_user_preferences := Integer(AData.PersistUserPreferences^);
  Result.user_agent := CefString(PCharToUStr(AData.UserAgent));
  Result.product_version := CefString(PCharToUStr(AData.ProductVersion));
  Result.locale := CefString(PCharToUStr(AData.Locale));
  Result.log_file := CefString(PCharToUStr(AData.LogFile));
  Result.log_severity := TCefLogSeverity(AData.LogSeverity^);
  Result.javascript_flags := CefString(PCharToUStr(AData.JavascriptFlags));
  Result.resources_dir_path := CefString(PCharToUStr(AData.ResourcesDirPath));
  Result.locales_dir_path := CefString(PCharToUStr(AData.LocalesDirPath));
  Result.pack_loading_disabled := Integer(AData.PackLoadingDisabled^);
  Result.remote_debugging_port := Integer(AData.RemoteDebuggingPort^);
  Result.uncaught_exception_stack_size := Integer(AData.UncaughtExceptionStackSize^);
  Result.ignore_certificate_errors := Integer(AData.IgnoreCertificateErrors^);
  Result.background_color := TCefColor(AData.BackgroundColor^);
  Result.accept_language_list := CefString(PCharToUStr(AData.AcceptLanguageList));
  Result.application_client_id_for_file_scanning := CefString(PCharToUStr(AData.ApplicationClientIdForFileScanning));
end;

// TCefUrlParts
function EngUrlPartsToGo(const AData: TCefUrlParts): TEngUrlPartsPtr;
begin
  Result.Spec := ToPChar(CefString(@AData.spec));
  Result.Scheme := ToPChar(CefString(@AData.scheme));
  Result.Username := ToPChar(CefString(@AData.username));
  Result.Password := ToPChar(CefString(@AData.password));
  Result.Host := ToPChar(CefString(@AData.host));
  Result.Port := ToPChar(CefString(@AData.port));
  Result.Origin := ToPChar(CefString(@AData.origin));
  Result.Path := ToPChar(CefString(@AData.path));
  Result.Query := ToPChar(CefString(@AData.query));
  Result.Fragment := ToPChar(CefString(@AData.fragment));
end;

function EngUrlPartsToPas(const AData: TEngUrlPartsPtr): TCefUrlParts;
begin
  Result.spec := CefString(PCharToUStr(AData.Spec));
  Result.scheme := CefString(PCharToUStr(AData.Scheme));
  Result.username := CefString(PCharToUStr(AData.Username));
  Result.password := CefString(PCharToUStr(AData.Password));
  Result.host := CefString(PCharToUStr(AData.Host));
  Result.port := CefString(PCharToUStr(AData.Port));
  Result.origin := CefString(PCharToUStr(AData.Origin));
  Result.path := CefString(PCharToUStr(AData.Path));
  Result.query := CefString(PCharToUStr(AData.Query));
  Result.fragment := CefString(PCharToUStr(AData.Fragment));
end;

// TCookie
function CookieToGo(const AData: TCookie): TCookiePtr;
begin
  Result.Name := ToPChar(AData.name);
  Result.Value := ToPChar(AData.value);
  Result.Domain := ToPChar(AData.domain);
  Result.Path := ToPChar(AData.path);
  Result.Creation := @(AData.creation);
  Result.LastAccess := @(AData.last_access);
  Result.Expires := @(AData.expires);
  Result.Secure := @(AData.secure);
  Result.Httponly := @(AData.httponly);
  Result.HasExpires := @(AData.has_expires);
  Result.SameSite := @(AData.same_site);
  Result.Priority := @(AData.priority);
end;

function CookieToPas(const AData: TCookiePtr): TCookie;
begin
  Result.name := PCharToUStr(AData.Name);
  Result.value := PCharToUStr(AData.Value);
  Result.domain := PCharToUStr(AData.Domain);
  Result.path := PCharToUStr(AData.Path);
  Result.creation := TDateTime(AData.Creation^);
  Result.last_access := TDateTime(AData.LastAccess^);
  Result.expires := TDateTime(AData.Expires^);
  Result.secure := boolean(AData.Secure^);
  Result.httponly := boolean(AData.Httponly^);
  Result.has_expires := boolean(AData.HasExpires^);
  Result.same_site := TCefCookieSameSite(AData.SameSite^);
  Result.priority := TCefCookiePriority(AData.Priority^);
end;

// TUrlParts
function UrlPartsToGo(const AData: TUrlParts): TUrlPartsPtr;
begin
  Result.Spec := ToPChar(AData.spec);
  Result.Scheme := ToPChar(AData.scheme);
  Result.Username := ToPChar(AData.username);
  Result.Password := ToPChar(AData.password);
  Result.Host := ToPChar(AData.host);
  Result.Port := ToPChar(AData.port);
  Result.Origin := ToPChar(AData.origin);
  Result.Path := ToPChar(AData.path);
  Result.Query := ToPChar(AData.query);
  Result.Fragment := ToPChar(AData.fragment);
end;

function UrlPartsToPas(const AData: TUrlPartsPtr): TUrlParts;
begin
  Result.spec := PCharToUStr(AData.Spec);
  Result.scheme := PCharToUStr(AData.Scheme);
  Result.username := PCharToUStr(AData.Username);
  Result.password := PCharToUStr(AData.Password);
  Result.host := PCharToUStr(AData.Host);
  Result.port := PCharToUStr(AData.Port);
  Result.origin := PCharToUStr(AData.Origin);
  Result.path := PCharToUStr(AData.Path);
  Result.query := PCharToUStr(AData.Query);
  Result.fragment := PCharToUStr(AData.Fragment);
end;

end.
