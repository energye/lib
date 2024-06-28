
//constructor
function WinControlEnumerator_Create(Parent: TWinControl; aLowToHigh: LongBool): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWinControlEnumerator.Create(Parent, aLowToHigh);
  handleExceptionEnd
end;

//property
function WinControlEnumerator_Current(AObj: TWinControlEnumerator): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function WinControlEnumerator_GetEnumerator(AObj: TWinControlEnumerator): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function WinControlEnumerator_MoveNext(AObj: TWinControlEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function WinControlEnumerator_Class(): TClass; extdecl;
begin
  Result := TWinControlEnumerator;
end;


exports
  WinControlEnumerator_Create,
  WinControlEnumerator_Current,
  WinControlEnumerator_GetEnumerator,
  WinControlEnumerator_MoveNext,
  WinControlEnumerator_Class;