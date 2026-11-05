// constructor
function TBaseVirtualTree_Create(AOwner: TComponent): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionID := 28700}
  handleExceptionBegin
  Result := TBaseVirtualTree.Create(AOwner);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_AbsoluteIndex(AObj: TBaseVirtualTree; Node: PVirtualNode): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28701}
  handleExceptionBegin
  Result := AObj.AbsoluteIndex(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_AddChild(AObj: TBaseVirtualTree; Parent: PVirtualNode; UserData: Pointer): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28702}
  handleExceptionBegin
  Result := AObj.AddChild(Parent, UserData);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CancelEditNode(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28703}
  handleExceptionBegin
  Result := AObj.CancelEditNode();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CanEdit(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 28704}
  handleExceptionBegin
  Result := AObj.CanEdit(Node, Column);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CopyToWithPVNodeBVTreeVTNAModeBool(AObj: TBaseVirtualTree; Source: PVirtualNode; Tree: TBaseVirtualTree; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28705}
  handleExceptionBegin
  Result := AObj.CopyTo(Source, Tree, Mode, ChildrenOnly);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CopyToWithPVNodeX2VTNAModeBool(AObj: TBaseVirtualTree; Source: PVirtualNode; Target: PVirtualNode; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28706}
  handleExceptionBegin
  Result := AObj.CopyTo(Source, Target, Mode, ChildrenOnly);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_DraggingToBool(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28707}
  handleExceptionBegin
  Result := AObj.Dragging();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_EditNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 28708}
  handleExceptionBegin
  Result := AObj.EditNode(Node, Column);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_EndEditNode(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28709}
  handleExceptionBegin
  Result := AObj.EndEditNode();
  handleExceptionEnd
end;

// function
procedure TBaseVirtualTree_GetDisplayRect(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: Integer; TextOnly: LongBool; Unclipped: LongBool; ApplyCellContentMargin: LongBool; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 28710}
  handleExceptionBegin
  Result := AObj.GetDisplayRect(Node, Column, TextOnly, Unclipped, ApplyCellContentMargin);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetEffectivelyFiltered(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28711}
  handleExceptionBegin
  Result := AObj.GetEffectivelyFiltered(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetEffectivelyVisible(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28712}
  handleExceptionBegin
  Result := AObj.GetEffectivelyVisible(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirst(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28713}
  handleExceptionBegin
  Result := AObj.GetFirst(ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstChecked(AObj: TBaseVirtualTree; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28714}
  handleExceptionBegin
  Result := AObj.GetFirstChecked(State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstChild(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28715}
  handleExceptionBegin
  Result := AObj.GetFirstChild(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28716}
  handleExceptionBegin
  Result := AObj.GetFirstChildNoInit(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstCutCopy(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28717}
  handleExceptionBegin
  Result := AObj.GetFirstCutCopy(ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstInitialized(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28718}
  handleExceptionBegin
  Result := AObj.GetFirstInitialized(ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstLeaf(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28719}
  handleExceptionBegin
  Result := AObj.GetFirstLeaf();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstLevel(AObj: TBaseVirtualTree; NodeLevel: Cardinal): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28720}
  handleExceptionBegin
  Result := AObj.GetFirstLevel(NodeLevel);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstNoInit(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28721}
  handleExceptionBegin
  Result := AObj.GetFirstNoInit(ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstSelected(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28722}
  handleExceptionBegin
  Result := AObj.GetFirstSelected(ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28723}
  handleExceptionBegin
  Result := AObj.GetFirstVisible(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstVisibleChild(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28724}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChild(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstVisibleChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28725}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChildNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetFirstVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28726}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleNoInit(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLast(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28727}
  handleExceptionBegin
  Result := AObj.GetLast(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28728}
  handleExceptionBegin
  Result := AObj.GetLastInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28729}
  handleExceptionBegin
  Result := AObj.GetLastNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastChild(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28730}
  handleExceptionBegin
  Result := AObj.GetLastChild(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28731}
  handleExceptionBegin
  Result := AObj.GetLastChildNoInit(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28732}
  handleExceptionBegin
  Result := AObj.GetLastVisible(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastVisibleChild(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28733}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChild(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastVisibleChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28734}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChildNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetLastVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28735}
  handleExceptionBegin
  Result := AObj.GetLastVisibleNoInit(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetMaxColumnWidth(AObj: TBaseVirtualTree; Column: Integer; UseSmartColumnWidth: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 28736}
  handleExceptionBegin
  Result := AObj.GetMaxColumnWidth(Column, UseSmartColumnWidth);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNext(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28737}
  handleExceptionBegin
  Result := AObj.GetNext(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextCheckedWithPVNodeCStateBool(AObj: TBaseVirtualTree; Node: PVirtualNode; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28738}
  handleExceptionBegin
  Result := AObj.GetNextChecked(Node, State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextCheckedWithPVirtualNodeBool(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28739}
  handleExceptionBegin
  Result := AObj.GetNextChecked(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextCutCopy(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28740}
  handleExceptionBegin
  Result := AObj.GetNextCutCopy(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28741}
  handleExceptionBegin
  Result := AObj.GetNextInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextLeaf(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28742}
  handleExceptionBegin
  Result := AObj.GetNextLeaf(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextLevel(AObj: TBaseVirtualTree; Node: PVirtualNode; NodeLevel: Cardinal): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28743}
  handleExceptionBegin
  Result := AObj.GetNextLevel(Node, NodeLevel);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28744}
  handleExceptionBegin
  Result := AObj.GetNextNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextSelected(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28745}
  handleExceptionBegin
  Result := AObj.GetNextSelected(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextSibling(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28746}
  handleExceptionBegin
  Result := AObj.GetNextSibling(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28747}
  handleExceptionBegin
  Result := AObj.GetNextSiblingNoInit(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28748}
  handleExceptionBegin
  Result := AObj.GetNextVisible(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28749}
  handleExceptionBegin
  Result := AObj.GetNextVisibleNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextVisibleSibling(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28750}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSibling(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNextVisibleSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28751}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSiblingNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNodeAtWithPoint(AObj: TBaseVirtualTree; var P: TPoint): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28752}
  handleExceptionBegin
  Result := AObj.GetNodeAt(P);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNodeAtWithIntX2(AObj: TBaseVirtualTree; X: Integer; Y: Integer): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28753}
  handleExceptionBegin
  Result := AObj.GetNodeAt(X, Y);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNodeAtWithIntX3Bool(AObj: TBaseVirtualTree; X: Integer; Y: Integer; Relative: LongBool; var NodeTop: Integer): PVirtualNode; extdecl;
var
  OutNodeTop: Integer;
begin
  {$define handleExceptionID := 28754}
  handleExceptionBegin
  OutNodeTop := NodeTop;
  Result := AObj.GetNodeAt(X, Y, Relative, OutNodeTop);
  NodeTop := OutNodeTop;
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNodeData(AObj: TBaseVirtualTree; Node: PVirtualNode): Pointer; extdecl;
begin
  {$define handleExceptionID := 28755}
  handleExceptionBegin
  Result := AObj.GetNodeData(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetNodeLevel(AObj: TBaseVirtualTree; Node: PVirtualNode): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28756}
  handleExceptionBegin
  Result := AObj.GetNodeLevel(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPrevious(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28757}
  handleExceptionBegin
  Result := AObj.GetPrevious(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousChecked(AObj: TBaseVirtualTree; Node: PVirtualNode; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28758}
  handleExceptionBegin
  Result := AObj.GetPreviousChecked(Node, State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousCutCopy(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28759}
  handleExceptionBegin
  Result := AObj.GetPreviousCutCopy(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28760}
  handleExceptionBegin
  Result := AObj.GetPreviousInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousLeaf(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28761}
  handleExceptionBegin
  Result := AObj.GetPreviousLeaf(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousLevel(AObj: TBaseVirtualTree; Node: PVirtualNode; NodeLevel: Cardinal): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28762}
  handleExceptionBegin
  Result := AObj.GetPreviousLevel(Node, NodeLevel);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28763}
  handleExceptionBegin
  Result := AObj.GetPreviousNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousSelected(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28764}
  handleExceptionBegin
  Result := AObj.GetPreviousSelected(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousSibling(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28765}
  handleExceptionBegin
  Result := AObj.GetPreviousSibling(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28766}
  handleExceptionBegin
  Result := AObj.GetPreviousSiblingNoInit(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28767}
  handleExceptionBegin
  Result := AObj.GetPreviousVisible(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28768}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousVisibleSibling(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28769}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleSibling(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetPreviousVisibleSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28770}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleSiblingNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetSortedCutCopySet(AObj: TBaseVirtualTree; Resolve: LongBool): TNodeArray; extdecl;
begin
  {$define handleExceptionID := 28771}
  handleExceptionBegin
  Result := AObj.GetSortedCutCopySet(Resolve);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetSortedSelection(AObj: TBaseVirtualTree; Resolve: LongBool): TNodeArray; extdecl;
begin
  {$define handleExceptionID := 28772}
  handleExceptionBegin
  Result := AObj.GetSortedSelection(Resolve);
  handleExceptionEnd
end;

// function
procedure TBaseVirtualTree_GetTreeRect(AObj: TBaseVirtualTree; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 28773}
  handleExceptionBegin
  Result := AObj.GetTreeRect();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_GetVisibleParent(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28774}
  handleExceptionBegin
  Result := AObj.GetVisibleParent(Node, IncludeFiltered);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_HasAsParent(AObj: TBaseVirtualTree; Node: PVirtualNode; PotentialParent: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28775}
  handleExceptionBegin
  Result := AObj.HasAsParent(Node, PotentialParent);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_InsertNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Mode: TVTNodeAttachMode; UserData: Pointer): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28776}
  handleExceptionBegin
  Result := AObj.InsertNode(Node, Mode, UserData);
  handleExceptionEnd
end;

// function
procedure TBaseVirtualTree_InvalidateNode(AObj: TBaseVirtualTree; Node: PVirtualNode; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 28777}
  handleExceptionBegin
  Result := AObj.InvalidateNode(Node);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_IsEditing(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28778}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_IsMouseSelecting(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28779}
  handleExceptionBegin
  Result := AObj.IsMouseSelecting();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_IsEmpty(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28780}
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_PasteFromClipboard(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28781}
  handleExceptionBegin
  Result := AObj.PasteFromClipboard();
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_ScrollIntoViewWithPVNodeBoolX2(AObj: TBaseVirtualTree; Node: PVirtualNode; Center: LongBool; Horizontally: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28782}
  handleExceptionBegin
  Result := AObj.ScrollIntoView(Node, Center, Horizontally);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_ScrollIntoViewWithColumnIndexBool(AObj: TBaseVirtualTree; Column: Integer; Center: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28783}
  handleExceptionBegin
  Result := AObj.ScrollIntoView(Column, Center);
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_Nodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28784}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.Nodes(ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CheckedNodes(AObj: TBaseVirtualTree; State: TCheckState; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28785}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.CheckedNodes(State, ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_ChildNodes(AObj: TBaseVirtualTree; Node: PVirtualNode): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28786}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.ChildNodes(Node));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_CutCopyNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28787}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.CutCopyNodes(ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_InitializedNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28788}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.InitializedNodes(ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_LeafNodes(AObj: TBaseVirtualTree): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28789}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.LeafNodes());
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_LevelNodes(AObj: TBaseVirtualTree; NodeLevel: Cardinal): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28790}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.LevelNodes(NodeLevel));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_NoInitNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28791}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.NoInitNodes(ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_SelectedNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28792}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.SelectedNodes(ConsiderChildrenAbove));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_VisibleNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28793}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.VisibleNodes(Node, ConsiderChildrenAbove, IncludeFiltered));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_VisibleChildNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28794}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.VisibleChildNodes(Node, IncludeFiltered));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_VisibleChildNoInitNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28795}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.VisibleChildNoInitNodes(Node, IncludeFiltered));
  handleExceptionEnd
end;

// function
function TBaseVirtualTree_VisibleNoInitNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): TVTVirtualNodeEnumerationWrap; extdecl;
begin
  {$define handleExceptionID := 28796}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerationWrap.Create(AObj.VisibleNoInitNodes(Node, ConsiderChildrenAbove, IncludeFiltered));
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_AddFromStream(AObj: TBaseVirtualTree; Stream: TStream; TargetNode: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28797}
  handleExceptionBegin
  AObj.AddFromStream(Stream, TargetNode);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_BeginDragWithBoolInt(AObj: TBaseVirtualTree; Immediate: LongBool; Threshold: Integer); extdecl;
begin
  {$define handleExceptionID := 28798}
  handleExceptionBegin
  AObj.BeginDrag(Immediate, Threshold);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_BeginSynch(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28799}
  handleExceptionBegin
  AObj.BeginSynch();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_BeginUpdate(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28800}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_CancelCutOrCopy(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28801}
  handleExceptionBegin
  AObj.CancelCutOrCopy();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_CancelOperation(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28802}
  handleExceptionBegin
  AObj.CancelOperation();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_Clear(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28803}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ClearChecked(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28804}
  handleExceptionBegin
  AObj.ClearChecked();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ClearSelection(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28805}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_CopyToClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28806}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_CutToClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28807}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_DeleteChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; ResetHasChildren: LongBool); extdecl;
begin
  {$define handleExceptionID := 28808}
  handleExceptionBegin
  AObj.DeleteChildren(Node, ResetHasChildren);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_DeleteNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Reindex: LongBool); extdecl;
begin
  {$define handleExceptionID := 28809}
  handleExceptionBegin
  AObj.DeleteNode(Node, Reindex);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_DeleteSelectedNodes(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28810}
  handleExceptionBegin
  AObj.DeleteSelectedNodes();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_EndSynch(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28811}
  handleExceptionBegin
  AObj.EndSynch();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_EndUpdate(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28812}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_EnsureNodeSelected(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28813}
  handleExceptionBegin
  AObj.EnsureNodeSelected();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_FinishCutOrCopy(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28814}
  handleExceptionBegin
  AObj.FinishCutOrCopy();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_FlushClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28815}
  handleExceptionBegin
  AObj.FlushClipboard();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_FullCollapse(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28816}
  handleExceptionBegin
  AObj.FullCollapse(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_FullExpand(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28817}
  handleExceptionBegin
  AObj.FullExpand(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_GetHitTestInfoAt(AObj: TBaseVirtualTree; X: Integer; Y: Integer; Relative: LongBool; var HitInfo: THitInfoPtr); extdecl;
var
  OutHitInfo: THitInfo;
begin
  {$define handleExceptionID := 28818}
  handleExceptionBegin
  OutHitInfo := THitInfoToPas(HitInfo);
  AObj.GetHitTestInfoAt(X, Y, Relative, OutHitInfo);
  HitInfo := THitInfoToGo(OutHitInfo);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_GetTextInfo(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: Integer; const AFont: TFont; var R: TRect; var Text: PChar); extdecl;
var
  OutR: TRect;
  OutText: String;
begin
  {$define handleExceptionID := 28819}
  handleExceptionBegin
  OutR := R;
  AObj.GetTextInfo(Node, Column, AFont, OutR, OutText);
  R := OutR;
  Text := ToPChar(OutText);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_InvalidateChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionID := 28820}
  handleExceptionBegin
  AObj.InvalidateChildren(Node, Recursive);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_InvalidateColumn(AObj: TBaseVirtualTree; Column: Integer); extdecl;
begin
  {$define handleExceptionID := 28821}
  handleExceptionBegin
  AObj.InvalidateColumn(Column);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_InvalidateToBottom(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28822}
  handleExceptionBegin
  AObj.InvalidateToBottom(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_InvertSelection(AObj: TBaseVirtualTree; VisibleOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 28823}
  handleExceptionBegin
  AObj.InvertSelection(VisibleOnly);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_LoadFromFile(AObj: TBaseVirtualTree; const FileName: TFileName); extdecl;
begin
  {$define handleExceptionID := 28824}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_LoadFromStream(AObj: TBaseVirtualTree; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 28825}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_MeasureItemHeight(AObj: TBaseVirtualTree; const Canvas: TCanvas; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28826}
  handleExceptionBegin
  AObj.MeasureItemHeight(Canvas, Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_MoveToWithPVNodeX2VTNAModeBool(AObj: TBaseVirtualTree; Source: PVirtualNode; Target: PVirtualNode; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 28827}
  handleExceptionBegin
  AObj.MoveTo(Source, Target, Mode, ChildrenOnly);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_MoveToWithPVNodeBVTreeVTNAModeBool(AObj: TBaseVirtualTree; Node: PVirtualNode; Tree: TBaseVirtualTree; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 28828}
  handleExceptionBegin
  AObj.MoveTo(Node, Tree, Mode, ChildrenOnly);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_PaintTree(AObj: TBaseVirtualTree; TargetCanvas: TCanvas; var Window: TRect; var Target: TPoint; PaintOptions: TVTInternalPaintOptions; PixelFormat: TPixelFormat); extdecl;
begin
  {$define handleExceptionID := 28829}
  handleExceptionBegin
  AObj.PaintTree(TargetCanvas, Window, Target, PaintOptions, PixelFormat);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_RepaintNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28830}
  handleExceptionBegin
  AObj.RepaintNode(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ReinitChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionID := 28831}
  handleExceptionBegin
  AObj.ReinitChildren(Node, Recursive);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ReinitNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionID := 28832}
  handleExceptionBegin
  AObj.ReinitNode(Node, Recursive);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ResetNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28833}
  handleExceptionBegin
  AObj.ResetNode(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_SaveToFile(AObj: TBaseVirtualTree; const FileName: TFileName); extdecl;
begin
  {$define handleExceptionID := 28834}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_SaveToStream(AObj: TBaseVirtualTree; Stream: TStream; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28835}
  handleExceptionBegin
  AObj.SaveToStream(Stream, Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_SelectAll(AObj: TBaseVirtualTree; VisibleOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 28836}
  handleExceptionBegin
  AObj.SelectAll(VisibleOnly);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_Sort(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: Integer; Direction: laz.VirtualTrees.TSortDirection; DoInit: LongBool); extdecl;
begin
  {$define handleExceptionID := 28837}
  handleExceptionBegin
  AObj.Sort(Node, Column, Direction, DoInit);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_SortTree(AObj: TBaseVirtualTree; Column: Integer; Direction: laz.VirtualTrees.TSortDirection; DoInit: LongBool); extdecl;
begin
  {$define handleExceptionID := 28838}
  handleExceptionBegin
  AObj.SortTree(Column, Direction, DoInit);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ToggleNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 28839}
  handleExceptionBegin
  AObj.ToggleNode(Node);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateHorizontalRange(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28840}
  handleExceptionBegin
  AObj.UpdateHorizontalRange();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateHorizontalScrollBar(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionID := 28841}
  handleExceptionBegin
  AObj.UpdateHorizontalScrollBar(DoRepaint);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateRanges(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28842}
  handleExceptionBegin
  AObj.UpdateRanges();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateScrollBars(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionID := 28843}
  handleExceptionBegin
  AObj.UpdateScrollBars(DoRepaint);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateVerticalRange(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionID := 28844}
  handleExceptionBegin
  AObj.UpdateVerticalRange();
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_UpdateVerticalScrollBar(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionID := 28845}
  handleExceptionBegin
  AObj.UpdateVerticalScrollBar(DoRepaint);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ValidateChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionID := 28846}
  handleExceptionBegin
  AObj.ValidateChildren(Node, Recursive);
  handleExceptionEnd
end;

// procedure
procedure TBaseVirtualTree_ValidateNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionID := 28847}
  handleExceptionBegin
  AObj.ValidateNode(Node, Recursive);
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_BottomNode(ASet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28848}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BottomNode := AValue
  end else
    Result := AObj.BottomNode;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_CheckedCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionID := 28849}
  handleExceptionBegin
  Result := AObj.CheckedCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_CheckImages(AObj: TBaseVirtualTree): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 28850}
  handleExceptionBegin
  Result := AObj.CheckImages;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_CheckState(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: TCheckState): TCheckState; extdecl;
begin
  {$define handleExceptionID := 28851}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckState[Node] := AValue
  end else
    Result := AObj.CheckState[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_CheckType(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: TCheckType): TCheckType; extdecl;
begin
  {$define handleExceptionID := 28852}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckType[Node] := AValue
  end else
    Result := AObj.CheckType[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_ChildCount(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28853}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChildCount[Node] := AValue
  end else
    Result := AObj.ChildCount[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_ChildrenInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28854}
  handleExceptionBegin
  Result := AObj.ChildrenInitialized[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_CutCopyCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionID := 28855}
  handleExceptionBegin
  Result := AObj.CutCopyCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_DragImage(AObj: TBaseVirtualTree): TVTDragImage; extdecl;
begin
  {$define handleExceptionID := 28856}
  handleExceptionBegin
  Result := AObj.DragImage;
  handleExceptionEnd
end;

// property
procedure TBaseVirtualTree_VTVDragManager(AObj: TBaseVirtualTree; var Result: IVTDragManager); extdecl;
begin
  {$define handleExceptionID := 28857}
  handleExceptionBegin
  Result := AObj.VTVDragManager;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_DropTargetNode(ASet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28858}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTargetNode := AValue
  end else
    Result := AObj.DropTargetNode;
  handleExceptionEnd
end;

// property
procedure TBaseVirtualTree_EditLink(AObj: TBaseVirtualTree; var Result: IVTEditLink); extdecl;
begin
  {$define handleExceptionID := 28859}
  handleExceptionBegin
  Result := AObj.EditLink;
  handleExceptionEnd
end;

// property
procedure TBaseVirtualTree_EmptyListMessage(ASet: LongBool; AObj: TBaseVirtualTree; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 28860}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EmptyListMessage := AValue
  end else
    StringBufferCreate(AObj.EmptyListMessage, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_Expanded(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28861}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Expanded[Node] := AValue
  end else
    Result := AObj.Expanded[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_FocusedColumn(ASet: LongBool; AObj: TBaseVirtualTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28862}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusedColumn := AValue
  end else
    Result := AObj.FocusedColumn;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_FocusedNode(ASet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28863}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusedNode := AValue
  end else
    Result := AObj.FocusedNode;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_FullyVisible(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28864}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FullyVisible[Node] := AValue
  end else
    Result := AObj.FullyVisible[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_HasChildren(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28865}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HasChildren[Node] := AValue
  end else
    Result := AObj.HasChildren[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_HotNode(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28866}
  handleExceptionBegin
  Result := AObj.HotNode;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_IsDisabled(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28867}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsDisabled[Node] := AValue
  end else
    Result := AObj.IsDisabled[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_IsEffectivelyFiltered(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28868}
  handleExceptionBegin
  Result := AObj.IsEffectivelyFiltered[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_IsEffectivelyVisible(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 28869}
  handleExceptionBegin
  Result := AObj.IsEffectivelyVisible[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_IsFiltered(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28870}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsFiltered[Node] := AValue
  end else
    Result := AObj.IsFiltered[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_IsVisibleWithPVirtualNodeToBool(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28871}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsVisible[Node] := AValue
  end else
    Result := AObj.IsVisible[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_MultiLine(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28872}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiLine[Node] := AValue
  end else
    Result := AObj.MultiLine[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_NodeHeight(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28873}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeHeight[Node] := AValue
  end else
    Result := AObj.NodeHeight[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_NodeParent(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28874}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeParent[Node] := AValue
  end else
    Result := AObj.NodeParent[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_OffsetX(ASet: LongBool; AObj: TBaseVirtualTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28875}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OffsetX := AValue
  end else
    Result := AObj.OffsetX;
  handleExceptionEnd
end;

// property
procedure TBaseVirtualTree_OffsetXY(ASet: LongBool; AObj: TBaseVirtualTree; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 28876}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OffsetXY := AValue
  end else
    Result := AObj.OffsetXY;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_OffsetY(ASet: LongBool; AObj: TBaseVirtualTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28877}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OffsetY := AValue
  end else
    Result := AObj.OffsetY;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_OperationCount(AObj: TBaseVirtualTree): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28878}
  handleExceptionBegin
  Result := AObj.OperationCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_RootNode(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28879}
  handleExceptionBegin
  Result := AObj.RootNode;
  handleExceptionEnd
end;

// property
procedure TBaseVirtualTree_SearchBuffer(AObj: TBaseVirtualTree; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 28880}
  handleExceptionBegin
  StringBufferCreate(AObj.SearchBuffer, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_Selected(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28881}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected[Node] := AValue
  end else
    Result := AObj.Selected[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_SelectionLocked(ASet: LongBool; AObj: TBaseVirtualTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28882}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionLocked := AValue
  end else
    Result := AObj.SelectionLocked;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_TotalCount(AObj: TBaseVirtualTree): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28883}
  handleExceptionBegin
  Result := AObj.TotalCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_TreeStates(ASet: LongBool; AObj: TBaseVirtualTree; AValue: TVirtualTreeStates): TVirtualTreeStates; extdecl;
begin
  {$define handleExceptionID := 28884}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeStates := AValue
  end else
    Result := AObj.TreeStates;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_SelectedCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionID := 28885}
  handleExceptionBegin
  Result := AObj.SelectedCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_TopNode(ASet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 28886}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopNode := AValue
  end else
    Result := AObj.TopNode;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_VerticalAlignment(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 28887}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerticalAlignment[Node] := AValue
  end else
    Result := AObj.VerticalAlignment[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_VisibleCount(AObj: TBaseVirtualTree): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28888}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_VisiblePath(ASet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28889}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VisiblePath[Node] := AValue
  end else
    Result := AObj.VisiblePath[Node];
  handleExceptionEnd
end;

// property
function TBaseVirtualTree_UpdateCount(AObj: TBaseVirtualTree): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28890}
  handleExceptionBegin
  Result := AObj.UpdateCount;
  handleExceptionEnd
end;

function TBaseVirtualTree_TClass(): TClass; extdecl;
begin
  Result := TBaseVirtualTree;
end;

exports
  TBaseVirtualTree_Create,
  TBaseVirtualTree_AbsoluteIndex,
  TBaseVirtualTree_AddChild,
  TBaseVirtualTree_CancelEditNode,
  TBaseVirtualTree_CanEdit,
  TBaseVirtualTree_CopyToWithPVNodeBVTreeVTNAModeBool,
  TBaseVirtualTree_CopyToWithPVNodeX2VTNAModeBool,
  TBaseVirtualTree_DraggingToBool,
  TBaseVirtualTree_EditNode,
  TBaseVirtualTree_EndEditNode,
  TBaseVirtualTree_GetDisplayRect,
  TBaseVirtualTree_GetEffectivelyFiltered,
  TBaseVirtualTree_GetEffectivelyVisible,
  TBaseVirtualTree_GetFirst,
  TBaseVirtualTree_GetFirstChecked,
  TBaseVirtualTree_GetFirstChild,
  TBaseVirtualTree_GetFirstChildNoInit,
  TBaseVirtualTree_GetFirstCutCopy,
  TBaseVirtualTree_GetFirstInitialized,
  TBaseVirtualTree_GetFirstLeaf,
  TBaseVirtualTree_GetFirstLevel,
  TBaseVirtualTree_GetFirstNoInit,
  TBaseVirtualTree_GetFirstSelected,
  TBaseVirtualTree_GetFirstVisible,
  TBaseVirtualTree_GetFirstVisibleChild,
  TBaseVirtualTree_GetFirstVisibleChildNoInit,
  TBaseVirtualTree_GetFirstVisibleNoInit,
  TBaseVirtualTree_GetLast,
  TBaseVirtualTree_GetLastInitialized,
  TBaseVirtualTree_GetLastNoInit,
  TBaseVirtualTree_GetLastChild,
  TBaseVirtualTree_GetLastChildNoInit,
  TBaseVirtualTree_GetLastVisible,
  TBaseVirtualTree_GetLastVisibleChild,
  TBaseVirtualTree_GetLastVisibleChildNoInit,
  TBaseVirtualTree_GetLastVisibleNoInit,
  TBaseVirtualTree_GetMaxColumnWidth,
  TBaseVirtualTree_GetNext,
  TBaseVirtualTree_GetNextCheckedWithPVNodeCStateBool,
  TBaseVirtualTree_GetNextCheckedWithPVirtualNodeBool,
  TBaseVirtualTree_GetNextCutCopy,
  TBaseVirtualTree_GetNextInitialized,
  TBaseVirtualTree_GetNextLeaf,
  TBaseVirtualTree_GetNextLevel,
  TBaseVirtualTree_GetNextNoInit,
  TBaseVirtualTree_GetNextSelected,
  TBaseVirtualTree_GetNextSibling,
  TBaseVirtualTree_GetNextSiblingNoInit,
  TBaseVirtualTree_GetNextVisible,
  TBaseVirtualTree_GetNextVisibleNoInit,
  TBaseVirtualTree_GetNextVisibleSibling,
  TBaseVirtualTree_GetNextVisibleSiblingNoInit,
  TBaseVirtualTree_GetNodeAtWithPoint,
  TBaseVirtualTree_GetNodeAtWithIntX2,
  TBaseVirtualTree_GetNodeAtWithIntX3Bool,
  TBaseVirtualTree_GetNodeData,
  TBaseVirtualTree_GetNodeLevel,
  TBaseVirtualTree_GetPrevious,
  TBaseVirtualTree_GetPreviousChecked,
  TBaseVirtualTree_GetPreviousCutCopy,
  TBaseVirtualTree_GetPreviousInitialized,
  TBaseVirtualTree_GetPreviousLeaf,
  TBaseVirtualTree_GetPreviousLevel,
  TBaseVirtualTree_GetPreviousNoInit,
  TBaseVirtualTree_GetPreviousSelected,
  TBaseVirtualTree_GetPreviousSibling,
  TBaseVirtualTree_GetPreviousSiblingNoInit,
  TBaseVirtualTree_GetPreviousVisible,
  TBaseVirtualTree_GetPreviousVisibleNoInit,
  TBaseVirtualTree_GetPreviousVisibleSibling,
  TBaseVirtualTree_GetPreviousVisibleSiblingNoInit,
  TBaseVirtualTree_GetSortedCutCopySet,
  TBaseVirtualTree_GetSortedSelection,
  TBaseVirtualTree_GetTreeRect,
  TBaseVirtualTree_GetVisibleParent,
  TBaseVirtualTree_HasAsParent,
  TBaseVirtualTree_InsertNode,
  TBaseVirtualTree_InvalidateNode,
  TBaseVirtualTree_IsEditing,
  TBaseVirtualTree_IsMouseSelecting,
  TBaseVirtualTree_IsEmpty,
  TBaseVirtualTree_PasteFromClipboard,
  TBaseVirtualTree_ScrollIntoViewWithPVNodeBoolX2,
  TBaseVirtualTree_ScrollIntoViewWithColumnIndexBool,
  TBaseVirtualTree_Nodes,
  TBaseVirtualTree_CheckedNodes,
  TBaseVirtualTree_ChildNodes,
  TBaseVirtualTree_CutCopyNodes,
  TBaseVirtualTree_InitializedNodes,
  TBaseVirtualTree_LeafNodes,
  TBaseVirtualTree_LevelNodes,
  TBaseVirtualTree_NoInitNodes,
  TBaseVirtualTree_SelectedNodes,
  TBaseVirtualTree_VisibleNodes,
  TBaseVirtualTree_VisibleChildNodes,
  TBaseVirtualTree_VisibleChildNoInitNodes,
  TBaseVirtualTree_VisibleNoInitNodes,
  TBaseVirtualTree_AddFromStream,
  TBaseVirtualTree_BeginDragWithBoolInt,
  TBaseVirtualTree_BeginSynch,
  TBaseVirtualTree_BeginUpdate,
  TBaseVirtualTree_CancelCutOrCopy,
  TBaseVirtualTree_CancelOperation,
  TBaseVirtualTree_Clear,
  TBaseVirtualTree_ClearChecked,
  TBaseVirtualTree_ClearSelection,
  TBaseVirtualTree_CopyToClipboard,
  TBaseVirtualTree_CutToClipboard,
  TBaseVirtualTree_DeleteChildren,
  TBaseVirtualTree_DeleteNode,
  TBaseVirtualTree_DeleteSelectedNodes,
  TBaseVirtualTree_EndSynch,
  TBaseVirtualTree_EndUpdate,
  TBaseVirtualTree_EnsureNodeSelected,
  TBaseVirtualTree_FinishCutOrCopy,
  TBaseVirtualTree_FlushClipboard,
  TBaseVirtualTree_FullCollapse,
  TBaseVirtualTree_FullExpand,
  TBaseVirtualTree_GetHitTestInfoAt,
  TBaseVirtualTree_GetTextInfo,
  TBaseVirtualTree_InvalidateChildren,
  TBaseVirtualTree_InvalidateColumn,
  TBaseVirtualTree_InvalidateToBottom,
  TBaseVirtualTree_InvertSelection,
  TBaseVirtualTree_LoadFromFile,
  TBaseVirtualTree_LoadFromStream,
  TBaseVirtualTree_MeasureItemHeight,
  TBaseVirtualTree_MoveToWithPVNodeX2VTNAModeBool,
  TBaseVirtualTree_MoveToWithPVNodeBVTreeVTNAModeBool,
  TBaseVirtualTree_PaintTree,
  TBaseVirtualTree_RepaintNode,
  TBaseVirtualTree_ReinitChildren,
  TBaseVirtualTree_ReinitNode,
  TBaseVirtualTree_ResetNode,
  TBaseVirtualTree_SaveToFile,
  TBaseVirtualTree_SaveToStream,
  TBaseVirtualTree_SelectAll,
  TBaseVirtualTree_Sort,
  TBaseVirtualTree_SortTree,
  TBaseVirtualTree_ToggleNode,
  TBaseVirtualTree_UpdateHorizontalRange,
  TBaseVirtualTree_UpdateHorizontalScrollBar,
  TBaseVirtualTree_UpdateRanges,
  TBaseVirtualTree_UpdateScrollBars,
  TBaseVirtualTree_UpdateVerticalRange,
  TBaseVirtualTree_UpdateVerticalScrollBar,
  TBaseVirtualTree_ValidateChildren,
  TBaseVirtualTree_ValidateNode,
  TBaseVirtualTree_BottomNode,
  TBaseVirtualTree_CheckedCount,
  TBaseVirtualTree_CheckImages,
  TBaseVirtualTree_CheckState,
  TBaseVirtualTree_CheckType,
  TBaseVirtualTree_ChildCount,
  TBaseVirtualTree_ChildrenInitialized,
  TBaseVirtualTree_CutCopyCount,
  TBaseVirtualTree_DragImage,
  TBaseVirtualTree_VTVDragManager,
  TBaseVirtualTree_DropTargetNode,
  TBaseVirtualTree_EditLink,
  TBaseVirtualTree_EmptyListMessage,
  TBaseVirtualTree_Expanded,
  TBaseVirtualTree_FocusedColumn,
  TBaseVirtualTree_FocusedNode,
  TBaseVirtualTree_FullyVisible,
  TBaseVirtualTree_HasChildren,
  TBaseVirtualTree_HotNode,
  TBaseVirtualTree_IsDisabled,
  TBaseVirtualTree_IsEffectivelyFiltered,
  TBaseVirtualTree_IsEffectivelyVisible,
  TBaseVirtualTree_IsFiltered,
  TBaseVirtualTree_IsVisibleWithPVirtualNodeToBool,
  TBaseVirtualTree_MultiLine,
  TBaseVirtualTree_NodeHeight,
  TBaseVirtualTree_NodeParent,
  TBaseVirtualTree_OffsetX,
  TBaseVirtualTree_OffsetXY,
  TBaseVirtualTree_OffsetY,
  TBaseVirtualTree_OperationCount,
  TBaseVirtualTree_RootNode,
  TBaseVirtualTree_SearchBuffer,
  TBaseVirtualTree_Selected,
  TBaseVirtualTree_SelectionLocked,
  TBaseVirtualTree_TotalCount,
  TBaseVirtualTree_TreeStates,
  TBaseVirtualTree_SelectedCount,
  TBaseVirtualTree_TopNode,
  TBaseVirtualTree_VerticalAlignment,
  TBaseVirtualTree_VisibleCount,
  TBaseVirtualTree_VisiblePath,
  TBaseVirtualTree_UpdateCount,
  TBaseVirtualTree_TClass;