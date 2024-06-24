
//constructor
function ComponentEnumerator_Create(AComponent: TComponent): TComponentEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := TComponentEnumerator.Create(AComponent);
  handleExceptionEnd
end;

//property
function ComponentEnumerator_Current(AObj: TComponentEnumerator): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function ComponentEnumerator_GetCurrent(AObj: TComponentEnumerator): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCurrent();
  handleExceptionEnd
end;

//function
function ComponentEnumerator_MoveNext(AObj: TComponentEnumerator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function ComponentEnumerator_Class(): TClass; extdecl;
begin
  Result := TComponentEnumerator;
end;


exports
  ComponentEnumerator_Create,
  ComponentEnumerator_Current,
  ComponentEnumerator_GetCurrent,
  ComponentEnumerator_MoveNext,
  ComponentEnumerator_Class;