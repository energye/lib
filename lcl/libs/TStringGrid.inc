// constructor
function TStringGrid_Create(AOwner: TComponent): TStringGrid; extdecl;
begin
  {$define handleExceptionID := 18800}
  handleExceptionBegin
  Result := TStringGrid.Create(AOwner);
  handleExceptionEnd
end;

// property
function TStringGrid_Modified(ASet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
function TStringGrid_InplaceEditor(AObj: TStringGrid): TWinControl; extdecl;
begin
  {$define handleExceptionID := 18802}
  handleExceptionBegin
  Result := AObj.InplaceEditor;
  handleExceptionEnd
end;

// property
function TStringGrid_AlternateColor(ASet: LongBool; AObj: TStringGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlternateColor := AValue
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

// property
function TStringGrid_AutoEdit(ASet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoEdit := AValue
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

// property
function TStringGrid_CellHintPriority(ASet: LongBool; AObj: TStringGrid; AValue: TCellHintPriority): TCellHintPriority; extdecl;
begin
  {$define handleExceptionID := 18805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CellHintPriority := AValue
  end else
    Result := AObj.CellHintPriority;
  handleExceptionEnd
end;

// property
function TStringGrid_ColRowDraggingCursor(ASet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColRowDraggingCursor := AValue
  end else
    Result := AObj.ColRowDraggingCursor;
  handleExceptionEnd
end;

// property
function TStringGrid_ColRowDragIndicatorColor(ASet: LongBool; AObj: TStringGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColRowDragIndicatorColor := AValue
  end else
    Result := AObj.ColRowDragIndicatorColor;
  handleExceptionEnd
end;

// property
function TStringGrid_ColSizingCursor(ASet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColSizingCursor := AValue
  end else
    Result := AObj.ColSizingCursor;
  handleExceptionEnd
end;

// property
function TStringGrid_ColumnClickSorts(ASet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColumnClickSorts := AValue
  end else
    Result := AObj.ColumnClickSorts;
  handleExceptionEnd
end;

// property
function TStringGrid_DragCursor(ASet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TStringGrid_DragKind(ASet: LongBool; AObj: TStringGrid; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 18811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TStringGrid_DragMode(ASet: LongBool; AObj: TStringGrid; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 18812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TStringGrid_HeaderHotZones(ASet: LongBool; AObj: TStringGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 18813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderHotZones := AValue
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

// property
function TStringGrid_HeaderPushZones(ASet: LongBool; AObj: TStringGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 18814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderPushZones := AValue
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

// property
function TStringGrid_ImageIndexSortAsc(ASet: LongBool; AObj: TStringGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 18815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndexSortAsc := AValue
  end else
    Result := AObj.ImageIndexSortAsc;
  handleExceptionEnd
end;

// property
function TStringGrid_ImageIndexSortDesc(ASet: LongBool; AObj: TStringGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 18816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndexSortDesc := AValue
  end else
    Result := AObj.ImageIndexSortDesc;
  handleExceptionEnd
end;

// property
function TStringGrid_MouseWheelOption(ASet: LongBool; AObj: TStringGrid; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  {$define handleExceptionID := 18817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseWheelOption := AValue
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

// property
function TStringGrid_ParentColor(ASet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18818}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TStringGrid_ParentFont(ASet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18819}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TStringGrid_RangeSelectMode(ASet: LongBool; AObj: TStringGrid; AValue: TRangeSelectMode): TRangeSelectMode; extdecl;
begin
  {$define handleExceptionID := 18820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RangeSelectMode := AValue
  end else
    Result := AObj.RangeSelectMode;
  handleExceptionEnd
end;

// property
function TStringGrid_RowSizingCursor(ASet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 18821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSizingCursor := AValue
  end else
    Result := AObj.RowSizingCursor;
  handleExceptionEnd
end;

// property
function TStringGrid_TitleFont(ASet: LongBool; AObj: TStringGrid; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 18822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleFont := AValue
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

// property
function TStringGrid_TitleImageList(ASet: LongBool; AObj: TStringGrid; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 18823}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleImageList := AValue
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

// property
function TStringGrid_TitleStyle(ASet: LongBool; AObj: TStringGrid; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  {$define handleExceptionID := 18824}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleStyle := AValue
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

// event
procedure TStringGrid_OnCellProcess(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCellProcessEvent}
  {$DEFINE EventName := OnCellProcess}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnCheckboxToggled(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnEditingDone(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnGetCellHint(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCellHintEvent}
  {$DEFINE EventName := OnGetCellHint}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnGetCheckboxState(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCheckboxStateEvent}
  {$DEFINE EventName := OnGetCheckboxState}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnMouseWheelHorz(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnMouseWheelLeft(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnMouseWheelRight(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnSetCheckboxState(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetCheckboxStateEvent}
  {$DEFINE EventName := OnSetCheckboxState}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnUserCheckboxBitmap(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  LCLEventMethodCode
end;

// event
procedure TStringGrid_OnUserCheckboxImage(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckBoxImageEvent}
  {$DEFINE EventName := OnUserCheckboxImage}
  LCLEventMethodCode
end;

function TStringGrid_TClass(): TClass; extdecl;
begin
  Result := TStringGrid;
end;

exports
  TStringGrid_Create,
  TStringGrid_Modified,
  TStringGrid_InplaceEditor,
  TStringGrid_AlternateColor,
  TStringGrid_AutoEdit,
  TStringGrid_CellHintPriority,
  TStringGrid_ColRowDraggingCursor,
  TStringGrid_ColRowDragIndicatorColor,
  TStringGrid_ColSizingCursor,
  TStringGrid_ColumnClickSorts,
  TStringGrid_DragCursor,
  TStringGrid_DragKind,
  TStringGrid_DragMode,
  TStringGrid_HeaderHotZones,
  TStringGrid_HeaderPushZones,
  TStringGrid_ImageIndexSortAsc,
  TStringGrid_ImageIndexSortDesc,
  TStringGrid_MouseWheelOption,
  TStringGrid_ParentColor,
  TStringGrid_ParentFont,
  TStringGrid_RangeSelectMode,
  TStringGrid_RowSizingCursor,
  TStringGrid_TitleFont,
  TStringGrid_TitleImageList,
  TStringGrid_TitleStyle,
  TStringGrid_OnCellProcess,
  TStringGrid_OnCheckboxToggled,
  TStringGrid_OnEditingDone,
  TStringGrid_OnGetCellHint,
  TStringGrid_OnGetCheckboxState,
  TStringGrid_OnMouseWheelHorz,
  TStringGrid_OnMouseWheelLeft,
  TStringGrid_OnMouseWheelRight,
  TStringGrid_OnSetCheckboxState,
  TStringGrid_OnUserCheckboxBitmap,
  TStringGrid_OnUserCheckboxImage,
  TStringGrid_TClass;