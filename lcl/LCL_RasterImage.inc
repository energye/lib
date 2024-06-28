
//property
function RasterImage_Canvas(AObj: TRasterImage): TCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Canvas'}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function RasterImage_BitmapHandle(AIsSet: LongBool; AObj: TRasterImage; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='BitmapHandle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BitmapHandle := AValue;
  end else
    Result := AObj.BitmapHandle;
  handleExceptionEnd
end;

//property
function RasterImage_Masked(AIsSet: LongBool; AObj: TRasterImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Masked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Masked := AValue;
  end else
    Result := AObj.Masked;
  handleExceptionEnd
end;

//property
function RasterImage_MaskHandle(AIsSet: LongBool; AObj: TRasterImage; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='MaskHandle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaskHandle := AValue;
  end else
    Result := AObj.MaskHandle;
  handleExceptionEnd
end;

//property
function RasterImage_PixelFormat(AIsSet: LongBool; AObj: TRasterImage; AValue: TPixelFormat): TPixelFormat; extdecl;
begin
  {$define handleExceptionFuncName :='PixelFormat'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PixelFormat := AValue;
  end else
    Result := AObj.PixelFormat;
  handleExceptionEnd
end;

//property
function RasterImage_RawImage(AObj: TRasterImage): TRawImage; extdecl;
begin
  {$define handleExceptionFuncName :='RawImage'}
  handleExceptionBegin
  Result := AObj.RawImage;
  handleExceptionEnd
end;

//property
function RasterImage_ScanLine(AObj: TRasterImage; Row: Integer): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='ScanLine'}
  handleExceptionBegin
  Result := AObj.ScanLine[Row];
  handleExceptionEnd
end;

//property
function RasterImage_TransparentColor(AIsSet: LongBool; AObj: TRasterImage; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='TransparentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TransparentColor := AValue;
  end else
    Result := AObj.TransparentColor;
  handleExceptionEnd
end;

//property
function RasterImage_TransparentMode(AIsSet: LongBool; AObj: TRasterImage; AValue: TTransparentMode): TTransparentMode; extdecl;
begin
  {$define handleExceptionFuncName :='TransparentMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TransparentMode := AValue;
  end else
    Result := AObj.TransparentMode;
  handleExceptionEnd
end;

//function
function RasterImage_BitmapHandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='BitmapHandleAllocated'}
  handleExceptionBegin
  Result := AObj.BitmapHandleAllocated();
  handleExceptionEnd
end;

//function
function RasterImage_MaskHandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MaskHandleAllocated'}
  handleExceptionBegin
  Result := AObj.MaskHandleAllocated();
  handleExceptionEnd
end;

//function
function RasterImage_PaletteAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PaletteAllocated'}
  handleExceptionBegin
  Result := AObj.PaletteAllocated();
  handleExceptionEnd
end;

//function
function RasterImage_ReleaseBitmapHandle(AObj: TRasterImage): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='ReleaseBitmapHandle'}
  handleExceptionBegin
  Result := AObj.ReleaseBitmapHandle();
  handleExceptionEnd
end;

//function
function RasterImage_ReleaseMaskHandle(AObj: TRasterImage): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='ReleaseMaskHandle'}
  handleExceptionBegin
  Result := AObj.ReleaseMaskHandle();
  handleExceptionEnd
end;

//function
function RasterImage_ReleasePalette(AObj: TRasterImage): HPALETTE; extdecl;
begin
  {$define handleExceptionFuncName :='ReleasePalette'}
  handleExceptionBegin
  Result := AObj.ReleasePalette();
  handleExceptionEnd
end;

//function
function RasterImage_HandleAllocated(AObj: TRasterImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HandleAllocated'}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function RasterImage_Class(): TClass; extdecl;
begin
  Result := TRasterImage;
end;

//procedure
procedure RasterImage_BeginUpdate(AObj: TRasterImage; ACanvasOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate(ACanvasOnly);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_EndUpdate(AObj: TRasterImage; AStreamIsValid: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate(AStreamIsValid);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_FreeImage(AObj: TRasterImage); extdecl;
begin
  {$define handleExceptionFuncName :='FreeImage'}
  handleExceptionBegin
  AObj.FreeImage();
  handleExceptionEnd
end;

//procedure
procedure RasterImage_LoadFromBitmapHandles(AObj: TRasterImage; ABitmap, AMask: HBitmap; ARect: PRect); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromBitmapHandles'}
  handleExceptionBegin
  AObj.LoadFromBitmapHandles(ABitmap, AMask, ARect);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_LoadFromDevice(AObj: TRasterImage; DC: HDC); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromDevice'}
  handleExceptionBegin
  AObj.LoadFromDevice(DC);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_LoadFromStreamForStream(AObj: TRasterImage; AStream: TStream; ASize: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStreamForStream'}
  handleExceptionBegin
  AObj.LoadFromStream(AStream, ASize);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_LoadFromRawImage(AObj: TRasterImage; const AIMage: TRawImage; ADataOwner: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromRawImage'}
  handleExceptionBegin
  AObj.LoadFromRawImage(AIMage, ADataOwner);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_GetSize(AObj: TRasterImage; out OutWidth, OutHeight: Integer); extdecl;
var
  RetOutWidth: Integer;
  RetOutHeight: Integer;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  RetOutWidth := OutWidth;
  RetOutHeight := OutHeight;
  AObj.GetSize(RetOutWidth, RetOutHeight);
  OutWidth := RetOutWidth;
  OutHeight := RetOutHeight;
  handleExceptionEnd
end;

//procedure
procedure RasterImage_Mask(AObj: TRasterImage; ATransparentColor: TColor); extdecl;
begin
  {$define handleExceptionFuncName :='Mask'}
  handleExceptionBegin
  AObj.Mask(ATransparentColor);
  handleExceptionEnd
end;

//procedure
procedure RasterImage_SetHandles(AObj: TRasterImage; ABitmap, AMask: HBITMAP); extdecl;
begin
  {$define handleExceptionFuncName :='SetHandles'}
  handleExceptionBegin
  AObj.SetHandles(ABitmap, AMask);
  handleExceptionEnd
end;


exports
  RasterImage_Canvas,
  RasterImage_BitmapHandle,
  RasterImage_Masked,
  RasterImage_MaskHandle,
  RasterImage_PixelFormat,
  RasterImage_RawImage,
  RasterImage_ScanLine,
  RasterImage_TransparentColor,
  RasterImage_TransparentMode,
  RasterImage_BitmapHandleAllocated,
  RasterImage_MaskHandleAllocated,
  RasterImage_PaletteAllocated,
  RasterImage_ReleaseBitmapHandle,
  RasterImage_ReleaseMaskHandle,
  RasterImage_ReleasePalette,
  RasterImage_HandleAllocated,
  RasterImage_Class,
  RasterImage_BeginUpdate,
  RasterImage_EndUpdate,
  RasterImage_FreeImage,
  RasterImage_LoadFromBitmapHandles,
  RasterImage_LoadFromDevice,
  RasterImage_LoadFromStreamForStream,
  RasterImage_LoadFromRawImage,
  RasterImage_GetSize,
  RasterImage_Mask,
  RasterImage_SetHandles;