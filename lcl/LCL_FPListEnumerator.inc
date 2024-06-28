
//constructor
function FPListEnumerator_Create(AList: TFPList): TFPListEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPListEnumerator.Create(AList);
  handleExceptionEnd
end;

//property
function FPListEnumerator_Current(AObj: TFPListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function FPListEnumerator_GetCurrent(AObj: TFPListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='GetCurrent'}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

//function
function FPListEnumerator_MoveNext(AObj: TFPListEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function FPListEnumerator_Class(): TClass; extdecl;
begin
  Result := TFPListEnumerator;
end;


exports
  FPListEnumerator_Create,
  FPListEnumerator_Current,
  FPListEnumerator_GetCurrent,
  FPListEnumerator_MoveNext,
  FPListEnumerator_Class;