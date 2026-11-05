// function
function TSynEditStrings_IsUpdating(AObj: TSynEditStrings): LongBool; extdecl;
begin
  {$define handleExceptionID := 38100}
  handleExceptionBegin
  Result := AObj.IsUpdating();
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicPosAddCharsWithStrIntX2LPFlags(AObj: TSynEditStrings; const ALine: PChar; ALogicalPos: integer; ACount: integer; AFlags: LPosFlags): Integer; extdecl;
begin
  {$define handleExceptionID := 38101}
  handleExceptionBegin
  Result := AObj.LogicPosAddChars(ALine, ALogicalPos, ACount, AFlags);
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicPosIsAtChar(AObj: TSynEditStrings; const ALine: PChar; ALogicalPos: integer; AFlags: LPosFlags): LongBool; extdecl;
begin
  {$define handleExceptionID := 38102}
  handleExceptionBegin
  Result := AObj.LogicPosIsAtChar(ALine, ALogicalPos, AFlags);
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicPosAdjustToCharWithStrIntLPFlags(AObj: TSynEditStrings; const ALine: PChar; ALogicalPos: integer; AFlags: LPosFlags): Integer; extdecl;
begin
  {$define handleExceptionID := 38103}
  handleExceptionBegin
  Result := AObj.LogicPosAdjustToChar(ALine, ALogicalPos, AFlags);
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicPosAddCharsWithStrIntX2Bool(AObj: TSynEditStrings; const ALine: PChar; ALogicalPos: integer; ACount: integer; AllowPastEOL: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 38104}
  handleExceptionBegin
  Result := AObj.LogicPosAddChars(ALine, ALogicalPos, ACount, AllowPastEOL);
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicPosAdjustToCharWithStrIntBoolX2(AObj: TSynEditStrings; const ALine: PChar; ALogicalPos: integer; ANext: LongBool; AllowPastEOL: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 38105}
  handleExceptionBegin
  Result := AObj.LogicPosAdjustToChar(ALine, ALogicalPos, ANext, AllowPastEOL);
  handleExceptionEnd
end;

// function
function TSynEditStrings_GetPhysicalCharWidthsWithInt(AObj: TSynEditStrings; Index: Integer): TByteArrayWrap; extdecl;
begin
  {$define handleExceptionID := 38106}
  handleExceptionBegin
  Result := TByteArrayWrap.Create(AObj.GetPhysicalCharWidths(Index));
  handleExceptionEnd
end;

// function
function TSynEditStrings_GetPhysicalCharWidthsWithStrIntX2(AObj: TSynEditStrings; Line: PChar; LineLen: Integer; Index: Integer): TByteArrayWrap; extdecl;
begin
  {$define handleExceptionID := 38107}
  handleExceptionBegin
  Result := TByteArrayWrap.Create(AObj.GetPhysicalCharWidths(Line, LineLen, Index));
  handleExceptionEnd
end;

// function
procedure TSynEditStrings_LogicalToPhysicalPos(AObj: TSynEditStrings; var p: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 38108}
  handleExceptionBegin
  Result := AObj.LogicalToPhysicalPos(p);
  handleExceptionEnd
end;

// function
function TSynEditStrings_LogicalToPhysicalCol(AObj: TSynEditStrings; const Line: PChar; Index: integer; LogicalPos: integer): integer; extdecl;
begin
  {$define handleExceptionID := 38109}
  handleExceptionBegin
  Result := AObj.LogicalToPhysicalCol(Line, Index, LogicalPos);
  handleExceptionEnd
end;

// function
procedure TSynEditStrings_PhysicalToLogicalPos(AObj: TSynEditStrings; var p: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 38110}
  handleExceptionBegin
  Result := AObj.PhysicalToLogicalPos(p);
  handleExceptionEnd
end;

// function
function TSynEditStrings_PhysicalToLogicalCol(AObj: TSynEditStrings; const Line: PChar; Index: integer; PhysicalPos: integer): integer; extdecl;
begin
  {$define handleExceptionID := 38111}
  handleExceptionBegin
  Result := AObj.PhysicalToLogicalCol(Line, Index, PhysicalPos);
  handleExceptionEnd
end;

// function
function TSynEditStrings_TextToViewIndex(AObj: TSynEditStrings; aTextIndex: TLineIdx): TLineIdx; extdecl;
begin
  {$define handleExceptionID := 38112}
  handleExceptionBegin
  Result := AObj.TextToViewIndex(aTextIndex);
  handleExceptionEnd
end;

// function
function TSynEditStrings_ViewToTextIndex(AObj: TSynEditStrings; aViewIndex: TLineIdx): TLineIdx; extdecl;
begin
  {$define handleExceptionID := 38113}
  handleExceptionBegin
  Result := AObj.ViewToTextIndex(aViewIndex);
  handleExceptionEnd
end;

// function
function TSynEditStrings_AddVisibleOffsetToTextIndex(AObj: TSynEditStrings; aTextIndex: TLineIdx; LineOffset: Integer): TLineIdx; extdecl;
begin
  {$define handleExceptionID := 38114}
  handleExceptionBegin
  Result := AObj.AddVisibleOffsetToTextIndex(aTextIndex, LineOffset);
  handleExceptionEnd
end;

// function
function TSynEditStrings_IsTextIdxVisible(AObj: TSynEditStrings; aTextIndex: TLineIdx): LongBool; extdecl;
begin
  {$define handleExceptionID := 38115}
  handleExceptionBegin
  Result := AObj.IsTextIdxVisible(aTextIndex);
  handleExceptionEnd
end;

// function
function TSynEditStrings_ViewXYToTextXY(AObj: TSynEditStrings; APhysViewXY: TPhysPoint): TPhysPoint; extdecl;
begin
  {$define handleExceptionID := 38116}
  handleExceptionBegin
  Result := AObj.ViewXYToTextXY(APhysViewXY);
  handleExceptionEnd
end;

// function
function TSynEditStrings_TextXYToViewXY(AObj: TSynEditStrings; APhysTextXY: TPhysPoint): TPhysPoint; extdecl;
begin
  {$define handleExceptionID := 38117}
  handleExceptionBegin
  Result := AObj.TextXYToViewXY(APhysTextXY);
  handleExceptionEnd
end;

// function
procedure TSynEditStrings_EditDelete(AObj: TSynEditStrings; LogX: Integer; LogY: Integer; ByteLen: Integer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 38118}
  handleExceptionBegin
  StringBufferCreate(AObj.EditDelete(LogX, LogY, ByteLen), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TSynEditStrings_EditReplace(AObj: TSynEditStrings; LogX: Integer; LogY: Integer; ByteLen: Integer; AText: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 38119}
  handleExceptionBegin
  StringBufferCreate(AObj.EditReplace(LogX, LogY, ByteLen, AText), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_BeginUpdateWithObject(AObj: TSynEditStrings; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 38120}
  handleExceptionBegin
  AObj.BeginUpdate(Sender);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EndUpdateWithObject(AObj: TSynEditStrings; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 38121}
  handleExceptionBegin
  AObj.EndUpdate(Sender);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_DeleteLines(AObj: TSynEditStrings; Index: integer; NumLines: integer); extdecl;
begin
  {$define handleExceptionID := 38122}
  handleExceptionBegin
  AObj.DeleteLines(Index, NumLines);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_InsertLines(AObj: TSynEditStrings; Index: integer; NumLines: integer); extdecl;
begin
  {$define handleExceptionID := 38123}
  handleExceptionBegin
  AObj.InsertLines(Index, NumLines);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_InsertStrings(AObj: TSynEditStrings; Index: integer; NewStrings: TStrings); extdecl;
begin
  {$define handleExceptionID := 38124}
  handleExceptionBegin
  AObj.InsertStrings(Index, NewStrings);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_SendNotificationWithSENReasonSEStringsIntX2(AObj: TSynEditStrings; AReason: TSynEditNotifyReason; ASender: TSynEditStrings; aIndex: Integer; aCount: Integer); extdecl;
begin
  {$define handleExceptionID := 38125}
  handleExceptionBegin
  AObj.SendNotification(AReason, ASender, aIndex, aCount);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_SendNotificationWithSENReasonSEStringsIntX4Str(AObj: TSynEditStrings; AReason: TSynEditNotifyReason; ASender: TSynEditStrings; aIndex: Integer; aCount: Integer; aBytePos: Integer; aLen: Integer; aTxt: PChar); extdecl;
begin
  {$define handleExceptionID := 38126}
  handleExceptionBegin
  AObj.SendNotification(AReason, ASender, aIndex, aCount, aBytePos, aLen, aTxt);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_SendNotificationWithSynEditNotifyReasonObject(AObj: TSynEditStrings; AReason: TSynEditNotifyReason; ASender: TObject); extdecl;
begin
  {$define handleExceptionID := 38127}
  handleExceptionBegin
  AObj.SendNotification(AReason, ASender);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_FlushNotificationCache(AObj: TSynEditStrings); extdecl;
begin
  {$define handleExceptionID := 38128}
  handleExceptionBegin
  AObj.FlushNotificationCache();
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_GetPhysicalCharWidthsWithIntX2PCWidths(AObj: TSynEditStrings; Index: Integer; var AResult: TByteArrayWrap; var ALen: Integer); extdecl;
var
  OutAResult: TPhysicalCharWidths = nil;
  OutALen: Integer;
begin
  {$define handleExceptionID := 38129}
  handleExceptionBegin
  AObj.GetPhysicalCharWidths(Index, OutAResult, OutALen);
  AResult := TByteArrayWrap.Create(OutAResult);
  ALen := OutALen;
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_GetInfoForViewedXY(AObj: TSynEditStrings; AViewedXY: TPhysPoint; AFlags: TViewedXYInfoFlags; var AViewedXYInfo: TViewedXYInfoPtr); extdecl;
var
  OutAViewedXYInfo: TViewedXYInfo;
begin
  {$define handleExceptionID := 38130}
  handleExceptionBegin
  AObj.GetInfoForViewedXY(AViewedXY, AFlags, OutAViewedXYInfo);
  AViewedXYInfo := TViewedXYInfoToGo(OutAViewedXYInfo);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditInsert(AObj: TSynEditStrings; LogX: Integer; LogY: Integer; AText: PChar); extdecl;
begin
  {$define handleExceptionID := 38131}
  handleExceptionBegin
  AObj.EditInsert(LogX, LogY, AText);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditLineBreak(AObj: TSynEditStrings; LogX: Integer; LogY: Integer); extdecl;
begin
  {$define handleExceptionID := 38132}
  handleExceptionBegin
  AObj.EditLineBreak(LogX, LogY);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditLineJoin(AObj: TSynEditStrings; LogY: Integer; FillText: PChar); extdecl;
begin
  {$define handleExceptionID := 38133}
  handleExceptionBegin
  AObj.EditLineJoin(LogY, FillText);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditLinesInsert(AObj: TSynEditStrings; LogY: Integer; ACount: Integer; AText: PChar); extdecl;
begin
  {$define handleExceptionID := 38134}
  handleExceptionBegin
  AObj.EditLinesInsert(LogY, ACount, AText);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditLinesDelete(AObj: TSynEditStrings; LogY: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 38135}
  handleExceptionBegin
  AObj.EditLinesDelete(LogY, ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditUndo(AObj: TSynEditStrings; Item: TSynEditUndoItem); extdecl;
begin
  {$define handleExceptionID := 38136}
  handleExceptionBegin
  AObj.EditUndo(Item);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStrings_EditRedo(AObj: TSynEditStrings; Item: TSynEditUndoItem); extdecl;
begin
  {$define handleExceptionID := 38137}
  handleExceptionBegin
  AObj.EditRedo(Item);
  handleExceptionEnd
end;

// property
function TSynEditStrings_LogPhysConvertor(ASet: LongBool; AObj: TSynEditStrings; AValue: TSynLogicalPhysicalConvertor): TSynLogicalPhysicalConvertor; extdecl;
begin
  {$define handleExceptionID := 38138}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogPhysConvertor := AValue
  end else
    Result := AObj.LogPhysConvertor;
  handleExceptionEnd
end;

// property
function TSynEditStrings_IsInEditAction(AObj: TSynEditStrings): LongBool; extdecl;
begin
  {$define handleExceptionID := 38139}
  handleExceptionBegin
  Result := AObj.IsInEditAction;
  handleExceptionEnd
end;

// property
function TSynEditStrings_UndoList(AObj: TSynEditStrings): TSynEditUndoList; extdecl;
begin
  {$define handleExceptionID := 38140}
  handleExceptionBegin
  Result := AObj.UndoList;
  handleExceptionEnd
end;

// property
function TSynEditStrings_RedoList(AObj: TSynEditStrings): TSynEditUndoList; extdecl;
begin
  {$define handleExceptionID := 38141}
  handleExceptionBegin
  Result := AObj.RedoList;
  handleExceptionEnd
end;

// property
function TSynEditStrings_CurUndoList(AObj: TSynEditStrings): TSynEditUndoList; extdecl;
begin
  {$define handleExceptionID := 38142}
  handleExceptionBegin
  Result := AObj.CurUndoList;
  handleExceptionEnd
end;

// property
function TSynEditStrings_IsUndoing(ASet: LongBool; AObj: TSynEditStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 38143}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsUndoing := AValue
  end else
    Result := AObj.IsUndoing;
  handleExceptionEnd
end;

// property
function TSynEditStrings_IsRedoing(ASet: LongBool; AObj: TSynEditStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 38144}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsRedoing := AValue
  end else
    Result := AObj.IsRedoing;
  handleExceptionEnd
end;

// property
procedure TSynEditStrings_TextChangeStamp(AObj: TSynEditStrings; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 38145}
  handleExceptionBegin
  Result := AObj.TextChangeStamp;
  handleExceptionEnd
end;

// property
procedure TSynEditStrings_ViewChangeStamp(AObj: TSynEditStrings; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 38146}
  handleExceptionBegin
  Result := AObj.ViewChangeStamp;
  handleExceptionEnd
end;

// property
function TSynEditStrings_LengthOfLongestLine(AObj: TSynEditStrings): integer; extdecl;
begin
  {$define handleExceptionID := 38147}
  handleExceptionBegin
  Result := AObj.LengthOfLongestLine;
  handleExceptionEnd
end;

// property
procedure TSynEditStrings_ViewedLines(AObj: TSynEditStrings; Index: integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 38148}
  handleExceptionBegin
  StringBufferCreate(AObj.ViewedLines[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynEditStrings_ViewedCount(AObj: TSynEditStrings): Integer; extdecl;
begin
  {$define handleExceptionID := 38149}
  handleExceptionBegin
  Result := AObj.ViewedCount;
  handleExceptionEnd
end;

// property
function TSynEditStrings_IsUtf8(ASet: LongBool; AObj: TSynEditStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 38150}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsUtf8 := AValue
  end else
    Result := AObj.IsUtf8;
  handleExceptionEnd
end;

// property
function TSynEditStrings_DisplayView(AObj: TSynEditStrings): TLazSynDisplayView; extdecl;
begin
  {$define handleExceptionID := 38151}
  handleExceptionBegin
  Result := AObj.DisplayView;
  handleExceptionEnd
end;

exports
  TSynEditStrings_IsUpdating,
  TSynEditStrings_LogicPosAddCharsWithStrIntX2LPFlags,
  TSynEditStrings_LogicPosIsAtChar,
  TSynEditStrings_LogicPosAdjustToCharWithStrIntLPFlags,
  TSynEditStrings_LogicPosAddCharsWithStrIntX2Bool,
  TSynEditStrings_LogicPosAdjustToCharWithStrIntBoolX2,
  TSynEditStrings_GetPhysicalCharWidthsWithInt,
  TSynEditStrings_GetPhysicalCharWidthsWithStrIntX2,
  TSynEditStrings_LogicalToPhysicalPos,
  TSynEditStrings_LogicalToPhysicalCol,
  TSynEditStrings_PhysicalToLogicalPos,
  TSynEditStrings_PhysicalToLogicalCol,
  TSynEditStrings_TextToViewIndex,
  TSynEditStrings_ViewToTextIndex,
  TSynEditStrings_AddVisibleOffsetToTextIndex,
  TSynEditStrings_IsTextIdxVisible,
  TSynEditStrings_ViewXYToTextXY,
  TSynEditStrings_TextXYToViewXY,
  TSynEditStrings_EditDelete,
  TSynEditStrings_EditReplace,
  TSynEditStrings_BeginUpdateWithObject,
  TSynEditStrings_EndUpdateWithObject,
  TSynEditStrings_DeleteLines,
  TSynEditStrings_InsertLines,
  TSynEditStrings_InsertStrings,
  TSynEditStrings_SendNotificationWithSENReasonSEStringsIntX2,
  TSynEditStrings_SendNotificationWithSENReasonSEStringsIntX4Str,
  TSynEditStrings_SendNotificationWithSynEditNotifyReasonObject,
  TSynEditStrings_FlushNotificationCache,
  TSynEditStrings_GetPhysicalCharWidthsWithIntX2PCWidths,
  TSynEditStrings_GetInfoForViewedXY,
  TSynEditStrings_EditInsert,
  TSynEditStrings_EditLineBreak,
  TSynEditStrings_EditLineJoin,
  TSynEditStrings_EditLinesInsert,
  TSynEditStrings_EditLinesDelete,
  TSynEditStrings_EditUndo,
  TSynEditStrings_EditRedo,
  TSynEditStrings_LogPhysConvertor,
  TSynEditStrings_IsInEditAction,
  TSynEditStrings_UndoList,
  TSynEditStrings_RedoList,
  TSynEditStrings_CurUndoList,
  TSynEditStrings_IsUndoing,
  TSynEditStrings_IsRedoing,
  TSynEditStrings_TextChangeStamp,
  TSynEditStrings_ViewChangeStamp,
  TSynEditStrings_LengthOfLongestLine,
  TSynEditStrings_ViewedLines,
  TSynEditStrings_ViewedCount,
  TSynEditStrings_IsUtf8,
  TSynEditStrings_DisplayView;