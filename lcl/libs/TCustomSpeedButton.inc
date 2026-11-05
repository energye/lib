// constructor
function TCustomSpeedButton_Create(AOwner: TComponent): TCustomSpeedButton; extdecl;
begin
  {$define handleExceptionID := 5400}
  handleExceptionBegin
  Result := TCustomSpeedButton.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomSpeedButton_FindDownButton(AObj: TCustomSpeedButton): TCustomSpeedButton; extdecl;
begin
  {$define handleExceptionID := 5401}
  handleExceptionBegin
  Result := AObj.FindDownButton();
  handleExceptionEnd
end;

// procedure
procedure TCustomSpeedButton_Click(AObj: TCustomSpeedButton); extdecl;
begin
  {$define handleExceptionID := 5402}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// procedure
procedure TCustomSpeedButton_LoadGlyphFromResourceName(AObj: TCustomSpeedButton; Instance: TLCLHandle; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 5403}
  handleExceptionBegin
  AObj.LoadGlyphFromResourceName(Instance, AName);
  handleExceptionEnd
end;

// procedure
procedure TCustomSpeedButton_LoadGlyphFromLazarusResource(AObj: TCustomSpeedButton; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 5404}
  handleExceptionBegin
  AObj.LoadGlyphFromLazarusResource(AName);
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Alignment(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 5405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_AllowAllUp(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowAllUp := AValue
  end else
    Result := AObj.AllowAllUp;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_DisabledImageIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 5407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledImageIndex := AValue
  end else
    Result := AObj.DisabledImageIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Down(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Down := AValue
  end else
    Result := AObj.Down;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Flat(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Glyph(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 5410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_GroupIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 5411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupIndex := AValue
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_HotImageIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 5412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotImageIndex := AValue
  end else
    Result := AObj.HotImageIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Images(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 5413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_ImageIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 5414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_ImageWidth(ASet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 5415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Layout(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  {$define handleExceptionID := 5416}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Margin(ASet: LongBool; AObj: TCustomSpeedButton; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Margin := AValue
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_NumGlyphs(ASet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 5418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_PressedImageIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 5419}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PressedImageIndex := AValue
  end else
    Result := AObj.PressedImageIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_SelectedImageIndex(ASet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 5420}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedImageIndex := AValue
  end else
    Result := AObj.SelectedImageIndex;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_ShowAccelChar(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5421}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAccelChar := AValue
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_ShowCaption(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5422}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCaption := AValue
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Spacing(ASet: LongBool; AObj: TCustomSpeedButton; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5423}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// property
function TCustomSpeedButton_Transparent(ASet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5424}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

function TCustomSpeedButton_TClass(): TClass; extdecl;
begin
  Result := TCustomSpeedButton;
end;

exports
  TCustomSpeedButton_Create,
  TCustomSpeedButton_FindDownButton,
  TCustomSpeedButton_Click,
  TCustomSpeedButton_LoadGlyphFromResourceName,
  TCustomSpeedButton_LoadGlyphFromLazarusResource,
  TCustomSpeedButton_Alignment,
  TCustomSpeedButton_AllowAllUp,
  TCustomSpeedButton_DisabledImageIndex,
  TCustomSpeedButton_Down,
  TCustomSpeedButton_Flat,
  TCustomSpeedButton_Glyph,
  TCustomSpeedButton_GroupIndex,
  TCustomSpeedButton_HotImageIndex,
  TCustomSpeedButton_Images,
  TCustomSpeedButton_ImageIndex,
  TCustomSpeedButton_ImageWidth,
  TCustomSpeedButton_Layout,
  TCustomSpeedButton_Margin,
  TCustomSpeedButton_NumGlyphs,
  TCustomSpeedButton_PressedImageIndex,
  TCustomSpeedButton_SelectedImageIndex,
  TCustomSpeedButton_ShowAccelChar,
  TCustomSpeedButton_ShowCaption,
  TCustomSpeedButton_Spacing,
  TCustomSpeedButton_Transparent,
  TCustomSpeedButton_TClass;