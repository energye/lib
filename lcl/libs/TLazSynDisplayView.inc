// constructor
function TLazSynDisplayView_Create(): TLazSynDisplayView; extdecl;
begin
  {$define handleExceptionID := 39700}
  handleExceptionBegin
  Result := TLazSynDisplayView.Create();
  handleExceptionEnd
end;

// function
function TLazSynDisplayView_GetNextHighlighterToken(AObj: TLazSynDisplayView; var ATokenInfo: TLazSynDisplayTokenInfoPtr): LongBool; extdecl;
var
  OutATokenInfo: TLazSynDisplayTokenInfo;
begin
  {$define handleExceptionID := 39701}
  handleExceptionBegin
  Result := AObj.GetNextHighlighterToken(OutATokenInfo);
  ATokenInfo := TLazSynDisplayTokenInfoToGo(OutATokenInfo);
  handleExceptionEnd
end;

// function
function TLazSynDisplayView_GetLinesCount(AObj: TLazSynDisplayView): Integer; extdecl;
begin
  {$define handleExceptionID := 39702}
  handleExceptionBegin
  Result := AObj.GetLinesCount();
  handleExceptionEnd
end;

// function
procedure TLazSynDisplayView_GetDrawDividerInfo(AObj: TLazSynDisplayView; var Result: TSynDividerDrawConfigSetting); extdecl;
begin
  {$define handleExceptionID := 39703}
  handleExceptionBegin
  Result := AObj.GetDrawDividerInfo();
  handleExceptionEnd
end;

// function
procedure TLazSynDisplayView_TextToViewIndex(AObj: TLazSynDisplayView; ATextIndex: TLineIdx; var Result: TLineRange); extdecl;
begin
  {$define handleExceptionID := 39704}
  handleExceptionBegin
  Result := AObj.TextToViewIndex(ATextIndex);
  handleExceptionEnd
end;

// function
function TLazSynDisplayView_ViewToTextIndex(AObj: TLazSynDisplayView; AViewIndex: TLineIdx): TLineIdx; extdecl;
begin
  {$define handleExceptionID := 39705}
  handleExceptionBegin
  Result := AObj.ViewToTextIndex(AViewIndex);
  handleExceptionEnd
end;

// function
function TLazSynDisplayView_ViewToTextIndexEx(AObj: TLazSynDisplayView; AViewIndex: TLineIdx; var AViewRange: TLineRangePtr): TLineIdx; extdecl;
var
  OutAViewRange: TLineRange;
begin
  {$define handleExceptionID := 39706}
  handleExceptionBegin
  Result := AObj.ViewToTextIndexEx(AViewIndex, OutAViewRange);
  AViewRange := TLineRangeToGo(OutAViewRange);
  handleExceptionEnd
end;

// procedure
procedure TLazSynDisplayView_InitHighlighterTokens(AObj: TLazSynDisplayView; AHighlighter: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 39707}
  handleExceptionBegin
  AObj.InitHighlighterTokens(AHighlighter);
  handleExceptionEnd
end;

// procedure
procedure TLazSynDisplayView_SetHighlighterTokensLine(AObj: TLazSynDisplayView; ALine: TLineIdx; var ARealLine: TLineIdx; var AStartBytePos: Integer; var ALineByteLen: Integer); extdecl;
var
  OutARealLine: TLineIdx;
  OutAStartBytePos: Integer;
  OutALineByteLen: Integer;
begin
  {$define handleExceptionID := 39708}
  handleExceptionBegin
  AObj.SetHighlighterTokensLine(ALine, OutARealLine, OutAStartBytePos, OutALineByteLen);
  ARealLine := OutARealLine;
  AStartBytePos := OutAStartBytePos;
  ALineByteLen := OutALineByteLen;
  handleExceptionEnd
end;

// procedure
procedure TLazSynDisplayView_FinishHighlighterTokens(AObj: TLazSynDisplayView); extdecl;
begin
  {$define handleExceptionID := 39709}
  handleExceptionBegin
  AObj.FinishHighlighterTokens();
  handleExceptionEnd
end;

// property
function TLazSynDisplayView_NextView(ASet: LongBool; AObj: TLazSynDisplayView; AValue: TLazSynDisplayView): TLazSynDisplayView; extdecl;
begin
  {$define handleExceptionID := 39710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NextView := AValue
  end else
    Result := AObj.NextView;
  handleExceptionEnd
end;

exports
  TLazSynDisplayView_Create,
  TLazSynDisplayView_GetNextHighlighterToken,
  TLazSynDisplayView_GetLinesCount,
  TLazSynDisplayView_GetDrawDividerInfo,
  TLazSynDisplayView_TextToViewIndex,
  TLazSynDisplayView_ViewToTextIndex,
  TLazSynDisplayView_ViewToTextIndexEx,
  TLazSynDisplayView_InitHighlighterTokens,
  TLazSynDisplayView_SetHighlighterTokensLine,
  TLazSynDisplayView_FinishHighlighterTokens,
  TLazSynDisplayView_NextView;