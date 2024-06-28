
//constructor
function ListItemsEnumerator_Create(AItems: TListItems): TListItemsEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListItemsEnumerator.Create(AItems);
  handleExceptionEnd
end;

//property
function ListItemsEnumerator_Current(AObj: TListItemsEnumerator): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function ListItemsEnumerator_MoveNext(AObj: TListItemsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function ListItemsEnumerator_Class(): TClass; extdecl;
begin
  Result := TListItemsEnumerator;
end;


exports
  ListItemsEnumerator_Create,
  ListItemsEnumerator_Current,
  ListItemsEnumerator_MoveNext,
  ListItemsEnumerator_Class;