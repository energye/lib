// constructor
function TSynJavaSyn_Create(AOwner: TComponent): TSynJavaSyn; extdecl;
begin
  {$define handleExceptionID := 43500}
  handleExceptionBegin
  Result := TSynJavaSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynJavaSyn_GetDefaultAttribute(AObj: TSynJavaSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43501}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynJavaSyn_GetTokenID(AObj: TSynJavaSyn): SynHighlighterJava.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43502}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynJavaSyn_ExtTokenID(AObj: TSynJavaSyn): SynHighlighterJava.TxtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43503}
  handleExceptionBegin
  Result := AObj.ExtTokenID;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_AnnotationAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnnotationAttri := AValue
  end else
    Result := AObj.AnnotationAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_CommentAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_DocumentAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DocumentAttri := AValue
  end else
    Result := AObj.DocumentAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_IdentifierAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_InvalidAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InvalidAttri := AValue
  end else
    Result := AObj.InvalidAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_KeyAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_NumberAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_SpaceAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_StringAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynJavaSyn_SymbolAttri(ASet: LongBool; AObj: TSynJavaSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

function TSynJavaSyn_TClass(): TClass; extdecl;
begin
  Result := TSynJavaSyn;
end;

exports
  TSynJavaSyn_Create,
  TSynJavaSyn_GetDefaultAttribute,
  TSynJavaSyn_GetTokenID,
  TSynJavaSyn_ExtTokenID,
  TSynJavaSyn_AnnotationAttri,
  TSynJavaSyn_CommentAttri,
  TSynJavaSyn_DocumentAttri,
  TSynJavaSyn_IdentifierAttri,
  TSynJavaSyn_InvalidAttri,
  TSynJavaSyn_KeyAttri,
  TSynJavaSyn_NumberAttri,
  TSynJavaSyn_SpaceAttri,
  TSynJavaSyn_StringAttri,
  TSynJavaSyn_SymbolAttri,
  TSynJavaSyn_TClass;