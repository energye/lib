// constructor
function TListItems_Create(AOwner: TCustomListView): TListItems; extdecl;
begin
  {$define handleExceptionID := 12400}
  handleExceptionBegin
  Result := TListItems.Create(AOwner);
  handleExceptionEnd
end;

// function
function TListItems_Add(AObj: TListItems): TListItem; extdecl;
begin
  {$define handleExceptionID := 12401}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TListItems_FindCaption(AObj: TListItems; StartIndex: Integer; Value: PChar; Partial: LongBool; Inclusive: LongBool; Wrap: LongBool; PartStart: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionID := 12402}
  handleExceptionBegin
  Result := AObj.FindCaption(StartIndex, Value, Partial, Inclusive, Wrap, PartStart);
  handleExceptionEnd
end;

// function
function TListItems_FindDataWithPointer(AObj: TListItems; const AData: Pointer): TListItem; extdecl;
begin
  {$define handleExceptionID := 12403}
  handleExceptionBegin
  Result := AObj.FindData(AData);
  handleExceptionEnd
end;

// function
function TListItems_FindDataWithIntPointerBoolX2(AObj: TListItems; StartIndex: Integer; Value: Pointer; Inclusive: LongBool; Wrap: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionID := 12404}
  handleExceptionBegin
  Result := AObj.FindData(StartIndex, Value, Inclusive, Wrap);
  handleExceptionEnd
end;

// function
function TListItems_GetEnumerator(AObj: TListItems): TListItemsEnumerator; extdecl;
begin
  {$define handleExceptionID := 12405}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TListItems_IndexOf(AObj: TListItems; const AItem: TListItem): Integer; extdecl;
begin
  {$define handleExceptionID := 12406}
  handleExceptionBegin
  Result := AObj.IndexOf(AItem);
  handleExceptionEnd
end;

// function
function TListItems_Insert(AObj: TListItems; const AIndex: Integer): TListItem; extdecl;
begin
  {$define handleExceptionID := 12407}
  handleExceptionBegin
  Result := AObj.Insert(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TListItems_AddItem(AObj: TListItems; AItem: TListItem); extdecl;
begin
  {$define handleExceptionID := 12408}
  handleExceptionBegin
  AObj.AddItem(AItem);
  handleExceptionEnd
end;

// procedure
procedure TListItems_BeginUpdate(AObj: TListItems); extdecl;
begin
  {$define handleExceptionID := 12409}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TListItems_Clear(AObj: TListItems); extdecl;
begin
  {$define handleExceptionID := 12410}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TListItems_Delete(AObj: TListItems; const AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 12411}
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TListItems_EndUpdate(AObj: TListItems); extdecl;
begin
  {$define handleExceptionID := 12412}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TListItems_Exchange(AObj: TListItems; const AIndex1: Integer; const AIndex2: Integer); extdecl;
begin
  {$define handleExceptionID := 12413}
  handleExceptionBegin
  AObj.Exchange(AIndex1, AIndex2);
  handleExceptionEnd
end;

// procedure
procedure TListItems_Move(AObj: TListItems; const AFromIndex: Integer; const AToIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 12414}
  handleExceptionBegin
  AObj.Move(AFromIndex, AToIndex);
  handleExceptionEnd
end;

// procedure
procedure TListItems_InsertItem(AObj: TListItems; AItem: TListItem; const AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 12415}
  handleExceptionBegin
  AObj.InsertItem(AItem, AIndex);
  handleExceptionEnd
end;

// property
function TListItems_Flags(AObj: TListItems): TListItemsFlags; extdecl;
begin
  {$define handleExceptionID := 12416}
  handleExceptionBegin
  Result := AObj.Flags;
  handleExceptionEnd
end;

// property
function TListItems_Count(ASet: LongBool; AObj: TListItems; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Count := AValue
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TListItems_Item(ASet: LongBool; AObj: TListItems; const AIndex: Integer; AValue: TListItem): TListItem; extdecl;
begin
  {$define handleExceptionID := 12418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Item[AIndex] := AValue
  end else
    Result := AObj.Item[AIndex];
  handleExceptionEnd
end;

// property
function TListItems_Owner(AObj: TListItems): TCustomListView; extdecl;
begin
  {$define handleExceptionID := 12419}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  TListItems_Create,
  TListItems_Add,
  TListItems_FindCaption,
  TListItems_FindDataWithPointer,
  TListItems_FindDataWithIntPointerBoolX2,
  TListItems_GetEnumerator,
  TListItems_IndexOf,
  TListItems_Insert,
  TListItems_AddItem,
  TListItems_BeginUpdate,
  TListItems_Clear,
  TListItems_Delete,
  TListItems_EndUpdate,
  TListItems_Exchange,
  TListItems_Move,
  TListItems_InsertItem,
  TListItems_Flags,
  TListItems_Count,
  TListItems_Item,
  TListItems_Owner;