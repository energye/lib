// constructor
function TSynSQLSyn_Create(AOwner: TComponent): TSynSQLSyn; extdecl;
begin
  {$define handleExceptionID := 43700}
  handleExceptionBegin
  Result := TSynSQLSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynSQLSyn_GetDefaultAttribute(AObj: TSynSQLSyn; Index: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43701}
  handleExceptionBegin
  Result := AObj.GetDefaultAttribute(Index);
  handleExceptionEnd
end;

// function
function TSynSQLSyn_GetTokenID(AObj: TSynSQLSyn): SynHighlighterSQL.TtkTokenKind; extdecl;
begin
  {$define handleExceptionID := 43702}
  handleExceptionBegin
  Result := AObj.GetTokenID();
  handleExceptionEnd
end;

// property
function TSynSQLSyn_CommentAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommentAttri := AValue
  end else
    Result := AObj.CommentAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_DataTypeAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DataTypeAttri := AValue
  end else
    Result := AObj.DataTypeAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_DefaultPackageAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultPackageAttri := AValue
  end else
    Result := AObj.DefaultPackageAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_ExceptionAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExceptionAttri := AValue
  end else
    Result := AObj.ExceptionAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_FunctionAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FunctionAttri := AValue
  end else
    Result := AObj.FunctionAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_IdentifierAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdentifierAttri := AValue
  end else
    Result := AObj.IdentifierAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_KeyAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyAttri := AValue
  end else
    Result := AObj.KeyAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_NumberAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumberAttri := AValue
  end else
    Result := AObj.NumberAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_PLSQLAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43711}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PLSQLAttri := AValue
  end else
    Result := AObj.PLSQLAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_SpaceAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceAttri := AValue
  end else
    Result := AObj.SpaceAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_SQLPlusAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SQLPlusAttri := AValue
  end else
    Result := AObj.SQLPlusAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_StringAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringAttri := AValue
  end else
    Result := AObj.StringAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_SymbolAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SymbolAttri := AValue
  end else
    Result := AObj.SymbolAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_TableNameAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43716}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TableNameAttri := AValue
  end else
    Result := AObj.TableNameAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_TableNames(ASet: LongBool; AObj: TSynSQLSyn; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 43717}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TableNames := AValue
  end else
    Result := AObj.TableNames;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_VariableAttri(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSynHighlighterAttributes): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 43718}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VariableAttri := AValue
  end else
    Result := AObj.VariableAttri;
  handleExceptionEnd
end;

// property
function TSynSQLSyn_SQLDialect(ASet: LongBool; AObj: TSynSQLSyn; AValue: TSQLDialect): TSQLDialect; extdecl;
begin
  {$define handleExceptionID := 43719}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SQLDialect := AValue
  end else
    Result := AObj.SQLDialect;
  handleExceptionEnd
end;

function TSynSQLSyn_TClass(): TClass; extdecl;
begin
  Result := TSynSQLSyn;
end;

exports
  TSynSQLSyn_Create,
  TSynSQLSyn_GetDefaultAttribute,
  TSynSQLSyn_GetTokenID,
  TSynSQLSyn_CommentAttri,
  TSynSQLSyn_DataTypeAttri,
  TSynSQLSyn_DefaultPackageAttri,
  TSynSQLSyn_ExceptionAttri,
  TSynSQLSyn_FunctionAttri,
  TSynSQLSyn_IdentifierAttri,
  TSynSQLSyn_KeyAttri,
  TSynSQLSyn_NumberAttri,
  TSynSQLSyn_PLSQLAttri,
  TSynSQLSyn_SpaceAttri,
  TSynSQLSyn_SQLPlusAttri,
  TSynSQLSyn_StringAttri,
  TSynSQLSyn_SymbolAttri,
  TSynSQLSyn_TableNameAttri,
  TSynSQLSyn_TableNames,
  TSynSQLSyn_VariableAttri,
  TSynSQLSyn_SQLDialect,
  TSynSQLSyn_TClass;