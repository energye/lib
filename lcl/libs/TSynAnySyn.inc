// constructor
function TSynAnySyn_Create(AOwner: TComponent): TSynAnySyn; extdecl;
begin
  {$define handleExceptionID := 42200}
  handleExceptionBegin
  Result := TSynAnySyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynAnySyn_GetDefaultAttribute(AObj: TSynAnySyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42201}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynAnySyn_GetTokenID(AObj: TSynAnySyn): SynHighlighterAny.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 42202}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// function
function TSynAnySyn_IsConstant(AObj: TSynAnySyn; const AConstant: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 42203}
  handleExceptionBegin
  Result := AObj.IsConstant(AConstant);
  handleExceptionEnd
end;

// procedure
procedure TSynAnySyn_LoadHighLighter(AObj: TSynAnySyn; aFile: PChar); extdecl;
begin
  {$define handleExceptionID := 42204}
  handleExceptionBegin
  AObj.LoadHighLighter(aFile);
  handleExceptionEnd
end;

// property
function TSynAnySyn_CommentAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_Comments(ASet: LongBool; AObj: TSynAnySyn; AValue: CommentStyles): CommentStyles; extdecl;
begin
  {$define handleExceptionID := 42206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Comments := AValue
  end else
    Result := AObj.Comments;
  handleExceptionEnd
end;

// property
function TSynAnySyn_DetectPreprocessor(ASet: LongBool; AObj: TSynAnySyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DetectPreprocessor := AValue
  end else
    Result := AObj.DetectPreprocessor;
  handleExceptionEnd
end;

// property
function TSynAnySyn_IdentifierAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
procedure TSynAnySyn_IdentifierChars(ASet: LongBool; AObj: TSynAnySyn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierChars := AValue
  end else
    StringBufferCreate(AObj.IdentifierChars, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynAnySyn_KeyAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_ConstantAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ConstantAttri := AValue
  end else
    Result := AObj.ConstantAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_ObjectAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ObjectAttri := AValue
  end else
    Result := AObj.ObjectAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_EntityAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EntityAttri := AValue
  end else
    Result := AObj.EntityAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_VariableAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VariableAttri := AValue
  end else
    Result := AObj.VariableAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_DotAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42215}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DotAttri := AValue
  end else
    Result := AObj.DotAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_KeyWords(ASet: LongBool; AObj: TSynAnySyn; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 42216}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyWords := AValue
  end else
    Result := AObj.KeyWords;
  handleExceptionEnd
end;

// property
function TSynAnySyn_Constants(ASet: LongBool; AObj: TSynAnySyn; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 42217}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Constants := AValue
  end else
    Result := AObj.Constants;
  handleExceptionEnd
end;

// property
function TSynAnySyn_Objects(ASet: LongBool; AObj: TSynAnySyn; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 42218}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Objects := AValue
  end else
    Result := AObj.Objects;
  handleExceptionEnd
end;

// property
function TSynAnySyn_NumberAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42219}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_PreprocessorAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42220}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreprocessorAttri := AValue
  end else
    Result := AObj.PreprocessorAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_SpaceAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42221}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_StringAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42222}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_SymbolAttri(ASet: LongBool; AObj: TSynAnySyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 42223}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynAnySyn_StringDelim(ASet: LongBool; AObj: TSynAnySyn; AValue: TStringDelim): TStringDelim; extdecl;
begin
  {$define handleExceptionID := 42224}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringDelim := AValue
  end else
    Result := AObj.StringDelim;
  handleExceptionEnd
end;

// property
function TSynAnySyn_Markup(ASet: LongBool; AObj: TSynAnySyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42225}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Markup := AValue
  end else
    Result := AObj.Markup;
  handleExceptionEnd
end;

// property
function TSynAnySyn_Entity(ASet: LongBool; AObj: TSynAnySyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42226}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Entity := AValue
  end else
    Result := AObj.Entity;
  handleExceptionEnd
end;

// property
function TSynAnySyn_DollarVariables(ASet: LongBool; AObj: TSynAnySyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42227}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DollarVariables := AValue
  end else
    Result := AObj.DollarVariables;
  handleExceptionEnd
end;

// property
function TSynAnySyn_ActiveDot(ASet: LongBool; AObj: TSynAnySyn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42228}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActiveDot := AValue
  end else
    Result := AObj.ActiveDot;
  handleExceptionEnd
end;

function TSynAnySyn_TClass(): TClass; extdecl;
begin
  Result := TSynAnySyn;
end;

exports
  TSynAnySyn_Create,
  TSynAnySyn_GetDefaultAttribute,
  TSynAnySyn_GetTokenID,
  TSynAnySyn_IsConstant,
  TSynAnySyn_LoadHighLighter,
  TSynAnySyn_CommentAttri,
  TSynAnySyn_Comments,
  TSynAnySyn_DetectPreprocessor,
  TSynAnySyn_IdentifierAttri,
  TSynAnySyn_IdentifierChars,
  TSynAnySyn_KeyAttri,
  TSynAnySyn_ConstantAttri,
  TSynAnySyn_ObjectAttri,
  TSynAnySyn_EntityAttri,
  TSynAnySyn_VariableAttri,
  TSynAnySyn_DotAttri,
  TSynAnySyn_KeyWords,
  TSynAnySyn_Constants,
  TSynAnySyn_Objects,
  TSynAnySyn_NumberAttri,
  TSynAnySyn_PreprocessorAttri,
  TSynAnySyn_SpaceAttri,
  TSynAnySyn_StringAttri,
  TSynAnySyn_SymbolAttri,
  TSynAnySyn_StringDelim,
  TSynAnySyn_Markup,
  TSynAnySyn_Entity,
  TSynAnySyn_DollarVariables,
  TSynAnySyn_ActiveDot,
  TSynAnySyn_TClass;