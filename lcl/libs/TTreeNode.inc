// constructor
function TTreeNode_Create(AnOwner: TTreeNodes): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12700}
  handleExceptionBegin
  Result := TTreeNode.Create(AnOwner);
  handleExceptionEnd
end;

// function
function TTreeNode_AlphaSort(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12701}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

// function
function TTreeNode_Bottom(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12702}
  handleExceptionBegin
  Result := AObj.Bottom();
  handleExceptionEnd
end;

// function
function TTreeNode_BottomExpanded(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12703}
  handleExceptionBegin
  Result := AObj.BottomExpanded();
  handleExceptionEnd
end;

// function
function TTreeNode_DefaultTreeViewSort(AObj: TTreeNode; Node1: TTreeNode; Node2: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 12704}
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayExpandSignLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12705}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignLeft();
  handleExceptionEnd
end;

// function
procedure TTreeNode_DisplayExpandSignRect(AObj: TTreeNode; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 12706}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRect();
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayExpandSignRight(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12707}
  handleExceptionBegin
  Result := AObj.DisplayExpandSignRight();
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12708}
  handleExceptionBegin
  Result := AObj.DisplayIconLeft();
  handleExceptionEnd
end;

// function
procedure TTreeNode_DisplayRect(AObj: TTreeNode; TextOnly: LongBool; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 12709}
  handleExceptionBegin
  Result := AObj.DisplayRect(TextOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayStateIconLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12710}
  handleExceptionBegin
  Result := AObj.DisplayStateIconLeft();
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayTextLeft(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12711}
  handleExceptionBegin
  Result := AObj.DisplayTextLeft();
  handleExceptionEnd
end;

// function
function TTreeNode_DisplayTextRight(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12712}
  handleExceptionBegin
  Result := AObj.DisplayTextRight();
  handleExceptionEnd
end;

// function
function TTreeNode_EditText(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12713}
  handleExceptionBegin
  Result := AObj.EditText();
  handleExceptionEnd
end;

// function
function TTreeNode_FindNode(AObj: TTreeNode; const NodeText: PChar): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12714}
  handleExceptionBegin
  Result := AObj.FindNode(NodeText);
  handleExceptionEnd
end;

// function
function TTreeNode_GetFirstChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12715}
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

// function
function TTreeNode_GetFirstSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12716}
  handleExceptionBegin
  Result := AObj.GetFirstSibling();
  handleExceptionEnd
end;

// function
function TTreeNode_GetFirstVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12717}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetHandle(AObj: TTreeNode): TLCLHandle; extdecl;
begin
  {$define handleExceptionID := 12718}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TTreeNode_GetLastChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12719}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

// function
function TTreeNode_GetLastSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12720}
  handleExceptionBegin
  Result := AObj.GetLastSibling();
  handleExceptionEnd
end;

// function
function TTreeNode_GetLastSubChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12721}
  handleExceptionBegin
  Result := AObj.GetLastSubChild();
  handleExceptionEnd
end;

// function
function TTreeNode_GetLastVisibleChild(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12722}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChild(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetNext(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12723}
  handleExceptionBegin
  Result := AObj.GetNext();
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12724}
  handleExceptionBegin
  Result := AObj.GetNextChild(AValue);
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12725}
  handleExceptionBegin
  Result := AObj.GetNextExpanded(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12726}
  handleExceptionBegin
  Result := AObj.GetNextMultiSelected();
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12727}
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextSkipChildren(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12728}
  handleExceptionBegin
  Result := AObj.GetNextSkipChildren();
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12729}
  handleExceptionBegin
  Result := AObj.GetNextVisible(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetNextVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12730}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetParentNodeOfAbsoluteLevel(AObj: TTreeNode; TheAbsoluteLevel: integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12731}
  handleExceptionBegin
  Result := AObj.GetParentNodeOfAbsoluteLevel(TheAbsoluteLevel);
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrev(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12732}
  handleExceptionBegin
  Result := AObj.GetPrev();
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12733}
  handleExceptionBegin
  Result := AObj.GetPrevChild(AValue);
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevExpanded(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12734}
  handleExceptionBegin
  Result := AObj.GetPrevExpanded(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12735}
  handleExceptionBegin
  Result := AObj.GetPrevMultiSelected();
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12736}
  handleExceptionBegin
  Result := AObj.GetPrevSibling();
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevVisible(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12737}
  handleExceptionBegin
  Result := AObj.GetPrevVisible(aEnabledOnly);
  handleExceptionEnd
end;

// function
function TTreeNode_GetPrevVisibleSibling(AObj: TTreeNode; aEnabledOnly: LongBool): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12738}
  handleExceptionBegin
  Result := AObj.GetPrevVisibleSibling(aEnabledOnly);
  handleExceptionEnd
end;

// function
procedure TTreeNode_GetTextPath(AObj: TTreeNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 12739}
  handleExceptionBegin
  StringBufferCreate(AObj.GetTextPath(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TTreeNode_HasAsParent(AObj: TTreeNode; AValue: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12740}
  handleExceptionBegin
  Result := AObj.HasAsParent(AValue);
  handleExceptionEnd
end;

// function
function TTreeNode_IndexOf(AObj: TTreeNode; AValue: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 12741}
  handleExceptionBegin
  Result := AObj.IndexOf(AValue);
  handleExceptionEnd
end;

// function
function TTreeNode_IndexOfText(AObj: TTreeNode; const NodeText: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 12742}
  handleExceptionBegin
  Result := AObj.IndexOfText(NodeText);
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_Collapse(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionID := 12743}
  handleExceptionBegin
  AObj.Collapse(Recurse);
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_ConsistencyCheck(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12744}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_Delete(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12745}
  handleExceptionBegin
  AObj.Delete();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_DeleteChildren(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12746}
  handleExceptionBegin
  AObj.DeleteChildren();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_EndEdit(AObj: TTreeNode; Cancel: LongBool); extdecl;
begin
  {$define handleExceptionID := 12747}
  handleExceptionBegin
  AObj.EndEdit(Cancel);
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_Expand(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionID := 12748}
  handleExceptionBegin
  AObj.Expand(Recurse);
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_ExpandParents(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12749}
  handleExceptionBegin
  AObj.ExpandParents();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_FreeAllNodeData(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12750}
  handleExceptionBegin
  AObj.FreeAllNodeData();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_MakeVisible(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12751}
  handleExceptionBegin
  AObj.MakeVisible();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_MoveTo(AObj: TTreeNode; Destination: TTreeNode; Mode: TNodeAttachMode); extdecl;
begin
  {$define handleExceptionID := 12752}
  handleExceptionBegin
  AObj.MoveTo(Destination, Mode);
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_MultiSelectGroup(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12753}
  handleExceptionBegin
  AObj.MultiSelectGroup();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_Update(AObj: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 12754}
  handleExceptionBegin
  AObj.Update();
  handleExceptionEnd
end;

// procedure
procedure TTreeNode_WriteDebugReport(AObj: TTreeNode; const Prefix: PChar; Recurse: LongBool); extdecl;
begin
  {$define handleExceptionID := 12755}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, Recurse);
  handleExceptionEnd
end;

// property
function TTreeNode_AbsoluteIndex(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 12756}
  handleExceptionBegin
  Result := AObj.AbsoluteIndex;
  handleExceptionEnd
end;

// property
function TTreeNode_Count(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 12757}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TTreeNode_Cut(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12758}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cut := AValue
  end else
    Result := AObj.Cut;
  handleExceptionEnd
end;

// property
function TTreeNode_Data(ASet: LongBool; AObj: TTreeNode; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 12759}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Data := AValue
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

// property
function TTreeNode_Deleting(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12760}
  handleExceptionBegin
  Result := AObj.Deleting;
  handleExceptionEnd
end;

// property
function TTreeNode_DropTarget(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12761}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTarget := AValue
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

// property
function TTreeNode_Expanded(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12762}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Expanded := AValue
  end else
    Result := AObj.Expanded;
  handleExceptionEnd
end;

// property
function TTreeNode_Focused(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12763}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Focused := AValue
  end else
    Result := AObj.Focused;
  handleExceptionEnd
end;

// property
function TTreeNode_Handle(AObj: TTreeNode): TLCLHandle; extdecl;
begin
  {$define handleExceptionID := 12764}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TTreeNode_HasChildren(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12765}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HasChildren := AValue
  end else
    Result := AObj.HasChildren;
  handleExceptionEnd
end;

// property
function TTreeNode_Height(ASet: LongBool; AObj: TTreeNode; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 12766}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TTreeNode_ImageIndex(ASet: LongBool; AObj: TTreeNode; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 12767}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TTreeNode_Index(ASet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12768}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Index := AValue
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

// property
function TTreeNode_IsFullHeightVisible(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12769}
  handleExceptionBegin
  Result := AObj.IsFullHeightVisible;
  handleExceptionEnd
end;

// property
function TTreeNode_IsVisible(AObj: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 12770}
  handleExceptionBegin
  Result := AObj.IsVisible;
  handleExceptionEnd
end;

// property
function TTreeNode_Items(ASet: LongBool; AObj: TTreeNode; ItemIndex: Integer; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12771}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[ItemIndex] := AValue
  end else
    Result := AObj.Items[ItemIndex];
  handleExceptionEnd
end;

// property
function TTreeNode_Level(AObj: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 12772}
  handleExceptionBegin
  Result := AObj.Level;
  handleExceptionEnd
end;

// property
function TTreeNode_MultiSelected(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12773}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelected := AValue
  end else
    Result := AObj.MultiSelected;
  handleExceptionEnd
end;

// property
function TTreeNode_NodeEffect(ASet: LongBool; AObj: TTreeNode; AValue: TGraphicsDrawEffect): TGraphicsDrawEffect; extdecl;
begin
  {$define handleExceptionID := 12774}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeEffect := AValue
  end else
    Result := AObj.NodeEffect;
  handleExceptionEnd
end;

// property
function TTreeNode_OverlayIndex(ASet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12775}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OverlayIndex := AValue
  end else
    Result := AObj.OverlayIndex;
  handleExceptionEnd
end;

// property
function TTreeNode_Owner(AObj: TTreeNode): TTreeNodes; extdecl;
begin
  {$define handleExceptionID := 12776}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TTreeNode_Parent(AObj: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 12777}
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

// property
function TTreeNode_Selected(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12778}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TTreeNode_SelectedIndex(ASet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12779}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedIndex := AValue
  end else
    Result := AObj.SelectedIndex;
  handleExceptionEnd
end;

// property
function TTreeNode_StateIndex(ASet: LongBool; AObj: TTreeNode; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12780}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateIndex := AValue
  end else
    Result := AObj.StateIndex;
  handleExceptionEnd
end;

// property
function TTreeNode_States(AObj: TTreeNode): TNodeStates; extdecl;
begin
  {$define handleExceptionID := 12781}
  handleExceptionBegin
  Result := AObj.States;
  handleExceptionEnd
end;

// property
function TTreeNode_SubTreeCount(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12782}
  handleExceptionBegin
  Result := AObj.SubTreeCount;
  handleExceptionEnd
end;

// property
procedure TTreeNode_Text(ASet: LongBool; AObj: TTreeNode; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 12783}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TTreeNode_Top(AObj: TTreeNode): integer; extdecl;
begin
  {$define handleExceptionID := 12784}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TTreeNode_TreeNodes(AObj: TTreeNode): TTreeNodes; extdecl;
begin
  {$define handleExceptionID := 12785}
  handleExceptionBegin
  Result := AObj.TreeNodes;
  handleExceptionEnd
end;

// property
function TTreeNode_TreeView(AObj: TTreeNode): TCustomTreeView; extdecl;
begin
  {$define handleExceptionID := 12786}
  handleExceptionBegin
  Result := AObj.TreeView;
  handleExceptionEnd
end;

// property
function TTreeNode_Visible(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12787}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TTreeNode_Enabled(ASet: LongBool; AObj: TTreeNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12788}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

exports
  TTreeNode_Create,
  TTreeNode_AlphaSort,
  TTreeNode_Bottom,
  TTreeNode_BottomExpanded,
  TTreeNode_DefaultTreeViewSort,
  TTreeNode_DisplayExpandSignLeft,
  TTreeNode_DisplayExpandSignRect,
  TTreeNode_DisplayExpandSignRight,
  TTreeNode_DisplayIconLeft,
  TTreeNode_DisplayRect,
  TTreeNode_DisplayStateIconLeft,
  TTreeNode_DisplayTextLeft,
  TTreeNode_DisplayTextRight,
  TTreeNode_EditText,
  TTreeNode_FindNode,
  TTreeNode_GetFirstChild,
  TTreeNode_GetFirstSibling,
  TTreeNode_GetFirstVisibleChild,
  TTreeNode_GetHandle,
  TTreeNode_GetLastChild,
  TTreeNode_GetLastSibling,
  TTreeNode_GetLastSubChild,
  TTreeNode_GetLastVisibleChild,
  TTreeNode_GetNext,
  TTreeNode_GetNextChild,
  TTreeNode_GetNextExpanded,
  TTreeNode_GetNextMultiSelected,
  TTreeNode_GetNextSibling,
  TTreeNode_GetNextSkipChildren,
  TTreeNode_GetNextVisible,
  TTreeNode_GetNextVisibleSibling,
  TTreeNode_GetParentNodeOfAbsoluteLevel,
  TTreeNode_GetPrev,
  TTreeNode_GetPrevChild,
  TTreeNode_GetPrevExpanded,
  TTreeNode_GetPrevMultiSelected,
  TTreeNode_GetPrevSibling,
  TTreeNode_GetPrevVisible,
  TTreeNode_GetPrevVisibleSibling,
  TTreeNode_GetTextPath,
  TTreeNode_HasAsParent,
  TTreeNode_IndexOf,
  TTreeNode_IndexOfText,
  TTreeNode_Collapse,
  TTreeNode_ConsistencyCheck,
  TTreeNode_Delete,
  TTreeNode_DeleteChildren,
  TTreeNode_EndEdit,
  TTreeNode_Expand,
  TTreeNode_ExpandParents,
  TTreeNode_FreeAllNodeData,
  TTreeNode_MakeVisible,
  TTreeNode_MoveTo,
  TTreeNode_MultiSelectGroup,
  TTreeNode_Update,
  TTreeNode_WriteDebugReport,
  TTreeNode_AbsoluteIndex,
  TTreeNode_Count,
  TTreeNode_Cut,
  TTreeNode_Data,
  TTreeNode_Deleting,
  TTreeNode_DropTarget,
  TTreeNode_Expanded,
  TTreeNode_Focused,
  TTreeNode_Handle,
  TTreeNode_HasChildren,
  TTreeNode_Height,
  TTreeNode_ImageIndex,
  TTreeNode_Index,
  TTreeNode_IsFullHeightVisible,
  TTreeNode_IsVisible,
  TTreeNode_Items,
  TTreeNode_Level,
  TTreeNode_MultiSelected,
  TTreeNode_NodeEffect,
  TTreeNode_OverlayIndex,
  TTreeNode_Owner,
  TTreeNode_Parent,
  TTreeNode_Selected,
  TTreeNode_SelectedIndex,
  TTreeNode_StateIndex,
  TTreeNode_States,
  TTreeNode_SubTreeCount,
  TTreeNode_Text,
  TTreeNode_Top,
  TTreeNode_TreeNodes,
  TTreeNode_TreeView,
  TTreeNode_Visible,
  TTreeNode_Enabled;