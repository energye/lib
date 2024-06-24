
//constructor
function CustomRichMemo_Create(AOwner: TComponent): TCustomRichMemo; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRichMemo.Create(AOwner);
  handleExceptionEnd
end;

//property
procedure CustomRichMemo_ZoomFactor(AIsSet: LongBool; AObj: TCustomRichMemo; var AValue: Double; var Result: Double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomFactor := AValue;
  end else
    Result := AObj.ZoomFactor;
  handleExceptionEnd
end;

//property
function CustomRichMemo_CanRedo(AObj: TCustomRichMemo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanRedo;
  handleExceptionEnd
end;

//property
function CustomRichMemo_Transparent(AIsSet: LongBool; AObj: TCustomRichMemo; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//function
function CustomRichMemo_CanPaste(AObj: TCustomRichMemo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanPaste();
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetTextAttributes(AObj: TCustomRichMemo; TextStart: Integer; var TextParams: TFontParams): LongBool; extdecl;
var
  RetTextParams: TFontParams;
begin
  handleExceptionBegin
  RetTextParams := TextParams;
  Result := AObj.GetTextAttributes(TextStart, RetTextParams);
  TextParams := RetTextParams;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetStyleRange(AObj: TCustomRichMemo; CharOfs: Integer; var RangeStart, RangeLen: Integer): LongBool; extdecl;
var
  RetRangeStart: Integer;
  RetRangeLen: Integer;
begin
  handleExceptionBegin
  RetRangeStart := RangeStart;
  RetRangeLen := RangeLen;
  Result := AObj.GetStyleRange(CharOfs, RetRangeStart, RetRangeLen);
  RangeStart := RetRangeStart;
  RangeLen := RetRangeLen;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaAlignment(AObj: TCustomRichMemo; TextStart: Integer; var AAlign: TParaAlignment): LongBool; extdecl;
var
  RetAAlign: TParaAlignment;
begin
  handleExceptionBegin
  RetAAlign := AAlign;
  Result := AObj.GetParaAlignment(TextStart, RetAAlign);
  AAlign := RetAAlign;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaAlignment1(AObj: TCustomRichMemo; TextStart: Integer): TParaAlignment; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParaAlignment(TextStart);
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaMetric(AObj: TCustomRichMemo; TextStart: Integer; var AMetric: TParaMetric): LongBool; extdecl;
var
  RetAMetric: TParaMetric;
begin
  handleExceptionBegin
  RetAMetric := AMetric;
  Result := AObj.GetParaMetric(TextStart, RetAMetric);
  AMetric := RetAMetric;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaNumbering(AObj: TCustomRichMemo; TextStart: Integer; var ANumber: TParaNumbering): LongBool; extdecl;
var
  RetANumber: TParaNumbering;
begin
  handleExceptionBegin
  RetANumber := ANumber;
  Result := AObj.GetParaNumbering(TextStart, RetANumber);
  ANumber := RetANumber;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaRange(AObj: TCustomRichMemo; CharOfs: Integer; var ParaRange: TParaRange): LongBool; extdecl;
var
  RetParaRange: TParaRange;
begin
  handleExceptionBegin
  RetParaRange := ParaRange;
  Result := AObj.GetParaRange(CharOfs, RetParaRange);
  ParaRange := RetParaRange;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaRange1(AObj: TCustomRichMemo; CharOfs: Integer; var TextStart, TextLength: Integer): LongBool; extdecl;
var
  RetTextStart: Integer;
  RetTextLength: Integer;
begin
  handleExceptionBegin
  RetTextStart := TextStart;
  RetTextLength := TextLength;
  Result := AObj.GetParaRange(CharOfs, RetTextStart, RetTextLength);
  TextStart := RetTextStart;
  TextLength := RetTextLength;
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetParaTabs(AObj: TCustomRichMemo; CharOfs: Integer; var AStopList: TTabStopList): LongBool; extdecl;
var
  RetAStopList: TTabStopList;
begin
  handleExceptionBegin
  RetAStopList := AStopList;
  Result := AObj.GetParaTabs(CharOfs, RetAStopList);
  AStopList := RetAStopList;
  handleExceptionEnd
end;

//function
function CustomRichMemo_IsLink(AObj: TCustomRichMemo; TextStart: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.isLink(TextStart);
  handleExceptionEnd
end;

//function
function CustomRichMemo_LoadRichText(AObj: TCustomRichMemo; Source: TStream): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LoadRichText(Source);
  handleExceptionEnd
end;

//function
function CustomRichMemo_SaveRichText(AObj: TCustomRichMemo; Dest: TStream): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveRichText(Dest);
  handleExceptionEnd
end;

//function
function CustomRichMemo_InDelText(AObj: TCustomRichMemo; const UTF8Text: PChar; InsStartChar, ReplaceLength: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InDelText(UTF8Text, InsStartChar, ReplaceLength);
  handleExceptionEnd
end;

//function
function CustomRichMemo_InDelInline(AObj: TCustomRichMemo; inlineobj: TRichMemoInline; InsStartChar, ReplaceLength: Integer; var ASize: TSize): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InDelInline(inlineobj, InsStartChar, ReplaceLength, ASize);
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetTextForString(AObj: TCustomRichMemo; TextStart, TextLength: Integer): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetText(TextStart, TextLength));
  handleExceptionEnd
end;

//function
function CustomRichMemo_GetUText(AObj: TCustomRichMemo; TextStart, TextLength: Integer): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetUText(TextStart, TextLength));
  handleExceptionEnd
end;

//function
function CustomRichMemo_Search(AObj: TCustomRichMemo; const ANiddle: PChar; Start, Len: Integer; const SearchOpt: TSearchOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Search(ANiddle, Start, Len, SearchOpt);
  handleExceptionEnd
end;

//function
function CustomRichMemo_Search1(AObj: TCustomRichMemo; const ANiddle: PChar; Start, Len: Integer; const SearchOpt: TSearchOptions; var ATextStart, ATextLength: Integer): LongBool; extdecl;
var
  RetATextStart: Integer;
  RetATextLength: Integer;
begin
  handleExceptionBegin
  RetATextStart := ATextStart;
  RetATextLength := ATextLength;
  Result := AObj.Search(ANiddle, Start, Len, SearchOpt, RetATextStart, RetATextLength);
  ATextStart := RetATextStart;
  ATextLength := RetATextLength;
  handleExceptionEnd
end;

//function
function CustomRichMemo_Print(AObj: TCustomRichMemo; const params: TPrintParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Print(params);
  handleExceptionEnd
end;

//function
function CustomRichMemo_CharAtPos(AObj: TCustomRichMemo; x, y: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CharAtPos(x, y);
  handleExceptionEnd
end;

//function
function CustomRichMemo_Class(): TClass; extdecl;
begin
  Result := TCustomRichMemo;
end;

//procedure
procedure CustomRichMemo_SetTextAttributes(AObj: TCustomRichMemo; TextStart, TextLen: Integer; const TextParams: TFontParams); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextAttributes(TextStart, TextLen, TextParams);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetParaAlignment(AObj: TCustomRichMemo; TextStart, TextLen: Integer; AAlign: TParaAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.SetParaAlignment(TextStart, TextLen, AAlign);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetParaMetric(AObj: TCustomRichMemo; TextStart, TextLen: Integer; const AMetric: TParaMetric); extdecl;
begin
  handleExceptionBegin
  AObj.SetParaMetric(TextStart, TextLen, AMetric);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetParaNumbering(AObj: TCustomRichMemo; TextStart, TextLen: Integer; const ANumber: TParaNumbering); extdecl;
begin
  handleExceptionBegin
  AObj.SetParaNumbering(TextStart, TextLen, ANumber);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetParaTabs(AObj: TCustomRichMemo; TextStart, TextLen: Integer; const AStopList: TTabStopList); extdecl;
begin
  handleExceptionBegin
  AObj.SetParaTabs(TextStart, TextLen, AStopList);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetTextAttributes1(AObj: TCustomRichMemo; TextStart, TextLen: Integer; AFont: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextAttributes(TextStart, TextLen, AFont);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetRangeColor(AObj: TCustomRichMemo; TextStart, TextLength: Integer; FontColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetRangeColor(TextStart, TextLength, FontColor);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetRangeParams(AObj: TCustomRichMemo; TextStart, TextLength: Integer; ModifyMask: TTextModifyMask; const FontName: PChar; FontSize: Integer; FontColor: TColor; AddFontStyle, RemoveFontStyle: TFontStyles); extdecl;
begin
  handleExceptionBegin
  AObj.SetRangeParams(TextStart, TextLength, ModifyMask, FontName, FontSize, FontColor, AddFontStyle, RemoveFontStyle);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetRangeParams1(AObj: TCustomRichMemo; TextStart, TextLength: Integer; ModifyMask: TTextModifyMask; const fnt: TFontParams; AddFontStyle, RemoveFontStyle: TFontStyles); extdecl;
begin
  handleExceptionBegin
  AObj.SetRangeParams(TextStart, TextLength, ModifyMask, fnt, AddFontStyle, RemoveFontStyle);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetRangeParaParams(AObj: TCustomRichMemo; TextStart, TextLength: Integer; ModifyMask: TParaModifyMask; const ParaMetric: TParaMetric); extdecl;
begin
  handleExceptionBegin
  AObj.SetRangeParaParams(TextStart, TextLength, ModifyMask, ParaMetric);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetLink(AObj: TCustomRichMemo; TextStart, TextLength: Integer; AIsLink: LongBool; const ALinkRef: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLink(TextStart, TextLength, AIsLink, ALinkRef);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_SetSelLengthFor(AObj: TCustomRichMemo; const aselstr: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetSelLengthFor(aselstr);
  handleExceptionEnd
end;

//procedure
procedure CustomRichMemo_Redo(AObj: TCustomRichMemo); extdecl;
begin
  handleExceptionBegin
  AObj.Redo();
  handleExceptionEnd
end;

//property event
procedure CustomRichMemo_SetOnSelectionChange(AObj: TCustomRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChange}
  EventMethodCode
end;


exports
  CustomRichMemo_Create,
  CustomRichMemo_ZoomFactor,
  CustomRichMemo_CanRedo,
  CustomRichMemo_Transparent,
  CustomRichMemo_CanPaste,
  CustomRichMemo_GetTextAttributes,
  CustomRichMemo_GetStyleRange,
  CustomRichMemo_GetParaAlignment,
  CustomRichMemo_GetParaAlignment1,
  CustomRichMemo_GetParaMetric,
  CustomRichMemo_GetParaNumbering,
  CustomRichMemo_GetParaRange,
  CustomRichMemo_GetParaRange1,
  CustomRichMemo_GetParaTabs,
  CustomRichMemo_IsLink,
  CustomRichMemo_LoadRichText,
  CustomRichMemo_SaveRichText,
  CustomRichMemo_InDelText,
  CustomRichMemo_InDelInline,
  CustomRichMemo_GetTextForString,
  CustomRichMemo_GetUText,
  CustomRichMemo_Search,
  CustomRichMemo_Search1,
  CustomRichMemo_Print,
  CustomRichMemo_CharAtPos,
  CustomRichMemo_Class,
  CustomRichMemo_SetTextAttributes,
  CustomRichMemo_SetParaAlignment,
  CustomRichMemo_SetParaMetric,
  CustomRichMemo_SetParaNumbering,
  CustomRichMemo_SetParaTabs,
  CustomRichMemo_SetTextAttributes1,
  CustomRichMemo_SetRangeColor,
  CustomRichMemo_SetRangeParams,
  CustomRichMemo_SetRangeParams1,
  CustomRichMemo_SetRangeParaParams,
  CustomRichMemo_SetLink,
  CustomRichMemo_SetSelLengthFor,
  CustomRichMemo_Redo,
  CustomRichMemo_SetOnSelectionChange;