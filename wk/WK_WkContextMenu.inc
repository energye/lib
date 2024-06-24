
//constructor
function WkContextMenu_Create(): TWkContextMenu; extdecl;
begin
  handleExceptionBegin
  Result := TWkContextMenu.Create();
  handleExceptionEnd
end;

//constructor
function WkContextMenu_Create1(aContextMenu: WebKitContextMenu): TWkContextMenu; extdecl;
begin
  handleExceptionBegin
  Result := TWkContextMenu.Create(aContextMenu);
  handleExceptionEnd
end;

//function
function WkContextMenu_Data(AObj: TWkContextMenu): WebKitContextMenu; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkContextMenu_GetItemsLength(AObj: TWkContextMenu): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetItemsLength();
  handleExceptionEnd
end;

//function
procedure WkContextMenu_GetItemAtPosition(AObj: TWkContextMenu; position: integer; var Result: IWkContextMenuItem); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetItemAtPosition(position);
  handleExceptionEnd
end;

//procedure
procedure WkContextMenu_Prepend(AObj: TWkContextMenu; item: IWkContextMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Prepend(item);
  handleExceptionEnd
end;

//procedure
procedure WkContextMenu_Append(AObj: TWkContextMenu; item: IWkContextMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Append(item);
  handleExceptionEnd
end;

//procedure
procedure WkContextMenu_Insert(AObj: TWkContextMenu; item: IWkContextMenuItem; position: integer); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(item, position);
  handleExceptionEnd
end;

//procedure
procedure WkContextMenu_Remove(AObj: TWkContextMenu; item: IWkContextMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Remove(item);
  handleExceptionEnd
end;

//procedure
procedure WkContextMenu_RemoveAll(AObj: TWkContextMenu); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveAll();
  handleExceptionEnd
end;


exports
  WkContextMenu_Create,
  WkContextMenu_Create1,
  WkContextMenu_Data,
  WkContextMenu_GetItemsLength,
  WkContextMenu_GetItemAtPosition,
  WkContextMenu_Prepend,
  WkContextMenu_Append,
  WkContextMenu_Insert,
  WkContextMenu_Remove,
  WkContextMenu_RemoveAll;