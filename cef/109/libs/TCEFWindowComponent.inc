// constructor
function TCEFWindowComponent_Create(AOwner: TComponent; out IntfWindowDelegateEvents: ICefWindowDelegateEvents; out IntfPanelDelegateEvents: ICefPanelDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFWindowComponent; extdecl;
begin
  {$define handleExceptionID := 8600}
  handleExceptionBegin
  Result := TCEFWindowComponent.Create(AOwner);
  IntfWindowDelegateEvents := Result as ICefWindowDelegateEvents;
  IntfPanelDelegateEvents := Result as ICefPanelDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// function
procedure TCEFWindowComponent_AddOverlayView(AObj: TCEFWindowComponent; const view: ICefView; docking_mode: TCefDockingMode; var Result: ICefOverlayController); extdecl;
begin
  {$define handleExceptionID := 8601}
  handleExceptionBegin
  Result := AObj.AddOverlayView(view, docking_mode);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_CreateTopLevelWindow(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8602}
  handleExceptionBegin
  AObj.CreateTopLevelWindow();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Show(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8603}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Hide(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8604}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_CenterWindow(AObj: TCEFWindowComponent; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 8605}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.CenterWindow(Insize_);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Close(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8606}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Activate(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8607}
  handleExceptionBegin
  AObj.Activate();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Deactivate(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8608}
  handleExceptionBegin
  AObj.Deactivate();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_BringToTop(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8609}
  handleExceptionBegin
  AObj.BringToTop();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Maximize(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8610}
  handleExceptionBegin
  AObj.Maximize();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Minimize(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8611}
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_Restore(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8612}
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_ShowMenu(AObj: TCEFWindowComponent; const menu_model: ICefMenuModel; var screen_point: TCefPointPtr; anchor_position: TCefMenuAnchorPosition); extdecl;
var
  Inscreen_point: TCefPoint;
begin
  {$define handleExceptionID := 8613}
  handleExceptionBegin
  Inscreen_point := TCefPointToPas(screen_point);
  AObj.ShowMenu(menu_model, Inscreen_point, anchor_position);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_CancelMenu(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8614}
  handleExceptionBegin
  AObj.CancelMenu();
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_SetDraggableRegions(AObj: TCEFWindowComponent; regionsCount: NativeUInt; const regions: PCefDraggableRegionArray); extdecl;
begin
  {$define handleExceptionID := 8615}
  handleExceptionBegin
  AObj.SetDraggableRegions(regionsCount, regions);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_SendKeyPress(AObj: TCEFWindowComponent; key_code: Integer; event_flags: cardinal); extdecl;
begin
  {$define handleExceptionID := 8616}
  handleExceptionBegin
  AObj.SendKeyPress(key_code, event_flags);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_SendMouseMove(AObj: TCEFWindowComponent; screen_x: Integer; screen_y: Integer); extdecl;
begin
  {$define handleExceptionID := 8617}
  handleExceptionBegin
  AObj.SendMouseMove(screen_x, screen_y);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_SendMouseEvents(AObj: TCEFWindowComponent; button: TCefMouseButtonType; mouse_down: LongBool; mouse_up: LongBool); extdecl;
begin
  {$define handleExceptionID := 8618}
  handleExceptionBegin
  AObj.SendMouseEvents(button, mouse_down, mouse_up);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_SetAccelerator(AObj: TCEFWindowComponent; command_id: Integer; key_code: Integer; shift_pressed: LongBool; ctrl_pressed: LongBool; alt_pressed: LongBool); extdecl;
begin
  {$define handleExceptionID := 8619}
  handleExceptionBegin
  AObj.SetAccelerator(command_id, key_code, shift_pressed, ctrl_pressed, alt_pressed);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_RemoveAccelerator(AObj: TCEFWindowComponent; command_id: Integer); extdecl;
begin
  {$define handleExceptionID := 8620}
  handleExceptionBegin
  AObj.RemoveAccelerator(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFWindowComponent_RemoveAllAccelerators(AObj: TCEFWindowComponent); extdecl;
begin
  {$define handleExceptionID := 8621}
  handleExceptionBegin
  AObj.RemoveAllAccelerators();
  handleExceptionEnd
end;

// property
procedure TCEFWindowComponent_Title(ASet: LongBool; AObj: TCEFWindowComponent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFWindowComponent_WindowIcon(ASet: LongBool; AObj: TCEFWindowComponent; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 8623}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowIcon := AValue
  end else
    Result := AObj.WindowIcon;
  handleExceptionEnd
end;

// property
procedure TCEFWindowComponent_WindowAppIcon(ASet: LongBool; AObj: TCEFWindowComponent; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 8624}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowAppIcon := AValue
  end else
    Result := AObj.WindowAppIcon;
  handleExceptionEnd
end;

// property
procedure TCEFWindowComponent_Display(AObj: TCEFWindowComponent; var Result: ICefDisplay); extdecl;
begin
  {$define handleExceptionID := 8625}
  handleExceptionBegin
  Result := AObj.Display;
  handleExceptionEnd
end;

// property
procedure TCEFWindowComponent_ClientAreaBoundsInScreen(AObj: TCEFWindowComponent; var Result: TCefRectPtr); extdecl;
begin
  {$define handleExceptionID := 8626}
  handleExceptionBegin
  Result := TCefRectToGo(AObj.ClientAreaBoundsInScreen);
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_WindowHandle(AObj: TCEFWindowComponent): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 8627}
  handleExceptionBegin
  Result := AObj.WindowHandle;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsClosed(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8628}
  handleExceptionBegin
  Result := AObj.IsClosed;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsActive(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8629}
  handleExceptionBegin
  Result := AObj.IsActive;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsAlwaysOnTop(ASet: LongBool; AObj: TCEFWindowComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8630}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsAlwaysOnTop := AValue
  end else
    Result := AObj.IsAlwaysOnTop;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsFullscreen(ASet: LongBool; AObj: TCEFWindowComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8631}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsFullscreen := AValue
  end else
    Result := AObj.IsFullscreen;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsMaximized(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8632}
  handleExceptionBegin
  Result := AObj.IsMaximized;
  handleExceptionEnd
end;

// property
function TCEFWindowComponent_IsMinimized(AObj: TCEFWindowComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8633}
  handleExceptionBegin
  Result := AObj.IsMinimized;
  handleExceptionEnd
end;

// event
procedure TCEFWindowComponent_OnWindowCreated(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowCreatedEvent}
  {$DEFINE EventName := OnWindowCreated}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnWindowClosing(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowClosingEvent}
  {$DEFINE EventName := OnWindowClosing}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnWindowDestroyed(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowDestroyedEvent}
  {$DEFINE EventName := OnWindowDestroyed}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnWindowActivationChanged(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowActivationChangedEvent}
  {$DEFINE EventName := OnWindowActivationChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnWindowBoundsChanged(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowBoundsChangedEvent}
  {$DEFINE EventName := OnWindowBoundsChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnGetParentWindow(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnGetParentWindowEvent}
  {$DEFINE EventName := OnGetParentWindow}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnGetInitialBounds(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnGetInitialBoundsEvent}
  {$DEFINE EventName := OnGetInitialBounds}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnGetInitialShowState(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnGetInitialShowStateEvent}
  {$DEFINE EventName := OnGetInitialShowState}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnIsFrameless(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnIsFramelessEvent}
  {$DEFINE EventName := OnIsFrameless}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnCanResize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnCanResizeEvent}
  {$DEFINE EventName := OnCanResize}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnCanMaximize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnCanMaximizeEvent}
  {$DEFINE EventName := OnCanMaximize}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnCanMinimize(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnCanMinimizeEvent}
  {$DEFINE EventName := OnCanMinimize}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnCanClose(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnCanCloseEvent}
  {$DEFINE EventName := OnCanClose}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnAccelerator(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnAcceleratorEvent}
  {$DEFINE EventName := OnAccelerator}
  CEFEventMethodCode
end;

// event
procedure TCEFWindowComponent_OnKeyEvent(AObj: TCEFWindowComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWindowComponent_TOnWindowKeyEventEvent}
  {$DEFINE EventName := OnKeyEvent}
  CEFEventMethodCode
end;

exports
  TCEFWindowComponent_Create,
  TCEFWindowComponent_AddOverlayView,
  TCEFWindowComponent_CreateTopLevelWindow,
  TCEFWindowComponent_Show,
  TCEFWindowComponent_Hide,
  TCEFWindowComponent_CenterWindow,
  TCEFWindowComponent_Close,
  TCEFWindowComponent_Activate,
  TCEFWindowComponent_Deactivate,
  TCEFWindowComponent_BringToTop,
  TCEFWindowComponent_Maximize,
  TCEFWindowComponent_Minimize,
  TCEFWindowComponent_Restore,
  TCEFWindowComponent_ShowMenu,
  TCEFWindowComponent_CancelMenu,
  TCEFWindowComponent_SetDraggableRegions,
  TCEFWindowComponent_SendKeyPress,
  TCEFWindowComponent_SendMouseMove,
  TCEFWindowComponent_SendMouseEvents,
  TCEFWindowComponent_SetAccelerator,
  TCEFWindowComponent_RemoveAccelerator,
  TCEFWindowComponent_RemoveAllAccelerators,
  TCEFWindowComponent_Title,
  TCEFWindowComponent_WindowIcon,
  TCEFWindowComponent_WindowAppIcon,
  TCEFWindowComponent_Display,
  TCEFWindowComponent_ClientAreaBoundsInScreen,
  TCEFWindowComponent_WindowHandle,
  TCEFWindowComponent_IsClosed,
  TCEFWindowComponent_IsActive,
  TCEFWindowComponent_IsAlwaysOnTop,
  TCEFWindowComponent_IsFullscreen,
  TCEFWindowComponent_IsMaximized,
  TCEFWindowComponent_IsMinimized,
  TCEFWindowComponent_OnWindowCreated,
  TCEFWindowComponent_OnWindowClosing,
  TCEFWindowComponent_OnWindowDestroyed,
  TCEFWindowComponent_OnWindowActivationChanged,
  TCEFWindowComponent_OnWindowBoundsChanged,
  TCEFWindowComponent_OnGetParentWindow,
  TCEFWindowComponent_OnGetInitialBounds,
  TCEFWindowComponent_OnGetInitialShowState,
  TCEFWindowComponent_OnIsFrameless,
  TCEFWindowComponent_OnCanResize,
  TCEFWindowComponent_OnCanMaximize,
  TCEFWindowComponent_OnCanMinimize,
  TCEFWindowComponent_OnCanClose,
  TCEFWindowComponent_OnAccelerator,
  TCEFWindowComponent_OnKeyEvent;