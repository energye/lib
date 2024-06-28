
//constructor
function TreeNodesEnumerator_Create(ANodes: TTreeNodes): TTreeNodesEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTreeNodesEnumerator.Create(ANodes);
  handleExceptionEnd
end;

//property
function TreeNodesEnumerator_Current(AObj: TTreeNodesEnumerator): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function TreeNodesEnumerator_MoveNext(AObj: TTreeNodesEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function TreeNodesEnumerator_Class(): TClass; extdecl;
begin
  Result := TTreeNodesEnumerator;
end;


exports
  TreeNodesEnumerator_Create,
  TreeNodesEnumerator_Current,
  TreeNodesEnumerator_MoveNext,
  TreeNodesEnumerator_Class;