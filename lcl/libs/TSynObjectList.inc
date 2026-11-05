// constructor
function TSynObjectList_Create(AOwner: TComponent): TSynObjectList; extdecl;
begin
  {$define handleExceptionID := 39900}
  handleExceptionBegin
  Result := TSynObjectList.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynObjectList_Add(AObj: TSynObjectList; AnItem: TSynObjectListItem): Integer; extdecl;
begin
  {$define handleExceptionID := 39901}
  handleExceptionBegin
  Result := AObj.Add(AnItem);
  handleExceptionEnd
end;

// function
function TSynObjectList_Count(AObj: TSynObjectList): Integer; extdecl;
begin
  {$define handleExceptionID := 39902}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// function
function TSynObjectList_IndexOf(AObj: TSynObjectList; AnItem: TSynObjectListItem): Integer; extdecl;
begin
  {$define handleExceptionID := 39903}
  handleExceptionBegin
  Result := AObj.IndexOf(AnItem);
  handleExceptionEnd
end;

// procedure
procedure TSynObjectList_Delete(AObj: TSynObjectList; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 39904}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TSynObjectList_Clear(AObj: TSynObjectList); extdecl;
begin
  {$define handleExceptionID := 39905}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TSynObjectList_Move(AObj: TSynObjectList; AOld: Integer; ANew: Integer); extdecl;
begin
  {$define handleExceptionID := 39906}
  handleExceptionBegin
  AObj.Move(AOld, ANew);
  handleExceptionEnd
end;

// procedure
procedure TSynObjectList_Sort(AObj: TSynObjectList); extdecl;
begin
  {$define handleExceptionID := 39907}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

// property
function TSynObjectList_Sorted(ASet: LongBool; AObj: TSynObjectList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sorted := AValue
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

// property
function TSynObjectList_BaseItems(ASet: LongBool; AObj: TSynObjectList; Index: Integer; AValue: TSynObjectListItem): TSynObjectListItem; extdecl;
begin
  {$define handleExceptionID := 39909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseItems[Index] := AValue
  end else
    Result := AObj.BaseItems[Index];
  handleExceptionEnd
end;

// event
procedure TSynObjectList_OnChange(AObj: TSynObjectList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TSynObjectList_TClass(): TClass; extdecl;
begin
  Result := TSynObjectList;
end;

exports
  TSynObjectList_Create,
  TSynObjectList_Add,
  TSynObjectList_Count,
  TSynObjectList_IndexOf,
  TSynObjectList_Delete,
  TSynObjectList_Clear,
  TSynObjectList_Move,
  TSynObjectList_Sort,
  TSynObjectList_Sorted,
  TSynObjectList_BaseItems,
  TSynObjectList_OnChange,
  TSynObjectList_TClass;