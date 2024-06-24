
//function
procedure CefWindow_UnWrap(data: Pointer; var Result: ICefWindow); extdecl;
begin
  Result := TCefWindowRef.UnWrap(data);
end;

//function
procedure CefWindow_CreateTopLevel(const delegate: ICefWindowDelegate; var Result: ICefWindow); extdecl;
begin
  Result := TCefWindowRef.CreateTopLevel(delegate);
end;

//function
function CefWindow_IsClosed(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsClosed();
  handleExceptionEnd
end;

//function
function CefWindow_IsActive(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsActive();
  handleExceptionEnd
end;

//function
function CefWindow_IsAlwaysOnTop(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsAlwaysOnTop();
  handleExceptionEnd
end;

//function
function CefWindow_IsMaximized(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMaximized();
  handleExceptionEnd
end;

//function
function CefWindow_IsMinimized(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMinimized();
  handleExceptionEnd
end;

//function
function CefWindow_IsFullscreen(AObj: ICefWindow): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFullscreen();
  handleExceptionEnd
end;

//function
function CefWindow_GetTitle(AObj: ICefWindow): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTitle());
  handleExceptionEnd
end;

//function
procedure CefWindow_GetWindowIcon(AObj: ICefWindow; var Result: ICefImage); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWindowIcon();
  handleExceptionEnd
end;

//function
procedure CefWindow_GetWindowAppIcon(AObj: ICefWindow; var Result: ICefImage); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWindowAppIcon();
  handleExceptionEnd
end;

//function
procedure CefWindow_AddOverlayView(AObj: ICefWindow; const view: ICefView; dockingmode: TCefDockingMode; var Result: ICefOverlayController); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddOverlayView(view, dockingmode);
  handleExceptionEnd
end;

//function
procedure CefWindow_GetDisplay(AObj: ICefWindow; var Result: ICefDisplay); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDisplay();
  handleExceptionEnd
end;

//function
procedure CefWindow_GetClientAreaBoundsInScreen(AObj: ICefWindow; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetClientAreaBoundsInScreen();
  handleExceptionEnd
end;

//function
function CefWindow_GetWindowHandle(AObj: ICefWindow): TCefWindowHandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWindowHandle();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Show(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_ShowAsBrowserModalDialog(AObj: ICefWindow; const browserview: ICefBrowserView); extdecl;
begin
  handleExceptionBegin
  AObj.ShowAsBrowserModalDialog(browserview);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Hide(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_CenterWindow(AObj: ICefWindow; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.CenterWindow(size);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Close(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Activate(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Activate();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Deactivate(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Deactivate();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_BringToTop(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.BringToTop();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetAlwaysOnTop(AObj: ICefWindow; ontop: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetAlwaysOnTop(ontop);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Maximize(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Maximize();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Minimize(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_Restore(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetFullscreen(AObj: ICefWindow; fullscreen: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetFullscreen(fullscreen);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetTitle(AObj: ICefWindow; const title: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTitle(title);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetWindowIcon(AObj: ICefWindow; const image: ICefImage); extdecl;
begin
  handleExceptionBegin
  AObj.SetWindowIcon(image);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetWindowAppIcon(AObj: ICefWindow; const image: ICefImage); extdecl;
begin
  handleExceptionBegin
  AObj.SetWindowAppIcon(image);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_ShowMenu(AObj: ICefWindow; const menumodel: ICefMenuModel; var screenpoint: TCefPoint; anchorposition: TCefMenuAnchorPosition); extdecl;
begin
  handleExceptionBegin
  AObj.ShowMenu(menumodel, screenpoint, anchorposition);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_CancelMenu(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.CancelMenu();
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetDraggableRegions(AObj: ICefWindow; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray); extdecl;
begin
  handleExceptionBegin
  AObj.SetDraggableRegions(regionsCount, regions);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SendKeyPress(AObj: ICefWindow; keycode: Integer; eventflags: uint32); extdecl;
begin
  handleExceptionBegin
  AObj.SendKeyPress(keycode, eventflags);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SendMouseMove(AObj: ICefWindow; screenx,  screeny: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SendMouseMove(screenx,  screeny);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SendMouseEvents(AObj: ICefWindow; button: TCefMouseButtonType; mousedown,  mouseup: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SendMouseEvents(button, mousedown,  mouseup);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_SetAccelerator(AObj: ICefWindow; commandid,  keycode: Integer; shiftpressed,  ctrlpressed,  altpressed: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetAccelerator(commandid,  keycode, shiftpressed,  ctrlpressed,  altpressed);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_RemoveAccelerator(AObj: ICefWindow; commandid: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveAccelerator(commandid);
  handleExceptionEnd
end;

//procedure
procedure CefWindow_RemoveAllAccelerators(AObj: ICefWindow); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveAllAccelerators();
  handleExceptionEnd
end;


exports
  CefWindow_UnWrap,
  CefWindow_CreateTopLevel,
  CefWindow_IsClosed,
  CefWindow_IsActive,
  CefWindow_IsAlwaysOnTop,
  CefWindow_IsMaximized,
  CefWindow_IsMinimized,
  CefWindow_IsFullscreen,
  CefWindow_GetTitle,
  CefWindow_GetWindowIcon,
  CefWindow_GetWindowAppIcon,
  CefWindow_AddOverlayView,
  CefWindow_GetDisplay,
  CefWindow_GetClientAreaBoundsInScreen,
  CefWindow_GetWindowHandle,
  CefWindow_Show,
  CefWindow_ShowAsBrowserModalDialog,
  CefWindow_Hide,
  CefWindow_CenterWindow,
  CefWindow_Close,
  CefWindow_Activate,
  CefWindow_Deactivate,
  CefWindow_BringToTop,
  CefWindow_SetAlwaysOnTop,
  CefWindow_Maximize,
  CefWindow_Minimize,
  CefWindow_Restore,
  CefWindow_SetFullscreen,
  CefWindow_SetTitle,
  CefWindow_SetWindowIcon,
  CefWindow_SetWindowAppIcon,
  CefWindow_ShowMenu,
  CefWindow_CancelMenu,
  CefWindow_SetDraggableRegions,
  CefWindow_SendKeyPress,
  CefWindow_SendMouseMove,
  CefWindow_SendMouseEvents,
  CefWindow_SetAccelerator,
  CefWindow_RemoveAccelerator,
  CefWindow_RemoveAllAccelerators;