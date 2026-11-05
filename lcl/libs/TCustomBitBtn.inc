// constructor
function TCustomBitBtn_Create(TheOwner: TComponent): TCustomBitBtn; extdecl;
begin
  {$define handleExceptionID := 10200}
  handleExceptionBegin
  Result := TCustomBitBtn.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomBitBtn_CanShowGlyph(AObj: TCustomBitBtn; const AWithShowMode: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10201}
  handleExceptionBegin
  Result := AObj.CanShowGlyph(AWithShowMode);
  handleExceptionEnd
end;

// procedure
procedure TCustomBitBtn_LoadGlyphFromResourceName(AObj: TCustomBitBtn; Instance: TLCLHandle; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 10202}
  handleExceptionBegin
  AObj.LoadGlyphFromResourceName(Instance, AName);
  handleExceptionEnd
end;

// procedure
procedure TCustomBitBtn_LoadGlyphFromLazarusResource(AObj: TCustomBitBtn; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 10203}
  handleExceptionBegin
  AObj.LoadGlyphFromLazarusResource(AName);
  handleExceptionEnd
end;

// procedure
procedure TCustomBitBtn_LoadGlyphFromStock(AObj: TCustomBitBtn; idButton: Integer); extdecl;
begin
  {$define handleExceptionID := 10204}
  handleExceptionBegin
  AObj.LoadGlyphFromStock(idButton);
  handleExceptionEnd
end;

// procedure
procedure TCustomBitBtn_LoadGlyphFromResource(AObj: TCustomBitBtn; idButton: TButtonImage); extdecl;
begin
  {$define handleExceptionID := 10205}
  handleExceptionBegin
  AObj.LoadGlyphFromResource(idButton);
  handleExceptionEnd
end;

// property
function TCustomBitBtn_DefaultCaption(ASet: LongBool; AObj: TCustomBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultCaption := AValue
  end else
    Result := AObj.DefaultCaption;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_DisabledImageIndex(ASet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 10207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledImageIndex := AValue
  end else
    Result := AObj.DisabledImageIndex;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Glyph(ASet: LongBool; AObj: TCustomBitBtn; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 10208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_NumGlyphs(ASet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_HotImageIndex(ASet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 10210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotImageIndex := AValue
  end else
    Result := AObj.HotImageIndex;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Images(ASet: LongBool; AObj: TCustomBitBtn; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 10211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_ImageIndex(ASet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 10212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_ImageWidth(ASet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Kind(ASet: LongBool; AObj: TCustomBitBtn; AValue: TBitBtnKind): TBitBtnKind; extdecl;
begin
  {$define handleExceptionID := 10214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Kind := AValue
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Layout(ASet: LongBool; AObj: TCustomBitBtn; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  {$define handleExceptionID := 10215}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Margin(ASet: LongBool; AObj: TCustomBitBtn; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 10216}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Margin := AValue
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_PressedImageIndex(ASet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 10217}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PressedImageIndex := AValue
  end else
    Result := AObj.PressedImageIndex;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_Spacing(ASet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10218}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// property
function TCustomBitBtn_GlyphShowMode(ASet: LongBool; AObj: TCustomBitBtn; AValue: TGlyphShowMode): TGlyphShowMode; extdecl;
begin
  {$define handleExceptionID := 10219}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GlyphShowMode := AValue
  end else
    Result := AObj.GlyphShowMode;
  handleExceptionEnd
end;

function TCustomBitBtn_TClass(): TClass; extdecl;
begin
  Result := TCustomBitBtn;
end;

exports
  TCustomBitBtn_Create,
  TCustomBitBtn_CanShowGlyph,
  TCustomBitBtn_LoadGlyphFromResourceName,
  TCustomBitBtn_LoadGlyphFromLazarusResource,
  TCustomBitBtn_LoadGlyphFromStock,
  TCustomBitBtn_LoadGlyphFromResource,
  TCustomBitBtn_DefaultCaption,
  TCustomBitBtn_DisabledImageIndex,
  TCustomBitBtn_Glyph,
  TCustomBitBtn_NumGlyphs,
  TCustomBitBtn_HotImageIndex,
  TCustomBitBtn_Images,
  TCustomBitBtn_ImageIndex,
  TCustomBitBtn_ImageWidth,
  TCustomBitBtn_Kind,
  TCustomBitBtn_Layout,
  TCustomBitBtn_Margin,
  TCustomBitBtn_PressedImageIndex,
  TCustomBitBtn_Spacing,
  TCustomBitBtn_GlyphShowMode,
  TCustomBitBtn_TClass;