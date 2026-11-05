// constructor
function TSynEditMarkLineList_Create(AOwner: TSynEditMarkList): TSynEditMarkLineList; extdecl;
begin
  {$define handleExceptionID := 41100}
  handleExceptionBegin
  Result := TSynEditMarkLineList.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynEditMarkLineList_GetOrAddLine(AObj: TSynEditMarkLineList; LineNum: Integer): TSynEditMarkLine; extdecl;
begin
  {$define handleExceptionID := 41101}
  handleExceptionBegin
  Result := AObj.GetOrAddLine(LineNum);
  handleExceptionEnd
end;

// function
function TSynEditMarkLineList_GetLineOrNext(AObj: TSynEditMarkLineList; LineNum: Integer): TSynEditMarkLine; extdecl;
begin
  {$define handleExceptionID := 41102}
  handleExceptionBegin
  Result := AObj.GetLineOrNext(LineNum);
  handleExceptionEnd
end;

// function
function TSynEditMarkLineList_AddMark(AObj: TSynEditMarkLineList; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 41103}
  handleExceptionBegin
  Result := AObj.AddMark(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkLineList_RemoveMark(AObj: TSynEditMarkLineList; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 41104}
  handleExceptionBegin
  Result := AObj.RemoveMark(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkLineList_IndexOfMark(AObj: TSynEditMarkLineList; AMark: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 41105}
  handleExceptionBegin
  Result := AObj.IndexOfMark(AMark);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLineList_Remove(AObj: TSynEditMarkLineList; Item: TSynEditMarkLine; FreeMarks: LongBool); extdecl;
begin
  {$define handleExceptionID := 41106}
  handleExceptionBegin
  AObj.Remove(Item, FreeMarks);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLineList_ClearWithBool(AObj: TSynEditMarkLineList; FreeMarks: LongBool); extdecl;
begin
  {$define handleExceptionID := 41107}
  handleExceptionBegin
  AObj.Clear(FreeMarks);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkLineList_DeleteMark(AObj: TSynEditMarkLineList; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 41108}
  handleExceptionBegin
  AObj.DeleteMark(Index);
  handleExceptionEnd
end;

// property
function TSynEditMarkLineList_Lines(AObj: TSynEditMarkLineList; LineNum: Integer): TSynEditMarkLine; extdecl;
begin
  {$define handleExceptionID := 41109}
  handleExceptionBegin
  Result := AObj.Lines[LineNum];
  handleExceptionEnd
end;

// property
function TSynEditMarkLineList_MarkCount(AObj: TSynEditMarkLineList): Integer; extdecl;
begin
  {$define handleExceptionID := 41110}
  handleExceptionBegin
  Result := AObj.MarkCount;
  handleExceptionEnd
end;

// property
function TSynEditMarkLineList_Mark(ASet: LongBool; AObj: TSynEditMarkLineList; Index: Integer; AValue: TSynEditMark): TSynEditMark; extdecl;
begin
  {$define handleExceptionID := 41111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Mark[Index] := AValue
  end else
    Result := AObj.Mark[Index];
  handleExceptionEnd
end;

exports
  TSynEditMarkLineList_Create,
  TSynEditMarkLineList_GetOrAddLine,
  TSynEditMarkLineList_GetLineOrNext,
  TSynEditMarkLineList_AddMark,
  TSynEditMarkLineList_RemoveMark,
  TSynEditMarkLineList_IndexOfMark,
  TSynEditMarkLineList_Remove,
  TSynEditMarkLineList_ClearWithBool,
  TSynEditMarkLineList_DeleteMark,
  TSynEditMarkLineList_Lines,
  TSynEditMarkLineList_MarkCount,
  TSynEditMarkLineList_Mark;