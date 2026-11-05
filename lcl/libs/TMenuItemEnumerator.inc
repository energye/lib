// constructor
function TMenuItemEnumerator_Create(AMenuItem: TMenuItem): TMenuItemEnumerator; extdecl;
begin
  {$define handleExceptionID := 27900}
  handleExceptionBegin
  Result := TMenuItemEnumerator.Create(AMenuItem);
  handleExceptionEnd
end;

// function
function TMenuItemEnumerator_MoveNext(AObj: TMenuItemEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27901}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TMenuItemEnumerator_Current(AObj: TMenuItemEnumerator): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 27902}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TMenuItemEnumerator_Create,
  TMenuItemEnumerator_MoveNext,
  TMenuItemEnumerator_Current;