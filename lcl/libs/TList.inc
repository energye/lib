// constructor
function TList_Create(): TList; extdecl;
begin
  {$define handleExceptionID := 16600}
  handleExceptionBegin
  Result := TList.Create();
  handleExceptionEnd
end;

// function
function TList_Add(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 16601}
  handleExceptionBegin
  Result := AObj.Add(Item);
  handleExceptionEnd
end;

// function
function TList_Expand(AObj: TList): TList; extdecl;
begin
  {$define handleExceptionID := 16602}
  handleExceptionBegin
  Result := AObj.Expand();
  handleExceptionEnd
end;

// function
function TList_Extract(AObj: TList; item: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 16603}
  handleExceptionBegin
  Result := AObj.Extract(item);
  handleExceptionEnd
end;

// function
function TList_First(AObj: TList): Pointer; extdecl;
begin
  {$define handleExceptionID := 16604}
  handleExceptionBegin
  Result := AObj.First();
  handleExceptionEnd
end;

// function
function TList_GetEnumerator(AObj: TList): TListEnumerator; extdecl;
begin
  {$define handleExceptionID := 16605}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TList_IndexOf(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 16606}
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

// function
function TList_Last(AObj: TList): Pointer; extdecl;
begin
  {$define handleExceptionID := 16607}
  handleExceptionBegin
  Result := AObj.Last();
  handleExceptionEnd
end;

// function
function TList_Remove(AObj: TList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 16608}
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

// procedure
procedure TList_FPOAttachObserver(AObj: TList; AObserver: TObject); extdecl;
begin
  {$define handleExceptionID := 16609}
  handleExceptionBegin
  AObj.FPOAttachObserver(AObserver);
  handleExceptionEnd
end;

// procedure
procedure TList_FPODetachObserver(AObj: TList; AObserver: TObject); extdecl;
begin
  {$define handleExceptionID := 16610}
  handleExceptionBegin
  AObj.FPODetachObserver(AObserver);
  handleExceptionEnd
end;

// procedure
procedure TList_FPONotifyObservers(AObj: TList; ASender: TObject; AOperation: TFPObservedOperation; Data: Pointer); extdecl;
begin
  {$define handleExceptionID := 16611}
  handleExceptionBegin
  AObj.FPONotifyObservers(ASender, AOperation, Data);
  handleExceptionEnd
end;

// procedure
procedure TList_AddList(AObj: TList; AList: TList); extdecl;
begin
  {$define handleExceptionID := 16612}
  handleExceptionBegin
  AObj.AddList(AList);
  handleExceptionEnd
end;

// procedure
procedure TList_Clear(AObj: TList); extdecl;
begin
  {$define handleExceptionID := 16613}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TList_Delete(AObj: TList; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 16614}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure static
procedure TList_Error(const Msg: PChar; Data: PtrInt); extdecl;
begin
  TList.Error(Msg, Data);
end;

// procedure
procedure TList_Exchange(AObj: TList; Index1: Integer; Index2: Integer); extdecl;
begin
  {$define handleExceptionID := 16615}
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

// procedure
procedure TList_Insert(AObj: TList; Index: Integer; Item: Pointer); extdecl;
begin
  {$define handleExceptionID := 16616}
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

// procedure
procedure TList_Move(AObj: TList; CurIndex: Integer; NewIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 16617}
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

// procedure
procedure TList_Assign(AObj: TList; ListA: TList; AOperator: TListAssignOp; ListB: TList); extdecl;
begin
  {$define handleExceptionID := 16618}
  handleExceptionBegin
  AObj.Assign(ListA, AOperator, ListB);
  handleExceptionEnd
end;

// procedure
procedure TList_Pack(AObj: TList); extdecl;
begin
  {$define handleExceptionID := 16619}
  handleExceptionBegin
  AObj.Pack();
  handleExceptionEnd
end;

// property
function TList_Capacity(ASet: LongBool; AObj: TList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capacity := AValue
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

// property
function TList_Count(ASet: LongBool; AObj: TList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Count := AValue
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TList_Items(ASet: LongBool; AObj: TList; Index: Integer; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 16622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TList_Create,
  TList_Add,
  TList_Expand,
  TList_Extract,
  TList_First,
  TList_GetEnumerator,
  TList_IndexOf,
  TList_Last,
  TList_Remove,
  TList_FPOAttachObserver,
  TList_FPODetachObserver,
  TList_FPONotifyObservers,
  TList_AddList,
  TList_Clear,
  TList_Delete,
  TList_Error,
  TList_Exchange,
  TList_Insert,
  TList_Move,
  TList_Assign,
  TList_Pack,
  TList_Capacity,
  TList_Count,
  TList_Items;