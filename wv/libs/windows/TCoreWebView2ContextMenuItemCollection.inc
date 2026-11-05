// constructor
function TCoreWebView2ContextMenuItemCollection_Create(const aBaseIntf: ICoreWebView2ContextMenuItemCollection): TCoreWebView2ContextMenuItemCollection; extdecl;
begin
  {$define handleExceptionID := 5600}
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuItemCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2ContextMenuItemCollection_RemoveValueAtIndex(AObj: TCoreWebView2ContextMenuItemCollection; index: cardinal): LongBool; extdecl;
begin
  {$define handleExceptionID := 5601}
  handleExceptionBegin
  Result := AObj.RemoveValueAtIndex(index);
  handleExceptionEnd
end;

// function
function TCoreWebView2ContextMenuItemCollection_InsertValueAtIndex(AObj: TCoreWebView2ContextMenuItemCollection; index: cardinal; const aValue: ICoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 5602}
  handleExceptionBegin
  Result := AObj.InsertValueAtIndex(index, aValue);
  handleExceptionEnd
end;

// function
function TCoreWebView2ContextMenuItemCollection_AppendValue(AObj: TCoreWebView2ContextMenuItemCollection; const aValue: ICoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 5603}
  handleExceptionBegin
  Result := AObj.AppendValue(aValue);
  handleExceptionEnd
end;

// procedure
procedure TCoreWebView2ContextMenuItemCollection_RemoveAllMenuItems(AObj: TCoreWebView2ContextMenuItemCollection); extdecl;
begin
  {$define handleExceptionID := 5604}
  handleExceptionBegin
  AObj.RemoveAllMenuItems();
  handleExceptionEnd
end;

// procedure
procedure TCoreWebView2ContextMenuItemCollection_RemoveMenuItemWithInt(AObj: TCoreWebView2ContextMenuItemCollection; aCommandId: integer); extdecl;
begin
  {$define handleExceptionID := 5605}
  handleExceptionBegin
  AObj.RemoveMenuItem(aCommandId);
  handleExceptionEnd
end;

// procedure
procedure TCoreWebView2ContextMenuItemCollection_RemoveMenuItemWithStr(AObj: TCoreWebView2ContextMenuItemCollection; const aLabel: PChar); extdecl;
begin
  {$define handleExceptionID := 5606}
  handleExceptionBegin
  AObj.RemoveMenuItem(PCharToUStr(aLabel));
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItemCollection_Initialized(AObj: TCoreWebView2ContextMenuItemCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 5607}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItemCollection_BaseIntf(AObj: TCoreWebView2ContextMenuItemCollection; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  {$define handleExceptionID := 5608}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItemCollection_Count(AObj: TCoreWebView2ContextMenuItemCollection): cardinal; extdecl;
begin
  {$define handleExceptionID := 5609}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItemCollection_Items(AObj: TCoreWebView2ContextMenuItemCollection; idx: cardinal; var Result: ICoreWebView2ContextMenuItem); extdecl;
begin
  {$define handleExceptionID := 5610}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2ContextMenuItemCollection_Create,
  TCoreWebView2ContextMenuItemCollection_RemoveValueAtIndex,
  TCoreWebView2ContextMenuItemCollection_InsertValueAtIndex,
  TCoreWebView2ContextMenuItemCollection_AppendValue,
  TCoreWebView2ContextMenuItemCollection_RemoveAllMenuItems,
  TCoreWebView2ContextMenuItemCollection_RemoveMenuItemWithInt,
  TCoreWebView2ContextMenuItemCollection_RemoveMenuItemWithStr,
  TCoreWebView2ContextMenuItemCollection_Initialized,
  TCoreWebView2ContextMenuItemCollection_BaseIntf,
  TCoreWebView2ContextMenuItemCollection_Count,
  TCoreWebView2ContextMenuItemCollection_Items;