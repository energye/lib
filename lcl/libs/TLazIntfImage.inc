// constructor
function TLazIntfImage_Create(AWidth: integer; AHeight: integer): TLazIntfImage; extdecl;
begin
  {$define handleExceptionID := 25300}
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight);
  handleExceptionEnd
end;

// constructor
function TLazIntfImage_CreateWithIntX2RIQFlags(AWidth: integer; AHeight: integer; AFlags: TRawImageQueryFlags): TLazIntfImage; extdecl;
begin
  {$define handleExceptionID := 25301}
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight, AFlags);
  handleExceptionEnd
end;

// constructor
function TLazIntfImage_CreateCompatible(IntfImg: TLazIntfImage; AWidth: integer; AHeight: integer): TLazIntfImage; extdecl;
begin
  {$define handleExceptionID := 25302}
  handleExceptionBegin
  Result := TLazIntfImage.CreateCompatible(IntfImg, AWidth, AHeight);
  handleExceptionEnd
end;

// function
function TLazIntfImage_CheckDescription(AObj: TLazIntfImage; const ADescription: TRawImageDescriptionWrap; ExceptionOnError: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 25303}
  handleExceptionBegin
  Result := AObj.CheckDescription(ADescription.RawImageDescriptionData()^, ExceptionOnError);
  handleExceptionEnd
end;

// function
function TLazIntfImage_GetDataLineStart(AObj: TLazIntfImage; y: integer): Pointer; extdecl;
begin
  {$define handleExceptionID := 25304}
  handleExceptionBegin
  Result := AObj.GetDataLineStart(y);
  handleExceptionEnd
end;

// function
function TLazIntfImage_HasTransparency(AObj: TLazIntfImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 25305}
  handleExceptionBegin
  Result := AObj.HasTransparency();
  handleExceptionEnd
end;

// function
function TLazIntfImage_HasMask(AObj: TLazIntfImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 25306}
  handleExceptionBegin
  Result := AObj.HasMask();
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_BeginUpdate(AObj: TLazIntfImage); extdecl;
begin
  {$define handleExceptionID := 25307}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_EndUpdate(AObj: TLazIntfImage); extdecl;
begin
  {$define handleExceptionID := 25308}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_LoadFromDevice(AObj: TLazIntfImage; DC: HDC); extdecl;
begin
  {$define handleExceptionID := 25309}
  handleExceptionBegin
  AObj.LoadFromDevice(DC);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_LoadFromBitmap(AObj: TLazIntfImage; ABitmap: HBitmap; AMaskBitmap: HBitmap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 25310}
  handleExceptionBegin
  AObj.LoadFromBitmap(ABitmap, AMaskBitmap, AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_CreateBitmaps(AObj: TLazIntfImage; var ABitmap: HBitmap; var AMask: HBitmap; ASkipMask: LongBool); extdecl;
var
  OutABitmap: HBitmap;
  OutAMask: HBitmap;
begin
  {$define handleExceptionID := 25311}
  handleExceptionBegin
  AObj.CreateBitmaps(OutABitmap, OutAMask, ASkipMask);
  ABitmap := OutABitmap;
  AMask := OutAMask;
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_SetRawImage(AObj: TLazIntfImage; const ARawImage: TRawImageWrap; ADataOwner: LongBool); extdecl;
begin
  {$define handleExceptionID := 25312}
  handleExceptionBegin
  AObj.SetRawImage(ARawImage.RawImageData()^, ADataOwner);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_GetRawImage(AObj: TLazIntfImage; var ARawImage: TRawImageWrap; ATransferOwnership: LongBool); extdecl;
var
  OutARawImage: TRawImage;
begin
  {$define handleExceptionID := 25313}
  handleExceptionBegin
  AObj.GetRawImage(OutARawImage, ATransferOwnership);
  ARawImage := TRawImageWrap.Create(OutARawImage);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_FillPixels(AObj: TLazIntfImage; var Color: TFPColorPtr); extdecl;
var
  InColor: TFPColor;
begin
  {$define handleExceptionID := 25314}
  handleExceptionBegin
  InColor := TFPColorToPas(Color);
  AObj.FillPixels(InColor);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_CopyPixels(AObj: TLazIntfImage; ASource: TFPCustomImage; XDst: Integer; YDst: Integer; AlphaMask: LongBool; AlphaTreshold: Word); extdecl;
begin
  {$define handleExceptionID := 25315}
  handleExceptionBegin
  AObj.CopyPixels(ASource, XDst, YDst, AlphaMask, AlphaTreshold);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_AlphaBlend(AObj: TLazIntfImage; ASource: TLazIntfImage; ASourceAlpha: TLazIntfImage; const ADestX: Integer; const ADestY: Integer); extdecl;
begin
  {$define handleExceptionID := 25316}
  handleExceptionBegin
  AObj.AlphaBlend(ASource, ASourceAlpha, ADestX, ADestY);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_AlphaFromMask(AObj: TLazIntfImage; AKeepAlpha: LongBool); extdecl;
begin
  {$define handleExceptionID := 25317}
  handleExceptionBegin
  AObj.AlphaFromMask(AKeepAlpha);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_Mask(AObj: TLazIntfImage; var AColor: TFPColorPtr; AKeepOldMask: LongBool); extdecl;
var
  InAColor: TFPColor;
begin
  {$define handleExceptionID := 25318}
  handleExceptionBegin
  InAColor := TFPColorToPas(AColor);
  AObj.Mask(InAColor, AKeepOldMask);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_GetXYDataPosition(AObj: TLazIntfImage; x: integer; y: integer; var Position: TRawImagePositionPtr); extdecl;
var
  OutPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 25319}
  handleExceptionBegin
  AObj.GetXYDataPosition(x, y, OutPosition);
  Position := TRawImagePositionToGo(OutPosition);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_GetXYMaskPosition(AObj: TLazIntfImage; x: integer; y: integer; var Position: TRawImagePositionPtr); extdecl;
var
  OutPosition: TRawImagePosition;
begin
  {$define handleExceptionID := 25320}
  handleExceptionBegin
  AObj.GetXYMaskPosition(x, y, OutPosition);
  Position := TRawImagePositionToGo(OutPosition);
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_CreateData(AObj: TLazIntfImage); extdecl;
begin
  {$define handleExceptionID := 25321}
  handleExceptionBegin
  AObj.CreateData();
  handleExceptionEnd
end;

// procedure
procedure TLazIntfImage_SetDataDescriptionKeepData(AObj: TLazIntfImage; const ADescription: TRawImageDescriptionWrap); extdecl;
begin
  {$define handleExceptionID := 25322}
  handleExceptionBegin
  AObj.SetDataDescriptionKeepData(ADescription.RawImageDescriptionData()^);
  handleExceptionEnd
end;

// property
function TLazIntfImage_PixelData(AObj: TLazIntfImage): PByte; extdecl;
begin
  {$define handleExceptionID := 25323}
  handleExceptionBegin
  Result := AObj.PixelData;
  handleExceptionEnd
end;

// property
function TLazIntfImage_MaskData(AObj: TLazIntfImage): PByte; extdecl;
begin
  {$define handleExceptionID := 25324}
  handleExceptionBegin
  Result := AObj.MaskData;
  handleExceptionEnd
end;

// property
function TLazIntfImage_DataDescription(ASet: LongBool; AObj: TLazIntfImage; AValue: TRawImageDescriptionWrap): TRawImageDescriptionWrap; extdecl;
begin
  {$define handleExceptionID := 25325}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DataDescription := AValue.RawImageDescriptionData()^
  end else
    Result := TRawImageDescriptionWrap.Create(AObj.DataDescription);
  handleExceptionEnd
end;

// property
function TLazIntfImage_TColors(ASet: LongBool; AObj: TLazIntfImage; x: integer; y: integer; AValue: TGraphicsColor): TGraphicsColor; extdecl;
begin
  {$define handleExceptionID := 25326}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TColors[x, y] := AValue
  end else
    Result := AObj.TColors[x, y];
  handleExceptionEnd
end;

// property
function TLazIntfImage_Masked(ASet: LongBool; AObj: TLazIntfImage; x: integer; y: integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 25327}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Masked[x, y] := AValue
  end else
    Result := AObj.Masked[x, y];
  handleExceptionEnd
end;

exports
  TLazIntfImage_Create,
  TLazIntfImage_CreateWithIntX2RIQFlags,
  TLazIntfImage_CreateCompatible,
  TLazIntfImage_CheckDescription,
  TLazIntfImage_GetDataLineStart,
  TLazIntfImage_HasTransparency,
  TLazIntfImage_HasMask,
  TLazIntfImage_BeginUpdate,
  TLazIntfImage_EndUpdate,
  TLazIntfImage_LoadFromDevice,
  TLazIntfImage_LoadFromBitmap,
  TLazIntfImage_CreateBitmaps,
  TLazIntfImage_SetRawImage,
  TLazIntfImage_GetRawImage,
  TLazIntfImage_FillPixels,
  TLazIntfImage_CopyPixels,
  TLazIntfImage_AlphaBlend,
  TLazIntfImage_AlphaFromMask,
  TLazIntfImage_Mask,
  TLazIntfImage_GetXYDataPosition,
  TLazIntfImage_GetXYMaskPosition,
  TLazIntfImage_CreateData,
  TLazIntfImage_SetDataDescriptionKeepData,
  TLazIntfImage_PixelData,
  TLazIntfImage_MaskData,
  TLazIntfImage_DataDescription,
  TLazIntfImage_TColors,
  TLazIntfImage_Masked;