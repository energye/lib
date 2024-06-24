
//constructor
function Font_Create(): TFont; extdecl;
begin
  handleExceptionBegin
  Result := TFont.Create();
  handleExceptionEnd
end;

//property
function Font_FontData(AIsSet: LongBool; AObj: TFont; AValue: TFontData): TFontData; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FontData := AValue;
  end else
    Result := AObj.FontData;
  handleExceptionEnd
end;

//property
function Font_Handle(AIsSet: LongBool; AObj: TFont; AValue: HFONT): HFONT; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function Font_IsMonoSpace(AObj: TFont): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMonoSpace;
  handleExceptionEnd
end;

//property
function Font_PixelsPerInch(AIsSet: LongBool; AObj: TFont; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PixelsPerInch := AValue;
  end else
    Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

//property
function Font_CharSet(AIsSet: LongBool; AObj: TFont; AValue: TFontCharSet): TFontCharSet; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CharSet := AValue;
  end else
    Result := AObj.CharSet;
  handleExceptionEnd
end;

//property
function Font_Color(AIsSet: LongBool; AObj: TFont; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function Font_Height(AIsSet: LongBool; AObj: TFont; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function Font_Pitch(AIsSet: LongBool; AObj: TFont; AValue: TFontPitch): TFontPitch; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pitch := AValue;
  end else
    Result := AObj.Pitch;
  handleExceptionEnd
end;

//property
function Font_Quality(AIsSet: LongBool; AObj: TFont; AValue: TFontQuality): TFontQuality; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Quality := AValue;
  end else
    Result := AObj.Quality;
  handleExceptionEnd
end;

//property
function Font_Style(AIsSet: LongBool; AObj: TFont; AValue: TFontStyles): TFontStyles; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//function
function Font_HandleAllocated(AObj: TFont): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function Font_IsDefault(AObj: TFont): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

//function
function Font_IsEqual(AObj: TFont; AFont: TFont): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEqual(AFont);
  handleExceptionEnd
end;

//function
function Font_Class(): TClass; extdecl;
begin
  Result := TFont;
end;

//procedure
procedure Font_BeginUpdate(AObj: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure Font_EndUpdate(AObj: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure Font_SetDefault(AObj: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.SetDefault();
  handleExceptionEnd
end;


exports
  Font_Create,
  Font_FontData,
  Font_Handle,
  Font_IsMonoSpace,
  Font_PixelsPerInch,
  Font_CharSet,
  Font_Color,
  Font_Height,
  Font_Pitch,
  Font_Quality,
  Font_Style,
  Font_HandleAllocated,
  Font_IsDefault,
  Font_IsEqual,
  Font_Class,
  Font_BeginUpdate,
  Font_EndUpdate,
  Font_SetDefault;