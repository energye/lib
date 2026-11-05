// constructor
function TSynScrollOnEditOptions_Create(): TSynScrollOnEditOptions; extdecl;
begin
  {$define handleExceptionID := 36400}
  handleExceptionBegin
  Result := TSynScrollOnEditOptions.Create();
  handleExceptionEnd
end;

// procedure
procedure TSynScrollOnEditOptions_SetDefaults(AObj: TSynScrollOnEditOptions); extdecl;
begin
  {$define handleExceptionID := 36401}
  handleExceptionBegin
  AObj.SetDefaults();
  handleExceptionEnd
end;

// property
function TSynScrollOnEditOptions_KeepBorderDistance(ASet: LongBool; AObj: TSynScrollOnEditOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 36402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepBorderDistance := AValue
  end else
    Result := AObj.KeepBorderDistance;
  handleExceptionEnd
end;

// property
function TSynScrollOnEditOptions_KeepBorderDistancePercent(ASet: LongBool; AObj: TSynScrollOnEditOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 36403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepBorderDistancePercent := AValue
  end else
    Result := AObj.KeepBorderDistancePercent;
  handleExceptionEnd
end;

// property
function TSynScrollOnEditOptions_ScrollExtraColumns(ASet: LongBool; AObj: TSynScrollOnEditOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 36404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollExtraColumns := AValue
  end else
    Result := AObj.ScrollExtraColumns;
  handleExceptionEnd
end;

// property
function TSynScrollOnEditOptions_ScrollExtraPercent(ASet: LongBool; AObj: TSynScrollOnEditOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 36405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollExtraPercent := AValue
  end else
    Result := AObj.ScrollExtraPercent;
  handleExceptionEnd
end;

// property
function TSynScrollOnEditOptions_ScrollExtraMax(ASet: LongBool; AObj: TSynScrollOnEditOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 36406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollExtraMax := AValue
  end else
    Result := AObj.ScrollExtraMax;
  handleExceptionEnd
end;

// event
procedure TSynScrollOnEditOptions_OnChange(AObj: TSynScrollOnEditOptions; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynScrollOnEditOptions_Create,
  TSynScrollOnEditOptions_SetDefaults,
  TSynScrollOnEditOptions_KeepBorderDistance,
  TSynScrollOnEditOptions_KeepBorderDistancePercent,
  TSynScrollOnEditOptions_ScrollExtraColumns,
  TSynScrollOnEditOptions_ScrollExtraPercent,
  TSynScrollOnEditOptions_ScrollExtraMax,
  TSynScrollOnEditOptions_OnChange;