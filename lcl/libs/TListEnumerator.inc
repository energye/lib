// constructor
function TListEnumerator_Create(AList: TList): TListEnumerator; extdecl;
begin
  {$define handleExceptionID := 28400}
  handleExceptionBegin
  Result := TListEnumerator.Create(AList);
  handleExceptionEnd
end;

// function
function TListEnumerator_GetCurrent(AObj: TListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionID := 28401}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

// function
function TListEnumerator_MoveNext(AObj: TListEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 28402}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TListEnumerator_Current(AObj: TListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionID := 28403}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TListEnumerator_Create,
  TListEnumerator_GetCurrent,
  TListEnumerator_MoveNext,
  TListEnumerator_Current;