// constructor
function TSynEditMarkLine_Create(ALineNum: Integer; AOwner: TSynEditMarkLineList): TSynEditMarkLine; extdecl;
begin
  {$define handleExceptionID := 38400}
  handleExceptionBegin
  Result := TSynEditMarkLine.Create(ALineNum, AOwner);
  handleExceptionEnd
end;

// function
function TSynEditMarkLine_Add(AObj: TSynEditMarkLine; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 38401}
  handleExceptionBegin
  Result := AObj.Add(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkLine_Remove(AObj: TSynEditMarkLine; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 38402}
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkLine_Count(AObj: TSynEditMarkLine): Integer; extdecl;
begin
  {$define handleExceptionID := 38403}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// function
function TSynEditMarkLine_VisibleCount(AObj: TSynEditMarkLine): Integer; extdecl;
begin
  {$define handleExceptionID := 38404}
  handleExceptionBegin
  Result := AObj.VisibleCount();
  handleExceptionEnd
end;

// function
function TSynEditMarkLine_IndexOf(AObj: TSynEditMarkLine; AMark: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 38405}
  handleExceptionBegin
  Result := AObj.IndexOf(AMark);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLine_Sort(AObj: TSynEditMarkLine; PrimaryOrder: TSynEditMarkSortOrder; SecondaryOrder: TSynEditMarkSortOrder); extdecl;
begin
  {$define handleExceptionID := 38406}
  handleExceptionBegin
  AObj.Sort(PrimaryOrder, SecondaryOrder);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLine_Delete(AObj: TSynEditMarkLine; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 38407}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLine_Clear(AObj: TSynEditMarkLine; FreeMarks: LongBool); extdecl;
begin
  {$define handleExceptionID := 38408}
  handleExceptionBegin
  AObj.Clear(FreeMarks);
  handleExceptionEnd
end;

// property
function TSynEditMarkLine_Items(ASet: LongBool; AObj: TSynEditMarkLine; Index: Integer; AValue: TSynEditMark): TSynEditMark; extdecl;
begin
  {$define handleExceptionID := 38409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TSynEditMarkLine_LineNum(AObj: TSynEditMarkLine): Integer; extdecl;
begin
  {$define handleExceptionID := 38410}
  handleExceptionBegin
  Result := AObj.LineNum;
  handleExceptionEnd
end;

exports
  TSynEditMarkLine_Create,
  TSynEditMarkLine_Add,
  TSynEditMarkLine_Remove,
  TSynEditMarkLine_Count,
  TSynEditMarkLine_VisibleCount,
  TSynEditMarkLine_IndexOf,
  TSynEditMarkLine_Sort,
  TSynEditMarkLine_Delete,
  TSynEditMarkLine_Clear,
  TSynEditMarkLine_Items,
  TSynEditMarkLine_LineNum;