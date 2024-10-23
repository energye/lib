
//constructor
function WkContextMenuItem_Create(aContextMenu: WebKitContextMenuItem): TWkContextMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := TWkContextMenuItem.Create(aContextMenu);
  handleExceptionEnd
end;

//function
function WkContextMenuItem_NewFromAction(action: PWkAction; aLabel: PChar; commandId: Integer): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromAction(action, aLabel, commandId);
end;

//function
function WkContextMenuItem_NewFromStockAction(action: WebKitContextMenuAction): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromStockAction(action);
end;

//function
function WkContextMenuItem_NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: PChar): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromStockActionWithLabel(action, aLabel);
end;

//function
function WkContextMenuItem_NewWithSubmenu(aLabel: PChar; submenu: WebKitContextMenu): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewWithSubmenu(aLabel, submenu);
end;

//function
function WkContextMenuItem_NewSeparator(): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewSeparator();
end;

//function
function WkContextMenuItem_Data(AObj: TWkContextMenuItem): WebKitContextMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkContextMenuItem_GetSubmenu(AObj: TWkContextMenuItem): WebKitContextMenu; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSubmenu();
  handleExceptionEnd
end;

//function
function WkContextMenuItem_GetAction(AObj: TWkContextMenuItem): PWkAction; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAction();
  handleExceptionEnd
end;

//function
function WkContextMenuItem_GetStockAction(AObj: TWkContextMenuItem): WebKitContextMenuAction; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetStockAction();
  handleExceptionEnd
end;

//function
function WkContextMenuItem_IsSeparator(AObj: TWkContextMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSeparator();
  handleExceptionEnd
end;

//procedure
procedure WkContextMenuItem_SetSubmenu(AObj: TWkContextMenuItem; submenu: WebKitContextMenu); extdecl;
begin
  handleExceptionBegin
  AObj.SetSubmenu(submenu);
  handleExceptionEnd
end;


exports
  WkContextMenuItem_Create,
  WkContextMenuItem_NewFromAction,
  WkContextMenuItem_NewFromStockAction,
  WkContextMenuItem_NewFromStockActionWithLabel,
  WkContextMenuItem_NewWithSubmenu,
  WkContextMenuItem_NewSeparator,
  WkContextMenuItem_Data,
  WkContextMenuItem_GetSubmenu,
  WkContextMenuItem_GetAction,
  WkContextMenuItem_GetStockAction,
  WkContextMenuItem_IsSeparator,
  WkContextMenuItem_SetSubmenu;