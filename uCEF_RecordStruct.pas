//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uCEF_RecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  {$IFDEF LINUX}xlib,{$ENDIF}
  Types,
  Classes, SysUtils, Graphics, Controls,
  uCEFTypes, uCEFMiscFunctions,
  uTypes, uTools;

type

  PEngWindowInfoPtr = ^TEngWindowInfoPtr;

  // TCefWindowInfo
  TEngWindowInfoPtr = record
    {$IFDEF MSWINDOWS}
    ex_style: PDWORD;
    window_name: PChar;
    style: PDWORD;
    x: PInteger;
    y: PInteger;
    Width: PInteger;
    Height: PInteger;
    parent_window: PCefWindowHandle;
    menu: PHMENU;
    windowless_rendering_enabled: PInteger;
    shared_texture_enabled: PInteger;
    external_begin_frame_enabled: PInteger;
    window: PCefWindowHandle;
    {$ENDIF}
    {$IFDEF Darwin}
    window_name: PChar;
    x: PInteger;
    y: PInteger;
    Width: PInteger;
    Height: PInteger;
    hidden: PInteger;
    parent_view: PCefWindowHandle;
    windowless_rendering_enabled: PInteger;
    shared_texture_enabled: PInteger;
    external_begin_frame_enabled: PInteger;
    view: PCefWindowHandle;
    {$ENDIF}
    {$IFDEF LINUX}
    window_name: PChar;
    x: PInteger;
    y: PInteger;
    Width: PInteger;
    Height: PInteger;
    parent_window: PCefWindowHandle;
    windowless_rendering_enabled: PInteger;
    shared_texture_enabled: PInteger;
    external_begin_frame_enabled: PInteger;
    window: PCefWindowHandle;
    {$ENDIF}
  end;

  // TBeforePopupPtr
  PBeforePopupPtr = ^TBeforePopupPtr;

  TBeforePopupPtr = record
    TargetUrl: PChar;
    TargetFrameName: PChar;
    TargetDisposition: PInteger;
    UserGesture: PBoolean;
  end;


// TCefWindowInfo
function EngWindowInfoToGo(const settings: TCefWindowInfo): TEngWindowInfoPtr;
function EngWindowInfoToPas(const settings: TEngWindowInfoPtr): TCefWindowInfo;


implementation

// TCefWindowInfo
function EngWindowInfoToGo(const settings: TCefWindowInfo): TEngWindowInfoPtr;
begin
  {$IFDEF MSWINDOWS}
  Result.ex_style := @settings.ex_style;
  Result.window_name := PChar(string(CefString(@settings.window_name)));
  Result.style := @settings.style;
  Result.x := @settings.bounds.x;
  Result.y := @settings.bounds.y;
  Result.Width := @settings.bounds.Width;
  Result.Height := @settings.bounds.Height;
  Result.parent_window := @settings.parent_window;
  Result.menu := @settings.menu;
  Result.windowless_rendering_enabled := @settings.windowless_rendering_enabled;
  Result.shared_texture_enabled := @settings.shared_texture_enabled;
  Result.external_begin_frame_enabled := @settings.external_begin_frame_enabled;
  Result.window := @settings.window;
  {$ENDIF}
  {$IFDEF Darwin}
  Result.window_name := PChar(string(CefString(@settings.window_name)));
  Result.x := @settings.bounds.x;
  Result.y := @settings.bounds.y;
  Result.Width := @settings.bounds.Width;
  Result.Height := @settings.bounds.Height;
  Result.hidden := @settings.hidden;
  Result.parent_view := @settings.parent_view;
  Result.windowless_rendering_enabled := @settings.windowless_rendering_enabled;
  Result.shared_texture_enabled := @settings.shared_texture_enabled;
  Result.external_begin_frame_enabled := @settings.external_begin_frame_enabled;
  Result.view := @settings.view;
  {$ENDIF}
  {$IFDEF LINUX}
  Result.window_name := PChar(string(CefString(@settings.window_name)));
  Result.x := @settings.bounds.x;
  Result.y := @settings.bounds.y;
  Result.Width := @settings.bounds.Width;
  Result.Height := @settings.bounds.Height;
  Result.parent_window := @settings.parent_window;
  Result.windowless_rendering_enabled := @settings.windowless_rendering_enabled;
  Result.shared_texture_enabled := @settings.shared_texture_enabled;
  Result.external_begin_frame_enabled := @settings.external_begin_frame_enabled;
  Result.window := @settings.window;
  {$ENDIF}
end;

function EngWindowInfoToPas(const settings: TEngWindowInfoPtr): TCefWindowInfo;
begin
  {$IFDEF MSWINDOWS}
  Result.ex_style := settings.ex_style^;
  Result.window_name := CefString(PCharToUStr(settings.window_name));
  Result.style := settings.style^;
  Result.bounds.x := settings.x^;
  Result.bounds.y := settings.y^;
  Result.bounds.Width := settings.Width^;
  Result.bounds.Height := settings.Height^;
  Result.parent_window := settings.parent_window^;
  Result.menu := settings.menu^;
  Result.windowless_rendering_enabled := settings.windowless_rendering_enabled^;
  Result.shared_texture_enabled := settings.shared_texture_enabled^;
  Result.external_begin_frame_enabled := settings.external_begin_frame_enabled^;
  Result.window := settings.window^;
  {$ENDIF}
  {$IFDEF Darwin}
  Result.window_name := CefString(PCharToUStr(settings.window_name));
  Result.bounds.x := settings.x^;
  Result.bounds.y := settings.y^;
  Result.bounds.Width := settings.Width^;
  Result.bounds.Height := settings.Height^;
  Result.hidden := settings.hidden^;
  Result.parent_view := settings.parent_view^;
  Result.windowless_rendering_enabled := settings.windowless_rendering_enabled^;
  Result.shared_texture_enabled := settings.shared_texture_enabled^;
  Result.external_begin_frame_enabled := settings.external_begin_frame_enabled^;
  Result.view := settings.view^;
  {$ENDIF}
  {$IFDEF LINUX}
  Result.window_name := CefString(PCharToUStr(settings.window_name));
  Result.bounds.x := settings.x^;
  Result.bounds.y := settings.y^;
  Result.bounds.Width := settings.Width^;
  Result.bounds.Height := settings.Height^;
  Result.parent_window := settings.parent_window^;
  Result.windowless_rendering_enabled := settings.windowless_rendering_enabled^;
  Result.shared_texture_enabled := settings.shared_texture_enabled^;
  Result.external_begin_frame_enabled := settings.external_begin_frame_enabled^;
  Result.window := settings.window^;
  {$ENDIF}
end;

end.
