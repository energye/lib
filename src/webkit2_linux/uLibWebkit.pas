unit uLibWebkit;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils,
{$IFDEF LClGtk3}
  LazGtk3, LazGObject2, LazGLib2, LazGio2, gtk3procs,
{$ENDIF}
  dynlibs;


const
 // webkit so default version
 {$IF Defined(LCLGtk3) }
 libwebkit2gtkso = 'libwebkit2gtk-4.0.so.37'; // libwebkit2gtk-4.0.so.37
 libjavascriptcoregtkso = 'libjavascriptcoregtk-4.0.so.18'; // libjavascriptcoregtk-4.0.so.18
 libsoupso = 'libsoup-2.4.so.1'; // libsoup-2.4.so.1
 {$ENDIF}

// def type
  {$I webkit_types.inc}

// def enum
  {$I webkit_types_enum.inc}

var
  GWebkit2Version: TWebkit2Version = Wkv4_0; // default 4.0
  // Webkit dll
  LibWebkitGtkHandle: TLibHandle;
  // JavascriptCore dll
  LibJavascriptCoreGtkHandle: TLibHandle;
  // Soup dll
  LibSoupHandle: TLibHandle;

  { webkit2gtk API }
  {$I ./apis/webkit2gtk_api.inc}

  { JavascriptCore API }
  {$I ./apis/javascriptcore_api.inc}

  { soup 2.4 API }
  {$I ./apis/soup2_4_api.inc}

  { soup 3.0 API }
  {$I ./apis/soup3_0_api.inc}

  { Webkit API }
  webkit_get_major_version  : function(): guint; cdecl;
  webkit_get_minor_version  : function(): guint; cdecl;
  webkit_get_micro_version  : function(): guint; cdecl;

  // loader libray
  procedure LoadLibWebkitGtkProc();
  procedure FreeLibHandle();

  // Webit utils
  function Webkit_Web_View(webview: PGtkWidget): WebKitWebView; inline;
  function Webkit_Web_View(aObject: PGObject): WebKitWebView; inline;
  function webkit_major_version(): Integer;
  function webkit_minor_version(): Integer;
  function webkit_micro_version(): Integer;
  
implementation

uses math;

function Webkit_Web_View(webview: PGtkWidget): WebKitWebView; inline;
begin
  Result := WebKitWebView(webview);
end;

function Webkit_Web_View(aObject: PGObject): WebKitWebView; inline;
begin
  Result := WebKitWebView(aObject);
end;

function webkit_major_version(): Integer;
begin
  Result := Integer(webkit_get_major_version());
end;

function webkit_minor_version(): Integer;
begin
  Result := Integer(webkit_get_minor_version());
end;

function webkit_micro_version(): Integer;
begin
  Result := Integer(webkit_get_micro_version());
end;

procedure LoadLibWebkitGtkProc();
begin
  {$IFDEF LCLGtk3}
  // LibWebKit
  if LibWebkitGtkHandle <> 0 then
  begin
    Pointer(webkit_get_major_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_major_version');
    Pointer(webkit_get_minor_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_minor_version');
    Pointer(webkit_get_micro_version) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_get_micro_version');

    {$I ./apis/webkit2gtk_api_load.inc}
  end;

  // LibJavascriptCore
  if LibJavascriptCoreGtkHandle <> 0 then
  begin
    {$I ./apis/javascriptcore_api_load.inc}
  end;

  // LibSoup
  if LibSoupHandle <> 0 then
  begin
    if GWebkit2Version = Wkv4_0 then
    begin
      {$I ./apis/soup2_4_api_load.inc}
    end
    else if GWebkit2Version = Wkv4_1 then
    begin
      {$I ./apis/soup3_0_api_load.inc}
    end;
  end;
  {$ENDIF} // GTK3
end;

procedure FreeLibHandle;
begin
  if LibWebkitGtkHandle <> 0 then
  begin
    dynlibs.UnloadLibrary(LibWebkitGtkHandle);
    LibWebkitGtkHandle := 0;
  end;
  if LibJavascriptCoreGtkHandle <> 0 then
  begin
    dynlibs.UnloadLibrary(LibJavascriptCoreGtkHandle);
    LibJavascriptCoreGtkHandle := 0;
  end;
  if LibSoupHandle <> 0  then
  begin
    dynlibs.UnloadLibrary(LibSoupHandle);
    LibSoupHandle := 0;
  end;
end;

initialization
  // 屏蔽浮点异常
  SetExceptionMask([exInvalidOp..exPrecision]);

finalization

end.

