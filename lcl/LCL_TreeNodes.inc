
//constructor
function TreeNodes_Create(AnOwner: TCustomTreeView): TTreeNodes; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTreeNodes.Create(AnOwner);
  handleExceptionEnd
end;

//property
function TreeNodes_Count(AObj: TTreeNodes): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function TreeNodes_Item(AObj: TTreeNodes; Index: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Item'}
  handleExceptionBegin
  Result := AObj.Item[Index];
  handleExceptionEnd
end;

//property
function TreeNodes_KeepCollapsedNodes(AIsSet: LongBool; AObj: TTreeNodes; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='KeepCollapsedNodes'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeepCollapsedNodes := AValue;
  end else
    Result := AObj.KeepCollapsedNodes;
  handleExceptionEnd
end;

//property
function TreeNodes_Owner(AObj: TTreeNodes): TCustomTreeView; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function TreeNodes_SelectionCount(AObj: TTreeNodes): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionCount'}
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

//property
function TreeNodes_TopLvlCount(AObj: TTreeNodes): integer; extdecl;
begin
  {$define handleExceptionFuncName :='TopLvlCount'}
  handleExceptionBegin
  Result := AObj.TopLvlCount;
  handleExceptionEnd
end;

//property
function TreeNodes_TopLvlItems(AIsSet: LongBool; AObj: TTreeNodes; Index: integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='TopLvlItems'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopLvlItems[Index] := AValue;
  end else
    Result := AObj.TopLvlItems[Index];
  handleExceptionEnd
end;

//function
function TreeNodes_Add(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Add'}
  handleExceptionBegin
  Result := AObj.Add(SiblingNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChild(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddChild'}
  handleExceptionBegin
  Result := AObj.AddChild(ParentNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddChildFirst'}
  handleExceptionBegin
  Result := AObj.AddChildFirst(ParentNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildObject(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddChildObject'}
  handleExceptionBegin
  Result := AObj.AddChildObject(ParentNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildObjectFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddChildObjectFirst'}
  handleExceptionBegin
  Result := AObj.AddChildObjectFirst(ParentNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddFirst'}
  handleExceptionBegin
  Result := AObj.AddFirst(SiblingNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddNode(AObj: TTreeNodes; Node: TTreeNode; Relative: TTreeNode; const S: PChar; Ptr: Pointer; Method: TNodeAttachMode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddNode'}
  handleExceptionBegin
  Result := AObj.AddNode(Node, Relative, S, Ptr, Method);
  handleExceptionEnd
end;

//function
function TreeNodes_AddObject(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddObject'}
  handleExceptionBegin
  Result := AObj.AddObject(SiblingNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddObjectFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddObjectFirst'}
  handleExceptionBegin
  Result := AObj.AddObjectFirst(SiblingNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithData(AObj: TTreeNodes; const NodeData: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='FindNodeWithData'}
  handleExceptionBegin
  Result := AObj.FindNodeWithData(NodeData);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithText(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='FindNodeWithText'}
  handleExceptionBegin
  Result := AObj.FindNodeWithText(NodeText);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithTextPath(AObj: TTreeNodes; TextPath: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='FindNodeWithTextPath'}
  handleExceptionBegin
  Result := AObj.FindNodeWithTextPath(TextPath);
  handleExceptionEnd
end;

//function
function TreeNodes_FindTopLvlNode(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='FindTopLvlNode'}
  handleExceptionBegin
  Result := AObj.FindTopLvlNode(NodeText);
  handleExceptionEnd
end;

//function
function TreeNodes_GetEnumerator(AObj: TTreeNodes): TTreeNodesEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstNode'}
  handleExceptionBegin
  Result := AObj.GetFirstNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleNode'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleEnabledNode'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleEnabledNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastExpandedSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastExpandedSubNode'}
  handleExceptionBegin
  Result := AObj.GetLastExpandedSubNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastNode'}
  handleExceptionBegin
  Result := AObj.GetLastNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastSubNode'}
  handleExceptionBegin
  Result := AObj.GetLastSubNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleNode'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleEnabledNode'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleEnabledNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetSelections(AObj: TTreeNodes; const AIndex: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelections'}
  handleExceptionBegin
  Result := AObj.GetSelections(AIndex);
  handleExceptionEnd
end;

//function
function TreeNodes_Insert(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Insert'}
  handleExceptionBegin
  Result := AObj.Insert(NextNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='InsertBehind'}
  handleExceptionBegin
  Result := AObj.InsertBehind(PrevNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertObject(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='InsertObject'}
  handleExceptionBegin
  Result := AObj.InsertObject(NextNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertObjectBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='InsertObjectBehind'}
  handleExceptionBegin
  Result := AObj.InsertObjectBehind(PrevNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_IsMultiSelection(AObj: TTreeNodes): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMultiSelection'}
  handleExceptionBegin
  Result := AObj.IsMultiSelection();
  handleExceptionEnd
end;

//function
function TreeNodes_Class(): TClass; extdecl;
begin
  Result := TTreeNodes;
end;

//procedure
procedure TreeNodes_BeginUpdate(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_Clear(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_ClearMultiSelection(AObj: TTreeNodes; ClearSelected: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ClearMultiSelection'}
  handleExceptionBegin
  AObj.ClearMultiSelection(ClearSelected);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_ConsistencyCheck(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionFuncName :='ConsistencyCheck'}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_Delete(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='Delete'}
  handleExceptionBegin
  AObj.Delete(Node);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_EndUpdate(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_FreeAllNodeData(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionFuncName :='FreeAllNodeData'}
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_SelectionsChanged(AObj: TTreeNodes; ANode: TTreeNode; const AIsSelected: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SelectionsChanged'}
  handleExceptionBegin
  AObj.SelectionsChanged(ANode, AIsSelected);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_SelectOnlyThis(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='SelectOnlyThis'}
  handleExceptionBegin
  AObj.SelectOnlyThis(Node);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_MultiSelect(AObj: TTreeNodes; Node: TTreeNode; ClearWholeSelection: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MultiSelect'}
  handleExceptionBegin
  AObj.MultiSelect(Node, ClearWholeSelection);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_WriteDebugReport(AObj: TTreeNodes; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDebugReport'}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, AllNodes);
  handleExceptionEnd
end;


exports
  TreeNodes_Create,
  TreeNodes_Count,
  TreeNodes_Item,
  TreeNodes_KeepCollapsedNodes,
  TreeNodes_Owner,
  TreeNodes_SelectionCount,
  TreeNodes_TopLvlCount,
  TreeNodes_TopLvlItems,
  TreeNodes_Add,
  TreeNodes_AddChild,
  TreeNodes_AddChildFirst,
  TreeNodes_AddChildObject,
  TreeNodes_AddChildObjectFirst,
  TreeNodes_AddFirst,
  TreeNodes_AddNode,
  TreeNodes_AddObject,
  TreeNodes_AddObjectFirst,
  TreeNodes_FindNodeWithData,
  TreeNodes_FindNodeWithText,
  TreeNodes_FindNodeWithTextPath,
  TreeNodes_FindTopLvlNode,
  TreeNodes_GetEnumerator,
  TreeNodes_GetFirstNode,
  TreeNodes_GetFirstVisibleNode,
  TreeNodes_GetFirstVisibleEnabledNode,
  TreeNodes_GetLastExpandedSubNode,
  TreeNodes_GetLastNode,
  TreeNodes_GetLastSubNode,
  TreeNodes_GetLastVisibleNode,
  TreeNodes_GetLastVisibleEnabledNode,
  TreeNodes_GetSelections,
  TreeNodes_Insert,
  TreeNodes_InsertBehind,
  TreeNodes_InsertObject,
  TreeNodes_InsertObjectBehind,
  TreeNodes_IsMultiSelection,
  TreeNodes_Class,
  TreeNodes_BeginUpdate,
  TreeNodes_Clear,
  TreeNodes_ClearMultiSelection,
  TreeNodes_ConsistencyCheck,
  TreeNodes_Delete,
  TreeNodes_EndUpdate,
  TreeNodes_FreeAllNodeData,
  TreeNodes_SelectionsChanged,
  TreeNodes_SelectOnlyThis,
  TreeNodes_MultiSelect,
  TreeNodes_WriteDebugReport;