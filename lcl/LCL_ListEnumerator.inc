
//constructor
function ListEnumerator_Create(AList: TList): TListEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := TListEnumerator.Create(AList);
  handleExceptionEnd
end;

//property
function ListEnumerator_Current(AObj: TListEnumerator): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function ListEnumerator_GetCurrent(AObj: TListEnumerator): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

//function
function ListEnumerator_MoveNext(AObj: TListEnumerator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function ListEnumerator_Class(): TClass; extdecl;
begin
  Result := TListEnumerator;
end;


exports
  ListEnumerator_Create,
  ListEnumerator_Current,
  ListEnumerator_GetCurrent,
  ListEnumerator_MoveNext,
  ListEnumerator_Class;