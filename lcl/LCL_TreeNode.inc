
//constructor
function TreeNode_Create(AnOwner: TTreeNodes): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := TTreeNode.Create(AnOwner);
  handleExceptionEnd
end;

//property
function TreeNode_AbsoluteIndex(AObj: TTreeNode): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AbsoluteIndex;
  handleExceptionEnd
end;

//property
function TreeNode_Count(AObj: TTreeNode): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function TreeNode_Cut(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Deleting;
  handleExceptionEnd
end;

//property
function TreeNode_DropTarget(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function TreeNode_HasChildren(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.IsFullHeightVisible;
  handleExceptionEnd
end;

//property
function TreeNode_IsVisible(AObj: TTreeNode): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsVisible;
  handleExceptionEnd
end;

//property
function TreeNode_Items(AIsSet: LongBool; AObj: TTreeNode; ItemIndex: Integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Level;
  handleExceptionEnd
end;

//property
function TreeNode_MultiSelected(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function TreeNode_Parent(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function TreeNode_Selected(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.States;
  handleExceptionEnd
end;

//property
function TreeNode_SubTreeCount(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SubTreeCount;
  handleExceptionEnd
end;

//property
function TreeNode_Text(AIsSet: LongBool; AObj: TTreeNode; AValue: PChar): PChar; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

//property
function TreeNode_TreeNodes(AObj: TTreeNode): TTreeNodes; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TreeNodes;
  handleExceptionEnd
end;

//property
function TreeNode_TreeView(AObj: TTreeNode): TCustomTreeView; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TreeView;
  handleExceptionEnd
end;

//property
function TreeNode_Visible(AIsSet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

//function
function TreeNode_Bottom(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Bottom();
  handleExceptionEnd
end;

//function
function TreeNode_BottomExpanded(AObj: TTreeNode): integer; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

//function
function TreeNode_DisplayExpandSignLeft(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayExpandSignLeft();
  handleExceptionEnd
end;

//function
procedure TreeNode_DisplayExpandSignRect(AObj: TTreeNode; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRect();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayExpandSignRight(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRight();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayIconLeft();
  handleExceptionEnd
end;

//function
procedure TreeNode_DisplayRect(AObj: TTreeNode; TextOnly: LongBool; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayRect(TextOnly);
  handleExceptionEnd
end;

//function
function TreeNode_DisplayStateIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayStateIconLeft();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayTextLeft(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayTextLeft();
  handleExceptionEnd
end;

//function
function TreeNode_DisplayTextRight(AObj: TTreeNode): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisplayTextRight();
  handleExceptionEnd
end;

//function
function TreeNode_EditText(AObj: TTreeNode): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EditText();
  handleExceptionEnd
end;

//function
function TreeNode_FindNode(AObj: TTreeNode; const NodeText: PChar): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNode(NodeText);
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetFirstVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetHandle(AObj: TTreeNode): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastSubChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastSubChild();
  handleExceptionEnd
end;

//function
function TreeNode_GetLastVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNext(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNext();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextChild(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextExpanded(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextMultiSelected();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextSkipChildren(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextSkipChildren();
  handleExceptionEnd
end;

//function
function TreeNode_GetNextVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextVisible(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetNextVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetParentNodeOfAbsoluteLevel(AObj: TTreeNode; TheAbsoluteLevel: integer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParentNodeOfAbsoluteLevel(TheAbsoluteLevel);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrev(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrev();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevChild(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevExpanded(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevMultiSelected();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevSibling();
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevVisible(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetPrevVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPrevVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

//function
function TreeNode_GetTextPath(AObj: TTreeNode): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTextPath());
  handleExceptionEnd
end;

//function
function TreeNode_HasAsParent(AObj: TTreeNode; AValue: TTreeNode): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasAsParent(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_IndexOf(AObj: TTreeNode; AValue: TTreeNode): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(AValue);
  handleExceptionEnd
end;

//function
function TreeNode_IndexOfText(AObj: TTreeNode; const NodeText: PChar): Integer; extdecl;
begin
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
  handleExceptionBegin
  AObj.Collapse(Recurse);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_ConsistencyCheck(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Delete(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Delete();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_DeleteChildren(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteChildren();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_EndEdit(AObj: TTreeNode; Cancel: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EndEdit(Cancel);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Expand(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Expand(Recurse);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_ExpandParents(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.ExpandParents();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_FreeAllNodeData(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MakeVisible(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.MakeVisible();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MoveTo(AObj: TTreeNode; Destination: TTreeNode; Mode: TNodeAttachMode); extdecl;
begin
  handleExceptionBegin
  AObj.MoveTo(Destination, Mode);
  handleExceptionEnd
end;

//procedure
procedure TreeNode_MultiSelectGroup(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.MultiSelectGroup();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_Update(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Update();
  handleExceptionEnd
end;

//procedure
procedure TreeNode_WriteDebugReport(AObj: TTreeNode; const Prefix: PChar; Recurse: LongBool); extdecl;
begin
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