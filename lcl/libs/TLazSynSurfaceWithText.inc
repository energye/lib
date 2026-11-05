// constructor
function TLazSynSurfaceWithText_Create(AOwner: TWinControl): TLazSynSurfaceWithText; extdecl;
begin
  {$define handleExceptionID := 40600}
  handleExceptionBegin
  Result := TLazSynSurfaceWithText.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLazSynSurfaceWithText_TextArea(ASet: LongBool; AObj: TLazSynSurfaceWithText; AValue: TLazSynTextArea): TLazSynTextArea; extdecl;
begin
  {$define handleExceptionID := 40601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextArea := AValue
  end else
    Result := AObj.TextArea;
  handleExceptionEnd
end;

exports
  TLazSynSurfaceWithText_Create,
  TLazSynSurfaceWithText_TextArea;