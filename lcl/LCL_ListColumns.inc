
//constructor
function ListColumns_Create(AOwner: TCustomListView): TListColumns; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListColumns.Create(AOwner);
  handleExceptionEnd
end;

//property
function ListColumns_OwnerForCustomListView(AObj: TListColumns): TCustomListView; extdecl;
begin
  {$define handleExceptionFuncName :='OwnerForCustomListView'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function ListColumns_ItemsForListColumn(AIsSet: LongBool; AObj: TListColumns; const AIndex: Integer; AValue: TListColumn): TListColumn; extdecl;
begin
  {$define handleExceptionFuncName :='ItemsForListColumn'}
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
  {$define handleExceptionFuncName :='AddForListColumn'}
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
  {$define handleExceptionFuncName :='Update'}
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