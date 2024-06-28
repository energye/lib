
//constructor
function StringsEnumerator_Create(AStrings: TStrings): TStringsEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TStringsEnumerator.Create(AStrings);
  handleExceptionEnd
end;

//property
function StringsEnumerator_Current(AObj: TStringsEnumerator): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := ToPChar(AObj.Current);
  handleExceptionEnd
end;

//function
function StringsEnumerator_GetCurrent(AObj: TStringsEnumerator): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetCurrent'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetCurrent());
  handleExceptionEnd
end;

//function
function StringsEnumerator_MoveNext(AObj: TStringsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function StringsEnumerator_Class(): TClass; extdecl;
begin
  Result := TStringsEnumerator;
end;


exports
  StringsEnumerator_Create,
  StringsEnumerator_Current,
  StringsEnumerator_GetCurrent,
  StringsEnumerator_MoveNext,
  StringsEnumerator_Class;