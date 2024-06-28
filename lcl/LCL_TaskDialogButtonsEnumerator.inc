
//constructor
function TaskDialogButtonsEnumerator_Create(ACollection: TTaskDialogButtons): TTaskDialogButtonsEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTaskDialogButtonsEnumerator.Create(ACollection);
  handleExceptionEnd
end;

//property
function TaskDialogButtonsEnumerator_Current(AObj: TTaskDialogButtonsEnumerator): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function TaskDialogButtonsEnumerator_GetCurrent(AObj: TTaskDialogButtonsEnumerator): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionFuncName :='GetCurrent'}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

//function
function TaskDialogButtonsEnumerator_MoveNext(AObj: TTaskDialogButtonsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function TaskDialogButtonsEnumerator_Class(): TClass; extdecl;
begin
  Result := TTaskDialogButtonsEnumerator;
end;


exports
  TaskDialogButtonsEnumerator_Create,
  TaskDialogButtonsEnumerator_Current,
  TaskDialogButtonsEnumerator_GetCurrent,
  TaskDialogButtonsEnumerator_MoveNext,
  TaskDialogButtonsEnumerator_Class;