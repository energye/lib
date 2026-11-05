// constructor
function TListView_Create(AOwner: TComponent): TListView; extdecl;
begin
  {$define handleExceptionID := 9600}
  handleExceptionBegin
  Result := TListView.Create(AOwner);
  handleExceptionEnd
end;

// property
function TListView_AllocBy(ASet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllocBy := AValue
  end else
    Result := AObj.AllocBy;
  handleExceptionEnd
end;

// property
function TListView_AutoSort(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSort := AValue
  end else
    Result := AObj.AutoSort;
  handleExceptionEnd
end;

// property
function TListView_AutoSortIndicator(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSortIndicator := AValue
  end else
    Result := AObj.AutoSortIndicator;
  handleExceptionEnd
end;

// property
function TListView_AutoWidthLastColumn(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoWidthLastColumn := AValue
  end else
    Result := AObj.AutoWidthLastColumn;
  handleExceptionEnd
end;

// property
function TListView_Columns(ASet: LongBool; AObj: TListView; AValue: TListColumns): TListColumns; extdecl;
begin
  {$define handleExceptionID := 9605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TListView_ColumnClick(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColumnClick := AValue
  end else
    Result := AObj.ColumnClick;
  handleExceptionEnd
end;

// property
function TListView_DragCursor(ASet: LongBool; AObj: TListView; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TListView_DragKind(ASet: LongBool; AObj: TListView; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 9608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TListView_DragMode(ASet: LongBool; AObj: TListView; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 9609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TListView_HideSelection(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideSelection := AValue
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

// property
function TListView_LargeImages(ASet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LargeImages := AValue
  end else
    Result := AObj.LargeImages;
  handleExceptionEnd
end;

// property
function TListView_LargeImagesWidth(ASet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LargeImagesWidth := AValue
  end else
    Result := AObj.LargeImagesWidth;
  handleExceptionEnd
end;

// property
function TListView_OwnerDraw(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnerDraw := AValue
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

// property
function TListView_ParentColor(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TListView_ParentFont(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TListView_ParentShowHint(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9616}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TListView_ScrollBars(ASet: LongBool; AObj: TListView; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 9617}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TListView_ShowColumnHeaders(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowColumnHeaders := AValue
  end else
    Result := AObj.ShowColumnHeaders;
  handleExceptionEnd
end;

// property
function TListView_SmallImages(ASet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SmallImages := AValue
  end else
    Result := AObj.SmallImages;
  handleExceptionEnd
end;

// property
function TListView_SmallImagesWidth(ASet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SmallImagesWidth := AValue
  end else
    Result := AObj.SmallImagesWidth;
  handleExceptionEnd
end;

// property
function TListView_SortColumn(ASet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortColumn := AValue
  end else
    Result := AObj.SortColumn;
  handleExceptionEnd
end;

// property
function TListView_SortDirection(ASet: LongBool; AObj: TListView; AValue: ComCtrls.TSortDirection): ComCtrls.TSortDirection; extdecl;
begin
  {$define handleExceptionID := 9622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortDirection := AValue
  end else
    Result := AObj.SortDirection;
  handleExceptionEnd
end;

// property
function TListView_SortType(ASet: LongBool; AObj: TListView; AValue: TSortType): TSortType; extdecl;
begin
  {$define handleExceptionID := 9623}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortType := AValue
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

// property
function TListView_StateImages(ASet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9624}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImages := AValue
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

// property
function TListView_StateImagesWidth(ASet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9625}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImagesWidth := AValue
  end else
    Result := AObj.StateImagesWidth;
  handleExceptionEnd
end;

// property
function TListView_ToolTips(ASet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9626}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ToolTips := AValue
  end else
    Result := AObj.ToolTips;
  handleExceptionEnd
end;

// property
function TListView_ViewStyle(ASet: LongBool; AObj: TListView; AValue: TViewStyle): TViewStyle; extdecl;
begin
  {$define handleExceptionID := 9627}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ViewStyle := AValue
  end else
    Result := AObj.ViewStyle;
  handleExceptionEnd
end;

// event
procedure TListView_OnAdvancedCustomDraw(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawEvent}
  {$DEFINE EventName := OnAdvancedCustomDraw}
  LCLEventMethodCode
end;

// event
procedure TListView_OnAdvancedCustomDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnAdvancedCustomDrawSubItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawSubItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawSubItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnChange(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVChangeEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TListView_OnChanging(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVChangingEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TListView_OnColumnClick(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  LCLEventMethodCode
end;

// event
procedure TListView_OnCompare(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCompareEvent}
  {$DEFINE EventName := OnCompare}
  LCLEventMethodCode
end;

// event
procedure TListView_OnContextPopup(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TListView_OnCreateItemClass(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCreateItemClassEvent}
  {$DEFINE EventName := OnCreateItemClass}
  LCLEventMethodCode
end;

// event
procedure TListView_OnCustomDraw(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawEvent}
  {$DEFINE EventName := OnCustomDraw}
  LCLEventMethodCode
end;

// event
procedure TListView_OnCustomDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawItemEvent}
  {$DEFINE EventName := OnCustomDrawItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnCustomDrawSubItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawSubItemEvent}
  {$DEFINE EventName := OnCustomDrawSubItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnData(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataEvent}
  {$DEFINE EventName := OnData}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDataFind(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataFindEvent}
  {$DEFINE EventName := OnDataFind}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDataHint(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataHintEvent}
  {$DEFINE EventName := OnDataHint}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDataStateChange(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataStateChangeEvent}
  {$DEFINE EventName := OnDataStateChange}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDblClick(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDeletion(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDeletedEvent}
  {$DEFINE EventName := OnDeletion}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDragDrop(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDragOver(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TListView_OnDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnEdited(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVEditedEvent}
  {$DEFINE EventName := OnEdited}
  LCLEventMethodCode
end;

// event
procedure TListView_OnEditing(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVEditingEvent}
  {$DEFINE EventName := OnEditing}
  LCLEventMethodCode
end;

// event
procedure TListView_OnEndDock(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TListView_OnEndDrag(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TListView_OnInsert(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVInsertEvent}
  {$DEFINE EventName := OnInsert}
  LCLEventMethodCode
end;

// event
procedure TListView_OnItemChecked(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCheckedItemEvent}
  {$DEFINE EventName := OnItemChecked}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseDown(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseEnter(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseLeave(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseMove(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseUp(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheel(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheelDown(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheelUp(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheelHorz(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheelLeft(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TListView_OnMouseWheelRight(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TListView_OnSelectItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVSelectItemEvent}
  {$DEFINE EventName := OnSelectItem}
  LCLEventMethodCode
end;

// event
procedure TListView_OnStartDock(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TListView_OnStartDrag(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TListView_TClass(): TClass; extdecl;
begin
  Result := TListView;
end;

exports
  TListView_Create,
  TListView_AllocBy,
  TListView_AutoSort,
  TListView_AutoSortIndicator,
  TListView_AutoWidthLastColumn,
  TListView_Columns,
  TListView_ColumnClick,
  TListView_DragCursor,
  TListView_DragKind,
  TListView_DragMode,
  TListView_HideSelection,
  TListView_LargeImages,
  TListView_LargeImagesWidth,
  TListView_OwnerDraw,
  TListView_ParentColor,
  TListView_ParentFont,
  TListView_ParentShowHint,
  TListView_ScrollBars,
  TListView_ShowColumnHeaders,
  TListView_SmallImages,
  TListView_SmallImagesWidth,
  TListView_SortColumn,
  TListView_SortDirection,
  TListView_SortType,
  TListView_StateImages,
  TListView_StateImagesWidth,
  TListView_ToolTips,
  TListView_ViewStyle,
  TListView_OnAdvancedCustomDraw,
  TListView_OnAdvancedCustomDrawItem,
  TListView_OnAdvancedCustomDrawSubItem,
  TListView_OnChange,
  TListView_OnChanging,
  TListView_OnColumnClick,
  TListView_OnCompare,
  TListView_OnContextPopup,
  TListView_OnCreateItemClass,
  TListView_OnCustomDraw,
  TListView_OnCustomDrawItem,
  TListView_OnCustomDrawSubItem,
  TListView_OnData,
  TListView_OnDataFind,
  TListView_OnDataHint,
  TListView_OnDataStateChange,
  TListView_OnDblClick,
  TListView_OnDeletion,
  TListView_OnDragDrop,
  TListView_OnDragOver,
  TListView_OnDrawItem,
  TListView_OnEdited,
  TListView_OnEditing,
  TListView_OnEndDock,
  TListView_OnEndDrag,
  TListView_OnInsert,
  TListView_OnItemChecked,
  TListView_OnMouseDown,
  TListView_OnMouseEnter,
  TListView_OnMouseLeave,
  TListView_OnMouseMove,
  TListView_OnMouseUp,
  TListView_OnMouseWheel,
  TListView_OnMouseWheelDown,
  TListView_OnMouseWheelUp,
  TListView_OnMouseWheelHorz,
  TListView_OnMouseWheelLeft,
  TListView_OnMouseWheelRight,
  TListView_OnSelectItem,
  TListView_OnStartDock,
  TListView_OnStartDrag,
  TListView_TClass;