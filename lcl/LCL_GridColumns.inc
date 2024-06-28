
//constructor
function GridColumns_Create(AGrid: TCustomGrid; aItemClass: TCollectionItemClass): TGridColumns; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TGridColumns.Create(AGrid, aItemClass);
  handleExceptionEnd
end;

//property
function GridColumns_Grid(AObj: TGridColumns): TCustomGrid; extdecl;
begin
  {$define handleExceptionFuncName :='Grid'}
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

//property
function GridColumns_ItemsForGridColumn(AIsSet: LongBool; AObj: TGridColumns; Index: Integer; AValue: TGridColumn): TGridColumn; extdecl;
begin
  {$define handleExceptionFuncName :='ItemsForGridColumn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//property
function GridColumns_VisibleCount(AObj: TGridColumns): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleCount'}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

//property
function GridColumns_Enabled(AObj: TGridColumns): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enabled'}
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

//function
function GridColumns_AddForGridColumn(AObj: TGridColumns): TGridColumn; extdecl;
begin
  {$define handleExceptionFuncName :='AddForGridColumn'}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function GridColumns_ColumnByTitle(AObj: TGridColumns; const aTitle: PChar): TGridColumn; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnByTitle'}
  handleExceptionBegin
  Result := AObj.ColumnByTitle(aTitle);
  handleExceptionEnd
end;

//function
function GridColumns_RealIndex(AObj: TGridColumns; Index: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='RealIndex'}
  handleExceptionBegin
  Result := AObj.RealIndex(Index);
  handleExceptionEnd
end;

//function
function GridColumns_IndexOf(AObj: TGridColumns; Column: TGridColumn): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOf'}
  handleExceptionBegin
  Result := AObj.IndexOf(Column);
  handleExceptionEnd
end;

//function
function GridColumns_IsDefault(AObj: TGridColumns): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDefault'}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

//function
function GridColumns_HasIndex(AObj: TGridColumns; Index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasIndex'}
  handleExceptionBegin
  Result := AObj.HasIndex(Index);
  handleExceptionEnd
end;

//function
function GridColumns_VisibleIndex(AObj: TGridColumns; Index: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleIndex'}
  handleExceptionBegin
  Result := AObj.VisibleIndex(Index);
  handleExceptionEnd
end;

//function
function GridColumns_Class(): TClass; extdecl;
begin
  Result := TGridColumns;
end;


exports
  GridColumns_Create,
  GridColumns_Grid,
  GridColumns_ItemsForGridColumn,
  GridColumns_VisibleCount,
  GridColumns_Enabled,
  GridColumns_AddForGridColumn,
  GridColumns_ColumnByTitle,
  GridColumns_RealIndex,
  GridColumns_IndexOf,
  GridColumns_IsDefault,
  GridColumns_HasIndex,
  GridColumns_VisibleIndex,
  GridColumns_Class;