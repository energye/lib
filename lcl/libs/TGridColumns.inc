// constructor
function TGridColumns_Create(AGrid: TCustomGrid; aItemClass: TCollectionItemClass): TGridColumns; extdecl;
begin
  {$define handleExceptionID := 23200}
  handleExceptionBegin
  Result := TGridColumns.Create(AGrid, aItemClass);
  handleExceptionEnd
end;

// function
function TGridColumns_AddToGridColumn(AObj: TGridColumns): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 23201}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TGridColumns_ColumnByTitle(AObj: TGridColumns; const aTitle: PChar): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 23202}
  handleExceptionBegin
  Result := AObj.ColumnByTitle(aTitle);
  handleExceptionEnd
end;

// function
function TGridColumns_RealIndex(AObj: TGridColumns; Index: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23203}
  handleExceptionBegin
  Result := AObj.RealIndex(Index);
  handleExceptionEnd
end;

// function
function TGridColumns_IndexOf(AObj: TGridColumns; Column: TGridColumn): Integer; extdecl;
begin
  {$define handleExceptionID := 23204}
  handleExceptionBegin
  Result := AObj.IndexOf(Column);
  handleExceptionEnd
end;

// function
function TGridColumns_IsDefault(AObj: TGridColumns): LongBool; extdecl;
begin
  {$define handleExceptionID := 23205}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

// function
function TGridColumns_HasIndex(AObj: TGridColumns; Index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 23206}
  handleExceptionBegin
  Result := AObj.HasIndex(Index);
  handleExceptionEnd
end;

// function
function TGridColumns_VisibleIndex(AObj: TGridColumns; Index: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23207}
  handleExceptionBegin
  Result := AObj.VisibleIndex(Index);
  handleExceptionEnd
end;

// procedure
procedure TGridColumns_Clear(AObj: TGridColumns); extdecl;
begin
  {$define handleExceptionID := 23208}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// property
function TGridColumns_Grid(AObj: TGridColumns): TCustomGrid; extdecl;
begin
  {$define handleExceptionID := 23209}
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

// property
function TGridColumns_ItemsWithIntToGridColumn(ASet: LongBool; AObj: TGridColumns; Index: Integer; AValue: TGridColumn): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 23210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TGridColumns_VisibleCount(AObj: TGridColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 23211}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

// property
function TGridColumns_Enabled(AObj: TGridColumns): LongBool; extdecl;
begin
  {$define handleExceptionID := 23212}
  handleExceptionBegin
  Result := AObj.Enabled;
  handleExceptionEnd
end;

exports
  TGridColumns_Create,
  TGridColumns_AddToGridColumn,
  TGridColumns_ColumnByTitle,
  TGridColumns_RealIndex,
  TGridColumns_IndexOf,
  TGridColumns_IsDefault,
  TGridColumns_HasIndex,
  TGridColumns_VisibleIndex,
  TGridColumns_Clear,
  TGridColumns_Grid,
  TGridColumns_ItemsWithIntToGridColumn,
  TGridColumns_VisibleCount,
  TGridColumns_Enabled;