// constructor
function TTreeNodesEnumerator_Create(ANodes: TTreeNodes): TTreeNodesEnumerator; extdecl;
begin
  {$define handleExceptionID := 27200}
  handleExceptionBegin
  Result := TTreeNodesEnumerator.Create(ANodes);
  handleExceptionEnd
end;

// function
function TTreeNodesEnumerator_MoveNext(AObj: TTreeNodesEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 27201}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TTreeNodesEnumerator_Current(AObj: TTreeNodesEnumerator): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 27202}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TTreeNodesEnumerator_Create,
  TTreeNodesEnumerator_MoveNext,
  TTreeNodesEnumerator_Current;