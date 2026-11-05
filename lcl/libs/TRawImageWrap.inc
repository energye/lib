// constructor
function TRawImageWrap_Create(): TRawImageWrap; extdecl;
begin
  {$define handleExceptionID := 30900}
  handleExceptionBegin
  Result := TRawImageWrap.Create();
  handleExceptionEnd
end;

// function
function TRawImageWrap_RawImageData(AObj: TRawImageWrap): PRawImage; extdecl;
begin
  {$define handleExceptionID := 30901}
  handleExceptionBegin
  Result := AObj.RawImageData();
  handleExceptionEnd
end;

// function
function TRawImageWrap_GetLineStart(AObj: TRawImageWrap; ALine: cardinal): pbyte; extdecl;
begin
  {$define handleExceptionID := 30902}
  handleExceptionBegin
  Result := AObj.GetLineStart(ALine);
  handleExceptionEnd
end;

// function
function TRawImageWrap_ReadBits(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; APrec: byte; AShift: byte): word; extdecl;
var
  InAPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 30903}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  Result := AObj.ReadBits(InAPosition, APrec, AShift);
  handleExceptionEnd
end;

// function
function TRawImageWrap_IsMasked(AObj: TRawImageWrap; ATestPixels: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30904}
  handleExceptionBegin
  Result := AObj.IsMasked(ATestPixels);
  handleExceptionEnd
end;

// function
function TRawImageWrap_IsTransparent(AObj: TRawImageWrap; ATestPixels: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30905}
  handleExceptionBegin
  Result := AObj.IsTransparent(ATestPixels);
  handleExceptionEnd
end;

// function
function TRawImageWrap_IsEqual(AObj: TRawImageWrap; AImage: TRawImageWrap): LongBool; extdecl;
begin
  {$define handleExceptionID := 30906}
  handleExceptionBegin
  Result := AObj.IsEqual(AImage);
  handleExceptionEnd
end;

// function static
function TRawImageWrap_UnWrap(const AData: PRawImage): TRawImageWrap; extdecl;
begin
  Result := TRawImageWrap.UnWrap(AData);
end;

// procedure
procedure TRawImageWrap_Init(AObj: TRawImageWrap); extdecl;
begin
  {$define handleExceptionID := 30907}
  handleExceptionBegin
  AObj.Init();
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_CreateData(AObj: TRawImageWrap; AZeroMem: LongBool); extdecl;
begin
  {$define handleExceptionID := 30908}
  handleExceptionBegin
  AObj.CreateData(AZeroMem);
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_FreeData(AObj: TRawImageWrap); extdecl;
begin
  {$define handleExceptionID := 30909}
  handleExceptionBegin
  AObj.FreeData();
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_ReleaseData(AObj: TRawImageWrap); extdecl;
begin
  {$define handleExceptionID := 30910}
  handleExceptionBegin
  AObj.ReleaseData();
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_ExtractRect(AObj: TRawImageWrap; var ARect: TRect; var ADst: TRawImageWrap); extdecl;
var
  OutADst: TRawImageWrap;
begin
  {$define handleExceptionID := 30911}
  handleExceptionBegin
  AObj.ExtractRect(ARect, OutADst);
  ADst := OutADst;
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_PerformEffect(AObj: TRawImageWrap; const ADrawEffect: TGraphicsDrawEffect; CreateNewData: LongBool; FreeOldData: LongBool); extdecl;
begin
  {$define handleExceptionID := 30912}
  handleExceptionBegin
  AObj.PerformEffect(ADrawEffect, CreateNewData, FreeOldData);
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_ReadChannels(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; var ARed: word; var AGreen: word; var ABlue: word; var AAlpha: word); extdecl;
var
  InAPosition: TRawImagePosition;
  OutARed: word;
  OutAGreen: word;
  OutABlue: word;
  OutAAlpha: word;
begin
  {$define handleExceptionID := 30913}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  AObj.ReadChannels(InAPosition, OutARed, OutAGreen, OutABlue, OutAAlpha);
  ARed := OutARed;
  AGreen := OutAGreen;
  ABlue := OutABlue;
  AAlpha := OutAAlpha;
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_ReadMask(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; var AMask: LongBool); extdecl;
var
  InAPosition: TRawImagePosition;
  OutAMask: boolean;
begin
  {$define handleExceptionID := 30914}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  AObj.ReadMask(InAPosition, OutAMask);
  AMask := OutAMask;
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_WriteBits(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; APrec: byte; AShift: byte; ABits: word); extdecl;
var
  InAPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 30915}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  AObj.WriteBits(InAPosition, APrec, AShift, ABits);
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_WriteChannels(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; ARed: word; AGreen: word; ABlue: word; AAlpha: word); extdecl;
var
  InAPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 30916}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  AObj.WriteChannels(InAPosition, ARed, AGreen, ABlue, AAlpha);
  handleExceptionEnd
end;

// procedure
procedure TRawImageWrap_WriteMask(AObj: TRawImageWrap; var APosition: TRawImagePositionPtr; AMask: LongBool); extdecl;
var
  InAPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 30917}
  handleExceptionBegin
  InAPosition := TRawImagePositionToPas(APosition);
  AObj.WriteMask(InAPosition, AMask);
  handleExceptionEnd
end;

// property
function TRawImageWrap_Description(ASet: LongBool; AObj: TRawImageWrap; AValue: TRawImageDescriptionWrap): TRawImageDescriptionWrap; extdecl;
begin
  {$define handleExceptionID := 30918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Description := AValue
  end else
    Result := AObj.Description;
  handleExceptionEnd
end;

// property
function TRawImageWrap_Data(ASet: LongBool; AObj: TRawImageWrap; AValue: PByte): PByte; extdecl;
begin
  {$define handleExceptionID := 30919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Data := AValue
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

// property
function TRawImageWrap_DataSize(ASet: LongBool; AObj: TRawImageWrap; AValue: PtrUInt): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DataSize := AValue
  end else
    Result := AObj.DataSize;
  handleExceptionEnd
end;

// property
function TRawImageWrap_Mask(ASet: LongBool; AObj: TRawImageWrap; AValue: PByte): PByte; extdecl;
begin
  {$define handleExceptionID := 30921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Mask := AValue
  end else
    Result := AObj.Mask;
  handleExceptionEnd
end;

// property
function TRawImageWrap_MaskSize(ASet: LongBool; AObj: TRawImageWrap; AValue: PtrUInt): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaskSize := AValue
  end else
    Result := AObj.MaskSize;
  handleExceptionEnd
end;

// property
function TRawImageWrap_Palette(ASet: LongBool; AObj: TRawImageWrap; AValue: PByte): PByte; extdecl;
begin
  {$define handleExceptionID := 30923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Palette := AValue
  end else
    Result := AObj.Palette;
  handleExceptionEnd
end;

// property
function TRawImageWrap_PaletteSize(ASet: LongBool; AObj: TRawImageWrap; AValue: PtrUInt): PtrUInt; extdecl;
begin
  {$define handleExceptionID := 30924}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteSize := AValue
  end else
    Result := AObj.PaletteSize;
  handleExceptionEnd
end;

exports
  TRawImageWrap_Create,
  TRawImageWrap_RawImageData,
  TRawImageWrap_GetLineStart,
  TRawImageWrap_ReadBits,
  TRawImageWrap_IsMasked,
  TRawImageWrap_IsTransparent,
  TRawImageWrap_IsEqual,
  TRawImageWrap_UnWrap,
  TRawImageWrap_Init,
  TRawImageWrap_CreateData,
  TRawImageWrap_FreeData,
  TRawImageWrap_ReleaseData,
  TRawImageWrap_ExtractRect,
  TRawImageWrap_PerformEffect,
  TRawImageWrap_ReadChannels,
  TRawImageWrap_ReadMask,
  TRawImageWrap_WriteBits,
  TRawImageWrap_WriteChannels,
  TRawImageWrap_WriteMask,
  TRawImageWrap_Description,
  TRawImageWrap_Data,
  TRawImageWrap_DataSize,
  TRawImageWrap_Mask,
  TRawImageWrap_MaskSize,
  TRawImageWrap_Palette,
  TRawImageWrap_PaletteSize;