// constructor
function TListFilterEdit_Create(AOwner: TComponent): TListFilterEdit; extdecl;
begin
  {$define handleExceptionID := 34600}
  handleExceptionBegin
  Result := TListFilterEdit.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TListFilterEdit_RemoveItem(AObj: TListFilterEdit; AItem: PChar); extdecl;
begin
  {$define handleExceptionID := 34601}
  handleExceptionBegin
  AObj.RemoveItem(AItem);
  handleExceptionEnd
end;

// procedure
procedure TListFilterEdit_ItemWasClicked(AObj: TListFilterEdit; AItem: PChar; IsChecked: LongBool); extdecl;
begin
  {$define handleExceptionID := 34602}
  handleExceptionBegin
  AObj.ItemWasClicked(AItem, IsChecked);
  handleExceptionEnd
end;

// property
function TListFilterEdit_SimpleSelection(ASet: LongBool; AObj: TListFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimpleSelection := AValue
  end else
    Result := AObj.SimpleSelection;
  handleExceptionEnd
end;

// property
function TListFilterEdit_SelectionList(AObj: TListFilterEdit): TStringList; extdecl;
begin
  {$define handleExceptionID := 34604}
  handleExceptionBegin
  Result := AObj.SelectionList;
  handleExceptionEnd
end;

// property
function TListFilterEdit_Items(AObj: TListFilterEdit): TStringList; extdecl;
begin
  {$define handleExceptionID := 34605}
  handleExceptionBegin
  Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TListFilterEdit_FilteredListbox(ASet: LongBool; AObj: TListFilterEdit; AValue: TCustomListBox): TCustomListBox; extdecl;
begin
  {$define handleExceptionID := 34606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FilteredListbox := AValue
  end else
    Result := AObj.FilteredListbox;
  handleExceptionEnd
end;

function TListFilterEdit_TClass(): TClass; extdecl;
begin
  Result := TListFilterEdit;
end;

exports
  TListFilterEdit_Create,
  TListFilterEdit_RemoveItem,
  TListFilterEdit_ItemWasClicked,
  TListFilterEdit_SimpleSelection,
  TListFilterEdit_SelectionList,
  TListFilterEdit_Items,
  TListFilterEdit_FilteredListbox,
  TListFilterEdit_TClass;