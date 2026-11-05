// constructor
function TFPList_Create(): TFPList; extdecl;
begin
  {$define handleExceptionID := 28600}
  handleExceptionBegin
  Result := TFPList.Create();
  handleExceptionEnd
end;

// function
function TFPList_Add(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 28601}
  handleExceptionBegin
  Result := AObj.Add(Item);
  handleExceptionEnd
end;

// function
function TFPList_Expand(AObj: TFPList): TFPList; extdecl;
begin
  {$define handleExceptionID := 28602}
  handleExceptionBegin
  Result := AObj.Expand();
  handleExceptionEnd
end;

// function
function TFPList_Extract(AObj: TFPList; Item: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 28603}
  handleExceptionBegin
  Result := AObj.Extract(Item);
  handleExceptionEnd
end;

// function
function TFPList_First(AObj: TFPList): Pointer; extdecl;
begin
  {$define handleExceptionID := 28604}
  handleExceptionBegin
  Result := AObj.First();
  handleExceptionEnd
end;

// function
function TFPList_GetEnumerator(AObj: TFPList): TFPListEnumerator; extdecl;
begin
  {$define handleExceptionID := 28605}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TFPList_IndexOf(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 28606}
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

// function
function TFPList_IndexOfItem(AObj: TFPList; Item: Pointer; Direction: TFPList.TDirection): Integer; extdecl;
begin
  {$define handleExceptionID := 28607}
  handleExceptionBegin
  Result := AObj.IndexOfItem(Item, Direction);
  handleExceptionEnd
end;

// function
function TFPList_Last(AObj: TFPList): Pointer; extdecl;
begin
  {$define handleExceptionID := 28608}
  handleExceptionBegin
  Result := AObj.Last();
  handleExceptionEnd
end;

// function
function TFPList_Remove(AObj: TFPList; Item: Pointer): Integer; extdecl;
begin
  {$define handleExceptionID := 28609}
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

// procedure
procedure TFPList_AddList(AObj: TFPList; AList: TFPList); extdecl;
begin
  {$define handleExceptionID := 28610}
  handleExceptionBegin
  AObj.AddList(AList);
  handleExceptionEnd
end;

// procedure
procedure TFPList_Clear(AObj: TFPList); extdecl;
begin
  {$define handleExceptionID := 28611}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TFPList_Delete(AObj: TFPList; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 28612}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure static
procedure TFPList_Error(const Msg: PChar; Data: PtrInt); extdecl;
begin
  TFPList.Error(Msg, Data);
end;

// procedure
procedure TFPList_Exchange(AObj: TFPList; Index1: Integer; Index2: Integer); extdecl;
begin
  {$define handleExceptionID := 28613}
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

// procedure
procedure TFPList_Insert(AObj: TFPList; Index: Integer; Item: Pointer); extdecl;
begin
  {$define handleExceptionID := 28614}
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

// procedure
procedure TFPList_Move(AObj: TFPList; CurIndex: Integer; NewIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 28615}
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

// procedure
procedure TFPList_Assign(AObj: TFPList; ListA: TFPList; AOperator: TListAssignOp; ListB: TFPList); extdecl;
begin
  {$define handleExceptionID := 28616}
  handleExceptionBegin
  AObj.Assign(ListA, AOperator, ListB);
  handleExceptionEnd
end;

// procedure
procedure TFPList_Pack(AObj: TFPList); extdecl;
begin
  {$define handleExceptionID := 28617}
  handleExceptionBegin
  AObj.Pack();
  handleExceptionEnd
end;

// property
function TFPList_Capacity(ASet: LongBool; AObj: TFPList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capacity := AValue
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

// property
function TFPList_Count(ASet: LongBool; AObj: TFPList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Count := AValue
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TFPList_Items(ASet: LongBool; AObj: TFPList; Index: Integer; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 28620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TFPList_Create,
  TFPList_Add,
  TFPList_Expand,
  TFPList_Extract,
  TFPList_First,
  TFPList_GetEnumerator,
  TFPList_IndexOf,
  TFPList_IndexOfItem,
  TFPList_Last,
  TFPList_Remove,
  TFPList_AddList,
  TFPList_Clear,
  TFPList_Delete,
  TFPList_Error,
  TFPList_Exchange,
  TFPList_Insert,
  TFPList_Move,
  TFPList_Assign,
  TFPList_Pack,
  TFPList_Capacity,
  TFPList_Count,
  TFPList_Items;