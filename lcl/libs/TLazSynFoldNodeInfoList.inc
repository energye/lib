// function
function TLazSynFoldNodeInfoList_CountAll(AObj: TLazSynFoldNodeInfoList): Integer; extdecl;
begin
  {$define handleExceptionID := 44000}
  handleExceptionBegin
  Result := AObj.CountAll();
  handleExceptionEnd
end;

// function
function TLazSynFoldNodeInfoList_Count(AObj: TLazSynFoldNodeInfoList): Integer; extdecl;
begin
  {$define handleExceptionID := 44001}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// function
function TLazSynFoldNodeInfoList_CountEx(AObj: TLazSynFoldNodeInfoList; AnActionFilter: TSynFoldActions; AGroupFilter: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44002}
  handleExceptionBegin
  Result := AObj.CountEx(AnActionFilter, AGroupFilter);
  handleExceptionEnd
end;

// function
procedure TLazSynFoldNodeInfoList_NodeInfoEx(AObj: TLazSynFoldNodeInfoList; Index: Integer; AnActionFilter: TSynFoldActions; AGroupFilter: Integer; var Result: TSynFoldNodeInfo); extdecl;
begin
  {$define handleExceptionID := 44003}
  handleExceptionBegin
  Result := AObj.NodeInfoEx(Index, AnActionFilter, AGroupFilter);
  handleExceptionEnd
end;

// procedure
procedure TLazSynFoldNodeInfoList_Add(AObj: TLazSynFoldNodeInfoList; var AnInfo: TSynFoldNodeInfoPtr); extdecl;
var
  InAnInfo: TSynFoldNodeInfo;
begin
  {$define handleExceptionID := 44004}
  handleExceptionBegin
  InAnInfo := TSynFoldNodeInfoToPas(AnInfo);
  AObj.Add(InAnInfo);
  handleExceptionEnd
end;

// procedure
procedure TLazSynFoldNodeInfoList_Delete(AObj: TLazSynFoldNodeInfoList; AnIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 44005}
  handleExceptionBegin
  AObj.Delete(AnIndex);
  handleExceptionEnd
end;

// procedure
procedure TLazSynFoldNodeInfoList_ClearFilter(AObj: TLazSynFoldNodeInfoList); extdecl;
begin
  {$define handleExceptionID := 44006}
  handleExceptionBegin
  AObj.ClearFilter();
  handleExceptionEnd
end;

// property
procedure TLazSynFoldNodeInfoList_ItemPointer(AObj: TLazSynFoldNodeInfoList; AnIndex: Integer; var Result: TSynFoldNodeInfoPtr); extdecl;
begin
  {$define handleExceptionID := 44007}
  handleExceptionBegin
  Result := TSynFoldNodeInfoToGo(AObj.ItemPointer[AnIndex]^);
  handleExceptionEnd
end;

// property
procedure TLazSynFoldNodeInfoList_LastItemPointer(AObj: TLazSynFoldNodeInfoList; var Result: TSynFoldNodeInfoPtr); extdecl;
begin
  {$define handleExceptionID := 44008}
  handleExceptionBegin
  Result := TSynFoldNodeInfoToGo(AObj.LastItemPointer^);
  handleExceptionEnd
end;

// property
procedure TLazSynFoldNodeInfoList_Item(AObj: TLazSynFoldNodeInfoList; Index: Integer; var Result: TSynFoldNodeInfoPtr); extdecl;
begin
  {$define handleExceptionID := 44009}
  handleExceptionBegin
  Result := TSynFoldNodeInfoToGo(AObj.Item[Index]);
  handleExceptionEnd
end;

// property
function TLazSynFoldNodeInfoList_ActionFilter(ASet: LongBool; AObj: TLazSynFoldNodeInfoList; AValue: TSynFoldActions): TSynFoldActions; extdecl;
begin
  {$define handleExceptionID := 44010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActionFilter := AValue
  end else
    Result := AObj.ActionFilter;
  handleExceptionEnd
end;

// property
function TLazSynFoldNodeInfoList_GroupFilter(ASet: LongBool; AObj: TLazSynFoldNodeInfoList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupFilter := AValue
  end else
    Result := AObj.GroupFilter;
  handleExceptionEnd
end;

// property
function TLazSynFoldNodeInfoList_Line(ASet: LongBool; AObj: TLazSynFoldNodeInfoList; AValue: TLineIdx): TLineIdx; extdecl;
begin
  {$define handleExceptionID := 44012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Line := AValue
  end else
    Result := AObj.Line;
  handleExceptionEnd
end;

exports
  TLazSynFoldNodeInfoList_CountAll,
  TLazSynFoldNodeInfoList_Count,
  TLazSynFoldNodeInfoList_CountEx,
  TLazSynFoldNodeInfoList_NodeInfoEx,
  TLazSynFoldNodeInfoList_Add,
  TLazSynFoldNodeInfoList_Delete,
  TLazSynFoldNodeInfoList_ClearFilter,
  TLazSynFoldNodeInfoList_ItemPointer,
  TLazSynFoldNodeInfoList_LastItemPointer,
  TLazSynFoldNodeInfoList_Item,
  TLazSynFoldNodeInfoList_ActionFilter,
  TLazSynFoldNodeInfoList_GroupFilter,
  TLazSynFoldNodeInfoList_Line;