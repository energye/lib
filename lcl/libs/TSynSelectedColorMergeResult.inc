// constructor
function TSynSelectedColorMergeResult_Create(): TSynSelectedColorMergeResult; extdecl;
begin
  {$define handleExceptionID := 38500}
  handleExceptionBegin
  Result := TSynSelectedColorMergeResult.Create();
  handleExceptionEnd
end;

// constructor
function TSynSelectedColorMergeResult_CreateWithStrX2(aCaption: PChar; aStoredName: PChar): TSynSelectedColorMergeResult; extdecl;
begin
  {$define handleExceptionID := 38501}
  handleExceptionBegin
  Result := TSynSelectedColorMergeResult.Create(aCaption, aStoredName);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_InitMergeInfo(AObj: TSynSelectedColorMergeResult); extdecl;
begin
  {$define handleExceptionID := 38502}
  handleExceptionBegin
  AObj.InitMergeInfo();
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_ProcessMergeInfo(AObj: TSynSelectedColorMergeResult); extdecl;
begin
  {$define handleExceptionID := 38503}
  handleExceptionBegin
  AObj.ProcessMergeInfo();
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_CleanupMergeInfo(AObj: TSynSelectedColorMergeResult); extdecl;
begin
  {$define handleExceptionID := 38504}
  handleExceptionBegin
  AObj.CleanupMergeInfo();
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_MergeWithSynHighlighterAttributesModifier(AObj: TSynSelectedColorMergeResult; Other: TSynHighlighterAttributesModifier); extdecl;
begin
  {$define handleExceptionID := 38505}
  handleExceptionBegin
  AObj.Merge(Other);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_MergeWithSHAModifierLSDTBoundX2(AObj: TSynSelectedColorMergeResult; Other: TSynHighlighterAttributesModifier; var LeftCol: TLazSynDisplayTokenBoundPtr; var RightCol: TLazSynDisplayTokenBoundPtr); extdecl;
var
  InLeftCol: TLazSynDisplayTokenBound;
  InRightCol: TLazSynDisplayTokenBound;
begin
  {$define handleExceptionID := 38506}
  handleExceptionBegin
  InLeftCol := TLazSynDisplayTokenBoundToPas(LeftCol);
  InRightCol := TLazSynDisplayTokenBoundToPas(RightCol);
  AObj.Merge(Other, InLeftCol, InRightCol);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColorMergeResult_MergeFrames(AObj: TSynSelectedColorMergeResult; Other: TSynHighlighterAttributesModifier; var LeftCol: TLazSynDisplayTokenBoundPtr; var RightCol: TLazSynDisplayTokenBoundPtr); extdecl;
var
  InLeftCol: TLazSynDisplayTokenBound;
  InRightCol: TLazSynDisplayTokenBound;
begin
  {$define handleExceptionID := 38507}
  handleExceptionBegin
  InLeftCol := TLazSynDisplayTokenBoundToPas(LeftCol);
  InRightCol := TLazSynDisplayTokenBoundToPas(RightCol);
  AObj.MergeFrames(Other, InLeftCol, InRightCol);
  handleExceptionEnd
end;

// property
function TSynSelectedColorMergeResult_FrameSideColors(AObj: TSynSelectedColorMergeResult; Side: TLazSynBorderSide): TColor; extdecl;
begin
  {$define handleExceptionID := 38508}
  handleExceptionBegin
  Result := AObj.FrameSideColors[Side];
  handleExceptionEnd
end;

// property
function TSynSelectedColorMergeResult_FrameSideStyles(AObj: TSynSelectedColorMergeResult; Side: TLazSynBorderSide): TSynLineStyle; extdecl;
begin
  {$define handleExceptionID := 38509}
  handleExceptionBegin
  Result := AObj.FrameSideStyles[Side];
  handleExceptionEnd
end;

// property
procedure TSynSelectedColorMergeResult_CurrentStartX(ASet: LongBool; AObj: TSynSelectedColorMergeResult; var AValue: TLazSynDisplayTokenBoundPtr; var Result: TLazSynDisplayTokenBoundPtr); extdecl;
begin
  {$define handleExceptionID := 38510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentStartX := TLazSynDisplayTokenBoundToPas(AValue)
  end else
    Result := TLazSynDisplayTokenBoundToGo(AObj.CurrentStartX);
  handleExceptionEnd
end;

// property
procedure TSynSelectedColorMergeResult_CurrentEndX(ASet: LongBool; AObj: TSynSelectedColorMergeResult; var AValue: TLazSynDisplayTokenBoundPtr; var Result: TLazSynDisplayTokenBoundPtr); extdecl;
begin
  {$define handleExceptionID := 38511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentEndX := TLazSynDisplayTokenBoundToPas(AValue)
  end else
    Result := TLazSynDisplayTokenBoundToGo(AObj.CurrentEndX);
  handleExceptionEnd
end;

exports
  TSynSelectedColorMergeResult_Create,
  TSynSelectedColorMergeResult_CreateWithStrX2,
  TSynSelectedColorMergeResult_InitMergeInfo,
  TSynSelectedColorMergeResult_ProcessMergeInfo,
  TSynSelectedColorMergeResult_CleanupMergeInfo,
  TSynSelectedColorMergeResult_MergeWithSynHighlighterAttributesModifier,
  TSynSelectedColorMergeResult_MergeWithSHAModifierLSDTBoundX2,
  TSynSelectedColorMergeResult_MergeFrames,
  TSynSelectedColorMergeResult_FrameSideColors,
  TSynSelectedColorMergeResult_FrameSideStyles,
  TSynSelectedColorMergeResult_CurrentStartX,
  TSynSelectedColorMergeResult_CurrentEndX;