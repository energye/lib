
//constructor
function AVLTreeNode_Create(): TAVLTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TAVLTreeNode.Create();
  handleExceptionEnd
end;

//function
function AVLTreeNode_Successor(AObj: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Successor'}
  handleExceptionBegin
  Result := AObj.Successor();
  handleExceptionEnd
end;

//function
function AVLTreeNode_Precessor(AObj: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Precessor'}
  handleExceptionBegin
  Result := AObj.Precessor();
  handleExceptionEnd
end;

//function
function AVLTreeNode_TreeDepth(AObj: TAVLTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='TreeDepth'}
  handleExceptionBegin
  Result := AObj.TreeDepth();
  handleExceptionEnd
end;

//function
function AVLTreeNode_GetCount(AObj: TAVLTreeNode): SizeInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetCount'}
  handleExceptionBegin
  Result := AObj.GetCount();
  handleExceptionEnd
end;

//function
function AVLTreeNode_Class(): TClass; extdecl;
begin
  Result := TAVLTreeNode;
end;

//procedure
procedure AVLTreeNode_Clear(AObj: TAVLTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure AVLTreeNode_ConsistencyCheck(AObj: TAVLTreeNode; Tree: TAVLTree); extdecl;
begin
  {$define handleExceptionFuncName :='ConsistencyCheck'}
  handleExceptionBegin
  AObj.ConsistencyCheck(Tree);
  handleExceptionEnd
end;


exports
  AVLTreeNode_Create,
  AVLTreeNode_Successor,
  AVLTreeNode_Precessor,
  AVLTreeNode_TreeDepth,
  AVLTreeNode_GetCount,
  AVLTreeNode_Class,
  AVLTreeNode_Clear,
  AVLTreeNode_ConsistencyCheck;