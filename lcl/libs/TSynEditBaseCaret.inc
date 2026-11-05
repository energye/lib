// constructor
function TSynEditBaseCaret_Create(): TSynEditBaseCaret; extdecl;
begin
  {$define handleExceptionID := 37800}
  handleExceptionBegin
  Result := TSynEditBaseCaret.Create();
  handleExceptionEnd
end;

// function
function TSynEditBaseCaret_IsAtLineChar(AObj: TSynEditBaseCaret; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 37801}
  handleExceptionBegin
  Result := AObj.IsAtLineChar(aPoint);
  handleExceptionEnd
end;

// function
function TSynEditBaseCaret_IsAtLineByte(AObj: TSynEditBaseCaret; var aPoint: TPoint; aByteOffset: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 37802}
  handleExceptionBegin
  Result := AObj.IsAtLineByte(aPoint, aByteOffset);
  handleExceptionEnd
end;

// function
function TSynEditBaseCaret_IsAtPos(AObj: TSynEditBaseCaret; aCaret: TSynEditCaret): LongBool; extdecl;
begin
  {$define handleExceptionID := 37803}
  handleExceptionBegin
  Result := AObj.IsAtPos(aCaret);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBaseCaret_AssignFromWithSynEditBaseCaret(AObj: TSynEditBaseCaret; Src: TSynEditBaseCaret); extdecl;
begin
  {$define handleExceptionID := 37804}
  handleExceptionBegin
  AObj.AssignFrom(Src);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBaseCaret_Invalidate(AObj: TSynEditBaseCaret); extdecl;
begin
  {$define handleExceptionID := 37805}
  handleExceptionBegin
  AObj.Invalidate();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBaseCaret_InvalidateBytePos(AObj: TSynEditBaseCaret); extdecl;
begin
  {$define handleExceptionID := 37806}
  handleExceptionBegin
  AObj.InvalidateBytePos();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBaseCaret_InvalidateCharPos(AObj: TSynEditBaseCaret); extdecl;
begin
  {$define handleExceptionID := 37807}
  handleExceptionBegin
  AObj.InvalidateCharPos();
  handleExceptionEnd
end;

// property
function TSynEditBaseCaret_LinePos(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LinePos := AValue
  end else
    Result := AObj.LinePos;
  handleExceptionEnd
end;

// property
function TSynEditBaseCaret_CharPos(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharPos := AValue
  end else
    Result := AObj.CharPos;
  handleExceptionEnd
end;

// property
procedure TSynEditBaseCaret_LineCharPos(ASet: LongBool; AObj: TSynEditBaseCaret; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 37810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineCharPos := AValue
  end else
    Result := AObj.LineCharPos;
  handleExceptionEnd
end;

// property
function TSynEditBaseCaret_BytePos(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BytePos := AValue
  end else
    Result := AObj.BytePos;
  handleExceptionEnd
end;

// property
function TSynEditBaseCaret_BytePosOffset(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BytePosOffset := AValue
  end else
    Result := AObj.BytePosOffset;
  handleExceptionEnd
end;

// property
procedure TSynEditBaseCaret_LineBytePos(ASet: LongBool; AObj: TSynEditBaseCaret; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 37813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineBytePos := AValue
  end else
    Result := AObj.LineBytePos;
  handleExceptionEnd
end;

// property
procedure TSynEditBaseCaret_FullLogicalPos(ASet: LongBool; AObj: TSynEditBaseCaret; var AValue: TLogCaretPointPtr; var Result: TLogCaretPointPtr); extdecl;
begin
  {$define handleExceptionID := 37814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FullLogicalPos := TLogCaretPointToPas(AValue)
  end else
    Result := TLogCaretPointToGo(AObj.FullLogicalPos);
  handleExceptionEnd
end;

// property
procedure TSynEditBaseCaret_ViewedLineCharPos(ASet: LongBool; AObj: TSynEditBaseCaret; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 37815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ViewedLineCharPos := AValue
  end else
    Result := AObj.ViewedLineCharPos;
  handleExceptionEnd
end;

// property
function TSynEditBaseCaret_ViewedLinePos(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: TLinePos): TLinePos; extdecl;
begin
  {$define handleExceptionID := 37816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ViewedLinePos := AValue
  end else
    Result := AObj.ViewedLinePos;
  handleExceptionEnd
end;

// property
procedure TSynEditBaseCaret_LineText(ASet: LongBool; AObj: TSynEditBaseCaret; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 37817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineText := AValue
  end else
    StringBufferCreate(AObj.LineText, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TSynEditBaseCaret_Create,
  TSynEditBaseCaret_IsAtLineChar,
  TSynEditBaseCaret_IsAtLineByte,
  TSynEditBaseCaret_IsAtPos,
  TSynEditBaseCaret_AssignFromWithSynEditBaseCaret,
  TSynEditBaseCaret_Invalidate,
  TSynEditBaseCaret_InvalidateBytePos,
  TSynEditBaseCaret_InvalidateCharPos,
  TSynEditBaseCaret_LinePos,
  TSynEditBaseCaret_CharPos,
  TSynEditBaseCaret_LineCharPos,
  TSynEditBaseCaret_BytePos,
  TSynEditBaseCaret_BytePosOffset,
  TSynEditBaseCaret_LineBytePos,
  TSynEditBaseCaret_FullLogicalPos,
  TSynEditBaseCaret_ViewedLineCharPos,
  TSynEditBaseCaret_ViewedLinePos,
  TSynEditBaseCaret_LineText;