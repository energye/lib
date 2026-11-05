// constructor
function TWkContextMenu_Create(aContextMenu: WebKitContextMenu): TWkContextMenu; extdecl;
begin
  {$define handleExceptionID := 2000}
  handleExceptionBegin
  Result := TWkContextMenu.Create(aContextMenu);
  handleExceptionEnd
end;

// function
function TWkContextMenu_Data(AObj: TWkContextMenu): WebKitContextMenu; extdecl;
begin
  {$define handleExceptionID := 2001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkContextMenu_GetItemsLength(AObj: TWkContextMenu): integer; extdecl;
begin
  {$define handleExceptionID := 2002}
  handleExceptionBegin
  Result := AObj.GetItemsLength();
  handleExceptionEnd
end;

// function
function TWkContextMenu_GetItemAtPosition(AObj: TWkContextMenu; position: integer): WebKitContextMenuItem; extdecl;
begin
  {$define handleExceptionID := 2003}
  handleExceptionBegin
  Result := AObj.GetItemAtPosition(position);
  handleExceptionEnd
end;

// function static
function TWkContextMenu_New(): TWkContextMenu; extdecl;
begin
  Result := TWkContextMenu.New();
end;

// procedure
procedure TWkContextMenu_Prepend(AObj: TWkContextMenu; item: WebKitContextMenuItem); extdecl;
begin
  {$define handleExceptionID := 2004}
  handleExceptionBegin
  AObj.Prepend(item);
  handleExceptionEnd
end;

// procedure
procedure TWkContextMenu_Append(AObj: TWkContextMenu; item: WebKitContextMenuItem); extdecl;
begin
  {$define handleExceptionID := 2005}
  handleExceptionBegin
  AObj.Append(item);
  handleExceptionEnd
end;

// procedure
procedure TWkContextMenu_Insert(AObj: TWkContextMenu; item: WebKitContextMenuItem; position: integer); extdecl;
begin
  {$define handleExceptionID := 2006}
  handleExceptionBegin
  AObj.Insert(item, position);
  handleExceptionEnd
end;

// procedure
procedure TWkContextMenu_Remove(AObj: TWkContextMenu; item: WebKitContextMenuItem); extdecl;
begin
  {$define handleExceptionID := 2007}
  handleExceptionBegin
  AObj.Remove(item);
  handleExceptionEnd
end;

// procedure
procedure TWkContextMenu_RemoveAll(AObj: TWkContextMenu); extdecl;
begin
  {$define handleExceptionID := 2008}
  handleExceptionBegin
  AObj.RemoveAll();
  handleExceptionEnd
end;

exports
  TWkContextMenu_Create,
  TWkContextMenu_Data,
  TWkContextMenu_GetItemsLength,
  TWkContextMenu_GetItemAtPosition,
  TWkContextMenu_New,
  TWkContextMenu_Prepend,
  TWkContextMenu_Append,
  TWkContextMenu_Insert,
  TWkContextMenu_Remove,
  TWkContextMenu_RemoveAll;