
//constructor
function CollectionEnumerator_Create(ACollection: TCollection): TCollectionEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCollectionEnumerator.Create(ACollection);
  handleExceptionEnd
end;

//property
function CollectionEnumerator_Current(AObj: TCollectionEnumerator): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function CollectionEnumerator_GetCurrent(AObj: TCollectionEnumerator): TCollectionItem; extdecl;
begin
  {$define handleExceptionFuncName :='GetCurrent'}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

//function
function CollectionEnumerator_MoveNext(AObj: TCollectionEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function CollectionEnumerator_Class(): TClass; extdecl;
begin
  Result := TCollectionEnumerator;
end;


exports
  CollectionEnumerator_Create,
  CollectionEnumerator_Current,
  CollectionEnumerator_GetCurrent,
  CollectionEnumerator_MoveNext,
  CollectionEnumerator_Class;