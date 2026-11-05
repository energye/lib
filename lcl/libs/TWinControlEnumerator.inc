// constructor
function TWinControlEnumerator_Create(Parent: TWinControl; aLowToHigh: LongBool): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionID := 27300}
  handleExceptionBegin
  Result := TWinControlEnumerator.Create(Parent, aLowToHigh);
  handleExceptionEnd
end;

// function
function TWinControlEnumerator_GetEnumerator(AObj: TWinControlEnumerator): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionID := 27301}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TWinControlEnumerator_MoveNext(AObj: TWinControlEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27302}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TWinControlEnumerator_Current(AObj: TWinControlEnumerator): TControl; extdecl;
begin
  {$define handleExceptionID := 27303}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TWinControlEnumerator_Create,
  TWinControlEnumerator_GetEnumerator,
  TWinControlEnumerator_MoveNext,
  TWinControlEnumerator_Current;