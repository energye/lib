
//constructor
function LazIntfImage_Create(AWidth, AHeight: integer): TLazIntfImage; extdecl;
begin
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_Create1(AWidth, AHeight: integer; AFlags: TRawImageQueryFlags): TLazIntfImage; extdecl;
begin
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight, AFlags);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_Create2(ARawImage: TRawImage; ADataOwner: LongBool): TLazIntfImage; extdecl;
begin
  handleExceptionBegin
  Result := TLazIntfImage.Create(ARawImage, ADataOwner);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_CreateCompatible(IntfImg: TLazIntfImage; AWidth, AHeight: integer): TLazIntfImage; extdecl;
begin
  handleExceptionBegin
  Result := TLazIntfImage.CreateCompatible(IntfImg, AWidth, AHeight);
  handleExceptionEnd
end;

//property
function LazIntfImage_PixelData(AObj: TLazIntfImage): PByte; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PixelData;
  handleExceptionEnd
end;

//property
function LazIntfImage_MaskData(AObj: TLazIntfImage): PByte; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MaskData;
  handleExceptionEnd
end;

//property
function LazIntfImage_TColors(AIsSet: LongBool; AObj: TLazIntfImage; x, y: integer; AValue: TGraphicsColor): TGraphicsColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TColors[x, y] := AValue;
  end else
    Result := AObj.TColors[x, y];
  handleExceptionEnd
end;

//property
function LazIntfImage_Masked(AIsSet: LongBool; AObj: TLazIntfImage; x, y: integer; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Masked[x, y] := AValue;
  end else
    Result := AObj.Masked[x, y];
  handleExceptionEnd
end;

//function
function LazIntfImage_GetDataLineStart(AObj: TLazIntfImage; y: integer): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDataLineStart(y);
  handleExceptionEnd
end;

//function
function LazIntfImage_HasTransparency(AObj: TLazIntfImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasTransparency();
  handleExceptionEnd
end;

//function
function LazIntfImage_HasMask(AObj: TLazIntfImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasMask();
  handleExceptionEnd
end;

//function
function LazIntfImage_Class(): TClass; extdecl;
begin
  Result := TLazIntfImage;
end;

//procedure
procedure LazIntfImage_BeginUpdate(AObj: TLazIntfImage); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_EndUpdate(AObj: TLazIntfImage); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_LoadFromDevice(AObj: TLazIntfImage; DC: HDC); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromDevice(DC);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_LoadFromBitmap(AObj: TLazIntfImage; ABitmap, AMaskBitmap: HBitmap; AWidth: integer; AHeight: integer); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromBitmap(ABitmap, AMaskBitmap, AWidth, AHeight);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_CreateBitmaps(AObj: TLazIntfImage; out OutBitmap, OutMask: HBitmap; ASkipMask: LongBool); extdecl;
var
  RetOutBitmap: HBitmap;
  RetOutMask: HBitmap;
begin
  handleExceptionBegin
  RetOutBitmap := OutBitmap;
  RetOutMask := OutMask;
  AObj.CreateBitmaps(RetOutBitmap, RetOutMask, ASkipMask);
  OutBitmap := RetOutBitmap;
  OutMask := RetOutMask;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_SetRawImage(AObj: TLazIntfImage; const ARawImage: TRawImage; ADataOwner: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetRawImage(ARawImage, ADataOwner);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_GetRawImage(AObj: TLazIntfImage; out OutRawImage: TRawImage; ATransferOwnership: LongBool); extdecl;
var
  RetOutRawImage: TRawImage;
begin
  handleExceptionBegin
  RetOutRawImage := OutRawImage;
  AObj.GetRawImage(RetOutRawImage, ATransferOwnership);
  OutRawImage := RetOutRawImage;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_FillPixels(AObj: TLazIntfImage; const Color: TFPColor); extdecl;
begin
  handleExceptionBegin
  AObj.FillPixels(Color);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_CopyPixels(AObj: TLazIntfImage; ASource: TFPCustomImage; XDst: Integer; YDst: Integer; AlphaMask: LongBool; AlphaTreshold: Word); extdecl;
begin
  handleExceptionBegin
  AObj.CopyPixels(ASource, XDst, YDst, AlphaMask, AlphaTreshold);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_AlphaBlend(AObj: TLazIntfImage; ASource, ASourceAlpha: TLazIntfImage; const ADestX, ADestY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AlphaBlend(ASource, ASourceAlpha, ADestX, ADestY);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_AlphaFromMask(AObj: TLazIntfImage; AKeepAlpha: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AlphaFromMask(AKeepAlpha);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_Mask(AObj: TLazIntfImage; const AColor: TFPColor; AKeepOldMask: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Mask(AColor, AKeepOldMask);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_GetXYDataPosition(AObj: TLazIntfImage; x, y: integer; out OutPosition: TRawImagePosition); extdecl;
var
  RetOutPosition: TRawImagePosition;
begin
  handleExceptionBegin
  RetOutPosition := OutPosition;
  AObj.GetXYDataPosition(x, y, RetOutPosition);
  OutPosition := RetOutPosition;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_GetXYMaskPosition(AObj: TLazIntfImage; x, y: integer; out OutPosition: TRawImagePosition); extdecl;
var
  RetOutPosition: TRawImagePosition;
begin
  handleExceptionBegin
  RetOutPosition := OutPosition;
  AObj.GetXYMaskPosition(x, y, RetOutPosition);
  OutPosition := RetOutPosition;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_CreateData(AObj: TLazIntfImage); extdecl;
begin
  handleExceptionBegin
  AObj.CreateData();
  handleExceptionEnd
end;


exports
  LazIntfImage_Create,
  LazIntfImage_Create1,
  LazIntfImage_Create2,
  LazIntfImage_CreateCompatible,
  LazIntfImage_PixelData,
  LazIntfImage_MaskData,
  LazIntfImage_TColors,
  LazIntfImage_Masked,
  LazIntfImage_GetDataLineStart,
  LazIntfImage_HasTransparency,
  LazIntfImage_HasMask,
  LazIntfImage_Class,
  LazIntfImage_BeginUpdate,
  LazIntfImage_EndUpdate,
  LazIntfImage_LoadFromDevice,
  LazIntfImage_LoadFromBitmap,
  LazIntfImage_CreateBitmaps,
  LazIntfImage_SetRawImage,
  LazIntfImage_GetRawImage,
  LazIntfImage_FillPixels,
  LazIntfImage_CopyPixels,
  LazIntfImage_AlphaBlend,
  LazIntfImage_AlphaFromMask,
  LazIntfImage_Mask,
  LazIntfImage_GetXYDataPosition,
  LazIntfImage_GetXYMaskPosition,
  LazIntfImage_CreateData;