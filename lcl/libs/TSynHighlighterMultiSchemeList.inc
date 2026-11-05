// constructor
function TSynHighlighterMultiSchemeList_Create(aOwner: TSynMultiSyn): TSynHighlighterMultiSchemeList; extdecl;
begin
  {$define handleExceptionID := 44400}
  handleExceptionBegin
  Result := TSynHighlighterMultiSchemeList.Create(aOwner);
  handleExceptionEnd
end;

// function
function TSynHighlighterMultiSchemeList_IndexOf(AObj: TSynHighlighterMultiSchemeList; AnItem: TSynHighlighterMultiScheme): Integer; extdecl;
begin
  {$define handleExceptionID := 44401}
  handleExceptionBegin
  Result := AObj.IndexOf(AnItem);
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiSchemeList_ItemsWithIntToSynHighlighterMultiScheme(ASet: LongBool; AObj: TSynHighlighterMultiSchemeList; aIndex: integer; AValue: TSynHighlighterMultiScheme): TSynHighlighterMultiScheme; extdecl;
begin
  {$define handleExceptionID := 44402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[aIndex] := AValue
  end else
    Result := AObj.Items[aIndex];
  handleExceptionEnd
end;

// property
procedure TSynHighlighterMultiSchemeList_ConvertedCurrentLine(AObj: TSynHighlighterMultiSchemeList; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44403}
  handleExceptionBegin
  StringBufferCreate(AObj.ConvertedCurrentLine, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TSynHighlighterMultiSchemeList_CurrentLine(ASet: LongBool; AObj: TSynHighlighterMultiSchemeList; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentLine := AValue
  end else
    StringBufferCreate(AObj.CurrentLine, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynHighlighterMultiSchemeList_OwnerToSynMultiSyn(AObj: TSynHighlighterMultiSchemeList): TSynMultiSyn; extdecl;
begin
  {$define handleExceptionID := 44405}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  TSynHighlighterMultiSchemeList_Create,
  TSynHighlighterMultiSchemeList_IndexOf,
  TSynHighlighterMultiSchemeList_ItemsWithIntToSynHighlighterMultiScheme,
  TSynHighlighterMultiSchemeList_ConvertedCurrentLine,
  TSynHighlighterMultiSchemeList_CurrentLine,
  TSynHighlighterMultiSchemeList_OwnerToSynMultiSyn;