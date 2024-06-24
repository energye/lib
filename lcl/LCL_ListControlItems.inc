
//constructor
function ListControlItems_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TListControlItems; extdecl;
begin
  handleExceptionBegin
  Result := TListControlItems.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

//property
function ListControlItems_ItemsForListControlItem(AObj: TListControlItems; AIndex: Integer): TListControlItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[AIndex];
  handleExceptionEnd
end;

//property
function ListControlItems_CaseSensitive(AIsSet: LongBool; AObj: TListControlItems; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaseSensitive := AValue;
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

//property
function ListControlItems_SortType(AIsSet: LongBool; AObj: TListControlItems; AValue: TListItemsSortType): TListItemsSortType; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortType := AValue;
  end else
    Result := AObj.SortType;
  handleExceptionEnd
end;

//function
function ListControlItems_AddForListControlItem(AObj: TListControlItems): TListControlItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function ListControlItems_Class(): TClass; extdecl;
begin
  Result := TListControlItems;
end;

//procedure
procedure ListControlItems_CustomSort(AObj: TListControlItems; AEventData: Pointer); extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.ListControlItemsCustomSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.ListControlItemsCustomSortEventPtr := AEventData;
      AObj.CustomSort(TSortEventMethod.OnTListItemsCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;

//procedure
procedure ListControlItems_SortForOverload(AObj: TListControlItems); extdecl;
begin
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

//property event
procedure ListControlItems_SetOnCompare(AObj: TListControlItems; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTListCompareEvent}
  {$DEFINE EventName := OnCompare}
  EventMethodCode
end;


exports
  ListControlItems_Create,
  ListControlItems_ItemsForListControlItem,
  ListControlItems_CaseSensitive,
  ListControlItems_SortType,
  ListControlItems_AddForListControlItem,
  ListControlItems_Class,
  ListControlItems_CustomSort,
  ListControlItems_SortForOverload,
  ListControlItems_SetOnCompare;