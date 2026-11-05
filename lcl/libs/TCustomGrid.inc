// constructor
function TCustomGrid_Create(AOwner: TComponent): TCustomGrid; extdecl;
begin
  {$define handleExceptionID := 18500}
  handleExceptionBegin
  Result := TCustomGrid.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TCustomGrid_CellRect(AObj: TCustomGrid; ACol: Integer; ARow: Integer; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 18501}
  handleExceptionBegin
  Result := AObj.CellRect(ACol, ARow);
  handleExceptionEnd
end;

// function
function TCustomGrid_CellToGridZone(AObj: TCustomGrid; aCol: Integer; aRow: Integer): TGridZone; extdecl;
begin
  {$define handleExceptionID := 18502}
  handleExceptionBegin
  Result := AObj.CellToGridZone(aCol, aRow);
  handleExceptionEnd
end;

// function
function TCustomGrid_ClearCols(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionID := 18503}
  handleExceptionBegin
  Result := AObj.ClearCols();
  handleExceptionEnd
end;

// function
function TCustomGrid_ClearRows(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionID := 18504}
  handleExceptionBegin
  Result := AObj.ClearRows();
  handleExceptionEnd
end;

// function
function TCustomGrid_EditorByStyle(AObj: TCustomGrid; Style: TColumnButtonStyle): TWinControl; extdecl;
begin
  {$define handleExceptionID := 18505}
  handleExceptionBegin
  Result := AObj.EditorByStyle(Style);
  handleExceptionEnd
end;

// function
function TCustomGrid_HasMultiSelection(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionID := 18506}
  handleExceptionBegin
  Result := AObj.HasMultiSelection();
  handleExceptionEnd
end;

// function
function TCustomGrid_IsCellVisible(AObj: TCustomGrid; aCol: Integer; aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 18507}
  handleExceptionBegin
  Result := AObj.IsCellVisible(aCol, aRow);
  handleExceptionEnd
end;

// function
function TCustomGrid_IsFixedCellVisible(AObj: TCustomGrid; aCol: Integer; aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 18508}
  handleExceptionBegin
  Result := AObj.IsFixedCellVisible(aCol, aRow);
  handleExceptionEnd
end;

// function
procedure TCustomGrid_MouseCoord(AObj: TCustomGrid; X: Integer; Y: Integer; var Result: TGridCoord); extdecl;
begin
  {$define handleExceptionID := 18509}
  handleExceptionBegin
  Result := AObj.MouseCoord(X, Y);
  handleExceptionEnd
end;

// function
procedure TCustomGrid_MouseToCellWithPoint(AObj: TCustomGrid; var Mouse: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18510}
  handleExceptionBegin
  Result := AObj.MouseToCell(Mouse);
  handleExceptionEnd
end;

// function
procedure TCustomGrid_MouseToLogcell(AObj: TCustomGrid; var Mouse: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18511}
  handleExceptionBegin
  Result := AObj.MouseToLogcell(Mouse);
  handleExceptionEnd
end;

// function
function TCustomGrid_MouseToGridZone(AObj: TCustomGrid; X: Integer; Y: Integer): TGridZone; extdecl;
begin
  {$define handleExceptionID := 18512}
  handleExceptionBegin
  Result := AObj.MouseToGridZone(X, Y);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_AdjustInnerCellRect(AObj: TCustomGrid; var ARect: TRect); extdecl;
var
  OutARect: TRect;
begin
  {$define handleExceptionID := 18513}
  handleExceptionBegin
  OutARect := ARect;
  AObj.AdjustInnerCellRect(OutARect);
  ARect := OutARect;
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_AutoAdjustColumns(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18514}
  handleExceptionBegin
  AObj.AutoAdjustColumns();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_BeginUpdate(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18515}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_CheckPosition(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18516}
  handleExceptionBegin
  AObj.CheckPosition();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_Clear(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18517}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_ClearSelections(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18518}
  handleExceptionBegin
  AObj.ClearSelections();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EditorKeyDown(AObj: TCustomGrid; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 18519}
  handleExceptionBegin
  OutKey := Key;
  AObj.EditorKeyDown(Sender, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EditorKeyPress(AObj: TCustomGrid; Sender: TObject; var Key: Char); extdecl;
var
  OutKey: Char;
begin
  {$define handleExceptionID := 18520}
  handleExceptionBegin
  OutKey := Key;
  AObj.EditorKeyPress(Sender, OutKey);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EditorUTF8KeyPress(AObj: TCustomGrid; Sender: TObject; var UTF8Key: PChar); extdecl;
var
  OutUTF8Key: TUTF8Char;
begin
  {$define handleExceptionID := 18521}
  handleExceptionBegin
  OutUTF8Key := UTF8Key;
  AObj.EditorUTF8KeyPress(Sender, OutUTF8Key);
  UTF8Key := ToPChar(OutUTF8Key);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EditorKeyUp(AObj: TCustomGrid; Sender: TObject; var key: Word; shift: TShiftState); extdecl;
var
  Outkey: Word;
begin
  {$define handleExceptionID := 18522}
  handleExceptionBegin
  Outkey := key;
  AObj.EditorKeyUp(Sender, Outkey, shift);
  key := Outkey;
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EditorTextChanged(AObj: TCustomGrid; const aCol: Integer; const aRow: Integer; const aText: PChar); extdecl;
begin
  {$define handleExceptionID := 18523}
  handleExceptionBegin
  AObj.EditorTextChanged(aCol, aRow, aText);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_EndUpdate(AObj: TCustomGrid; aRefresh: LongBool); extdecl;
begin
  {$define handleExceptionID := 18524}
  handleExceptionBegin
  AObj.EndUpdate(aRefresh);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_HideSortArrow(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionID := 18525}
  handleExceptionBegin
  AObj.HideSortArrow();
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_InvalidateCell(AObj: TCustomGrid; aCol: Integer; aRow: Integer); extdecl;
begin
  {$define handleExceptionID := 18526}
  handleExceptionBegin
  AObj.InvalidateCell(aCol, aRow);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_InvalidateCol(AObj: TCustomGrid; ACol: Integer); extdecl;
begin
  {$define handleExceptionID := 18527}
  handleExceptionBegin
  AObj.InvalidateCol(ACol);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_InvalidateRange(AObj: TCustomGrid; var aRange: TRect); extdecl;
begin
  {$define handleExceptionID := 18528}
  handleExceptionBegin
  AObj.InvalidateRange(aRange);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_InvalidateRow(AObj: TCustomGrid; ARow: Integer); extdecl;
begin
  {$define handleExceptionID := 18529}
  handleExceptionBegin
  AObj.InvalidateRow(ARow);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_LoadFromFile(AObj: TCustomGrid; FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 18530}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_LoadFromStream(AObj: TCustomGrid; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 18531}
  handleExceptionBegin
  AObj.LoadFromStream(AStream);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_MouseToCellWithIntX4(AObj: TCustomGrid; X: Integer; Y: Integer; var ACol: Integer; var ARow: Integer); extdecl;
var
  OutACol: Longint;
  OutARow: Longint;
begin
  {$define handleExceptionID := 18532}
  handleExceptionBegin
  AObj.MouseToCell(X, Y, OutACol, OutARow);
  ACol := OutACol;
  ARow := OutARow;
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_SaveToFile(AObj: TCustomGrid; FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 18533}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TCustomGrid_SaveToStream(AObj: TCustomGrid; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 18534}
  handleExceptionBegin
  AObj.SaveToStream(AStream);
  handleExceptionEnd
end;

// property
function TCustomGrid_CursorState(AObj: TCustomGrid): TGridCursorState; extdecl;
begin
  {$define handleExceptionID := 18535}
  handleExceptionBegin
  Result := AObj.CursorState;
  handleExceptionEnd
end;

// property
procedure TCustomGrid_SelectedRange(AObj: TCustomGrid; AIndex: Integer; var Result: TGridRect); extdecl;
begin
  {$define handleExceptionID := 18536}
  handleExceptionBegin
  Result := AObj.SelectedRange[AIndex];
  handleExceptionEnd
end;

// property
function TCustomGrid_SelectedRangeCount(AObj: TCustomGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18537}
  handleExceptionBegin
  Result := AObj.SelectedRangeCount;
  handleExceptionEnd
end;

// property
function TCustomGrid_SortOrder(ASet: LongBool; AObj: TCustomGrid; AValue: TSortOrder): TSortOrder; extdecl;
begin
  {$define handleExceptionID := 18538}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortOrder := AValue
  end else
    Result := AObj.SortOrder;
  handleExceptionEnd
end;

// property
function TCustomGrid_SortColumn(AObj: TCustomGrid): Integer; extdecl;
begin
  {$define handleExceptionID := 18539}
  handleExceptionBegin
  Result := AObj.SortColumn;
  handleExceptionEnd
end;

function TCustomGrid_TClass(): TClass; extdecl;
begin
  Result := TCustomGrid;
end;

exports
  TCustomGrid_Create,
  TCustomGrid_CellRect,
  TCustomGrid_CellToGridZone,
  TCustomGrid_ClearCols,
  TCustomGrid_ClearRows,
  TCustomGrid_EditorByStyle,
  TCustomGrid_HasMultiSelection,
  TCustomGrid_IsCellVisible,
  TCustomGrid_IsFixedCellVisible,
  TCustomGrid_MouseCoord,
  TCustomGrid_MouseToCellWithPoint,
  TCustomGrid_MouseToLogcell,
  TCustomGrid_MouseToGridZone,
  TCustomGrid_AdjustInnerCellRect,
  TCustomGrid_AutoAdjustColumns,
  TCustomGrid_BeginUpdate,
  TCustomGrid_CheckPosition,
  TCustomGrid_Clear,
  TCustomGrid_ClearSelections,
  TCustomGrid_EditorKeyDown,
  TCustomGrid_EditorKeyPress,
  TCustomGrid_EditorUTF8KeyPress,
  TCustomGrid_EditorKeyUp,
  TCustomGrid_EditorTextChanged,
  TCustomGrid_EndUpdate,
  TCustomGrid_HideSortArrow,
  TCustomGrid_InvalidateCell,
  TCustomGrid_InvalidateCol,
  TCustomGrid_InvalidateRange,
  TCustomGrid_InvalidateRow,
  TCustomGrid_LoadFromFile,
  TCustomGrid_LoadFromStream,
  TCustomGrid_MouseToCellWithIntX4,
  TCustomGrid_SaveToFile,
  TCustomGrid_SaveToStream,
  TCustomGrid_CursorState,
  TCustomGrid_SelectedRange,
  TCustomGrid_SelectedRangeCount,
  TCustomGrid_SortOrder,
  TCustomGrid_SortColumn,
  TCustomGrid_TClass;