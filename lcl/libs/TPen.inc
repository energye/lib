// constructor
function TPen_Create(): TPen; extdecl;
begin
  {$define handleExceptionID := 11900}
  handleExceptionBegin
  Result := TPen.Create();
  handleExceptionEnd
end;

// function
function TPen_GetPattern(AObj: TPen): TUint32ArrayWrap; extdecl;
begin
  {$define handleExceptionID := 11901}
  handleExceptionBegin
  Result := TUint32ArrayWrap.Create(AObj.GetPattern());
  handleExceptionEnd
end;

// procedure
procedure TPen_SetPatternWithPenPattern(AObj: TPen; APattern: TUint32ArrayWrap); extdecl;
begin
  {$define handleExceptionID := 11902}
  handleExceptionBegin
  AObj.SetPattern(APattern.Uint32ArrayData()^);
  handleExceptionEnd
end;

// property
function TPen_Color(ASet: LongBool; AObj: TPen; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 11903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TPen_Cosmetic(ASet: LongBool; AObj: TPen; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cosmetic := AValue
  end else
    Result := AObj.Cosmetic;
  handleExceptionEnd
end;

// property
function TPen_EndCapToPenEndCap(ASet: LongBool; AObj: TPen; AValue: TPenEndCap): TPenEndCap; extdecl;
begin
  {$define handleExceptionID := 11905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndCap := AValue
  end else
    Result := AObj.EndCap;
  handleExceptionEnd
end;

// property
function TPen_JoinStyleToPenJoinStyle(ASet: LongBool; AObj: TPen; AValue: TPenJoinStyle): TPenJoinStyle; extdecl;
begin
  {$define handleExceptionID := 11906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JoinStyle := AValue
  end else
    Result := AObj.JoinStyle;
  handleExceptionEnd
end;

exports
  TPen_Create,
  TPen_GetPattern,
  TPen_SetPatternWithPenPattern,
  TPen_Color,
  TPen_Cosmetic,
  TPen_EndCapToPenEndCap,
  TPen_JoinStyleToPenJoinStyle;