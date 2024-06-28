
//constructor
function ActionListEnumerator_Create(AList: TCustomActionList): TActionListEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TActionListEnumerator.Create(AList);
  handleExceptionEnd
end;

//property
function ActionListEnumerator_Current(AObj: TActionListEnumerator): TContainedAction; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function ActionListEnumerator_MoveNext(AObj: TActionListEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function ActionListEnumerator_Class(): TClass; extdecl;
begin
  Result := TActionListEnumerator;
end;


exports
  ActionListEnumerator_Create,
  ActionListEnumerator_Current,
  ActionListEnumerator_MoveNext,
  ActionListEnumerator_Class;