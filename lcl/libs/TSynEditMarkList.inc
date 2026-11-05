// constructor
function TSynEditMarkList_Create(AOwner: TSynEditBase; ALines: TSynEditStringsLinked): TSynEditMarkList; extdecl;
begin
  {$define handleExceptionID := 36300}
  handleExceptionBegin
  Result := TSynEditMarkList.Create(AOwner, ALines);
  handleExceptionEnd
end;

// function
function TSynEditMarkList_Remove(AObj: TSynEditMarkList; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 36301}
  handleExceptionBegin
  Result := AObj.Remove(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkList_IndexOf(AObj: TSynEditMarkList; Item: TSynEditMark): Integer; extdecl;
begin
  {$define handleExceptionID := 36302}
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

// function
function TSynEditMarkList_Count(AObj: TSynEditMarkList): Integer; extdecl;
begin
  {$define handleExceptionID := 36303}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkList_Add(AObj: TSynEditMarkList; Item: TSynEditMark); extdecl;
begin
  {$define handleExceptionID := 36304}
  handleExceptionBegin
  AObj.Add(Item);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkList_Delete(AObj: TSynEditMarkList; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 36305}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkList_ClearLine(AObj: TSynEditMarkList; line: integer); extdecl;
begin
  {$define handleExceptionID := 36306}
  handleExceptionBegin
  AObj.ClearLine(line);
  handleExceptionEnd
end;

// property
function TSynEditMarkList_Items(ASet: LongBool; AObj: TSynEditMarkList; Index: Integer; AValue: TSynEditMark): TSynEditMark; extdecl;
begin
  {$define handleExceptionID := 36307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TSynEditMarkList_Line(AObj: TSynEditMarkList; LineNum: Integer): TSynEditMarkLine; extdecl;
begin
  {$define handleExceptionID := 36308}
  handleExceptionBegin
  Result := AObj.Line[LineNum];
  handleExceptionEnd
end;

// event
procedure TSynEditMarkList_OnChange(AObj: TSynEditMarkList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynEditMarkList_Create,
  TSynEditMarkList_Remove,
  TSynEditMarkList_IndexOf,
  TSynEditMarkList_Count,
  TSynEditMarkList_Add,
  TSynEditMarkList_Delete,
  TSynEditMarkList_ClearLine,
  TSynEditMarkList_Items,
  TSynEditMarkList_Line,
  TSynEditMarkList_OnChange;