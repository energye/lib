// function
function TRasterImage_BitmapHandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 10500}
  handleExceptionBegin
  Result := AObj.BitmapHandleAllocated();
  handleExceptionEnd
end;

// function
function TRasterImage_MaskHandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 10501}
  handleExceptionBegin
  Result := AObj.MaskHandleAllocated();
  handleExceptionEnd
end;

// function
function TRasterImage_PaletteAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 10502}
  handleExceptionBegin
  Result := AObj.PaletteAllocated();
  handleExceptionEnd
end;

// function
function TRasterImage_ReleaseBitmapHandle(AObj: TRasterImage): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10503}
  handleExceptionBegin
  Result := AObj.ReleaseBitmapHandle();
  handleExceptionEnd
end;

// function
function TRasterImage_ReleaseMaskHandle(AObj: TRasterImage): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10504}
  handleExceptionBegin
  Result := AObj.ReleaseMaskHandle();
  handleExceptionEnd
end;

// function
function TRasterImage_ReleasePalette(AObj: TRasterImage): HPALETTE; extdecl;
begin
  {$define handleExceptionID := 10505}
  handleExceptionBegin
  Result := AObj.ReleasePalette();
  handleExceptionEnd
end;

// function
function TRasterImage_CreateIntfImage(AObj: TRasterImage): TLazIntfImage; extdecl;
begin
  {$define handleExceptionID := 10506}
  handleExceptionBegin
  Result := AObj.CreateIntfImage();
  handleExceptionEnd
end;

// function
function TRasterImage_HandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 10507}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_BeginUpdate(AObj: TRasterImage; ACanvasOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 10508}
  handleExceptionBegin
  AObj.BeginUpdate(ACanvasOnly);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_EndUpdate(AObj: TRasterImage; AStreamIsValid: LongBool); extdecl;
begin
  {$define handleExceptionID := 10509}
  handleExceptionBegin
  AObj.EndUpdate(AStreamIsValid);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_FreeImage(AObj: TRasterImage); extdecl;
begin
  {$define handleExceptionID := 10510}
  handleExceptionBegin
  AObj.FreeImage();
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_LoadFromBitmapHandles(AObj: TRasterImage; ABitmap: HBitmap; AMask: HBitmap; var ARect: PRect); extdecl;
begin
  {$define handleExceptionID := 10511}
  handleExceptionBegin
  AObj.LoadFromBitmapHandles(ABitmap, AMask, ARect);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_LoadFromDevice(AObj: TRasterImage; DC: HDC); extdecl;
begin
  {$define handleExceptionID := 10512}
  handleExceptionBegin
  AObj.LoadFromDevice(DC);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_LoadFromStreamWithStreamCardinal(AObj: TRasterImage; AStream: TStream; ASize: Cardinal); extdecl;
begin
  {$define handleExceptionID := 10513}
  handleExceptionBegin
  AObj.LoadFromStream(AStream, ASize);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_LoadFromRawImage(AObj: TRasterImage; const AIMage: TRawImageWrap; ADataOwner: LongBool); extdecl;
begin
  {$define handleExceptionID := 10514}
  handleExceptionBegin
  AObj.LoadFromRawImage(AIMage.RawImageData()^, ADataOwner);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_LoadFromIntfImage(AObj: TRasterImage; IntfImage: TLazIntfImage); extdecl;
begin
  {$define handleExceptionID := 10515}
  handleExceptionBegin
  AObj.LoadFromIntfImage(IntfImage);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_GetSize(AObj: TRasterImage; var AWidth: Integer; var AHeight: Integer); extdecl;
var
  OutAWidth: Integer;
  OutAHeight: Integer;
begin
  {$define handleExceptionID := 10516}
  handleExceptionBegin
  AObj.GetSize(OutAWidth, OutAHeight);
  AWidth := OutAWidth;
  AHeight := OutAHeight;
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_Mask(AObj: TRasterImage; ATransparentColor: TColor); extdecl;
begin
  {$define handleExceptionID := 10517}
  handleExceptionBegin
  AObj.Mask(ATransparentColor);
  handleExceptionEnd
end;

// procedure
procedure TRasterImage_SetHandles(AObj: TRasterImage; ABitmap: HBITMAP; AMask: HBITMAP); extdecl;
begin
  {$define handleExceptionID := 10518}
  handleExceptionBegin
  AObj.SetHandles(ABitmap, AMask);
  handleExceptionEnd
end;

// property
function TRasterImage_Canvas(AObj: TRasterImage): TCanvas; extdecl;
begin
  {$define handleExceptionID := 10519}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TRasterImage_BitmapHandle(ASet: LongBool; AObj: TRasterImage; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BitmapHandle := AValue
  end else
    Result := AObj.BitmapHandle;
  handleExceptionEnd
end;

// property
function TRasterImage_Masked(ASet: LongBool; AObj: TRasterImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10521}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Masked := AValue
  end else
    Result := AObj.Masked;
  handleExceptionEnd
end;

// property
function TRasterImage_MaskHandle(ASet: LongBool; AObj: TRasterImage; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10522}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskHandle := AValue
  end else
    Result := AObj.MaskHandle;
  handleExceptionEnd
end;

// property
function TRasterImage_PixelFormat(ASet: LongBool; AObj: TRasterImage; AValue: TPixelFormat): TPixelFormat; extdecl;
begin
  {$define handleExceptionID := 10523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PixelFormat := AValue
  end else
    Result := AObj.PixelFormat;
  handleExceptionEnd
end;

// property
function TRasterImage_RawImage(AObj: TRasterImage): TRawImageWrap; extdecl;
begin
  {$define handleExceptionID := 10524}
  handleExceptionBegin
  Result := TRawImageWrap.Create(AObj.RawImage);
  handleExceptionEnd
end;

// property
function TRasterImage_ScanLine(AObj: TRasterImage; Row: Integer): Pointer; extdecl;
begin
  {$define handleExceptionID := 10525}
  handleExceptionBegin
  Result := AObj.ScanLine[Row];
  handleExceptionEnd
end;

// property
function TRasterImage_TransparentColor(ASet: LongBool; AObj: TRasterImage; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 10526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TransparentColor := AValue
  end else
    Result := AObj.TransparentColor;
  handleExceptionEnd
end;

// property
function TRasterImage_TransparentMode(ASet: LongBool; AObj: TRasterImage; AValue: TTransparentMode): TTransparentMode; extdecl;
begin
  {$define handleExceptionID := 10527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TransparentMode := AValue
  end else
    Result := AObj.TransparentMode;
  handleExceptionEnd
end;

exports
  TRasterImage_BitmapHandleAllocated,
  TRasterImage_MaskHandleAllocated,
  TRasterImage_PaletteAllocated,
  TRasterImage_ReleaseBitmapHandle,
  TRasterImage_ReleaseMaskHandle,
  TRasterImage_ReleasePalette,
  TRasterImage_CreateIntfImage,
  TRasterImage_HandleAllocated,
  TRasterImage_BeginUpdate,
  TRasterImage_EndUpdate,
  TRasterImage_FreeImage,
  TRasterImage_LoadFromBitmapHandles,
  TRasterImage_LoadFromDevice,
  TRasterImage_LoadFromStreamWithStreamCardinal,
  TRasterImage_LoadFromRawImage,
  TRasterImage_LoadFromIntfImage,
  TRasterImage_GetSize,
  TRasterImage_Mask,
  TRasterImage_SetHandles,
  TRasterImage_Canvas,
  TRasterImage_BitmapHandle,
  TRasterImage_Masked,
  TRasterImage_MaskHandle,
  TRasterImage_PixelFormat,
  TRasterImage_RawImage,
  TRasterImage_ScanLine,
  TRasterImage_TransparentColor,
  TRasterImage_TransparentMode;