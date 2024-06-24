
//constructor
function ListColumns_Create(AOwner: TCustomListView): TListColumns; extdecl;
begin
  handleExceptionBegin
  Result := TListColumns.Create(AOwner);
  handleExceptionEnd
end;

//property
function ListColumns_OwnerForCustomListView(AObj: TListColumns): TCustomListView; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function ListColumns_ItemsForListColumn(AIsSet: LongBool; AObj: TListColumns; const AIndex: Integer; AValue: TListColumn): TListColumn; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[AIndex] := AValue;
  end else
    Result := AObj.Items[AIndex];
  handleExceptionEnd
end;

//function
function ListColumns_AddForListColumn(AObj: TListColumns): TListColumn; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function ListColumns_Class(): TClass; extdecl;
begin
  Result := TListColumns;
end;

//procedure
procedure ListColumns_Update(AObj: TListColumns; Item: TCollectionItem); extdecl;
begin
  handleExceptionBegin
  AObj.Update(Item);
  handleExceptionEnd
end;


exports
  ListColumns_Create,
  ListColumns_OwnerForCustomListView,
  ListColumns_ItemsForListColumn,
  ListColumns_AddForListColumn,
  ListColumns_Class,
  ListColumns_Update;