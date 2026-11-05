// constructor
function TCefWindowRef_Create(data: Pointer; out IntfWindow: ICefWindow; out IntfPanel: ICefPanel; out IntfView: ICefView): TCefWindowRef; extdecl;
begin
  {$define handleExceptionID := 23600}
  handleExceptionBegin
  Result := TCefWindowRef.Create(data);
  IntfWindow := Result as ICefWindow;
  IntfPanel := Result as ICefPanel;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsClosed(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23601}
  handleExceptionBegin
  Result := AObj.IsClosed();
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsActive(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23602}
  handleExceptionBegin
  Result := AObj.IsActive();
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsAlwaysOnTop(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23603}
  handleExceptionBegin
  Result := AObj.IsAlwaysOnTop();
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsMaximized(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23604}
  handleExceptionBegin
  Result := AObj.IsMaximized();
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsMinimized(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23605}
  handleExceptionBegin
  Result := AObj.IsMinimized();
  handleExceptionEnd
end;

// function
function TCefWindowRef_IsFullscreen(AObj: ICefWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 23606}
  handleExceptionBegin
  Result := AObj.IsFullscreen();
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_GetTitle(AObj: ICefWindow;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23607}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTitle()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_GetWindowIcon(AObj: ICefWindow; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23608}
  handleExceptionBegin
  Result := AObj.GetWindowIcon();
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_GetWindowAppIcon(AObj: ICefWindow; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23609}
  handleExceptionBegin
  Result := AObj.GetWindowAppIcon();
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_AddOverlayView(AObj: ICefWindow; const view: ICefView; docking_mode: TCefDockingMode; can_activate: LongBool; var Result: ICefOverlayController); extdecl;
begin
  {$define handleExceptionID := 23610}
  handleExceptionBegin
  Result := AObj.AddOverlayView(view, docking_mode, can_activate);
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_GetDisplay(AObj: ICefWindow; var Result: ICefDisplay); extdecl;
begin
  {$define handleExceptionID := 23611}
  handleExceptionBegin
  Result := AObj.GetDisplay();
  handleExceptionEnd
end;

// function
procedure TCefWindowRef_GetClientAreaBoundsInScreen(AObj: ICefWindow; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 23612}
  handleExceptionBegin
  Result := AObj.GetClientAreaBoundsInScreen();
  handleExceptionEnd
end;

// function
function TCefWindowRef_GetWindowHandle(AObj: ICefWindow): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 23613}
  handleExceptionBegin
  Result := AObj.GetWindowHandle();
  handleExceptionEnd
end;

// function
function TCefWindowRef_GetRuntimeStyle(AObj: ICefWindow): TCefRuntimeStyle; extdecl;
begin
  {$define handleExceptionID := 23614}
  handleExceptionBegin
  Result := AObj.GetRuntimeStyle();
  handleExceptionEnd
end;

// function static
procedure TCefWindowRef_UnWrapWithPointer(data: Pointer; var Result: ICefWindow); extdecl;
begin
  Result := TCefWindowRef.UnWrap(data);
end;

// function static
procedure TCefWindowRef_CreateTopLevel(const delegate: ICefWindowDelegate; var Result: ICefWindow); extdecl;
begin
  Result := TCefWindowRef.CreateTopLevel(delegate);
end;

// procedure
procedure TCefWindowRef_Show(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23615}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_ShowAsBrowserModalDialog(AObj: ICefWindow; const browser_view: ICefBrowserView); extdecl;
begin
  {$define handleExceptionID := 23616}
  handleExceptionBegin
  AObj.ShowAsBrowserModalDialog(browser_view);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Hide(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23617}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_CenterWindow(AObj: ICefWindow; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 23618}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.CenterWindow(Insize_);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Close(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23619}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Activate(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23620}
  handleExceptionBegin
  AObj.Activate();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Deactivate(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23621}
  handleExceptionBegin
  AObj.Deactivate();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_BringToTop(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23622}
  handleExceptionBegin
  AObj.BringToTop();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetAlwaysOnTop(AObj: ICefWindow; on_top: LongBool); extdecl;
begin
  {$define handleExceptionID := 23623}
  handleExceptionBegin
  AObj.SetAlwaysOnTop(on_top);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Maximize(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23624}
  handleExceptionBegin
  AObj.Maximize();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Minimize(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23625}
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_Restore(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23626}
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetFullscreen(AObj: ICefWindow; fullscreen: LongBool); extdecl;
begin
  {$define handleExceptionID := 23627}
  handleExceptionBegin
  AObj.SetFullscreen(fullscreen);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetTitle(AObj: ICefWindow; const title_: PChar); extdecl;
begin
  {$define handleExceptionID := 23628}
  handleExceptionBegin
  AObj.SetTitle(PCharToUStr(title_));
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetWindowIcon(AObj: ICefWindow; const image: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23629}
  handleExceptionBegin
  AObj.SetWindowIcon(image);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetWindowAppIcon(AObj: ICefWindow; const image: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23630}
  handleExceptionBegin
  AObj.SetWindowAppIcon(image);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_ShowMenu(AObj: ICefWindow; const menu_model: ICefMenuModel; var screen_point: TCefPointPtr; anchor_position: TCefMenuAnchorPosition); extdecl;
var
  Inscreen_point: TCefPoint;
begin
  {$define handleExceptionID := 23631}
  handleExceptionBegin
  Inscreen_point := TCefPointToPas(screen_point);
  AObj.ShowMenu(menu_model, Inscreen_point, anchor_position);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_CancelMenu(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23632}
  handleExceptionBegin
  AObj.CancelMenu();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetDraggableRegions(AObj: ICefWindow; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray); extdecl;
begin
  {$define handleExceptionID := 23633}
  handleExceptionBegin
  AObj.SetDraggableRegions(regionsCount, regions);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SendKeyPress(AObj: ICefWindow; key_code: Integer; event_flags: cardinal); extdecl;
begin
  {$define handleExceptionID := 23634}
  handleExceptionBegin
  AObj.SendKeyPress(key_code, event_flags);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SendMouseMove(AObj: ICefWindow; screen_x: Integer; screen_y: Integer); extdecl;
begin
  {$define handleExceptionID := 23635}
  handleExceptionBegin
  AObj.SendMouseMove(screen_x, screen_y);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SendMouseEvents(AObj: ICefWindow; button: TCefMouseButtonType; mouse_down: LongBool; mouse_up: LongBool); extdecl;
begin
  {$define handleExceptionID := 23636}
  handleExceptionBegin
  AObj.SendMouseEvents(button, mouse_down, mouse_up);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetAccelerator(AObj: ICefWindow; command_id: Integer; key_code: Integer; shift_pressed: LongBool; ctrl_pressed: LongBool; alt_pressed: LongBool; high_priority: LongBool); extdecl;
begin
  {$define handleExceptionID := 23637}
  handleExceptionBegin
  AObj.SetAccelerator(command_id, key_code, shift_pressed, ctrl_pressed, alt_pressed, high_priority);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_RemoveAccelerator(AObj: ICefWindow; command_id: Integer); extdecl;
begin
  {$define handleExceptionID := 23638}
  handleExceptionBegin
  AObj.RemoveAccelerator(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_RemoveAllAccelerators(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23639}
  handleExceptionBegin
  AObj.RemoveAllAccelerators();
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_SetThemeColor(AObj: ICefWindow; color_id: integer; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23640}
  handleExceptionBegin
  AObj.SetThemeColor(color_id, color);
  handleExceptionEnd
end;

// procedure
procedure TCefWindowRef_ThemeChanged(AObj: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23641}
  handleExceptionBegin
  AObj.ThemeChanged();
  handleExceptionEnd
end;

exports
  TCefWindowRef_Create,
  TCefWindowRef_IsClosed,
  TCefWindowRef_IsActive,
  TCefWindowRef_IsAlwaysOnTop,
  TCefWindowRef_IsMaximized,
  TCefWindowRef_IsMinimized,
  TCefWindowRef_IsFullscreen,
  TCefWindowRef_GetTitle,
  TCefWindowRef_GetWindowIcon,
  TCefWindowRef_GetWindowAppIcon,
  TCefWindowRef_AddOverlayView,
  TCefWindowRef_GetDisplay,
  TCefWindowRef_GetClientAreaBoundsInScreen,
  TCefWindowRef_GetWindowHandle,
  TCefWindowRef_GetRuntimeStyle,
  TCefWindowRef_UnWrapWithPointer,
  TCefWindowRef_CreateTopLevel,
  TCefWindowRef_Show,
  TCefWindowRef_ShowAsBrowserModalDialog,
  TCefWindowRef_Hide,
  TCefWindowRef_CenterWindow,
  TCefWindowRef_Close,
  TCefWindowRef_Activate,
  TCefWindowRef_Deactivate,
  TCefWindowRef_BringToTop,
  TCefWindowRef_SetAlwaysOnTop,
  TCefWindowRef_Maximize,
  TCefWindowRef_Minimize,
  TCefWindowRef_Restore,
  TCefWindowRef_SetFullscreen,
  TCefWindowRef_SetTitle,
  TCefWindowRef_SetWindowIcon,
  TCefWindowRef_SetWindowAppIcon,
  TCefWindowRef_ShowMenu,
  TCefWindowRef_CancelMenu,
  TCefWindowRef_SetDraggableRegions,
  TCefWindowRef_SendKeyPress,
  TCefWindowRef_SendMouseMove,
  TCefWindowRef_SendMouseEvents,
  TCefWindowRef_SetAccelerator,
  TCefWindowRef_RemoveAccelerator,
  TCefWindowRef_RemoveAllAccelerators,
  TCefWindowRef_SetThemeColor,
  TCefWindowRef_ThemeChanged;