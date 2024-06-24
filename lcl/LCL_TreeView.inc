
//constructor
function TreeView_Create(AnOwner: TComponent): TTreeView; extdecl;
begin
  handleExceptionBegin
  Result := TTreeView.Create(AnOwner);
  handleExceptionEnd
end;

//property
function TreeView_AutoExpand(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoExpand := AValue;
  end else
    Result := AObj.AutoExpand;
  handleExceptionEnd
end;

//property
function TreeView_DisabledFontColor(AIsSet: LongBool; AObj: TTreeView; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisabledFontColor := AValue;
  end else
    Result := AObj.DisabledFontColor;
  handleExceptionEnd
end;

//property
function TreeView_DragKind(AIsSet: LongBool; AObj: TTreeView; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function TreeView_DragCursor(AIsSet: LongBool; AObj: TTreeView; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function TreeView_DragMode(AIsSet: LongBool; AObj: TTreeView; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function TreeView_HideSelection(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideSelection := AValue;
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

//property
function TreeView_HotTrack(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotTrack := AValue;
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

//property
function TreeView_HotTrackColor(AIsSet: LongBool; AObj: TTreeView; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotTrackColor := AValue;
  end else
    Result := AObj.HotTrackColor;
  handleExceptionEnd
end;

//property
function TreeView_Indent(AIsSet: LongBool; AObj: TTreeView; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indent := AValue;
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

//property
function TreeView_MultiSelect(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelect := AValue;
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

//property
function TreeView_ParentColor(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function TreeView_ParentFont(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function TreeView_ParentShowHint(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function TreeView_ReadOnly(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function TreeView_RightClickSelect(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RightClickSelect := AValue;
  end else
    Result := AObj.RightClickSelect;
  handleExceptionEnd
end;

//property
function TreeView_RowSelect(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowSelect := AValue;
  end else
    Result := AObj.RowSelect;
  handleExceptionEnd
end;

//property
function TreeView_ShowButtons(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowButtons := AValue;
  end else
    Result := AObj.ShowButtons;
  handleExceptionEnd
end;

//property
function TreeView_ShowLines(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowLines := AValue;
  end else
    Result := AObj.ShowLines;
  handleExceptionEnd
end;

//property
function TreeView_ShowRoot(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowRoot := AValue;
  end else
    Result := AObj.ShowRoot;
  handleExceptionEnd
end;

//property
function TreeView_ShowSeparators(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowSeparators := AValue;
  end else
    Result := AObj.ShowSeparators;
  handleExceptionEnd
end;

//property
function TreeView_SortType(AIsSet: LongBool; AObj: TTreeView; AValue: TSortType): TSortType; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortType := AValue;
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

//property
function TreeView_ToolTips(AIsSet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ToolTips := AValue;
  end else
    Result := AObj.ToolTips;
  handleExceptionEnd
end;

//function
function TreeView_Class(): TClass; extdecl;
begin
  Result := TTreeView;
end;

//property event
procedure TreeView_SetOnAddition(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnAddition}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnAdvancedCustomDraw(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVAdvancedCustomDrawEvent}
  {$DEFINE EventName := OnAdvancedCustomDraw}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnAdvancedCustomDrawItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVAdvancedCustomDrawItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawItem}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnChange(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVChangedEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnChanging(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVChangingEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCollapsed(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnCollapsed}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCollapsing(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCollapsingEvent}
  {$DEFINE EventName := OnCollapsing}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCompare(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCompareEvent}
  {$DEFINE EventName := OnCompare}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnContextPopup(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCreateNodeClass(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCreateNodeClassEvent}
  {$DEFINE EventName := OnCreateNodeClass}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCustomCreateItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomCreateNodeEvent}
  {$DEFINE EventName := OnCustomCreateItem}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCustomDraw(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawEvent}
  {$DEFINE EventName := OnCustomDraw}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCustomDrawItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawItemEvent}
  {$DEFINE EventName := OnCustomDrawItem}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnCustomDrawArrow(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawArrowEvent}
  {$DEFINE EventName := OnCustomDrawArrow}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnDblClick(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnDeletion(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnDeletion}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnDragDrop(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnDragOver(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnEdited(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditedEvent}
  {$DEFINE EventName := OnEdited}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnEditing(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditingEvent}
  {$DEFINE EventName := OnEditing}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnEditingEnd(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditingEndEvent}
  {$DEFINE EventName := OnEditingEnd}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnEndDrag(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnExpanded(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnExpanded}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnExpanding(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandingEvent}
  {$DEFINE EventName := OnExpanding}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnGetImageIndex(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnGetImageIndex}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnGetSelectedIndex(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnGetSelectedIndex}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnHasChildren(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVHasChildrenEvent}
  {$DEFINE EventName := OnHasChildren}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseDown(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseEnter(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseLeave(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseMove(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseUp(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheel(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheelDown(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheelUp(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheelHorz(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheelLeft(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnMouseWheelRight(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnNodeChanged(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVNodeChangedEvent}
  {$DEFINE EventName := OnNodeChanged}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnSelectionChanged(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChanged}
  EventMethodCode
end;

//property event
procedure TreeView_SetOnStartDrag(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  TreeView_Create,
  TreeView_AutoExpand,
  TreeView_DisabledFontColor,
  TreeView_DragKind,
  TreeView_DragCursor,
  TreeView_DragMode,
  TreeView_HideSelection,
  TreeView_HotTrack,
  TreeView_HotTrackColor,
  TreeView_Indent,
  TreeView_MultiSelect,
  TreeView_ParentColor,
  TreeView_ParentFont,
  TreeView_ParentShowHint,
  TreeView_ReadOnly,
  TreeView_RightClickSelect,
  TreeView_RowSelect,
  TreeView_ShowButtons,
  TreeView_ShowLines,
  TreeView_ShowRoot,
  TreeView_ShowSeparators,
  TreeView_SortType,
  TreeView_ToolTips,
  TreeView_Class,
  TreeView_SetOnAddition,
  TreeView_SetOnAdvancedCustomDraw,
  TreeView_SetOnAdvancedCustomDrawItem,
  TreeView_SetOnChange,
  TreeView_SetOnChanging,
  TreeView_SetOnCollapsed,
  TreeView_SetOnCollapsing,
  TreeView_SetOnCompare,
  TreeView_SetOnContextPopup,
  TreeView_SetOnCreateNodeClass,
  TreeView_SetOnCustomCreateItem,
  TreeView_SetOnCustomDraw,
  TreeView_SetOnCustomDrawItem,
  TreeView_SetOnCustomDrawArrow,
  TreeView_SetOnDblClick,
  TreeView_SetOnDeletion,
  TreeView_SetOnDragDrop,
  TreeView_SetOnDragOver,
  TreeView_SetOnEdited,
  TreeView_SetOnEditing,
  TreeView_SetOnEditingEnd,
  TreeView_SetOnEndDrag,
  TreeView_SetOnExpanded,
  TreeView_SetOnExpanding,
  TreeView_SetOnGetImageIndex,
  TreeView_SetOnGetSelectedIndex,
  TreeView_SetOnHasChildren,
  TreeView_SetOnMouseDown,
  TreeView_SetOnMouseEnter,
  TreeView_SetOnMouseLeave,
  TreeView_SetOnMouseMove,
  TreeView_SetOnMouseUp,
  TreeView_SetOnMouseWheel,
  TreeView_SetOnMouseWheelDown,
  TreeView_SetOnMouseWheelUp,
  TreeView_SetOnMouseWheelHorz,
  TreeView_SetOnMouseWheelLeft,
  TreeView_SetOnMouseWheelRight,
  TreeView_SetOnNodeChanged,
  TreeView_SetOnSelectionChanged,
  TreeView_SetOnStartDrag;