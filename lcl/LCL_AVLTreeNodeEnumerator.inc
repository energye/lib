
//constructor
function AVLTreeNodeEnumerator_Create(Tree: TAVLTree; aLowToHigh: LongBool): TAVLTreeNodeEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := TAVLTreeNodeEnumerator.Create(Tree, aLowToHigh);
  handleExceptionEnd
end;

//property
function AVLTreeNodeEnumerator_Current(AObj: TAVLTreeNodeEnumerator): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//property
function AVLTreeNodeEnumerator_LowToHigh(AObj: TAVLTreeNodeEnumerator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LowToHigh;
  handleExceptionEnd
end;

//function
function AVLTreeNodeEnumerator_GetEnumerator(AObj: TAVLTreeNodeEnumerator): TAVLTreeNodeEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function AVLTreeNodeEnumerator_MoveNext(AObj: TAVLTreeNodeEnumerator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function AVLTreeNodeEnumerator_Class(): TClass; extdecl;
begin
  Result := TAVLTreeNodeEnumerator;
end;


exports
  AVLTreeNodeEnumerator_Create,
  AVLTreeNodeEnumerator_Current,
  AVLTreeNodeEnumerator_LowToHigh,
  AVLTreeNodeEnumerator_GetEnumerator,
  AVLTreeNodeEnumerator_MoveNext,
  AVLTreeNodeEnumerator_Class;