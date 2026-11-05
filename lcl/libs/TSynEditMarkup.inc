// function
function TSynEditMarkup_GetMarkupAttributeAtRowCol(AObj: TSynEditMarkup; const aRow: Integer; var aStartCol: TLazSynDisplayTokenBoundPtr; var AnRtlInfo: TLazSynDisplayRtlInfoPtr): TSynSelectedColor; extdecl;
var
  InaStartCol: TLazSynDisplayTokenBound;
  InAnRtlInfo: TLazSynDisplayRtlInfo;
begin
  {$define handleExceptionID := 36700}
  handleExceptionBegin
  InaStartCol := TLazSynDisplayTokenBoundToPas(aStartCol);
  InAnRtlInfo := TLazSynDisplayRtlInfoToPas(AnRtlInfo);
  Result := AObj.GetMarkupAttributeAtRowCol(aRow, InaStartCol, InAnRtlInfo);
  handleExceptionEnd
end;

// function
function TSynEditMarkup_GetMarkupAttributeAtWrapEnd(AObj: TSynEditMarkup; const aRow: Integer; var aWrapCol: TLazSynDisplayTokenBoundPtr): TSynSelectedColor; extdecl;
var
  InaWrapCol: TLazSynDisplayTokenBound;
begin
  {$define handleExceptionID := 36701}
  handleExceptionBegin
  InaWrapCol := TLazSynDisplayTokenBoundToPas(aWrapCol);
  Result := AObj.GetMarkupAttributeAtWrapEnd(aRow, InaWrapCol);
  handleExceptionEnd
end;

// function
function TSynEditMarkup_RealEnabled(AObj: TSynEditMarkup): LongBool; extdecl;
begin
  {$define handleExceptionID := 36702}
  handleExceptionBegin
  Result := AObj.RealEnabled();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_PrepareMarkupForRow(AObj: TSynEditMarkup; aRow: Integer); extdecl;
begin
  {$define handleExceptionID := 36703}
  handleExceptionBegin
  AObj.PrepareMarkupForRow(aRow);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_FinishMarkupForRow(AObj: TSynEditMarkup; aRow: Integer); extdecl;
begin
  {$define handleExceptionID := 36704}
  handleExceptionBegin
  AObj.FinishMarkupForRow(aRow);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_BeginMarkup(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36705}
  handleExceptionBegin
  AObj.BeginMarkup();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_EndMarkup(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36706}
  handleExceptionBegin
  AObj.EndMarkup();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_GetNextMarkupColAfterRowCol(AObj: TSynEditMarkup; const aRow: Integer; var aStartCol: TLazSynDisplayTokenBoundPtr; var AnRtlInfo: TLazSynDisplayRtlInfoPtr; var ANextPhys: Integer; var ANextLog: Integer); extdecl;
var
  InaStartCol: TLazSynDisplayTokenBound;
  InAnRtlInfo: TLazSynDisplayRtlInfo;
  OutANextPhys: Integer;
  OutANextLog: Integer;
begin
  {$define handleExceptionID := 36707}
  handleExceptionBegin
  InaStartCol := TLazSynDisplayTokenBoundToPas(aStartCol);
  InAnRtlInfo := TLazSynDisplayRtlInfoToPas(AnRtlInfo);
  AObj.GetNextMarkupColAfterRowCol(aRow, InaStartCol, InAnRtlInfo, OutANextPhys, OutANextLog);
  ANextPhys := OutANextPhys;
  ANextLog := OutANextLog;
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_MergeMarkupAttributeAtRowCol(AObj: TSynEditMarkup; const aRow: Integer; var aStartCol: TLazSynDisplayTokenBoundPtr; var AEndCol: TLazSynDisplayTokenBoundPtr; var AnRtlInfo: TLazSynDisplayRtlInfoPtr; AMarkup: TSynSelectedColorMergeResult); extdecl;
var
  InaStartCol: TLazSynDisplayTokenBound;
  InAEndCol: TLazSynDisplayTokenBound;
  InAnRtlInfo: TLazSynDisplayRtlInfo;
begin
  {$define handleExceptionID := 36708}
  handleExceptionBegin
  InaStartCol := TLazSynDisplayTokenBoundToPas(aStartCol);
  InAEndCol := TLazSynDisplayTokenBoundToPas(AEndCol);
  InAnRtlInfo := TLazSynDisplayRtlInfoToPas(AnRtlInfo);
  AObj.MergeMarkupAttributeAtRowCol(aRow, InaStartCol, InAEndCol, InAnRtlInfo, AMarkup);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_MergeMarkupAttributeAtWrapEnd(AObj: TSynEditMarkup; const aRow: Integer; var aWrapCol: TLazSynDisplayTokenBoundPtr; AMarkup: TSynSelectedColorMergeResult); extdecl;
var
  InaWrapCol: TLazSynDisplayTokenBound;
begin
  {$define handleExceptionID := 36709}
  handleExceptionBegin
  InaWrapCol := TLazSynDisplayTokenBoundToPas(aWrapCol);
  AObj.MergeMarkupAttributeAtWrapEnd(aRow, InaWrapCol, AMarkup);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_TextChanged(AObj: TSynEditMarkup; aFirstCodeLine: Integer; aLastCodeLine: Integer; ACountDiff: Integer); extdecl;
begin
  {$define handleExceptionID := 36710}
  handleExceptionBegin
  AObj.TextChanged(aFirstCodeLine, aLastCodeLine, ACountDiff);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_TempDisable(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36711}
  handleExceptionBegin
  AObj.TempDisable();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_TempEnable(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36712}
  handleExceptionBegin
  AObj.TempEnable();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_IncPaintLock(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36713}
  handleExceptionBegin
  AObj.IncPaintLock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkup_DecPaintLock(AObj: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36714}
  handleExceptionBegin
  AObj.DecPaintLock();
  handleExceptionEnd
end;

// property
function TSynEditMarkup_MarkupInfo(AObj: TSynEditMarkup): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 36715}
  handleExceptionBegin
  Result := AObj.MarkupInfo;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_FGColor(AObj: TSynEditMarkup): TColor; extdecl;
begin
  {$define handleExceptionID := 36716}
  handleExceptionBegin
  Result := AObj.FGColor;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_BGColor(AObj: TSynEditMarkup): TColor; extdecl;
begin
  {$define handleExceptionID := 36717}
  handleExceptionBegin
  Result := AObj.BGColor;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_FrameColor(AObj: TSynEditMarkup): TColor; extdecl;
begin
  {$define handleExceptionID := 36718}
  handleExceptionBegin
  Result := AObj.FrameColor;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_FrameStyle(AObj: TSynEditMarkup): TSynLineStyle; extdecl;
begin
  {$define handleExceptionID := 36719}
  handleExceptionBegin
  Result := AObj.FrameStyle;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_Style(AObj: TSynEditMarkup): TFontStyles; extdecl;
begin
  {$define handleExceptionID := 36720}
  handleExceptionBegin
  Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_Enabled(ASet: LongBool; AObj: TSynEditMarkup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 36721}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_Lines(ASet: LongBool; AObj: TSynEditMarkup; AValue: TSynEditStringsLinked): TSynEditStringsLinked; extdecl;
begin
  {$define handleExceptionID := 36722}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Lines := AValue
  end else
    Result := AObj.Lines;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_Caret(ASet: LongBool; AObj: TSynEditMarkup; AValue: TSynEditCaret): TSynEditCaret; extdecl;
begin
  {$define handleExceptionID := 36723}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caret := AValue
  end else
    Result := AObj.Caret;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_TopLine(ASet: LongBool; AObj: TSynEditMarkup; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 36724}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopLine := AValue
  end else
    Result := AObj.TopLine;
  handleExceptionEnd
end;

// property
function TSynEditMarkup_LinesInWindow(ASet: LongBool; AObj: TSynEditMarkup; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 36725}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LinesInWindow := AValue
  end else
    Result := AObj.LinesInWindow;
  handleExceptionEnd
end;

// event
procedure TSynEditMarkup_InvalidateLinesMethod(AObj: TSynEditMarkup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTInvalidateLines}
  {$DEFINE EventName := InvalidateLinesMethod}
  LCLEventOnlyWriteMethodCode
end;

exports
  TSynEditMarkup_GetMarkupAttributeAtRowCol,
  TSynEditMarkup_GetMarkupAttributeAtWrapEnd,
  TSynEditMarkup_RealEnabled,
  TSynEditMarkup_PrepareMarkupForRow,
  TSynEditMarkup_FinishMarkupForRow,
  TSynEditMarkup_BeginMarkup,
  TSynEditMarkup_EndMarkup,
  TSynEditMarkup_GetNextMarkupColAfterRowCol,
  TSynEditMarkup_MergeMarkupAttributeAtRowCol,
  TSynEditMarkup_MergeMarkupAttributeAtWrapEnd,
  TSynEditMarkup_TextChanged,
  TSynEditMarkup_TempDisable,
  TSynEditMarkup_TempEnable,
  TSynEditMarkup_IncPaintLock,
  TSynEditMarkup_DecPaintLock,
  TSynEditMarkup_MarkupInfo,
  TSynEditMarkup_FGColor,
  TSynEditMarkup_BGColor,
  TSynEditMarkup_FrameColor,
  TSynEditMarkup_FrameStyle,
  TSynEditMarkup_Style,
  TSynEditMarkup_Enabled,
  TSynEditMarkup_Lines,
  TSynEditMarkup_Caret,
  TSynEditMarkup_TopLine,
  TSynEditMarkup_LinesInWindow,
  TSynEditMarkup_InvalidateLinesMethod;