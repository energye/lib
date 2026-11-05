// function
function TSynEditBase_FindGutterFromGutterPartList(AObj: TSynEditBase; const APartList: TObject): TObject; extdecl;
begin
  {$define handleExceptionID := 35300}
  handleExceptionBegin
  Result := AObj.FindGutterFromGutterPartList(APartList);
  handleExceptionEnd
end;

// function
function TSynEditBase_CaretXPix(AObj: TSynEditBase): Integer; extdecl;
begin
  {$define handleExceptionID := 35301}
  handleExceptionBegin
  Result := AObj.CaretXPix();
  handleExceptionEnd
end;

// function
function TSynEditBase_CaretYPix(AObj: TSynEditBase): Integer; extdecl;
begin
  {$define handleExceptionID := 35302}
  handleExceptionBegin
  Result := AObj.CaretYPix();
  handleExceptionEnd
end;

// function
function TSynEditBase_ScreenXYToTextXY(AObj: TSynEditBase; AScreenXY: TPhysPoint; LimitToLines: LongBool): TPhysPoint; extdecl;
begin
  {$define handleExceptionID := 35303}
  handleExceptionBegin
  Result := AObj.ScreenXYToTextXY(AScreenXY, LimitToLines);
  handleExceptionEnd
end;

// function
function TSynEditBase_TextXYToScreenXY(AObj: TSynEditBase; APhysTextXY: TPhysPoint): TPhysPoint; extdecl;
begin
  {$define handleExceptionID := 35304}
  handleExceptionBegin
  Result := AObj.TextXYToScreenXY(APhysTextXY);
  handleExceptionEnd
end;

// function
procedure TSynEditBase_GetWordAtRowCol(AObj: TSynEditBase; var XY: TPoint;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35305}
  handleExceptionBegin
  StringBufferCreate(AObj.GetWordAtRowCol(XY), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TSynEditBase_FindMatchingBracketWithPointBoolX4(AObj: TSynEditBase; var PhysStartBracket: TPoint; StartIncludeNeighborChars: LongBool; MoveCaret: LongBool; SelectBrackets: LongBool; OnlyVisible: LongBool; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35306}
  handleExceptionBegin
  Result := AObj.FindMatchingBracket(PhysStartBracket, StartIncludeNeighborChars, MoveCaret, SelectBrackets, OnlyVisible);
  handleExceptionEnd
end;

// function
procedure TSynEditBase_FindMatchingBracketLogical(AObj: TSynEditBase; var LogicalStartBracket: TPoint; StartIncludeNeighborChars: LongBool; MoveCaret: LongBool; SelectBrackets: LongBool; OnlyVisible: LongBool; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35307}
  handleExceptionBegin
  Result := AObj.FindMatchingBracketLogical(LogicalStartBracket, StartIncludeNeighborChars, MoveCaret, SelectBrackets, OnlyVisible);
  handleExceptionEnd
end;

// function
function TSynEditBase_IsLinkable(AObj: TSynEditBase; Y: Integer; X1: Integer; X2: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 35308}
  handleExceptionBegin
  Result := AObj.IsLinkable(Y, X1, X2);
  handleExceptionEnd
end;

// function
function TSynEditBase_GetLineState(AObj: TSynEditBase; ALine: Integer): TSynLineState; extdecl;
begin
  {$define handleExceptionID := 35309}
  handleExceptionBegin
  Result := AObj.GetLineState(ALine);
  handleExceptionEnd
end;

// function
procedure TSynEditBase_LogicalToPhysicalPos(AObj: TSynEditBase; var p: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35310}
  handleExceptionBegin
  Result := AObj.LogicalToPhysicalPos(p);
  handleExceptionEnd
end;

// function
function TSynEditBase_LogicalToPhysicalCol(AObj: TSynEditBase; const Line: PChar; Index: integer; LogicalPos: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35311}
  handleExceptionBegin
  Result := AObj.LogicalToPhysicalCol(Line, Index, LogicalPos);
  handleExceptionEnd
end;

// function
procedure TSynEditBase_PhysicalToLogicalPos(AObj: TSynEditBase; var p: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35312}
  handleExceptionBegin
  Result := AObj.PhysicalToLogicalPos(p);
  handleExceptionEnd
end;

// function
function TSynEditBase_PhysicalToLogicalCol(AObj: TSynEditBase; const Line: PChar; Index: integer; PhysicalPos: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35313}
  handleExceptionBegin
  Result := AObj.PhysicalToLogicalCol(Line, Index, PhysicalPos);
  handleExceptionEnd
end;

// function
function TSynEditBase_PhysicalLineLength(AObj: TSynEditBase; Line: PChar; Index: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35314}
  handleExceptionBegin
  Result := AObj.PhysicalLineLength(Line, Index);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_GetWordBoundsAtRowCol(AObj: TSynEditBase; var XY: TPoint; var StartX: integer; var EndX: integer); extdecl;
var
  OutStartX: integer;
  OutEndX: integer;
begin
  {$define handleExceptionID := 35315}
  handleExceptionBegin
  AObj.GetWordBoundsAtRowCol(XY, OutStartX, OutEndX);
  StartX := OutStartX;
  EndX := OutEndX;
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_UpdateCursorOverride(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35316}
  handleExceptionBegin
  AObj.UpdateCursorOverride();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_BeginUndoBlock(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35317}
  handleExceptionBegin
  AObj.BeginUndoBlock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_BeginUpdate(AObj: TSynEditBase; WithUndoBlock: LongBool); extdecl;
begin
  {$define handleExceptionID := 35318}
  handleExceptionBegin
  AObj.BeginUpdate(WithUndoBlock);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_EndUndoBlock(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35319}
  handleExceptionBegin
  AObj.EndUndoBlock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_EndUpdate(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35320}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_ClearUndo(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35321}
  handleExceptionBegin
  AObj.ClearUndo();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_Redo(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35322}
  handleExceptionBegin
  AObj.Redo();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_Undo(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35323}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_FindMatchingBracket(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35324}
  handleExceptionBegin
  AObj.FindMatchingBracket();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_InvalidateGutter(AObj: TSynEditBase); extdecl;
begin
  {$define handleExceptionID := 35325}
  handleExceptionBegin
  AObj.InvalidateGutter();
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_InvalidateLine(AObj: TSynEditBase; Line: integer); extdecl;
begin
  {$define handleExceptionID := 35326}
  handleExceptionBegin
  AObj.InvalidateLine(Line);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_InvalidateGutterLines(AObj: TSynEditBase; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 35327}
  handleExceptionBegin
  AObj.InvalidateGutterLines(FirstLine, LastLine);
  handleExceptionEnd
end;

// procedure
procedure TSynEditBase_InvalidateLines(AObj: TSynEditBase; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 35328}
  handleExceptionBegin
  AObj.InvalidateLines(FirstLine, LastLine);
  handleExceptionEnd
end;

// property
function TSynEditBase_CanRedo(AObj: TSynEditBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 35329}
  handleExceptionBegin
  Result := AObj.CanRedo;
  handleExceptionEnd
end;

// property
function TSynEditBase_CanUndo(AObj: TSynEditBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 35330}
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

// property
function TSynEditBase_BookMarkOptions(ASet: LongBool; AObj: TSynEditBase; AValue: TSynBookMarkOpt): TSynBookMarkOpt; extdecl;
begin
  {$define handleExceptionID := 35331}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BookMarkOptions := AValue
  end else
    Result := AObj.BookMarkOptions;
  handleExceptionEnd
end;

// property
function TSynEditBase_ExtraCharSpacing(ASet: LongBool; AObj: TSynEditBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35332}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraCharSpacing := AValue
  end else
    Result := AObj.ExtraCharSpacing;
  handleExceptionEnd
end;

// property
function TSynEditBase_ExtraLineSpacing(ASet: LongBool; AObj: TSynEditBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35333}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraLineSpacing := AValue
  end else
    Result := AObj.ExtraLineSpacing;
  handleExceptionEnd
end;

// property
function TSynEditBase_Lines(ASet: LongBool; AObj: TSynEditBase; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 35334}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Lines := AValue
  end else
    Result := AObj.Lines;
  handleExceptionEnd
end;

// property
function TSynEditBase_Options(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditorOptions): TSynEditorOptions; extdecl;
begin
  {$define handleExceptionID := 35335}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TSynEditBase_Options2(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditorOptions2): TSynEditorOptions2; extdecl;
begin
  {$define handleExceptionID := 35336}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options2 := AValue
  end else
    Result := AObj.Options2;
  handleExceptionEnd
end;

// property
function TSynEditBase_ReadOnly(ASet: LongBool; AObj: TSynEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35337}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TSynEditBase_Modified(ASet: LongBool; AObj: TSynEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35338}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
function TSynEditBase_CaretX(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35339}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaretX := AValue
  end else
    Result := AObj.CaretX;
  handleExceptionEnd
end;

// property
function TSynEditBase_CaretY(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35340}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaretY := AValue
  end else
    Result := AObj.CaretY;
  handleExceptionEnd
end;

// property
procedure TSynEditBase_CaretXY(ASet: LongBool; AObj: TSynEditBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35341}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaretXY := AValue
  end else
    Result := AObj.CaretXY;
  handleExceptionEnd
end;

// property
procedure TSynEditBase_LogicalCaretXY(ASet: LongBool; AObj: TSynEditBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35342}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LogicalCaretXY := AValue
  end else
    Result := AObj.LogicalCaretXY;
  handleExceptionEnd
end;

// property
function TSynEditBase_CharsInWindow(AObj: TSynEditBase): Integer; extdecl;
begin
  {$define handleExceptionID := 35343}
  handleExceptionBegin
  Result := AObj.CharsInWindow;
  handleExceptionEnd
end;

// property
function TSynEditBase_CharWidth(AObj: TSynEditBase): integer; extdecl;
begin
  {$define handleExceptionID := 35344}
  handleExceptionBegin
  Result := AObj.CharWidth;
  handleExceptionEnd
end;

// property
function TSynEditBase_LeftChar(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35345}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftChar := AValue
  end else
    Result := AObj.LeftChar;
  handleExceptionEnd
end;

// property
function TSynEditBase_LineHeight(AObj: TSynEditBase): integer; extdecl;
begin
  {$define handleExceptionID := 35346}
  handleExceptionBegin
  Result := AObj.LineHeight;
  handleExceptionEnd
end;

// property
function TSynEditBase_LinesInWindow(AObj: TSynEditBase): Integer; extdecl;
begin
  {$define handleExceptionID := 35347}
  handleExceptionBegin
  Result := AObj.LinesInWindow;
  handleExceptionEnd
end;

// property
function TSynEditBase_TopLine(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35348}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopLine := AValue
  end else
    Result := AObj.TopLine;
  handleExceptionEnd
end;

// property
procedure TSynEditBase_BlockBegin(ASet: LongBool; AObj: TSynEditBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35349}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlockBegin := AValue
  end else
    Result := AObj.BlockBegin;
  handleExceptionEnd
end;

// property
procedure TSynEditBase_BlockEnd(ASet: LongBool; AObj: TSynEditBase; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35350}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlockEnd := AValue
  end else
    Result := AObj.BlockEnd;
  handleExceptionEnd
end;

// property
function TSynEditBase_SelStart(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35351}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelStart := AValue
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

// property
function TSynEditBase_SelEnd(ASet: LongBool; AObj: TSynEditBase; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35352}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelEnd := AValue
  end else
    Result := AObj.SelEnd;
  handleExceptionEnd
end;

// property
function TSynEditBase_IsBackwardSel(AObj: TSynEditBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 35353}
  handleExceptionBegin
  Result := AObj.IsBackwardSel;
  handleExceptionEnd
end;

// property
procedure TSynEditBase_SelText(ASet: LongBool; AObj: TSynEditBase; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35354}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelText := AValue
  end else
    StringBufferCreate(AObj.SelText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynEditBase_MouseActions(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 35355}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActions := AValue
  end else
    Result := AObj.MouseActions;
  handleExceptionEnd
end;

// property
function TSynEditBase_MouseSelActions(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 35356}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseSelActions := AValue
  end else
    Result := AObj.MouseSelActions;
  handleExceptionEnd
end;

// property
function TSynEditBase_MouseTextActions(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 35357}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseTextActions := AValue
  end else
    Result := AObj.MouseTextActions;
  handleExceptionEnd
end;

// property
function TSynEditBase_MouseOptions(ASet: LongBool; AObj: TSynEditBase; AValue: TSynEditorMouseOptions): TSynEditorMouseOptions; extdecl;
begin
  {$define handleExceptionID := 35358}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseOptions := AValue
  end else
    Result := AObj.MouseOptions;
  handleExceptionEnd
end;

// property
function TSynEditBase_TextViewsManager(AObj: TSynEditBase): TSynTextViewsManager; extdecl;
begin
  {$define handleExceptionID := 35359}
  handleExceptionBegin
  Result := AObj.TextViewsManager;
  handleExceptionEnd
end;

// property
function TSynEditBase_SelectedColor(ASet: LongBool; AObj: TSynEditBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35360}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedColor := AValue
  end else
    Result := AObj.SelectedColor;
  handleExceptionEnd
end;

// property
function TSynEditBase_SelAvail(AObj: TSynEditBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 35361}
  handleExceptionBegin
  Result := AObj.SelAvail;
  handleExceptionEnd
end;

// property
function TSynEditBase_HideSelection(ASet: LongBool; AObj: TSynEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35362}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideSelection := AValue
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

// property
function TSynEditBase_HighlighterToObject(AObj: TSynEditBase): TObject; extdecl;
begin
  {$define handleExceptionID := 35363}
  handleExceptionBegin
  Result := AObj.Highlighter;
  handleExceptionEnd
end;

// property
function TSynEditBase_MarksToObject(AObj: TSynEditBase): TObject; extdecl;
begin
  {$define handleExceptionID := 35364}
  handleExceptionBegin
  Result := AObj.Marks;
  handleExceptionEnd
end;

exports
  TSynEditBase_FindGutterFromGutterPartList,
  TSynEditBase_CaretXPix,
  TSynEditBase_CaretYPix,
  TSynEditBase_ScreenXYToTextXY,
  TSynEditBase_TextXYToScreenXY,
  TSynEditBase_GetWordAtRowCol,
  TSynEditBase_FindMatchingBracketWithPointBoolX4,
  TSynEditBase_FindMatchingBracketLogical,
  TSynEditBase_IsLinkable,
  TSynEditBase_GetLineState,
  TSynEditBase_LogicalToPhysicalPos,
  TSynEditBase_LogicalToPhysicalCol,
  TSynEditBase_PhysicalToLogicalPos,
  TSynEditBase_PhysicalToLogicalCol,
  TSynEditBase_PhysicalLineLength,
  TSynEditBase_GetWordBoundsAtRowCol,
  TSynEditBase_UpdateCursorOverride,
  TSynEditBase_BeginUndoBlock,
  TSynEditBase_BeginUpdate,
  TSynEditBase_EndUndoBlock,
  TSynEditBase_EndUpdate,
  TSynEditBase_ClearUndo,
  TSynEditBase_Redo,
  TSynEditBase_Undo,
  TSynEditBase_FindMatchingBracket,
  TSynEditBase_InvalidateGutter,
  TSynEditBase_InvalidateLine,
  TSynEditBase_InvalidateGutterLines,
  TSynEditBase_InvalidateLines,
  TSynEditBase_CanRedo,
  TSynEditBase_CanUndo,
  TSynEditBase_BookMarkOptions,
  TSynEditBase_ExtraCharSpacing,
  TSynEditBase_ExtraLineSpacing,
  TSynEditBase_Lines,
  TSynEditBase_Options,
  TSynEditBase_Options2,
  TSynEditBase_ReadOnly,
  TSynEditBase_Modified,
  TSynEditBase_CaretX,
  TSynEditBase_CaretY,
  TSynEditBase_CaretXY,
  TSynEditBase_LogicalCaretXY,
  TSynEditBase_CharsInWindow,
  TSynEditBase_CharWidth,
  TSynEditBase_LeftChar,
  TSynEditBase_LineHeight,
  TSynEditBase_LinesInWindow,
  TSynEditBase_TopLine,
  TSynEditBase_BlockBegin,
  TSynEditBase_BlockEnd,
  TSynEditBase_SelStart,
  TSynEditBase_SelEnd,
  TSynEditBase_IsBackwardSel,
  TSynEditBase_SelText,
  TSynEditBase_MouseActions,
  TSynEditBase_MouseSelActions,
  TSynEditBase_MouseTextActions,
  TSynEditBase_MouseOptions,
  TSynEditBase_TextViewsManager,
  TSynEditBase_SelectedColor,
  TSynEditBase_SelAvail,
  TSynEditBase_HideSelection,
  TSynEditBase_HighlighterToObject,
  TSynEditBase_MarksToObject;