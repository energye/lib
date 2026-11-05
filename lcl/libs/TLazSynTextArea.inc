// constructor
function TLazSynTextArea_Create(AOwner: TWinControl; ATextDrawer: TheTextDrawer): TLazSynTextArea; extdecl;
begin
  {$define handleExceptionID := 41400}
  handleExceptionBegin
  Result := TLazSynTextArea.Create(AOwner, ATextDrawer);
  handleExceptionEnd
end;

// function
function TLazSynTextArea_ScreenColumnToXValue(AObj: TLazSynTextArea; Col: integer): integer; extdecl;
begin
  {$define handleExceptionID := 41401}
  handleExceptionBegin
  Result := AObj.ScreenColumnToXValue(Col);
  handleExceptionEnd
end;

// function
procedure TLazSynTextArea_RowColumnToPixels(AObj: TLazSynTextArea; var RowCol: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 41402}
  handleExceptionBegin
  Result := AObj.RowColumnToPixels(RowCol);
  handleExceptionEnd
end;

// function
procedure TLazSynTextArea_PixelsToRowColumn(AObj: TLazSynTextArea; var Pixels: TPoint; aFlags: TSynCoordinateMappingFlags; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 41403}
  handleExceptionBegin
  Result := AObj.PixelsToRowColumn(Pixels, aFlags);
  handleExceptionEnd
end;

// procedure
procedure TLazSynTextArea_FontChanged(AObj: TLazSynTextArea); extdecl;
begin
  {$define handleExceptionID := 41404}
  handleExceptionBegin
  AObj.FontChanged();
  handleExceptionEnd
end;

// property
function TLazSynTextArea_Padding(ASet: LongBool; AObj: TLazSynTextArea; Side: TLazSynBorderSide; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 41405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Padding[Side] := AValue
  end else
    Result := AObj.Padding[Side];
  handleExceptionEnd
end;

// property
function TLazSynTextArea_ForegroundColor(ASet: LongBool; AObj: TLazSynTextArea; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 41406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForegroundColor := AValue
  end else
    Result := AObj.ForegroundColor;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_BackgroundColor(ASet: LongBool; AObj: TLazSynTextArea; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 41407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_ExtraCharSpacing(ASet: LongBool; AObj: TLazSynTextArea; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 41408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraCharSpacing := AValue
  end else
    Result := AObj.ExtraCharSpacing;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_ExtraLineSpacing(ASet: LongBool; AObj: TLazSynTextArea; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 41409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraLineSpacing := AValue
  end else
    Result := AObj.ExtraLineSpacing;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_VisibleSpecialChars(ASet: LongBool; AObj: TLazSynTextArea; AValue: TSynVisibleSpecialChars): TSynVisibleSpecialChars; extdecl;
begin
  {$define handleExceptionID := 41410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VisibleSpecialChars := AValue
  end else
    Result := AObj.VisibleSpecialChars;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_RightEdgeColumn(ASet: LongBool; AObj: TLazSynTextArea; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 41411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightEdgeColumn := AValue
  end else
    Result := AObj.RightEdgeColumn;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_RightEdgeVisible(ASet: LongBool; AObj: TLazSynTextArea; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 41412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightEdgeVisible := AValue
  end else
    Result := AObj.RightEdgeVisible;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_RightEdgeColor(ASet: LongBool; AObj: TLazSynTextArea; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 41413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightEdgeColor := AValue
  end else
    Result := AObj.RightEdgeColor;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_TopLine(ASet: LongBool; AObj: TLazSynTextArea; AValue: TLinePos): TLinePos; extdecl;
begin
  {$define handleExceptionID := 41414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopLine := AValue
  end else
    Result := AObj.TopLine;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_LeftChar(ASet: LongBool; AObj: TLazSynTextArea; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 41415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftChar := AValue
  end else
    Result := AObj.LeftChar;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_TheLinesView(ASet: LongBool; AObj: TLazSynTextArea; AValue: TSynEditStrings): TSynEditStrings; extdecl;
begin
  {$define handleExceptionID := 41416}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TheLinesView := AValue
  end else
    Result := AObj.TheLinesView;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_Highlighter(ASet: LongBool; AObj: TLazSynTextArea; AValue: TSynCustomHighlighter): TSynCustomHighlighter; extdecl;
begin
  {$define handleExceptionID := 41417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Highlighter := AValue
  end else
    Result := AObj.Highlighter;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_MarkupManager(ASet: LongBool; AObj: TLazSynTextArea; AValue: TSynEditMarkupManager): TSynEditMarkupManager; extdecl;
begin
  {$define handleExceptionID := 41418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupManager := AValue
  end else
    Result := AObj.MarkupManager;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_TextDrawer(AObj: TLazSynTextArea): TheTextDrawer; extdecl;
begin
  {$define handleExceptionID := 41419}
  handleExceptionBegin
  Result := AObj.TextDrawer;
  handleExceptionEnd
end;

// property
procedure TLazSynTextArea_TextBounds(AObj: TLazSynTextArea; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 41420}
  handleExceptionBegin
  Result := AObj.TextBounds;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_LineHeight(AObj: TLazSynTextArea): integer; extdecl;
begin
  {$define handleExceptionID := 41421}
  handleExceptionBegin
  Result := AObj.LineHeight;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_CharWidth(AObj: TLazSynTextArea): integer; extdecl;
begin
  {$define handleExceptionID := 41422}
  handleExceptionBegin
  Result := AObj.CharWidth;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_LinesInWindow(AObj: TLazSynTextArea): Integer; extdecl;
begin
  {$define handleExceptionID := 41423}
  handleExceptionBegin
  Result := AObj.LinesInWindow;
  handleExceptionEnd
end;

// property
function TLazSynTextArea_CharsInWindow(AObj: TLazSynTextArea): Integer; extdecl;
begin
  {$define handleExceptionID := 41424}
  handleExceptionBegin
  Result := AObj.CharsInWindow;
  handleExceptionEnd
end;

// event
procedure TLazSynTextArea_OnStatusChange(AObj: TLazSynTextArea; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStatusChangeEvent}
  {$DEFINE EventName := OnStatusChange}
  LCLEventMethodCode
end;

exports
  TLazSynTextArea_Create,
  TLazSynTextArea_ScreenColumnToXValue,
  TLazSynTextArea_RowColumnToPixels,
  TLazSynTextArea_PixelsToRowColumn,
  TLazSynTextArea_FontChanged,
  TLazSynTextArea_Padding,
  TLazSynTextArea_ForegroundColor,
  TLazSynTextArea_BackgroundColor,
  TLazSynTextArea_ExtraCharSpacing,
  TLazSynTextArea_ExtraLineSpacing,
  TLazSynTextArea_VisibleSpecialChars,
  TLazSynTextArea_RightEdgeColumn,
  TLazSynTextArea_RightEdgeVisible,
  TLazSynTextArea_RightEdgeColor,
  TLazSynTextArea_TopLine,
  TLazSynTextArea_LeftChar,
  TLazSynTextArea_TheLinesView,
  TLazSynTextArea_Highlighter,
  TLazSynTextArea_MarkupManager,
  TLazSynTextArea_TextDrawer,
  TLazSynTextArea_TextBounds,
  TLazSynTextArea_LineHeight,
  TLazSynTextArea_CharWidth,
  TLazSynTextArea_LinesInWindow,
  TLazSynTextArea_CharsInWindow,
  TLazSynTextArea_OnStatusChange;