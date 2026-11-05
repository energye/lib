//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uLinuxPatchs;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, Forms, LCLType, Controls, LMessages
{$IFDEF LCLGTK2}
  ,gtk2, Gtk2Proc, gdk2, glib2 {$IFDEF UNIX},Gdk2x, X {$ENDIF}
{$ENDIF}
{$IFDEF LClgtk3}
  ,LazGtk3, LazGObject2, LazGdk3, LazGLib2, gtk3procs, gtk3widgets, Lazxlib2
{$ENDIF}
  ;

  function GtkWidget_GetGtkFixed(Ah: HWND): PGtkFixed; extdecl;
  function GdkWindow_FromForm(AForm: TForm): PGdkWindow; extdecl;
  procedure GdkWindow_GetXId(AW: PGdkWindow; out AXId: TXId); extdecl;
  function GtkWidget_Window(Ah: HWND): PGdkWindow; extdecl;
  procedure GtkWindow_Drag(aHandle: HWND; aWindowLeft, aWindowTop: Integer; aButton: Integer; aEdge: Integer); extdecl;
{$IFDEF LClgtk3}
  function Gtk3Widget_GtkWindow(Ah: HWND): PGtkWindow; extdecl;
  function Gtk3Widget_Widget(Ah: HWND): PGtkWidget; extdecl;
  function Gtk3Widget_DeliverMessage(Ah: HWND; var Msg: TLMessage; const isInputEvent: LongBool): LRESULT; extdecl;
{$ENDIF}


implementation

{$ifdef UsehandleException}
uses
   uExceptionHandle;
{$endif}

function GdkWindow_FromForm(AForm: TForm): PGdkWindow; extdecl;
begin
  Result := nil;
  if AForm = nil then
    Exit;
  handleExceptionBegin
{$IFDEF LCLgtk2}
  Result := PGtkWidget(AForm.Handle)^.window;
{$ENDIF}
{$IFDEF LClgtk3}
  Result := TGtk3Widget(AForm.Handle).GetWindow;
{$ENDIF}
  handleExceptionEnd
end;

function GtkWidget_GetGtkFixed(Ah: HWND): PGtkFixed; extdecl;
begin
  Result := nil;
  if Ah <= 0 then
    Exit;
  handleExceptionBegin
{$IFDEF LCLgtk2}
  Result := PGtkFixed(GetFixedWidget(PGtkWidget(Ah)));
{$ENDIF}
{$IFDEF LClgtk3}
  Result := PGtkFixed(TGtk3Widget(Ah).GetContainerWidget);
{$ENDIF}
  handleExceptionEnd
end;

procedure GdkWindow_GetXId(AW: PGdkWindow; out AXId: TXId); extdecl;
begin
  handleExceptionBegin
{$IFDEF LCLGTK2}
  AXId := GDK_WINDOW_XID(AW);
  // GDK_WINDOW_XWINDOW
{$ENDIF}
{$IFDEF LClgtk3}

{$ENDIF}
  handleExceptionEnd
end;

function GtkWidget_Window(Ah: HWND): PGdkWindow; extdecl;
begin
  handleExceptionBegin
{$IFDEF LCLgtk2}
  Result := PGtkWidget(Ah)^.window;
{$ENDIF}
{$IFDEF LClgtk3}
  Result := TGtk3Widget(Ah).GetWindow;
{$ENDIF}
  handleExceptionEnd
end;

{$IFDEF LCLgtk2}
procedure GtkWindow_Drag(aHandle: HWND; aWindowLeft, aWindowTop: Integer; aButton: Integer; aEdge: Integer); extdecl;
var
  Widget: PGtkWidget;
  GdkWindow: PGdkWindow;
  XRoot, YRoot: gint;
  Edge: TGdkWindowEdge;
begin
  handleExceptionBegin
  Edge := TGdkWindowEdge(aEdge);
  // 获取 GTK 部件
  Widget := PGtkWidget(aHandle);
  if Widget = nil then Exit;

  // 获取 GDK 窗口
  GdkWindow := Widget^.window;
  if GdkWindow = nil then Exit;

  // 获取当前鼠标位置（屏幕坐标）
  gdk_window_get_origin(GdkWindow, @XRoot, @YRoot);
  XRoot := XRoot + Mouse.CursorPos.X - aWindowLeft;
  YRoot := YRoot + Mouse.CursorPos.Y - aWindowTop;

  // 根据操作类型调用系统级拖拽
  if Edge = GDK_WINDOW_EDGE_NORTH_WEST then
  begin
    // 移动窗口
    gdk_window_begin_move_drag(
      GdkWindow,
      aButton,
      XRoot,
      YRoot,
      GDK_CURRENT_TIME
      );
  end
  else
  begin
    // 调整窗口大小
    gdk_window_begin_resize_drag(
      GdkWindow,
      Edge,
      aButton,
      XRoot,
      YRoot,
      GDK_CURRENT_TIME
      );
  end;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF LClgtk3}
function Gtk3Widget_GtkWindow(Ah: HWND): PGtkWindow; extdecl;
begin
  handleExceptionBegin
  Result := PGtkWindow(TGtk3Widget(Ah).Widget);
  handleExceptionEnd
end;

function Gtk3Widget_Widget(Ah: HWND): PGtkWidget; extdecl;
begin
  handleExceptionBegin
  Result := TGtk3Widget(Ah).Widget;
  handleExceptionEnd
end;

function Gtk3Widget_DeliverMessage(Ah: HWND; var Msg: TLMessage; const isInputEvent: LongBool): LRESULT; extdecl;
begin
  Result := 0;
  if Ah = 0 then
    exit;
  Result := TGtk3Widget(Ah).DeliverMessage(Msg, isInputEvent);
end;

procedure GtkWindow_Drag(aHandle: HWND; aWindowLeft, aWindowTop: Integer; aButton: Integer; aEdge: Integer); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;
{$ENDIF}

end.

