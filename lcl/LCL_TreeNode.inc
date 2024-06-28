
//constructor
function TreeNode_Create(AnOwner: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTreeNode.Create(AnOwner);
  handleExceptionEnd
end;

//property
function TreeNode_AbsoluteIndex(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AbsoluteIndex'}
  handleExceptionBegin
  Result := AObj.AbsoluteIndex;
  handleExceptionEnd
end;

//property
function TreeNode_Count(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function TreeNode_Cut(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cut'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cut := AValue;
  end else
    Result := AObj.Cut;
  handleExceptionEnd
end;

//property
function TreeNode_Data(AIsSet: LongBool; AObj: TTreeNode; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='Data'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Data := AValue;
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

//property
function TreeNode_Deleting(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Deleting'}
  handleExceptionBegin
  Result := AObj.Deleting;
  handleExceptionEnd
end;

//property
function TreeNode_DropTarget(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DropTarget'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropTarget := AValue;
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

//property
function TreeNode_Expanded(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Expanded'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Expanded := AValue;
  end else
    Result := AObj.Expanded;
  handleExceptionEnd
end;

//property
function TreeNode_Focused(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Focused'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Focused := AValue;
  end else
    Result := AObj.Focused;
  handleExceptionEnd
end;

//property
function TreeNode_Handle(AObj: TTreeNode): THandle; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function TreeNode_HasChildren(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasChildren'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HasChildren := AValue;
  end else
    Result := AObj.HasChildren;
  handleExceptionEnd
end;

//property
function TreeNode_Height(AIsSet: LongBool; AObj: TTreeNode; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function TreeNode_ImageIndex(AIsSet: LongBool; AObj: TTreeNode; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function TreeNode_Index(AIsSet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Index'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Index := AValue;
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

//property
function TreeNode_IsFullHeightVisible(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFullHeightVisible'}
  handleExceptionBegin
  Result := AObj.IsFullHeightVisible;
  handleExceptionEnd
end;

//property
function TreeNode_IsVisible(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsVisible'}
  handleExceptionBegin
  Result := AObj.IsVisible;
  handleExceptionEnd
end;

//property
function TreeNode_Items(AIsSet: LongBool; AObj: TTreeNode; ItemIndex: Integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[ItemIndex] := AValue;
  end else
    Result := AObj.Items[ItemIndex];
  handleExceptionEnd
end;

//property
function TreeNode_Level(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Level'}
  handleExceptionBegin
  Result := AObj.Level;
  handleExceptionEnd
end;

//property
function TreeNode_MultiSelected(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultiSelected'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelected := AValue;
  end else
    Result := AObj.MultiSelected;
  handleExceptionEnd
end;

//property
function TreeNode_NodeEffect(AIsSet: LongBool; AObj: TTreeNode; AValue: TGraphicsDrawEffect): TGraphicsDrawEffect; extdecl;
begin
  {$define handleExceptionFuncName :='NodeEffect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeEffect := AValue;
  end else
    Result := AObj.NodeEffect;
  handleExceptionEnd
end;

//property
function TreeNode_OverlayIndex(AIsSet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='OverlayIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OverlayIndex := AValue;
  end else
    Result := AObj.OverlayIndex;
  handleExceptionEnd
end;

//property
function TreeNode_Owner(AObj: TTreeNode): TTreeNodes; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function TreeNode_Parent(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Parent'}
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function TreeNode_Selected(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Selected'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected := AValue;
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

//property
function TreeNode_SelectedIndex(AIsSet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedIndex := AValue;
  end else
    Result := AObj.SelectedIndex;
  handleExceptionEnd
end;

//property
function TreeNode_StateIndex(AIsSet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='StateIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateIndex := AValue;
  end else
    Result := AObj.StateIndex;
  handleExceptionEnd
end;

//property
function TreeNode_States(AObj: TTreeNode): TNodeStates; extdecl;
begin
  {$define handleExceptionFuncName :='States'}
  handleExceptionBegin
  Result := AObj.States;
  handleExceptionEnd
end;

//property
function TreeNode_SubTreeCount(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='SubTreeCount'}
  handleExceptionBegin
  Result := AObj.SubTreeCount;
  handleExceptionEnd
end;

//property
function TreeNode_Text(AIsSet: LongBool; AObj: TTreeNode; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function TreeNode_Top(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Top'}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

//property
function TreeNode_TreeNodes(AObj: TTreeNode): TTreeNodes; extdecl;
begin
  {$define handleExceptionFuncName :='TreeNodes'}
  handleExceptionBegin
  Result := AObj.TreeNodes;
  handleExceptionEnd
end;

//property
function TreeNode_TreeView(AObj: TTreeNode): TCustomTreeView; extdecl;
begin
  {$define handleExceptionFuncName :='TreeView'}
  handleExceptionBegin
  Result := AObj.TreeView;
  handleExceptionEnd
end;

//property
function TreeNode_Visible(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function TreeNode_Enabled(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Enabled := AValue;
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

//function
function TreeNode_AlphaSort(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AlphaSort'}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

//function
function TreeNode_Bottom(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Bottom'}
  handleExceptionBegin
  Result := AObj.Bottom();
  handleExceptionEnd
end;

//function
function TreeNode_BottomExpanded(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='BottomExpanded'}
  handleExceptionBegin
  Result := AObj.BottomExpanded();
  handleExceptionEnd
end;

//function
function TreeNode_CustomSort(AObj: TTreeNode; AEventData: Pointer): LongBool; extdecl;
var
  method: TMethod;
begin
  method.Data := Pointer(AObj);
  method.Code := @(TTreeNode.CustomSort);
  try
    if AEventData = nil then
    begin
      TLCLEvent.Remove(method);
    end else
    begin
      if TLCLEvent.CheckAndUpdate(method, AEventData) then Exit;
      // call method
      Result := AObj.CustomSort(TLCLEvent.Create(AEventData).OnTTreeNodeCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;

//function
function TreeNode_DefaultTreeViewSort(AObj: TTreeNode; Node1, Node2: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultTreeViewSort'}
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

//function
function TreeNode_DisplayExpandSignLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayExpandSignLeft'}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignLeft();
  handleExceptionEnd
end;

//function
procedure TreeNode_DisplayExpandSignRect(AObj: TTreeNode; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DisplayExpandSignRect'}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRect();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayExpandSignRight(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayExpandSignRight'}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRight();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayIconLeft'}
  handleExceptionBegin
  Result := AObj.DisplayIconLeft();
  handleExceptionEnd
end;

//function
procedure TreeNode_DisplayRect(AObj: TTreeNode; TextOnly: LongBool; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DisplayRect'}
  handleExceptionBegin
  Result := AObj.DisplayRect(TextOnly);
  handleExceptionEnd
end;

//function
function TreeNode_DisplayStateIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayStateIconLeft'}
  handleExceptionBegin
  Result := AObj.DisplayStateIconLeft();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayTextLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayTextLeft'}
  handleExceptionBegin
  Result := AObj.DisplayTextLeft();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayTextRight(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayTextRight'}
  handleExceptionBegin
  Result := AObj.DisplayTextRight();
  handleExceptionEnd
end;

//function
function TreeNode_EditText(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EditText'}
  handleExceptionBegin
  Result := AObj.EditText();
  handleExceptionEnd
end;

//function
function TreeNode_FindNode(AObj: TTreeNode; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='FindNode'}
  handleExceptionBegin
  Result := AObj.FindNode(NodeText);
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChild'}
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstSibling'}
  handleExceptionBegin
  Result := AObj.GetFirstSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleChild'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetHandle(AObj: TTreeNode): THandle; extdecl;
begin
  {$define handleExceptionFuncName :='GetHandle'}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastChild'}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastSibling'}
  handleExceptionBegin
  Result := AObj.GetLastSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastSubChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastSubChild'}
  handleExceptionBegin
  Result := AObj.GetLastSubChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleChild'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNext(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNext'}
  handleExceptionBegin
  Result := AObj.GetNext();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextChild'}
  handleExceptionBegin
  Result := AObj.GetNextChild(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextExpanded'}
  handleExceptionBegin
  Result := AObj.GetNextExpanded(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextMultiSelected'}
  handleExceptionBegin
  Result := AObj.GetNextMultiSelected();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSibling'}
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextSkipChildren(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSkipChildren'}
  handleExceptionBegin
  Result := AObj.GetNextSkipChildren();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisible'}
  handleExceptionBegin
  Result := AObj.GetNextVisible(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleSibling'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetParentNodeOfAbsoluteLevel(AObj: TTreeNode; TheAbsoluteLevel: integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetParentNodeOfAbsoluteLevel'}
  handleExceptionBegin
  Result := AObj.GetParentNodeOfAbsoluteLevel(TheAbsoluteLevel);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrev(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrev'}
  handleExceptionBegin
  Result := AObj.GetPrev();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevChild'}
  handleExceptionBegin
  Result := AObj.GetPrevChild(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevExpanded'}
  handleExceptionBegin
  Result := AObj.GetPrevExpanded(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevMultiSelected'}
  handleExceptionBegin
  Result := AObj.GetPrevMultiSelected();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevSibling'}
  handleExceptionBegin
  Result := AObj.GetPrevSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevVisible'}
  handleExceptionBegin
  Result := AObj.GetPrevVisible(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevVisibleSibling'}
  handleExceptionBegin
  Result := AObj.GetPrevVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetTextPath(AObj: TTreeNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetTextPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetTextPath());
  handleExceptionEnd
end;

//function
function TreeNode_HasAsParent(AObj: TTreeNode; AValue: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasAsParent'}
  handleExceptionBegin
  Result := AObj.HasAsParent(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_IndexOf(AObj: TTreeNode; AValue: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOf'}
  handleExceptionBegin
  Result := AObj.IndexOf(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_IndexOfText(AObj: TTreeNode; const NodeText: PChar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfText'}
  handleExceptionBegin
  Result := AObj.IndexOfText(NodeText);
  handleExceptionEnd
end;

//function
function TreeNode_Class(): TClass; extdecl;
begin
  Result := TTreeNode;
end;

//procedure
procedure TreeNode_Collapse(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Collapse'}
  handleExceptionBegin
  AObj.Collapse(Recurse);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_ConsistencyCheck(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='ConsistencyCheck'}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Delete(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='Delete'}
  handleExceptionBegin
  AObj.Delete();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_DeleteChildren(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteChildren'}
  handleExceptionBegin
  AObj.DeleteChildren();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_EndEdit(AObj: TTreeNode; Cancel: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='EndEdit'}
  handleExceptionBegin
  AObj.EndEdit(Cancel);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Expand(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Expand'}
  handleExceptionBegin
  AObj.Expand(Recurse);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_ExpandParents(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='ExpandParents'}
  handleExceptionBegin
  AObj.ExpandParents();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_FreeAllNodeData(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='FreeAllNodeData'}
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MakeVisible(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='MakeVisible'}
  handleExceptionBegin
  AObj.MakeVisible();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MoveTo(AObj: TTreeNode; Destination: TTreeNode; Mode: TNodeAttachMode); extdecl;
begin
  {$define handleExceptionFuncName :='MoveTo'}
  handleExceptionBegin
  AObj.MoveTo(Destination, Mode);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MultiSelectGroup(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='MultiSelectGroup'}
  handleExceptionBegin
  AObj.MultiSelectGroup();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Update(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionFuncName :='Update'}
  handleExceptionBegin
  AObj.Update();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_WriteDebugReport(AObj: TTreeNode; const Prefix: PChar; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDebugReport'}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, Recurse);
  handleExceptionEnd
end;


exports
  TreeNode_Create,
  TreeNode_AbsoluteIndex,
  TreeNode_Count,
  TreeNode_Cut,
  TreeNode_Data,
  TreeNode_Deleting,
  TreeNode_DropTarget,
  TreeNode_Expanded,
  TreeNode_Focused,
  TreeNode_Handle,
  TreeNode_HasChildren,
  TreeNode_Height,
  TreeNode_ImageIndex,
  TreeNode_Index,
  TreeNode_IsFullHeightVisible,
  TreeNode_IsVisible,
  TreeNode_Items,
  TreeNode_Level,
  TreeNode_MultiSelected,
  TreeNode_NodeEffect,
  TreeNode_OverlayIndex,
  TreeNode_Owner,
  TreeNode_Parent,
  TreeNode_Selected,
  TreeNode_SelectedIndex,
  TreeNode_StateIndex,
  TreeNode_States,
  TreeNode_SubTreeCount,
  TreeNode_Text,
  TreeNode_Top,
  TreeNode_TreeNodes,
  TreeNode_TreeView,
  TreeNode_Visible,
  TreeNode_Enabled,
  TreeNode_AlphaSort,
  TreeNode_Bottom,
  TreeNode_BottomExpanded,
  TreeNode_CustomSort,
  TreeNode_DefaultTreeViewSort,
  TreeNode_DisplayExpandSignLeft,
  TreeNode_DisplayExpandSignRect,
  TreeNode_DisplayExpandSignRight,
  TreeNode_DisplayIconLeft,
  TreeNode_DisplayRect,
  TreeNode_DisplayStateIconLeft,
  TreeNode_DisplayTextLeft,
  TreeNode_DisplayTextRight,
  TreeNode_EditText,
  TreeNode_FindNode,
  TreeNode_GetFirstChild,
  TreeNode_GetFirstSibling,
  TreeNode_GetFirstVisibleChild,
  TreeNode_GetHandle,
  TreeNode_GetLastChild,
  TreeNode_GetLastSibling,
  TreeNode_GetLastSubChild,
  TreeNode_GetLastVisibleChild,
  TreeNode_GetNext,
  TreeNode_GetNextChild,
  TreeNode_GetNextExpanded,
  TreeNode_GetNextMultiSelected,
  TreeNode_GetNextSibling,
  TreeNode_GetNextSkipChildren,
  TreeNode_GetNextVisible,
  TreeNode_GetNextVisibleSibling,
  TreeNode_GetParentNodeOfAbsoluteLevel,
  TreeNode_GetPrev,
  TreeNode_GetPrevChild,
  TreeNode_GetPrevExpanded,
  TreeNode_GetPrevMultiSelected,
  TreeNode_GetPrevSibling,
  TreeNode_GetPrevVisible,
  TreeNode_GetPrevVisibleSibling,
  TreeNode_GetTextPath,
  TreeNode_HasAsParent,
  TreeNode_IndexOf,
  TreeNode_IndexOfText,
  TreeNode_Class,
  TreeNode_Collapse,
  TreeNode_ConsistencyCheck,
  TreeNode_Delete,
  TreeNode_DeleteChildren,
  TreeNode_EndEdit,
  TreeNode_Expand,
  TreeNode_ExpandParents,
  TreeNode_FreeAllNodeData,
  TreeNode_MakeVisible,
  TreeNode_MoveTo,
  TreeNode_MultiSelectGroup,
  TreeNode_Update,
  TreeNode_WriteDebugReport;