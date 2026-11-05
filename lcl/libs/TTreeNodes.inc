// constructor
function TTreeNodes_Create(AnOwner: TCustomTreeView): TTreeNodes; extdecl;
begin
  {$define handleExceptionID := 12500}
  handleExceptionBegin
  Result := TTreeNodes.Create(AnOwner);
  handleExceptionEnd
end;

// function
function TTreeNodes_Add(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12501}
  handleExceptionBegin
  Result := AObj.Add(SiblingNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddChild(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12502}
  handleExceptionBegin
  Result := AObj.AddChild(ParentNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddChildFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12503}
  handleExceptionBegin
  Result := AObj.AddChildFirst(ParentNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddChildObject(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12504}
  handleExceptionBegin
  Result := AObj.AddChildObject(ParentNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddChildObjectFirst(AObj: TTreeNodes; ParentNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12505}
  handleExceptionBegin
  Result := AObj.AddChildObjectFirst(ParentNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12506}
  handleExceptionBegin
  Result := AObj.AddFirst(SiblingNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddNode(AObj: TTreeNodes; Node: TTreeNode; Relative: TTreeNode; const S: PChar; Ptr: Pointer; Method: TNodeAttachMode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12507}
  handleExceptionBegin
  Result := AObj.AddNode(Node, Relative, S, Ptr, Method);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddObject(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12508}
  handleExceptionBegin
  Result := AObj.AddObject(SiblingNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_AddObjectFirst(AObj: TTreeNodes; SiblingNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12509}
  handleExceptionBegin
  Result := AObj.AddObjectFirst(SiblingNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_FindNodeWithData(AObj: TTreeNodes; const NodeData: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12510}
  handleExceptionBegin
  Result := AObj.FindNodeWithData(NodeData);
  handleExceptionEnd
end;

// function
function TTreeNodes_FindNodeWithText(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12511}
  handleExceptionBegin
  Result := AObj.FindNodeWithText(NodeText);
  handleExceptionEnd
end;

// function
function TTreeNodes_FindNodeWithTextPath(AObj: TTreeNodes; TextPath: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12512}
  handleExceptionBegin
  Result := AObj.FindNodeWithTextPath(TextPath);
  handleExceptionEnd
end;

// function
function TTreeNodes_FindTopLvlNode(AObj: TTreeNodes; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12513}
  handleExceptionBegin
  Result := AObj.FindTopLvlNode(NodeText);
  handleExceptionEnd
end;

// function
function TTreeNodes_GetEnumerator(AObj: TTreeNodes): TTreeNodesEnumerator; extdecl;
begin
  {$define handleExceptionID := 12514}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetFirstNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12515}
  handleExceptionBegin
  Result := AObj.GetFirstNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetFirstVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12516}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetFirstVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12517}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleEnabledNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetLastExpandedSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12518}
  handleExceptionBegin
  Result := AObj.GetLastExpandedSubNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetLastNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12519}
  handleExceptionBegin
  Result := AObj.GetLastNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetLastSubNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12520}
  handleExceptionBegin
  Result := AObj.GetLastSubNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetLastVisibleNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12521}
  handleExceptionBegin
  Result := AObj.GetLastVisibleNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetLastVisibleEnabledNode(AObj: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12522}
  handleExceptionBegin
  Result := AObj.GetLastVisibleEnabledNode();
  handleExceptionEnd
end;

// function
function TTreeNodes_GetSelections(AObj: TTreeNodes; const AIndex: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12523}
  handleExceptionBegin
  Result := AObj.GetSelections(AIndex);
  handleExceptionEnd
end;

// function
function TTreeNodes_Insert(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12524}
  handleExceptionBegin
  Result := AObj.Insert(NextNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_InsertBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12525}
  handleExceptionBegin
  Result := AObj.InsertBehind(PrevNode, S);
  handleExceptionEnd
end;

// function
function TTreeNodes_InsertObject(AObj: TTreeNodes; NextNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12526}
  handleExceptionBegin
  Result := AObj.InsertObject(NextNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_InsertObjectBehind(AObj: TTreeNodes; PrevNode: TTreeNode; const S: PChar; Data: Pointer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12527}
  handleExceptionBegin
  Result := AObj.InsertObjectBehind(PrevNode, S, Data);
  handleExceptionEnd
end;

// function
function TTreeNodes_IsMultiSelection(AObj: TTreeNodes): LongBool; extdecl;
begin
  {$define handleExceptionID := 12528}
  handleExceptionBegin
  Result := AObj.IsMultiSelection();
  handleExceptionEnd
end;

// function
function TTreeNodes_IsUpdating(AObj: TTreeNodes): LongBool; extdecl;
begin
  {$define handleExceptionID := 12529}
  handleExceptionBegin
  Result := AObj.IsUpdating();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_BeginUpdate(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionID := 12530}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_Clear(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionID := 12531}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_ClearMultiSelection(AObj: TTreeNodes; ClearSelected: LongBool); extdecl;
begin
  {$define handleExceptionID := 12532}
  handleExceptionBegin
  AObj.ClearMultiSelection(ClearSelected);
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_ConsistencyCheck(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionID := 12533}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_Delete(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12534}
  handleExceptionBegin
  AObj.Delete(Node);
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_EndUpdate(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionID := 12535}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_FreeAllNodeData(AObj: TTreeNodes); extdecl;
begin
  {$define handleExceptionID := 12536}
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_SelectionsChanged(AObj: TTreeNodes; ANode: TTreeNode; const AIsSelected: LongBool); extdecl;
begin
  {$define handleExceptionID := 12537}
  handleExceptionBegin
  AObj.SelectionsChanged(ANode, AIsSelected);
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_SelectOnlyThis(AObj: TTreeNodes; Node: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12538}
  handleExceptionBegin
  AObj.SelectOnlyThis(Node);
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_MultiSelect(AObj: TTreeNodes; Node: TTreeNode; ClearWholeSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 12539}
  handleExceptionBegin
  AObj.MultiSelect(Node, ClearWholeSelection);
  handleExceptionEnd
end;

// procedure
procedure TTreeNodes_WriteDebugReport(AObj: TTreeNodes; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
  {$define handleExceptionID := 12540}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, AllNodes);
  handleExceptionEnd
end;

// property
function TTreeNodes_Count(AObj: TTreeNodes): Integer; extdecl;
begin
  {$define handleExceptionID := 12541}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TTreeNodes_Item(AObj: TTreeNodes; Index: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12542}
  handleExceptionBegin
  Result := AObj.Item[Index];
  handleExceptionEnd
end;

// property
function TTreeNodes_KeepCollapsedNodes(ASet: LongBool; AObj: TTreeNodes; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12543}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepCollapsedNodes := AValue
  end else
    Result := AObj.KeepCollapsedNodes;
  handleExceptionEnd
end;

// property
function TTreeNodes_Owner(AObj: TTreeNodes): TCustomTreeView; extdecl;
begin
  {$define handleExceptionID := 12544}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TTreeNodes_SelectionCount(AObj: TTreeNodes): Cardinal; extdecl;
begin
  {$define handleExceptionID := 12545}
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

// property
function TTreeNodes_TopLvlCount(AObj: TTreeNodes): integer; extdecl;
begin
  {$define handleExceptionID := 12546}
  handleExceptionBegin
  Result := AObj.TopLvlCount;
  handleExceptionEnd
end;

// property
function TTreeNodes_TopLvlItems(ASet: LongBool; AObj: TTreeNodes; Index: integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12547}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopLvlItems[Index] := AValue
  end else
    Result := AObj.TopLvlItems[Index];
  handleExceptionEnd
end;

exports
  TTreeNodes_Create,
  TTreeNodes_Add,
  TTreeNodes_AddChild,
  TTreeNodes_AddChildFirst,
  TTreeNodes_AddChildObject,
  TTreeNodes_AddChildObjectFirst,
  TTreeNodes_AddFirst,
  TTreeNodes_AddNode,
  TTreeNodes_AddObject,
  TTreeNodes_AddObjectFirst,
  TTreeNodes_FindNodeWithData,
  TTreeNodes_FindNodeWithText,
  TTreeNodes_FindNodeWithTextPath,
  TTreeNodes_FindTopLvlNode,
  TTreeNodes_GetEnumerator,
  TTreeNodes_GetFirstNode,
  TTreeNodes_GetFirstVisibleNode,
  TTreeNodes_GetFirstVisibleEnabledNode,
  TTreeNodes_GetLastExpandedSubNode,
  TTreeNodes_GetLastNode,
  TTreeNodes_GetLastSubNode,
  TTreeNodes_GetLastVisibleNode,
  TTreeNodes_GetLastVisibleEnabledNode,
  TTreeNodes_GetSelections,
  TTreeNodes_Insert,
  TTreeNodes_InsertBehind,
  TTreeNodes_InsertObject,
  TTreeNodes_InsertObjectBehind,
  TTreeNodes_IsMultiSelection,
  TTreeNodes_IsUpdating,
  TTreeNodes_BeginUpdate,
  TTreeNodes_Clear,
  TTreeNodes_ClearMultiSelection,
  TTreeNodes_ConsistencyCheck,
  TTreeNodes_Delete,
  TTreeNodes_EndUpdate,
  TTreeNodes_FreeAllNodeData,
  TTreeNodes_SelectionsChanged,
  TTreeNodes_SelectOnlyThis,
  TTreeNodes_MultiSelect,
  TTreeNodes_WriteDebugReport,
  TTreeNodes_Count,
  TTreeNodes_Item,
  TTreeNodes_KeepCollapsedNodes,
  TTreeNodes_Owner,
  TTreeNodes_SelectionCount,
  TTreeNodes_TopLvlCount,
  TTreeNodes_TopLvlItems;