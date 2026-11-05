// constructor
function TSynPythonSyn_Create(AOwner: TComponent): TSynPythonSyn; extdecl;
begin
  {$define handleExceptionID := 43900}
  handleExceptionBegin
  Result := TSynPythonSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynPythonSyn_GetDefaultAttribute(AObj: TSynPythonSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43901}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynPythonSyn_GetTokenID(AObj: TSynPythonSyn): SynHighlighterPython.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43902}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// function
function TSynPythonSyn_GetKeywordIdentifiers(AObj: TSynPythonSyn): TStringList; extdecl;
begin
  {$define handleExceptionID := 43903}
  handleExceptionBegin
  Result := AObj.GetKeywordIdentifiers();
  handleExceptionEnd
end;

// property
function TSynPythonSyn_CommentAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_IdentifierAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_KeyAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_NonKeyAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NonKeyAttri := AValue
  end else
    Result := AObj.NonKeyAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_SystemAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SystemAttri := AValue
  end else
    Result := AObj.SystemAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_NumberAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_HexAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HexAttri := AValue
  end else
    Result := AObj.HexAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_OctalAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OctalAttri := AValue
  end else
    Result := AObj.OctalAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_FloatAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FloatAttri := AValue
  end else
    Result := AObj.FloatAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_SpaceAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_StringAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_DocStringAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DocStringAttri := AValue
  end else
    Result := AObj.DocStringAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_SymbolAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynPythonSyn_ErrorAttri(ASet: LongBool; AObj: TSynPythonSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ErrorAttri := AValue
  end else
    Result := AObj.ErrorAttri;
  handleExceptionEnd
end;

function TSynPythonSyn_TClass(): TClass; extdecl;
begin
  Result := TSynPythonSyn;
end;

exports
  TSynPythonSyn_Create,
  TSynPythonSyn_GetDefaultAttribute,
  TSynPythonSyn_GetTokenID,
  TSynPythonSyn_GetKeywordIdentifiers,
  TSynPythonSyn_CommentAttri,
  TSynPythonSyn_IdentifierAttri,
  TSynPythonSyn_KeyAttri,
  TSynPythonSyn_NonKeyAttri,
  TSynPythonSyn_SystemAttri,
  TSynPythonSyn_NumberAttri,
  TSynPythonSyn_HexAttri,
  TSynPythonSyn_OctalAttri,
  TSynPythonSyn_FloatAttri,
  TSynPythonSyn_SpaceAttri,
  TSynPythonSyn_StringAttri,
  TSynPythonSyn_DocStringAttri,
  TSynPythonSyn_SymbolAttri,
  TSynPythonSyn_ErrorAttri,
  TSynPythonSyn_TClass;