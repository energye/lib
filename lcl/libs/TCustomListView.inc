// constructor
function TCustomListView_Create(AOwner: TComponent): TCustomListView; extdecl;
begin
  {$define handleExceptionID := 9500}
  handleExceptionBegin
  Result := TCustomListView.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomListView_AlphaSort(AObj: TCustomListView): LongBool; extdecl;
begin
  {$define handleExceptionID := 9501}
  handleExceptionBegin
  Result := AObj.AlphaSort();
  handleExceptionEnd
end;

// function
function TCustomListView_FindCaption(AObj: TCustomListView; StartIndex: Integer; Value: PChar; Partial: LongBool; Inclusive: LongBool; Wrap: LongBool; PartStart: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionID := 9502}
  handleExceptionBegin
  Result := AObj.FindCaption(StartIndex, Value, Partial, Inclusive, Wrap, PartStart);
  handleExceptionEnd
end;

// function
function TCustomListView_FindData(AObj: TCustomListView; StartIndex: Integer; Value: Pointer; Inclusive: LongBool; Wrap: LongBool): TListItem; extdecl;
begin
  {$define handleExceptionID := 9503}
  handleExceptionBegin
  Result := AObj.FindData(StartIndex, Value, Inclusive, Wrap);
  handleExceptionEnd
end;

// function
function TCustomListView_GetHitTestInfoAt(AObj: TCustomListView; X: Integer; Y: Integer): THitTests; extdecl;
begin
  {$define handleExceptionID := 9504}
  handleExceptionBegin
  Result := AObj.GetHitTestInfoAt(X, Y);
  handleExceptionEnd
end;

// function
function TCustomListView_GetItemAt(AObj: TCustomListView; x: integer; y: integer): TListItem; extdecl;
begin
  {$define handleExceptionID := 9505}
  handleExceptionBegin
  Result := AObj.GetItemAt(x, y);
  handleExceptionEnd
end;

// function
function TCustomListView_GetNearestItem(AObj: TCustomListView; var APoint: TPoint; Direction: TSearchDirection): TListItem; extdecl;
begin
  {$define handleExceptionID := 9506}
  handleExceptionBegin
  Result := AObj.GetNearestItem(APoint, Direction);
  handleExceptionEnd
end;

// function
function TCustomListView_GetNextItem(AObj: TCustomListView; StartItem: TListItem; Direction: TSearchDirection; States: TListItemStates): TListItem; extdecl;
begin
  {$define handleExceptionID := 9507}
  handleExceptionBegin
  Result := AObj.GetNextItem(StartItem, Direction, States);
  handleExceptionEnd
end;

// function
function TCustomListView_GetNextSelected(AObj: TCustomListView; LVIndex: integer; var AItem: TListItem): LongBool; extdecl;
var
  OutAItem: TListItem;
begin
  {$define handleExceptionID := 9508}
  handleExceptionBegin
  OutAItem := AItem;
  Result := AObj.GetNextSelected(LVIndex, OutAItem);
  AItem := OutAItem;
  handleExceptionEnd
end;

// function
function TCustomListView_IsEditing(AObj: TCustomListView): LongBool; extdecl;
begin
  {$define handleExceptionID := 9509}
  handleExceptionBegin
  Result := AObj.IsEditing();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_AddItem(AObj: TCustomListView; Item: PChar; AObject: TObject); extdecl;
begin
  {$define handleExceptionID := 9510}
  handleExceptionBegin
  AObj.AddItem(Item, AObject);
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_Sort(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9511}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_BeginUpdate(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9512}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_Clear(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9513}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_EndUpdate(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9514}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_ClearSelection(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9515}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomListView_SelectAll(AObj: TCustomListView); extdecl;
begin
  {$define handleExceptionID := 9516}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// property
procedure TCustomListView_BoundingRect(AObj: TCustomListView; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 9517}
  handleExceptionBegin
  Result := AObj.BoundingRect;
  handleExceptionEnd
end;

// property
function TCustomListView_BorderStyle(ASet: LongBool; AObj: TCustomListView; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 9518}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCustomListView_Canvas(AObj: TCustomListView): TCanvas; extdecl;
begin
  {$define handleExceptionID := 9519}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TCustomListView_Checkboxes(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checkboxes := AValue
  end else
    Result := AObj.Checkboxes;
  handleExceptionEnd
end;

// property
function TCustomListView_Column(AObj: TCustomListView; AIndex: Integer): TListColumn; extdecl;
begin
  {$define handleExceptionID := 9521}
  handleExceptionBegin
  Result := AObj.Column[AIndex];
  handleExceptionEnd
end;

// property
function TCustomListView_ColumnCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionID := 9522}
  handleExceptionBegin
  Result := AObj.ColumnCount;
  handleExceptionEnd
end;

// property
function TCustomListView_DropTarget(ASet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
begin
  {$define handleExceptionID := 9523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTarget := AValue
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

// property
function TCustomListView_FlatScrollBars(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9524}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FlatScrollBars := AValue
  end else
    Result := AObj.FlatScrollBars;
  handleExceptionEnd
end;

// property
function TCustomListView_FullDrag(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9525}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FullDrag := AValue
  end else
    Result := AObj.FullDrag;
  handleExceptionEnd
end;

// property
function TCustomListView_GridLines(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GridLines := AValue
  end else
    Result := AObj.GridLines;
  handleExceptionEnd
end;

// property
function TCustomListView_HotTrack(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotTrack := AValue
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

// property
function TCustomListView_HotTrackStyles(ASet: LongBool; AObj: TCustomListView; AValue: TListHotTrackStyles): TListHotTrackStyles; extdecl;
begin
  {$define handleExceptionID := 9528}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotTrackStyles := AValue
  end else
    Result := AObj.HotTrackStyles;
  handleExceptionEnd
end;

// property
function TCustomListView_IconOptions(ASet: LongBool; AObj: TCustomListView; AValue: TIconOptions): TIconOptions; extdecl;
begin
  {$define handleExceptionID := 9529}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IconOptions := AValue
  end else
    Result := AObj.IconOptions;
  handleExceptionEnd
end;

// property
function TCustomListView_ItemFocused(ASet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
begin
  {$define handleExceptionID := 9530}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemFocused := AValue
  end else
    Result := AObj.ItemFocused;
  handleExceptionEnd
end;

// property
function TCustomListView_ItemIndex(ASet: LongBool; AObj: TCustomListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9531}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemIndex := AValue
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

// property
function TCustomListView_Items(ASet: LongBool; AObj: TCustomListView; AValue: TListItems): TListItems; extdecl;
begin
  {$define handleExceptionID := 9532}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomListView_MultiSelect(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9533}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelect := AValue
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

// property
function TCustomListView_OwnerData(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9534}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnerData := AValue
  end else
    Result := AObj.OwnerData;
  handleExceptionEnd
end;

// property
function TCustomListView_ReadOnly(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9535}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TCustomListView_RowSelect(ASet: LongBool; AObj: TCustomListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9536}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSelect := AValue
  end else
    Result := AObj.RowSelect;
  handleExceptionEnd
end;

// property
function TCustomListView_SelCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionID := 9537}
  handleExceptionBegin
  Result := AObj.SelCount;
  handleExceptionEnd
end;

// property
function TCustomListView_Selected(ASet: LongBool; AObj: TCustomListView; AValue: TListItem): TListItem; extdecl;
begin
  {$define handleExceptionID := 9538}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TCustomListView_LastSelected(AObj: TCustomListView): TListItem; extdecl;
begin
  {$define handleExceptionID := 9539}
  handleExceptionBegin
  Result := AObj.LastSelected;
  handleExceptionEnd
end;

// property
function TCustomListView_TopItem(AObj: TCustomListView): TListItem; extdecl;
begin
  {$define handleExceptionID := 9540}
  handleExceptionBegin
  Result := AObj.TopItem;
  handleExceptionEnd
end;

// property
procedure TCustomListView_ViewOrigin(ASet: LongBool; AObj: TCustomListView; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 9541}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ViewOrigin := AValue
  end else
    Result := AObj.ViewOrigin;
  handleExceptionEnd
end;

// property
function TCustomListView_VisibleRowCount(AObj: TCustomListView): Integer; extdecl;
begin
  {$define handleExceptionID := 9542}
  handleExceptionBegin
  Result := AObj.VisibleRowCount;
  handleExceptionEnd
end;

function TCustomListView_TClass(): TClass; extdecl;
begin
  Result := TCustomListView;
end;

exports
  TCustomListView_Create,
  TCustomListView_AlphaSort,
  TCustomListView_FindCaption,
  TCustomListView_FindData,
  TCustomListView_GetHitTestInfoAt,
  TCustomListView_GetItemAt,
  TCustomListView_GetNearestItem,
  TCustomListView_GetNextItem,
  TCustomListView_GetNextSelected,
  TCustomListView_IsEditing,
  TCustomListView_AddItem,
  TCustomListView_Sort,
  TCustomListView_BeginUpdate,
  TCustomListView_Clear,
  TCustomListView_EndUpdate,
  TCustomListView_ClearSelection,
  TCustomListView_SelectAll,
  TCustomListView_BoundingRect,
  TCustomListView_BorderStyle,
  TCustomListView_Canvas,
  TCustomListView_Checkboxes,
  TCustomListView_Column,
  TCustomListView_ColumnCount,
  TCustomListView_DropTarget,
  TCustomListView_FlatScrollBars,
  TCustomListView_FullDrag,
  TCustomListView_GridLines,
  TCustomListView_HotTrack,
  TCustomListView_HotTrackStyles,
  TCustomListView_IconOptions,
  TCustomListView_ItemFocused,
  TCustomListView_ItemIndex,
  TCustomListView_Items,
  TCustomListView_MultiSelect,
  TCustomListView_OwnerData,
  TCustomListView_ReadOnly,
  TCustomListView_RowSelect,
  TCustomListView_SelCount,
  TCustomListView_Selected,
  TCustomListView_LastSelected,
  TCustomListView_TopItem,
  TCustomListView_ViewOrigin,
  TCustomListView_VisibleRowCount,
  TCustomListView_TClass;