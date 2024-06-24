
//constructor
function StringList_Create(): TStringList; extdecl;
begin
  handleExceptionBegin
  Result := TStringList.Create();
  handleExceptionEnd
end;

//property
function StringList_Duplicates(AIsSet: LongBool; AObj: TStringList; AValue: TDuplicates): TDuplicates; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Duplicates := AValue;
  end else
    Result := AObj.Duplicates;
  handleExceptionEnd
end;

//property
function StringList_Sorted(AIsSet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Sorted := AValue;
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

//property
function StringList_CaseSensitive(AIsSet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
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
function StringList_OwnsObjects(AIsSet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OwnsObjects := AValue;
  end else
    Result := AObj.OwnsObjects;
  handleExceptionEnd
end;

//property
function StringList_SortStyle(AIsSet: LongBool; AObj: TStringList; AValue: TStringsSortStyle): TStringsSortStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortStyle := AValue;
  end else
    Result := AObj.SortStyle;
  handleExceptionEnd
end;

//function
function StringList_Find(AObj: TStringList; const S: PChar; out OutIndex: Integer): LongBool; extdecl;
var
  RetOutIndex: Integer;
begin
  handleExceptionBegin
  RetOutIndex := OutIndex;
  Result := AObj.Find(S, RetOutIndex);
  OutIndex := RetOutIndex;
  handleExceptionEnd
end;

//function
function StringList_Class(): TClass; extdecl;
begin
  Result := TStringList;
end;

//procedure
procedure StringList_Sort(AObj: TStringList); extdecl;
begin
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

//procedure
procedure StringList_CustomSort(AObj: TStringList; AEventData: Pointer); extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.StringListCustomSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.StringListCustomSortEventPtr := AEventData;
      AObj.CustomSort(TSortEventMethod.OnTStringListSortCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;

//property event
procedure StringList_SetOnChange(AObj: TStringList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure StringList_SetOnChanging(AObj: TStringList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;


exports
  StringList_Create,
  StringList_Duplicates,
  StringList_Sorted,
  StringList_CaseSensitive,
  StringList_OwnsObjects,
  StringList_SortStyle,
  StringList_Find,
  StringList_Class,
  StringList_Sort,
  StringList_CustomSort,
  StringList_SetOnChange,
  StringList_SetOnChanging;