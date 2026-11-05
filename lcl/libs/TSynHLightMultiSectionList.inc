// constructor
function TSynHLightMultiSectionList_Create(): TSynHLightMultiSectionList; extdecl;
begin
  {$define handleExceptionID := 44600}
  handleExceptionBegin
  Result := TSynHLightMultiSectionList.Create();
  handleExceptionEnd
end;

// function
function TSynHLightMultiSectionList_IndexOfFirstSectionAtLineIdx(AObj: TSynHLightMultiSectionList; ALineIdx: Integer; ACharPos: Integer; UseNext: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 44601}
  handleExceptionBegin
  Result := AObj.IndexOfFirstSectionAtLineIdx(ALineIdx, ACharPos, UseNext);
  handleExceptionEnd
end;

// function
function TSynHLightMultiSectionList_IndexOfFirstSectionAtVirtualIdx(AObj: TSynHLightMultiSectionList; ALineIdx: Integer; AGetLastSection: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 44602}
  handleExceptionBegin
  Result := AObj.IndexOfFirstSectionAtVirtualIdx(ALineIdx, AGetLastSection);
  handleExceptionEnd
end;

// function
function TSynHLightMultiSectionList_VirtualIdxToRealIdx(AObj: TSynHLightMultiSectionList; AVLineIdx: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44603}
  handleExceptionBegin
  Result := AObj.VirtualIdxToRealIdx(AVLineIdx);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiSectionList_Debug(AObj: TSynHLightMultiSectionList); extdecl;
begin
  {$define handleExceptionID := 44604}
  handleExceptionBegin
  AObj.Debug();
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiSectionList_Insert(AObj: TSynHLightMultiSectionList; AnIndex: Integer; var AnSection: TSynHLightMultiVirtualSectionPtr); extdecl;
var
  InAnSection: TSynHLightMultiVirtualSection;
begin
  {$define handleExceptionID := 44605}
  handleExceptionBegin
  InAnSection := TSynHLightMultiVirtualSectionToPas(AnSection);
  AObj.Insert(AnIndex, InAnSection);
  handleExceptionEnd
end;

// procedure
procedure TSynHLightMultiSectionList_Delete(AObj: TSynHLightMultiSectionList; AnIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 44606}
  handleExceptionBegin
  AObj.Delete(AnIndex);
  handleExceptionEnd
end;

// property
procedure TSynHLightMultiSectionList_Sections(ASet: LongBool; AObj: TSynHLightMultiSectionList; Index: Integer; var AValue: TSynHLightMultiVirtualSectionPtr; var Result: TSynHLightMultiVirtualSectionPtr); extdecl;
begin
  {$define handleExceptionID := 44607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sections[Index] := TSynHLightMultiVirtualSectionToPas(AValue)
  end else
    Result := TSynHLightMultiVirtualSectionToGo(AObj.Sections[Index]);
  handleExceptionEnd
end;

// property
procedure TSynHLightMultiSectionList_PSections(AObj: TSynHLightMultiSectionList; Index: Integer; var Result: TSynHLightMultiVirtualSectionPtr); extdecl;
begin
  {$define handleExceptionID := 44608}
  handleExceptionBegin
  Result := TSynHLightMultiVirtualSectionToGo(AObj.PSections[Index]^);
  handleExceptionEnd
end;

exports
  TSynHLightMultiSectionList_Create,
  TSynHLightMultiSectionList_IndexOfFirstSectionAtLineIdx,
  TSynHLightMultiSectionList_IndexOfFirstSectionAtVirtualIdx,
  TSynHLightMultiSectionList_VirtualIdxToRealIdx,
  TSynHLightMultiSectionList_Debug,
  TSynHLightMultiSectionList_Insert,
  TSynHLightMultiSectionList_Delete,
  TSynHLightMultiSectionList_Sections,
  TSynHLightMultiSectionList_PSections;