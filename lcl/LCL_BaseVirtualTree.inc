
//constructor
function BaseVirtualTree_Create(AOwner: TComponent): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TBaseVirtualTree.Create(AOwner);
  handleExceptionEnd
end;

//property
function BaseVirtualTree_BottomNode(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='BottomNode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BottomNode := AValue;
  end else
    Result := AObj.BottomNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_CheckedCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='CheckedCount'}
  handleExceptionBegin
  Result := AObj.CheckedCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_CheckImages(AObj: TBaseVirtualTree): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='CheckImages'}
  handleExceptionBegin
  Result := AObj.CheckImages;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_CheckState(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: TCheckState): TCheckState; extdecl;
begin
  {$define handleExceptionFuncName :='CheckState'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckState[Node] := AValue;
  end else
    Result := AObj.CheckState[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_CheckType(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: TCheckType): TCheckType; extdecl;
begin
  {$define handleExceptionFuncName :='CheckType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckType[Node] := AValue;
  end else
    Result := AObj.CheckType[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_ChildCount(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='ChildCount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChildCount[Node] := AValue;
  end else
    Result := AObj.ChildCount[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_ChildrenInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ChildrenInitialized'}
  handleExceptionBegin
  Result := AObj.ChildrenInitialized[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_CutCopyCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='CutCopyCount'}
  handleExceptionBegin
  Result := AObj.CutCopyCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_DragImage(AObj: TBaseVirtualTree): TVTDragImage; extdecl;
begin
  {$define handleExceptionFuncName :='DragImage'}
  handleExceptionBegin
  Result := AObj.DragImage;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_DropTargetNode(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='DropTargetNode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropTargetNode := AValue;
  end else
    Result := AObj.DropTargetNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_EmptyListMessage(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EmptyListMessage'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EmptyListMessage := AValue;
  end else
    Result := ToPChar(AObj.EmptyListMessage);
  handleExceptionEnd
end;

//property
function BaseVirtualTree_Expanded(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Expanded'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Expanded[Node] := AValue;
  end else
    Result := AObj.Expanded[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_FocusedColumn(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: TColumnIndex): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='FocusedColumn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusedColumn := AValue;
  end else
    Result := AObj.FocusedColumn;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_FocusedNode(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='FocusedNode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusedNode := AValue;
  end else
    Result := AObj.FocusedNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_FullyVisible(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FullyVisible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FullyVisible[Node] := AValue;
  end else
    Result := AObj.FullyVisible[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_HasChildren(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasChildren'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HasChildren[Node] := AValue;
  end else
    Result := AObj.HasChildren[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_HotNode(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='HotNode'}
  handleExceptionBegin
  Result := AObj.HotNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_IsDisabled(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDisabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsDisabled[Node] := AValue;
  end else
    Result := AObj.IsDisabled[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_IsEffectivelyFiltered(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEffectivelyFiltered'}
  handleExceptionBegin
  Result := AObj.IsEffectivelyFiltered[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_IsEffectivelyVisible(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEffectivelyVisible'}
  handleExceptionBegin
  Result := AObj.IsEffectivelyVisible[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_IsFiltered(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFiltered'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsFiltered[Node] := AValue;
  end else
    Result := AObj.IsFiltered[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_NodeIsVisible(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NodeIsVisible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsVisible[Node] := AValue;
  end else
    Result := AObj.IsVisible[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_MultiLine(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultiLine'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiLine[Node] := AValue;
  end else
    Result := AObj.MultiLine[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_NodeHeight(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='NodeHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeHeight[Node] := AValue;
  end else
    Result := AObj.NodeHeight[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_NodeParent(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='NodeParent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeParent[Node] := AValue;
  end else
    Result := AObj.NodeParent[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_OffsetX(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='OffsetX'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OffsetX := AValue;
  end else
    Result := AObj.OffsetX;
  handleExceptionEnd
end;

//property
procedure BaseVirtualTree_OffsetXY(AIsSet: LongBool; AObj: TBaseVirtualTree; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='OffsetXY'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OffsetXY := AValue;
  end else
    Result := AObj.OffsetXY;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_OffsetY(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='OffsetY'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OffsetY := AValue;
  end else
    Result := AObj.OffsetY;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_OperationCount(AObj: TBaseVirtualTree): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='OperationCount'}
  handleExceptionBegin
  Result := AObj.OperationCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_RootNode(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='RootNode'}
  handleExceptionBegin
  Result := AObj.RootNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_SearchBuffer(AObj: TBaseVirtualTree): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='SearchBuffer'}
  handleExceptionBegin
  Result := ToPChar(AObj.SearchBuffer);
  handleExceptionEnd
end;

//property
function BaseVirtualTree_Selected(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Selected'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected[Node] := AValue;
  end else
    Result := AObj.Selected[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_SelectionLocked(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionLocked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionLocked := AValue;
  end else
    Result := AObj.SelectionLocked;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_TotalCount(AObj: TBaseVirtualTree): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='TotalCount'}
  handleExceptionBegin
  Result := AObj.TotalCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_TreeStates(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: TVirtualTreeStates): TVirtualTreeStates; extdecl;
begin
  {$define handleExceptionFuncName :='TreeStates'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeStates := AValue;
  end else
    Result := AObj.TreeStates;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_SelectedCount(AObj: TBaseVirtualTree): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedCount'}
  handleExceptionBegin
  Result := AObj.SelectedCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_TopNode(AIsSet: LongBool; AObj: TBaseVirtualTree; AValue: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='TopNode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopNode := AValue;
  end else
    Result := AObj.TopNode;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_VerticalAlignment(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionFuncName :='VerticalAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerticalAlignment[Node] := AValue;
  end else
    Result := AObj.VerticalAlignment[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_VisibleCount(AObj: TBaseVirtualTree): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleCount'}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

//property
function BaseVirtualTree_VisiblePath(AIsSet: LongBool; AObj: TBaseVirtualTree; Node: PVirtualNode; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='VisiblePath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VisiblePath[Node] := AValue;
  end else
    Result := AObj.VisiblePath[Node];
  handleExceptionEnd
end;

//property
function BaseVirtualTree_UpdateCount(AObj: TBaseVirtualTree): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='UpdateCount'}
  handleExceptionBegin
  Result := AObj.UpdateCount;
  handleExceptionEnd
end;

//function
function BaseVirtualTree_AbsoluteIndex(AObj: TBaseVirtualTree; Node: PVirtualNode): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='AbsoluteIndex'}
  handleExceptionBegin
  Result := AObj.AbsoluteIndex(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_AddChild(AObj: TBaseVirtualTree; Parent: PVirtualNode; UserData: Pointer): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='AddChild'}
  handleExceptionBegin
  Result := AObj.AddChild(Parent, UserData);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CancelEditNode(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CancelEditNode'}
  handleExceptionBegin
  Result := AObj.CancelEditNode();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CanEdit(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanEdit'}
  handleExceptionBegin
  Result := AObj.CanEdit(Node, Column);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CopyTo(AObj: TBaseVirtualTree; Source: PVirtualNode; Tree: TBaseVirtualTree; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='CopyTo'}
  handleExceptionBegin
  Result := AObj.CopyTo(Source, Tree, Mode, ChildrenOnly);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CopyTo1(AObj: TBaseVirtualTree; Source, Target: PVirtualNode; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='CopyTo1'}
  handleExceptionBegin
  Result := AObj.CopyTo(Source, Target, Mode, ChildrenOnly);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_EditNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EditNode'}
  handleExceptionBegin
  Result := AObj.EditNode(Node, Column);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_EndEditNode(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EndEditNode'}
  handleExceptionBegin
  Result := AObj.EndEditNode();
  handleExceptionEnd
end;

//function
procedure BaseVirtualTree_GetDisplayRect(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; TextOnly: LongBool; Unclipped: LongBool; ApplyCellContentMargin: LongBool; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetDisplayRect'}
  handleExceptionBegin
  Result := AObj.GetDisplayRect(Node, Column, TextOnly, Unclipped, ApplyCellContentMargin);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetEffectivelyFiltered(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetEffectivelyFiltered'}
  handleExceptionBegin
  Result := AObj.GetEffectivelyFiltered(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetEffectivelyVisible(AObj: TBaseVirtualTree; Node: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetEffectivelyVisible'}
  handleExceptionBegin
  Result := AObj.GetEffectivelyVisible(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirst(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirst'}
  handleExceptionBegin
  Result := AObj.GetFirst(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstChecked(AObj: TBaseVirtualTree; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChecked'}
  handleExceptionBegin
  Result := AObj.GetFirstChecked(State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstChild(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChild'}
  handleExceptionBegin
  Result := AObj.GetFirstChild(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChildNoInit'}
  handleExceptionBegin
  Result := AObj.GetFirstChildNoInit(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstCutCopy(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstCutCopy'}
  handleExceptionBegin
  Result := AObj.GetFirstCutCopy(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstInitialized(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstInitialized'}
  handleExceptionBegin
  Result := AObj.GetFirstInitialized(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstLeaf(AObj: TBaseVirtualTree): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstLeaf'}
  handleExceptionBegin
  Result := AObj.GetFirstLeaf();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstLevel(AObj: TBaseVirtualTree; NodeLevel: uint32): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstLevel'}
  handleExceptionBegin
  Result := AObj.GetFirstLevel(NodeLevel);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstNoInit(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstNoInit'}
  handleExceptionBegin
  Result := AObj.GetFirstNoInit(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstSelected(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstSelected'}
  handleExceptionBegin
  Result := AObj.GetFirstSelected(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisible'}
  handleExceptionBegin
  Result := AObj.GetFirstVisible(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstVisibleChild(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleChild'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChild(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstVisibleChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleChildNoInit'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleChildNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetFirstVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleNoInit'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleNoInit(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLast(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLast'}
  handleExceptionBegin
  Result := AObj.GetLast(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastInitialized'}
  handleExceptionBegin
  Result := AObj.GetLastInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastNoInit'}
  handleExceptionBegin
  Result := AObj.GetLastNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastChild(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastChild'}
  handleExceptionBegin
  Result := AObj.GetLastChild(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastChildNoInit'}
  handleExceptionBegin
  Result := AObj.GetLastChildNoInit(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisible'}
  handleExceptionBegin
  Result := AObj.GetLastVisible(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastVisibleChild(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleChild'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChild(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastVisibleChildNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleChildNoInit'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleChildNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetLastVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleNoInit'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleNoInit(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetMaxColumnWidth(AObj: TBaseVirtualTree; Column: TColumnIndex; UseSmartColumnWidth: LongBool): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetMaxColumnWidth'}
  handleExceptionBegin
  Result := AObj.GetMaxColumnWidth(Column, UseSmartColumnWidth);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNext(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNext'}
  handleExceptionBegin
  Result := AObj.GetNext(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextChecked(AObj: TBaseVirtualTree; Node: PVirtualNode; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextChecked'}
  handleExceptionBegin
  Result := AObj.GetNextChecked(Node, State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextChecked1(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextChecked1'}
  handleExceptionBegin
  Result := AObj.GetNextChecked(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextCutCopy(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextCutCopy'}
  handleExceptionBegin
  Result := AObj.GetNextCutCopy(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextInitialized'}
  handleExceptionBegin
  Result := AObj.GetNextInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextLeaf(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextLeaf'}
  handleExceptionBegin
  Result := AObj.GetNextLeaf(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextLevel(AObj: TBaseVirtualTree; Node: PVirtualNode; NodeLevel: uint32): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextLevel'}
  handleExceptionBegin
  Result := AObj.GetNextLevel(Node, NodeLevel);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextNoInit'}
  handleExceptionBegin
  Result := AObj.GetNextNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextSelected(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSelected'}
  handleExceptionBegin
  Result := AObj.GetNextSelected(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextSibling(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSibling'}
  handleExceptionBegin
  Result := AObj.GetNextSibling(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSiblingNoInit'}
  handleExceptionBegin
  Result := AObj.GetNextSiblingNoInit(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisible'}
  handleExceptionBegin
  Result := AObj.GetNextVisible(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleNoInit'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextVisibleSibling(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleSibling'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSibling(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNextVisibleSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleSiblingNoInit'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleSiblingNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNodeAt(AObj: TBaseVirtualTree; var P: TPoint): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeAt'}
  handleExceptionBegin
  Result := AObj.GetNodeAt(P);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNodeAt1(AObj: TBaseVirtualTree; X, Y: Integer): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeAt1'}
  handleExceptionBegin
  Result := AObj.GetNodeAt(X, Y);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNodeAt2(AObj: TBaseVirtualTree; X, Y: Integer; Relative: LongBool; var NodeTop: Integer): PVirtualNode; extdecl;
var
  RetNodeTop: Integer;
begin
  {$define handleExceptionFuncName :='GetNodeAt2'}
  handleExceptionBegin
  RetNodeTop := NodeTop;
  Result := AObj.GetNodeAt(X, Y, Relative, RetNodeTop);
  NodeTop := RetNodeTop;
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNodeData(AObj: TBaseVirtualTree; Node: PVirtualNode): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeData'}
  handleExceptionBegin
  Result := AObj.GetNodeData(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetNodeLevel(AObj: TBaseVirtualTree; Node: PVirtualNode): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeLevel'}
  handleExceptionBegin
  Result := AObj.GetNodeLevel(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPrevious(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPrevious'}
  handleExceptionBegin
  Result := AObj.GetPrevious(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousChecked(AObj: TBaseVirtualTree; Node: PVirtualNode; State: TCheckState; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousChecked'}
  handleExceptionBegin
  Result := AObj.GetPreviousChecked(Node, State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousCutCopy(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousCutCopy'}
  handleExceptionBegin
  Result := AObj.GetPreviousCutCopy(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousInitialized(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousInitialized'}
  handleExceptionBegin
  Result := AObj.GetPreviousInitialized(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousLeaf(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousLeaf'}
  handleExceptionBegin
  Result := AObj.GetPreviousLeaf(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousLevel(AObj: TBaseVirtualTree; Node: PVirtualNode; NodeLevel: uint32): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousLevel'}
  handleExceptionBegin
  Result := AObj.GetPreviousLevel(Node, NodeLevel);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousNoInit'}
  handleExceptionBegin
  Result := AObj.GetPreviousNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousSelected(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousSelected'}
  handleExceptionBegin
  Result := AObj.GetPreviousSelected(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousSibling(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousSibling'}
  handleExceptionBegin
  Result := AObj.GetPreviousSibling(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousSiblingNoInit'}
  handleExceptionBegin
  Result := AObj.GetPreviousSiblingNoInit(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousVisible(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousVisible'}
  handleExceptionBegin
  Result := AObj.GetPreviousVisible(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousVisibleNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousVisibleNoInit'}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleNoInit(Node, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousVisibleSibling(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousVisibleSibling'}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleSibling(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetPreviousVisibleSiblingNoInit(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousVisibleSiblingNoInit'}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleSiblingNoInit(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetSortedCutCopySet(AObj: TBaseVirtualTree; Resolve: LongBool): TNodeArray; extdecl;
begin
  {$define handleExceptionFuncName :='GetSortedCutCopySet'}
  handleExceptionBegin
  Result := AObj.GetSortedCutCopySet(Resolve);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetSortedSelection(AObj: TBaseVirtualTree; Resolve: LongBool): TNodeArray; extdecl;
begin
  {$define handleExceptionFuncName :='GetSortedSelection'}
  handleExceptionBegin
  Result := AObj.GetSortedSelection(Resolve);
  handleExceptionEnd
end;

//function
procedure BaseVirtualTree_GetTreeRect(AObj: TBaseVirtualTree; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetTreeRect'}
  handleExceptionBegin
  Result := AObj.GetTreeRect();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_GetVisibleParent(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetVisibleParent'}
  handleExceptionBegin
  Result := AObj.GetVisibleParent(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_HasAsParent(AObj: TBaseVirtualTree; Node, PotentialParent: PVirtualNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasAsParent'}
  handleExceptionBegin
  Result := AObj.HasAsParent(Node, PotentialParent);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_InsertNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Mode: TVTNodeAttachMode; UserData: Pointer): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='InsertNode'}
  handleExceptionBegin
  Result := AObj.InsertNode(Node, Mode, UserData);
  handleExceptionEnd
end;

//function
procedure BaseVirtualTree_InvalidateNode(AObj: TBaseVirtualTree; Node: PVirtualNode; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateNode'}
  handleExceptionBegin
  Result := AObj.InvalidateNode(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_IsEditing(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEditing'}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_IsMouseSelecting(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMouseSelecting'}
  handleExceptionBegin
  Result := AObj.IsMouseSelecting();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_IsEmpty(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEmpty'}
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_PasteFromClipboard(AObj: TBaseVirtualTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PasteFromClipboard'}
  handleExceptionBegin
  Result := AObj.PasteFromClipboard();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_ScrollIntoView(AObj: TBaseVirtualTree; Node: PVirtualNode; Center: LongBool; Horizontally: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ScrollIntoView'}
  handleExceptionBegin
  Result := AObj.ScrollIntoView(Node, Center, Horizontally);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_ScrollIntoView1(AObj: TBaseVirtualTree; Column: TColumnIndex; Center: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ScrollIntoView1'}
  handleExceptionBegin
  Result := AObj.ScrollIntoView(Column, Center);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_Nodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='Nodes'}
  handleExceptionBegin
  Result := AObj.Nodes(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CheckedNodes(AObj: TBaseVirtualTree; State: TCheckState; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='CheckedNodes'}
  handleExceptionBegin
  Result := AObj.CheckedNodes(State, ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_ChildNodes(AObj: TBaseVirtualTree; Node: PVirtualNode): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='ChildNodes'}
  handleExceptionBegin
  Result := AObj.ChildNodes(Node);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_CutCopyNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='CutCopyNodes'}
  handleExceptionBegin
  Result := AObj.CutCopyNodes(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_InitializedNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='InitializedNodes'}
  handleExceptionBegin
  Result := AObj.InitializedNodes(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_LeafNodes(AObj: TBaseVirtualTree): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='LeafNodes'}
  handleExceptionBegin
  Result := AObj.LeafNodes();
  handleExceptionEnd
end;

//function
function BaseVirtualTree_LevelNodes(AObj: TBaseVirtualTree; NodeLevel: uint32): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='LevelNodes'}
  handleExceptionBegin
  Result := AObj.LevelNodes(NodeLevel);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_NoInitNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='NoInitNodes'}
  handleExceptionBegin
  Result := AObj.NoInitNodes(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_SelectedNodes(AObj: TBaseVirtualTree; ConsiderChildrenAbove: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedNodes'}
  handleExceptionBegin
  Result := AObj.SelectedNodes(ConsiderChildrenAbove);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_VisibleNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleNodes'}
  handleExceptionBegin
  Result := AObj.VisibleNodes(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_VisibleChildNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleChildNodes'}
  handleExceptionBegin
  Result := AObj.VisibleChildNodes(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_VisibleChildNoInitNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; IncludeFiltered: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleChildNoInitNodes'}
  handleExceptionBegin
  Result := AObj.VisibleChildNoInitNodes(Node, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_VisibleNoInitNodes(AObj: TBaseVirtualTree; Node: PVirtualNode; ConsiderChildrenAbove: LongBool; IncludeFiltered: LongBool): TVTVirtualNodeEnumeration; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleNoInitNodes'}
  handleExceptionBegin
  Result := AObj.VisibleNoInitNodes(Node, ConsiderChildrenAbove, IncludeFiltered);
  handleExceptionEnd
end;

//function
function BaseVirtualTree_Class(): TClass; extdecl;
begin
  Result := TBaseVirtualTree;
end;

//procedure
procedure BaseVirtualTree_AddFromStream(AObj: TBaseVirtualTree; Stream: TStream; TargetNode: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='AddFromStream'}
  handleExceptionBegin
  AObj.AddFromStream(Stream, TargetNode);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_BeginSynch(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='BeginSynch'}
  handleExceptionBegin
  AObj.BeginSynch();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_BeginUpdate(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_CancelCutOrCopy(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='CancelCutOrCopy'}
  handleExceptionBegin
  AObj.CancelCutOrCopy();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_CancelOperation(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='CancelOperation'}
  handleExceptionBegin
  AObj.CancelOperation();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_Clear(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ClearChecked(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='ClearChecked'}
  handleExceptionBegin
  AObj.ClearChecked();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ClearSelection(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelection'}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_CopyToClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='CopyToClipboard'}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_CutToClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='CutToClipboard'}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_DeleteChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; ResetHasChildren: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteChildren'}
  handleExceptionBegin
  AObj.DeleteChildren(Node, ResetHasChildren);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_DeleteNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Reindex: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteNode'}
  handleExceptionBegin
  AObj.DeleteNode(Node, Reindex);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_DeleteSelectedNodes(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteSelectedNodes'}
  handleExceptionBegin
  AObj.DeleteSelectedNodes();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_EndSynch(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='EndSynch'}
  handleExceptionBegin
  AObj.EndSynch();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_EndUpdate(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_EnsureNodeSelected(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='EnsureNodeSelected'}
  handleExceptionBegin
  AObj.EnsureNodeSelected();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_FinishCutOrCopy(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='FinishCutOrCopy'}
  handleExceptionBegin
  AObj.FinishCutOrCopy();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_FlushClipboard(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='FlushClipboard'}
  handleExceptionBegin
  AObj.FlushClipboard();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_FullCollapse(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='FullCollapse'}
  handleExceptionBegin
  AObj.FullCollapse(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_FullExpand(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='FullExpand'}
  handleExceptionBegin
  AObj.FullExpand(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_GetTextInfo(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const AFont: TFont; var R: TRect; out OutText: PChar); extdecl;
var
  RetR: TRect;
  RetOutText: string;
begin
  {$define handleExceptionFuncName :='GetTextInfo'}
  handleExceptionBegin
  RetR := R;
  RetOutText := OutText;
  AObj.GetTextInfo(Node, Column, AFont, RetR, RetOutText);
  R := RetR;
  OutText := ToPChar(RetOutText);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_InvalidateChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateChildren'}
  handleExceptionBegin
  AObj.InvalidateChildren(Node, Recursive);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_InvalidateColumn(AObj: TBaseVirtualTree; Column: TColumnIndex); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateColumn'}
  handleExceptionBegin
  AObj.InvalidateColumn(Column);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_InvalidateToBottom(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateToBottom'}
  handleExceptionBegin
  AObj.InvalidateToBottom(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_InvertSelection(AObj: TBaseVirtualTree; VisibleOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='InvertSelection'}
  handleExceptionBegin
  AObj.InvertSelection(VisibleOnly);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_LoadFromFile(AObj: TBaseVirtualTree; const FileName: TFileName); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromFile'}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_LoadFromStream(AObj: TBaseVirtualTree; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_MeasureItemHeight(AObj: TBaseVirtualTree; const Canvas: TCanvas; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='MeasureItemHeight'}
  handleExceptionBegin
  AObj.MeasureItemHeight(Canvas, Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_MoveTo(AObj: TBaseVirtualTree; Source, Target: PVirtualNode; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveTo'}
  handleExceptionBegin
  AObj.MoveTo(Source, Target, Mode, ChildrenOnly);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_MoveTo1(AObj: TBaseVirtualTree; Node: PVirtualNode; Tree: TBaseVirtualTree; Mode: TVTNodeAttachMode; ChildrenOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveTo1'}
  handleExceptionBegin
  AObj.MoveTo(Node, Tree, Mode, ChildrenOnly);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_PaintTree(AObj: TBaseVirtualTree; TargetCanvas: TCanvas; var Window: TRect; var Target: TPoint; PaintOptions: TVTInternalPaintOptions; PixelFormat: TPixelFormat); extdecl;
begin
  {$define handleExceptionFuncName :='PaintTree'}
  handleExceptionBegin
  AObj.PaintTree(TargetCanvas, Window, Target, PaintOptions, PixelFormat);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_RepaintNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='RepaintNode'}
  handleExceptionBegin
  AObj.RepaintNode(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ReinitChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ReinitChildren'}
  handleExceptionBegin
  AObj.ReinitChildren(Node, Recursive);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ReinitNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ReinitNode'}
  handleExceptionBegin
  AObj.ReinitNode(Node, Recursive);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ResetNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='ResetNode'}
  handleExceptionBegin
  AObj.ResetNode(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_SaveToFile(AObj: TBaseVirtualTree; const FileName: TFileName); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToFile'}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_SaveToStream(AObj: TBaseVirtualTree; Stream: TStream; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream, Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_SelectAll(AObj: TBaseVirtualTree; VisibleOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SelectAll'}
  handleExceptionBegin
  AObj.SelectAll(VisibleOnly);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_Sort(AObj: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Direction: TSortDirection; DoInit: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Sort'}
  handleExceptionBegin
  AObj.Sort(Node, Column, Direction, DoInit);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_SortTree(AObj: TBaseVirtualTree; Column: TColumnIndex; Direction: TSortDirection; DoInit: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SortTree'}
  handleExceptionBegin
  AObj.SortTree(Column, Direction, DoInit);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ToggleNode(AObj: TBaseVirtualTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='ToggleNode'}
  handleExceptionBegin
  AObj.ToggleNode(Node);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateHorizontalRange(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateHorizontalRange'}
  handleExceptionBegin
  AObj.UpdateHorizontalRange();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateHorizontalScrollBar(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateHorizontalScrollBar'}
  handleExceptionBegin
  AObj.UpdateHorizontalScrollBar(DoRepaint);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateRanges(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateRanges'}
  handleExceptionBegin
  AObj.UpdateRanges();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateScrollBars(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateScrollBars'}
  handleExceptionBegin
  AObj.UpdateScrollBars(DoRepaint);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateVerticalRange(AObj: TBaseVirtualTree); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateVerticalRange'}
  handleExceptionBegin
  AObj.UpdateVerticalRange();
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_UpdateVerticalScrollBar(AObj: TBaseVirtualTree; DoRepaint: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateVerticalScrollBar'}
  handleExceptionBegin
  AObj.UpdateVerticalScrollBar(DoRepaint);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ValidateChildren(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ValidateChildren'}
  handleExceptionBegin
  AObj.ValidateChildren(Node, Recursive);
  handleExceptionEnd
end;

//procedure
procedure BaseVirtualTree_ValidateNode(AObj: TBaseVirtualTree; Node: PVirtualNode; Recursive: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ValidateNode'}
  handleExceptionBegin
  AObj.ValidateNode(Node, Recursive);
  handleExceptionEnd
end;


exports
  BaseVirtualTree_Create,
  BaseVirtualTree_BottomNode,
  BaseVirtualTree_CheckedCount,
  BaseVirtualTree_CheckImages,
  BaseVirtualTree_CheckState,
  BaseVirtualTree_CheckType,
  BaseVirtualTree_ChildCount,
  BaseVirtualTree_ChildrenInitialized,
  BaseVirtualTree_CutCopyCount,
  BaseVirtualTree_DragImage,
  BaseVirtualTree_DropTargetNode,
  BaseVirtualTree_EmptyListMessage,
  BaseVirtualTree_Expanded,
  BaseVirtualTree_FocusedColumn,
  BaseVirtualTree_FocusedNode,
  BaseVirtualTree_FullyVisible,
  BaseVirtualTree_HasChildren,
  BaseVirtualTree_HotNode,
  BaseVirtualTree_IsDisabled,
  BaseVirtualTree_IsEffectivelyFiltered,
  BaseVirtualTree_IsEffectivelyVisible,
  BaseVirtualTree_IsFiltered,
  BaseVirtualTree_NodeIsVisible,
  BaseVirtualTree_MultiLine,
  BaseVirtualTree_NodeHeight,
  BaseVirtualTree_NodeParent,
  BaseVirtualTree_OffsetX,
  BaseVirtualTree_OffsetXY,
  BaseVirtualTree_OffsetY,
  BaseVirtualTree_OperationCount,
  BaseVirtualTree_RootNode,
  BaseVirtualTree_SearchBuffer,
  BaseVirtualTree_Selected,
  BaseVirtualTree_SelectionLocked,
  BaseVirtualTree_TotalCount,
  BaseVirtualTree_TreeStates,
  BaseVirtualTree_SelectedCount,
  BaseVirtualTree_TopNode,
  BaseVirtualTree_VerticalAlignment,
  BaseVirtualTree_VisibleCount,
  BaseVirtualTree_VisiblePath,
  BaseVirtualTree_UpdateCount,
  BaseVirtualTree_AbsoluteIndex,
  BaseVirtualTree_AddChild,
  BaseVirtualTree_CancelEditNode,
  BaseVirtualTree_CanEdit,
  BaseVirtualTree_CopyTo,
  BaseVirtualTree_CopyTo1,
  BaseVirtualTree_EditNode,
  BaseVirtualTree_EndEditNode,
  BaseVirtualTree_GetDisplayRect,
  BaseVirtualTree_GetEffectivelyFiltered,
  BaseVirtualTree_GetEffectivelyVisible,
  BaseVirtualTree_GetFirst,
  BaseVirtualTree_GetFirstChecked,
  BaseVirtualTree_GetFirstChild,
  BaseVirtualTree_GetFirstChildNoInit,
  BaseVirtualTree_GetFirstCutCopy,
  BaseVirtualTree_GetFirstInitialized,
  BaseVirtualTree_GetFirstLeaf,
  BaseVirtualTree_GetFirstLevel,
  BaseVirtualTree_GetFirstNoInit,
  BaseVirtualTree_GetFirstSelected,
  BaseVirtualTree_GetFirstVisible,
  BaseVirtualTree_GetFirstVisibleChild,
  BaseVirtualTree_GetFirstVisibleChildNoInit,
  BaseVirtualTree_GetFirstVisibleNoInit,
  BaseVirtualTree_GetLast,
  BaseVirtualTree_GetLastInitialized,
  BaseVirtualTree_GetLastNoInit,
  BaseVirtualTree_GetLastChild,
  BaseVirtualTree_GetLastChildNoInit,
  BaseVirtualTree_GetLastVisible,
  BaseVirtualTree_GetLastVisibleChild,
  BaseVirtualTree_GetLastVisibleChildNoInit,
  BaseVirtualTree_GetLastVisibleNoInit,
  BaseVirtualTree_GetMaxColumnWidth,
  BaseVirtualTree_GetNext,
  BaseVirtualTree_GetNextChecked,
  BaseVirtualTree_GetNextChecked1,
  BaseVirtualTree_GetNextCutCopy,
  BaseVirtualTree_GetNextInitialized,
  BaseVirtualTree_GetNextLeaf,
  BaseVirtualTree_GetNextLevel,
  BaseVirtualTree_GetNextNoInit,
  BaseVirtualTree_GetNextSelected,
  BaseVirtualTree_GetNextSibling,
  BaseVirtualTree_GetNextSiblingNoInit,
  BaseVirtualTree_GetNextVisible,
  BaseVirtualTree_GetNextVisibleNoInit,
  BaseVirtualTree_GetNextVisibleSibling,
  BaseVirtualTree_GetNextVisibleSiblingNoInit,
  BaseVirtualTree_GetNodeAt,
  BaseVirtualTree_GetNodeAt1,
  BaseVirtualTree_GetNodeAt2,
  BaseVirtualTree_GetNodeData,
  BaseVirtualTree_GetNodeLevel,
  BaseVirtualTree_GetPrevious,
  BaseVirtualTree_GetPreviousChecked,
  BaseVirtualTree_GetPreviousCutCopy,
  BaseVirtualTree_GetPreviousInitialized,
  BaseVirtualTree_GetPreviousLeaf,
  BaseVirtualTree_GetPreviousLevel,
  BaseVirtualTree_GetPreviousNoInit,
  BaseVirtualTree_GetPreviousSelected,
  BaseVirtualTree_GetPreviousSibling,
  BaseVirtualTree_GetPreviousSiblingNoInit,
  BaseVirtualTree_GetPreviousVisible,
  BaseVirtualTree_GetPreviousVisibleNoInit,
  BaseVirtualTree_GetPreviousVisibleSibling,
  BaseVirtualTree_GetPreviousVisibleSiblingNoInit,
  BaseVirtualTree_GetSortedCutCopySet,
  BaseVirtualTree_GetSortedSelection,
  BaseVirtualTree_GetTreeRect,
  BaseVirtualTree_GetVisibleParent,
  BaseVirtualTree_HasAsParent,
  BaseVirtualTree_InsertNode,
  BaseVirtualTree_InvalidateNode,
  BaseVirtualTree_IsEditing,
  BaseVirtualTree_IsMouseSelecting,
  BaseVirtualTree_IsEmpty,
  BaseVirtualTree_PasteFromClipboard,
  BaseVirtualTree_ScrollIntoView,
  BaseVirtualTree_ScrollIntoView1,
  BaseVirtualTree_Nodes,
  BaseVirtualTree_CheckedNodes,
  BaseVirtualTree_ChildNodes,
  BaseVirtualTree_CutCopyNodes,
  BaseVirtualTree_InitializedNodes,
  BaseVirtualTree_LeafNodes,
  BaseVirtualTree_LevelNodes,
  BaseVirtualTree_NoInitNodes,
  BaseVirtualTree_SelectedNodes,
  BaseVirtualTree_VisibleNodes,
  BaseVirtualTree_VisibleChildNodes,
  BaseVirtualTree_VisibleChildNoInitNodes,
  BaseVirtualTree_VisibleNoInitNodes,
  BaseVirtualTree_Class,
  BaseVirtualTree_AddFromStream,
  BaseVirtualTree_BeginSynch,
  BaseVirtualTree_BeginUpdate,
  BaseVirtualTree_CancelCutOrCopy,
  BaseVirtualTree_CancelOperation,
  BaseVirtualTree_Clear,
  BaseVirtualTree_ClearChecked,
  BaseVirtualTree_ClearSelection,
  BaseVirtualTree_CopyToClipboard,
  BaseVirtualTree_CutToClipboard,
  BaseVirtualTree_DeleteChildren,
  BaseVirtualTree_DeleteNode,
  BaseVirtualTree_DeleteSelectedNodes,
  BaseVirtualTree_EndSynch,
  BaseVirtualTree_EndUpdate,
  BaseVirtualTree_EnsureNodeSelected,
  BaseVirtualTree_FinishCutOrCopy,
  BaseVirtualTree_FlushClipboard,
  BaseVirtualTree_FullCollapse,
  BaseVirtualTree_FullExpand,
  BaseVirtualTree_GetTextInfo,
  BaseVirtualTree_InvalidateChildren,
  BaseVirtualTree_InvalidateColumn,
  BaseVirtualTree_InvalidateToBottom,
  BaseVirtualTree_InvertSelection,
  BaseVirtualTree_LoadFromFile,
  BaseVirtualTree_LoadFromStream,
  BaseVirtualTree_MeasureItemHeight,
  BaseVirtualTree_MoveTo,
  BaseVirtualTree_MoveTo1,
  BaseVirtualTree_PaintTree,
  BaseVirtualTree_RepaintNode,
  BaseVirtualTree_ReinitChildren,
  BaseVirtualTree_ReinitNode,
  BaseVirtualTree_ResetNode,
  BaseVirtualTree_SaveToFile,
  BaseVirtualTree_SaveToStream,
  BaseVirtualTree_SelectAll,
  BaseVirtualTree_Sort,
  BaseVirtualTree_SortTree,
  BaseVirtualTree_ToggleNode,
  BaseVirtualTree_UpdateHorizontalRange,
  BaseVirtualTree_UpdateHorizontalScrollBar,
  BaseVirtualTree_UpdateRanges,
  BaseVirtualTree_UpdateScrollBars,
  BaseVirtualTree_UpdateVerticalRange,
  BaseVirtualTree_UpdateVerticalScrollBar,
  BaseVirtualTree_ValidateChildren,
  BaseVirtualTree_ValidateNode;