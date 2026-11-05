// constructor
function TCustomTreeView_Create(AnOwner: TComponent): TCustomTreeView; extdecl;
begin
  {$define handleExceptionID := 9700}
  handleExceptionBegin
  Result := TCustomTreeView.Create(AnOwner);
  handleExceptionEnd
end;

// function
function TCustomTreeView_AlphaSort(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionID := 9701}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

// function
function TCustomTreeView_DefaultTreeViewSort(AObj: TCustomTreeView; Node1: TTreeNode; Node2: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionID := 9702}
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

// function
function TCustomTreeView_GetHitTestInfoAt(AObj: TCustomTreeView; X: Integer; Y: Integer): THitTests; extdecl;
begin
  {$define handleExceptionID := 9703}
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(X, Y);
  handleExceptionEnd
end;

// function
function TCustomTreeView_GetNodeAt(AObj: TCustomTreeView; X: Integer; Y: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9704}
  handleExceptionBegin
  Result := AObj.GetNodeAt(X, Y);
  handleExceptionEnd
end;

// function
function TCustomTreeView_GetNodeWithExpandSignAt(AObj: TCustomTreeView; X: Integer; Y: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9705}
  handleExceptionBegin
  Result := AObj.GetNodeWithExpandSignAt(X, Y);
  handleExceptionEnd
end;

// function
function TCustomTreeView_IsEditing(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionID := 9706}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

// function
function TCustomTreeView_GetFirstMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9707}
  handleExceptionBegin
  Result := AObj.GetFirstMultiSelected();
  handleExceptionEnd
end;

// function
function TCustomTreeView_GetLastMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9708}
  handleExceptionBegin
  Result := AObj.GetLastMultiSelected();
  handleExceptionEnd
end;

// function
function TCustomTreeView_SelectionVisible(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionID := 9709}
  handleExceptionBegin
  Result := AObj.SelectionVisible();
  handleExceptionEnd
end;

// function
function TCustomTreeView_StoreCurrentSelection(AObj: TCustomTreeView): TStringList; extdecl;
begin
  {$define handleExceptionID := 9710}
  handleExceptionBegin
  Result := AObj.StoreCurrentSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_ClearSelection(AObj: TCustomTreeView; KeepPrimary: LongBool); extdecl;
begin
  {$define handleExceptionID := 9711}
  handleExceptionBegin
  AObj.ClearSelection(KeepPrimary);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_ConsistencyCheck(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9712}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_GetInsertMarkAt(AObj: TCustomTreeView; X: Integer; Y: Integer; var AnInsertMarkNode: TTreeNode; var AnInsertMarkType: TTreeViewInsertMarkType); extdecl;
var
  OutAnInsertMarkNode: TTreeNode;
  OutAnInsertMarkType: TTreeViewInsertMarkType;
begin
  {$define handleExceptionID := 9713}
  handleExceptionBegin
  AObj.GetInsertMarkAt(X, Y, OutAnInsertMarkNode, OutAnInsertMarkType);
  AnInsertMarkNode := OutAnInsertMarkNode;
  AnInsertMarkType := OutAnInsertMarkType;
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SetInsertMark(AObj: TCustomTreeView; AnInsertMarkNode: TTreeNode; AnInsertMarkType: TTreeViewInsertMarkType); extdecl;
begin
  {$define handleExceptionID := 9714}
  handleExceptionBegin
  AObj.SetInsertMark(AnInsertMarkNode, AnInsertMarkType);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SetInsertMarkAt(AObj: TCustomTreeView; X: integer; Y: integer); extdecl;
begin
  {$define handleExceptionID := 9715}
  handleExceptionBegin
  AObj.SetInsertMarkAt(X, Y);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_BeginUpdate(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9716}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_EndUpdate(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9717}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_FullCollapse(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9718}
  handleExceptionBegin
  AObj.FullCollapse();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_FullExpand(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9719}
  handleExceptionBegin
  AObj.FullExpand();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_LoadFromFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 9720}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_LoadFromStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 9721}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SaveToFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 9722}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SaveToStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 9723}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_WriteDebugReport(AObj: TCustomTreeView; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
  {$define handleExceptionID := 9724}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, AllNodes);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_LockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9725}
  handleExceptionBegin
  AObj.LockSelectionChangeEvent();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_UnlockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9726}
  handleExceptionBegin
  AObj.UnlockSelectionChangeEvent();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SelectWithTreeNodeShiftState(AObj: TCustomTreeView; Node: TTreeNode; ShiftState: TShiftState); extdecl;
begin
  {$define handleExceptionID := 9727}
  handleExceptionBegin
  AObj.Select(Node, ShiftState);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_SelectWithList(AObj: TCustomTreeView; Nodes: TList); extdecl;
begin
  {$define handleExceptionID := 9728}
  handleExceptionBegin
  AObj.Select(Nodes);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MakeSelectionVisible(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9729}
  handleExceptionBegin
  AObj.MakeSelectionVisible();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_ClearInvisibleSelection(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionID := 9730}
  handleExceptionBegin
  AObj.ClearInvisibleSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_ApplyStoredSelection(AObj: TCustomTreeView; ASelection: TStringList; FreeList: LongBool); extdecl;
begin
  {$define handleExceptionID := 9731}
  handleExceptionBegin
  AObj.ApplyStoredSelection(ASelection, FreeList);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveToNextNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9732}
  handleExceptionBegin
  AObj.MoveToNextNode(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveToPrevNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9733}
  handleExceptionBegin
  AObj.MoveToPrevNode(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MovePageDown(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9734}
  handleExceptionBegin
  AObj.MovePageDown(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MovePageUp(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9735}
  handleExceptionBegin
  AObj.MovePageUp(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveLeft(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9736}
  handleExceptionBegin
  AObj.MoveLeft(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveRight(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9737}
  handleExceptionBegin
  AObj.MoveRight(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveExpand(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9738}
  handleExceptionBegin
  AObj.MoveExpand(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveCollapse(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9739}
  handleExceptionBegin
  AObj.MoveCollapse(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveHome(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9740}
  handleExceptionBegin
  AObj.MoveHome(ASelect);
  handleExceptionEnd
end;

// procedure
procedure TCustomTreeView_MoveEnd(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionID := 9741}
  handleExceptionBegin
  AObj.MoveEnd(ASelect);
  handleExceptionEnd
end;

// property
function TCustomTreeView_AccessibilityOn(ASet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9742}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibilityOn := AValue
  end else
    Result := AObj.AccessibilityOn;
  handleExceptionEnd
end;

// property
function TCustomTreeView_BackgroundColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9743}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_BottomItem(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9744}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BottomItem := AValue
  end else
    Result := AObj.BottomItem;
  handleExceptionEnd
end;

// property
function TCustomTreeView_DefaultItemHeight(ASet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 9745}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultItemHeight := AValue
  end else
    Result := AObj.DefaultItemHeight;
  handleExceptionEnd
end;

// property
function TCustomTreeView_DropTarget(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9746}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTarget := AValue
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ExpandSignColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9747}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandSignColor := AValue
  end else
    Result := AObj.ExpandSignColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ExpandSignSize(ASet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 9748}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandSignSize := AValue
  end else
    Result := AObj.ExpandSignSize;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ExpandSignWidth(ASet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 9749}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandSignWidth := AValue
  end else
    Result := AObj.ExpandSignWidth;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ExpandSignType(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewExpandSignType): TTreeViewExpandSignType; extdecl;
begin
  {$define handleExceptionID := 9750}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandSignType := AValue
  end else
    Result := AObj.ExpandSignType;
  handleExceptionEnd
end;

// property
function TCustomTreeView_Images(ASet: LongBool; AObj: TCustomTreeView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9751}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ImagesWidth(ASet: LongBool; AObj: TCustomTreeView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9752}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomTreeView_InsertMarkNode(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9753}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InsertMarkNode := AValue
  end else
    Result := AObj.InsertMarkNode;
  handleExceptionEnd
end;

// property
function TCustomTreeView_InsertMarkType(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewInsertMarkType): TTreeViewInsertMarkType; extdecl;
begin
  {$define handleExceptionID := 9754}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InsertMarkType := AValue
  end else
    Result := AObj.InsertMarkType;
  handleExceptionEnd
end;

// property
function TCustomTreeView_Items(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNodes): TTreeNodes; extdecl;
begin
  {$define handleExceptionID := 9755}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomTreeView_KeepCollapsedNodes(ASet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9756}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepCollapsedNodes := AValue
  end else
    Result := AObj.KeepCollapsedNodes;
  handleExceptionEnd
end;

// property
function TCustomTreeView_MultiSelectStyle(ASet: LongBool; AObj: TCustomTreeView; AValue: TMultiSelectStyle): TMultiSelectStyle; extdecl;
begin
  {$define handleExceptionID := 9757}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelectStyle := AValue
  end else
    Result := AObj.MultiSelectStyle;
  handleExceptionEnd
end;

// property
function TCustomTreeView_Options(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewOptions): TTreeViewOptions; extdecl;
begin
  {$define handleExceptionID := 9758}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomTreeView_ScrollBars(ASet: LongBool; AObj: TCustomTreeView; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 9759}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TCustomTreeView_Selected(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9760}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TCustomTreeView_SelectionColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9761}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionColor := AValue
  end else
    Result := AObj.SelectionColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_SelectionCount(AObj: TCustomTreeView): Cardinal; extdecl;
begin
  {$define handleExceptionID := 9762}
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

// property
function TCustomTreeView_SelectionFontColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9763}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionFontColor := AValue
  end else
    Result := AObj.SelectionFontColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_SelectionFontColorUsed(ASet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9764}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionFontColorUsed := AValue
  end else
    Result := AObj.SelectionFontColorUsed;
  handleExceptionEnd
end;

// property
function TCustomTreeView_Selections(AObj: TCustomTreeView; AIndex: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9765}
  handleExceptionBegin
  Result := AObj.Selections[AIndex];
  handleExceptionEnd
end;

// property
function TCustomTreeView_SeparatorColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9766}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SeparatorColor := AValue
  end else
    Result := AObj.SeparatorColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_StateImages(ASet: LongBool; AObj: TCustomTreeView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9767}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImages := AValue
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

// property
function TCustomTreeView_StateImagesWidth(ASet: LongBool; AObj: TCustomTreeView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9768}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImagesWidth := AValue
  end else
    Result := AObj.StateImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomTreeView_TopItem(ASet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionID := 9769}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopItem := AValue
  end else
    Result := AObj.TopItem;
  handleExceptionEnd
end;

// property
function TCustomTreeView_TreeLineColor(ASet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9770}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeLineColor := AValue
  end else
    Result := AObj.TreeLineColor;
  handleExceptionEnd
end;

// property
function TCustomTreeView_TreeLinePenStyle(ASet: LongBool; AObj: TCustomTreeView; AValue: TPenStyle): TPenStyle; extdecl;
begin
  {$define handleExceptionID := 9771}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeLinePenStyle := AValue
  end else
    Result := AObj.TreeLinePenStyle;
  handleExceptionEnd
end;

function TCustomTreeView_TClass(): TClass; extdecl;
begin
  Result := TCustomTreeView;
end;

exports
  TCustomTreeView_Create,
  TCustomTreeView_AlphaSort,
  TCustomTreeView_DefaultTreeViewSort,
  TCustomTreeView_GetHitTestInfoAt,
  TCustomTreeView_GetNodeAt,
  TCustomTreeView_GetNodeWithExpandSignAt,
  TCustomTreeView_IsEditing,
  TCustomTreeView_GetFirstMultiSelected,
  TCustomTreeView_GetLastMultiSelected,
  TCustomTreeView_SelectionVisible,
  TCustomTreeView_StoreCurrentSelection,
  TCustomTreeView_ClearSelection,
  TCustomTreeView_ConsistencyCheck,
  TCustomTreeView_GetInsertMarkAt,
  TCustomTreeView_SetInsertMark,
  TCustomTreeView_SetInsertMarkAt,
  TCustomTreeView_BeginUpdate,
  TCustomTreeView_EndUpdate,
  TCustomTreeView_FullCollapse,
  TCustomTreeView_FullExpand,
  TCustomTreeView_LoadFromFile,
  TCustomTreeView_LoadFromStream,
  TCustomTreeView_SaveToFile,
  TCustomTreeView_SaveToStream,
  TCustomTreeView_WriteDebugReport,
  TCustomTreeView_LockSelectionChangeEvent,
  TCustomTreeView_UnlockSelectionChangeEvent,
  TCustomTreeView_SelectWithTreeNodeShiftState,
  TCustomTreeView_SelectWithList,
  TCustomTreeView_MakeSelectionVisible,
  TCustomTreeView_ClearInvisibleSelection,
  TCustomTreeView_ApplyStoredSelection,
  TCustomTreeView_MoveToNextNode,
  TCustomTreeView_MoveToPrevNode,
  TCustomTreeView_MovePageDown,
  TCustomTreeView_MovePageUp,
  TCustomTreeView_MoveLeft,
  TCustomTreeView_MoveRight,
  TCustomTreeView_MoveExpand,
  TCustomTreeView_MoveCollapse,
  TCustomTreeView_MoveHome,
  TCustomTreeView_MoveEnd,
  TCustomTreeView_AccessibilityOn,
  TCustomTreeView_BackgroundColor,
  TCustomTreeView_BottomItem,
  TCustomTreeView_DefaultItemHeight,
  TCustomTreeView_DropTarget,
  TCustomTreeView_ExpandSignColor,
  TCustomTreeView_ExpandSignSize,
  TCustomTreeView_ExpandSignWidth,
  TCustomTreeView_ExpandSignType,
  TCustomTreeView_Images,
  TCustomTreeView_ImagesWidth,
  TCustomTreeView_InsertMarkNode,
  TCustomTreeView_InsertMarkType,
  TCustomTreeView_Items,
  TCustomTreeView_KeepCollapsedNodes,
  TCustomTreeView_MultiSelectStyle,
  TCustomTreeView_Options,
  TCustomTreeView_ScrollBars,
  TCustomTreeView_Selected,
  TCustomTreeView_SelectionColor,
  TCustomTreeView_SelectionCount,
  TCustomTreeView_SelectionFontColor,
  TCustomTreeView_SelectionFontColorUsed,
  TCustomTreeView_Selections,
  TCustomTreeView_SeparatorColor,
  TCustomTreeView_StateImages,
  TCustomTreeView_StateImagesWidth,
  TCustomTreeView_TopItem,
  TCustomTreeView_TreeLineColor,
  TCustomTreeView_TreeLinePenStyle,
  TCustomTreeView_TClass;