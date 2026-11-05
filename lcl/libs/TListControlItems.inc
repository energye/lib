// constructor
function TListControlItems_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TListControlItems; extdecl;
begin
  {$define handleExceptionID := 21300}
  handleExceptionBegin
  Result := TListControlItems.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

// function
function TListControlItems_AddToListControlItem(AObj: TListControlItems): TListControlItem; extdecl;
begin
  {$define handleExceptionID := 21301}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// procedure
procedure TListControlItems_Sort(AObj: TListControlItems); extdecl;
begin
  {$define handleExceptionID := 21302}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

// property
function TListControlItems_ItemsWithIntToListControlItem(AObj: TListControlItems; AIndex: Integer): TListControlItem; extdecl;
begin
  {$define handleExceptionID := 21303}
  handleExceptionBegin
  Result := AObj.Items[AIndex];
  handleExceptionEnd
end;

// property
function TListControlItems_CaseSensitive(ASet: LongBool; AObj: TListControlItems; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitive := AValue
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

// property
function TListControlItems_SortType(ASet: LongBool; AObj: TListControlItems; AValue: TListItemsSortType): TListItemsSortType; extdecl;
begin
  {$define handleExceptionID := 21305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortType := AValue
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

// event
procedure TListControlItems_OnCompare(AObj: TListControlItems; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTListCompareEvent}
  {$DEFINE EventName := OnCompare}
  LCLEventMethodCode
end;

exports
  TListControlItems_Create,
  TListControlItems_AddToListControlItem,
  TListControlItems_Sort,
  TListControlItems_ItemsWithIntToListControlItem,
  TListControlItems_CaseSensitive,
  TListControlItems_SortType,
  TListControlItems_OnCompare;