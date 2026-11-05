// constructor
function TComponentEnumerator_Create(AComponent: TComponent): TComponentEnumerator; extdecl;
begin
  {$define handleExceptionID := 26500}
  handleExceptionBegin
  Result := TComponentEnumerator.Create(AComponent);
  handleExceptionEnd
end;

// function
function TComponentEnumerator_GetCurrent(AObj: TComponentEnumerator): TComponent; extdecl;
begin
  {$define handleExceptionID := 26501}
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

// function
function TComponentEnumerator_MoveNext(AObj: TComponentEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 26502}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TComponentEnumerator_Current(AObj: TComponentEnumerator): TComponent; extdecl;
begin
  {$define handleExceptionID := 26503}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TComponentEnumerator_Create,
  TComponentEnumerator_GetCurrent,
  TComponentEnumerator_MoveNext,
  TComponentEnumerator_Current;