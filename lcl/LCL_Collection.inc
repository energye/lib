
//constructor
function Collection_Create(AItemClass: TCollectionItemClass): TCollection; extdecl;
begin
  handleExceptionBegin
  Result := TCollection.Create(AItemClass);
  handleExceptionEnd
end;

//property
function Collection_Count(AObj: TCollection): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function Collection_ItemClass(AObj: TCollection): TCollectionItemClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemClass;
  handleExceptionEnd
end;

//property
function Collection_Items(AIsSet: LongBool; AObj: TCollection; Index: Integer; AValue: TCollectionItem): TCollectionItem; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Owner();
  handleExceptionEnd
end;

//function
function Collection_Add(AObj: TCollection): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function Collection_GetEnumerator(AObj: TCollection): TCollectionEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function Collection_Insert(AObj: TCollection; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Insert(Index);
  handleExceptionEnd
end;

//function
function Collection_FindItemID(AObj: TCollection; ID: Integer): TCollectionItem; extdecl;
begin
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
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure Collection_Clear(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Collection_EndUpdate(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure Collection_Delete(AObj: TCollection; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure Collection_Exchange(AObj: TCollection; const Index1, index2: integer); extdecl;
begin
  handleExceptionBegin
  AObj.Exchange(Index1, index2);
  handleExceptionEnd
end;

//procedure
procedure Collection_Move(AObj: TCollection; const Index1, index2: integer); extdecl;
begin
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