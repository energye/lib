// constructor
function TSynHighlighterAttributesModifier_Create(): TSynHighlighterAttributesModifier; extdecl;
begin
  {$define handleExceptionID := 35900}
  handleExceptionBegin
  Result := TSynHighlighterAttributesModifier.Create();
  handleExceptionEnd
end;

// constructor
function TSynHighlighterAttributesModifier_CreateWithStrX2(aCaption: PChar; aStoredName: PChar): TSynHighlighterAttributesModifier; extdecl;
begin
  {$define handleExceptionID := 35901}
  handleExceptionBegin
  Result := TSynHighlighterAttributesModifier.Create(aCaption, aStoredName);
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributesModifier_BackAlpha(ASet: LongBool; AObj: TSynHighlighterAttributesModifier; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionID := 35902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackAlpha := AValue
  end else
    Result := AObj.BackAlpha;
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributesModifier_ForeAlpha(ASet: LongBool; AObj: TSynHighlighterAttributesModifier; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionID := 35903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForeAlpha := AValue
  end else
    Result := AObj.ForeAlpha;
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributesModifier_FrameAlpha(ASet: LongBool; AObj: TSynHighlighterAttributesModifier; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionID := 35904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameAlpha := AValue
  end else
    Result := AObj.FrameAlpha;
  handleExceptionEnd
end;

exports
  TSynHighlighterAttributesModifier_Create,
  TSynHighlighterAttributesModifier_CreateWithStrX2,
  TSynHighlighterAttributesModifier_BackAlpha,
  TSynHighlighterAttributesModifier_ForeAlpha,
  TSynHighlighterAttributesModifier_FrameAlpha;