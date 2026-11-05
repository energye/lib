// constructor
function TToolBarEnumerator_Create(AToolBar: TToolBar): TToolBarEnumerator; extdecl;
begin
  {$define handleExceptionID := 27100}
  handleExceptionBegin
  Result := TToolBarEnumerator.Create(AToolBar);
  handleExceptionEnd
end;

// function
function TToolBarEnumerator_MoveNext(AObj: TToolBarEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27101}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TToolBarEnumerator_Current(AObj: TToolBarEnumerator): TToolButton; extdecl;
begin
  {$define handleExceptionID := 27102}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TToolBarEnumerator_Create,
  TToolBarEnumerator_MoveNext,
  TToolBarEnumerator_Current;