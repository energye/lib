
//constructor
function ListView_Create(AOwner: TComponent): TListView; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListView.Create(AOwner);
  handleExceptionEnd
end;

//property
function ListView_AllocBy(AIsSet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AllocBy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllocBy := AValue;
  end else
    Result := AObj.AllocBy;
  handleExceptionEnd
end;

//property
function ListView_AutoSort(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSort'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSort := AValue;
  end else
    Result := AObj.AutoSort;
  handleExceptionEnd
end;

//property
function ListView_AutoSortIndicator(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSortIndicator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSortIndicator := AValue;
  end else
    Result := AObj.AutoSortIndicator;
  handleExceptionEnd
end;

//property
function ListView_AutoWidthLastColumn(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoWidthLastColumn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoWidthLastColumn := AValue;
  end else
    Result := AObj.AutoWidthLastColumn;
  handleExceptionEnd
end;

//property
function ListView_Columns(AIsSet: LongBool; AObj: TListView; AValue: TListColumns): TListColumns; extdecl;
begin
  {$define handleExceptionFuncName :='Columns'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Columns := AValue;
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

//property
function ListView_ColumnClick(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnClick'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColumnClick := AValue;
  end else
    Result := AObj.ColumnClick;
  handleExceptionEnd
end;

//property
function ListView_DragCursor(AIsSet: LongBool; AObj: TListView; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='DragCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function ListView_DragKind(AIsSet: LongBool; AObj: TListView; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function ListView_DragMode(AIsSet: LongBool; AObj: TListView; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionFuncName :='DragMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function ListView_HideSelection(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HideSelection'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideSelection := AValue;
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

//property
function ListView_LargeImages(AIsSet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='LargeImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LargeImages := AValue;
  end else
    Result := AObj.LargeImages;
  handleExceptionEnd
end;

//property
function ListView_LargeImagesWidth(AIsSet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LargeImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LargeImagesWidth := AValue;
  end else
    Result := AObj.LargeImagesWidth;
  handleExceptionEnd
end;

//property
function ListView_OwnerDraw(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OwnerDraw'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OwnerDraw := AValue;
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

//property
function ListView_ParentColor(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function ListView_ParentFont(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function ListView_ParentShowHint(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function ListView_ScrollBars(AIsSet: LongBool; AObj: TListView; AValue: TScrollStyle): TScrollStyle; extdecl;
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
function ListView_ShowColumnHeaders(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowColumnHeaders'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowColumnHeaders := AValue;
  end else
    Result := AObj.ShowColumnHeaders;
  handleExceptionEnd
end;

//property
function ListView_SmallImages(AIsSet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='SmallImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SmallImages := AValue;
  end else
    Result := AObj.SmallImages;
  handleExceptionEnd
end;

//property
function ListView_SmallImagesWidth(AIsSet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SmallImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SmallImagesWidth := AValue;
  end else
    Result := AObj.SmallImagesWidth;
  handleExceptionEnd
end;

//property
function ListView_SortColumn(AIsSet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SortColumn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortColumn := AValue;
  end else
    Result := AObj.SortColumn;
  handleExceptionEnd
end;

//property
function ListView_SortDirection(AIsSet: LongBool; AObj: TListView; AValue: ComCtrls.TSortDirection): ComCtrls.TSortDirection; extdecl;
begin
  {$define handleExceptionFuncName :='SortDirection'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortDirection := AValue;
  end else
    Result := AObj.SortDirection;
  handleExceptionEnd
end;

//property
function ListView_SortType(AIsSet: LongBool; AObj: TListView; AValue: TSortType): TSortType; extdecl;
begin
  {$define handleExceptionFuncName :='SortType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortType := AValue;
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

//property
function ListView_StateImages(AIsSet: LongBool; AObj: TListView; AValue: TCustomImageList): TCustomImageList; extdecl;
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
function ListView_StateImagesWidth(AIsSet: LongBool; AObj: TListView; AValue: Integer): Integer; extdecl;
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
function ListView_ToolTips(AIsSet: LongBool; AObj: TListView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ToolTips'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ToolTips := AValue;
  end else
    Result := AObj.ToolTips;
  handleExceptionEnd
end;

//property
function ListView_ViewStyle(AIsSet: LongBool; AObj: TListView; AValue: TViewStyle): TViewStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ViewStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ViewStyle := AValue;
  end else
    Result := AObj.ViewStyle;
  handleExceptionEnd
end;

//function
function ListView_Class(): TClass; extdecl;
begin
  Result := TListView;
end;

//property event
procedure ListView_SetOnAdvancedCustomDraw(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawEvent}
  {$DEFINE EventName := OnAdvancedCustomDraw}
  EventMethodCode
end;

//property event
procedure ListView_SetOnAdvancedCustomDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnAdvancedCustomDrawSubItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVAdvancedCustomDrawSubItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawSubItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnChange(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVChangeEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ListView_SetOnChanging(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVChangingEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure ListView_SetOnColumnClick(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  EventMethodCode
end;

//property event
procedure ListView_SetOnCompare(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCompareEvent}
  {$DEFINE EventName := OnCompare}
  EventMethodCode
end;

//property event
procedure ListView_SetOnContextPopup(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ListView_SetOnCreateItemClass(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCreateItemClassEvent}
  {$DEFINE EventName := OnCreateItemClass}
  EventMethodCode
end;

//property event
procedure ListView_SetOnCustomDraw(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawEvent}
  {$DEFINE EventName := OnCustomDraw}
  EventMethodCode
end;

//property event
procedure ListView_SetOnCustomDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawItemEvent}
  {$DEFINE EventName := OnCustomDrawItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnCustomDrawSubItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCustomDrawSubItemEvent}
  {$DEFINE EventName := OnCustomDrawSubItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnData(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataEvent}
  {$DEFINE EventName := OnData}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDataFind(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataFindEvent}
  {$DEFINE EventName := OnDataFind}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDataHint(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataHintEvent}
  {$DEFINE EventName := OnDataHint}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDataStateChange(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDataStateChangeEvent}
  {$DEFINE EventName := OnDataStateChange}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDblClick(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDeletion(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDeletedEvent}
  {$DEFINE EventName := OnDeletion}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDragDrop(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDragOver(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ListView_SetOnDrawItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnEdited(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVEditedEvent}
  {$DEFINE EventName := OnEdited}
  EventMethodCode
end;

//property event
procedure ListView_SetOnEditing(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVEditingEvent}
  {$DEFINE EventName := OnEditing}
  EventMethodCode
end;

//property event
procedure ListView_SetOnEndDock(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure ListView_SetOnEndDrag(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ListView_SetOnInsert(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVInsertEvent}
  {$DEFINE EventName := OnInsert}
  EventMethodCode
end;

//property event
procedure ListView_SetOnItemChecked(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVCheckedItemEvent}
  {$DEFINE EventName := OnItemChecked}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseDown(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseEnter(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseLeave(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseMove(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseUp(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheel(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheelDown(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheelUp(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheelHorz(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheelLeft(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure ListView_SetOnMouseWheelRight(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure ListView_SetOnSelectItem(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLVSelectItemEvent}
  {$DEFINE EventName := OnSelectItem}
  EventMethodCode
end;

//property event
procedure ListView_SetOnStartDock(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure ListView_SetOnStartDrag(AObj: TListView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ListView_Create,
  ListView_AllocBy,
  ListView_AutoSort,
  ListView_AutoSortIndicator,
  ListView_AutoWidthLastColumn,
  ListView_Columns,
  ListView_ColumnClick,
  ListView_DragCursor,
  ListView_DragKind,
  ListView_DragMode,
  ListView_HideSelection,
  ListView_LargeImages,
  ListView_LargeImagesWidth,
  ListView_OwnerDraw,
  ListView_ParentColor,
  ListView_ParentFont,
  ListView_ParentShowHint,
  ListView_ScrollBars,
  ListView_ShowColumnHeaders,
  ListView_SmallImages,
  ListView_SmallImagesWidth,
  ListView_SortColumn,
  ListView_SortDirection,
  ListView_SortType,
  ListView_StateImages,
  ListView_StateImagesWidth,
  ListView_ToolTips,
  ListView_ViewStyle,
  ListView_Class,
  ListView_SetOnAdvancedCustomDraw,
  ListView_SetOnAdvancedCustomDrawItem,
  ListView_SetOnAdvancedCustomDrawSubItem,
  ListView_SetOnChange,
  ListView_SetOnChanging,
  ListView_SetOnColumnClick,
  ListView_SetOnCompare,
  ListView_SetOnContextPopup,
  ListView_SetOnCreateItemClass,
  ListView_SetOnCustomDraw,
  ListView_SetOnCustomDrawItem,
  ListView_SetOnCustomDrawSubItem,
  ListView_SetOnData,
  ListView_SetOnDataFind,
  ListView_SetOnDataHint,
  ListView_SetOnDataStateChange,
  ListView_SetOnDblClick,
  ListView_SetOnDeletion,
  ListView_SetOnDragDrop,
  ListView_SetOnDragOver,
  ListView_SetOnDrawItem,
  ListView_SetOnEdited,
  ListView_SetOnEditing,
  ListView_SetOnEndDock,
  ListView_SetOnEndDrag,
  ListView_SetOnInsert,
  ListView_SetOnItemChecked,
  ListView_SetOnMouseDown,
  ListView_SetOnMouseEnter,
  ListView_SetOnMouseLeave,
  ListView_SetOnMouseMove,
  ListView_SetOnMouseUp,
  ListView_SetOnMouseWheel,
  ListView_SetOnMouseWheelDown,
  ListView_SetOnMouseWheelUp,
  ListView_SetOnMouseWheelHorz,
  ListView_SetOnMouseWheelLeft,
  ListView_SetOnMouseWheelRight,
  ListView_SetOnSelectItem,
  ListView_SetOnStartDock,
  ListView_SetOnStartDrag;