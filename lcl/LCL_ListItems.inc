
//constructor
function ListItems_Create(AOwner: TCustomListView): TListItems; extdecl;
begin
  handleExceptionBegin
  Result := TListItems.Create(AOwner);
  handleExceptionEnd
end;

//property
function ListItems_Flags(AObj: TListItems): TListItemsFlags; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Flags;
  handleExceptionEnd
end;

//property
function ListItems_Count(AIsSet: LongBool; AObj: TListItems; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Count := AValue;
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

//property
function ListItems_Item(AIsSet: LongBool; AObj: TListItems; const AIndex: Integer; AValue: TListItem): TListItem; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Item[AIndex] := AValue;
  end else
    Result := AObj.Item[AIndex];
  handleExceptionEnd
end;

//property
function ListItems_Owner(AObj: TListItems): TCustomListView; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//function
function ListItems_Add(AObj: TListItems): TListItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function ListItems_FindCaption(AObj: TListItems; StartIndex: Integer; Value: PChar; Partial, Inclusive, Wrap: LongBool; PartStart: LongBool): TListItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindCaption(StartIndex, Value, Partial, Inclusive, Wrap, PartStart);
  handleExceptionEnd
end;

//function
function ListItems_FindData(AObj: TListItems; const AData: Pointer): TListItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindData(AData);
  handleExceptionEnd
end;

//function
function ListItems_FindData1(AObj: TListItems; StartIndex: Integer; Value: Pointer; Inclusive, Wrap: LongBool): TListItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindData(StartIndex, Value, Inclusive, Wrap);
  handleExceptionEnd
end;

//function
function ListItems_GetEnumerator(AObj: TListItems): TListItemsEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function ListItems_IndexOf(AObj: TListItems; const AItem: TListItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(AItem);
  handleExceptionEnd
end;

//function
function ListItems_Insert(AObj: TListItems; const AIndex: Integer): TListItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Insert(AIndex);
  handleExceptionEnd
end;

//function
function ListItems_Class(): TClass; extdecl;
begin
  Result := TListItems;
end;

//procedure
procedure ListItems_AddItem(AObj: TListItems; AItem: TListItem); extdecl;
begin
  handleExceptionBegin
  AObj.AddItem(AItem);
  handleExceptionEnd
end;

//procedure
procedure ListItems_BeginUpdate(AObj: TListItems); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure ListItems_Clear(AObj: TListItems); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure ListItems_Delete(AObj: TListItems; const AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

//procedure
procedure ListItems_EndUpdate(AObj: TListItems); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure ListItems_Exchange(AObj: TListItems; const AIndex1, AIndex2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Exchange(AIndex1, AIndex2);
  handleExceptionEnd
end;

//procedure
procedure ListItems_Move(AObj: TListItems; const AFromIndex, AToIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(AFromIndex, AToIndex);
  handleExceptionEnd
end;

//procedure
procedure ListItems_InsertItem(AObj: TListItems; AItem: TListItem; const AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.InsertItem(AItem, AIndex);
  handleExceptionEnd
end;


exports
  ListItems_Create,
  ListItems_Flags,
  ListItems_Count,
  ListItems_Item,
  ListItems_Owner,
  ListItems_Add,
  ListItems_FindCaption,
  ListItems_FindData,
  ListItems_FindData1,
  ListItems_GetEnumerator,
  ListItems_IndexOf,
  ListItems_Insert,
  ListItems_Class,
  ListItems_AddItem,
  ListItems_BeginUpdate,
  ListItems_Clear,
  ListItems_Delete,
  ListItems_EndUpdate,
  ListItems_Exchange,
  ListItems_Move,
  ListItems_InsertItem;