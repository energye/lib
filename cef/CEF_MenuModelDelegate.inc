
//constructor
function MenuModelDelegate_Create(): TMenuModelDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TMenuModelDelegate.Create();
  handleExceptionEnd
end;

//function
procedure MenuModelDelegate_AsInterface(AObj: TMenuModelDelegate; var Result: ICefMenuModelDelegate); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsInterface();
  handleExceptionEnd
end;

//property event
procedure MenuModelDelegate_SetOnExecuteCommand(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnExecuteCommand}
  {$DEFINE EventName := OnExecuteCommand}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnMouseOutsideMenu(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnMouseOutsideMenu}
  {$DEFINE EventName := OnMouseOutsideMenu}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnUnhandledOpenSubmenu(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnUnhandledOpenSubmenu}
  {$DEFINE EventName := OnUnhandledOpenSubmenu}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnUnhandledCloseSubmenu(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnUnhandledCloseSubmenu}
  {$DEFINE EventName := OnUnhandledCloseSubmenu}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnMenuWillShow(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnMenuWillShow}
  {$DEFINE EventName := OnMenuWillShow}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnMenuClosed(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnMenuClosed}
  {$DEFINE EventName := OnMenuClosed}
  CEFEventMethodCode
end;

//property event
procedure MenuModelDelegate_SetOnFormatLabel(AObj: TMenuModelDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuModelDelegate_OnFormatLabel}
  {$DEFINE EventName := OnFormatLabel}
  CEFEventMethodCode
end;


exports
  MenuModelDelegate_Create,
  MenuModelDelegate_AsInterface,
  MenuModelDelegate_SetOnExecuteCommand,
  MenuModelDelegate_SetOnMouseOutsideMenu,
  MenuModelDelegate_SetOnUnhandledOpenSubmenu,
  MenuModelDelegate_SetOnUnhandledCloseSubmenu,
  MenuModelDelegate_SetOnMenuWillShow,
  MenuModelDelegate_SetOnMenuClosed,
  MenuModelDelegate_SetOnFormatLabel;