// constructor
function TWkContextMenuItem_Create(aContextMenu: WebKitContextMenuItem): TWkContextMenuItem; extdecl;
begin
  {$define handleExceptionID := 2100}
  handleExceptionBegin
  Result := TWkContextMenuItem.Create(aContextMenu);
  handleExceptionEnd
end;

// function
function TWkContextMenuItem_Data(AObj: TWkContextMenuItem): WebKitContextMenuItem; extdecl;
begin
  {$define handleExceptionID := 2101}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkContextMenuItem_GetSubmenu(AObj: TWkContextMenuItem): WebKitContextMenu; extdecl;
begin
  {$define handleExceptionID := 2102}
  handleExceptionBegin
  Result := AObj.GetSubmenu();
  handleExceptionEnd
end;

// function
function TWkContextMenuItem_GetAction(AObj: TWkContextMenuItem): PWkAction; extdecl;
begin
  {$define handleExceptionID := 2103}
  handleExceptionBegin
  Result := AObj.GetAction();
  handleExceptionEnd
end;

// function
function TWkContextMenuItem_GetStockAction(AObj: TWkContextMenuItem): WebKitContextMenuAction; extdecl;
begin
  {$define handleExceptionID := 2104}
  handleExceptionBegin
  Result := AObj.GetStockAction();
  handleExceptionEnd
end;

// function
function TWkContextMenuItem_IsSeparator(AObj: TWkContextMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 2105}
  handleExceptionBegin
  Result := AObj.IsSeparator();
  handleExceptionEnd
end;

// function static
function TWkContextMenuItem_NewFromAction(action: PWkAction; aLabel: PChar; commandId: Integer): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromAction(action, aLabel, commandId);
end;

// function static
function TWkContextMenuItem_NewFromStockAction(action: WebKitContextMenuAction): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromStockAction(action);
end;

// function static
function TWkContextMenuItem_NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: PChar): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewFromStockActionWithLabel(action, aLabel);
end;

// function static
function TWkContextMenuItem_NewWithSubmenu(aLabel: PChar; submenu: WebKitContextMenu): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewWithSubmenu(aLabel, submenu);
end;

// function static
function TWkContextMenuItem_NewSeparator(): TWkContextMenuItem; extdecl;
begin
  Result := TWkContextMenuItem.NewSeparator();
end;

// procedure
procedure TWkContextMenuItem_SetSubmenu(AObj: TWkContextMenuItem; submenu: WebKitContextMenu); extdecl;
begin
  {$define handleExceptionID := 2106}
  handleExceptionBegin
  AObj.SetSubmenu(submenu);
  handleExceptionEnd
end;

exports
  TWkContextMenuItem_Create,
  TWkContextMenuItem_Data,
  TWkContextMenuItem_GetSubmenu,
  TWkContextMenuItem_GetAction,
  TWkContextMenuItem_GetStockAction,
  TWkContextMenuItem_IsSeparator,
  TWkContextMenuItem_NewFromAction,
  TWkContextMenuItem_NewFromStockAction,
  TWkContextMenuItem_NewFromStockActionWithLabel,
  TWkContextMenuItem_NewWithSubmenu,
  TWkContextMenuItem_NewSeparator,
  TWkContextMenuItem_SetSubmenu;