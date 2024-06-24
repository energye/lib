
//constructor
function CoreWebView2ContextMenuItemCollection_Create(const aBaseIntf: ICoreWebView2ContextMenuItemCollection): TCoreWebView2ContextMenuItemCollection; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuItemCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItemCollection_Initialized(AObj: TCoreWebView2ContextMenuItemCollection): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuItemCollection_BaseIntf(AObj: TCoreWebView2ContextMenuItemCollection; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItemCollection_Count(AObj: TCoreWebView2ContextMenuItemCollection): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuItemCollection_Items(AObj: TCoreWebView2ContextMenuItemCollection; idx: uint32; var Result: ICoreWebView2ContextMenuItem); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

//function
function CoreWebView2ContextMenuItemCollection_RemoveValueAtIndex(AObj: TCoreWebView2ContextMenuItemCollection; index: uint32): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveValueAtIndex(index);
  handleExceptionEnd
end;

//function
function CoreWebView2ContextMenuItemCollection_InsertValueAtIndex(AObj: TCoreWebView2ContextMenuItemCollection; index: uint32; const aValue: ICoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InsertValueAtIndex(index, aValue);
  handleExceptionEnd
end;

//function
function CoreWebView2ContextMenuItemCollection_AppendValue(AObj: TCoreWebView2ContextMenuItemCollection; const aValue: ICoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AppendValue(aValue);
  handleExceptionEnd
end;

//procedure
procedure CoreWebView2ContextMenuItemCollection_RemoveAllMenuItems(AObj: TCoreWebView2ContextMenuItemCollection); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveAllMenuItems();
  handleExceptionEnd
end;

//procedure
procedure CoreWebView2ContextMenuItemCollection_RemoveMenuItem(AObj: TCoreWebView2ContextMenuItemCollection; aCommandId: integer); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveMenuItem(aCommandId);
  handleExceptionEnd
end;

//procedure
procedure CoreWebView2ContextMenuItemCollection_RemoveMenuItem1(AObj: TCoreWebView2ContextMenuItemCollection; const aLabel: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveMenuItem(aLabel);
  handleExceptionEnd
end;


exports
  CoreWebView2ContextMenuItemCollection_Create,
  CoreWebView2ContextMenuItemCollection_Initialized,
  CoreWebView2ContextMenuItemCollection_BaseIntf,
  CoreWebView2ContextMenuItemCollection_Count,
  CoreWebView2ContextMenuItemCollection_Items,
  CoreWebView2ContextMenuItemCollection_RemoveValueAtIndex,
  CoreWebView2ContextMenuItemCollection_InsertValueAtIndex,
  CoreWebView2ContextMenuItemCollection_AppendValue,
  CoreWebView2ContextMenuItemCollection_RemoveAllMenuItems,
  CoreWebView2ContextMenuItemCollection_RemoveMenuItem,
  CoreWebView2ContextMenuItemCollection_RemoveMenuItem1;