// constructor
function TSynHTMLSyn_Create(AOwner: TComponent): TSynHTMLSyn; extdecl;
begin
  {$define handleExceptionID := 43400}
  handleExceptionBegin
  Result := TSynHTMLSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynHTMLSyn_GetDefaultAttribute(AObj: TSynHTMLSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43401}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynHTMLSyn_GetTokenID(AObj: TSynHTMLSyn): SynHighlighterHTML.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43402}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_AndAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AndAttri := AValue
  end else
    Result := AObj.AndAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_ASPAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ASPAttri := AValue
  end else
    Result := AObj.ASPAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_CDATAAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CDATAAttri := AValue
  end else
    Result := AObj.CDATAAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_DOCTYPEAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DOCTYPEAttri := AValue
  end else
    Result := AObj.DOCTYPEAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_CommentAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_IdentifierAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_KeyAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_SpaceAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_SymbolAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_TextAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextAttri := AValue
  end else
    Result := AObj.TextAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_UndefKeyAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UndefKeyAttri := AValue
  end else
    Result := AObj.UndefKeyAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_ValueAttri(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValueAttri := AValue
  end else
    Result := AObj.ValueAttri;
  handleExceptionEnd
end;

// property
function TSynHTMLSyn_Mode(ASet: LongBool; AObj: TSynHTMLSyn; AValue: TSynHTMLSynMode): TSynHTMLSynMode; extdecl;
begin
  {$define handleExceptionID := 43415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Mode := AValue
  end else
    Result := AObj.Mode;
  handleExceptionEnd
end;

function TSynHTMLSyn_TClass(): TClass; extdecl;
begin
  Result := TSynHTMLSyn;
end;

exports
  TSynHTMLSyn_Create,
  TSynHTMLSyn_GetDefaultAttribute,
  TSynHTMLSyn_GetTokenID,
  TSynHTMLSyn_AndAttri,
  TSynHTMLSyn_ASPAttri,
  TSynHTMLSyn_CDATAAttri,
  TSynHTMLSyn_DOCTYPEAttri,
  TSynHTMLSyn_CommentAttri,
  TSynHTMLSyn_IdentifierAttri,
  TSynHTMLSyn_KeyAttri,
  TSynHTMLSyn_SpaceAttri,
  TSynHTMLSyn_SymbolAttri,
  TSynHTMLSyn_TextAttri,
  TSynHTMLSyn_UndefKeyAttri,
  TSynHTMLSyn_ValueAttri,
  TSynHTMLSyn_Mode,
  TSynHTMLSyn_TClass;