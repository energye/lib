// constructor
function TSynCssSyn_Create(AOwner: TComponent): TSynCssSyn; extdecl;
begin
  {$define handleExceptionID := 43100}
  handleExceptionBegin
  Result := TSynCssSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynCssSyn_GetDefaultAttribute(AObj: TSynCssSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43101}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynCssSyn_GetTokenID(AObj: TSynCssSyn): SynHighlighterCss.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43102}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// function
function TSynCssSyn_KeyHash2(AObj: TSynCssSyn; ToHash: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 43103}
  handleExceptionBegin
  Result := AObj.KeyHash2(ToHash);
  handleExceptionEnd
end;

// property
function TSynCssSyn_CommentAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_IdentifierAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_KeyAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_NumberAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_SpaceAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_StringAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_SymbolAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_MeasurementUnitAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MeasurementUnitAttri := AValue
  end else
    Result := AObj.MeasurementUnitAttri;
  handleExceptionEnd
end;

// property
function TSynCssSyn_SelectorAttri(ASet: LongBool; AObj: TSynCssSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectorAttri := AValue
  end else
    Result := AObj.SelectorAttri;
  handleExceptionEnd
end;

function TSynCssSyn_TClass(): TClass; extdecl;
begin
  Result := TSynCssSyn;
end;

exports
  TSynCssSyn_Create,
  TSynCssSyn_GetDefaultAttribute,
  TSynCssSyn_GetTokenID,
  TSynCssSyn_KeyHash2,
  TSynCssSyn_CommentAttri,
  TSynCssSyn_IdentifierAttri,
  TSynCssSyn_KeyAttri,
  TSynCssSyn_NumberAttri,
  TSynCssSyn_SpaceAttri,
  TSynCssSyn_StringAttri,
  TSynCssSyn_SymbolAttri,
  TSynCssSyn_MeasurementUnitAttri,
  TSynCssSyn_SelectorAttri,
  TSynCssSyn_TClass;