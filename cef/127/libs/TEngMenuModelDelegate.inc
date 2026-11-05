// constructor
function TEngMenuModelDelegate_Create(out IntfMenuModelDelegate: ICefMenuModelDelegate): TEngMenuModelDelegate; extdecl;
begin
  {$define handleExceptionID := 13000}
  handleExceptionBegin
  Result := TEngMenuModelDelegate.Create();
  IntfMenuModelDelegate := Result as ICefMenuModelDelegate;
  handleExceptionEnd
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelFormatLabel(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelFormatLabelEvent}
  {$DEFINE EventName := OnMenuModelFormatLabel}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelExecuteCommand(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelExecuteCommandEvent}
  {$DEFINE EventName := OnMenuModelExecuteCommand}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelMouseOutsideMenu(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelMouseOutsideMenuEvent}
  {$DEFINE EventName := OnMenuModelMouseOutsideMenu}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelUnhandledOpenSubmenu(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelUnhandledOpenSubmenuEvent}
  {$DEFINE EventName := OnMenuModelUnhandledOpenSubmenu}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelUnhandledCloseSubmenu(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelUnhandledCloseSubmenuEvent}
  {$DEFINE EventName := OnMenuModelUnhandledCloseSubmenu}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelMenuWillShow(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelMenuWillShowEvent}
  {$DEFINE EventName := OnMenuModelMenuWillShow}
  CEFEventMethodCode
end;

// event
procedure TEngMenuModelDelegate_OnMenuModelMenuClosed(AObj: TEngMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuModelDelegate_TOnMenuModelMenuClosedEvent}
  {$DEFINE EventName := OnMenuModelMenuClosed}
  CEFEventMethodCode
end;

exports
  TEngMenuModelDelegate_Create,
  TEngMenuModelDelegate_OnMenuModelFormatLabel,
  TEngMenuModelDelegate_OnMenuModelExecuteCommand,
  TEngMenuModelDelegate_OnMenuModelMouseOutsideMenu,
  TEngMenuModelDelegate_OnMenuModelUnhandledOpenSubmenu,
  TEngMenuModelDelegate_OnMenuModelUnhandledCloseSubmenu,
  TEngMenuModelDelegate_OnMenuModelMenuWillShow,
  TEngMenuModelDelegate_OnMenuModelMenuClosed;