
//constructor
function CustomListView_Create(AOwner: TComponent): TCustomListView; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomListView.Create(AOwner);
  handleExceptionEnd
end;

//property
procedure CustomListView_BoundingRect(AObj: TCustomListView; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='BoundingRect'}
  handleExceptionBegin
  Result := AObj.BoundingRect;
  handleExceptionEnd
end;

//property
function CustomListView_BorderStyle(AIsSet: LongBool; AObj: TCustomListView; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CustomListView_Canvas(AObj: TCustomListView): TCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Canvas'}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function CustomListView_Checkboxes(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Checkboxes'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checkboxes := AValue;
  end else
    Result := AObj.Checkboxes;
  handleExceptionEnd
end;

//property
function CustomListView_Column(AObj: TCustomListView; AIndex: Integer): TListColumn; extdecl;
begin
  {$define handleExceptionFuncName :='Column'}
  handleExceptionBegin
  Result := AObj.Column[AIndex];
  handleExceptionEnd
end;

//property
function CustomListView_ColumnCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnCount'}
  handleExceptionBegin
  Result := AObj.ColumnCount;
  handleExceptionEnd
end;

//property
function CustomListView_DropTarget(AIsSet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
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
function CustomListView_FlatScrollBars(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FlatScrollBars'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FlatScrollBars := AValue;
  end else
    Result := AObj.FlatScrollBars;
  handleExceptionEnd
end;

//property
function CustomListView_FullDrag(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FullDrag'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FullDrag := AValue;
  end else
    Result := AObj.FullDrag;
  handleExceptionEnd
end;

//property
function CustomListView_GridLines(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GridLines'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GridLines := AValue;
  end else
    Result := AObj.GridLines;
  handleExceptionEnd
end;

//property
function CustomListView_HotTrack(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HotTrack'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotTrack := AValue;
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

//property
function CustomListView_HotTrackStyles(AIsSet: LongBool; AObj: TCustomListView; AValue: TListHotTrackStyles): TListHotTrackStyles; extdecl;
begin
  {$define handleExceptionFuncName :='HotTrackStyles'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotTrackStyles := AValue;
  end else
    Result := AObj.HotTrackStyles;
  handleExceptionEnd
end;

//property
function CustomListView_IconOptions(AIsSet: LongBool; AObj: TCustomListView; AValue: TIconOptions): TIconOptions; extdecl;
begin
  {$define handleExceptionFuncName :='IconOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IconOptions := AValue;
  end else
    Result := AObj.IconOptions;
  handleExceptionEnd
end;

//property
function CustomListView_ItemFocused(AIsSet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='ItemFocused'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemFocused := AValue;
  end else
    Result := AObj.ItemFocused;
  handleExceptionEnd
end;

//property
function CustomListView_ItemIndex(AIsSet: LongBool; AObj: TCustomListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ItemIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemIndex := AValue;
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

//property
function CustomListView_Items(AIsSet: LongBool; AObj: TCustomListView; AValue: TListItems): TListItems; extdecl;
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
function CustomListView_MultiSelect(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultiSelect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelect := AValue;
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

//property
function CustomListView_OwnerData(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OwnerData'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OwnerData := AValue;
  end else
    Result := AObj.OwnerData;
  handleExceptionEnd
end;

//property
function CustomListView_ReadOnly(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReadOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function CustomListView_RowSelect(AIsSet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RowSelect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowSelect := AValue;
  end else
    Result := AObj.RowSelect;
  handleExceptionEnd
end;

//property
function CustomListView_SelCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelCount'}
  handleExceptionBegin
  Result := AObj.SelCount;
  handleExceptionEnd
end;

//property
function CustomListView_Selected(AIsSet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
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
function CustomListView_LastSelected(AObj: TCustomListView): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='LastSelected'}
  handleExceptionBegin
  Result := AObj.LastSelected;
  handleExceptionEnd
end;

//property
function CustomListView_TopItem(AObj: TCustomListView): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='TopItem'}
  handleExceptionBegin
  Result := AObj.TopItem;
  handleExceptionEnd
end;

//property
procedure CustomListView_ViewOrigin(AIsSet: LongBool; AObj: TCustomListView; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='ViewOrigin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ViewOrigin := AValue;
  end else
    Result := AObj.ViewOrigin;
  handleExceptionEnd
end;

//property
function CustomListView_VisibleRowCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleRowCount'}
  handleExceptionBegin
  Result := AObj.VisibleRowCount;
  handleExceptionEnd
end;

//function
function CustomListView_AlphaSort(AObj: TCustomListView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AlphaSort'}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

//function
function CustomListView_CustomSort(AObj: TCustomListView; AEventData: Pointer; AOptionalParam: NativeInt): LongBool; extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.CustomListViewCustomSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.CustomListViewCustomSortEventPtr := AEventData;
      Result := AObj.CustomSort(TSortEventMethod.OnTLVCompare, AOptionalParam);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;

//function
function CustomListView_FindCaption(AObj: TCustomListView; StartIndex: Integer; Value: PChar; Partial, Inclusive, Wrap: LongBool; PartStart: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='FindCaption'}
  handleExceptionBegin
  Result := AObj.FindCaption(StartIndex, Value, Partial, Inclusive, Wrap, PartStart);
  handleExceptionEnd
end;

//function
function CustomListView_FindData(AObj: TCustomListView; StartIndex: Integer; Value: Pointer; Inclusive, Wrap: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='FindData'}
  handleExceptionBegin
  Result := AObj.FindData(StartIndex, Value, Inclusive, Wrap);
  handleExceptionEnd
end;

//function
function CustomListView_GetHitTestInfoAt(AObj: TCustomListView; X, Y: Integer): THitTests; extdecl;
begin
  {$define handleExceptionFuncName :='GetHitTestInfoAt'}
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(X, Y);
  handleExceptionEnd
end;

//function
function CustomListView_GetItemAt(AObj: TCustomListView; x, y: integer): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='GetItemAt'}
  handleExceptionBegin
  Result := AObj.GetItemAt(x, y);
  handleExceptionEnd
end;

//function
function CustomListView_GetNearestItem(AObj: TCustomListView; var APoint: TPoint; Direction: TSearchDirection): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='GetNearestItem'}
  handleExceptionBegin
  Result := AObj.GetNearestItem(APoint, Direction);
  handleExceptionEnd
end;

//function
function CustomListView_GetNextItem(AObj: TCustomListView; StartItem: TListItem; Direction: TSearchDirection; States: TListItemStates): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextItem'}
  handleExceptionBegin
  Result := AObj.GetNextItem(StartItem, Direction, States);
  handleExceptionEnd
end;

//function
function CustomListView_IsEditing(AObj: TCustomListView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEditing'}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

//function
function CustomListView_Class(): TClass; extdecl;
begin
  Result := TCustomListView;
end;

//procedure
procedure CustomListView_AddItem(AObj: TCustomListView; Item: PChar; AObject: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='AddItem'}
  handleExceptionBegin
  AObj.AddItem(Item, AObject);
  handleExceptionEnd
end;

//procedure
procedure CustomListView_Sort(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='Sort'}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

//procedure
procedure CustomListView_BeginUpdate(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomListView_Clear(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomListView_EndUpdate(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomListView_ClearSelection(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelection'}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomListView_SelectAll(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionFuncName :='SelectAll'}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;


exports
  CustomListView_Create,
  CustomListView_BoundingRect,
  CustomListView_BorderStyle,
  CustomListView_Canvas,
  CustomListView_Checkboxes,
  CustomListView_Column,
  CustomListView_ColumnCount,
  CustomListView_DropTarget,
  CustomListView_FlatScrollBars,
  CustomListView_FullDrag,
  CustomListView_GridLines,
  CustomListView_HotTrack,
  CustomListView_HotTrackStyles,
  CustomListView_IconOptions,
  CustomListView_ItemFocused,
  CustomListView_ItemIndex,
  CustomListView_Items,
  CustomListView_MultiSelect,
  CustomListView_OwnerData,
  CustomListView_ReadOnly,
  CustomListView_RowSelect,
  CustomListView_SelCount,
  CustomListView_Selected,
  CustomListView_LastSelected,
  CustomListView_TopItem,
  CustomListView_ViewOrigin,
  CustomListView_VisibleRowCount,
  CustomListView_AlphaSort,
  CustomListView_CustomSort,
  CustomListView_FindCaption,
  CustomListView_FindData,
  CustomListView_GetHitTestInfoAt,
  CustomListView_GetItemAt,
  CustomListView_GetNearestItem,
  CustomListView_GetNextItem,
  CustomListView_IsEditing,
  CustomListView_Class,
  CustomListView_AddItem,
  CustomListView_Sort,
  CustomListView_BeginUpdate,
  CustomListView_Clear,
  CustomListView_EndUpdate,
  CustomListView_ClearSelection,
  CustomListView_SelectAll;