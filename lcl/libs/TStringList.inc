// constructor
function TStringList_Create(): TStringList; extdecl;
begin
  {$define handleExceptionID := 11500}
  handleExceptionBegin
  Result := TStringList.Create();
  handleExceptionEnd
end;

// function
function TStringList_Find(AObj: TStringList; const S: PChar; var Index: Integer): LongBool; extdecl;
var
  OutIndex: Integer;
begin
  {$define handleExceptionID := 11501}
  handleExceptionBegin
  Result := AObj.Find(S, OutIndex);
  Index := OutIndex;
  handleExceptionEnd
end;

// procedure
procedure TStringList_Sort(AObj: TStringList); extdecl;
begin
  {$define handleExceptionID := 11502}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

// property
function TStringList_Duplicates(ASet: LongBool; AObj: TStringList; AValue: TDuplicates): TDuplicates; extdecl;
begin
  {$define handleExceptionID := 11503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Duplicates := AValue
  end else
    Result := AObj.Duplicates;
  handleExceptionEnd
end;

// property
function TStringList_Sorted(ASet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sorted := AValue
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

// property
function TStringList_CaseSensitive(ASet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitive := AValue
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

// property
function TStringList_OwnsObjects(ASet: LongBool; AObj: TStringList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnsObjects := AValue
  end else
    Result := AObj.OwnsObjects;
  handleExceptionEnd
end;

// property
function TStringList_SortStyle(ASet: LongBool; AObj: TStringList; AValue: TStringsSortStyle): TStringsSortStyle; extdecl;
begin
  {$define handleExceptionID := 11507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortStyle := AValue
  end else
    Result := AObj.SortStyle;
  handleExceptionEnd
end;

// event
procedure TStringList_OnChange(AObj: TStringList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TStringList_OnChanging(AObj: TStringList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

exports
  TStringList_Create,
  TStringList_Find,
  TStringList_Sort,
  TStringList_Duplicates,
  TStringList_Sorted,
  TStringList_CaseSensitive,
  TStringList_OwnsObjects,
  TStringList_SortStyle,
  TStringList_OnChange,
  TStringList_OnChanging;