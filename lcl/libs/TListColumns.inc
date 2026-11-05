// constructor
function TListColumns_Create(AOwner: TCustomListView): TListColumns; extdecl;
begin
  {$define handleExceptionID := 12300}
  handleExceptionBegin
  Result := TListColumns.Create(AOwner);
  handleExceptionEnd
end;

// function
function TListColumns_AddToListColumn(AObj: TListColumns): TListColumn; extdecl;
begin
  {$define handleExceptionID := 12301}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// procedure
procedure TListColumns_Update(AObj: TListColumns; Item: TCollectionItem); extdecl;
begin
  {$define handleExceptionID := 12302}
  handleExceptionBegin
  AObj.Update(Item);
  handleExceptionEnd
end;

// property
function TListColumns_OwnerToCustomListView(AObj: TListColumns): TCustomListView; extdecl;
begin
  {$define handleExceptionID := 12303}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TListColumns_ItemsWithIntToListColumn(ASet: LongBool; AObj: TListColumns; const AIndex: Integer; AValue: TListColumn): TListColumn; extdecl;
begin
  {$define handleExceptionID := 12304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[AIndex] := AValue
  end else
    Result := AObj.Items[AIndex];
  handleExceptionEnd
end;

exports
  TListColumns_Create,
  TListColumns_AddToListColumn,
  TListColumns_Update,
  TListColumns_OwnerToCustomListView,
  TListColumns_ItemsWithIntToListColumn;