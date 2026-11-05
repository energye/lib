// constructor
function TEngWindowDelegate_Create(out IntfWindowDelegate: ICefWindowDelegate; out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TEngWindowDelegate; extdecl;
begin
  {$define handleExceptionID := 17100}
  handleExceptionBegin
  Result := TEngWindowDelegate.Create();
  IntfWindowDelegate := Result as ICefWindowDelegate;
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngWindowDelegate_OnWindowWindowCreated(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowCreatedEvent}
  {$DEFINE EventName := OnWindowWindowCreated}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWindowClosing(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowClosingEvent}
  {$DEFINE EventName := OnWindowWindowClosing}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWindowDestroyed(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowDestroyedEvent}
  {$DEFINE EventName := OnWindowWindowDestroyed}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWindowActivationChanged(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowActivationChangedEvent}
  {$DEFINE EventName := OnWindowWindowActivationChanged}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWindowBoundsChanged(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowBoundsChangedEvent}
  {$DEFINE EventName := OnWindowWindowBoundsChanged}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWindowFullscreenTransition(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWindowFullscreenTransitionEvent}
  {$DEFINE EventName := OnWindowWindowFullscreenTransition}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowGetParentWindow(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowGetParentWindowEvent}
  {$DEFINE EventName := OnWindowGetParentWindow}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowIsWindowModalDialog(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowIsWindowModalDialogEvent}
  {$DEFINE EventName := OnWindowIsWindowModalDialog}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowGetInitialBounds(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowGetInitialBoundsEvent}
  {$DEFINE EventName := OnWindowGetInitialBounds}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowGetInitialShowState(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowGetInitialShowStateEvent}
  {$DEFINE EventName := OnWindowGetInitialShowState}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowIsFrameless(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowIsFramelessEvent}
  {$DEFINE EventName := OnWindowIsFrameless}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowWithStandardWindowButtons(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowWithStandardWindowButtonsEvent}
  {$DEFINE EventName := OnWindowWithStandardWindowButtons}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowGetTitlebarHeight(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowGetTitlebarHeightEvent}
  {$DEFINE EventName := OnWindowGetTitlebarHeight}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowAcceptsFirstMouse(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowAcceptsFirstMouseEvent}
  {$DEFINE EventName := OnWindowAcceptsFirstMouse}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowCanResize(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowCanResizeEvent}
  {$DEFINE EventName := OnWindowCanResize}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowCanMaximize(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowCanMaximizeEvent}
  {$DEFINE EventName := OnWindowCanMaximize}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowCanMinimize(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowCanMinimizeEvent}
  {$DEFINE EventName := OnWindowCanMinimize}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowCanClose(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowCanCloseEvent}
  {$DEFINE EventName := OnWindowCanClose}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowAccelerator(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowAcceleratorEvent}
  {$DEFINE EventName := OnWindowAccelerator}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowKey(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowKeyEvent}
  {$DEFINE EventName := OnWindowKey}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowThemeColorsChanged(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowThemeColorsChangedEvent}
  {$DEFINE EventName := OnWindowThemeColorsChanged}
  CEFEventMethodCode
end;

// event
procedure TEngWindowDelegate_OnWindowGetWindowRuntimeStyle(AObj: TEngWindowDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWindowDelegate_TOnWindowGetWindowRuntimeStyleEvent}
  {$DEFINE EventName := OnWindowGetWindowRuntimeStyle}
  CEFEventMethodCode
end;

exports
  TEngWindowDelegate_Create,
  TEngWindowDelegate_OnWindowWindowCreated,
  TEngWindowDelegate_OnWindowWindowClosing,
  TEngWindowDelegate_OnWindowWindowDestroyed,
  TEngWindowDelegate_OnWindowWindowActivationChanged,
  TEngWindowDelegate_OnWindowWindowBoundsChanged,
  TEngWindowDelegate_OnWindowWindowFullscreenTransition,
  TEngWindowDelegate_OnWindowGetParentWindow,
  TEngWindowDelegate_OnWindowIsWindowModalDialog,
  TEngWindowDelegate_OnWindowGetInitialBounds,
  TEngWindowDelegate_OnWindowGetInitialShowState,
  TEngWindowDelegate_OnWindowIsFrameless,
  TEngWindowDelegate_OnWindowWithStandardWindowButtons,
  TEngWindowDelegate_OnWindowGetTitlebarHeight,
  TEngWindowDelegate_OnWindowAcceptsFirstMouse,
  TEngWindowDelegate_OnWindowCanResize,
  TEngWindowDelegate_OnWindowCanMaximize,
  TEngWindowDelegate_OnWindowCanMinimize,
  TEngWindowDelegate_OnWindowCanClose,
  TEngWindowDelegate_OnWindowAccelerator,
  TEngWindowDelegate_OnWindowKey,
  TEngWindowDelegate_OnWindowThemeColorsChanged,
  TEngWindowDelegate_OnWindowGetWindowRuntimeStyle;