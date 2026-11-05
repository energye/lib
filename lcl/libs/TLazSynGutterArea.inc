// constructor
function TLazSynGutterArea_Create(AOwner: TWinControl): TLazSynGutterArea; extdecl;
begin
  {$define handleExceptionID := 40700}
  handleExceptionBegin
  Result := TLazSynGutterArea.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLazSynGutterArea_Gutter(ASet: LongBool; AObj: TLazSynGutterArea; AValue: TSynGutter): TSynGutter; extdecl;
begin
  {$define handleExceptionID := 40701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Gutter := AValue
  end else
    Result := AObj.Gutter;
  handleExceptionEnd
end;

// property
procedure TLazSynGutterArea_TextBounds(AObj: TLazSynGutterArea; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 40702}
  handleExceptionBegin
  Result := AObj.TextBounds;
  handleExceptionEnd
end;

exports
  TLazSynGutterArea_Create,
  TLazSynGutterArea_Gutter,
  TLazSynGutterArea_TextBounds;