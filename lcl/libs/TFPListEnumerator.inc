// constructor
function TFPListEnumerator_Create(AList: TFPList): TFPListEnumerator; extdecl;
begin
  {$define handleExceptionID := 28500}
  handleExceptionBegin
  Result := TFPListEnumerator.Create(AList);
  handleExceptionEnd
end;

// function
function TFPListEnumerator_GetCurrent(AObj: TFPListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionID := 28501}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

// function
function TFPListEnumerator_MoveNext(AObj: TFPListEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 28502}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TFPListEnumerator_Current(AObj: TFPListEnumerator): Pointer; extdecl;
begin
  {$define handleExceptionID := 28503}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TFPListEnumerator_Create,
  TFPListEnumerator_GetCurrent,
  TFPListEnumerator_MoveNext,
  TFPListEnumerator_Current;