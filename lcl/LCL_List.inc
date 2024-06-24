
//constructor
function List_Create(): TList; extdecl;
begin
  handleExceptionBegin
  Result := TList.Create();
  handleExceptionEnd
end;

//property
function List_Capacity(AIsSet: LongBool; AObj: TList; AValue: Integer): Integer; extdecl;
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
function List_Count(AIsSet: LongBool; AObj: TList; AValue: Integer): Integer; extdecl;
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
function List_Items(AIsSet: LongBool; AObj: TList; Index: Integer; AValue: Pointer): Pointer; extdecl;
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
function List_List(AObj: TList): PPointerList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.List;
  handleExceptionEnd
end;

//function
function List_Add(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(Item);
  handleExceptionEnd
end;

//function
function List_Expand(AObj: TList): TList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Expand();
  handleExceptionEnd
end;

//function
function List_Extract(AObj: TList; item: Pointer): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Extract(item);
  handleExceptionEnd
end;

//function
function List_First(AObj: TList): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.First();
  handleExceptionEnd
end;

//function
function List_GetEnumerator(AObj: TList): TListEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function List_IndexOf(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

//function
function List_Last(AObj: TList): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Last();
  handleExceptionEnd
end;

//function
function List_Remove(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

//function
function List_Class(): TClass; extdecl;
begin
  Result := TList;
end;

//procedure
procedure List_FPOAttachObserver(AObj: TList; AObserver: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.FPOAttachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure List_FPODetachObserver(AObj: TList; AObserver: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.FPODetachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure List_FPONotifyObservers(AObj: TList; ASender: TObject; AOperation: TFPObservedOperation; Data: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.FPONotifyObservers(ASender, AOperation, Data);
  handleExceptionEnd
end;

//procedure
procedure List_AddList(AObj: TList; AList: TList); extdecl;
begin
  handleExceptionBegin
  AObj.AddList(AList);
  handleExceptionEnd
end;

//procedure
procedure List_Clear(AObj: TList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure List_Delete(AObj: TList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure List_Exchange(AObj: TList; Index1, Index2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

//procedure
procedure List_Insert(AObj: TList; Index: Integer; Item: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

//procedure
procedure List_Move(AObj: TList; CurIndex, NewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

//procedure
procedure List_Pack(AObj: TList); extdecl;
begin
  handleExceptionBegin
  AObj.Pack();
  handleExceptionEnd
end;

//procedure
procedure List_Sort(AObj: TList; AEventData: Pointer); extdecl;
begin
  try
    if AEventData = nil then
    begin
      TSortEventMethod.ListSortEventPtr := nil;
    end else
    begin
      // call method
      TSortEventMethod.ListSortEventPtr := AEventData;
      AObj.Sort(TSortEventMethod.OnTListSortCompare);
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;


exports
  List_Create,
  List_Capacity,
  List_Count,
  List_Items,
  List_List,
  List_Add,
  List_Expand,
  List_Extract,
  List_First,
  List_GetEnumerator,
  List_IndexOf,
  List_Last,
  List_Remove,
  List_Class,
  List_FPOAttachObserver,
  List_FPODetachObserver,
  List_FPONotifyObservers,
  List_AddList,
  List_Clear,
  List_Delete,
  List_Exchange,
  List_Insert,
  List_Move,
  List_Pack,
  List_Sort;