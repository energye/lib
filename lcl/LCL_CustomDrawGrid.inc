
//constructor
function CustomDrawGrid_Create(AOwner: TComponent): TCustomDrawGrid; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDrawGrid.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomDrawGrid_AllowOutboundEvents(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowOutboundEvents := AValue;
  end else
    Result := AObj.AllowOutboundEvents;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_BorderColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderColor := AValue;
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Col(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Col := AValue;
  end else
    Result := AObj.Col;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_ColWidths(AIsSet: LongBool; AObj: TCustomDrawGrid; aCol: Integer; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColWidths[aCol] := AValue;
  end else
    Result := AObj.ColWidths[aCol];
  handleExceptionEnd
end;

//property
procedure CustomDrawGrid_ColRow(AIsSet: LongBool; AObj: TCustomDrawGrid; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColRow := AValue;
  end else
    Result := AObj.ColRow;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_DisabledFontColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
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
function CustomDrawGrid_Editor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Editor := AValue;
  end else
    Result := AObj.Editor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_EditorBorderStyle(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditorBorderStyle := AValue;
  end else
    Result := AObj.EditorBorderStyle;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_EditorMode(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditorMode := AValue;
  end else
    Result := AObj.EditorMode;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_ExtendedColSizing(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtendedColSizing := AValue;
  end else
    Result := AObj.ExtendedColSizing;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_AltColorStartNormal(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AltColorStartNormal := AValue;
  end else
    Result := AObj.AltColorStartNormal;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FastEditing(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FastEditing := AValue;
  end else
    Result := AObj.FastEditing;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FixedGridLineColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedGridLineColor := AValue;
  end else
    Result := AObj.FixedGridLineColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FocusColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusColor := AValue;
  end else
    Result := AObj.FocusColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FocusRectVisible(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusRectVisible := AValue;
  end else
    Result := AObj.FocusRectVisible;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_GridHeight(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GridHeight;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_GridWidth(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GridWidth;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_IsCellSelected(AObj: TCustomDrawGrid; aCol, aRow: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCellSelected[aCol, aRow];
  handleExceptionEnd
end;

//property
function CustomDrawGrid_LeftCol(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeftCol := AValue;
  end else
    Result := AObj.LeftCol;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Row(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Row := AValue;
  end else
    Result := AObj.Row;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_RowHeights(AIsSet: LongBool; AObj: TCustomDrawGrid; aRow: Integer; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowHeights[aRow] := AValue;
  end else
    Result := AObj.RowHeights[aRow];
  handleExceptionEnd
end;

//property
function CustomDrawGrid_SaveOptions(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TSaveOptions): TSaveOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SaveOptions := AValue;
  end else
    Result := AObj.SaveOptions;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_SelectedColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedColor := AValue;
  end else
    Result := AObj.SelectedColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_SelectedColumn(AObj: TCustomDrawGrid): TGridColumn; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelectedColumn;
  handleExceptionEnd
end;

//property
procedure CustomDrawGrid_Selection(AIsSet: LongBool; AObj: TCustomDrawGrid; var AValue: TGridRect; var Result: TGridRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selection := AValue;
  end else
    Result := AObj.Selection;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_StrictSort(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StrictSort := AValue;
  end else
    Result := AObj.StrictSort;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_TopRow(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopRow := AValue;
  end else
    Result := AObj.TopRow;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_UseXORFeatures(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseXORFeatures := AValue;
  end else
    Result := AObj.UseXORFeatures;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_AutoAdvance(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TAutoAdvance): TAutoAdvance; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoAdvance := AValue;
  end else
    Result := AObj.AutoAdvance;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_AutoFillColumns(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoFillColumns := AValue;
  end else
    Result := AObj.AutoFillColumns;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_ColCount(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColCount := AValue;
  end else
    Result := AObj.ColCount;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Columns(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TGridColumns): TGridColumns; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Columns := AValue;
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_DefaultColWidth(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultColWidth := AValue;
  end else
    Result := AObj.DefaultColWidth;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_DefaultDrawing(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultDrawing := AValue;
  end else
    Result := AObj.DefaultDrawing;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_DefaultRowHeight(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultRowHeight := AValue;
  end else
    Result := AObj.DefaultRowHeight;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FadeUnfocusedSelection(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FadeUnfocusedSelection := AValue;
  end else
    Result := AObj.FadeUnfocusedSelection;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FixedColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedColor := AValue;
  end else
    Result := AObj.FixedColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FixedCols(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedCols := AValue;
  end else
    Result := AObj.FixedCols;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FixedHotColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedHotColor := AValue;
  end else
    Result := AObj.FixedHotColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_FixedRows(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedRows := AValue;
  end else
    Result := AObj.FixedRows;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Flat(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flat := AValue;
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_GridLineColor(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GridLineColor := AValue;
  end else
    Result := AObj.GridLineColor;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_GridLineStyle(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TPenStyle): TPenStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GridLineStyle := AValue;
  end else
    Result := AObj.GridLineStyle;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_GridLineWidth(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GridLineWidth := AValue;
  end else
    Result := AObj.GridLineWidth;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Options(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TGridOptions): TGridOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_Options2(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TGridOptions2): TGridOptions2; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options2 := AValue;
  end else
    Result := AObj.Options2;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_ParentShowHint(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
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
function CustomDrawGrid_RowCount(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RowCount := AValue;
  end else
    Result := AObj.RowCount;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_ScrollBars(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBars := AValue;
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_TabAdvance(AIsSet: LongBool; AObj: TCustomDrawGrid; AValue: TAutoAdvance): TAutoAdvance; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabAdvance := AValue;
  end else
    Result := AObj.TabAdvance;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_VisibleColCount(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleColCount;
  handleExceptionEnd
end;

//property
function CustomDrawGrid_VisibleRowCount(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleRowCount;
  handleExceptionEnd
end;

//function
function CustomDrawGrid_Class(): TClass; extdecl;
begin
  Result := TCustomDrawGrid;
end;

//procedure
procedure CustomDrawGrid_DeleteColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteColRow(IsColumn, index);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_DeleteCol(AObj: TCustomDrawGrid; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteCol(Index);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_DeleteRow(AObj: TCustomDrawGrid; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteRow(Index);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_ExchangeColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index, WithIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ExchangeColRow(IsColumn, index, WithIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_InsertColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: integer); extdecl;
begin
  handleExceptionBegin
  AObj.InsertColRow(IsColumn, index);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_MoveColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; FromIndex, ToIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveColRow(IsColumn, FromIndex, ToIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_SortColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SortColRow(IsColumn, index);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_SortColRow1(AObj: TCustomDrawGrid; IsColumn: LongBool; Index, FromIndex, ToIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SortColRow(IsColumn, Index, FromIndex, ToIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomDrawGrid_DefaultDrawCell(AObj: TCustomDrawGrid; aCol, aRow: Integer; var aRect: TRect; aState: TGridDrawState); extdecl;
var
  RetaRect: TRect;
begin
  handleExceptionBegin
  RetaRect := aRect;
  AObj.DefaultDrawCell(aCol, aRow, RetaRect, aState);
  aRect := RetaRect;
  handleExceptionEnd
end;

//property event
procedure CustomDrawGrid_SetOnAfterSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnAfterSelection}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnBeforeSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnBeforeSelection}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnColRowDeleted(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowDeleted}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnColRowExchanged(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowExchanged}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnColRowInserted(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGridOperationEvent}
  {$DEFINE EventName := OnColRowInserted}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnColRowMoved(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowMoved}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnCompareCells(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompareCells}
  {$DEFINE EventName := OnCompareCells}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnContextPopup(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnDblClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnDragDrop(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnDragOver(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnDrawCell(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDrawCell}
  {$DEFINE EventName := OnDrawCell}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnButtonClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnButtonClick}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnEndDock(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnEndDrag(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnGetEditMask(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetEditEvent}
  {$DEFINE EventName := OnGetEditMask}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnGetEditText(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetEditEvent}
  {$DEFINE EventName := OnGetEditText}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnHeaderClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHdrEvent}
  {$DEFINE EventName := OnHeaderClick}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnHeaderSized(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHdrEvent}
  {$DEFINE EventName := OnHeaderSized}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnHeaderSizing(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHeaderSizingEvent}
  {$DEFINE EventName := OnHeaderSizing}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseDown(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseEnter(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseLeave(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseMove(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseUp(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseWheel(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseWheelDown(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnMouseWheelUp(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnPickListSelect(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPickListSelect}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnPrepareCanvas(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrepareCanvasEvent}
  {$DEFINE EventName := OnPrepareCanvas}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnSelectEditor(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSelectEditorEvent}
  {$DEFINE EventName := OnSelectEditor}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnSelection}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnSelectCell(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectCellEvent}
  {$DEFINE EventName := OnSelectCell}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnSetEditText(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetEditEvent}
  {$DEFINE EventName := OnSetEditText}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnStartDock(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnStartDrag(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnTopleftChanged(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTopleftChanged}
  EventMethodCode
end;

//property event
procedure CustomDrawGrid_SetOnValidateEntry(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTValidateEntryEvent}
  {$DEFINE EventName := OnValidateEntry}
  EventMethodCode
end;


exports
  CustomDrawGrid_Create,
  CustomDrawGrid_AllowOutboundEvents,
  CustomDrawGrid_BorderColor,
  CustomDrawGrid_Col,
  CustomDrawGrid_ColWidths,
  CustomDrawGrid_ColRow,
  CustomDrawGrid_DisabledFontColor,
  CustomDrawGrid_Editor,
  CustomDrawGrid_EditorBorderStyle,
  CustomDrawGrid_EditorMode,
  CustomDrawGrid_ExtendedColSizing,
  CustomDrawGrid_AltColorStartNormal,
  CustomDrawGrid_FastEditing,
  CustomDrawGrid_FixedGridLineColor,
  CustomDrawGrid_FocusColor,
  CustomDrawGrid_FocusRectVisible,
  CustomDrawGrid_GridHeight,
  CustomDrawGrid_GridWidth,
  CustomDrawGrid_IsCellSelected,
  CustomDrawGrid_LeftCol,
  CustomDrawGrid_Row,
  CustomDrawGrid_RowHeights,
  CustomDrawGrid_SaveOptions,
  CustomDrawGrid_SelectedColor,
  CustomDrawGrid_SelectedColumn,
  CustomDrawGrid_Selection,
  CustomDrawGrid_StrictSort,
  CustomDrawGrid_TopRow,
  CustomDrawGrid_UseXORFeatures,
  CustomDrawGrid_AutoAdvance,
  CustomDrawGrid_AutoFillColumns,
  CustomDrawGrid_ColCount,
  CustomDrawGrid_Columns,
  CustomDrawGrid_DefaultColWidth,
  CustomDrawGrid_DefaultDrawing,
  CustomDrawGrid_DefaultRowHeight,
  CustomDrawGrid_FadeUnfocusedSelection,
  CustomDrawGrid_FixedColor,
  CustomDrawGrid_FixedCols,
  CustomDrawGrid_FixedHotColor,
  CustomDrawGrid_FixedRows,
  CustomDrawGrid_Flat,
  CustomDrawGrid_GridLineColor,
  CustomDrawGrid_GridLineStyle,
  CustomDrawGrid_GridLineWidth,
  CustomDrawGrid_Options,
  CustomDrawGrid_Options2,
  CustomDrawGrid_ParentShowHint,
  CustomDrawGrid_RowCount,
  CustomDrawGrid_ScrollBars,
  CustomDrawGrid_TabAdvance,
  CustomDrawGrid_VisibleColCount,
  CustomDrawGrid_VisibleRowCount,
  CustomDrawGrid_Class,
  CustomDrawGrid_DeleteColRow,
  CustomDrawGrid_DeleteCol,
  CustomDrawGrid_DeleteRow,
  CustomDrawGrid_ExchangeColRow,
  CustomDrawGrid_InsertColRow,
  CustomDrawGrid_MoveColRow,
  CustomDrawGrid_SortColRow,
  CustomDrawGrid_SortColRow1,
  CustomDrawGrid_DefaultDrawCell,
  CustomDrawGrid_SetOnAfterSelection,
  CustomDrawGrid_SetOnBeforeSelection,
  CustomDrawGrid_SetOnColRowDeleted,
  CustomDrawGrid_SetOnColRowExchanged,
  CustomDrawGrid_SetOnColRowInserted,
  CustomDrawGrid_SetOnColRowMoved,
  CustomDrawGrid_SetOnCompareCells,
  CustomDrawGrid_SetOnContextPopup,
  CustomDrawGrid_SetOnDblClick,
  CustomDrawGrid_SetOnDragDrop,
  CustomDrawGrid_SetOnDragOver,
  CustomDrawGrid_SetOnDrawCell,
  CustomDrawGrid_SetOnButtonClick,
  CustomDrawGrid_SetOnEndDock,
  CustomDrawGrid_SetOnEndDrag,
  CustomDrawGrid_SetOnGetEditMask,
  CustomDrawGrid_SetOnGetEditText,
  CustomDrawGrid_SetOnHeaderClick,
  CustomDrawGrid_SetOnHeaderSized,
  CustomDrawGrid_SetOnHeaderSizing,
  CustomDrawGrid_SetOnMouseDown,
  CustomDrawGrid_SetOnMouseEnter,
  CustomDrawGrid_SetOnMouseLeave,
  CustomDrawGrid_SetOnMouseMove,
  CustomDrawGrid_SetOnMouseUp,
  CustomDrawGrid_SetOnMouseWheel,
  CustomDrawGrid_SetOnMouseWheelDown,
  CustomDrawGrid_SetOnMouseWheelUp,
  CustomDrawGrid_SetOnPickListSelect,
  CustomDrawGrid_SetOnPrepareCanvas,
  CustomDrawGrid_SetOnSelectEditor,
  CustomDrawGrid_SetOnSelection,
  CustomDrawGrid_SetOnSelectCell,
  CustomDrawGrid_SetOnSetEditText,
  CustomDrawGrid_SetOnStartDock,
  CustomDrawGrid_SetOnStartDrag,
  CustomDrawGrid_SetOnTopleftChanged,
  CustomDrawGrid_SetOnValidateEntry;