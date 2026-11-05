// constructor
function TCefApplication_Create(): TCefApplication; extdecl;
begin
  {$define handleExceptionID := 400}
  handleExceptionBegin
  Result := TCefApplication.Create();
  handleExceptionEnd
end;

// property
function TCefApplication_DestroyApplicationObject(ASet: LongBool; AObj: TCefApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DestroyApplicationObject := AValue
  end else
    Result := AObj.DestroyApplicationObject;
  handleExceptionEnd
end;

// property
function TCefApplication_DestroyAppWindows(ASet: LongBool; AObj: TCefApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DestroyAppWindows := AValue
  end else
    Result := AObj.DestroyAppWindows;
  handleExceptionEnd
end;

exports
  TCefApplication_Create,
  TCefApplication_DestroyApplicationObject,
  TCefApplication_DestroyAppWindows;