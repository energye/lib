
//constructor
function FPList_Create(): TFPList; extdecl;
begin
  handleExceptionBegin
  Result := TFPList.Create();
  handleExceptionEnd
end;

//property
function FPList_Capacity(AIsSet: LongBool; AObj: TFPList; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Capacity := AValue;
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

//property
function FPList_Count(AIsSet: LongBool; AObj: TFPList; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Count := AValue;
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

//property
function FPList_Items(AIsSet: LongBool; AObj: TFPList; Index: Integer; AValue: Pointer): Pointer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//property
function FPList_List(AObj: TFPList): PPointerList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.List;
  handleExceptionEnd
end;

//function
function FPList_Add(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(Item);
  handleExceptionEnd
end;

//function
function FPList_Expand(AObj: TFPList): TFPList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Expand();
  handleExceptionEnd
end;

//function
function FPList_Extract(AObj: TFPList; Item: Pointer): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Extract(Item);
  handleExceptionEnd
end;

//function
function FPList_First(AObj: TFPList): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.First();
  handleExceptionEnd
end;

//function
function FPList_GetEnumerator(AObj: TFPList): TFPListEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function FPList_IndexOf(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

//function
function FPList_Last(AObj: TFPList): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Last();
  handleExceptionEnd
end;

//function
function FPList_Remove(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

//function
function FPList_Class(): TClass; extdecl;
begin
  Result := TFPList;
end;

//procedure
procedure FPList_AddList(AObj: TFPList; AList: TFPList); extdecl;
begin
  handleExceptionBegin
  AObj.AddList(AList);
  handleExceptionEnd
end;

//procedure
procedure FPList_Clear(AObj: TFPList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure FPList_Delete(AObj: TFPList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure FPList_Exchange(AObj: TFPList; Index1, Index2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

//procedure
procedure FPList_Insert(AObj: TFPList; Index: Integer; Item: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

//procedure
procedure FPList_Move(AObj: TFPList; CurIndex, NewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

//procedure
procedure FPList_Pack(AObj: TFPList); extdecl;
begin
  handleExceptionBegin
  AObj.Pack();
  handleExceptionEnd
end;

//procedure
procedure FPList_Sort(AObj: TFPList; AEventData: Pointer); extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.FPListSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.FPListSortEventPtr := AEventData;
      AObj.Sort(TSortEventMethod.OnTListSortCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;


exports
  FPList_Create,
  FPList_Capacity,
  FPList_Count,
  FPList_Items,
  FPList_List,
  FPList_Add,
  FPList_Expand,
  FPList_Extract,
  FPList_First,
  FPList_GetEnumerator,
  FPList_IndexOf,
  FPList_Last,
  FPList_Remove,
  FPList_Class,
  FPList_AddList,
  FPList_Clear,
  FPList_Delete,
  FPList_Exchange,
  FPList_Insert,
  FPList_Move,
  FPList_Pack,
  FPList_Sort;