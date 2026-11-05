// constructor
function TSynMultiSyn_Create(AOwner: TComponent): TSynMultiSyn; extdecl;
begin
  {$define handleExceptionID := 44200}
  handleExceptionBegin
  Result := TSynMultiSyn.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynMultiSyn_UpdateRangeInfoAtLine(AObj: TSynMultiSyn; Index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 44201}
  handleExceptionBegin
  Result := AObj.UpdateRangeInfoAtLine(Index);
  handleExceptionEnd
end;

// property
function TSynMultiSyn_DefaultVirtualLines(AObj: TSynMultiSyn): TSynHLightMultiVirtualLines; extdecl;
begin
  {$define handleExceptionID := 44202}
  handleExceptionBegin
  Result := AObj.DefaultVirtualLines;
  handleExceptionEnd
end;

// property
function TSynMultiSyn_Schemes(ASet: LongBool; AObj: TSynMultiSyn; AValue: TSynHighlighterMultiSchemeList): TSynHighlighterMultiSchemeList; extdecl;
begin
  {$define handleExceptionID := 44203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Schemes := AValue
  end else
    Result := AObj.Schemes;
  handleExceptionEnd
end;

// property
function TSynMultiSyn_DefaultHighlighter(ASet: LongBool; AObj: TSynMultiSyn; AValue: TSynCustomHighLighter): TSynCustomHighLighter; extdecl;
begin
  {$define handleExceptionID := 44204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultHighlighter := AValue
  end else
    Result := AObj.DefaultHighlighter;
  handleExceptionEnd
end;

// property
procedure TSynMultiSyn_DefaultLanguageName(ASet: LongBool; AObj: TSynMultiSyn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultLanguageName := AValue
  end else
    StringBufferCreate(AObj.DefaultLanguageName, AStrData, AStrSize);
  handleExceptionEnd
end;

function TSynMultiSyn_TClass(): TClass; extdecl;
begin
  Result := TSynMultiSyn;
end;

exports
  TSynMultiSyn_Create,
  TSynMultiSyn_UpdateRangeInfoAtLine,
  TSynMultiSyn_DefaultVirtualLines,
  TSynMultiSyn_Schemes,
  TSynMultiSyn_DefaultHighlighter,
  TSynMultiSyn_DefaultLanguageName,
  TSynMultiSyn_TClass;