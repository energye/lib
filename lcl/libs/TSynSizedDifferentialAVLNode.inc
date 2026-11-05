// constructor manually create
function TSynSizedDifferentialAVLNode_Create(): TSynSizedDifferentialAVLNode; extdecl;
begin
  {$define handleExceptionID := 38300}
  handleExceptionBegin
  Result := TSynSizedDifferentialAVLNode.Create();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_TreeDepth(AObj: TSynSizedDifferentialAVLNode): integer; extdecl;
begin
  {$define handleExceptionID := 38301}
  handleExceptionBegin
  Result := AObj.TreeDepth();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_ReplaceChildWithSynSizedDifferentialAVLNodeX2(AObj: TSynSizedDifferentialAVLNode; OldNode: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode): TReplacedChildSite; extdecl;
begin
  {$define handleExceptionID := 38302}
  handleExceptionBegin
  Result := AObj.ReplaceChild(OldNode, ANode);
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_ReplaceChildWithSSDAVLNodeX2Int(AObj: TSynSizedDifferentialAVLNode; OldNode: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode; anAdjustChildPosOffset: Integer): TReplacedChildSite; extdecl;
begin
  {$define handleExceptionID := 38303}
  handleExceptionBegin
  Result := AObj.ReplaceChild(OldNode, ANode, anAdjustChildPosOffset);
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_PrecessorToSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLNode): TSynSizedDifferentialAVLNode; extdecl;
begin
  {$define handleExceptionID := 38304}
  handleExceptionBegin
  Result := AObj.Precessor();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_SuccessorToSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLNode): TSynSizedDifferentialAVLNode; extdecl;
begin
  {$define handleExceptionID := 38305}
  handleExceptionBegin
  Result := AObj.Successor();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_PrecessorWithIntX2(AObj: TSynSizedDifferentialAVLNode; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 38306}
  handleExceptionBegin
  OutaStartPosition := aStartPosition;
  OutaSizesBeforeSum := aSizesBeforeSum;
  Result := AObj.Precessor(OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_SuccessorWithIntX2(AObj: TSynSizedDifferentialAVLNode; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 38307}
  handleExceptionBegin
  OutaStartPosition := aStartPosition;
  OutaSizesBeforeSum := aSizesBeforeSum;
  Result := AObj.Successor(OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_GetSizesBeforeSum(AObj: TSynSizedDifferentialAVLNode): Integer; extdecl;
begin
  {$define handleExceptionID := 38308}
  handleExceptionBegin
  Result := AObj.GetSizesBeforeSum();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLNode_GetPosition(AObj: TSynSizedDifferentialAVLNode): Integer; extdecl;
begin
  {$define handleExceptionID := 38309}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_SetLeftChildWithSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode); extdecl;
begin
  {$define handleExceptionID := 38310}
  handleExceptionBegin
  AObj.SetLeftChild(ANode);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_SetLeftChildWithSynSizedDifferentialAVLNodeInt(AObj: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode; anAdjustChildPosOffset: Integer); extdecl;
begin
  {$define handleExceptionID := 38311}
  handleExceptionBegin
  AObj.SetLeftChild(ANode, anAdjustChildPosOffset);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_SetLeftChildWithSSDAVLNodeIntX2(AObj: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode; anAdjustChildPosOffset: Integer; aLeftSizeSum: Integer); extdecl;
begin
  {$define handleExceptionID := 38312}
  handleExceptionBegin
  AObj.SetLeftChild(ANode, anAdjustChildPosOffset, aLeftSizeSum);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_SetRightChildWithSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode); extdecl;
begin
  {$define handleExceptionID := 38313}
  handleExceptionBegin
  AObj.SetRightChild(ANode);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_SetRightChildWithSynSizedDifferentialAVLNodeInt(AObj: TSynSizedDifferentialAVLNode; ANode: TSynSizedDifferentialAVLNode; anAdjustChildPosOffset: Integer); extdecl;
begin
  {$define handleExceptionID := 38314}
  handleExceptionBegin
  AObj.SetRightChild(ANode, anAdjustChildPosOffset);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_AdjustLeftCount(AObj: TSynSizedDifferentialAVLNode; AValue: Integer); extdecl;
begin
  {$define handleExceptionID := 38315}
  handleExceptionBegin
  AObj.AdjustLeftCount(AValue);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_AdjustParentLeftCount(AObj: TSynSizedDifferentialAVLNode; AValue: Integer); extdecl;
begin
  {$define handleExceptionID := 38316}
  handleExceptionBegin
  AObj.AdjustParentLeftCount(AValue);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLNode_AdjustPosition(AObj: TSynSizedDifferentialAVLNode; AValue: Integer); extdecl;
begin
  {$define handleExceptionID := 38317}
  handleExceptionBegin
  AObj.AdjustPosition(AValue);
  handleExceptionEnd
end;

exports
  TSynSizedDifferentialAVLNode_Create,
  TSynSizedDifferentialAVLNode_TreeDepth,
  TSynSizedDifferentialAVLNode_ReplaceChildWithSynSizedDifferentialAVLNodeX2,
  TSynSizedDifferentialAVLNode_ReplaceChildWithSSDAVLNodeX2Int,
  TSynSizedDifferentialAVLNode_PrecessorToSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLNode_SuccessorToSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLNode_PrecessorWithIntX2,
  TSynSizedDifferentialAVLNode_SuccessorWithIntX2,
  TSynSizedDifferentialAVLNode_GetSizesBeforeSum,
  TSynSizedDifferentialAVLNode_GetPosition,
  TSynSizedDifferentialAVLNode_SetLeftChildWithSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLNode_SetLeftChildWithSynSizedDifferentialAVLNodeInt,
  TSynSizedDifferentialAVLNode_SetLeftChildWithSSDAVLNodeIntX2,
  TSynSizedDifferentialAVLNode_SetRightChildWithSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLNode_SetRightChildWithSynSizedDifferentialAVLNodeInt,
  TSynSizedDifferentialAVLNode_AdjustLeftCount,
  TSynSizedDifferentialAVLNode_AdjustParentLeftCount,
  TSynSizedDifferentialAVLNode_AdjustPosition;