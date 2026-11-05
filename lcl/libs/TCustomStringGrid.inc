// constructor
function TCustomStringGrid_Create(AOwner: TComponent): TCustomStringGrid; extdecl;
begin
  {$define handleExceptionID := 18700}
  handleExceptionBegin
  Result := TCustomStringGrid.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_AutoSizeColumn(AObj: TCustomStringGrid; aCol: Integer); extdecl;
begin
  {$define handleExceptionID := 18701}
  handleExceptionBegin
  AObj.AutoSizeColumn(aCol);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_AutoSizeColumns(AObj: TCustomStringGrid); extdecl;
begin
  {$define handleExceptionID := 18702}
  handleExceptionBegin
  AObj.AutoSizeColumns();
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_Clean(AObj: TCustomStringGrid); extdecl;
begin
  {$define handleExceptionID := 18703}
  handleExceptionBegin
  AObj.Clean();
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_CleanWithGridZoneSet(AObj: TCustomStringGrid; CleanOptions: TGridZoneSet); extdecl;
begin
  {$define handleExceptionID := 18704}
  handleExceptionBegin
  AObj.Clean(CleanOptions);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_CleanWithRectGridZoneSet(AObj: TCustomStringGrid; var aRect: TRect; CleanOptions: TGridZoneSet); extdecl;
begin
  {$define handleExceptionID := 18705}
  handleExceptionBegin
  AObj.Clean(aRect, CleanOptions);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_CleanWithIntX4GZSet(AObj: TCustomStringGrid; StartCol: integer; StartRow: integer; EndCol: integer; EndRow: integer; CleanOptions: TGridZoneSet); extdecl;
begin
  {$define handleExceptionID := 18706}
  handleExceptionBegin
  AObj.Clean(StartCol, StartRow, EndCol, EndRow, CleanOptions);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_CopyToClipboard(AObj: TCustomStringGrid; AUseSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 18707}
  handleExceptionBegin
  AObj.CopyToClipboard(AUseSelection);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_LoadFromCSVStream(AObj: TCustomStringGrid; AStream: TStream; ADelimiter: Char; UseTitles: LongBool; FromLine: Integer; SkipEmptyLines: LongBool); extdecl;
begin
  {$define handleExceptionID := 18708}
  handleExceptionBegin
  AObj.LoadFromCSVStream(AStream, ADelimiter, UseTitles, FromLine, SkipEmptyLines);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_LoadFromCSVFile(AObj: TCustomStringGrid; AFilename: PChar; ADelimiter: Char; UseTitles: LongBool; FromLine: Integer; SkipEmptyLines: LongBool); extdecl;
begin
  {$define handleExceptionID := 18709}
  handleExceptionBegin
  AObj.LoadFromCSVFile(AFilename, ADelimiter, UseTitles, FromLine, SkipEmptyLines);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_SaveToCSVStream(AObj: TCustomStringGrid; AStream: TStream; ADelimiter: Char; WriteTitles: LongBool; VisibleColumnsOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 18710}
  handleExceptionBegin
  AObj.SaveToCSVStream(AStream, ADelimiter, WriteTitles, VisibleColumnsOnly);
  handleExceptionEnd
end;

// procedure
procedure TCustomStringGrid_SaveToCSVFile(AObj: TCustomStringGrid; AFileName: PChar; ADelimiter: Char; WriteTitles: LongBool; VisibleColumnsOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 18711}
  handleExceptionBegin
  AObj.SaveToCSVFile(AFileName, ADelimiter, WriteTitles, VisibleColumnsOnly);
  handleExceptionEnd
end;

// property
procedure TCustomStringGrid_Cells(ASet: LongBool; AObj: TCustomStringGrid; ACol: Integer; ARow: Integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cells[ACol, ARow] := AValue
  end else
    StringBufferCreate(AObj.Cells[ACol, ARow], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomStringGrid_Cols(ASet: LongBool; AObj: TCustomStringGrid; index: Integer; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 18713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cols[index] := AValue
  end else
    Result := AObj.Cols[index];
  handleExceptionEnd
end;

// property
procedure TCustomStringGrid_DefaultTextStyle(ASet: LongBool; AObj: TCustomStringGrid; var AValue: TTextStylePtr; var Result: TTextStylePtr); extdecl;
begin
  {$define handleExceptionID := 18714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultTextStyle := TTextStyleToPas(AValue)
  end else
    Result := TTextStyleToGo(AObj.DefaultTextStyle);
  handleExceptionEnd
end;

// property
function TCustomStringGrid_ExtendedSelect(ASet: LongBool; AObj: TCustomStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtendedSelect := AValue
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

// property
function TCustomStringGrid_Objects(ASet: LongBool; AObj: TCustomStringGrid; ACol: Integer; ARow: Integer; AValue: TObject): TObject; extdecl;
begin
  {$define handleExceptionID := 18716}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Objects[ACol, ARow] := AValue
  end else
    Result := AObj.Objects[ACol, ARow];
  handleExceptionEnd
end;

// property
function TCustomStringGrid_Rows(ASet: LongBool; AObj: TCustomStringGrid; index: Integer; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 18717}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Rows[index] := AValue
  end else
    Result := AObj.Rows[index];
  handleExceptionEnd
end;

// property
function TCustomStringGrid_ValidateOnSetSelection(ASet: LongBool; AObj: TCustomStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18718}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValidateOnSetSelection := AValue
  end else
    Result := AObj.ValidateOnSetSelection;
  handleExceptionEnd
end;

function TCustomStringGrid_TClass(): TClass; extdecl;
begin
  Result := TCustomStringGrid;
end;

exports
  TCustomStringGrid_Create,
  TCustomStringGrid_AutoSizeColumn,
  TCustomStringGrid_AutoSizeColumns,
  TCustomStringGrid_Clean,
  TCustomStringGrid_CleanWithGridZoneSet,
  TCustomStringGrid_CleanWithRectGridZoneSet,
  TCustomStringGrid_CleanWithIntX4GZSet,
  TCustomStringGrid_CopyToClipboard,
  TCustomStringGrid_LoadFromCSVStream,
  TCustomStringGrid_LoadFromCSVFile,
  TCustomStringGrid_SaveToCSVStream,
  TCustomStringGrid_SaveToCSVFile,
  TCustomStringGrid_Cells,
  TCustomStringGrid_Cols,
  TCustomStringGrid_DefaultTextStyle,
  TCustomStringGrid_ExtendedSelect,
  TCustomStringGrid_Objects,
  TCustomStringGrid_Rows,
  TCustomStringGrid_ValidateOnSetSelection,
  TCustomStringGrid_TClass;