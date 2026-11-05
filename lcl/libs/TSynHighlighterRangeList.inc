// constructor
function TSynHighlighterRangeList_Create(): TSynHighlighterRangeList; extdecl;
begin
  {$define handleExceptionID := 45700}
  handleExceptionBegin
  Result := TSynHighlighterRangeList.Create();
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterRangeList_ClearReScanNeeded(AObj: TSynHighlighterRangeList); extdecl;
begin
  {$define handleExceptionID := 45701}
  handleExceptionBegin
  AObj.ClearReScanNeeded();
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterRangeList_AdjustReScanStart(AObj: TSynHighlighterRangeList; ANewStart: Integer); extdecl;
begin
  {$define handleExceptionID := 45702}
  handleExceptionBegin
  AObj.AdjustReScanStart(ANewStart);
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterRangeList_InvalidateAll(AObj: TSynHighlighterRangeList); extdecl;
begin
  {$define handleExceptionID := 45703}
  handleExceptionBegin
  AObj.InvalidateAll();
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterRangeList_IncRefCount(AObj: TSynHighlighterRangeList); extdecl;
begin
  {$define handleExceptionID := 45704}
  handleExceptionBegin
  AObj.IncRefCount();
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterRangeList_DecRefCount(AObj: TSynHighlighterRangeList); extdecl;
begin
  {$define handleExceptionID := 45705}
  handleExceptionBegin
  AObj.DecRefCount();
  handleExceptionEnd
end;

// property
function TSynHighlighterRangeList_Range(ASet: LongBool; AObj: TSynHighlighterRangeList; Index: Integer; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 45706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Range[Index] := AValue
  end else
    Result := AObj.Range[Index];
  handleExceptionEnd
end;

// property
function TSynHighlighterRangeList_RefCount(AObj: TSynHighlighterRangeList): Integer; extdecl;
begin
  {$define handleExceptionID := 45707}
  handleExceptionBegin
  Result := AObj.RefCount;
  handleExceptionEnd
end;

// property
function TSynHighlighterRangeList_NeedsReScanStartIndex(AObj: TSynHighlighterRangeList): Integer; extdecl;
begin
  {$define handleExceptionID := 45708}
  handleExceptionBegin
  Result := AObj.NeedsReScanStartIndex;
  handleExceptionEnd
end;

// property
function TSynHighlighterRangeList_NeedsReScanEndIndex(AObj: TSynHighlighterRangeList): Integer; extdecl;
begin
  {$define handleExceptionID := 45709}
  handleExceptionBegin
  Result := AObj.NeedsReScanEndIndex;
  handleExceptionEnd
end;

// property
function TSynHighlighterRangeList_NeedsReScanRealStartIndex(AObj: TSynHighlighterRangeList): Integer; extdecl;
begin
  {$define handleExceptionID := 45710}
  handleExceptionBegin
  Result := AObj.NeedsReScanRealStartIndex;
  handleExceptionEnd
end;

exports
  TSynHighlighterRangeList_Create,
  TSynHighlighterRangeList_ClearReScanNeeded,
  TSynHighlighterRangeList_AdjustReScanStart,
  TSynHighlighterRangeList_InvalidateAll,
  TSynHighlighterRangeList_IncRefCount,
  TSynHighlighterRangeList_DecRefCount,
  TSynHighlighterRangeList_Range,
  TSynHighlighterRangeList_RefCount,
  TSynHighlighterRangeList_NeedsReScanStartIndex,
  TSynHighlighterRangeList_NeedsReScanEndIndex,
  TSynHighlighterRangeList_NeedsReScanRealStartIndex;