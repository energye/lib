{
 *****************************************************************************
  This file is part of the Lazarus Component Library (LCL)

  See the file COPYING.modifiedLGPL.txt, included in this distribution,
  for details about the license.
 *****************************************************************************
}
unit Gtk3Globals;

{$mode objfpc}{$H+}

interface

uses
  // RTL
  SysUtils, Classes,
  // GTK3
  LazGtk3, LazGdk3, LazGObject2, LazGLib2, LazPango1,
  // LCL
  InterfaceBase, LMessages, LCLProc, Controls, Forms, LCLIntf, LCLType, Gtk3Procs;

// fix4.x SynEdit 输入中文

var
  // Input Method Context
  im_context: PGtkIMContext = nil;
  im_context_widget: PGtkWidget = nil;
  im_context_skipdelete: Boolean = False;
  im_context_use: Boolean = False;
  im_context_string: string = '';
  im_context_string_commit: string = '';
  im_context_string_preedit: string = '';


procedure DebugHandle(Handle: PGtkWidget);

procedure ResetDefaultIMContext;

procedure IM_Context_Set_Cursor_Pos(X, Y: gint);
procedure InitIMContext;

// IM Context callbacks
procedure gtk_commit_cb(context: PGtkIMContext; const Str: Pgchar; Data: Pointer); cdecl;
procedure gtk_preedit_start_cb(context: PGtkIMContext; Data: Pointer); cdecl;
procedure gtk_preedit_end_cb(context: PGtkIMContext; Data: Pointer); cdecl;
procedure gtk_preedit_changed_cb(context: PGtkIMContext; Data: Pointer); cdecl;
function gtk_retrieve_surrounding_cb(context: PGtkIMContext; Data: Pointer): gboolean; cdecl;


function GetControlWindow(Widget: Pointer): PGdkWindow;

implementation

procedure DebugHandle(Handle: PGtkWidget);
var
  TypeName: Pgchar;
begin
  if Handle = nil then Exit;

  TypeName := g_type_name_from_instance(PGTypeInstance(Handle));
  WriteLn('Handle GType = ', TypeName);
end;

procedure InitIMContext;
begin
  if im_context = nil then
  begin
    im_context := gtk_im_multicontext_new;
    g_signal_connect_data(PGObject(im_context), 'commit', TGCallback(@gtk_commit_cb), nil, nil, G_CONNECT_DEFAULT);
    g_signal_connect_data(PGObject(im_context), 'preedit-start', TGCallback(@gtk_preedit_start_cb), nil, nil, G_CONNECT_DEFAULT);
    g_signal_connect_data(PGObject(im_context), 'preedit-end', TGCallback(@gtk_preedit_end_cb), nil, nil, G_CONNECT_DEFAULT);
    g_signal_connect_data(PGObject(im_context), 'preedit-changed', TGCallback(@gtk_preedit_changed_cb), nil, nil, G_CONNECT_DEFAULT);
    g_signal_connect_data(PGObject(im_context), 'retrieve-surrounding', TGCallback(@gtk_retrieve_surrounding_cb), nil, nil, G_CONNECT_DEFAULT);
  end;
end;

function GetControlWindow(Widget: Pointer): PGdkWindow;
var
  W: PGtkWidget;
begin
  if Widget = nil then
    RaiseGDBException('GetControlWindow Widget=nil');

  W := PGtkWidget(Widget);

  if gtk_widget_get_realized(W) then
    Result := gtk_widget_get_window(W)
  else
    Result := nil;

  if Result = nil then
    Result := gtk_widget_get_parent_window(W);
end;

procedure ResetDefaultIMContext;
begin
  if (im_context <> nil) then
  begin
    gtk_im_context_reset(im_context);
    gtk_im_context_set_client_window(im_context, nil);
  end;
  im_context_widget := nil;
  im_context_use := False;
  im_context_skipdelete := True;
  im_context_string := '';
  im_context_string_commit := '';
end;

procedure IM_Context_Set_Cursor_Pos(X, Y: gint);
var
  CurPos: TGdkRectangle;
begin
  CurPos.x := X;
  CurPos.y := Y;
  CurPos.width := 0; // fix invalid candidate window position
  CurPos.height := 0;
  gtk_im_context_set_cursor_location(im_context, @CurPos);
end;

procedure gtk_commit_cb(context: PGtkIMContext; const Str: Pgchar; Data: Pointer); cdecl;
var
  control: TWinControl;
begin
  if (im_context_widget <> nil) then
  begin
    im_context_skipdelete := True;
    control := TWinControl(GetNearestLCLObject(im_context_widget));
    if Assigned(control) and control.HandleAllocated then
      SendMessage(control.Handle, LM_IM_COMPOSITION, GTK_IM_FLAG_COMMIT, LPARAM(PChar(Str)));
  end;
end;

procedure gtk_preedit_start_cb(context: PGtkIMContext; Data: Pointer); cdecl;
var
  LCLobj: TObject;
  control: TWinControl;
begin
  if (im_context_widget <> nil) then
  begin
    LCLobj := GetNearestLCLObject(im_context_widget);
    if not (Assigned(LCLobj) and (LCLobj is TWinControl)) then
      Exit;

    control := TWinControl(LCLobj);
    if not control.HandleAllocated then
      Exit;

    im_context_use := True;
    im_context_skipdelete := True;
    SendMessage(control.Handle, LM_IM_COMPOSITION, GTK_IM_FLAG_START, LPARAM(context));
  end;
end;

procedure gtk_preedit_end_cb(context: PGtkIMContext; Data: Pointer); cdecl;
var
  LCLobj: TObject;
  control: TWinControl;
begin
  if (im_context_widget <> nil) then
  begin
    LCLobj := GetNearestLCLObject(im_context_widget);
    if not (Assigned(LCLobj) and (LCLobj is TWinControl)) then
      Exit;

    control := TWinControl(LCLobj);
    if not control.HandleAllocated then
      Exit;

    im_context_use := False;
    SendMessage(control.Handle, LM_IM_COMPOSITION, GTK_IM_FLAG_END, LPARAM(context));
  end;
end;

procedure gtk_preedit_changed_cb(context: PGtkIMContext; Data: Pointer); cdecl;
var
  LCLobj: TObject;
  control: TWinControl;
  Flag: WPARAM;
  str: Pgchar;
  pangoattr: PPangoAttrList;
  curpos: gint;
begin
  if (im_context_widget <> nil) then
  begin
    LCLobj := GetNearestLCLObject(im_context_widget);
    if not (Assigned(LCLobj) and (LCLobj is TWinControl)) then
      Exit;

    control := TWinControl(LCLobj);
    if not control.HandleAllocated then
      Exit;

    im_context_use := True;
    gtk_im_context_get_preedit_string(context, @str, @pangoattr, @curpos);
    im_context_string_preedit := str;
    g_free(str);
    if Assigned(pangoattr) then
      pango_attr_list_unref(pangoattr);

    Flag := GTK_IM_FLAG_PREEDIT;
    if (not im_context_skipdelete) then
    begin
      Flag := Flag or GTK_IM_FLAG_REPLACE;
    end
    else
      im_context_skipdelete := False;
    SendMessage(control.Handle, LM_IM_COMPOSITION, Flag, LPARAM(PChar(im_context_string_preedit)));
  end;
end;

function gtk_retrieve_surrounding_cb(context: PGtkIMContext; Data: Pointer): gboolean; cdecl;
begin
  Result := False;
end;


end.
