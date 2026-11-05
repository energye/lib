// constructor
function TSynCompletion_Create(AOwner: TComponent): TSynCompletion; extdecl;
begin
  {$define handleExceptionID := 42100}
  handleExceptionBegin
  Result := TSynCompletion.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynCompletion_AddCharAtCursor(AObj: TSynCompletion; AUtf8Char: PChar); extdecl;
begin
  {$define handleExceptionID := 42101}
  handleExceptionBegin
  AObj.AddCharAtCursor(AUtf8Char);
  handleExceptionEnd
end;

// procedure
procedure TSynCompletion_DeleteCharBeforeCursor(AObj: TSynCompletion); extdecl;
begin
  {$define handleExceptionID := 42102}
  handleExceptionBegin
  AObj.DeleteCharBeforeCursor();
  handleExceptionEnd
end;

// property
function TSynCompletion_ShortCut(ASet: LongBool; AObj: TSynCompletion; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 42103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut := AValue
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
procedure TSynCompletion_EndOfTokenChr(ASet: LongBool; AObj: TSynCompletion; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndOfTokenChr := AValue
  end else
    StringBufferCreate(AObj.EndOfTokenChr, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynCompletion_ExecCommandID(ASet: LongBool; AObj: TSynCompletion; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 42105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExecCommandID := AValue
  end else
    Result := AObj.ExecCommandID;
  handleExceptionEnd
end;

// property
function TSynCompletion_ToggleReplaceWhole(ASet: LongBool; AObj: TSynCompletion; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ToggleReplaceWhole := AValue
  end else
    Result := AObj.ToggleReplaceWhole;
  handleExceptionEnd
end;

// event
procedure TSynCompletion_OnCodeCompletion(AObj: TSynCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCodeCompletionEvent}
  {$DEFINE EventName := OnCodeCompletion}
  LCLEventMethodCode
end;

function TSynCompletion_TClass(): TClass; extdecl;
begin
  Result := TSynCompletion;
end;

exports
  TSynCompletion_Create,
  TSynCompletion_AddCharAtCursor,
  TSynCompletion_DeleteCharBeforeCursor,
  TSynCompletion_ShortCut,
  TSynCompletion_EndOfTokenChr,
  TSynCompletion_ExecCommandID,
  TSynCompletion_ToggleReplaceWhole,
  TSynCompletion_OnCodeCompletion,
  TSynCompletion_TClass;