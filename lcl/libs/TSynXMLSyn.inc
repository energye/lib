// constructor
function TSynXMLSyn_Create(AOwner: TComponent): TSynXMLSyn; extdecl;
begin
  {$define handleExceptionID := 43800}
  handleExceptionBegin
  Result := TSynXMLSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynXMLSyn_GetDefaultAttribute(AObj: TSynXMLSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43801}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynXMLSyn_GetTokenID(AObj: TSynXMLSyn): SynHighlighterXML.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43802}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynXMLSyn_ElementAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ElementAttri := AValue
  end else
    Result := AObj.ElementAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_AttributeAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AttributeAttri := AValue
  end else
    Result := AObj.AttributeAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_NamespaceAttributeAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NamespaceAttributeAttri := AValue
  end else
    Result := AObj.NamespaceAttributeAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_AttributeValueAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AttributeValueAttri := AValue
  end else
    Result := AObj.AttributeValueAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_NamespaceAttributeValueAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NamespaceAttributeValueAttri := AValue
  end else
    Result := AObj.NamespaceAttributeValueAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_TextAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextAttri := AValue
  end else
    Result := AObj.TextAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_CDATAAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CDATAAttri := AValue
  end else
    Result := AObj.CDATAAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_EntityRefAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EntityRefAttri := AValue
  end else
    Result := AObj.EntityRefAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_ProcessingInstructionAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProcessingInstructionAttri := AValue
  end else
    Result := AObj.ProcessingInstructionAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_CommentAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_DocTypeAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DocTypeAttri := AValue
  end else
    Result := AObj.DocTypeAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_SpaceAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_SymbolAttri(ASet: LongBool; AObj: TSynXMLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynXMLSyn_WantBracesParsed(ASet: LongBool; AObj: TSynXMLSyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 43816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantBracesParsed := AValue
  end else
    Result := AObj.WantBracesParsed;
  handleExceptionEnd
end;

function TSynXMLSyn_TClass(): TClass; extdecl;
begin
  Result := TSynXMLSyn;
end;

exports
  TSynXMLSyn_Create,
  TSynXMLSyn_GetDefaultAttribute,
  TSynXMLSyn_GetTokenID,
  TSynXMLSyn_ElementAttri,
  TSynXMLSyn_AttributeAttri,
  TSynXMLSyn_NamespaceAttributeAttri,
  TSynXMLSyn_AttributeValueAttri,
  TSynXMLSyn_NamespaceAttributeValueAttri,
  TSynXMLSyn_TextAttri,
  TSynXMLSyn_CDATAAttri,
  TSynXMLSyn_EntityRefAttri,
  TSynXMLSyn_ProcessingInstructionAttri,
  TSynXMLSyn_CommentAttri,
  TSynXMLSyn_DocTypeAttri,
  TSynXMLSyn_SpaceAttri,
  TSynXMLSyn_SymbolAttri,
  TSynXMLSyn_WantBracesParsed,
  TSynXMLSyn_TClass;