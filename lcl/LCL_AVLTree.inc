
//constructor
function AVLTree_Create(): TAVLTree; extdecl;
begin
  handleExceptionBegin
  Result := TAVLTree.Create();
  handleExceptionEnd
end;

//property
function AVLTree_Root(AObj: TAVLTree): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Root;
  handleExceptionEnd
end;

//property
function AVLTree_Count(AObj: TAVLTree): SizeInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//function
function AVLTree_NewNode(AObj: TAVLTree): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NewNode();
  handleExceptionEnd
end;

//function
function AVLTree_Add(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(Data);
  handleExceptionEnd
end;

//function
function AVLTree_AddAscendingSequence(AObj: TAVLTree; Data: Pointer; LastAdded: TAVLTreeNode; var Successor: TAVLTreeNode): TAVLTreeNode; extdecl;
var
  RetSuccessor: TAVLTreeNode;
begin
  handleExceptionBegin
  RetSuccessor := Successor;
  Result := AObj.AddAscendingSequence(Data, LastAdded, RetSuccessor);
  Successor := RetSuccessor;
  handleExceptionEnd
end;

//function
function AVLTree_Remove(AObj: TAVLTree; Data: Pointer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Remove(Data);
  handleExceptionEnd
end;

//function
function AVLTree_RemovePointer(AObj: TAVLTree; Data: Pointer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemovePointer(Data);
  handleExceptionEnd
end;

//function
function AVLTree_IsEqual(AObj: TAVLTree; aTree: TAVLTree; CheckDataPointer: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEqual(aTree, CheckDataPointer);
  handleExceptionEnd
end;

//function
function AVLTree_Compare(AObj: TAVLTree; Data1, Data2: Pointer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Compare(Data1, Data2);
  handleExceptionEnd
end;

//function
function AVLTree_Find(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Find(Data);
  handleExceptionEnd
end;

//function
function AVLTree_FindSuccessor(AObj: TAVLTree; ANode: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindSuccessor(ANode);
  handleExceptionEnd
end;

//function
function AVLTree_FindPrecessor(AObj: TAVLTree; ANode: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindPrecessor(ANode);
  handleExceptionEnd
end;

//function
function AVLTree_FindLowest(AObj: TAVLTree): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindLowest();
  handleExceptionEnd
end;

//function
function AVLTree_FindHighest(AObj: TAVLTree): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindHighest();
  handleExceptionEnd
end;

//function
function AVLTree_FindNearest(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNearest(Data);
  handleExceptionEnd
end;

//function
function AVLTree_FindPointer(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindPointer(Data);
  handleExceptionEnd
end;

//function
function AVLTree_FindLeftMost(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindLeftMost(Data);
  handleExceptionEnd
end;

//function
function AVLTree_FindRightMost(AObj: TAVLTree; Data: Pointer): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindRightMost(Data);
  handleExceptionEnd
end;

//function
function AVLTree_FindLeftMostSameKey(AObj: TAVLTree; ANode: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindLeftMostSameKey(ANode);
  handleExceptionEnd
end;

//function
function AVLTree_FindRightMostSameKey(AObj: TAVLTree; ANode: TAVLTreeNode): TAVLTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindRightMostSameKey(ANode);
  handleExceptionEnd
end;

//function
function AVLTree_GetEnumerator(AObj: TAVLTree): TAVLTreeNodeEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function AVLTree_GetEnumeratorHighToLow(AObj: TAVLTree): TAVLTreeNodeEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumeratorHighToLow();
  handleExceptionEnd
end;

//function
function AVLTree_NodeToReportStr(AObj: TAVLTree; aNode: TAVLTreeNode): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.NodeToReportStr(aNode));
  handleExceptionEnd
end;

//function
function AVLTree_ReportAsString(AObj: TAVLTree): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ReportAsString());
  handleExceptionEnd
end;

//function
function AVLTree_Class(): TClass; extdecl;
begin
  Result := TAVLTree;
end;

//procedure
procedure AVLTree_DisposeNode(AObj: TAVLTree; ANode: TAVLTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.DisposeNode(ANode);
  handleExceptionEnd
end;

//procedure
procedure AVLTree_Add1(AObj: TAVLTree; ANode: TAVLTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Add(ANode);
  handleExceptionEnd
end;

//procedure
procedure AVLTree_Delete(AObj: TAVLTree; ANode: TAVLTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(ANode);
  handleExceptionEnd
end;

//procedure
procedure AVLTree_MoveDataLeftMost(AObj: TAVLTree; var ANode: TAVLTreeNode); extdecl;
var
  RetANode: TAVLTreeNode;
begin
  handleExceptionBegin
  RetANode := ANode;
  AObj.MoveDataLeftMost(RetANode);
  ANode := RetANode;
  handleExceptionEnd
end;

//procedure
procedure AVLTree_MoveDataRightMost(AObj: TAVLTree; var ANode: TAVLTreeNode); extdecl;
var
  RetANode: TAVLTreeNode;
begin
  handleExceptionBegin
  RetANode := ANode;
  AObj.MoveDataRightMost(RetANode);
  ANode := RetANode;
  handleExceptionEnd
end;

//procedure
procedure AVLTree_Clear(AObj: TAVLTree); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure AVLTree_FreeAndClear(AObj: TAVLTree); extdecl;
begin
  handleExceptionBegin
  AObj.FreeAndClear();
  handleExceptionEnd
end;

//procedure
procedure AVLTree_FreeAndDelete(AObj: TAVLTree; ANode: TAVLTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.FreeAndDelete(ANode);
  handleExceptionEnd
end;

//procedure
procedure AVLTree_Assign(AObj: TAVLTree; aTree: TAVLTree); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(aTree);
  handleExceptionEnd
end;

//procedure
procedure AVLTree_ConsistencyCheck(AObj: TAVLTree); extdecl;
begin
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure AVLTree_WriteReportToStream(AObj: TAVLTree; s: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.WriteReportToStream(s);
  handleExceptionEnd
end;


exports
  AVLTree_Create,
  AVLTree_Root,
  AVLTree_Count,
  AVLTree_NewNode,
  AVLTree_Add,
  AVLTree_AddAscendingSequence,
  AVLTree_Remove,
  AVLTree_RemovePointer,
  AVLTree_IsEqual,
  AVLTree_Compare,
  AVLTree_Find,
  AVLTree_FindSuccessor,
  AVLTree_FindPrecessor,
  AVLTree_FindLowest,
  AVLTree_FindHighest,
  AVLTree_FindNearest,
  AVLTree_FindPointer,
  AVLTree_FindLeftMost,
  AVLTree_FindRightMost,
  AVLTree_FindLeftMostSameKey,
  AVLTree_FindRightMostSameKey,
  AVLTree_GetEnumerator,
  AVLTree_GetEnumeratorHighToLow,
  AVLTree_NodeToReportStr,
  AVLTree_ReportAsString,
  AVLTree_Class,
  AVLTree_DisposeNode,
  AVLTree_Add1,
  AVLTree_Delete,
  AVLTree_MoveDataLeftMost,
  AVLTree_MoveDataRightMost,
  AVLTree_Clear,
  AVLTree_FreeAndClear,
  AVLTree_FreeAndDelete,
  AVLTree_Assign,
  AVLTree_ConsistencyCheck,
  AVLTree_WriteReportToStream;