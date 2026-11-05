// constructor
function TStringsEnumerator_Create(AStrings: TStrings): TStringsEnumerator; extdecl;
begin
  {$define handleExceptionID := 26800}
  handleExceptionBegin
  Result := TStringsEnumerator.Create(AStrings);
  handleExceptionEnd
end;

// function
procedure TStringsEnumerator_GetCurrent(AObj: TStringsEnumerator;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26801}
  handleExceptionBegin
  StringBufferCreate(AObj.GetCurrent(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TStringsEnumerator_MoveNext(AObj: TStringsEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 26802}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
procedure TStringsEnumerator_Current(AObj: TStringsEnumerator; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26803}
  handleExceptionBegin
  StringBufferCreate(AObj.Current, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TStringsEnumerator_Create,
  TStringsEnumerator_GetCurrent,
  TStringsEnumerator_MoveNext,
  TStringsEnumerator_Current;