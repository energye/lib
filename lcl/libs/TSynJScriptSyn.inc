// constructor
function TSynJScriptSyn_Create(AOwner: TComponent): TSynJScriptSyn; extdecl;
begin
  {$define handleExceptionID := 43600}
  handleExceptionBegin
  Result := TSynJScriptSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynJScriptSyn_GetDefaultAttribute(AObj: TSynJScriptSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43601}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynJScriptSyn_GetTokenID(AObj: TSynJScriptSyn): SynHighlighterJScript.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43602}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_BracketAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BracketAttri := AValue
  end else
    Result := AObj.BracketAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_CommentAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_IdentifierAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_KeyAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_NonReservedKeyAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NonReservedKeyAttri := AValue
  end else
    Result := AObj.NonReservedKeyAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_EventAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EventAttri := AValue
  end else
    Result := AObj.EventAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_NumberAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_SpaceAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_StringAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynJScriptSyn_SymbolAttri(ASet: LongBool; AObj: TSynJScriptSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function TSynJScriptSyn_TClass(): TClass; extdecl;
begin
  Result := TSynJScriptSyn;
end;

exports
  TSynJScriptSyn_Create,
  TSynJScriptSyn_GetDefaultAttribute,
  TSynJScriptSyn_GetTokenID,
  TSynJScriptSyn_BracketAttri,
  TSynJScriptSyn_CommentAttri,
  TSynJScriptSyn_IdentifierAttri,
  TSynJScriptSyn_KeyAttri,
  TSynJScriptSyn_NonReservedKeyAttri,
  TSynJScriptSyn_EventAttri,
  TSynJScriptSyn_NumberAttri,
  TSynJScriptSyn_SpaceAttri,
  TSynJScriptSyn_StringAttri,
  TSynJScriptSyn_SymbolAttri,
  TSynJScriptSyn_TClass;