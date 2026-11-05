// constructor
function TRawImageDescriptionWrap_Create(): TRawImageDescriptionWrap; extdecl;
begin
  {$define handleExceptionID := 30800}
  handleExceptionBegin
  Result := TRawImageDescriptionWrap.Create();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_RawImageDescriptionData(AObj: TRawImageDescriptionWrap): PRawImageDescription; extdecl;
begin
  {$define handleExceptionID := 30801}
  handleExceptionBegin
  Result := AObj.RawImageDescriptionData();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_GetDescriptionFromMask(AObj: TRawImageDescriptionWrap): TRawImageDescriptionWrap; extdecl;
begin
  {$define handleExceptionID := 30802}
  handleExceptionBegin
  Result := AObj.GetDescriptionFromMask();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_GetDescriptionFromAlpha(AObj: TRawImageDescriptionWrap): TRawImageDescriptionWrap; extdecl;
begin
  {$define handleExceptionID := 30803}
  handleExceptionBegin
  Result := AObj.GetDescriptionFromAlpha();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_BytesPerLine(AObj: TRawImageDescriptionWrap): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30804}
  handleExceptionBegin
  Result := AObj.BytesPerLine();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_BitsPerLine(AObj: TRawImageDescriptionWrap): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30805}
  handleExceptionBegin
  Result := AObj.BitsPerLine();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_MaskBytesPerLine(AObj: TRawImageDescriptionWrap): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30806}
  handleExceptionBegin
  Result := AObj.MaskBytesPerLine();
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_MaskBitsPerLine(AObj: TRawImageDescriptionWrap): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30807}
  handleExceptionBegin
  Result := AObj.MaskBitsPerLine();
  handleExceptionEnd
end;

// function
procedure TRawImageDescriptionWrap_AsString(AObj: TRawImageDescriptionWrap;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 30808}
  handleExceptionBegin
  StringBufferCreate(AObj.AsString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TRawImageDescriptionWrap_IsEqual(AObj: TRawImageDescriptionWrap; ADesc: TRawImageDescriptionWrap): LongBool; extdecl;
begin
  {$define handleExceptionID := 30809}
  handleExceptionBegin
  Result := AObj.IsEqual(ADesc);
  handleExceptionEnd
end;

// function static
function TRawImageDescriptionWrap_UnWrap(const AData: PRawImageDescription): TRawImageDescriptionWrap; extdecl;
begin
  Result := TRawImageDescriptionWrap.UnWrap(AData);
end;

// procedure
procedure TRawImageDescriptionWrap_Init(AObj: TRawImageDescriptionWrap); extdecl;
begin
  {$define handleExceptionID := 30810}
  handleExceptionBegin
  AObj.Init();
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP1(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30811}
  handleExceptionBegin
  AObj.Init_BPP1(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP16_R5G6B5(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30812}
  handleExceptionBegin
  AObj.Init_BPP16_R5G6B5(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP24_R8G8B8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30813}
  handleExceptionBegin
  AObj.Init_BPP24_R8G8B8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP24_R8G8B8_BIO_TTB_UpsideDown(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30814}
  handleExceptionBegin
  AObj.Init_BPP24_R8G8B8_BIO_TTB_UpsideDown(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_A8R8G8B8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30815}
  handleExceptionBegin
  AObj.Init_BPP32_A8R8G8B8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_R8G8B8A8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30816}
  handleExceptionBegin
  AObj.Init_BPP32_R8G8B8A8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP24_B8G8R8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30817}
  handleExceptionBegin
  AObj.Init_BPP24_B8G8R8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP24_B8G8R8_M1_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30818}
  handleExceptionBegin
  AObj.Init_BPP24_B8G8R8_M1_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_B8G8R8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30819}
  handleExceptionBegin
  AObj.Init_BPP32_B8G8R8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_B8G8R8_M1_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30820}
  handleExceptionBegin
  AObj.Init_BPP32_B8G8R8_M1_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_B8G8R8A8_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30821}
  handleExceptionBegin
  AObj.Init_BPP32_B8G8R8A8_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_Init_BPP32_B8G8R8A8_M1_BIO_TTB(AObj: TRawImageDescriptionWrap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 30822}
  handleExceptionBegin
  AObj.Init_BPP32_B8G8R8A8_M1_BIO_TTB(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TRawImageDescriptionWrap_GetRGBIndices(AObj: TRawImageDescriptionWrap; var Ridx: byte; var Gidx: byte; var Bidx: byte; var Aidx: byte); extdecl;
var
  OutRidx: byte;
  OutGidx: byte;
  OutBidx: byte;
  OutAidx: byte;
begin
  {$define handleExceptionID := 30823}
  handleExceptionBegin
  AObj.GetRGBIndices(OutRidx, OutGidx, OutBidx, OutAidx);
  Ridx := OutRidx;
  Gidx := OutGidx;
  Bidx := OutBidx;
  Aidx := OutAidx;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_Format(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageColorFormat): TRawImageColorFormat; extdecl;
begin
  {$define handleExceptionID := 30824}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Format := AValue
  end else
    Result := AObj.Format;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_Width(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 30825}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_Height(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 30826}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_Depth(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30827}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Depth := AValue
  end else
    Result := AObj.Depth;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_BitOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageBitOrder): TRawImageBitOrder; extdecl;
begin
  {$define handleExceptionID := 30828}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BitOrder := AValue
  end else
    Result := AObj.BitOrder;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_ByteOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageByteOrder): TRawImageByteOrder; extdecl;
begin
  {$define handleExceptionID := 30829}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ByteOrder := AValue
  end else
    Result := AObj.ByteOrder;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_LineOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageLineOrder): TRawImageLineOrder; extdecl;
begin
  {$define handleExceptionID := 30830}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineOrder := AValue
  end else
    Result := AObj.LineOrder;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_LineEnd(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageLineEnd): TRawImageLineEnd; extdecl;
begin
  {$define handleExceptionID := 30831}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineEnd := AValue
  end else
    Result := AObj.LineEnd;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_BitsPerPixel(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30832}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BitsPerPixel := AValue
  end else
    Result := AObj.BitsPerPixel;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_RedPrec(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30833}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RedPrec := AValue
  end else
    Result := AObj.RedPrec;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_RedShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30834}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RedShift := AValue
  end else
    Result := AObj.RedShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_GreenPrec(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30835}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GreenPrec := AValue
  end else
    Result := AObj.GreenPrec;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_GreenShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30836}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GreenShift := AValue
  end else
    Result := AObj.GreenShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_BluePrec(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30837}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BluePrec := AValue
  end else
    Result := AObj.BluePrec;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_BlueShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30838}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlueShift := AValue
  end else
    Result := AObj.BlueShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_AlphaPrec(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30839}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlphaPrec := AValue
  end else
    Result := AObj.AlphaPrec;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_AlphaShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30840}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlphaShift := AValue
  end else
    Result := AObj.AlphaShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_MaskBitsPerPixel(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30841}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskBitsPerPixel := AValue
  end else
    Result := AObj.MaskBitsPerPixel;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_MaskShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30842}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskShift := AValue
  end else
    Result := AObj.MaskShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_MaskLineEnd(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageLineEnd): TRawImageLineEnd; extdecl;
begin
  {$define handleExceptionID := 30843}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskLineEnd := AValue
  end else
    Result := AObj.MaskLineEnd;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_MaskBitOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageBitOrder): TRawImageBitOrder; extdecl;
begin
  {$define handleExceptionID := 30844}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskBitOrder := AValue
  end else
    Result := AObj.MaskBitOrder;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteColorCount(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Word): Word; extdecl;
begin
  {$define handleExceptionID := 30845}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteColorCount := AValue
  end else
    Result := AObj.PaletteColorCount;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteBitsPerIndex(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30846}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteBitsPerIndex := AValue
  end else
    Result := AObj.PaletteBitsPerIndex;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteShift(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 30847}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteShift := AValue
  end else
    Result := AObj.PaletteShift;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteLineEnd(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageLineEnd): TRawImageLineEnd; extdecl;
begin
  {$define handleExceptionID := 30848}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteLineEnd := AValue
  end else
    Result := AObj.PaletteLineEnd;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteBitOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageBitOrder): TRawImageBitOrder; extdecl;
begin
  {$define handleExceptionID := 30849}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteBitOrder := AValue
  end else
    Result := AObj.PaletteBitOrder;
  handleExceptionEnd
end;

// property
function TRawImageDescriptionWrap_PaletteByteOrder(ASet: LongBool; AObj: TRawImageDescriptionWrap; AValue: TRawImageByteOrder): TRawImageByteOrder; extdecl;
begin
  {$define handleExceptionID := 30850}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteByteOrder := AValue
  end else
    Result := AObj.PaletteByteOrder;
  handleExceptionEnd
end;

exports
  TRawImageDescriptionWrap_Create,
  TRawImageDescriptionWrap_RawImageDescriptionData,
  TRawImageDescriptionWrap_GetDescriptionFromMask,
  TRawImageDescriptionWrap_GetDescriptionFromAlpha,
  TRawImageDescriptionWrap_BytesPerLine,
  TRawImageDescriptionWrap_BitsPerLine,
  TRawImageDescriptionWrap_MaskBytesPerLine,
  TRawImageDescriptionWrap_MaskBitsPerLine,
  TRawImageDescriptionWrap_AsString,
  TRawImageDescriptionWrap_IsEqual,
  TRawImageDescriptionWrap_UnWrap,
  TRawImageDescriptionWrap_Init,
  TRawImageDescriptionWrap_Init_BPP1,
  TRawImageDescriptionWrap_Init_BPP16_R5G6B5,
  TRawImageDescriptionWrap_Init_BPP24_R8G8B8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP24_R8G8B8_BIO_TTB_UpsideDown,
  TRawImageDescriptionWrap_Init_BPP32_A8R8G8B8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP32_R8G8B8A8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP24_B8G8R8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP24_B8G8R8_M1_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP32_B8G8R8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP32_B8G8R8_M1_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP32_B8G8R8A8_BIO_TTB,
  TRawImageDescriptionWrap_Init_BPP32_B8G8R8A8_M1_BIO_TTB,
  TRawImageDescriptionWrap_GetRGBIndices,
  TRawImageDescriptionWrap_Format,
  TRawImageDescriptionWrap_Width,
  TRawImageDescriptionWrap_Height,
  TRawImageDescriptionWrap_Depth,
  TRawImageDescriptionWrap_BitOrder,
  TRawImageDescriptionWrap_ByteOrder,
  TRawImageDescriptionWrap_LineOrder,
  TRawImageDescriptionWrap_LineEnd,
  TRawImageDescriptionWrap_BitsPerPixel,
  TRawImageDescriptionWrap_RedPrec,
  TRawImageDescriptionWrap_RedShift,
  TRawImageDescriptionWrap_GreenPrec,
  TRawImageDescriptionWrap_GreenShift,
  TRawImageDescriptionWrap_BluePrec,
  TRawImageDescriptionWrap_BlueShift,
  TRawImageDescriptionWrap_AlphaPrec,
  TRawImageDescriptionWrap_AlphaShift,
  TRawImageDescriptionWrap_MaskBitsPerPixel,
  TRawImageDescriptionWrap_MaskShift,
  TRawImageDescriptionWrap_MaskLineEnd,
  TRawImageDescriptionWrap_MaskBitOrder,
  TRawImageDescriptionWrap_PaletteColorCount,
  TRawImageDescriptionWrap_PaletteBitsPerIndex,
  TRawImageDescriptionWrap_PaletteShift,
  TRawImageDescriptionWrap_PaletteLineEnd,
  TRawImageDescriptionWrap_PaletteBitOrder,
  TRawImageDescriptionWrap_PaletteByteOrder;