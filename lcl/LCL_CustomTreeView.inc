
//constructor
function CustomTreeView_Create(AnOwner: TComponent): TCustomTreeView; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTreeView.Create(AnOwner);
  handleExceptionEnd
end;

//property
function CustomTreeView_AccessibilityOn(AIsSet: LongBool; AObj: TCustomTreeView; AValue: LongBool): LongBool; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.SelectionCount;
  handleExceptionEnd
end;

//property
function CustomTreeView_SelectionFontColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.Selections[AIndex];
  handleExceptionEnd
end;

//property
function CustomTreeView_SeparatorColor(AIsSet: LongBool; AObj: TCustomTreeView; AValue: TColor): TColor; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetHitTestInfoAt(AObj: TCustomTreeView; X, Y: Integer): THitTests; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetNodeAt(AObj: TCustomTreeView; X, Y: Integer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNodeAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_GetNodeWithExpandSignAt(AObj: TCustomTreeView; X, Y: Integer): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNodeWithExpandSignAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomTreeView_IsEditing(AObj: TCustomTreeView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

//function
function CustomTreeView_GetFirstMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFirstMultiSelected();
  handleExceptionEnd
end;

//function
function CustomTreeView_GetLastMultiSelected(AObj: TCustomTreeView): TTreeNode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastMultiSelected();
  handleExceptionEnd
end;

//function
function CustomTreeView_SelectionVisible(AObj: TCustomTreeView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelectionVisible();
  handleExceptionEnd
end;

//function
function CustomTreeView_StoreCurrentSelection(AObj: TCustomTreeView): TStringList; extdecl;
begin
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
  handleExceptionBegin
  AObj.ClearSelection(KeepPrimary);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ConsistencyCheck(AObj: TCustomTreeView); extdecl;
begin
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
  handleExceptionBegin
  AObj.SetInsertMark(AnInsertMarkNode, AnInsertMarkType);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SetInsertMarkAt(AObj: TCustomTreeView; X, Y: integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsertMarkAt(X, Y);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_BeginUpdate(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_EndUpdate(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_FullCollapse(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.FullCollapse();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_FullExpand(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.FullExpand();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LoadFromFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LoadFromStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SaveToFile(AObj: TCustomTreeView; const FileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_SaveToStream(AObj: TCustomTreeView; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_WriteDebugReport(AObj: TCustomTreeView; const Prefix: PChar; AllNodes: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, AllNodes);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_LockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.LockSelectionChangeEvent();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_UnlockSelectionChangeEvent(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.UnlockSelectionChangeEvent();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_Select(AObj: TCustomTreeView; Node: TTreeNode; ShiftState: TShiftState); extdecl;
begin
  handleExceptionBegin
  AObj.Select(Node, ShiftState);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_Select1(AObj: TCustomTreeView; Nodes: TList); extdecl;
begin
  handleExceptionBegin
  AObj.Select(Nodes);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MakeSelectionVisible(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.MakeSelectionVisible();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ClearInvisibleSelection(AObj: TCustomTreeView); extdecl;
begin
  handleExceptionBegin
  AObj.ClearInvisibleSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_ApplyStoredSelection(AObj: TCustomTreeView; ASelection: TStringList; FreeList: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ApplyStoredSelection(ASelection, FreeList);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveToNextNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveToNextNode(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveToPrevNode(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveToPrevNode(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MovePageDown(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MovePageDown(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MovePageUp(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MovePageUp(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveLeft(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveLeft(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveRight(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveRight(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveExpand(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveExpand(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveCollapse(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveCollapse(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveHome(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveHome(ASelect);
  handleExceptionEnd
end;

//procedure
procedure CustomTreeView_MoveEnd(AObj: TCustomTreeView; ASelect: LongBool); extdecl;
begin
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