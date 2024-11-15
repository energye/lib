
//constructor
function CEFWindowComponent_Create(aOwner: TComponent): TCEFWindowComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFWindowComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFWindowComponent_Title(AIsSet: LongBool; AObj: TCEFWindowComponent; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Title'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//property
procedure CEFWindowComponent_WindowIcon(AIsSet: LongBool; AObj: TCEFWindowComponent; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionFuncName :='WindowIcon'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowIcon := AValue;
  end else
    Result := AObj.WindowIcon;
  handleExceptionEnd
end;

//property
procedure CEFWindowComponent_WindowAppIcon(AIsSet: LongBool; AObj: TCEFWindowComponent; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionFuncName :='WindowAppIcon'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowAppIcon := AValue;
  end else
    Result := AObj.WindowAppIcon;
  handleExceptionEnd
end;

//property
procedure CEFWindowComponent_Display(AObj: TCEFWindowComponent; var Result: ICefDisplay); extdecl;
begin
  {$define handleExceptionFuncName :='Display'}
  handleExceptionBegin
  Result := AObj.Display;
  handleExceptionEnd
end;

//property
procedure CEFWindowComponent_ClientAreaBoundsInScreen(AObj: TCEFWindowComponent; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='ClientAreaBoundsInScreen'}
  handleExceptionBegin
  Result := AObj.ClientAreaBoundsInScreen;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_WindowHandle(AObj: TCEFWindowComponent): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionFuncName :='WindowHandle'}
  handleExceptionBegin
  Result := AObj.WindowHandle;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsClosed(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsClosed'}
  handleExceptionBegin
  Result := AObj.IsClosed;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsActive(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsActive'}
  handleExceptionBegin
  Result := AObj.IsActive;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsAlwaysOnTop(AIsSet: LongBool; AObj: TCEFWindowComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsAlwaysOnTop'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsAlwaysOnTop := AValue;
  end else
    Result := AObj.IsAlwaysOnTop;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsFullscreen(AIsSet: LongBool; AObj: TCEFWindowComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFullscreen'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsFullscreen := AValue;
  end else
    Result := AObj.IsFullscreen;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsMaximized(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMaximized'}
  handleExceptionBegin
  Result := AObj.IsMaximized;
  handleExceptionEnd
end;

//property
function CEFWindowComponent_IsMinimized(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMinimized'}
  handleExceptionBegin
  Result := AObj.IsMinimized;
  handleExceptionEnd
end;

//function
procedure CEFWindowComponent_AddOverlayView(AObj: TCEFWindowComponent; const view: ICefView; dockingmode: TCefDockingMode; var Result: ICefOverlayController); extdecl;
begin
  {$define handleExceptionFuncName :='AddOverlayView'}
  handleExceptionBegin
  Result := AObj.AddOverlayView(view, dockingmode);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_CreateTopLevelWindow(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='CreateTopLevelWindow'}
  handleExceptionBegin
  AObj.CreateTopLevelWindow();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Show(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Show'}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Hide(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Hide'}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_CenterWindow(AObj: TCEFWindowComponent; var size: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='CenterWindow'}
  handleExceptionBegin
  AObj.CenterWindow(size);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Close(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Close'}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Activate(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Activate'}
  handleExceptionBegin
  AObj.Activate();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Deactivate(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Deactivate'}
  handleExceptionBegin
  AObj.Deactivate();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_BringToTop(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='BringToTop'}
  handleExceptionBegin
  AObj.BringToTop();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Maximize(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Maximize'}
  handleExceptionBegin
  AObj.Maximize();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Minimize(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Minimize'}
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_Restore(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Restore'}
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_ShowMenu(AObj: TCEFWindowComponent; const menumodel: ICefMenuModel; var screenpoint: TCefPoint; anchorposition: TCefMenuAnchorPosition); extdecl;
begin
  {$define handleExceptionFuncName :='ShowMenu'}
  handleExceptionBegin
  AObj.ShowMenu(menumodel, screenpoint, anchorposition);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_CancelMenu(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='CancelMenu'}
  handleExceptionBegin
  AObj.CancelMenu();
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_SetDraggableRegions(AObj: TCEFWindowComponent; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray); extdecl;
begin
  {$define handleExceptionFuncName :='SetDraggableRegions'}
  handleExceptionBegin
  AObj.SetDraggableRegions(regionsCount, regions);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_SendKeyPress(AObj: TCEFWindowComponent; keycode: Integer; eventflags: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='SendKeyPress'}
  handleExceptionBegin
  AObj.SendKeyPress(keycode, eventflags);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_SendMouseMove(AObj: TCEFWindowComponent; screenx,  screeny: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseMove'}
  handleExceptionBegin
  AObj.SendMouseMove(screenx,  screeny);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_SendMouseEvents(AObj: TCEFWindowComponent; button: TCefMouseButtonType; mousedown,  mouseup: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseEvents'}
  handleExceptionBegin
  AObj.SendMouseEvents(button, mousedown,  mouseup);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_SetAccelerator(AObj: TCEFWindowComponent; commandid,  keycode: Integer; shiftpressed,  ctrlpressed,  altpressed: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccelerator'}
  handleExceptionBegin
  AObj.SetAccelerator(commandid,  keycode, shiftpressed,  ctrlpressed,  altpressed);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_RemoveAccelerator(AObj: TCEFWindowComponent; commandid: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAccelerator'}
  handleExceptionBegin
  AObj.RemoveAccelerator(commandid);
  handleExceptionEnd
end;

//procedure
procedure CEFWindowComponent_RemoveAllAccelerators(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAllAccelerators'}
  handleExceptionBegin
  AObj.RemoveAllAccelerators();
  handleExceptionEnd
end;

//property event
procedure CEFWindowComponent_SetOnWindowCreated(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnWindowCreated}
  {$DEFINE EventName := OnWindowCreated}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnWindowDestroyed(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnWindowDestroyed}
  {$DEFINE EventName := OnWindowDestroyed}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnWindowActivationChanged(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnWindowActivationChanged}
  {$DEFINE EventName := OnWindowActivationChanged}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnGetParentWindow(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnGetParentWindow}
  {$DEFINE EventName := OnGetParentWindow}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnGetInitialBounds(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnGetInitialBounds}
  {$DEFINE EventName := OnGetInitialBounds}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnGetInitialShowState(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnGetInitialShowState}
  {$DEFINE EventName := OnGetInitialShowState}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnIsFrameless(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnIsFrameless}
  {$DEFINE EventName := OnIsFrameless}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnCanResize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnCanResize}
  {$DEFINE EventName := OnCanResize}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnCanMaximize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnCanMaximize}
  {$DEFINE EventName := OnCanMaximize}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnCanMinimize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnCanMinimize}
  {$DEFINE EventName := OnCanMinimize}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnCanClose(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnCanClose}
  {$DEFINE EventName := OnCanClose}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnAccelerator(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnAccelerator}
  {$DEFINE EventName := OnAccelerator}
  CEFEventMethodCode
end;

//property event
procedure CEFWindowComponent_SetOnKeyEvent(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WindowComponent_OnKeyEvent}
  {$DEFINE EventName := OnKeyEvent}
  CEFEventMethodCode
end;


exports
  CEFWindowComponent_Create,
  CEFWindowComponent_Title,
  CEFWindowComponent_WindowIcon,
  CEFWindowComponent_WindowAppIcon,
  CEFWindowComponent_Display,
  CEFWindowComponent_ClientAreaBoundsInScreen,
  CEFWindowComponent_WindowHandle,
  CEFWindowComponent_IsClosed,
  CEFWindowComponent_IsActive,
  CEFWindowComponent_IsAlwaysOnTop,
  CEFWindowComponent_IsFullscreen,
  CEFWindowComponent_IsMaximized,
  CEFWindowComponent_IsMinimized,
  CEFWindowComponent_AddOverlayView,
  CEFWindowComponent_CreateTopLevelWindow,
  CEFWindowComponent_Show,
  CEFWindowComponent_Hide,
  CEFWindowComponent_CenterWindow,
  CEFWindowComponent_Close,
  CEFWindowComponent_Activate,
  CEFWindowComponent_Deactivate,
  CEFWindowComponent_BringToTop,
  CEFWindowComponent_Maximize,
  CEFWindowComponent_Minimize,
  CEFWindowComponent_Restore,
  CEFWindowComponent_ShowMenu,
  CEFWindowComponent_CancelMenu,
  CEFWindowComponent_SetDraggableRegions,
  CEFWindowComponent_SendKeyPress,
  CEFWindowComponent_SendMouseMove,
  CEFWindowComponent_SendMouseEvents,
  CEFWindowComponent_SetAccelerator,
  CEFWindowComponent_RemoveAccelerator,
  CEFWindowComponent_RemoveAllAccelerators,
  CEFWindowComponent_SetOnWindowCreated,
  CEFWindowComponent_SetOnWindowDestroyed,
  CEFWindowComponent_SetOnWindowActivationChanged,
  CEFWindowComponent_SetOnGetParentWindow,
  CEFWindowComponent_SetOnGetInitialBounds,
  CEFWindowComponent_SetOnGetInitialShowState,
  CEFWindowComponent_SetOnIsFrameless,
  CEFWindowComponent_SetOnCanResize,
  CEFWindowComponent_SetOnCanMaximize,
  CEFWindowComponent_SetOnCanMinimize,
  CEFWindowComponent_SetOnCanClose,
  CEFWindowComponent_SetOnAccelerator,
  CEFWindowComponent_SetOnKeyEvent;