// constructor
function TSynHighlighterMultiScheme_Create(TheCollection: TCollection): TSynHighlighterMultiScheme; extdecl;
begin
  {$define handleExceptionID := 44500}
  handleExceptionBegin
  Result := TSynHighlighterMultiScheme.Create(TheCollection);
  handleExceptionEnd
end;

// function
function TSynHighlighterMultiScheme_FindStartPosInLine(AObj: TSynHighlighterMultiScheme; ASearchPos: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44501}
  handleExceptionBegin
  Result := AObj.FindStartPosInLine(ASearchPos);
  handleExceptionEnd
end;

// function
function TSynHighlighterMultiScheme_FindEndPosInLine(AObj: TSynHighlighterMultiScheme; ASearchPos: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44502}
  handleExceptionBegin
  Result := AObj.FindEndPosInLine(ASearchPos);
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterMultiScheme_ClearLinesSet(AObj: TSynHighlighterMultiScheme); extdecl;
begin
  {$define handleExceptionID := 44503}
  handleExceptionBegin
  AObj.ClearLinesSet();
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_LastMatchLen(AObj: TSynHighlighterMultiScheme): Integer; extdecl;
begin
  {$define handleExceptionID := 44504}
  handleExceptionBegin
  Result := AObj.LastMatchLen;
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_NeedHLScan(AObj: TSynHighlighterMultiScheme): LongBool; extdecl;
begin
  {$define handleExceptionID := 44505}
  handleExceptionBegin
  Result := AObj.NeedHLScan;
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_VirtualLines(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: TSynHLightMultiVirtualLines): TSynHLightMultiVirtualLines; extdecl;
begin
  {$define handleExceptionID := 44506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VirtualLines := AValue
  end else
    Result := AObj.VirtualLines;
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_CaseSensitive(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 44507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitive := AValue
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

// property
procedure TSynHighlighterMultiScheme_StartExpr(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StartExpr := AValue
  end else
    StringBufferCreate(AObj.StartExpr, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TSynHighlighterMultiScheme_EndExpr(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndExpr := AValue
  end else
    StringBufferCreate(AObj.EndExpr, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_Highlighter(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: TSynCustomHighlighter): TSynCustomHighlighter; extdecl;
begin
  {$define handleExceptionID := 44510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Highlighter := AValue
  end else
    Result := AObj.Highlighter;
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiScheme_MarkerAttri(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 44511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkerAttri := AValue
  end else
    Result := AObj.MarkerAttri;
  handleExceptionEnd
end;

// property
procedure TSynHighlighterMultiScheme_SchemeName(ASet: LongBool; AObj: TSynHighlighterMultiScheme; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SchemeName := AValue
  end else
    StringBufferCreate(AObj.SchemeName, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TSynHighlighterMultiScheme_OnCheckStartMarker(AObj: TSynHighlighterMultiScheme; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCheckMarker}
  {$DEFINE EventName := OnCheckStartMarker}
  LCLEventMethodCode
end;

// event
procedure TSynHighlighterMultiScheme_OnCheckEndMarker(AObj: TSynHighlighterMultiScheme; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnCheckMarker}
  {$DEFINE EventName := OnCheckEndMarker}
  LCLEventMethodCode
end;

exports
  TSynHighlighterMultiScheme_Create,
  TSynHighlighterMultiScheme_FindStartPosInLine,
  TSynHighlighterMultiScheme_FindEndPosInLine,
  TSynHighlighterMultiScheme_ClearLinesSet,
  TSynHighlighterMultiScheme_LastMatchLen,
  TSynHighlighterMultiScheme_NeedHLScan,
  TSynHighlighterMultiScheme_VirtualLines,
  TSynHighlighterMultiScheme_CaseSensitive,
  TSynHighlighterMultiScheme_StartExpr,
  TSynHighlighterMultiScheme_EndExpr,
  TSynHighlighterMultiScheme_Highlighter,
  TSynHighlighterMultiScheme_MarkerAttri,
  TSynHighlighterMultiScheme_SchemeName,
  TSynHighlighterMultiScheme_OnCheckStartMarker,
  TSynHighlighterMultiScheme_OnCheckEndMarker;