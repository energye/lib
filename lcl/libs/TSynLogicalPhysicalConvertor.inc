// constructor
function TSynLogicalPhysicalConvertor_Create(ALines: TSynEditStrings): TSynLogicalPhysicalConvertor; extdecl;
begin
  {$define handleExceptionID := 39500}
  handleExceptionBegin
  Result := TSynLogicalPhysicalConvertor.Create(ALines);
  handleExceptionEnd
end;

// function
function TSynLogicalPhysicalConvertor_PhysicalToLogicalWithIntX2(AObj: TSynLogicalPhysicalConvertor; AIndex: Integer; AColumn: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39501}
  handleExceptionBegin
  Result := AObj.PhysicalToLogical(AIndex, AColumn);
  handleExceptionEnd
end;

// function
function TSynLogicalPhysicalConvertor_PhysicalToLogicalWithIntX3SPCSideSLPFlags(AObj: TSynLogicalPhysicalConvertor; AIndex: Integer; AColumn: Integer; var AColOffset: Integer; ACharSide: TSynPhysCharSide; AFlags: TSynLogPhysFlags): Integer; extdecl;
var
  OutAColOffset: Integer;
begin
  {$define handleExceptionID := 39502}
  handleExceptionBegin
  Result := AObj.PhysicalToLogical(AIndex, AColumn, OutAColOffset, ACharSide, AFlags);
  AColOffset := OutAColOffset;
  handleExceptionEnd
end;

// function
function TSynLogicalPhysicalConvertor_LogicalToPhysicalWithIntX2(AObj: TSynLogicalPhysicalConvertor; AIndex: Integer; ABytePos: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39503}
  handleExceptionBegin
  Result := AObj.LogicalToPhysical(AIndex, ABytePos);
  handleExceptionEnd
end;

// function
function TSynLogicalPhysicalConvertor_LogicalToPhysicalWithIntX3SLCSideSLPFlags(AObj: TSynLogicalPhysicalConvertor; AIndex: Integer; ABytePos: Integer; var AColOffset: Integer; ACharSide: TSynLogCharSide; AFlags: TSynLogPhysFlags): Integer; extdecl;
var
  OutAColOffset: Integer;
begin
  {$define handleExceptionID := 39504}
  handleExceptionBegin
  OutAColOffset := AColOffset;
  Result := AObj.LogicalToPhysical(AIndex, ABytePos, OutAColOffset, ACharSide, AFlags);
  AColOffset := OutAColOffset;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_CurrentLine(ASet: LongBool; AObj: TSynLogicalPhysicalConvertor; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentLine := AValue
  end else
    Result := AObj.CurrentLine;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_CurrentWidths(AObj: TSynLogicalPhysicalConvertor): PPhysicalCharWidth; extdecl;
begin
  {$define handleExceptionID := 39506}
  handleExceptionBegin
  Result := AObj.CurrentWidths;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_CurrentWidthsDirect(AObj: TSynLogicalPhysicalConvertor): TByteArrayWrap; extdecl;
begin
  {$define handleExceptionID := 39507}
  handleExceptionBegin
  Result := TByteArrayWrap.Create(AObj.CurrentWidthsDirect);
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_CurrentWidthsCount(AObj: TSynLogicalPhysicalConvertor): Integer; extdecl;
begin
  {$define handleExceptionID := 39508}
  handleExceptionBegin
  Result := AObj.CurrentWidthsCount;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_AdjustedLogToPhysOrigin(AObj: TSynLogicalPhysicalConvertor): Integer; extdecl;
begin
  {$define handleExceptionID := 39509}
  handleExceptionBegin
  Result := AObj.AdjustedLogToPhysOrigin;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_AdjustedPhysToLogOrigin(AObj: TSynLogicalPhysicalConvertor): Integer; extdecl;
begin
  {$define handleExceptionID := 39510}
  handleExceptionBegin
  Result := AObj.AdjustedPhysToLogOrigin;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_UnAdjustedPhysToLogResult(AObj: TSynLogicalPhysicalConvertor): Integer; extdecl;
begin
  {$define handleExceptionID := 39511}
  handleExceptionBegin
  Result := AObj.UnAdjustedPhysToLogResult;
  handleExceptionEnd
end;

// property
function TSynLogicalPhysicalConvertor_UnAdjustedPhysToLogColOffs(AObj: TSynLogicalPhysicalConvertor): Integer; extdecl;
begin
  {$define handleExceptionID := 39512}
  handleExceptionBegin
  Result := AObj.UnAdjustedPhysToLogColOffs;
  handleExceptionEnd
end;

exports
  TSynLogicalPhysicalConvertor_Create,
  TSynLogicalPhysicalConvertor_PhysicalToLogicalWithIntX2,
  TSynLogicalPhysicalConvertor_PhysicalToLogicalWithIntX3SPCSideSLPFlags,
  TSynLogicalPhysicalConvertor_LogicalToPhysicalWithIntX2,
  TSynLogicalPhysicalConvertor_LogicalToPhysicalWithIntX3SLCSideSLPFlags,
  TSynLogicalPhysicalConvertor_CurrentLine,
  TSynLogicalPhysicalConvertor_CurrentWidths,
  TSynLogicalPhysicalConvertor_CurrentWidthsDirect,
  TSynLogicalPhysicalConvertor_CurrentWidthsCount,
  TSynLogicalPhysicalConvertor_AdjustedLogToPhysOrigin,
  TSynLogicalPhysicalConvertor_AdjustedPhysToLogOrigin,
  TSynLogicalPhysicalConvertor_UnAdjustedPhysToLogResult,
  TSynLogicalPhysicalConvertor_UnAdjustedPhysToLogColOffs;