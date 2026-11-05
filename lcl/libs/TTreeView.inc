// constructor
function TTreeView_Create(AnOwner: TComponent): TTreeView; extdecl;
begin
  {$define handleExceptionID := 9800}
  handleExceptionBegin
  Result := TTreeView.Create(AnOwner);
  handleExceptionEnd
end;

// property
procedure TTreeView_PathDelimiter(ASet: LongBool; AObj: TTreeView; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PathDelimiter := AValue
  end else
    StringBufferCreate(AObj.PathDelimiter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TTreeView_ScrolledLeft(ASet: LongBool; AObj: TTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 9802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrolledLeft := AValue
  end else
    Result := AObj.ScrolledLeft;
  handleExceptionEnd
end;

// property
function TTreeView_ScrolledTop(ASet: LongBool; AObj: TTreeView; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 9803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrolledTop := AValue
  end else
    Result := AObj.ScrolledTop;
  handleExceptionEnd
end;

// property
function TTreeView_AutoExpand(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoExpand := AValue
  end else
    Result := AObj.AutoExpand;
  handleExceptionEnd
end;

// property
function TTreeView_DisabledFontColor(ASet: LongBool; AObj: TTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledFontColor := AValue
  end else
    Result := AObj.DisabledFontColor;
  handleExceptionEnd
end;

// property
function TTreeView_DragKind(ASet: LongBool; AObj: TTreeView; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 9806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TTreeView_DragCursor(ASet: LongBool; AObj: TTreeView; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TTreeView_DragMode(ASet: LongBool; AObj: TTreeView; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 9808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TTreeView_HideSelection(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideSelection := AValue
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

// property
function TTreeView_HotTrack(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotTrack := AValue
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

// property
function TTreeView_HotTrackColor(ASet: LongBool; AObj: TTreeView; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 9811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotTrackColor := AValue
  end else
    Result := AObj.HotTrackColor;
  handleExceptionEnd
end;

// property
function TTreeView_Indent(ASet: LongBool; AObj: TTreeView; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indent := AValue
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

// property
function TTreeView_MultiSelect(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelect := AValue
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

// property
function TTreeView_ParentColor(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TTreeView_ParentFont(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TTreeView_ParentShowHint(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TTreeView_ReadOnly(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TTreeView_RightClickSelect(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9818}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightClickSelect := AValue
  end else
    Result := AObj.RightClickSelect;
  handleExceptionEnd
end;

// property
function TTreeView_RowSelect(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9819}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSelect := AValue
  end else
    Result := AObj.RowSelect;
  handleExceptionEnd
end;

// property
function TTreeView_ShowButtons(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowButtons := AValue
  end else
    Result := AObj.ShowButtons;
  handleExceptionEnd
end;

// property
function TTreeView_ShowLines(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowLines := AValue
  end else
    Result := AObj.ShowLines;
  handleExceptionEnd
end;

// property
function TTreeView_ShowRoot(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowRoot := AValue
  end else
    Result := AObj.ShowRoot;
  handleExceptionEnd
end;

// property
function TTreeView_ShowSeparators(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9823}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowSeparators := AValue
  end else
    Result := AObj.ShowSeparators;
  handleExceptionEnd
end;

// property
function TTreeView_SortType(ASet: LongBool; AObj: TTreeView; AValue: TSortType): TSortType; extdecl;
begin
  {$define handleExceptionID := 9824}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortType := AValue
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

// property
function TTreeView_ToolTips(ASet: LongBool; AObj: TTreeView; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9825}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ToolTips := AValue
  end else
    Result := AObj.ToolTips;
  handleExceptionEnd
end;

// event
procedure TTreeView_OnAddition(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnAddition}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnAdvancedCustomDraw(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVAdvancedCustomDrawEvent}
  {$DEFINE EventName := OnAdvancedCustomDraw}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnAdvancedCustomDrawItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVAdvancedCustomDrawItemEvent}
  {$DEFINE EventName := OnAdvancedCustomDrawItem}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnChange(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVChangedEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnChanging(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVChangingEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCollapsed(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnCollapsed}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCollapsing(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCollapsingEvent}
  {$DEFINE EventName := OnCollapsing}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCompare(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCompareEvent}
  {$DEFINE EventName := OnCompare}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnContextPopup(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCreateNodeClass(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCreateNodeClassEvent}
  {$DEFINE EventName := OnCreateNodeClass}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCustomCreateItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomCreateNodeEvent}
  {$DEFINE EventName := OnCustomCreateItem}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCustomDraw(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawEvent}
  {$DEFINE EventName := OnCustomDraw}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCustomDrawItem(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawItemEvent}
  {$DEFINE EventName := OnCustomDrawItem}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnCustomDrawArrow(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVCustomDrawArrowEvent}
  {$DEFINE EventName := OnCustomDrawArrow}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnDblClick(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnDeletion(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnDeletion}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnDragDrop(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnDragOver(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnEdited(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditedEvent}
  {$DEFINE EventName := OnEdited}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnEditing(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditingEvent}
  {$DEFINE EventName := OnEditing}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnEditingEnd(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVEditingEndEvent}
  {$DEFINE EventName := OnEditingEnd}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnEndDrag(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnExpanded(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnExpanded}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnExpanding(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandingEvent}
  {$DEFINE EventName := OnExpanding}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnGetImageIndex(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnGetImageIndex}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnGetSelectedIndex(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVExpandedEvent}
  {$DEFINE EventName := OnGetSelectedIndex}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnHasChildren(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVHasChildrenEvent}
  {$DEFINE EventName := OnHasChildren}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseDown(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseEnter(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseLeave(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseMove(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseUp(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheel(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheelDown(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheelUp(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheelHorz(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheelLeft(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnMouseWheelRight(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnNodeChanged(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTVNodeChangedEvent}
  {$DEFINE EventName := OnNodeChanged}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnSelectionChanged(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChanged}
  LCLEventMethodCode
end;

// event
procedure TTreeView_OnStartDrag(AObj: TTreeView; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TTreeView_TClass(): TClass; extdecl;
begin
  Result := TTreeView;
end;

exports
  TTreeView_Create,
  TTreeView_PathDelimiter,
  TTreeView_ScrolledLeft,
  TTreeView_ScrolledTop,
  TTreeView_AutoExpand,
  TTreeView_DisabledFontColor,
  TTreeView_DragKind,
  TTreeView_DragCursor,
  TTreeView_DragMode,
  TTreeView_HideSelection,
  TTreeView_HotTrack,
  TTreeView_HotTrackColor,
  TTreeView_Indent,
  TTreeView_MultiSelect,
  TTreeView_ParentColor,
  TTreeView_ParentFont,
  TTreeView_ParentShowHint,
  TTreeView_ReadOnly,
  TTreeView_RightClickSelect,
  TTreeView_RowSelect,
  TTreeView_ShowButtons,
  TTreeView_ShowLines,
  TTreeView_ShowRoot,
  TTreeView_ShowSeparators,
  TTreeView_SortType,
  TTreeView_ToolTips,
  TTreeView_OnAddition,
  TTreeView_OnAdvancedCustomDraw,
  TTreeView_OnAdvancedCustomDrawItem,
  TTreeView_OnChange,
  TTreeView_OnChanging,
  TTreeView_OnCollapsed,
  TTreeView_OnCollapsing,
  TTreeView_OnCompare,
  TTreeView_OnContextPopup,
  TTreeView_OnCreateNodeClass,
  TTreeView_OnCustomCreateItem,
  TTreeView_OnCustomDraw,
  TTreeView_OnCustomDrawItem,
  TTreeView_OnCustomDrawArrow,
  TTreeView_OnDblClick,
  TTreeView_OnDeletion,
  TTreeView_OnDragDrop,
  TTreeView_OnDragOver,
  TTreeView_OnEdited,
  TTreeView_OnEditing,
  TTreeView_OnEditingEnd,
  TTreeView_OnEndDrag,
  TTreeView_OnExpanded,
  TTreeView_OnExpanding,
  TTreeView_OnGetImageIndex,
  TTreeView_OnGetSelectedIndex,
  TTreeView_OnHasChildren,
  TTreeView_OnMouseDown,
  TTreeView_OnMouseEnter,
  TTreeView_OnMouseLeave,
  TTreeView_OnMouseMove,
  TTreeView_OnMouseUp,
  TTreeView_OnMouseWheel,
  TTreeView_OnMouseWheelDown,
  TTreeView_OnMouseWheelUp,
  TTreeView_OnMouseWheelHorz,
  TTreeView_OnMouseWheelLeft,
  TTreeView_OnMouseWheelRight,
  TTreeView_OnNodeChanged,
  TTreeView_OnSelectionChanged,
  TTreeView_OnStartDrag,
  TTreeView_TClass;