// constructor
function TEngContextMenuHandler_Create(out IntfContextMenuHandler: ICefContextMenuHandler): TEngContextMenuHandler; extdecl;
begin
  {$define handleExceptionID := 11600}
  handleExceptionBegin
  Result := TEngContextMenuHandler.Create();
  IntfContextMenuHandler := Result as ICefContextMenuHandler;
  handleExceptionEnd
end;

// event
procedure TEngContextMenuHandler_OnContextMenuRunContextMenu(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuRunContextMenuEvent}
  {$DEFINE EventName := OnContextMenuRunContextMenu}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuContextMenuCommand(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuContextMenuCommandEvent}
  {$DEFINE EventName := OnContextMenuContextMenuCommand}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuRunQuickMenu(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuRunQuickMenuEvent}
  {$DEFINE EventName := OnContextMenuRunQuickMenu}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuQuickMenuCommand(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuQuickMenuCommandEvent}
  {$DEFINE EventName := OnContextMenuQuickMenuCommand}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuBeforeContextMenu(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuBeforeContextMenuEvent}
  {$DEFINE EventName := OnContextMenuBeforeContextMenu}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuContextMenuDismissed(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuContextMenuDismissedEvent}
  {$DEFINE EventName := OnContextMenuContextMenuDismissed}
  CEFEventMethodCode
end;

// event
procedure TEngContextMenuHandler_OnContextMenuQuickMenuDismissed(AObj: TEngContextMenuHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngContextMenuHandler_TOnContextMenuQuickMenuDismissedEvent}
  {$DEFINE EventName := OnContextMenuQuickMenuDismissed}
  CEFEventMethodCode
end;

exports
  TEngContextMenuHandler_Create,
  TEngContextMenuHandler_OnContextMenuRunContextMenu,
  TEngContextMenuHandler_OnContextMenuContextMenuCommand,
  TEngContextMenuHandler_OnContextMenuRunQuickMenu,
  TEngContextMenuHandler_OnContextMenuQuickMenuCommand,
  TEngContextMenuHandler_OnContextMenuBeforeContextMenu,
  TEngContextMenuHandler_OnContextMenuContextMenuDismissed,
  TEngContextMenuHandler_OnContextMenuQuickMenuDismissed;