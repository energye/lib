// constructor
function TSynEditCaret_Create(): TSynEditCaret; extdecl;
begin
  {$define handleExceptionID := 37900}
  handleExceptionBegin
  Result := TSynEditCaret.Create();
  handleExceptionEnd
end;

// function
function TSynEditCaret_WasAtLineChar(AObj: TSynEditCaret; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 37901}
  handleExceptionBegin
  Result := AObj.WasAtLineChar(aPoint);
  handleExceptionEnd
end;

// function
function TSynEditCaret_WasAtLineByte(AObj: TSynEditCaret; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 37902}
  handleExceptionBegin
  Result := AObj.WasAtLineByte(aPoint);
  handleExceptionEnd
end;

// function
function TSynEditCaret_MoveHoriz(AObj: TSynEditCaret; ACount: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 37903}
  handleExceptionBegin
  Result := AObj.MoveHoriz(ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_AssignFromWithSynEditBaseCaret(AObj: TSynEditCaret; Src: TSynEditBaseCaret); extdecl;
begin
  {$define handleExceptionID := 37904}
  handleExceptionBegin
  AObj.AssignFrom(Src);
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_IncForcePastEOL(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37905}
  handleExceptionBegin
  AObj.IncForcePastEOL();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_DecForcePastEOL(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37906}
  handleExceptionBegin
  AObj.DecForcePastEOL();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_IncForceAdjustToNextChar(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37907}
  handleExceptionBegin
  AObj.IncForceAdjustToNextChar();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_DecForceAdjustToNextChar(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37908}
  handleExceptionBegin
  AObj.DecForceAdjustToNextChar();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_IncAutoMoveOnEdit(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37909}
  handleExceptionBegin
  AObj.IncAutoMoveOnEdit();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_DecAutoMoveOnEdit(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37910}
  handleExceptionBegin
  AObj.DecAutoMoveOnEdit();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_ChangeOnTouch(AObj: TSynEditCaret); extdecl;
begin
  {$define handleExceptionID := 37911}
  handleExceptionBegin
  AObj.ChangeOnTouch();
  handleExceptionEnd
end;

// procedure
procedure TSynEditCaret_Touch(AObj: TSynEditCaret; aChangeOnTouch: LongBool); extdecl;
begin
  {$define handleExceptionID := 37912}
  handleExceptionBegin
  AObj.Touch(aChangeOnTouch);
  handleExceptionEnd
end;

// property
function TSynEditCaret_OldLinePos(AObj: TSynEditCaret): Integer; extdecl;
begin
  {$define handleExceptionID := 37913}
  handleExceptionBegin
  Result := AObj.OldLinePos;
  handleExceptionEnd
end;

// property
function TSynEditCaret_OldCharPos(AObj: TSynEditCaret): Integer; extdecl;
begin
  {$define handleExceptionID := 37914}
  handleExceptionBegin
  Result := AObj.OldCharPos;
  handleExceptionEnd
end;

// property
procedure TSynEditCaret_OldLineCharPos(AObj: TSynEditCaret; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 37915}
  handleExceptionBegin
  Result := AObj.OldLineCharPos;
  handleExceptionEnd
end;

// property
procedure TSynEditCaret_OldLineBytePos(AObj: TSynEditCaret; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 37916}
  handleExceptionBegin
  Result := AObj.OldLineBytePos;
  handleExceptionEnd
end;

// property
procedure TSynEditCaret_OldFullLogicalPos(AObj: TSynEditCaret; var Result: TLogCaretPointPtr); extdecl;
begin
  {$define handleExceptionID := 37917}
  handleExceptionBegin
  Result := TLogCaretPointToGo(AObj.OldFullLogicalPos);
  handleExceptionEnd
end;

// property
function TSynEditCaret_SkipTabs(ASet: LongBool; AObj: TSynEditCaret; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SkipTabs := AValue
  end else
    Result := AObj.SkipTabs;
  handleExceptionEnd
end;

// property
function TSynEditCaret_AllowPastEOL(ASet: LongBool; AObj: TSynEditCaret; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowPastEOL := AValue
  end else
    Result := AObj.AllowPastEOL;
  handleExceptionEnd
end;

// property
function TSynEditCaret_KeepCaretX(ASet: LongBool; AObj: TSynEditCaret; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepCaretX := AValue
  end else
    Result := AObj.KeepCaretX;
  handleExceptionEnd
end;

// property
function TSynEditCaret_KeepCaretXPos(ASet: LongBool; AObj: TSynEditCaret; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepCaretXPos := AValue
  end else
    Result := AObj.KeepCaretXPos;
  handleExceptionEnd
end;

// event
procedure TSynEditCaret_MaxLeftChar(AObj: TSynEditCaret; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMaxLeftCharFunc}
  {$DEFINE EventName := MaxLeftChar}
  LCLEventMethodCode
end;

exports
  TSynEditCaret_Create,
  TSynEditCaret_WasAtLineChar,
  TSynEditCaret_WasAtLineByte,
  TSynEditCaret_MoveHoriz,
  TSynEditCaret_AssignFromWithSynEditBaseCaret,
  TSynEditCaret_IncForcePastEOL,
  TSynEditCaret_DecForcePastEOL,
  TSynEditCaret_IncForceAdjustToNextChar,
  TSynEditCaret_DecForceAdjustToNextChar,
  TSynEditCaret_IncAutoMoveOnEdit,
  TSynEditCaret_DecAutoMoveOnEdit,
  TSynEditCaret_ChangeOnTouch,
  TSynEditCaret_Touch,
  TSynEditCaret_OldLinePos,
  TSynEditCaret_OldCharPos,
  TSynEditCaret_OldLineCharPos,
  TSynEditCaret_OldLineBytePos,
  TSynEditCaret_OldFullLogicalPos,
  TSynEditCaret_SkipTabs,
  TSynEditCaret_AllowPastEOL,
  TSynEditCaret_KeepCaretX,
  TSynEditCaret_KeepCaretXPos,
  TSynEditCaret_MaxLeftChar;