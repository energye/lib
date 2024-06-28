
//constructor
function CustomTreeView_Create(AnOwner: TComponent): TCustomTreeView; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomTreeView.Create(AnOwner);
  handleExceptionEnd
end;

//property
function CustomTreeView_AccessibilityOn(AIsSet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibilityOn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibilityOn := AValue;
  end else
    Result := AObj.AccessibilityOn;
  handleExceptionEnd
end;

//property
function CustomTreeView_BackgroundColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundColor := AValue;
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_BottomItem(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='BottomItem'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BottomItem := AValue;
  end else
    Result := AObj.BottomItem;
  handleExceptionEnd
end;

//property
function CustomTreeView_DefaultItemHeight(AIsSet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultItemHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultItemHeight := AValue;
  end else
    Result := AObj.DefaultItemHeight;
  handleExceptionEnd
end;

//property
function CustomTreeView_DropTarget(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
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
function CustomTreeView_ExpandSignColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='ExpandSignColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandSignColor := AValue;
  end else
    Result := AObj.ExpandSignColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_ExpandSignSize(AIsSet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ExpandSignSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandSignSize := AValue;
  end else
    Result := AObj.ExpandSignSize;
  handleExceptionEnd
end;

//property
function CustomTreeView_ExpandSignWidth(AIsSet: LongBool; AObj: TCustomTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ExpandSignWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandSignWidth := AValue;
  end else
    Result := AObj.ExpandSignWidth;
  handleExceptionEnd
end;

//property
function CustomTreeView_ExpandSignType(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewExpandSignType): TTreeViewExpandSignType; extdecl;
begin
  {$define handleExceptionFuncName :='ExpandSignType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandSignType := AValue;
  end else
    Result := AObj.ExpandSignType;
  handleExceptionEnd
end;

//property
function CustomTreeView_Images(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomTreeView_ImagesWidth(AIsSet: LongBool; AObj: TCustomTreeView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function CustomTreeView_InsertMarkNode(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='InsertMarkNode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InsertMarkNode := AValue;
  end else
    Result := AObj.InsertMarkNode;
  handleExceptionEnd
end;

//property
function CustomTreeView_InsertMarkType(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewInsertMarkType): TTreeViewInsertMarkType; extdecl;
begin
  {$define handleExceptionFuncName :='InsertMarkType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InsertMarkType := AValue;
  end else
    Result := AObj.InsertMarkType;
  handleExceptionEnd
end;

//property
function CustomTreeView_Items(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNodes): TTreeNodes; extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items := AValue;
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

//property
function CustomTreeView_KeepCollapsedNodes(AIsSet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
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
function CustomTreeView_MultiSelectStyle(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TMultiSelectStyle): TMultiSelectStyle; extdecl;
begin
  {$define handleExceptionFuncName :='MultiSelectStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelectStyle := AValue;
  end else
    Result := AObj.MultiSelectStyle;
  handleExceptionEnd
end;

//property
function CustomTreeView_Options(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeViewOptions): TTreeViewOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Options'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomTreeView_ScrollBars(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ScrollBars'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBars := AValue;
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

//property
function CustomTreeView_Selected(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
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
function CustomTreeView_SelectionColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionColor := AValue;
  end else
    Result := AObj.SelectionColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_SelectionCount(AObj: TCustomTreeView): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionCount'}
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

//property
function CustomTreeView_SelectionFontColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionFontColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionFontColor := AValue;
  end else
    Result := AObj.SelectionFontColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_SelectionFontColorUsed(AIsSet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionFontColorUsed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionFontColorUsed := AValue;
  end else
    Result := AObj.SelectionFontColorUsed;
  handleExceptionEnd
end;

//property
function CustomTreeView_Selections(AObj: TCustomTreeView; AIndex: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='Selections'}
  handleExceptionBegin
  Result := AObj.Selections[AIndex];
  handleExceptionEnd
end;

//property
function CustomTreeView_SeparatorColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='SeparatorColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SeparatorColor := AValue;
  end else
    Result := AObj.SeparatorColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_StateImages(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='StateImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateImages := AValue;
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

//property
function CustomTreeView_StateImagesWidth(AIsSet: LongBool; AObj: TCustomTreeView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='StateImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateImagesWidth := AValue;
  end else
    Result := AObj.StateImagesWidth;
  handleExceptionEnd
end;

//property
function CustomTreeView_TopItem(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TTreeNode): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='TopItem'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopItem := AValue;
  end else
    Result := AObj.TopItem;
  handleExceptionEnd
end;

//property
function CustomTreeView_TreeLineColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='TreeLineColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeLineColor := AValue;
  end else
    Result := AObj.TreeLineColor;
  handleExceptionEnd
end;

//property
function CustomTreeView_TreeLinePenStyle(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TPenStyle): TPenStyle; extdecl;
begin
  {$define handleExceptionFuncName :='TreeLinePenStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeLinePenStyle := AValue;
  end else
    Result := AObj.TreeLinePenStyle;
  handleExceptionEnd
end;

//function
function CustomTreeView_AlphaSort(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AlphaSort'}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

//function
function CustomTreeView_CustomSort(AObj: TCustomTreeView; AEventData: Pointer): LongBool; extdecl;
var
  method: TMethod;
begin
  method.Data := Pointer(AObj);
  method.Code := @(TCustomTreeView.CustomSort);
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
function CustomTreeView_DefaultTreeViewSort(AObj: TCustomTreeView; Node1, Node2: TTreeNode): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultTreeViewSort'}
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetHitTestInfoAt(AObj: TCustomTreeView; X, Y: Integer): THitTests; extdecl;
begin
  {$define handleExceptionFuncName :='GetHitTestInfoAt'}
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetNodeAt(AObj: TCustomTreeView; X, Y: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeAt'}
  handleExceptionBegin
  Result := AObj.GetNodeAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetNodeWithExpandSignAt(AObj: TCustomTreeView; X, Y: Integer): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetNodeWithExpandSignAt'}
  handleExceptionBegin
  Result := AObj.GetNodeWithExpandSignAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_IsEditing(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEditing'}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

//function
function CustomTreeView_GetFirstMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstMultiSelected'}
  handleExceptionBegin
  Result := AObj.GetFirstMultiSelected();
  handleExceptionEnd
end;

//function
function CustomTreeView_GetLastMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastMultiSelected'}
  handleExceptionBegin
  Result := AObj.GetLastMultiSelected();
  handleExceptionEnd
end;

//function
function CustomTreeView_SelectionVisible(AObj: TCustomTreeView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionVisible'}
  handleExceptionBegin
  Result := AObj.SelectionVisible();
  handleExceptionEnd
end;

//function
function CustomTreeView_StoreCurrentSelection(AObj: TCustomTreeView): TStringList; extdecl;
begin
  {$define handleExceptionFuncName :='StoreCurrentSelection'}
  handleExceptionBegin
  Result := AObj.StoreCurrentSelection();
  handleExceptionEnd
end;

//function
function CustomTreeView_Class(): TClass; extdecl;
begin
  Result := TCustomTreeView;
end;

//procedure
procedure CustomTreeView_ClearSelection(AObj: TCustomTreeView; KeepPrimary: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelection'}
  handleExceptionBegin
  AObj.ClearSelection(KeepPrimary);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ConsistencyCheck(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='ConsistencyCheck'}
  handleExceptionBegin
  AObj.ConsistencyCheck();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_GetInsertMarkAt(AObj: TCustomTreeView; X, Y: Integer; out OutNInsertMarkNode: TTreeNode; out OutNInsertMarkType: TTreeViewInsertMarkType); extdecl;
var
  RetOutNInsertMarkNode: TTreeNode;
  RetOutNInsertMarkType: TTreeViewInsertMarkType;
begin
  {$define handleExceptionFuncName :='GetInsertMarkAt'}
  handleExceptionBegin
  RetOutNInsertMarkNode := OutNInsertMarkNode;
  RetOutNInsertMarkType := OutNInsertMarkType;
  AObj.GetInsertMarkAt(X, Y, RetOutNInsertMarkNode, RetOutNInsertMarkType);
  OutNInsertMarkNode := RetOutNInsertMarkNode;
  OutNInsertMarkType := RetOutNInsertMarkType;
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SetInsertMark(AObj: TCustomTreeView; AnInsertMarkNode: TTreeNode; AnInsertMarkType: TTreeViewInsertMarkType); extdecl;
begin
  {$define handleExceptionFuncName :='SetInsertMark'}
  handleExceptionBegin
  AObj.SetInsertMark(AnInsertMarkNode, AnInsertMarkType);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SetInsertMarkAt(AObj: TCustomTreeView; X, Y: integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetInsertMarkAt'}
  handleExceptionBegin
  AObj.SetInsertMarkAt(X, Y);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_BeginUpdate(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_EndUpdate(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_FullCollapse(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='FullCollapse'}
  handleExceptionBegin
  AObj.FullCollapse();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_FullExpand(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='FullExpand'}
  handleExceptionBegin
  AObj.FullExpand();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LoadFromFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromFile'}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LoadFromStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SaveToFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToFile'}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SaveToStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_WriteDebugReport(AObj: TCustomTreeView; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDebugReport'}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, AllNodes);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='LockSelectionChangeEvent'}
  handleExceptionBegin
  AObj.LockSelectionChangeEvent();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_UnlockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='UnlockSelectionChangeEvent'}
  handleExceptionBegin
  AObj.UnlockSelectionChangeEvent();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_Select(AObj: TCustomTreeView; Node: TTreeNode; ShiftState: TShiftState); extdecl;
begin
  {$define handleExceptionFuncName :='Select'}
  handleExceptionBegin
  AObj.Select(Node, ShiftState);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_Select1(AObj: TCustomTreeView; Nodes: TList); extdecl;
begin
  {$define handleExceptionFuncName :='Select1'}
  handleExceptionBegin
  AObj.Select(Nodes);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MakeSelectionVisible(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='MakeSelectionVisible'}
  handleExceptionBegin
  AObj.MakeSelectionVisible();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ClearInvisibleSelection(AObj: TCustomTreeView); extdecl;
begin
  {$define handleExceptionFuncName :='ClearInvisibleSelection'}
  handleExceptionBegin
  AObj.ClearInvisibleSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ApplyStoredSelection(AObj: TCustomTreeView; ASelection: TStringList; FreeList: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ApplyStoredSelection'}
  handleExceptionBegin
  AObj.ApplyStoredSelection(ASelection, FreeList);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveToNextNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveToNextNode'}
  handleExceptionBegin
  AObj.MoveToNextNode(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveToPrevNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveToPrevNode'}
  handleExceptionBegin
  AObj.MoveToPrevNode(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MovePageDown(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MovePageDown'}
  handleExceptionBegin
  AObj.MovePageDown(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MovePageUp(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MovePageUp'}
  handleExceptionBegin
  AObj.MovePageUp(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveLeft(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveLeft'}
  handleExceptionBegin
  AObj.MoveLeft(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveRight(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveRight'}
  handleExceptionBegin
  AObj.MoveRight(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveExpand(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveExpand'}
  handleExceptionBegin
  AObj.MoveExpand(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveCollapse(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveCollapse'}
  handleExceptionBegin
  AObj.MoveCollapse(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveHome(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveHome'}
  handleExceptionBegin
  AObj.MoveHome(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveEnd(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MoveEnd'}
  handleExceptionBegin
  AObj.MoveEnd(ASelect);
  handleExceptionEnd
end;


exports
  CustomTreeView_Create,
  CustomTreeView_AccessibilityOn,
  CustomTreeView_BackgroundColor,
  CustomTreeView_BottomItem,
  CustomTreeView_DefaultItemHeight,
  CustomTreeView_DropTarget,
  CustomTreeView_ExpandSignColor,
  CustomTreeView_ExpandSignSize,
  CustomTreeView_ExpandSignWidth,
  CustomTreeView_ExpandSignType,
  CustomTreeView_Images,
  CustomTreeView_ImagesWidth,
  CustomTreeView_InsertMarkNode,
  CustomTreeView_InsertMarkType,
  CustomTreeView_Items,
  CustomTreeView_KeepCollapsedNodes,
  CustomTreeView_MultiSelectStyle,
  CustomTreeView_Options,
  CustomTreeView_ScrollBars,
  CustomTreeView_Selected,
  CustomTreeView_SelectionColor,
  CustomTreeView_SelectionCount,
  CustomTreeView_SelectionFontColor,
  CustomTreeView_SelectionFontColorUsed,
  CustomTreeView_Selections,
  CustomTreeView_SeparatorColor,
  CustomTreeView_StateImages,
  CustomTreeView_StateImagesWidth,
  CustomTreeView_TopItem,
  CustomTreeView_TreeLineColor,
  CustomTreeView_TreeLinePenStyle,
  CustomTreeView_AlphaSort,
  CustomTreeView_CustomSort,
  CustomTreeView_DefaultTreeViewSort,
  CustomTreeView_GetHitTestInfoAt,
  CustomTreeView_GetNodeAt,
  CustomTreeView_GetNodeWithExpandSignAt,
  CustomTreeView_IsEditing,
  CustomTreeView_GetFirstMultiSelected,
  CustomTreeView_GetLastMultiSelected,
  CustomTreeView_SelectionVisible,
  CustomTreeView_StoreCurrentSelection,
  CustomTreeView_Class,
  CustomTreeView_ClearSelection,
  CustomTreeView_ConsistencyCheck,
  CustomTreeView_GetInsertMarkAt,
  CustomTreeView_SetInsertMark,
  CustomTreeView_SetInsertMarkAt,
  CustomTreeView_BeginUpdate,
  CustomTreeView_EndUpdate,
  CustomTreeView_FullCollapse,
  CustomTreeView_FullExpand,
  CustomTreeView_LoadFromFile,
  CustomTreeView_LoadFromStream,
  CustomTreeView_SaveToFile,
  CustomTreeView_SaveToStream,
  CustomTreeView_WriteDebugReport,
  CustomTreeView_LockSelectionChangeEvent,
  CustomTreeView_UnlockSelectionChangeEvent,
  CustomTreeView_Select,
  CustomTreeView_Select1,
  CustomTreeView_MakeSelectionVisible,
  CustomTreeView_ClearInvisibleSelection,
  CustomTreeView_ApplyStoredSelection,
  CustomTreeView_MoveToNextNode,
  CustomTreeView_MoveToPrevNode,
  CustomTreeView_MovePageDown,
  CustomTreeView_MovePageUp,
  CustomTreeView_MoveLeft,
  CustomTreeView_MoveRight,
  CustomTreeView_MoveExpand,
  CustomTreeView_MoveCollapse,
  CustomTreeView_MoveHome,
  CustomTreeView_MoveEnd;