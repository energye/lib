
//constructor
function TreeNodes_Create(AnOwner: TCustomTreeView): TTreeNodes; extdecl;
begin
  handleExceptionBegin
  Result := TTreeNodes.Create(AnOwner);
  handleExceptionEnd
end;

//property
function TreeNodes_Count(AObj: TTreeNodes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function TreeNodes_Item(AObj: TTreeNodes; Index: Integer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Item[Index];
  handleExceptionEnd
end;

//property
function TreeNodes_KeepCollapsedNodes(AIsSet: LongBool; AObj: TTreeNodes; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function TreeNodes_SelectionCount(AObj: TTreeNodes): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

//property
function TreeNodes_TopLvlCount(AObj: TTreeNodes): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TopLvlCount;
  handleExceptionEnd
end;

//property
function TreeNodes_TopLvlItems(AIsSet: LongBool; AObj: TTreeNodes; Index: integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Add(SiblingNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChild(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddChild(ParentNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddChildFirst(ParentNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildObject(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddChildObject(ParentNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddChildObjectFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddChildObjectFirst(ParentNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddFirst(SiblingNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_AddNode(AObj: TTreeNodes; Node: TTreeNode; Relative: TTreeNode; const S: PChar; Ptr: Pointer; Method: TNodeAttachMode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddNode(Node, Relative, S, Ptr, Method);
  handleExceptionEnd
end;

//function
function TreeNodes_AddObject(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddObject(SiblingNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_AddObjectFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddObjectFirst(SiblingNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithData(AObj: TTreeNodes; const NodeData: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNodeWithData(NodeData);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithText(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNodeWithText(NodeText);
  handleExceptionEnd
end;

//function
function TreeNodes_FindNodeWithTextPath(AObj: TTreeNodes; TextPath: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNodeWithTextPath(TextPath);
  handleExceptionEnd
end;

//function
function TreeNodes_FindTopLvlNode(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindTopLvlNode(NodeText);
  handleExceptionEnd
end;

//function
function TreeNodes_GetEnumerator(AObj: TTreeNodes): TTreeNodesEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstVisibleNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetFirstVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstVisibleEnabledNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastExpandedSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastExpandedSubNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastSubNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastVisibleNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetLastVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastVisibleEnabledNode();
  handleExceptionEnd
end;

//function
function TreeNodes_GetSelections(AObj: TTreeNodes; const AIndex: Integer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSelections(AIndex);
  handleExceptionEnd
end;

//function
function TreeNodes_Insert(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Insert(NextNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InsertBehind(PrevNode, S);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertObject(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InsertObject(NextNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_InsertObjectBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InsertObjectBehind(PrevNode, S, Data);
  handleExceptionEnd
end;

//function
function TreeNodes_IsMultiSelection(AObj: TTreeNodes): LongBool; extdecl;
begin
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
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_Clear(AObj: TTreeNodes); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_ClearMultiSelection(AObj: TTreeNodes; ClearSelected: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ClearMultiSelection(ClearSelected);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_ConsistencyCheck(AObj: TTreeNodes); extdecl;
begin
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_Delete(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Node);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_EndUpdate(AObj: TTreeNodes); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_FreeAllNodeData(AObj: TTreeNodes); extdecl;
begin
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_SelectionsChanged(AObj: TTreeNodes; ANode: TTreeNode; const AIsSelected: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SelectionsChanged(ANode, AIsSelected);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_SelectOnlyThis(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.SelectOnlyThis(Node);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_MultiSelect(AObj: TTreeNodes; Node: TTreeNode; ClearWholeSelection: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MultiSelect(Node, ClearWholeSelection);
  handleExceptionEnd
end;

//procedure
procedure TreeNodes_WriteDebugReport(AObj: TTreeNodes; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
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