
//constructor
function Collection_Create(AItemClass: TCollectionItemClass): TCollection; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCollection.Create(AItemClass);
  handleExceptionEnd
end;

//property
function Collection_Count(AObj: TCollection): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function Collection_ItemClass(AObj: TCollection): TCollectionItemClass; extdecl;
begin
  {$define handleExceptionFuncName :='ItemClass'}
  handleExceptionBegin
  Result := AObj.ItemClass;
  handleExceptionEnd
end;

//property
function Collection_Items(AIsSet: LongBool; AObj: TCollection; Index: Integer; AValue: TCollectionItem): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//function
function Collection_Owner(AObj: TCollection): TPersistent; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner();
  handleExceptionEnd
end;

//function
function Collection_Add(AObj: TCollection): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='Add'}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function Collection_GetEnumerator(AObj: TCollection): TCollectionEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function Collection_Insert(AObj: TCollection; Index: Integer): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='Insert'}
  handleExceptionBegin
  Result := AObj.Insert(Index);
  handleExceptionEnd
end;

//function
function Collection_FindItemID(AObj: TCollection; ID: Integer): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='FindItemID'}
  handleExceptionBegin
  Result := AObj.FindItemID(ID);
  handleExceptionEnd
end;

//function
function Collection_Class(): TClass; extdecl;
begin
  Result := TCollection;
end;

//procedure
procedure Collection_BeginUpdate(AObj: TCollection); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure Collection_Clear(AObj: TCollection); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Collection_EndUpdate(AObj: TCollection); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure Collection_Delete(AObj: TCollection; Index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='Delete'}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure Collection_Exchange(AObj: TCollection; const Index1, index2: integer); extdecl;
begin
  {$define handleExceptionFuncName :='Exchange'}
  handleExceptionBegin
  AObj.Exchange(Index1, index2);
  handleExceptionEnd
end;

//procedure
procedure Collection_Move(AObj: TCollection; const Index1, index2: integer); extdecl;
begin
  {$define handleExceptionFuncName :='Move'}
  handleExceptionBegin
  AObj.Move(Index1, index2);
  handleExceptionEnd
end;

//procedure
procedure Collection_Sort(AObj: TCollection; AEventData: Pointer); extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.CollectionSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.CollectionSortEventPtr := AEventData;
      AObj.Sort(TSortEventMethod.OnTCollectionSortCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;


exports
  Collection_Create,
  Collection_Count,
  Collection_ItemClass,
  Collection_Items,
  Collection_Owner,
  Collection_Add,
  Collection_GetEnumerator,
  Collection_Insert,
  Collection_FindItemID,
  Collection_Class,
  Collection_BeginUpdate,
  Collection_Clear,
  Collection_EndUpdate,
  Collection_Delete,
  Collection_Exchange,
  Collection_Move,
  Collection_Sort;