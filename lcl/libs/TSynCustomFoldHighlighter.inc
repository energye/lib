// constructor
function TSynCustomFoldHighlighter_Create(AOwner: TComponent): TSynCustomFoldHighlighter; extdecl;
begin
  {$define handleExceptionID := 43200}
  handleExceptionBegin
  Result := TSynCustomFoldHighlighter.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockOpeningCountWithLineIdxSynFoldBlockFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43201}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldBlockOpeningCount(ALineIndex, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockClosingCountWithLineIdxSynFoldBlockFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43202}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldBlockClosingCount(ALineIndex, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockEndLevelWithLineIdxSynFoldBlockFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43203}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldBlockEndLevel(ALineIndex, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockMinLevelWithLineIdxSynFoldBlockFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43204}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldBlockMinLevel(ALineIndex, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockNestedTypesWithLIdxIntPointerSFBFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; ANestIndex: Integer; var AType: Pointer; var AFilter: TSynFoldBlockFilterPtr): LongBool; extdecl;
var
  OutAType: Pointer;
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43205}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldBlockNestedTypes(ALineIndex, ANestIndex, OutAType, InAFilter);
  AType := OutAType;
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockOpeningCountWithLIdxIntSFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43206}
  handleExceptionBegin
  Result := AObj.FoldBlockOpeningCount(ALineIndex, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockClosingCountWithLIdxIntSFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43207}
  handleExceptionBegin
  Result := AObj.FoldBlockClosingCount(ALineIndex, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockEndLevelWithLIdxIntSFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43208}
  handleExceptionBegin
  Result := AObj.FoldBlockEndLevel(ALineIndex, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockMinLevelWithLIdxIntSFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43209}
  handleExceptionBegin
  Result := AObj.FoldBlockMinLevel(ALineIndex, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldBlockNestedTypesWithLIdxIntX2PointerSFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; ANestIndex: Integer; var AType: Pointer; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): LongBool; extdecl;
var
  OutAType: Pointer;
begin
  {$define handleExceptionID := 43210}
  handleExceptionBegin
  Result := AObj.FoldBlockNestedTypes(ALineIndex, ANestIndex, OutAType, AFoldGroup, AFlags);
  AType := OutAType;
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldTypeCount(AObj: TSynCustomFoldHighlighter): integer; extdecl;
begin
  {$define handleExceptionID := 43211}
  handleExceptionBegin
  Result := AObj.FoldTypeCount();
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldTypeAtNodeIndex(AObj: TSynCustomFoldHighlighter; ALineIndex: Integer; FoldIndex: Integer; UseCloseNodes: LongBool): integer; extdecl;
begin
  {$define handleExceptionID := 43212}
  handleExceptionBegin
  Result := AObj.FoldTypeAtNodeIndex(ALineIndex, FoldIndex, UseCloseNodes);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FindNextLineWithMinFoldLevelWithLIdxIntSFBFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; ASearchLevel: Integer; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43213}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FindNextLineWithMinFoldLevel(ALineIndex, ASearchLevel, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FindNextLineWithMinFoldLevelWithLIdxIntX2SFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: TLineIdx; ASearchLevel: Integer; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43214}
  handleExceptionBegin
  Result := AObj.FindNextLineWithMinFoldLevel(ALineIndex, ASearchLevel, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldEndLineWithIntX2(AObj: TSynCustomFoldHighlighter; ALineIndex: Integer; FoldIndex: Integer): integer; extdecl;
begin
  {$define handleExceptionID := 43215}
  handleExceptionBegin
  Result := AObj.FoldEndLine(ALineIndex, FoldIndex);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldEndLineWithIntX2SFBFilter(AObj: TSynCustomFoldHighlighter; ALineIndex: Integer; FoldIndex: Integer; var AFilter: TSynFoldBlockFilterPtr): integer; extdecl;
var
  InAFilter: TSynFoldBlockFilter;
begin
  {$define handleExceptionID := 43216}
  handleExceptionBegin
  InAFilter := TSynFoldBlockFilterToPas(AFilter);
  Result := AObj.FoldEndLine(ALineIndex, FoldIndex, InAFilter);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldEndLineWithIntX3SFBFFlags(AObj: TSynCustomFoldHighlighter; ALineIndex: Integer; FoldIndex: Integer; AFoldGroup: integer; AFlags: TSynFoldBlockFilterFlags): integer; extdecl;
begin
  {$define handleExceptionID := 43217}
  handleExceptionBegin
  Result := AObj.FoldEndLine(ALineIndex, FoldIndex, AFoldGroup, AFlags);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_FoldLineLength(AObj: TSynCustomFoldHighlighter; ALineIndex: Integer; FoldIndex: Integer): integer; extdecl;
begin
  {$define handleExceptionID := 43218}
  handleExceptionBegin
  Result := AObj.FoldLineLength(ALineIndex, FoldIndex);
  handleExceptionEnd
end;

// function
function TSynCustomFoldHighlighter_PerformScan(AObj: TSynCustomFoldHighlighter; StartIndex: Integer; EndIndex: Integer; ForceEndIndex: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 43219}
  handleExceptionBegin
  Result := AObj.PerformScan(StartIndex, EndIndex, ForceEndIndex);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomFoldHighlighter_DoCurrentLinesChanged(AObj: TSynCustomFoldHighlighter); extdecl;
begin
  {$define handleExceptionID := 43220}
  handleExceptionBegin
  AObj.DoCurrentLinesChanged();
  handleExceptionEnd
end;

// property
function TSynCustomFoldHighlighter_FoldNodeInfo(AObj: TSynCustomFoldHighlighter; Line: TLineIdx): TLazSynFoldNodeInfoList; extdecl;
begin
  {$define handleExceptionID := 43221}
  handleExceptionBegin
  Result := AObj.FoldNodeInfo[Line];
  handleExceptionEnd
end;

// property
function TSynCustomFoldHighlighter_FoldConfig(ASet: LongBool; AObj: TSynCustomFoldHighlighter; Index: Integer; AValue: TSynCustomFoldConfig): TSynCustomFoldConfig; extdecl;
begin
  {$define handleExceptionID := 43222}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FoldConfig[Index] := AValue
  end else
    Result := AObj.FoldConfig[Index];
  handleExceptionEnd
end;

// property
function TSynCustomFoldHighlighter_FoldConfigCount(AObj: TSynCustomFoldHighlighter): Integer; extdecl;
begin
  {$define handleExceptionID := 43223}
  handleExceptionBegin
  Result := AObj.FoldConfigCount;
  handleExceptionEnd
end;

function TSynCustomFoldHighlighter_TClass(): TClass; extdecl;
begin
  Result := TSynCustomFoldHighlighter;
end;

exports
  TSynCustomFoldHighlighter_Create,
  TSynCustomFoldHighlighter_FoldBlockOpeningCountWithLineIdxSynFoldBlockFilter,
  TSynCustomFoldHighlighter_FoldBlockClosingCountWithLineIdxSynFoldBlockFilter,
  TSynCustomFoldHighlighter_FoldBlockEndLevelWithLineIdxSynFoldBlockFilter,
  TSynCustomFoldHighlighter_FoldBlockMinLevelWithLineIdxSynFoldBlockFilter,
  TSynCustomFoldHighlighter_FoldBlockNestedTypesWithLIdxIntPointerSFBFilter,
  TSynCustomFoldHighlighter_FoldBlockOpeningCountWithLIdxIntSFBFFlags,
  TSynCustomFoldHighlighter_FoldBlockClosingCountWithLIdxIntSFBFFlags,
  TSynCustomFoldHighlighter_FoldBlockEndLevelWithLIdxIntSFBFFlags,
  TSynCustomFoldHighlighter_FoldBlockMinLevelWithLIdxIntSFBFFlags,
  TSynCustomFoldHighlighter_FoldBlockNestedTypesWithLIdxIntX2PointerSFBFFlags,
  TSynCustomFoldHighlighter_FoldTypeCount,
  TSynCustomFoldHighlighter_FoldTypeAtNodeIndex,
  TSynCustomFoldHighlighter_FindNextLineWithMinFoldLevelWithLIdxIntSFBFilter,
  TSynCustomFoldHighlighter_FindNextLineWithMinFoldLevelWithLIdxIntX2SFBFFlags,
  TSynCustomFoldHighlighter_FoldEndLineWithIntX2,
  TSynCustomFoldHighlighter_FoldEndLineWithIntX2SFBFilter,
  TSynCustomFoldHighlighter_FoldEndLineWithIntX3SFBFFlags,
  TSynCustomFoldHighlighter_FoldLineLength,
  TSynCustomFoldHighlighter_PerformScan,
  TSynCustomFoldHighlighter_DoCurrentLinesChanged,
  TSynCustomFoldHighlighter_FoldNodeInfo,
  TSynCustomFoldHighlighter_FoldConfig,
  TSynCustomFoldHighlighter_FoldConfigCount,
  TSynCustomFoldHighlighter_TClass;