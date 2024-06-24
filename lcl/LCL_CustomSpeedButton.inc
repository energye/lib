
//constructor
function CustomSpeedButton_Create(AOwner: TComponent): TCustomSpeedButton; extdecl;
begin
  handleExceptionBegin
  Result := TCustomSpeedButton.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Alignment(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_AllowAllUp(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowAllUp := AValue;
  end else
    Result := AObj.AllowAllUp;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_DisabledImageIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisabledImageIndex := AValue;
  end else
    Result := AObj.DisabledImageIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Down(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Down := AValue;
  end else
    Result := AObj.Down;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Flat(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flat := AValue;
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Glyph(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TBitmap): TBitmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Glyph := AValue;
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_GroupIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GroupIndex := AValue;
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_HotImageIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotImageIndex := AValue;
  end else
    Result := AObj.HotImageIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Images(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_ImageIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_ImageWidth(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageWidth := AValue;
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Layout(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Margin(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Margin := AValue;
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_NumGlyphs(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumGlyphs := AValue;
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_PressedImageIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PressedImageIndex := AValue;
  end else
    Result := AObj.PressedImageIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_SelectedImageIndex(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedImageIndex := AValue;
  end else
    Result := AObj.SelectedImageIndex;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_ShowAccelChar(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAccelChar := AValue;
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_ShowCaption(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCaption := AValue;
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Spacing(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Spacing := AValue;
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

//property
function CustomSpeedButton_Transparent(AIsSet: LongBool; AObj: TCustomSpeedButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//function
function CustomSpeedButton_FindDownButton(AObj: TCustomSpeedButton): TCustomSpeedButton; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindDownButton();
  handleExceptionEnd
end;

//function
function CustomSpeedButton_Class(): TClass; extdecl;
begin
  Result := TCustomSpeedButton;
end;

//procedure
procedure CustomSpeedButton_Click(AObj: TCustomSpeedButton); extdecl;
begin
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//procedure
procedure CustomSpeedButton_LoadGlyphFromResourceName(AObj: TCustomSpeedButton; Instance: THandle; const AName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadGlyphFromResourceName(Instance, AName);
  handleExceptionEnd
end;

//procedure
procedure CustomSpeedButton_LoadGlyphFromLazarusResource(AObj: TCustomSpeedButton; const AName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadGlyphFromLazarusResource(AName);
  handleExceptionEnd
end;


exports
  CustomSpeedButton_Create,
  CustomSpeedButton_Alignment,
  CustomSpeedButton_AllowAllUp,
  CustomSpeedButton_DisabledImageIndex,
  CustomSpeedButton_Down,
  CustomSpeedButton_Flat,
  CustomSpeedButton_Glyph,
  CustomSpeedButton_GroupIndex,
  CustomSpeedButton_HotImageIndex,
  CustomSpeedButton_Images,
  CustomSpeedButton_ImageIndex,
  CustomSpeedButton_ImageWidth,
  CustomSpeedButton_Layout,
  CustomSpeedButton_Margin,
  CustomSpeedButton_NumGlyphs,
  CustomSpeedButton_PressedImageIndex,
  CustomSpeedButton_SelectedImageIndex,
  CustomSpeedButton_ShowAccelChar,
  CustomSpeedButton_ShowCaption,
  CustomSpeedButton_Spacing,
  CustomSpeedButton_Transparent,
  CustomSpeedButton_FindDownButton,
  CustomSpeedButton_Class,
  CustomSpeedButton_Click,
  CustomSpeedButton_LoadGlyphFromResourceName,
  CustomSpeedButton_LoadGlyphFromLazarusResource;