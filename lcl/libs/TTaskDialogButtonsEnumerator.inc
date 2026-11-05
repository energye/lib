// constructor
function TTaskDialogButtonsEnumerator_Create(ACollection: TTaskDialogButtons): TTaskDialogButtonsEnumerator; extdecl;
begin
  {$define handleExceptionID := 26900}
  handleExceptionBegin
  Result := TTaskDialogButtonsEnumerator.Create(ACollection);
  handleExceptionEnd
end;

// function
function TTaskDialogButtonsEnumerator_GetCurrent(AObj: TTaskDialogButtonsEnumerator): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 26901}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

// function
function TTaskDialogButtonsEnumerator_MoveNext(AObj: TTaskDialogButtonsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 26902}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TTaskDialogButtonsEnumerator_Current(AObj: TTaskDialogButtonsEnumerator): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 26903}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TTaskDialogButtonsEnumerator_Create,
  TTaskDialogButtonsEnumerator_GetCurrent,
  TTaskDialogButtonsEnumerator_MoveNext,
  TTaskDialogButtonsEnumerator_Current;