// constructor
function TSynCppSyn_Create(AOwner: TComponent): TSynCppSyn; extdecl;
begin
  {$define handleExceptionID := 43000}
  handleExceptionBegin
  Result := TSynCppSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynCppSyn_GetDefaultAttribute(AObj: TSynCppSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43001}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynCppSyn_GetTokenID(AObj: TSynCppSyn): SynHighlighterCpp.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43002}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynCppSyn_ExtTokenID(AObj: TSynCppSyn): SynHighlighterCpp.TxtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43003}
  handleExceptionBegin
  Result := AObj.ExtTokenID;
  handleExceptionEnd
end;

// property
function TSynCppSyn_AsmAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AsmAttri := AValue
  end else
    Result := AObj.AsmAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_CommentAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_DirecAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirecAttri := AValue
  end else
    Result := AObj.DirecAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_IdentifierAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_InvalidAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InvalidAttri := AValue
  end else
    Result := AObj.InvalidAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_KeyAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_NumberAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_SpaceAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_StringAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynCppSyn_SymbolAttri(ASet: LongBool; AObj: TSynCppSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function TSynCppSyn_TClass(): TClass; extdecl;
begin
  Result := TSynCppSyn;
end;

exports
  TSynCppSyn_Create,
  TSynCppSyn_GetDefaultAttribute,
  TSynCppSyn_GetTokenID,
  TSynCppSyn_ExtTokenID,
  TSynCppSyn_AsmAttri,
  TSynCppSyn_CommentAttri,
  TSynCppSyn_DirecAttri,
  TSynCppSyn_IdentifierAttri,
  TSynCppSyn_InvalidAttri,
  TSynCppSyn_KeyAttri,
  TSynCppSyn_NumberAttri,
  TSynCppSyn_SpaceAttri,
  TSynCppSyn_StringAttri,
  TSynCppSyn_SymbolAttri,
  TSynCppSyn_TClass;