
//constructor
function DrawGrid_Create(AOwner: TComponent): TDrawGrid; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TDrawGrid.Create(AOwner);
  handleExceptionEnd
end;

//property
function DrawGrid_InplaceEditor(AObj: TDrawGrid): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='InplaceEditor'}
  handleExceptionBegin
  Result := AObj.InplaceEditor;
  handleExceptionEnd
end;

//property
function DrawGrid_AlternateColor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='AlternateColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlternateColor := AValue;
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

//property
function DrawGrid_AutoEdit(AIsSet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoEdit'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoEdit := AValue;
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

//property
function DrawGrid_ColRowDraggingCursor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='ColRowDraggingCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColRowDraggingCursor := AValue;
  end else
    Result := AObj.ColRowDraggingCursor;
  handleExceptionEnd
end;

//property
function DrawGrid_ColRowDragIndicatorColor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='ColRowDragIndicatorColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColRowDragIndicatorColor := AValue;
  end else
    Result := AObj.ColRowDragIndicatorColor;
  handleExceptionEnd
end;

//property
function DrawGrid_ColSizingCursor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='ColSizingCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColSizingCursor := AValue;
  end else
    Result := AObj.ColSizingCursor;
  handleExceptionEnd
end;

//property
function DrawGrid_ColumnClickSorts(AIsSet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnClickSorts'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColumnClickSorts := AValue;
  end else
    Result := AObj.ColumnClickSorts;
  handleExceptionEnd
end;

//property
function DrawGrid_DragCursor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
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
function DrawGrid_DragKind(AIsSet: LongBool; AObj: TDrawGrid; AValue: TDragKind): TDragKind; extdecl;
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
function DrawGrid_DragMode(AIsSet: LongBool; AObj: TDrawGrid; AValue: TDragMode): TDragMode; extdecl;
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
function DrawGrid_ExtendedSelect(AIsSet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExtendedSelect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtendedSelect := AValue;
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

//property
function DrawGrid_HeaderHotZones(AIsSet: LongBool; AObj: TDrawGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderHotZones'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderHotZones := AValue;
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

//property
function DrawGrid_HeaderPushZones(AIsSet: LongBool; AObj: TDrawGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderPushZones'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderPushZones := AValue;
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

//property
function DrawGrid_ImageIndexSortAsc(AIsSet: LongBool; AObj: TDrawGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndexSortAsc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndexSortAsc := AValue;
  end else
    Result := AObj.ImageIndexSortAsc;
  handleExceptionEnd
end;

//property
function DrawGrid_ImageIndexSortDesc(AIsSet: LongBool; AObj: TDrawGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndexSortDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndexSortDesc := AValue;
  end else
    Result := AObj.ImageIndexSortDesc;
  handleExceptionEnd
end;

//property
function DrawGrid_MouseWheelOption(AIsSet: LongBool; AObj: TDrawGrid; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  {$define handleExceptionFuncName :='MouseWheelOption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MouseWheelOption := AValue;
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

//property
function DrawGrid_ParentColor(AIsSet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
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
function DrawGrid_ParentFont(AIsSet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
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
function DrawGrid_RangeSelectMode(AIsSet: LongBool; AObj: TDrawGrid; AValue: TRangeSelectMode): TRangeSelectMode; extdecl;
begin
  {$define handleExceptionFuncName :='RangeSelectMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RangeSelectMode := AValue;
  end else
    Result := AObj.RangeSelectMode;
  handleExceptionEnd
end;

//property
function DrawGrid_RowSizingCursor(AIsSet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='RowSizingCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowSizingCursor := AValue;
  end else
    Result := AObj.RowSizingCursor;
  handleExceptionEnd
end;

//property
function DrawGrid_TitleFont(AIsSet: LongBool; AObj: TDrawGrid; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionFuncName :='TitleFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleFont := AValue;
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

//property
function DrawGrid_TitleImageList(AIsSet: LongBool; AObj: TDrawGrid; AValue: TImageList): TImageList; extdecl;
begin
  {$define handleExceptionFuncName :='TitleImageList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleImageList := AValue;
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

//property
function DrawGrid_TitleImageListWidth(AIsSet: LongBool; AObj: TDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TitleImageListWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleImageListWidth := AValue;
  end else
    Result := AObj.TitleImageListWidth;
  handleExceptionEnd
end;

//property
function DrawGrid_TitleStyle(AIsSet: LongBool; AObj: TDrawGrid; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  {$define handleExceptionFuncName :='TitleStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleStyle := AValue;
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

//function
function DrawGrid_Class(): TClass; extdecl;
begin
  Result := TDrawGrid;
end;

//property event
procedure DrawGrid_SetOnCheckboxToggled(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnEditingDone(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnGetCellHint(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCellHintEvent}
  {$DEFINE EventName := OnGetCellHint}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnGetCheckboxState(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCheckboxStateEvent}
  {$DEFINE EventName := OnGetCheckboxState}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnMouseWheelHorz(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnMouseWheelLeft(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnMouseWheelRight(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnSetCheckboxState(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetCheckboxStateEvent}
  {$DEFINE EventName := OnSetCheckboxState}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnUserCheckboxBitmap(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  EventMethodCode
end;

//property event
procedure DrawGrid_SetOnUserCheckboxImage(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckBoxImageEvent}
  {$DEFINE EventName := OnUserCheckboxImage}
  EventMethodCode
end;


exports
  DrawGrid_Create,
  DrawGrid_InplaceEditor,
  DrawGrid_AlternateColor,
  DrawGrid_AutoEdit,
  DrawGrid_ColRowDraggingCursor,
  DrawGrid_ColRowDragIndicatorColor,
  DrawGrid_ColSizingCursor,
  DrawGrid_ColumnClickSorts,
  DrawGrid_DragCursor,
  DrawGrid_DragKind,
  DrawGrid_DragMode,
  DrawGrid_ExtendedSelect,
  DrawGrid_HeaderHotZones,
  DrawGrid_HeaderPushZones,
  DrawGrid_ImageIndexSortAsc,
  DrawGrid_ImageIndexSortDesc,
  DrawGrid_MouseWheelOption,
  DrawGrid_ParentColor,
  DrawGrid_ParentFont,
  DrawGrid_RangeSelectMode,
  DrawGrid_RowSizingCursor,
  DrawGrid_TitleFont,
  DrawGrid_TitleImageList,
  DrawGrid_TitleImageListWidth,
  DrawGrid_TitleStyle,
  DrawGrid_Class,
  DrawGrid_SetOnCheckboxToggled,
  DrawGrid_SetOnEditingDone,
  DrawGrid_SetOnGetCellHint,
  DrawGrid_SetOnGetCheckboxState,
  DrawGrid_SetOnMouseWheelHorz,
  DrawGrid_SetOnMouseWheelLeft,
  DrawGrid_SetOnMouseWheelRight,
  DrawGrid_SetOnSetCheckboxState,
  DrawGrid_SetOnUserCheckboxBitmap,
  DrawGrid_SetOnUserCheckboxImage;