// function
function TSynEditUndoItem_IsEqual(AObj: TSynEditUndoItem; AnItem: TSynEditUndoItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 39400}
  handleExceptionBegin
  Result := AObj.IsEqual(AnItem);
  handleExceptionEnd
end;

// function
function TSynEditUndoItem_IsCaretInfo(AObj: TSynEditUndoItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 39401}
  handleExceptionBegin
  Result := AObj.IsCaretInfo();
  handleExceptionEnd
end;

// function
function TSynEditUndoItem_PerformUndo(AObj: TSynEditUndoItem; Caller: TObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 39402}
  handleExceptionBegin
  Result := AObj.PerformUndo(Caller);
  handleExceptionEnd
end;

exports
  TSynEditUndoItem_IsEqual,
  TSynEditUndoItem_IsCaretInfo,
  TSynEditUndoItem_PerformUndo;