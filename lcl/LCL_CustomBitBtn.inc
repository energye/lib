
//constructor
function CustomBitBtn_Create(TheOwner: TComponent): TCustomBitBtn; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomBitBtn.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomBitBtn_DefaultCaption(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultCaption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultCaption := AValue;
  end else
    Result := AObj.DefaultCaption;
  handleExceptionEnd
end;

//property
function CustomBitBtn_DisabledImageIndex(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='DisabledImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisabledImageIndex := AValue;
  end else
    Result := AObj.DisabledImageIndex;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Glyph(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionFuncName :='Glyph'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Glyph := AValue;
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

//property
function CustomBitBtn_NumGlyphs(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='NumGlyphs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumGlyphs := AValue;
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

//property
function CustomBitBtn_HotImageIndex(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='HotImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotImageIndex := AValue;
  end else
    Result := AObj.HotImageIndex;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Images(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomBitBtn_ImageIndex(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function CustomBitBtn_ImageWidth(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImageWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageWidth := AValue;
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Kind(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TBitBtnKind): TBitBtnKind; extdecl;
begin
  {$define handleExceptionFuncName :='Kind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Kind := AValue;
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Layout(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Margin(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Margin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Margin := AValue;
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

//property
function CustomBitBtn_PressedImageIndex(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='PressedImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PressedImageIndex := AValue;
  end else
    Result := AObj.PressedImageIndex;
  handleExceptionEnd
end;

//property
function CustomBitBtn_Spacing(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Spacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Spacing := AValue;
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

//property
function CustomBitBtn_GlyphShowMode(AIsSet: LongBool; AObj: TCustomBitBtn; AValue: TGlyphShowMode): TGlyphShowMode; extdecl;
begin
  {$define handleExceptionFuncName :='GlyphShowMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GlyphShowMode := AValue;
  end else
    Result := AObj.GlyphShowMode;
  handleExceptionEnd
end;

//function
function CustomBitBtn_CanShowGlyph(AObj: TCustomBitBtn; const AWithShowMode: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanShowGlyph'}
  handleExceptionBegin
  Result := AObj.CanShowGlyph(AWithShowMode);
  handleExceptionEnd
end;

//function
function CustomBitBtn_Class(): TClass; extdecl;
begin
  Result := TCustomBitBtn;
end;

//procedure
procedure CustomBitBtn_LoadGlyphFromResourceName(AObj: TCustomBitBtn; Instance: THandle; const AName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadGlyphFromResourceName'}
  handleExceptionBegin
  AObj.LoadGlyphFromResourceName(Instance, AName);
  handleExceptionEnd
end;

//procedure
procedure CustomBitBtn_LoadGlyphFromLazarusResource(AObj: TCustomBitBtn; const AName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadGlyphFromLazarusResource'}
  handleExceptionBegin
  AObj.LoadGlyphFromLazarusResource(AName);
  handleExceptionEnd
end;

//procedure
procedure CustomBitBtn_LoadGlyphFromStock(AObj: TCustomBitBtn; idButton: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='LoadGlyphFromStock'}
  handleExceptionBegin
  AObj.LoadGlyphFromStock(idButton);
  handleExceptionEnd
end;

//procedure
procedure CustomBitBtn_LoadGlyphFromResource(AObj: TCustomBitBtn; idButton: TButtonImage); extdecl;
begin
  {$define handleExceptionFuncName :='LoadGlyphFromResource'}
  handleExceptionBegin
  AObj.LoadGlyphFromResource(idButton);
  handleExceptionEnd
end;


exports
  CustomBitBtn_Create,
  CustomBitBtn_DefaultCaption,
  CustomBitBtn_DisabledImageIndex,
  CustomBitBtn_Glyph,
  CustomBitBtn_NumGlyphs,
  CustomBitBtn_HotImageIndex,
  CustomBitBtn_Images,
  CustomBitBtn_ImageIndex,
  CustomBitBtn_ImageWidth,
  CustomBitBtn_Kind,
  CustomBitBtn_Layout,
  CustomBitBtn_Margin,
  CustomBitBtn_PressedImageIndex,
  CustomBitBtn_Spacing,
  CustomBitBtn_GlyphShowMode,
  CustomBitBtn_CanShowGlyph,
  CustomBitBtn_Class,
  CustomBitBtn_LoadGlyphFromResourceName,
  CustomBitBtn_LoadGlyphFromLazarusResource,
  CustomBitBtn_LoadGlyphFromStock,
  CustomBitBtn_LoadGlyphFromResource;