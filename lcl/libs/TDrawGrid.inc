// constructor
function TDrawGrid_Create(AOwner: TComponent): TDrawGrid; extdecl;
begin
  {$define handleExceptionID := 18900}
  handleExceptionBegin
  Result := TDrawGrid.Create(AOwner);
  handleExceptionEnd
end;

// property
function TDrawGrid_InplaceEditor(AObj: TDrawGrid): TWinControl; extdecl;
begin
  {$define handleExceptionID := 18901}
  handleExceptionBegin
  Result := AObj.InplaceEditor;
  handleExceptionEnd
end;

// property
function TDrawGrid_AlternateColor(ASet: LongBool; AObj: TDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlternateColor := AValue
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

// property
function TDrawGrid_AutoEdit(ASet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoEdit := AValue
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

// property
function TDrawGrid_ColRowDraggingCursor(ASet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColRowDraggingCursor := AValue
  end else
    Result := AObj.ColRowDraggingCursor;
  handleExceptionEnd
end;

// property
function TDrawGrid_ColRowDragIndicatorColor(ASet: LongBool; AObj: TDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColRowDragIndicatorColor := AValue
  end else
    Result := AObj.ColRowDragIndicatorColor;
  handleExceptionEnd
end;

// property
function TDrawGrid_ColSizingCursor(ASet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColSizingCursor := AValue
  end else
    Result := AObj.ColSizingCursor;
  handleExceptionEnd
end;

// property
function TDrawGrid_ColumnClickSorts(ASet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColumnClickSorts := AValue
  end else
    Result := AObj.ColumnClickSorts;
  handleExceptionEnd
end;

// property
function TDrawGrid_DragCursor(ASet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TDrawGrid_DragKind(ASet: LongBool; AObj: TDrawGrid; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 18909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TDrawGrid_DragMode(ASet: LongBool; AObj: TDrawGrid; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 18910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TDrawGrid_ExtendedSelect(ASet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtendedSelect := AValue
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

// property
function TDrawGrid_HeaderHotZones(ASet: LongBool; AObj: TDrawGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 18912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderHotZones := AValue
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

// property
function TDrawGrid_HeaderPushZones(ASet: LongBool; AObj: TDrawGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 18913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderPushZones := AValue
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

// property
function TDrawGrid_ImageIndexSortAsc(ASet: LongBool; AObj: TDrawGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 18914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndexSortAsc := AValue
  end else
    Result := AObj.ImageIndexSortAsc;
  handleExceptionEnd
end;

// property
function TDrawGrid_ImageIndexSortDesc(ASet: LongBool; AObj: TDrawGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 18915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndexSortDesc := AValue
  end else
    Result := AObj.ImageIndexSortDesc;
  handleExceptionEnd
end;

// property
function TDrawGrid_MouseWheelOption(ASet: LongBool; AObj: TDrawGrid; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  {$define handleExceptionID := 18916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseWheelOption := AValue
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

// property
function TDrawGrid_ParentColor(ASet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TDrawGrid_ParentFont(ASet: LongBool; AObj: TDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TDrawGrid_RangeSelectMode(ASet: LongBool; AObj: TDrawGrid; AValue: TRangeSelectMode): TRangeSelectMode; extdecl;
begin
  {$define handleExceptionID := 18919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RangeSelectMode := AValue
  end else
    Result := AObj.RangeSelectMode;
  handleExceptionEnd
end;

// property
function TDrawGrid_RowSizingCursor(ASet: LongBool; AObj: TDrawGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSizingCursor := AValue
  end else
    Result := AObj.RowSizingCursor;
  handleExceptionEnd
end;

// property
function TDrawGrid_TitleFont(ASet: LongBool; AObj: TDrawGrid; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 18921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleFont := AValue
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

// property
function TDrawGrid_TitleImageList(ASet: LongBool; AObj: TDrawGrid; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 18922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleImageList := AValue
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

// property
function TDrawGrid_TitleImageListWidth(ASet: LongBool; AObj: TDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleImageListWidth := AValue
  end else
    Result := AObj.TitleImageListWidth;
  handleExceptionEnd
end;

// property
function TDrawGrid_TitleStyle(ASet: LongBool; AObj: TDrawGrid; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  {$define handleExceptionID := 18924}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleStyle := AValue
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

// event
procedure TDrawGrid_OnCheckboxToggled(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnEditingDone(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnGetCellHint(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCellHintEvent}
  {$DEFINE EventName := OnGetCellHint}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnGetCheckboxState(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCheckboxStateEvent}
  {$DEFINE EventName := OnGetCheckboxState}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnMouseWheelHorz(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnMouseWheelLeft(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnMouseWheelRight(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnSetCheckboxState(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetCheckboxStateEvent}
  {$DEFINE EventName := OnSetCheckboxState}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnUserCheckboxBitmap(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  LCLEventMethodCode
end;

// event
procedure TDrawGrid_OnUserCheckboxImage(AObj: TDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckBoxImageEvent}
  {$DEFINE EventName := OnUserCheckboxImage}
  LCLEventMethodCode
end;

function TDrawGrid_TClass(): TClass; extdecl;
begin
  Result := TDrawGrid;
end;

exports
  TDrawGrid_Create,
  TDrawGrid_InplaceEditor,
  TDrawGrid_AlternateColor,
  TDrawGrid_AutoEdit,
  TDrawGrid_ColRowDraggingCursor,
  TDrawGrid_ColRowDragIndicatorColor,
  TDrawGrid_ColSizingCursor,
  TDrawGrid_ColumnClickSorts,
  TDrawGrid_DragCursor,
  TDrawGrid_DragKind,
  TDrawGrid_DragMode,
  TDrawGrid_ExtendedSelect,
  TDrawGrid_HeaderHotZones,
  TDrawGrid_HeaderPushZones,
  TDrawGrid_ImageIndexSortAsc,
  TDrawGrid_ImageIndexSortDesc,
  TDrawGrid_MouseWheelOption,
  TDrawGrid_ParentColor,
  TDrawGrid_ParentFont,
  TDrawGrid_RangeSelectMode,
  TDrawGrid_RowSizingCursor,
  TDrawGrid_TitleFont,
  TDrawGrid_TitleImageList,
  TDrawGrid_TitleImageListWidth,
  TDrawGrid_TitleStyle,
  TDrawGrid_OnCheckboxToggled,
  TDrawGrid_OnEditingDone,
  TDrawGrid_OnGetCellHint,
  TDrawGrid_OnGetCheckboxState,
  TDrawGrid_OnMouseWheelHorz,
  TDrawGrid_OnMouseWheelLeft,
  TDrawGrid_OnMouseWheelRight,
  TDrawGrid_OnSetCheckboxState,
  TDrawGrid_OnUserCheckboxBitmap,
  TDrawGrid_OnUserCheckboxImage,
  TDrawGrid_TClass;