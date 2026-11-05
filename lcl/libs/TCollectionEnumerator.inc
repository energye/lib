// constructor
function TCollectionEnumerator_Create(ACollection: TCollection): TCollectionEnumerator; extdecl;
begin
  {$define handleExceptionID := 27000}
  handleExceptionBegin
  Result := TCollectionEnumerator.Create(ACollection);
  handleExceptionEnd
end;

// function
function TCollectionEnumerator_GetCurrent(AObj: TCollectionEnumerator): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 27001}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

// function
function TCollectionEnumerator_MoveNext(AObj: TCollectionEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27002}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TCollectionEnumerator_Current(AObj: TCollectionEnumerator): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 27003}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TCollectionEnumerator_Create,
  TCollectionEnumerator_GetCurrent,
  TCollectionEnumerator_MoveNext,
  TCollectionEnumerator_Current;