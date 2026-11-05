// constructor
function TActionListEnumerator_Create(AList: TCustomActionList): TActionListEnumerator; extdecl;
begin
  {$define handleExceptionID := 26700}
  handleExceptionBegin
  Result := TActionListEnumerator.Create(AList);
  handleExceptionEnd
end;

// function
function TActionListEnumerator_MoveNext(AObj: TActionListEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 26701}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TActionListEnumerator_Current(AObj: TActionListEnumerator): TContainedAction; extdecl;
begin
  {$define handleExceptionID := 26702}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TActionListEnumerator_Create,
  TActionListEnumerator_MoveNext,
  TActionListEnumerator_Current;