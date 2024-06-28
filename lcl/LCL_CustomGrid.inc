
//constructor
function CustomGrid_Create(AOwner: TComponent): TCustomGrid; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomGrid.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomGrid_CursorState(AObj: TCustomGrid): TGridCursorState; extdecl;
begin
  {$define handleExceptionFuncName :='CursorState'}
  handleExceptionBegin
  Result := AObj.CursorState;
  handleExceptionEnd
end;

//property
procedure CustomGrid_SelectedRange(AObj: TCustomGrid; AIndex: Integer; var Result: TGridRect); extdecl;
begin
  {$define handleExceptionFuncName :='SelectedRange'}
  handleExceptionBegin
  Result := AObj.SelectedRange[AIndex];
  handleExceptionEnd
end;

//property
function CustomGrid_SelectedRangeCount(AObj: TCustomGrid): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedRangeCount'}
  handleExceptionBegin
  Result := AObj.SelectedRangeCount;
  handleExceptionEnd
end;

//property
function CustomGrid_SortOrder(AIsSet: LongBool; AObj: TCustomGrid; AValue: TSortOrder): TSortOrder; extdecl;
begin
  {$define handleExceptionFuncName :='SortOrder'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortOrder := AValue;
  end else
    Result := AObj.SortOrder;
  handleExceptionEnd
end;

//property
function CustomGrid_SortColumn(AObj: TCustomGrid): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SortColumn'}
  handleExceptionBegin
  Result := AObj.SortColumn;
  handleExceptionEnd
end;

//function
procedure CustomGrid_CellRect(AObj: TCustomGrid; ACol, ARow: Integer; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='CellRect'}
  handleExceptionBegin
  Result := AObj.CellRect(ACol, ARow);
  handleExceptionEnd
end;

//function
function CustomGrid_CellToGridZone(AObj: TCustomGrid; aCol, aRow: Integer): TGridZone; extdecl;
begin
  {$define handleExceptionFuncName :='CellToGridZone'}
  handleExceptionBegin
  Result := AObj.CellToGridZone(aCol, aRow);
  handleExceptionEnd
end;

//function
function CustomGrid_ClearCols(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearCols'}
  handleExceptionBegin
  Result := AObj.ClearCols();
  handleExceptionEnd
end;

//function
function CustomGrid_ClearRows(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearRows'}
  handleExceptionBegin
  Result := AObj.ClearRows();
  handleExceptionEnd
end;

//function
function CustomGrid_EditorByStyle(AObj: TCustomGrid; Style: TColumnButtonStyle): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='EditorByStyle'}
  handleExceptionBegin
  Result := AObj.EditorByStyle(Style);
  handleExceptionEnd
end;

//function
function CustomGrid_HasMultiSelection(AObj: TCustomGrid): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasMultiSelection'}
  handleExceptionBegin
  Result := AObj.HasMultiSelection();
  handleExceptionEnd
end;

//function
function CustomGrid_IsCellVisible(AObj: TCustomGrid; aCol, aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCellVisible'}
  handleExceptionBegin
  Result := AObj.IsCellVisible(aCol, aRow);
  handleExceptionEnd
end;

//function
function CustomGrid_IsFixedCellVisible(AObj: TCustomGrid; aCol, aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFixedCellVisible'}
  handleExceptionBegin
  Result := AObj.IsFixedCellVisible(aCol, aRow);
  handleExceptionEnd
end;

//function
procedure CustomGrid_MouseCoord(AObj: TCustomGrid; X, Y: Integer; var Result: TGridCoord); extdecl;
begin
  {$define handleExceptionFuncName :='MouseCoord'}
  handleExceptionBegin
  Result := AObj.MouseCoord(X, Y);
  handleExceptionEnd
end;

//function
procedure CustomGrid_MouseToCell(AObj: TCustomGrid; var Mouse: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='MouseToCell'}
  handleExceptionBegin
  Result := AObj.MouseToCell(Mouse);
  handleExceptionEnd
end;

//function
procedure CustomGrid_MouseToLogcell(AObj: TCustomGrid; var Mouse: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='MouseToLogcell'}
  handleExceptionBegin
  Result := AObj.MouseToLogcell(Mouse);
  handleExceptionEnd
end;

//function
function CustomGrid_MouseToGridZone(AObj: TCustomGrid; X, Y: Integer): TGridZone; extdecl;
begin
  {$define handleExceptionFuncName :='MouseToGridZone'}
  handleExceptionBegin
  Result := AObj.MouseToGridZone(X, Y);
  handleExceptionEnd
end;

//function
function CustomGrid_Class(): TClass; extdecl;
begin
  Result := TCustomGrid;
end;

//procedure
procedure CustomGrid_AdjustInnerCellRect(AObj: TCustomGrid; var ARect: TRect); extdecl;
var
  RetARect: TRect;
begin
  {$define handleExceptionFuncName :='AdjustInnerCellRect'}
  handleExceptionBegin
  RetARect := ARect;
  AObj.AdjustInnerCellRect(RetARect);
  ARect := RetARect;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_AutoAdjustColumns(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='AutoAdjustColumns'}
  handleExceptionBegin
  AObj.AutoAdjustColumns();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_BeginUpdate(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_CheckPosition(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='CheckPosition'}
  handleExceptionBegin
  AObj.CheckPosition();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_Clear(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_ClearSelections(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelections'}
  handleExceptionBegin
  AObj.ClearSelections();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EditorKeyDown(AObj: TCustomGrid; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='EditorKeyDown'}
  handleExceptionBegin
  RetKey := Key;
  AObj.EditorKeyDown(Sender, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EditorKeyPress(AObj: TCustomGrid; Sender: TObject; var Key: Char); extdecl;
var
  RetKey: Char;
begin
  {$define handleExceptionFuncName :='EditorKeyPress'}
  handleExceptionBegin
  RetKey := Key;
  AObj.EditorKeyPress(Sender, RetKey);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EditorUTF8KeyPress(AObj: TCustomGrid; Sender: TObject; var UTF8Key: TUTF8Char); extdecl;
var
  RetUTF8Key: TUTF8Char;
begin
  {$define handleExceptionFuncName :='EditorUTF8KeyPress'}
  handleExceptionBegin
  RetUTF8Key := UTF8Key;
  AObj.EditorUTF8KeyPress(Sender, RetUTF8Key);
  UTF8Key := RetUTF8Key;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EditorKeyUp(AObj: TCustomGrid; Sender: TObject; var key: Word; shift: TShiftState); extdecl;
var
  Retkey: Word;
begin
  {$define handleExceptionFuncName :='EditorKeyUp'}
  handleExceptionBegin
  Retkey := key;
  AObj.EditorKeyUp(Sender, Retkey, shift);
  key := Retkey;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EditorTextChanged(AObj: TCustomGrid; const aCol, aRow: Integer; const aText: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='EditorTextChanged'}
  handleExceptionBegin
  AObj.EditorTextChanged(aCol, aRow, aText);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_EndUpdate(AObj: TCustomGrid; aRefresh: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate(aRefresh);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_HideSortArrow(AObj: TCustomGrid); extdecl;
begin
  {$define handleExceptionFuncName :='HideSortArrow'}
  handleExceptionBegin
  AObj.HideSortArrow();
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_InvalidateCell(AObj: TCustomGrid; aCol, aRow: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateCell'}
  handleExceptionBegin
  AObj.InvalidateCell(aCol, aRow);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_InvalidateCol(AObj: TCustomGrid; ACol: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateCol'}
  handleExceptionBegin
  AObj.InvalidateCol(ACol);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_InvalidateRange(AObj: TCustomGrid; var aRange: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateRange'}
  handleExceptionBegin
  AObj.InvalidateRange(aRange);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_InvalidateRow(AObj: TCustomGrid; ARow: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateRow'}
  handleExceptionBegin
  AObj.InvalidateRow(ARow);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_LoadFromFile(AObj: TCustomGrid; FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromFile'}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_LoadFromStream(AObj: TCustomGrid; AStream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(AStream);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_MouseToCell1(AObj: TCustomGrid; X, Y: Integer; out OutCol, OutRow: LongInt); extdecl;
var
  RetOutCol: LongInt;
  RetOutRow: LongInt;
begin
  {$define handleExceptionFuncName :='MouseToCell1'}
  handleExceptionBegin
  RetOutCol := OutCol;
  RetOutRow := OutRow;
  AObj.MouseToCell(X, Y, RetOutCol, RetOutRow);
  OutCol := RetOutCol;
  OutRow := RetOutRow;
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_SaveToFile(AObj: TCustomGrid; FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToFile'}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure CustomGrid_SaveToStream(AObj: TCustomGrid; AStream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(AStream);
  handleExceptionEnd
end;


exports
  CustomGrid_Create,
  CustomGrid_CursorState,
  CustomGrid_SelectedRange,
  CustomGrid_SelectedRangeCount,
  CustomGrid_SortOrder,
  CustomGrid_SortColumn,
  CustomGrid_CellRect,
  CustomGrid_CellToGridZone,
  CustomGrid_ClearCols,
  CustomGrid_ClearRows,
  CustomGrid_EditorByStyle,
  CustomGrid_HasMultiSelection,
  CustomGrid_IsCellVisible,
  CustomGrid_IsFixedCellVisible,
  CustomGrid_MouseCoord,
  CustomGrid_MouseToCell,
  CustomGrid_MouseToLogcell,
  CustomGrid_MouseToGridZone,
  CustomGrid_Class,
  CustomGrid_AdjustInnerCellRect,
  CustomGrid_AutoAdjustColumns,
  CustomGrid_BeginUpdate,
  CustomGrid_CheckPosition,
  CustomGrid_Clear,
  CustomGrid_ClearSelections,
  CustomGrid_EditorKeyDown,
  CustomGrid_EditorKeyPress,
  CustomGrid_EditorUTF8KeyPress,
  CustomGrid_EditorKeyUp,
  CustomGrid_EditorTextChanged,
  CustomGrid_EndUpdate,
  CustomGrid_HideSortArrow,
  CustomGrid_InvalidateCell,
  CustomGrid_InvalidateCol,
  CustomGrid_InvalidateRange,
  CustomGrid_InvalidateRow,
  CustomGrid_LoadFromFile,
  CustomGrid_LoadFromStream,
  CustomGrid_MouseToCell1,
  CustomGrid_SaveToFile,
  CustomGrid_SaveToStream;