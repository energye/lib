
//constructor
function CustomStringGrid_Create(AOwner: TComponent): TCustomStringGrid; extdecl;
begin
  handleExceptionBegin
  Result := TCustomStringGrid.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomStringGrid_Cells(AIsSet: LongBool; AObj: TCustomStringGrid; ACol, ARow: Integer; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cells[ACol, ARow] := AValue;
  end else
    Result := ToPChar(AObj.Cells[ACol, ARow]);
  handleExceptionEnd
end;

//property
function CustomStringGrid_Cols(AIsSet: LongBool; AObj: TCustomStringGrid; index: Integer; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cols[index] := AValue;
  end else
    Result := AObj.Cols[index];
  handleExceptionEnd
end;

//property
procedure CustomStringGrid_DefaultTextStyle(AIsSet: LongBool; AObj: TCustomStringGrid; var AValue: TTextStyle; var Result: TTextStyle); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultTextStyle := AValue;
  end else
    Result := AObj.DefaultTextStyle;
  handleExceptionEnd
end;

//property
function CustomStringGrid_ExtendedSelect(AIsSet: LongBool; AObj: TCustomStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtendedSelect := AValue;
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

//property
function CustomStringGrid_Objects(AIsSet: LongBool; AObj: TCustomStringGrid; ACol, ARow: Integer; AValue: TObject): TObject; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Objects[ACol, ARow] := AValue;
  end else
    Result := AObj.Objects[ACol, ARow];
  handleExceptionEnd
end;

//property
function CustomStringGrid_Rows(AIsSet: LongBool; AObj: TCustomStringGrid; index: Integer; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Rows[index] := AValue;
  end else
    Result := AObj.Rows[index];
  handleExceptionEnd
end;

//property
function CustomStringGrid_ValidateOnSetSelection(AIsSet: LongBool; AObj: TCustomStringGrid; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValidateOnSetSelection := AValue;
  end else
    Result := AObj.ValidateOnSetSelection;
  handleExceptionEnd
end;

//function
function CustomStringGrid_Class(): TClass; extdecl;
begin
  Result := TCustomStringGrid;
end;

//procedure
procedure CustomStringGrid_AutoSizeColumn(AObj: TCustomStringGrid; aCol: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoSizeColumn(aCol);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_AutoSizeColumns(AObj: TCustomStringGrid); extdecl;
begin
  handleExceptionBegin
  AObj.AutoSizeColumns();
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_Clean(AObj: TCustomStringGrid); extdecl;
begin
  handleExceptionBegin
  AObj.Clean();
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_Clean1(AObj: TCustomStringGrid; CleanOptions: TGridZoneSet); extdecl;
begin
  handleExceptionBegin
  AObj.Clean(CleanOptions);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_Clean2(AObj: TCustomStringGrid; var aRect: TRect; CleanOptions: TGridZoneSet); extdecl;
begin
  handleExceptionBegin
  AObj.Clean(aRect, CleanOptions);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_Clean3(AObj: TCustomStringGrid; StartCol, StartRow, EndCol, EndRow: integer; CleanOptions: TGridZoneSet); extdecl;
begin
  handleExceptionBegin
  AObj.Clean(StartCol, StartRow, EndCol, EndRow, CleanOptions);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_CopyToClipboard(AObj: TCustomStringGrid; AUseSelection: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToClipboard(AUseSelection);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_LoadFromCSVStream(AObj: TCustomStringGrid; AStream: TStream; ADelimiter: Char; UseTitles: LongBool; FromLine: Integer; SkipEmptyLines: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromCSVStream(AStream, ADelimiter, UseTitles, FromLine, SkipEmptyLines);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_LoadFromCSVFile(AObj: TCustomStringGrid; AFilename: PChar; ADelimiter: Char; UseTitles: LongBool; FromLine: Integer; SkipEmptyLines: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromCSVFile(AFilename, ADelimiter, UseTitles, FromLine, SkipEmptyLines);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_SaveToCSVStream(AObj: TCustomStringGrid; AStream: TStream; ADelimiter: Char; WriteTitles: LongBool; VisibleColumnsOnly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToCSVStream(AStream, ADelimiter, WriteTitles, VisibleColumnsOnly);
  handleExceptionEnd
end;

//procedure
procedure CustomStringGrid_SaveToCSVFile(AObj: TCustomStringGrid; AFileName: PChar; ADelimiter: Char; WriteTitles: LongBool; VisibleColumnsOnly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToCSVFile(AFileName, ADelimiter, WriteTitles, VisibleColumnsOnly);
  handleExceptionEnd
end;


exports
  CustomStringGrid_Create,
  CustomStringGrid_Cells,
  CustomStringGrid_Cols,
  CustomStringGrid_DefaultTextStyle,
  CustomStringGrid_ExtendedSelect,
  CustomStringGrid_Objects,
  CustomStringGrid_Rows,
  CustomStringGrid_ValidateOnSetSelection,
  CustomStringGrid_Class,
  CustomStringGrid_AutoSizeColumn,
  CustomStringGrid_AutoSizeColumns,
  CustomStringGrid_Clean,
  CustomStringGrid_Clean1,
  CustomStringGrid_Clean2,
  CustomStringGrid_Clean3,
  CustomStringGrid_CopyToClipboard,
  CustomStringGrid_LoadFromCSVStream,
  CustomStringGrid_LoadFromCSVFile,
  CustomStringGrid_SaveToCSVStream,
  CustomStringGrid_SaveToCSVFile;