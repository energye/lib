// property
function TIDesigner_LookupRoot(AObj: TIDesigner): TComponent; extdecl;
begin
  {$define handleExceptionID := 24500}
  handleExceptionBegin
  Result := AObj.LookupRoot;
  handleExceptionEnd
end;

// property
function TIDesigner_DefaultFormBoundsValid(ASet: LongBool; AObj: TIDesigner; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultFormBoundsValid := AValue
  end else
    Result := AObj.DefaultFormBoundsValid;
  handleExceptionEnd
end;

exports
  TIDesigner_LookupRoot,
  TIDesigner_DefaultFormBoundsValid;