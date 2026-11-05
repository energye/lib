// constructor
function TCustomSynEdit_Create(AOwner: TComponent): TCustomSynEdit; extdecl;
begin
  {$define handleExceptionID := 35400}
  handleExceptionBegin
  Result := TCustomSynEdit.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_HasText(AObj: TCustomSynEdit; AFlags: TSynEditHasTextFlags): LongBool; extdecl;
begin
  {$define handleExceptionID := 35401}
  handleExceptionBegin
  Result := AObj.HasText(AFlags);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_GetBookMarkWithIntX3(AObj: TCustomSynEdit; BookMark: integer; var X: integer; var Y: integer): LongBool; extdecl;
var
  OutX: integer;
  OutY: integer;
begin
  {$define handleExceptionID := 35402}
  handleExceptionBegin
  OutX := X;
  OutY := Y;
  Result := AObj.GetBookMark(BookMark, OutX, OutY);
  X := OutX;
  Y := OutY;
  handleExceptionEnd
end;

// function
function TCustomSynEdit_GetBookMarkWithIntX5(AObj: TCustomSynEdit; BookMark: integer; var X: integer; var Y: integer; var ALeft: integer; var ATop: integer): LongBool; extdecl;
var
  OutX: integer;
  OutY: integer;
  OutALeft: integer;
  OutATop: integer;
begin
  {$define handleExceptionID := 35403}
  handleExceptionBegin
  OutX := X;
  OutY := Y;
  OutALeft := ALeft;
  OutATop := ATop;
  Result := AObj.GetBookMark(BookMark, OutX, OutY, OutALeft, OutATop);
  X := OutX;
  Y := OutY;
  ALeft := OutALeft;
  ATop := OutATop;
  handleExceptionEnd
end;

// function
function TCustomSynEdit_IsBookmark(AObj: TCustomSynEdit; BookMark: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 35404}
  handleExceptionBegin
  Result := AObj.IsBookmark(BookMark);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_GetHighlighterAttriAtRowCol(AObj: TCustomSynEdit; var XY: TPoint; var Token: PChar; var Attri: TSynHighlighterAttributes): LongBool; extdecl;
var
  OutToken: string;
  OutAttri: TSynHighlighterAttributes;
begin
  {$define handleExceptionID := 35405}
  handleExceptionBegin
  Result := AObj.GetHighlighterAttriAtRowCol(XY, OutToken, OutAttri);
  Token := ToPChar(OutToken);
  Attri := OutAttri;
  handleExceptionEnd
end;

// function
function TCustomSynEdit_GetHighlighterAttriAtRowColExWithPointStrIntX2SHAttributesBool(AObj: TCustomSynEdit; var XY: TPoint; var Token: PChar; var TokenType: Integer; var Start: Integer; var Attri: TSynHighlighterAttributes; ContinueIfPossible: LongBool): LongBool; extdecl;
var
  OutToken: string;
  OutTokenType: Integer;
  OutStart: Integer;
  OutAttri: TSynHighlighterAttributes;
begin
  {$define handleExceptionID := 35406}
  handleExceptionBegin
  Result := AObj.GetHighlighterAttriAtRowColEx(XY, OutToken, OutTokenType, OutStart, OutAttri, ContinueIfPossible);
  Token := ToPChar(OutToken);
  TokenType := OutTokenType;
  Start := OutStart;
  Attri := OutAttri;
  handleExceptionEnd
end;

// function
function TCustomSynEdit_GetHighlighterAttriAtRowColExWithPointIntBool(AObj: TCustomSynEdit; var XY: TPoint; var TokenType: Integer; ContinueIfPossible: LongBool): LongBool; extdecl;
var
  OutTokenType: Integer;
begin
  {$define handleExceptionID := 35407}
  handleExceptionBegin
  Result := AObj.GetHighlighterAttriAtRowColEx(XY, OutTokenType, ContinueIfPossible);
  TokenType := OutTokenType;
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_NextWordPos(AObj: TCustomSynEdit; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35408}
  handleExceptionBegin
  Result := AObj.NextWordPos();
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_PrevWordPos(AObj: TCustomSynEdit; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35409}
  handleExceptionBegin
  Result := AObj.PrevWordPos();
  handleExceptionEnd
end;

// function
function TCustomSynEdit_IdentChars(AObj: TCustomSynEdit): TSynIdentChars; extdecl;
begin
  {$define handleExceptionID := 35410}
  handleExceptionBegin
  Result := AObj.IdentChars();
  handleExceptionEnd
end;

// function
function TCustomSynEdit_IsIdentChar(AObj: TCustomSynEdit; const c: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 35411}
  handleExceptionBegin
  Result := AObj.IsIdentChar(c);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_ScreenColumnToXValue(AObj: TCustomSynEdit; Col: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35412}
  handleExceptionBegin
  Result := AObj.ScreenColumnToXValue(Col);
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_ScreenXYToPixels(AObj: TCustomSynEdit; RowCol: TPhysPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35413}
  handleExceptionBegin
  Result := AObj.ScreenXYToPixels(RowCol);
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_RowColumnToPixels(AObj: TCustomSynEdit; var RowCol: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35414}
  handleExceptionBegin
  Result := AObj.RowColumnToPixels(RowCol);
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_PixelsToRowColumn(AObj: TCustomSynEdit; var Pixels: TPoint; aFlags: TSynCoordinateMappingFlags; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35415}
  handleExceptionBegin
  Result := AObj.PixelsToRowColumn(Pixels, aFlags);
  handleExceptionEnd
end;

// function
procedure TCustomSynEdit_PixelsToLogicalPos(AObj: TCustomSynEdit; var Pixels: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 35416}
  handleExceptionBegin
  Result := AObj.PixelsToLogicalPos(Pixels);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_SearchReplace(AObj: TCustomSynEdit; const ASearch: PChar; const AReplace: PChar; AOptions: TSynSearchOptions): integer; extdecl;
begin
  {$define handleExceptionID := 35417}
  handleExceptionBegin
  Result := AObj.SearchReplace(ASearch, AReplace, AOptions);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_SearchReplaceEx(AObj: TCustomSynEdit; const ASearch: PChar; const AReplace: PChar; AOptions: TSynSearchOptions; var AStart: TPoint): integer; extdecl;
begin
  {$define handleExceptionID := 35418}
  handleExceptionBegin
  Result := AObj.SearchReplaceEx(ASearch, AReplace, AOptions, AStart);
  handleExceptionEnd
end;

// function
function TCustomSynEdit_PluginCount(AObj: TCustomSynEdit): Integer; extdecl;
begin
  {$define handleExceptionID := 35419}
  handleExceptionBegin
  Result := AObj.PluginCount();
  handleExceptionEnd
end;

// function
function TCustomSynEdit_MarkupCount(AObj: TCustomSynEdit): Integer; extdecl;
begin
  {$define handleExceptionID := 35420}
  handleExceptionBegin
  Result := AObj.MarkupCount();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_AfterLoadFromFile(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35421}
  handleExceptionBegin
  AObj.AfterLoadFromFile();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_EnsureCursorPosVisible(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35422}
  handleExceptionBegin
  AObj.EnsureCursorPosVisible();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_MoveCaretToVisibleArea(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35423}
  handleExceptionBegin
  AObj.MoveCaretToVisibleArea();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_MoveCaretIgnoreEOL(AObj: TCustomSynEdit; var NewCaret: TPoint); extdecl;
begin
  {$define handleExceptionID := 35424}
  handleExceptionBegin
  AObj.MoveCaretIgnoreEOL(NewCaret);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_MoveLogicalCaretIgnoreEOL(AObj: TCustomSynEdit; var NewLogCaret: TPoint); extdecl;
begin
  {$define handleExceptionID := 35425}
  handleExceptionBegin
  AObj.MoveLogicalCaretIgnoreEOL(NewLogCaret);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ClearSelection(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35426}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SelectAll(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35427}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SelectToBrace(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35428}
  handleExceptionBegin
  AObj.SelectToBrace();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SelectWord(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35429}
  handleExceptionBegin
  AObj.SelectWord();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SelectLine(AObj: TCustomSynEdit; WithLeadSpaces: LongBool); extdecl;
begin
  {$define handleExceptionID := 35430}
  handleExceptionBegin
  AObj.SelectLine(WithLeadSpaces);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SelectParagraph(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35431}
  handleExceptionBegin
  AObj.SelectParagraph();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_Clear(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35432}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_Append(AObj: TCustomSynEdit; const Value: PChar); extdecl;
begin
  {$define handleExceptionID := 35433}
  handleExceptionBegin
  AObj.Append(Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ClearAll(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35434}
  handleExceptionBegin
  AObj.ClearAll();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_InsertTextAtCaret(AObj: TCustomSynEdit; aText: PChar; aCaretMode: TSynCaretAdjustMode); extdecl;
begin
  {$define handleExceptionID := 35435}
  handleExceptionBegin
  AObj.InsertTextAtCaret(aText, aCaretMode);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetTextBetweenPointsWithPointX2StrSETFlagsSCAModeSMAModeSSMode(AObj: TCustomSynEdit; var aStartPoint: TPoint; var aEndPoint: TPoint; const AValue: PChar; aFlags: TSynEditTextFlags; aCaretMode: TSynCaretAdjustMode; aMarksMode: TSynMarksAdjustMode; aSelectionMode: TSynSelectionMode); extdecl;
begin
  {$define handleExceptionID := 35436}
  handleExceptionBegin
  AObj.SetTextBetweenPoints(aStartPoint, aEndPoint, AValue, aFlags, aCaretMode, aMarksMode, aSelectionMode);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_MarkTextAsSaved(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35437}
  handleExceptionBegin
  AObj.MarkTextAsSaved();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ClearBookMark(AObj: TCustomSynEdit; BookMark: Integer); extdecl;
begin
  {$define handleExceptionID := 35438}
  handleExceptionBegin
  AObj.ClearBookMark(BookMark);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_GotoBookMark(AObj: TCustomSynEdit; BookMark: Integer); extdecl;
begin
  {$define handleExceptionID := 35439}
  handleExceptionBegin
  AObj.GotoBookMark(BookMark);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetBookMark(AObj: TCustomSynEdit; BookMark: Integer; X: Integer; Y: Integer; AnLeft: Integer; AnTop: Integer); extdecl;
begin
  {$define handleExceptionID := 35440}
  handleExceptionBegin
  AObj.SetBookMark(BookMark, X, Y, AnLeft, AnTop);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_CopyToClipboard(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35441}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_CutToClipboard(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35442}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_PasteFromClipboard(AObj: TCustomSynEdit; AForceColumnMode: LongBool); extdecl;
begin
  {$define handleExceptionID := 35443}
  handleExceptionBegin
  AObj.PasteFromClipboard(AForceColumnMode);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_DoCopyToClipboard(AObj: TCustomSynEdit; SText: PChar; FoldInfo: PChar); extdecl;
begin
  {$define handleExceptionID := 35444}
  handleExceptionBegin
  AObj.DoCopyToClipboard(SText, FoldInfo);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_CommandProcessor(AObj: TCustomSynEdit; Command: TSynEditorCommand; AChar: PChar; Data: pointer; ASkipHooks: THookedCommandFlags); extdecl;
begin
  {$define handleExceptionID := 35445}
  handleExceptionBegin
  AObj.CommandProcessor(Command, AChar, Data, ASkipHooks);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ExecuteCommand(AObj: TCustomSynEdit; Command: TSynEditorCommand; const AChar: PChar; Data: pointer); extdecl;
begin
  {$define handleExceptionID := 35446}
  handleExceptionBegin
  AObj.ExecuteCommand(Command, AChar, Data);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_CaretAtIdentOrString(AObj: TCustomSynEdit; var XY: TPoint; var AtIdent: LongBool; var NearString: LongBool); extdecl;
var
  OutAtIdent: Boolean;
  OutNearString: Boolean;
begin
  {$define handleExceptionID := 35447}
  handleExceptionBegin
  AObj.CaretAtIdentOrString(XY, OutAtIdent, OutNearString);
  AtIdent := OutAtIdent;
  NearString := OutNearString;
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_Notification(AObj: TCustomSynEdit; AComponent: TComponent; Operation: TOperation); extdecl;
begin
  {$define handleExceptionID := 35448}
  handleExceptionBegin
  AObj.Notification(AComponent, Operation);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetUseIncrementalColorWithBool(AObj: TCustomSynEdit; const AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 35449}
  handleExceptionBegin
  AObj.SetUseIncrementalColor(AValue);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetDefaultKeystrokes(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35450}
  handleExceptionBegin
  AObj.SetDefaultKeystrokes();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ResetMouseActions(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35451}
  handleExceptionBegin
  AObj.ResetMouseActions();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetOptionFlag(AObj: TCustomSynEdit; Flag: TSynEditorOption; Value: LongBool); extdecl;
begin
  {$define handleExceptionID := 35452}
  handleExceptionBegin
  AObj.SetOptionFlag(Flag, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetHighlightSearch(AObj: TCustomSynEdit; const ASearch: PChar; AOptions: TSynSearchOptions); extdecl;
begin
  {$define handleExceptionID := 35453}
  handleExceptionBegin
  AObj.SetHighlightSearch(ASearch, AOptions);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_WndProc(AObj: TCustomSynEdit; var Msg: TMessage); extdecl;
var
  OutMsg: TMessage;
begin
  {$define handleExceptionID := 35454}
  handleExceptionBegin
  OutMsg := Msg;
  AObj.WndProc(OutMsg);
  Msg := OutMsg;
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_AddKey(AObj: TCustomSynEdit; Command: TSynEditorCommand; Key1: word; SS1: TShiftState; Key2: word; SS2: TShiftState); extdecl;
begin
  {$define handleExceptionID := 35455}
  handleExceptionBegin
  AObj.AddKey(Command, Key1, SS1, Key2, SS2);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_ShareTextBufferFrom(AObj: TCustomSynEdit; AShareEditor: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35456}
  handleExceptionBegin
  AObj.ShareTextBufferFrom(AShareEditor);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_UnShareTextBuffer(AObj: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 35457}
  handleExceptionBegin
  AObj.UnShareTextBuffer();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynEdit_SetCaretTypeSize(AObj: TCustomSynEdit; AType: TSynCaretType; AWidth: Integer; AHeight: Integer; AXOffs: Integer; AYOffs: Integer); extdecl;
begin
  {$define handleExceptionID := 35458}
  handleExceptionBegin
  AObj.SetCaretTypeSize(AType, AWidth, AHeight, AXOffs, AYOffs);
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_LineText(ASet: LongBool; AObj: TCustomSynEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35459}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineText := AValue
  end else
    StringBufferCreate(AObj.LineText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_Text(ASet: LongBool; AObj: TCustomSynEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35460}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_TextBetweenPoints(ASet: LongBool; AObj: TCustomSynEdit; var aStartPoint: TPoint; var aEndPoint: TPoint; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35461}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextBetweenPoints[aStartPoint, aEndPoint] := AValue
  end else
    StringBufferCreate(AObj.TextBetweenPoints[aStartPoint, aEndPoint], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_TextBetweenPointsEx(AObj: TCustomSynEdit; var aStartPoint: TPoint; var aEndPoint: TPoint; CaretMode: TSynCaretAdjustMode; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35462}
  handleExceptionBegin
  AObj.TextBetweenPointsEx[aStartPoint, aEndPoint, CaretMode] := AValue;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MarksToSynEditMarkList(AObj: TCustomSynEdit): TSynEditMarkList; extdecl;
begin
  {$define handleExceptionID := 35463}
  handleExceptionBegin
  Result := AObj.Marks;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_CanPaste(AObj: TCustomSynEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 35464}
  handleExceptionBegin
  Result := AObj.CanPaste;
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_FoldState(ASet: LongBool; AObj: TCustomSynEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35465}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FoldState := AValue
  end else
    StringBufferCreate(AObj.FoldState, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MaxLeftChar(ASet: LongBool; AObj: TCustomSynEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35466}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLeftChar := AValue
  end else
    Result := AObj.MaxLeftChar;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_ScrollOnEditLeftOptions(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynScrollOnEditOptions): TSynScrollOnEditOptions; extdecl;
begin
  {$define handleExceptionID := 35467}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollOnEditLeftOptions := AValue
  end else
    Result := AObj.ScrollOnEditLeftOptions;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_ScrollOnEditRightOptions(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynScrollOnEditOptions): TSynScrollOnEditOptions; extdecl;
begin
  {$define handleExceptionID := 35468}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollOnEditRightOptions := AValue
  end else
    Result := AObj.ScrollOnEditRightOptions;
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_UseIncrementalColor(AObj: TCustomSynEdit; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 35469}
  handleExceptionBegin
  AObj.UseIncrementalColor := AValue;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_PaintLock(AObj: TCustomSynEdit): Integer; extdecl;
begin
  {$define handleExceptionID := 35470}
  handleExceptionBegin
  Result := AObj.PaintLock;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_UseUTF8(AObj: TCustomSynEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 35471}
  handleExceptionBegin
  Result := AObj.UseUTF8;
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_ChangeStamp(AObj: TCustomSynEdit; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 35472}
  handleExceptionBegin
  Result := AObj.ChangeStamp;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_Plugin(AObj: TCustomSynEdit; Index: Integer): TLazSynEditPlugin; extdecl;
begin
  {$define handleExceptionID := 35473}
  handleExceptionBegin
  Result := AObj.Plugin[Index];
  handleExceptionEnd
end;

// property
function TCustomSynEdit_Markup(AObj: TCustomSynEdit; Index: integer): TSynEditMarkup; extdecl;
begin
  {$define handleExceptionID := 35474}
  handleExceptionBegin
  Result := AObj.Markup[Index];
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MarkupByClass(AObj: TCustomSynEdit; Index: TSynEditMarkupClass): TSynEditMarkup; extdecl;
begin
  {$define handleExceptionID := 35475}
  handleExceptionBegin
  Result := AObj.MarkupByClass[Index];
  handleExceptionEnd
end;

// property
function TCustomSynEdit_TrimSpaceType(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditStringTrimmingType): TSynEditStringTrimmingType; extdecl;
begin
  {$define handleExceptionID := 35476}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TrimSpaceType := AValue
  end else
    Result := AObj.TrimSpaceType;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_InsertCaret(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditCaretType): TSynEditCaretType; extdecl;
begin
  {$define handleExceptionID := 35477}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InsertCaret := AValue
  end else
    Result := AObj.InsertCaret;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_OverwriteCaret(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditCaretType): TSynEditCaretType; extdecl;
begin
  {$define handleExceptionID := 35478}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OverwriteCaret := AValue
  end else
    Result := AObj.OverwriteCaret;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_DefaultSelectionMode(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectionMode): TSynSelectionMode; extdecl;
begin
  {$define handleExceptionID := 35479}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultSelectionMode := AValue
  end else
    Result := AObj.DefaultSelectionMode;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_SelectionMode(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectionMode): TSynSelectionMode; extdecl;
begin
  {$define handleExceptionID := 35480}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionMode := AValue
  end else
    Result := AObj.SelectionMode;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_IsStickySelecting(AObj: TCustomSynEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 35481}
  handleExceptionBegin
  Result := AObj.IsStickySelecting;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MarkupManager(AObj: TCustomSynEdit): TSynEditMarkupManager; extdecl;
begin
  {$define handleExceptionID := 35482}
  handleExceptionBegin
  Result := AObj.MarkupManager;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_OffTextCursor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 35483}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OffTextCursor := AValue
  end else
    Result := AObj.OffTextCursor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_IncrementColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35484}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementColor := AValue
  end else
    Result := AObj.IncrementColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_HighlightAllColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35485}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HighlightAllColor := AValue
  end else
    Result := AObj.HighlightAllColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_BracketMatchColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35486}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BracketMatchColor := AValue
  end else
    Result := AObj.BracketMatchColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MouseLinkColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35487}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseLinkColor := AValue
  end else
    Result := AObj.MouseLinkColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_LineHighlightColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35488}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineHighlightColor := AValue
  end else
    Result := AObj.LineHighlightColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_FoldedCodeColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35489}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FoldedCodeColor := AValue
  end else
    Result := AObj.FoldedCodeColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_FoldedCodeLineColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35490}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FoldedCodeLineColor := AValue
  end else
    Result := AObj.FoldedCodeLineColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_HiddenCodeLineColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 35491}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HiddenCodeLineColor := AValue
  end else
    Result := AObj.HiddenCodeLineColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_Beautifier(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynCustomBeautifier): TSynCustomBeautifier; extdecl;
begin
  {$define handleExceptionID := 35492}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Beautifier := AValue
  end else
    Result := AObj.Beautifier;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_BlockIndent(ASet: LongBool; AObj: TCustomSynEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35493}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlockIndent := AValue
  end else
    Result := AObj.BlockIndent;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_BlockTabIndent(ASet: LongBool; AObj: TCustomSynEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35494}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlockTabIndent := AValue
  end else
    Result := AObj.BlockTabIndent;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_HighlighterToSynCustomHighlighter(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynCustomHighlighter): TSynCustomHighlighter; extdecl;
begin
  {$define handleExceptionID := 35495}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Highlighter := AValue
  end else
    Result := AObj.Highlighter;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_Gutter(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynGutter): TSynGutter; extdecl;
begin
  {$define handleExceptionID := 35496}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Gutter := AValue
  end else
    Result := AObj.Gutter;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_RightGutter(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynGutter): TSynGutter; extdecl;
begin
  {$define handleExceptionID := 35497}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightGutter := AValue
  end else
    Result := AObj.RightGutter;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_InsertMode(ASet: LongBool; AObj: TCustomSynEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35498}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InsertMode := AValue
  end else
    Result := AObj.InsertMode;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_Keystrokes(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditKeyStrokes): TSynEditKeyStrokes; extdecl;
begin
  {$define handleExceptionID := 35499}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Keystrokes := AValue
  end else
    Result := AObj.Keystrokes;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_MaxUndo(ASet: LongBool; AObj: TCustomSynEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35500}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxUndo := AValue
  end else
    Result := AObj.MaxUndo;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_ShareOptions(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditorShareOptions): TSynEditorShareOptions; extdecl;
begin
  {$define handleExceptionID := 35501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShareOptions := AValue
  end else
    Result := AObj.ShareOptions;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_VisibleSpecialChars(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynVisibleSpecialChars): TSynVisibleSpecialChars; extdecl;
begin
  {$define handleExceptionID := 35502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VisibleSpecialChars := AValue
  end else
    Result := AObj.VisibleSpecialChars;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_RightEdge(ASet: LongBool; AObj: TCustomSynEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightEdge := AValue
  end else
    Result := AObj.RightEdge;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_RightEdgeColor(ASet: LongBool; AObj: TCustomSynEdit; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 35504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightEdgeColor := AValue
  end else
    Result := AObj.RightEdgeColor;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_ScrollBars(ASet: LongBool; AObj: TCustomSynEdit; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 35505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_BracketHighlightStyle(ASet: LongBool; AObj: TCustomSynEdit; AValue: TSynEditBracketHighlightStyle): TSynEditBracketHighlightStyle; extdecl;
begin
  {$define handleExceptionID := 35506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BracketHighlightStyle := AValue
  end else
    Result := AObj.BracketHighlightStyle;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_TabWidth(ASet: LongBool; AObj: TCustomSynEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabWidth := AValue
  end else
    Result := AObj.TabWidth;
  handleExceptionEnd
end;

// property
function TCustomSynEdit_WantTabs(ASet: LongBool; AObj: TCustomSynEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantTabs := AValue
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

// property
procedure TCustomSynEdit_TabViewClass(AObj: TCustomSynEdit; AValue: TSynEditStringTabExpanderClass); extdecl;
begin
  {$define handleExceptionID := 35509}
  handleExceptionBegin
  AObj.TabViewClass := AValue;
  handleExceptionEnd
end;

// event
procedure TCustomSynEdit_OnChange(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnChangeUpdating(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTChangeUpdatingEvent}
  {$DEFINE EventName := OnChangeUpdating}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnCutCopy(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynCopyPasteEvent}
  {$DEFINE EventName := OnCutCopy}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnPaste(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynCopyPasteEvent}
  {$DEFINE EventName := OnPaste}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnDropFiles(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnGutterClick(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGutterClickEvent}
  {$DEFINE EventName := OnGutterClick}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnPaintToPaintEvent(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTPaintEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnPlaceBookmark(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTPlaceMarkEvent}
  {$DEFINE EventName := OnPlaceBookmark}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnClearBookmark(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTPlaceMarkEvent}
  {$DEFINE EventName := OnClearBookmark}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnProcessCommand(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProcessCommandEvent}
  {$DEFINE EventName := OnProcessCommand}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnProcessUserCommand(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProcessCommandEvent}
  {$DEFINE EventName := OnProcessUserCommand}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnCommandProcessed(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProcessCommandEvent}
  {$DEFINE EventName := OnCommandProcessed}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnReplaceText(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTReplaceTextEvent}
  {$DEFINE EventName := OnReplaceText}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnSpecialLineMarkup(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSpecialLineMarkupEvent}
  {$DEFINE EventName := OnSpecialLineMarkup}
  LCLEventMethodCode
end;

// event
procedure TCustomSynEdit_OnStatusChange(AObj: TCustomSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStatusChangeEvent}
  {$DEFINE EventName := OnStatusChange}
  LCLEventMethodCode
end;

function TCustomSynEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomSynEdit;
end;

exports
  TCustomSynEdit_Create,
  TCustomSynEdit_HasText,
  TCustomSynEdit_GetBookMarkWithIntX3,
  TCustomSynEdit_GetBookMarkWithIntX5,
  TCustomSynEdit_IsBookmark,
  TCustomSynEdit_GetHighlighterAttriAtRowCol,
  TCustomSynEdit_GetHighlighterAttriAtRowColExWithPointStrIntX2SHAttributesBool,
  TCustomSynEdit_GetHighlighterAttriAtRowColExWithPointIntBool,
  TCustomSynEdit_NextWordPos,
  TCustomSynEdit_PrevWordPos,
  TCustomSynEdit_IdentChars,
  TCustomSynEdit_IsIdentChar,
  TCustomSynEdit_ScreenColumnToXValue,
  TCustomSynEdit_ScreenXYToPixels,
  TCustomSynEdit_RowColumnToPixels,
  TCustomSynEdit_PixelsToRowColumn,
  TCustomSynEdit_PixelsToLogicalPos,
  TCustomSynEdit_SearchReplace,
  TCustomSynEdit_SearchReplaceEx,
  TCustomSynEdit_PluginCount,
  TCustomSynEdit_MarkupCount,
  TCustomSynEdit_AfterLoadFromFile,
  TCustomSynEdit_EnsureCursorPosVisible,
  TCustomSynEdit_MoveCaretToVisibleArea,
  TCustomSynEdit_MoveCaretIgnoreEOL,
  TCustomSynEdit_MoveLogicalCaretIgnoreEOL,
  TCustomSynEdit_ClearSelection,
  TCustomSynEdit_SelectAll,
  TCustomSynEdit_SelectToBrace,
  TCustomSynEdit_SelectWord,
  TCustomSynEdit_SelectLine,
  TCustomSynEdit_SelectParagraph,
  TCustomSynEdit_Clear,
  TCustomSynEdit_Append,
  TCustomSynEdit_ClearAll,
  TCustomSynEdit_InsertTextAtCaret,
  TCustomSynEdit_SetTextBetweenPointsWithPointX2StrSETFlagsSCAModeSMAModeSSMode,
  TCustomSynEdit_MarkTextAsSaved,
  TCustomSynEdit_ClearBookMark,
  TCustomSynEdit_GotoBookMark,
  TCustomSynEdit_SetBookMark,
  TCustomSynEdit_CopyToClipboard,
  TCustomSynEdit_CutToClipboard,
  TCustomSynEdit_PasteFromClipboard,
  TCustomSynEdit_DoCopyToClipboard,
  TCustomSynEdit_CommandProcessor,
  TCustomSynEdit_ExecuteCommand,
  TCustomSynEdit_CaretAtIdentOrString,
  TCustomSynEdit_Notification,
  TCustomSynEdit_SetUseIncrementalColorWithBool,
  TCustomSynEdit_SetDefaultKeystrokes,
  TCustomSynEdit_ResetMouseActions,
  TCustomSynEdit_SetOptionFlag,
  TCustomSynEdit_SetHighlightSearch,
  TCustomSynEdit_WndProc,
  TCustomSynEdit_AddKey,
  TCustomSynEdit_ShareTextBufferFrom,
  TCustomSynEdit_UnShareTextBuffer,
  TCustomSynEdit_SetCaretTypeSize,
  TCustomSynEdit_LineText,
  TCustomSynEdit_Text,
  TCustomSynEdit_TextBetweenPoints,
  TCustomSynEdit_TextBetweenPointsEx,
  TCustomSynEdit_MarksToSynEditMarkList,
  TCustomSynEdit_CanPaste,
  TCustomSynEdit_FoldState,
  TCustomSynEdit_MaxLeftChar,
  TCustomSynEdit_ScrollOnEditLeftOptions,
  TCustomSynEdit_ScrollOnEditRightOptions,
  TCustomSynEdit_UseIncrementalColor,
  TCustomSynEdit_PaintLock,
  TCustomSynEdit_UseUTF8,
  TCustomSynEdit_ChangeStamp,
  TCustomSynEdit_Plugin,
  TCustomSynEdit_Markup,
  TCustomSynEdit_MarkupByClass,
  TCustomSynEdit_TrimSpaceType,
  TCustomSynEdit_InsertCaret,
  TCustomSynEdit_OverwriteCaret,
  TCustomSynEdit_DefaultSelectionMode,
  TCustomSynEdit_SelectionMode,
  TCustomSynEdit_IsStickySelecting,
  TCustomSynEdit_MarkupManager,
  TCustomSynEdit_OffTextCursor,
  TCustomSynEdit_IncrementColor,
  TCustomSynEdit_HighlightAllColor,
  TCustomSynEdit_BracketMatchColor,
  TCustomSynEdit_MouseLinkColor,
  TCustomSynEdit_LineHighlightColor,
  TCustomSynEdit_FoldedCodeColor,
  TCustomSynEdit_FoldedCodeLineColor,
  TCustomSynEdit_HiddenCodeLineColor,
  TCustomSynEdit_Beautifier,
  TCustomSynEdit_BlockIndent,
  TCustomSynEdit_BlockTabIndent,
  TCustomSynEdit_HighlighterToSynCustomHighlighter,
  TCustomSynEdit_Gutter,
  TCustomSynEdit_RightGutter,
  TCustomSynEdit_InsertMode,
  TCustomSynEdit_Keystrokes,
  TCustomSynEdit_MaxUndo,
  TCustomSynEdit_ShareOptions,
  TCustomSynEdit_VisibleSpecialChars,
  TCustomSynEdit_RightEdge,
  TCustomSynEdit_RightEdgeColor,
  TCustomSynEdit_ScrollBars,
  TCustomSynEdit_BracketHighlightStyle,
  TCustomSynEdit_TabWidth,
  TCustomSynEdit_WantTabs,
  TCustomSynEdit_TabViewClass,
  TCustomSynEdit_OnChange,
  TCustomSynEdit_OnChangeUpdating,
  TCustomSynEdit_OnCutCopy,
  TCustomSynEdit_OnPaste,
  TCustomSynEdit_OnDropFiles,
  TCustomSynEdit_OnGutterClick,
  TCustomSynEdit_OnPaintToPaintEvent,
  TCustomSynEdit_OnPlaceBookmark,
  TCustomSynEdit_OnClearBookmark,
  TCustomSynEdit_OnProcessCommand,
  TCustomSynEdit_OnProcessUserCommand,
  TCustomSynEdit_OnCommandProcessed,
  TCustomSynEdit_OnReplaceText,
  TCustomSynEdit_OnSpecialLineMarkup,
  TCustomSynEdit_OnStatusChange,
  TCustomSynEdit_TClass;