// constructor
function TSynEditUndoGroup_Create(): TSynEditUndoGroup; extdecl;
begin
  {$define handleExceptionID := 41200}
  handleExceptionBegin
  Result := TSynEditUndoGroup.Create();
  handleExceptionEnd
end;

// function
function TSynEditUndoGroup_Pop(AObj: TSynEditUndoGroup): TSynEditUndoItem; extdecl;
begin
  {$define handleExceptionID := 41201}
  handleExceptionBegin
  Result := AObj.Pop();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoGroup_Assign(AObj: TSynEditUndoGroup; AnUndoGroup: TSynEditUndoGroup); extdecl;
begin
  {$define handleExceptionID := 41202}
  handleExceptionBegin
  AObj.Assign(AnUndoGroup);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoGroup_Add(AObj: TSynEditUndoGroup; AnItem: TSynEditUndoItem); extdecl;
begin
  {$define handleExceptionID := 41203}
  handleExceptionBegin
  AObj.Add(AnItem);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoGroup_Clear(AObj: TSynEditUndoGroup; OnlyFreeItems: LongBool); extdecl;
begin
  {$define handleExceptionID := 41204}
  handleExceptionBegin
  AObj.Clear(OnlyFreeItems);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoGroup_Insert(AObj: TSynEditUndoGroup; AIndex: Integer; AnItem: TSynEditUndoItem); extdecl;
begin
  {$define handleExceptionID := 41205}
  handleExceptionBegin
  AObj.Insert(AIndex, AnItem);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoGroup_Delete(AObj: TSynEditUndoGroup; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 41206}
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

// property
function TSynEditUndoGroup_Count(AObj: TSynEditUndoGroup): Integer; extdecl;
begin
  {$define handleExceptionID := 41207}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TSynEditUndoGroup_Items(AObj: TSynEditUndoGroup; Index: Integer): TSynEditUndoItem; extdecl;
begin
  {$define handleExceptionID := 41208}
  handleExceptionBegin
  Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TSynEditUndoGroup_Reason(ASet: LongBool; AObj: TSynEditUndoGroup; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 41209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Reason := AValue
  end else
    Result := AObj.Reason;
  handleExceptionEnd
end;

exports
  TSynEditUndoGroup_Create,
  TSynEditUndoGroup_Pop,
  TSynEditUndoGroup_Assign,
  TSynEditUndoGroup_Add,
  TSynEditUndoGroup_Clear,
  TSynEditUndoGroup_Insert,
  TSynEditUndoGroup_Delete,
  TSynEditUndoGroup_Count,
  TSynEditUndoGroup_Items,
  TSynEditUndoGroup_Reason;