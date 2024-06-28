
//constructor
function ToolBarEnumerator_Create(AToolBar: TToolBar): TToolBarEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TToolBarEnumerator.Create(AToolBar);
  handleExceptionEnd
end;

//property
function ToolBarEnumerator_Current(AObj: TToolBarEnumerator): TToolButton; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function ToolBarEnumerator_MoveNext(AObj: TToolBarEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function ToolBarEnumerator_Class(): TClass; extdecl;
begin
  Result := TToolBarEnumerator;
end;


exports
  ToolBarEnumerator_Create,
  ToolBarEnumerator_Current,
  ToolBarEnumerator_MoveNext,
  ToolBarEnumerator_Class;