
//constructor
function LazIntfImage_Create(AWidth, AHeight: integer): TLazIntfImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_Create1(AWidth, AHeight: integer; AFlags: TRawImageQueryFlags): TLazIntfImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create1'}
  handleExceptionBegin
  Result := TLazIntfImage.Create(AWidth, AHeight, AFlags);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_Create2(ARawImage: TRawImage; ADataOwner: LongBool): TLazIntfImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create2'}
  handleExceptionBegin
  Result := TLazIntfImage.Create(ARawImage, ADataOwner);
  handleExceptionEnd
end;

//constructor
function LazIntfImage_CreateCompatible(IntfImg: TLazIntfImage; AWidth, AHeight: integer): TLazIntfImage; extdecl;
begin
  {$define handleExceptionFuncName :='CreateCompatible'}
  handleExceptionBegin
  Result := TLazIntfImage.CreateCompatible(IntfImg, AWidth, AHeight);
  handleExceptionEnd
end;

//property
function LazIntfImage_PixelData(AObj: TLazIntfImage): PByte; extdecl;
begin
  {$define handleExceptionFuncName :='PixelData'}
  handleExceptionBegin
  Result := AObj.PixelData;
  handleExceptionEnd
end;

//property
function LazIntfImage_MaskData(AObj: TLazIntfImage): PByte; extdecl;
begin
  {$define handleExceptionFuncName :='MaskData'}
  handleExceptionBegin
  Result := AObj.MaskData;
  handleExceptionEnd
end;

//property
function LazIntfImage_TColors(AIsSet: LongBool; AObj: TLazIntfImage; x, y: integer; AValue: TGraphicsColor): TGraphicsColor; extdecl;
begin
  {$define handleExceptionFuncName :='TColors'}
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
  {$define handleExceptionFuncName :='Masked'}
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
  {$define handleExceptionFuncName :='GetDataLineStart'}
  handleExceptionBegin
  Result := AObj.GetDataLineStart(y);
  handleExceptionEnd
end;

//function
function LazIntfImage_HasTransparency(AObj: TLazIntfImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasTransparency'}
  handleExceptionBegin
  Result := AObj.HasTransparency();
  handleExceptionEnd
end;

//function
function LazIntfImage_HasMask(AObj: TLazIntfImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasMask'}
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
  {$define handleExceptionFuncName :='BeginUpdate'}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_EndUpdate(AObj: TLazIntfImage); extdecl;
begin
  {$define handleExceptionFuncName :='EndUpdate'}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_LoadFromDevice(AObj: TLazIntfImage; DC: HDC); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromDevice'}
  handleExceptionBegin
  AObj.LoadFromDevice(DC);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_LoadFromBitmap(AObj: TLazIntfImage; ABitmap, AMaskBitmap: HBitmap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromBitmap'}
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
  {$define handleExceptionFuncName :='CreateBitmaps'}
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
  {$define handleExceptionFuncName :='SetRawImage'}
  handleExceptionBegin
  AObj.SetRawImage(ARawImage, ADataOwner);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_GetRawImage(AObj: TLazIntfImage; out OutRawImage: TRawImage; ATransferOwnership: LongBool); extdecl;
var
  RetOutRawImage: TRawImage;
begin
  {$define handleExceptionFuncName :='GetRawImage'}
  handleExceptionBegin
  RetOutRawImage := OutRawImage;
  AObj.GetRawImage(RetOutRawImage, ATransferOwnership);
  OutRawImage := RetOutRawImage;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_FillPixels(AObj: TLazIntfImage; const Color: TFPColor); extdecl;
begin
  {$define handleExceptionFuncName :='FillPixels'}
  handleExceptionBegin
  AObj.FillPixels(Color);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_CopyPixels(AObj: TLazIntfImage; ASource: TFPCustomImage; XDst: Integer; YDst: Integer; AlphaMask: LongBool; AlphaTreshold: Word); extdecl;
begin
  {$define handleExceptionFuncName :='CopyPixels'}
  handleExceptionBegin
  AObj.CopyPixels(ASource, XDst, YDst, AlphaMask, AlphaTreshold);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_AlphaBlend(AObj: TLazIntfImage; ASource, ASourceAlpha: TLazIntfImage; const ADestX, ADestY: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='AlphaBlend'}
  handleExceptionBegin
  AObj.AlphaBlend(ASource, ASourceAlpha, ADestX, ADestY);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_AlphaFromMask(AObj: TLazIntfImage; AKeepAlpha: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='AlphaFromMask'}
  handleExceptionBegin
  AObj.AlphaFromMask(AKeepAlpha);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_Mask(AObj: TLazIntfImage; const AColor: TFPColor; AKeepOldMask: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Mask'}
  handleExceptionBegin
  AObj.Mask(AColor, AKeepOldMask);
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_GetXYDataPosition(AObj: TLazIntfImage; x, y: integer; out OutPosition: TRawImagePosition); extdecl;
var
  RetOutPosition: TRawImagePosition;
begin
  {$define handleExceptionFuncName :='GetXYDataPosition'}
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
  {$define handleExceptionFuncName :='GetXYMaskPosition'}
  handleExceptionBegin
  RetOutPosition := OutPosition;
  AObj.GetXYMaskPosition(x, y, RetOutPosition);
  OutPosition := RetOutPosition;
  handleExceptionEnd
end;

//procedure
procedure LazIntfImage_CreateData(AObj: TLazIntfImage); extdecl;
begin
  {$define handleExceptionFuncName :='CreateData'}
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