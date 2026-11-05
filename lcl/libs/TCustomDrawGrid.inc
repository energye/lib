// constructor
function TCustomDrawGrid_Create(AOwner: TComponent): TCustomDrawGrid; extdecl;
begin
  {$define handleExceptionID := 18600}
  handleExceptionBegin
  Result := TCustomDrawGrid.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_DeleteColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: Integer); extdecl;
begin
  {$define handleExceptionID := 18601}
  handleExceptionBegin
  AObj.DeleteColRow(IsColumn, index);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_DeleteCol(AObj: TCustomDrawGrid; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 18602}
  handleExceptionBegin
  AObj.DeleteCol(Index);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_DeleteRow(AObj: TCustomDrawGrid; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 18603}
  handleExceptionBegin
  AObj.DeleteRow(Index);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_ExchangeColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: Integer; WithIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 18604}
  handleExceptionBegin
  AObj.ExchangeColRow(IsColumn, index, WithIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_InsertColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; index: integer); extdecl;
begin
  {$define handleExceptionID := 18605}
  handleExceptionBegin
  AObj.InsertColRow(IsColumn, index);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_MoveColRow(AObj: TCustomDrawGrid; IsColumn: LongBool; FromIndex: Integer; ToIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 18606}
  handleExceptionBegin
  AObj.MoveColRow(IsColumn, FromIndex, ToIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_SortColRowWithBoolInt(AObj: TCustomDrawGrid; IsColumn: LongBool; index: Integer); extdecl;
begin
  {$define handleExceptionID := 18607}
  handleExceptionBegin
  AObj.SortColRow(IsColumn, index);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_SortColRowWithBoolIntX3(AObj: TCustomDrawGrid; IsColumn: LongBool; Index: Integer; FromIndex: Integer; ToIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 18608}
  handleExceptionBegin
  AObj.SortColRow(IsColumn, Index, FromIndex, ToIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomDrawGrid_DefaultDrawCell(AObj: TCustomDrawGrid; aCol: Integer; aRow: Integer; var aRect: TRect; aState: TGridDrawState); extdecl;
var
  OutaRect: TRect;
begin
  {$define handleExceptionID := 18609}
  handleExceptionBegin
  OutaRect := aRect;
  AObj.DefaultDrawCell(aCol, aRow, OutaRect, aState);
  aRect := OutaRect;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_AllowOutboundEvents(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowOutboundEvents := AValue
  end else
    Result := AObj.AllowOutboundEvents;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_BorderColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderColor := AValue
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Col(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Col := AValue
  end else
    Result := AObj.Col;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_ColWidths(ASet: LongBool; AObj: TCustomDrawGrid; aCol: Integer; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColWidths[aCol] := AValue
  end else
    Result := AObj.ColWidths[aCol];
  handleExceptionEnd
end;

// property
procedure TCustomDrawGrid_ColRow(ASet: LongBool; AObj: TCustomDrawGrid; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColRow := AValue
  end else
    Result := AObj.ColRow;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_DisabledFontColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledFontColor := AValue
  end else
    Result := AObj.DisabledFontColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Editor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 18616}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Editor := AValue
  end else
    Result := AObj.Editor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_EditorBorderStyle(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 18617}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditorBorderStyle := AValue
  end else
    Result := AObj.EditorBorderStyle;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_EditorMode(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditorMode := AValue
  end else
    Result := AObj.EditorMode;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_ExtendedColSizing(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtendedColSizing := AValue
  end else
    Result := AObj.ExtendedColSizing;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_AltColorStartNormal(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AltColorStartNormal := AValue
  end else
    Result := AObj.AltColorStartNormal;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FastEditing(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FastEditing := AValue
  end else
    Result := AObj.FastEditing;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FixedGridLineColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedGridLineColor := AValue
  end else
    Result := AObj.FixedGridLineColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FocusColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18623}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusColor := AValue
  end else
    Result := AObj.FocusColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FocusRectVisible(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18624}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusRectVisible := AValue
  end else
    Result := AObj.FocusRectVisible;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_GridHeight(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18625}
  handleExceptionBegin
  Result := AObj.GridHeight;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_GridWidth(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18626}
  handleExceptionBegin
  Result := AObj.GridWidth;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_IsCellSelected(AObj: TCustomDrawGrid; aCol: Integer; aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 18627}
  handleExceptionBegin
  Result := AObj.IsCellSelected[aCol, aRow];
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_LeftCol(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18628}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftCol := AValue
  end else
    Result := AObj.LeftCol;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Row(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18629}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Row := AValue
  end else
    Result := AObj.Row;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_RowHeights(ASet: LongBool; AObj: TCustomDrawGrid; aRow: Integer; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18630}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowHeights[aRow] := AValue
  end else
    Result := AObj.RowHeights[aRow];
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_SaveOptions(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TSaveOptions): TSaveOptions; extdecl;
begin
  {$define handleExceptionID := 18631}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SaveOptions := AValue
  end else
    Result := AObj.SaveOptions;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_SelectedColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18632}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedColor := AValue
  end else
    Result := AObj.SelectedColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_SelectedColumn(AObj: TCustomDrawGrid): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 18633}
  handleExceptionBegin
  Result := AObj.SelectedColumn;
  handleExceptionEnd
end;

// property
procedure TCustomDrawGrid_Selection(ASet: LongBool; AObj: TCustomDrawGrid; var AValue: TGridRect; var Result: TGridRect); extdecl;
begin
  {$define handleExceptionID := 18634}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selection := AValue
  end else
    Result := AObj.Selection;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_StrictSort(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18635}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StrictSort := AValue
  end else
    Result := AObj.StrictSort;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_TopRow(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18636}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopRow := AValue
  end else
    Result := AObj.TopRow;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_UseXORFeatures(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18637}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseXORFeatures := AValue
  end else
    Result := AObj.UseXORFeatures;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_AutoAdvance(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TAutoAdvance): TAutoAdvance; extdecl;
begin
  {$define handleExceptionID := 18638}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoAdvance := AValue
  end else
    Result := AObj.AutoAdvance;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_AutoFillColumns(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18639}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoFillColumns := AValue
  end else
    Result := AObj.AutoFillColumns;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_ColCount(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18640}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColCount := AValue
  end else
    Result := AObj.ColCount;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Columns(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TGridColumns): TGridColumns; extdecl;
begin
  {$define handleExceptionID := 18641}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_DefaultColWidth(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18642}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultColWidth := AValue
  end else
    Result := AObj.DefaultColWidth;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_DefaultDrawing(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18643}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultDrawing := AValue
  end else
    Result := AObj.DefaultDrawing;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_DefaultRowHeight(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18644}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultRowHeight := AValue
  end else
    Result := AObj.DefaultRowHeight;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FadeUnfocusedSelection(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18645}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FadeUnfocusedSelection := AValue
  end else
    Result := AObj.FadeUnfocusedSelection;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FixedColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18646}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedColor := AValue
  end else
    Result := AObj.FixedColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FixedCols(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18647}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedCols := AValue
  end else
    Result := AObj.FixedCols;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FixedHotColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18648}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedHotColor := AValue
  end else
    Result := AObj.FixedHotColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_FixedRows(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18649}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedRows := AValue
  end else
    Result := AObj.FixedRows;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Flat(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18650}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_GridLineColor(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 18651}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GridLineColor := AValue
  end else
    Result := AObj.GridLineColor;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_GridLineStyle(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TPenStyle): TPenStyle; extdecl;
begin
  {$define handleExceptionID := 18652}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GridLineStyle := AValue
  end else
    Result := AObj.GridLineStyle;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_GridLineWidth(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18653}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GridLineWidth := AValue
  end else
    Result := AObj.GridLineWidth;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Options(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TGridOptions): TGridOptions; extdecl;
begin
  {$define handleExceptionID := 18654}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_Options2(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TGridOptions2): TGridOptions2; extdecl;
begin
  {$define handleExceptionID := 18655}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options2 := AValue
  end else
    Result := AObj.Options2;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_ParentShowHint(ASet: LongBool; AObj: TCustomDrawGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18656}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_RowCount(ASet: LongBool; AObj: TCustomDrawGrid; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18657}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowCount := AValue
  end else
    Result := AObj.RowCount;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_ScrollBars(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 18658}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_TabAdvance(ASet: LongBool; AObj: TCustomDrawGrid; AValue: TAutoAdvance): TAutoAdvance; extdecl;
begin
  {$define handleExceptionID := 18659}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabAdvance := AValue
  end else
    Result := AObj.TabAdvance;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_VisibleColCount(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18660}
  handleExceptionBegin
  Result := AObj.VisibleColCount;
  handleExceptionEnd
end;

// property
function TCustomDrawGrid_VisibleRowCount(AObj: TCustomDrawGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18661}
  handleExceptionBegin
  Result := AObj.VisibleRowCount;
  handleExceptionEnd
end;

// event
procedure TCustomDrawGrid_OnAfterSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnAfterSelection}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnBeforeSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnBeforeSelection}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnColRowDeleted(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowDeleted}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnColRowExchanged(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowExchanged}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnColRowInserted(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGridOperationEvent}
  {$DEFINE EventName := OnColRowInserted}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnColRowMoved(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTgridOperationEvent}
  {$DEFINE EventName := OnColRowMoved}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnCompareCells(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCompareCells}
  {$DEFINE EventName := OnCompareCells}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnContextPopup(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnDblClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnDragDrop(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnDragOver(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnDrawCell(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnDrawCell}
  {$DEFINE EventName := OnDrawCell}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnButtonClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnEndDock(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnEndDrag(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnGetEditMask(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetEditEvent}
  {$DEFINE EventName := OnGetEditMask}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnGetEditText(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetEditEvent}
  {$DEFINE EventName := OnGetEditText}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnHeaderClick(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHdrEvent}
  {$DEFINE EventName := OnHeaderClick}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnHeaderSized(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHdrEvent}
  {$DEFINE EventName := OnHeaderSized}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnHeaderSizing(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHeaderSizingEvent}
  {$DEFINE EventName := OnHeaderSizing}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseDown(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseEnter(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseLeave(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseMove(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseUp(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseWheel(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseWheelDown(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnMouseWheelUp(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnPickListSelect(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPickListSelect}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnPrepareCanvas(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnPrepareCanvasEvent}
  {$DEFINE EventName := OnPrepareCanvas}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnSelectEditor(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSelectEditorEvent}
  {$DEFINE EventName := OnSelectEditor}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnSelection(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectEvent}
  {$DEFINE EventName := OnSelection}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnSelectCell(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnSelectCellEvent}
  {$DEFINE EventName := OnSelectCell}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnSetEditText(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSetEditEvent}
  {$DEFINE EventName := OnSetEditText}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnStartDock(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnStartDrag(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnTopleftChanged(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTopleftChanged}
  LCLEventMethodCode
end;

// event
procedure TCustomDrawGrid_OnValidateEntry(AObj: TCustomDrawGrid; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTValidateEntryEvent}
  {$DEFINE EventName := OnValidateEntry}
  LCLEventMethodCode
end;

function TCustomDrawGrid_TClass(): TClass; extdecl;
begin
  Result := TCustomDrawGrid;
end;

exports
  TCustomDrawGrid_Create,
  TCustomDrawGrid_DeleteColRow,
  TCustomDrawGrid_DeleteCol,
  TCustomDrawGrid_DeleteRow,
  TCustomDrawGrid_ExchangeColRow,
  TCustomDrawGrid_InsertColRow,
  TCustomDrawGrid_MoveColRow,
  TCustomDrawGrid_SortColRowWithBoolInt,
  TCustomDrawGrid_SortColRowWithBoolIntX3,
  TCustomDrawGrid_DefaultDrawCell,
  TCustomDrawGrid_AllowOutboundEvents,
  TCustomDrawGrid_BorderColor,
  TCustomDrawGrid_Col,
  TCustomDrawGrid_ColWidths,
  TCustomDrawGrid_ColRow,
  TCustomDrawGrid_DisabledFontColor,
  TCustomDrawGrid_Editor,
  TCustomDrawGrid_EditorBorderStyle,
  TCustomDrawGrid_EditorMode,
  TCustomDrawGrid_ExtendedColSizing,
  TCustomDrawGrid_AltColorStartNormal,
  TCustomDrawGrid_FastEditing,
  TCustomDrawGrid_FixedGridLineColor,
  TCustomDrawGrid_FocusColor,
  TCustomDrawGrid_FocusRectVisible,
  TCustomDrawGrid_GridHeight,
  TCustomDrawGrid_GridWidth,
  TCustomDrawGrid_IsCellSelected,
  TCustomDrawGrid_LeftCol,
  TCustomDrawGrid_Row,
  TCustomDrawGrid_RowHeights,
  TCustomDrawGrid_SaveOptions,
  TCustomDrawGrid_SelectedColor,
  TCustomDrawGrid_SelectedColumn,
  TCustomDrawGrid_Selection,
  TCustomDrawGrid_StrictSort,
  TCustomDrawGrid_TopRow,
  TCustomDrawGrid_UseXORFeatures,
  TCustomDrawGrid_AutoAdvance,
  TCustomDrawGrid_AutoFillColumns,
  TCustomDrawGrid_ColCount,
  TCustomDrawGrid_Columns,
  TCustomDrawGrid_DefaultColWidth,
  TCustomDrawGrid_DefaultDrawing,
  TCustomDrawGrid_DefaultRowHeight,
  TCustomDrawGrid_FadeUnfocusedSelection,
  TCustomDrawGrid_FixedColor,
  TCustomDrawGrid_FixedCols,
  TCustomDrawGrid_FixedHotColor,
  TCustomDrawGrid_FixedRows,
  TCustomDrawGrid_Flat,
  TCustomDrawGrid_GridLineColor,
  TCustomDrawGrid_GridLineStyle,
  TCustomDrawGrid_GridLineWidth,
  TCustomDrawGrid_Options,
  TCustomDrawGrid_Options2,
  TCustomDrawGrid_ParentShowHint,
  TCustomDrawGrid_RowCount,
  TCustomDrawGrid_ScrollBars,
  TCustomDrawGrid_TabAdvance,
  TCustomDrawGrid_VisibleColCount,
  TCustomDrawGrid_VisibleRowCount,
  TCustomDrawGrid_OnAfterSelection,
  TCustomDrawGrid_OnBeforeSelection,
  TCustomDrawGrid_OnColRowDeleted,
  TCustomDrawGrid_OnColRowExchanged,
  TCustomDrawGrid_OnColRowInserted,
  TCustomDrawGrid_OnColRowMoved,
  TCustomDrawGrid_OnCompareCells,
  TCustomDrawGrid_OnContextPopup,
  TCustomDrawGrid_OnDblClick,
  TCustomDrawGrid_OnDragDrop,
  TCustomDrawGrid_OnDragOver,
  TCustomDrawGrid_OnDrawCell,
  TCustomDrawGrid_OnButtonClick,
  TCustomDrawGrid_OnEndDock,
  TCustomDrawGrid_OnEndDrag,
  TCustomDrawGrid_OnGetEditMask,
  TCustomDrawGrid_OnGetEditText,
  TCustomDrawGrid_OnHeaderClick,
  TCustomDrawGrid_OnHeaderSized,
  TCustomDrawGrid_OnHeaderSizing,
  TCustomDrawGrid_OnMouseDown,
  TCustomDrawGrid_OnMouseEnter,
  TCustomDrawGrid_OnMouseLeave,
  TCustomDrawGrid_OnMouseMove,
  TCustomDrawGrid_OnMouseUp,
  TCustomDrawGrid_OnMouseWheel,
  TCustomDrawGrid_OnMouseWheelDown,
  TCustomDrawGrid_OnMouseWheelUp,
  TCustomDrawGrid_OnPickListSelect,
  TCustomDrawGrid_OnPrepareCanvas,
  TCustomDrawGrid_OnSelectEditor,
  TCustomDrawGrid_OnSelection,
  TCustomDrawGrid_OnSelectCell,
  TCustomDrawGrid_OnSetEditText,
  TCustomDrawGrid_OnStartDock,
  TCustomDrawGrid_OnStartDrag,
  TCustomDrawGrid_OnTopleftChanged,
  TCustomDrawGrid_OnValidateEntry,
  TCustomDrawGrid_TClass;