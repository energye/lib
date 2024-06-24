
//constructor
function StringGrid_Create(AOwner: TComponent): TStringGrid; extdecl;
begin
  handleExceptionBegin
  Result := TStringGrid.Create(AOwner);
  handleExceptionEnd
end;

//property
function StringGrid_Modified(AIsSet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Modified := AValue;
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

//property
function StringGrid_InplaceEditor(AObj: TStringGrid): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InplaceEditor;
  handleExceptionEnd
end;

//property
function StringGrid_AlternateColor(AIsSet: LongBool; AObj: TStringGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlternateColor := AValue;
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

//property
function StringGrid_AutoEdit(AIsSet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoEdit := AValue;
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

//property
function StringGrid_CellHintPriority(AIsSet: LongBool; AObj: TStringGrid; AValue: TCellHintPriority): TCellHintPriority; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CellHintPriority := AValue;
  end else
    Result := AObj.CellHintPriority;
  handleExceptionEnd
end;

//property
function StringGrid_ColRowDraggingCursor(AIsSet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColRowDraggingCursor := AValue;
  end else
    Result := AObj.ColRowDraggingCursor;
  handleExceptionEnd
end;

//property
function StringGrid_ColRowDragIndicatorColor(AIsSet: LongBool; AObj: TStringGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColRowDragIndicatorColor := AValue;
  end else
    Result := AObj.ColRowDragIndicatorColor;
  handleExceptionEnd
end;

//property
function StringGrid_ColSizingCursor(AIsSet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColSizingCursor := AValue;
  end else
    Result := AObj.ColSizingCursor;
  handleExceptionEnd
end;

//property
function StringGrid_ColumnClickSorts(AIsSet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColumnClickSorts := AValue;
  end else
    Result := AObj.ColumnClickSorts;
  handleExceptionEnd
end;

//property
function StringGrid_DragCursor(AIsSet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
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
function StringGrid_DragKind(AIsSet: LongBool; AObj: TStringGrid; AValue: TDragKind): TDragKind; extdecl;
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
function StringGrid_DragMode(AIsSet: LongBool; AObj: TStringGrid; AValue: TDragMode): TDragMode; extdecl;
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
function StringGrid_HeaderHotZones(AIsSet: LongBool; AObj: TStringGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderHotZones := AValue;
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

//property
function StringGrid_HeaderPushZones(AIsSet: LongBool; AObj: TStringGrid; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderPushZones := AValue;
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

//property
function StringGrid_ImageIndexSortAsc(AIsSet: LongBool; AObj: TStringGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndexSortAsc := AValue;
  end else
    Result := AObj.ImageIndexSortAsc;
  handleExceptionEnd
end;

//property
function StringGrid_ImageIndexSortDesc(AIsSet: LongBool; AObj: TStringGrid; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndexSortDesc := AValue;
  end else
    Result := AObj.ImageIndexSortDesc;
  handleExceptionEnd
end;

//property
function StringGrid_MouseWheelOption(AIsSet: LongBool; AObj: TStringGrid; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MouseWheelOption := AValue;
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

//property
function StringGrid_ParentColor(AIsSet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
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
function StringGrid_ParentFont(AIsSet: LongBool; AObj: TStringGrid; AValue: LongBool): LongBool; extdecl;
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
function StringGrid_RangeSelectMode(AIsSet: LongBool; AObj: TStringGrid; AValue: TRangeSelectMode): TRangeSelectMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RangeSelectMode := AValue;
  end else
    Result := AObj.RangeSelectMode;
  handleExceptionEnd
end;

//property
function StringGrid_RowSizingCursor(AIsSet: LongBool; AObj: TStringGrid; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowSizingCursor := AValue;
  end else
    Result := AObj.RowSizingCursor;
  handleExceptionEnd
end;

//property
function StringGrid_TitleFont(AIsSet: LongBool; AObj: TStringGrid; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleFont := AValue;
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

//property
function StringGrid_TitleImageList(AIsSet: LongBool; AObj: TStringGrid; AValue: TImageList): TImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleImageList := AValue;
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

//property
function StringGrid_TitleStyle(AIsSet: LongBool; AObj: TStringGrid; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleStyle := AValue;
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

//function
function StringGrid_Class(): TClass; extdecl;
begin
  Result := TStringGrid;
end;

//property event
procedure StringGrid_SetOnCellProcess(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCellProcessEvent}
  {$DEFINE EventName := OnCellProcess}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnCheckboxToggled(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnEditingDone(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnGetCellHint(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCellHintEvent}
  {$DEFINE EventName := OnGetCellHint}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnGetCheckboxState(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetCheckboxStateEvent}
  {$DEFINE EventName := OnGetCheckboxState}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnMouseWheelHorz(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnMouseWheelLeft(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnMouseWheelRight(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnSetCheckboxState(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetCheckboxStateEvent}
  {$DEFINE EventName := OnSetCheckboxState}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnUserCheckboxBitmap(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  EventMethodCode
end;

//property event
procedure StringGrid_SetOnUserCheckboxImage(AObj: TStringGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckBoxImageEvent}
  {$DEFINE EventName := OnUserCheckboxImage}
  EventMethodCode
end;


exports
  StringGrid_Create,
  StringGrid_Modified,
  StringGrid_InplaceEditor,
  StringGrid_AlternateColor,
  StringGrid_AutoEdit,
  StringGrid_CellHintPriority,
  StringGrid_ColRowDraggingCursor,
  StringGrid_ColRowDragIndicatorColor,
  StringGrid_ColSizingCursor,
  StringGrid_ColumnClickSorts,
  StringGrid_DragCursor,
  StringGrid_DragKind,
  StringGrid_DragMode,
  StringGrid_HeaderHotZones,
  StringGrid_HeaderPushZones,
  StringGrid_ImageIndexSortAsc,
  StringGrid_ImageIndexSortDesc,
  StringGrid_MouseWheelOption,
  StringGrid_ParentColor,
  StringGrid_ParentFont,
  StringGrid_RangeSelectMode,
  StringGrid_RowSizingCursor,
  StringGrid_TitleFont,
  StringGrid_TitleImageList,
  StringGrid_TitleStyle,
  StringGrid_Class,
  StringGrid_SetOnCellProcess,
  StringGrid_SetOnCheckboxToggled,
  StringGrid_SetOnEditingDone,
  StringGrid_SetOnGetCellHint,
  StringGrid_SetOnGetCheckboxState,
  StringGrid_SetOnMouseWheelHorz,
  StringGrid_SetOnMouseWheelLeft,
  StringGrid_SetOnMouseWheelRight,
  StringGrid_SetOnSetCheckboxState,
  StringGrid_SetOnUserCheckboxBitmap,
  StringGrid_SetOnUserCheckboxImage;