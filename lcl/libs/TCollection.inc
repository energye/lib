// constructor
function TCollection_Create(AItemClass: TCollectionItemClass): TCollection; extdecl;
begin
  {$define handleExceptionID := 12200}
  handleExceptionBegin
  Result := TCollection.Create(AItemClass);
  handleExceptionEnd
end;

// function
function TCollection_OwnerToPersistent(AObj: TCollection): TPersistent; extdecl;
begin
  {$define handleExceptionID := 12201}
  handleExceptionBegin
  Result := AObj.Owner();
  handleExceptionEnd
end;

// function
function TCollection_AddToCollectionItem(AObj: TCollection): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 12202}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TCollection_GetEnumerator(AObj: TCollection): TCollectionEnumerator; extdecl;
begin
  {$define handleExceptionID := 12203}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TCollection_Insert(AObj: TCollection; Index: Integer): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 12204}
  handleExceptionBegin
  Result := AObj.Insert(Index);
  handleExceptionEnd
end;

// function
function TCollection_FindItemID(AObj: TCollection; ID: Integer): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 12205}
  handleExceptionBegin
  Result := AObj.FindItemID(ID);
  handleExceptionEnd
end;

// procedure
procedure TCollection_BeginUpdate(AObj: TCollection); extdecl;
begin
  {$define handleExceptionID := 12206}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCollection_Clear(AObj: TCollection); extdecl;
begin
  {$define handleExceptionID := 12207}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCollection_EndUpdate(AObj: TCollection); extdecl;
begin
  {$define handleExceptionID := 12208}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCollection_Delete(AObj: TCollection; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 12209}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TCollection_Exchange(AObj: TCollection; const Index1: integer; const index2: integer); extdecl;
begin
  {$define handleExceptionID := 12210}
  handleExceptionBegin
  AObj.Exchange(Index1, index2);
  handleExceptionEnd
end;

// procedure
procedure TCollection_Move(AObj: TCollection; const Index1: integer; const index2: integer); extdecl;
begin
  {$define handleExceptionID := 12211}
  handleExceptionBegin
  AObj.Move(Index1, index2);
  handleExceptionEnd
end;

// property
function TCollection_Count(AObj: TCollection): Integer; extdecl;
begin
  {$define handleExceptionID := 12212}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TCollection_ItemClass(AObj: TCollection): TCollectionItemClass; extdecl;
begin
  {$define handleExceptionID := 12213}
  handleExceptionBegin
  Result := AObj.ItemClass;
  handleExceptionEnd
end;

// property
function TCollection_ItemsWithIntToCollectionItem(ASet: LongBool; AObj: TCollection; Index: Integer; AValue: TCollectionItem): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 12214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TCollection_Create,
  TCollection_OwnerToPersistent,
  TCollection_AddToCollectionItem,
  TCollection_GetEnumerator,
  TCollection_Insert,
  TCollection_FindItemID,
  TCollection_BeginUpdate,
  TCollection_Clear,
  TCollection_EndUpdate,
  TCollection_Delete,
  TCollection_Exchange,
  TCollection_Move,
  TCollection_Count,
  TCollection_ItemClass,
  TCollection_ItemsWithIntToCollectionItem;