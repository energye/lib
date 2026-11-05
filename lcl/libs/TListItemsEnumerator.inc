// constructor
function TListItemsEnumerator_Create(AItems: TListItems): TListItemsEnumerator; extdecl;
begin
  {$define handleExceptionID := 27400}
  handleExceptionBegin
  Result := TListItemsEnumerator.Create(AItems);
  handleExceptionEnd
end;

// function
function TListItemsEnumerator_MoveNext(AObj: TListItemsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27401}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TListItemsEnumerator_Current(AObj: TListItemsEnumerator): TListItem; extdecl;
begin
  {$define handleExceptionID := 27402}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TListItemsEnumerator_Create,
  TListItemsEnumerator_MoveNext,
  TListItemsEnumerator_Current;