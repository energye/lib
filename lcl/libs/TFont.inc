// constructor
function TFont_Create(): TFont; extdecl;
begin
  {$define handleExceptionID := 5000}
  handleExceptionBegin
  Result := TFont.Create();
  handleExceptionEnd
end;

// function
function TFont_HandleAllocated(AObj: TFont): LongBool; extdecl;
begin
  {$define handleExceptionID := 5001}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TFont_IsDefault(AObj: TFont): LongBool; extdecl;
begin
  {$define handleExceptionID := 5002}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

// function
function TFont_IsEqual(AObj: TFont; AFont: TFont): LongBool; extdecl;
begin
  {$define handleExceptionID := 5003}
  handleExceptionBegin
  Result := AObj.IsEqual(AFont);
  handleExceptionEnd
end;

// procedure
procedure TFont_BeginUpdate(AObj: TFont); extdecl;
begin
  {$define handleExceptionID := 5004}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TFont_EndUpdate(AObj: TFont); extdecl;
begin
  {$define handleExceptionID := 5005}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TFont_SetDefault(AObj: TFont); extdecl;
begin
  {$define handleExceptionID := 5006}
  handleExceptionBegin
  AObj.SetDefault();
  handleExceptionEnd
end;

// property
procedure TFont_FontData(ASet: LongBool; AObj: TFont; var AValue: TFontDataPtr; var Result: TFontDataPtr); extdecl;
begin
  {$define handleExceptionID := 5007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FontData := TFontDataToPas(AValue)
  end else
    Result := TFontDataToGo(AObj.FontData);
  handleExceptionEnd
end;

// property
function TFont_Handle(ASet: LongBool; AObj: TFont; AValue: HFONT): HFONT; extdecl;
begin
  {$define handleExceptionID := 5008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TFont_IsMonoSpace(AObj: TFont): LongBool; extdecl;
begin
  {$define handleExceptionID := 5009}
  handleExceptionBegin
  Result := AObj.IsMonoSpace;
  handleExceptionEnd
end;

// property
function TFont_PixelsPerInch(ASet: LongBool; AObj: TFont; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 5010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PixelsPerInch := AValue
  end else
    Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

// property
function TFont_CharSet(ASet: LongBool; AObj: TFont; AValue: TFontCharSet): TFontCharSet; extdecl;
begin
  {$define handleExceptionID := 5011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharSet := AValue
  end else
    Result := AObj.CharSet;
  handleExceptionEnd
end;

// property
function TFont_Color(ASet: LongBool; AObj: TFont; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 5012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TFont_Height(ASet: LongBool; AObj: TFont; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 5013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TFont_Pitch(ASet: LongBool; AObj: TFont; AValue: TFontPitch): TFontPitch; extdecl;
begin
  {$define handleExceptionID := 5014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pitch := AValue
  end else
    Result := AObj.Pitch;
  handleExceptionEnd
end;

// property
function TFont_Quality(ASet: LongBool; AObj: TFont; AValue: TFontQuality): TFontQuality; extdecl;
begin
  {$define handleExceptionID := 5015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Quality := AValue
  end else
    Result := AObj.Quality;
  handleExceptionEnd
end;

// property
function TFont_Style(ASet: LongBool; AObj: TFont; AValue: TFontStyles): TFontStyles; extdecl;
begin
  {$define handleExceptionID := 5016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

exports
  TFont_Create,
  TFont_HandleAllocated,
  TFont_IsDefault,
  TFont_IsEqual,
  TFont_BeginUpdate,
  TFont_EndUpdate,
  TFont_SetDefault,
  TFont_FontData,
  TFont_Handle,
  TFont_IsMonoSpace,
  TFont_PixelsPerInch,
  TFont_CharSet,
  TFont_Color,
  TFont_Height,
  TFont_Pitch,
  TFont_Quality,
  TFont_Style;