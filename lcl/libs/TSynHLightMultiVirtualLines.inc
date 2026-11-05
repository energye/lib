// constructor
function TSynHLightMultiVirtualLines_Create(ALines: TSynEditStringsBase): TSynHLightMultiVirtualLines; extdecl;
begin
  {$define handleExceptionID := 44300}
  handleExceptionBegin
  Result := TSynHLightMultiVirtualLines.Create(ALines);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_Debug(AObj: TSynHLightMultiVirtualLines); extdecl;
begin
  {$define handleExceptionID := 44301}
  handleExceptionBegin
  AObj.Debug();
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_PrepareRegionScan(AObj: TSynHLightMultiVirtualLines; AStartLineIdx: Integer); extdecl;
begin
  {$define handleExceptionID := 44302}
  handleExceptionBegin
  AObj.PrepareRegionScan(AStartLineIdx);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_FinishRegionScan(AObj: TSynHLightMultiVirtualLines; AEndLineIdx: Integer); extdecl;
begin
  {$define handleExceptionID := 44303}
  handleExceptionBegin
  AObj.FinishRegionScan(AEndLineIdx);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RegionScanUpdateFirstRegionEnd(AObj: TSynHLightMultiVirtualLines; var AnEndPoint: TPoint; ATokenEndPos: Integer); extdecl;
begin
  {$define handleExceptionID := 44304}
  handleExceptionBegin
  AObj.RegionScanUpdateFirstRegionEnd(AnEndPoint, ATokenEndPos);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RegionScanUpdateOrInsertRegion(AObj: TSynHLightMultiVirtualLines; var AStartPoint: TPoint; var AnEndPoint: TPoint; ATokenStartPos: Integer; ATokenEndPos: Integer); extdecl;
begin
  {$define handleExceptionID := 44305}
  handleExceptionBegin
  AObj.RegionScanUpdateOrInsertRegion(AStartPoint, AnEndPoint, ATokenStartPos, ATokenEndPos);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RegionScanUpdateLastRegionStart(AObj: TSynHLightMultiVirtualLines; var AStartPoint: TPoint; ATokenStartPos: Integer; ALineIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 44306}
  handleExceptionBegin
  AObj.RegionScanUpdateLastRegionStart(AStartPoint, ATokenStartPos, ALineIndex);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RealLinesInserted(AObj: TSynHLightMultiVirtualLines; AIndex: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 44307}
  handleExceptionBegin
  AObj.RealLinesInserted(AIndex, ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RealLinesDeleted(AObj: TSynHLightMultiVirtualLines; AIndex: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 44308}
  handleExceptionBegin
  AObj.RealLinesDeleted(AIndex, ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_RealLinesChanged(AObj: TSynHLightMultiVirtualLines; AIndex: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 44309}
  handleExceptionBegin
  AObj.RealLinesChanged(AIndex, ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiVirtualLines_ResetHLChangedLines(AObj: TSynHLightMultiVirtualLines); extdecl;
begin
  {$define handleExceptionID := 44310}
  handleExceptionBegin
  AObj.ResetHLChangedLines();
  handleExceptionEnd
end;

// property
function TSynHLightMultiVirtualLines_FirstHLChangedLine(AObj: TSynHLightMultiVirtualLines): Integer; extdecl;
begin
  {$define handleExceptionID := 44311}
  handleExceptionBegin
  Result := AObj.FirstHLChangedLine;
  handleExceptionEnd
end;

// property
function TSynHLightMultiVirtualLines_LastHLChangedLine(AObj: TSynHLightMultiVirtualLines): Integer; extdecl;
begin
  {$define handleExceptionID := 44312}
  handleExceptionBegin
  Result := AObj.LastHLChangedLine;
  handleExceptionEnd
end;

// property
function TSynHLightMultiVirtualLines_SectionList(AObj: TSynHLightMultiVirtualLines): TSynHLightMultiSectionList; extdecl;
begin
  {$define handleExceptionID := 44313}
  handleExceptionBegin
  Result := AObj.SectionList;
  handleExceptionEnd
end;

// property
function TSynHLightMultiVirtualLines_Scheme(ASet: LongBool; AObj: TSynHLightMultiVirtualLines; AValue: TSynHighlighterMultiScheme): TSynHighlighterMultiScheme; extdecl;
begin
  {$define handleExceptionID := 44314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scheme := AValue
  end else
    Result := AObj.Scheme;
  handleExceptionEnd
end;

exports
  TSynHLightMultiVirtualLines_Create,
  TSynHLightMultiVirtualLines_Debug,
  TSynHLightMultiVirtualLines_PrepareRegionScan,
  TSynHLightMultiVirtualLines_FinishRegionScan,
  TSynHLightMultiVirtualLines_RegionScanUpdateFirstRegionEnd,
  TSynHLightMultiVirtualLines_RegionScanUpdateOrInsertRegion,
  TSynHLightMultiVirtualLines_RegionScanUpdateLastRegionStart,
  TSynHLightMultiVirtualLines_RealLinesInserted,
  TSynHLightMultiVirtualLines_RealLinesDeleted,
  TSynHLightMultiVirtualLines_RealLinesChanged,
  TSynHLightMultiVirtualLines_ResetHLChangedLines,
  TSynHLightMultiVirtualLines_FirstHLChangedLine,
  TSynHLightMultiVirtualLines_LastHLChangedLine,
  TSynHLightMultiVirtualLines_SectionList,
  TSynHLightMultiVirtualLines_Scheme;