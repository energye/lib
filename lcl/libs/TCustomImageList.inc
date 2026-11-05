// constructor
function TCustomImageList_Create(AOwner: TComponent): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 8200}
  handleExceptionBegin
  Result := TCustomImageList.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TCustomImageList_CreateSize(AWidth: Integer; AHeight: Integer): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 8201}
  handleExceptionBegin
  Result := TCustomImageList.CreateSize(AWidth, AHeight);
  handleExceptionEnd
end;

// function
function TCustomImageList_Add(AObj: TCustomImageList; Image: TCustomBitmap; Mask: TCustomBitmap): Integer; extdecl;
begin
  {$define handleExceptionID := 8202}
  handleExceptionBegin
  Result := AObj.Add(Image, Mask);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddSliced(AObj: TCustomImageList; Image: TCustomBitmap; AHorizontalCount: Integer; AVerticalCount: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8203}
  handleExceptionBegin
  Result := AObj.AddSliced(Image, AHorizontalCount, AVerticalCount);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddSlice(AObj: TCustomImageList; Image: TCustomBitmap; var AImageRect: TRect): Integer; extdecl;
begin
  {$define handleExceptionID := 8204}
  handleExceptionBegin
  Result := AObj.AddSlice(Image, AImageRect);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddSliceCentered(AObj: TCustomImageList; Image: TCustomBitmap): Integer; extdecl;
begin
  {$define handleExceptionID := 8205}
  handleExceptionBegin
  Result := AObj.AddSliceCentered(Image);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddIcon(AObj: TCustomImageList; Image: TCustomIcon): Integer; extdecl;
begin
  {$define handleExceptionID := 8206}
  handleExceptionBegin
  Result := AObj.AddIcon(Image);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddMasked(AObj: TCustomImageList; Image: TBitmap; MaskColor: TColor): Integer; extdecl;
begin
  {$define handleExceptionID := 8207}
  handleExceptionBegin
  Result := AObj.AddMasked(Image, MaskColor);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddLazarusResource(AObj: TCustomImageList; const ResourceName: PChar; MaskColor: TColor): integer; extdecl;
begin
  {$define handleExceptionID := 8208}
  handleExceptionBegin
  Result := AObj.AddLazarusResource(ResourceName, MaskColor);
  handleExceptionEnd
end;

// function
function TCustomImageList_AddResourceName(AObj: TCustomImageList; Instance: TLCLHandle; const ResourceName: PChar; MaskColor: TColor): integer; extdecl;
begin
  {$define handleExceptionID := 8209}
  handleExceptionBegin
  Result := AObj.AddResourceName(Instance, ResourceName, MaskColor);
  handleExceptionEnd
end;

// function
procedure TCustomImageList_GetHotSpot(AObj: TCustomImageList; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 8210}
  handleExceptionBegin
  Result := AObj.GetHotSpot();
  handleExceptionEnd
end;

// function
function TCustomImageList_FindResolution(AObj: TCustomImageList; AImageWidth: Integer; var AResolution: TCustomImageListResolution): LongBool; extdecl;
var
  OutAResolution: TCustomImageListResolution;
begin
  {$define handleExceptionID := 8211}
  handleExceptionBegin
  Result := AObj.FindResolution(AImageWidth, OutAResolution);
  AResolution := OutAResolution;
  handleExceptionEnd
end;

// function
function TCustomImageList_Resolutions(AObj: TCustomImageList): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionID := 8212}
  handleExceptionBegin
  Result := AObj.Resolutions();
  handleExceptionEnd
end;

// function
function TCustomImageList_ResolutionsDesc(AObj: TCustomImageList): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionID := 8213}
  handleExceptionBegin
  Result := AObj.ResolutionsDesc();
  handleExceptionEnd
end;

// procedure static
procedure TCustomImageList_ScaleImageWithCBitmapX2IntX2RGBAQArray(const ABitmap: TCustomBitmap; const AMask: TCustomBitmap; TargetWidth: Integer; TargetHeight: Integer; var AData: TRGBAQuadArray; var ADataCount: Integer); extdecl;
var
  OutAData: TRGBAQuadArray = nil;
begin
  TCustomImageList.ScaleImage(ABitmap, AMask, TargetWidth, TargetHeight, OutAData);
  ADataCount := Length(OutAData);
  AData := OutAData;
end;

// procedure static
procedure TCustomImageList_ScaleImageWithCBitmapX2RectIntX2RGBAQArray(const ABitmap: TCustomBitmap; const AMask: TCustomBitmap; var SourceRect: TRect; TargetWidth: Integer; TargetHeight: Integer; var AData: TRGBAQuadArray; var ADataCount: Integer); extdecl;
var
  OutAData: TRGBAQuadArray = nil;
begin
  TCustomImageList.ScaleImage(ABitmap, AMask, SourceRect, TargetWidth, TargetHeight, OutAData);
  ADataCount := Length(OutAData);
  AData := OutAData;
end;

// procedure static
procedure TCustomImageList_ScaleImageWithHBITMAPX2RectIntX2RGBAQArray(const ABitmap: HBITMAP; const AMask: HBITMAP; var SourceRect: TRect; TargetWidth: Integer; TargetHeight: Integer; var AData: TRGBAQuadArray; var ADataCount: Integer); extdecl;
var
  OutAData: TRGBAQuadArray = nil;
begin
  TCustomImageList.ScaleImage(ABitmap, AMask, SourceRect, TargetWidth, TargetHeight, OutAData);
  ADataCount := Length(OutAData);
  AData := OutAData;
end;

// procedure
procedure TCustomImageList_AssignTo(AObj: TCustomImageList; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 8214}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_WriteData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 8215}
  handleExceptionBegin
  AObj.WriteData(AStream);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReadData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 8216}
  handleExceptionBegin
  AObj.ReadData(AStream);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_WriteAdvData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 8217}
  handleExceptionBegin
  AObj.WriteAdvData(AStream);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReadAdvData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 8218}
  handleExceptionBegin
  AObj.ReadAdvData(AStream);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_BeginUpdate(AObj: TCustomImageList); extdecl;
begin
  {$define handleExceptionID := 8219}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_EndUpdate(AObj: TCustomImageList); extdecl;
begin
  {$define handleExceptionID := 8220}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_AddImages(AObj: TCustomImageList; AValue: TCustomImageList); extdecl;
begin
  {$define handleExceptionID := 8221}
  handleExceptionBegin
  AObj.AddImages(AValue);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Change(AObj: TCustomImageList); extdecl;
begin
  {$define handleExceptionID := 8222}
  handleExceptionBegin
  AObj.Change();
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Clear(AObj: TCustomImageList); extdecl;
begin
  {$define handleExceptionID := 8223}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Delete(AObj: TCustomImageList; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 8224}
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawWithCanvasIntX3Bool(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 8225}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawWithCanvasIntX3GDEffect(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8226}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawWithCanvasIntX3DStyleITypeBool(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 8227}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawWithCanvasIntX3DStyleITypeGDEffect(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8228}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawForPPIWithCanvasIntX5DoubleBool(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AImageWidthAt96PPI: Integer; ATargetPPI: Integer; var ACanvasFactor: Double; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 8229}
  handleExceptionBegin
  AObj.DrawForPPI(ACanvas, AX, AY, AIndex, AImageWidthAt96PPI, ATargetPPI, ACanvasFactor, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawForPPIWithCanvasIntX5DoubleGDEffect(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AImageWidthAt96PPI: Integer; ATargetPPI: Integer; var ACanvasFactor: Double; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8230}
  handleExceptionBegin
  AObj.DrawForPPI(ACanvas, AX, AY, AIndex, AImageWidthAt96PPI, ATargetPPI, ACanvasFactor, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawOverlayWithCanvasIntX3OverlayBool(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 8231}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawOverlayWithCanvasIntX3OverlayGDEffect(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8232}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DrawOverlayWithCanvasIntX3OverlayDStyleITypeGDEffect(AObj: TCustomImageList; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8233}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetBitmapWithIntCustomBitmap(AObj: TCustomImageList; Index: Integer; Image: TCustomBitmap); extdecl;
begin
  {$define handleExceptionID := 8234}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetBitmapWithIntCBitmapGDEffect(AObj: TCustomImageList; Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8235}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetFullBitmap(AObj: TCustomImageList; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8236}
  handleExceptionBegin
  AObj.GetFullBitmap(Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetFullRawImage(AObj: TCustomImageList; var Image: TRawImageWrap); extdecl;
var
  OutImage: TRawImage;
begin
  {$define handleExceptionID := 8237}
  handleExceptionBegin
  AObj.GetFullRawImage(OutImage);
  Image := TRawImageWrap.Create(OutImage);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetIconWithIntIconGDEffect(AObj: TCustomImageList; Index: Integer; Image: TIcon; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 8238}
  handleExceptionBegin
  AObj.GetIcon(Index, Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetIconWithIntIcon(AObj: TCustomImageList; Index: Integer; Image: TIcon); extdecl;
begin
  {$define handleExceptionID := 8239}
  handleExceptionBegin
  AObj.GetIcon(Index, Image);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_GetRawImage(AObj: TCustomImageList; Index: Integer; var Image: TRawImageWrap); extdecl;
var
  OutImage: TRawImage;
begin
  {$define handleExceptionID := 8240}
  handleExceptionBegin
  AObj.GetRawImage(Index, OutImage);
  Image := TRawImageWrap.Create(OutImage);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Insert(AObj: TCustomImageList; AIndex: Integer; AImage: TCustomBitmap; AMask: TCustomBitmap); extdecl;
begin
  {$define handleExceptionID := 8241}
  handleExceptionBegin
  AObj.Insert(AIndex, AImage, AMask);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_InsertIcon(AObj: TCustomImageList; AIndex: Integer; AIcon: TCustomIcon); extdecl;
begin
  {$define handleExceptionID := 8242}
  handleExceptionBegin
  AObj.InsertIcon(AIndex, AIcon);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_InsertMasked(AObj: TCustomImageList; Index: Integer; AImage: TCustomBitmap; MaskColor: TColor); extdecl;
begin
  {$define handleExceptionID := 8243}
  handleExceptionBegin
  AObj.InsertMasked(Index, AImage, MaskColor);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Move(AObj: TCustomImageList; ACurIndex: Integer; ANewIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 8244}
  handleExceptionBegin
  AObj.Move(ACurIndex, ANewIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Overlay(AObj: TCustomImageList; AIndex: Integer; Overlay: TOverlay); extdecl;
begin
  {$define handleExceptionID := 8245}
  handleExceptionBegin
  AObj.Overlay(AIndex, Overlay);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_Replace(AObj: TCustomImageList; AIndex: Integer; AImage: TCustomBitmap; AMask: TCustomBitmap; const AllResolutions: LongBool); extdecl;
begin
  {$define handleExceptionID := 8246}
  handleExceptionBegin
  AObj.Replace(AIndex, AImage, AMask, AllResolutions);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReplaceSlice(AObj: TCustomImageList; AIndex: Integer; Image: TCustomBitmap; var AImageRect: TRect; const AllResolutions: LongBool); extdecl;
begin
  {$define handleExceptionID := 8247}
  handleExceptionBegin
  AObj.ReplaceSlice(AIndex, Image, AImageRect, AllResolutions);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReplaceSliceCentered(AObj: TCustomImageList; AIndex: Integer; AImageWidth: Integer; Image: TCustomBitmap; const AllResolutions: LongBool); extdecl;
begin
  {$define handleExceptionID := 8248}
  handleExceptionBegin
  AObj.ReplaceSliceCentered(AIndex, AImageWidth, Image, AllResolutions);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReplaceIcon(AObj: TCustomImageList; AIndex: Integer; AIcon: TCustomIcon); extdecl;
begin
  {$define handleExceptionID := 8249}
  handleExceptionBegin
  AObj.ReplaceIcon(AIndex, AIcon);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_ReplaceMasked(AObj: TCustomImageList; Index: Integer; NewImage: TCustomBitmap; MaskColor: TColor; const AllResolutions: LongBool); extdecl;
begin
  {$define handleExceptionID := 8250}
  handleExceptionBegin
  AObj.ReplaceMasked(Index, NewImage, MaskColor, AllResolutions);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_RegisterChanges(AObj: TCustomImageList; Value: TChangeLink); extdecl;
begin
  {$define handleExceptionID := 8251}
  handleExceptionBegin
  AObj.RegisterChanges(Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_StretchDraw(AObj: TCustomImageList; Canvas: TCanvas; Index: Integer; var ARect: TRect; Enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 8252}
  handleExceptionBegin
  AObj.StretchDraw(Canvas, Index, ARect, Enabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_UnRegisterChanges(AObj: TCustomImageList; Value: TChangeLink); extdecl;
begin
  {$define handleExceptionID := 8253}
  handleExceptionBegin
  AObj.UnRegisterChanges(Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageList_DeleteResolution(AObj: TCustomImageList; const AWidth: Integer); extdecl;
begin
  {$define handleExceptionID := 8254}
  handleExceptionBegin
  AObj.DeleteResolution(AWidth);
  handleExceptionEnd
end;

// property
function TCustomImageList_HasOverlays(AObj: TCustomImageList): LongBool; extdecl;
begin
  {$define handleExceptionID := 8255}
  handleExceptionBegin
  Result := AObj.HasOverlays;
  handleExceptionEnd
end;

// property
function TCustomImageList_AllocBy(ASet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8256}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllocBy := AValue
  end else
    Result := AObj.AllocBy;
  handleExceptionEnd
end;

// property
function TCustomImageList_BlendColor(ASet: LongBool; AObj: TCustomImageList; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 8257}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BlendColor := AValue
  end else
    Result := AObj.BlendColor;
  handleExceptionEnd
end;

// property
function TCustomImageList_BkColor(ASet: LongBool; AObj: TCustomImageList; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 8258}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BkColor := AValue
  end else
    Result := AObj.BkColor;
  handleExceptionEnd
end;

// property
function TCustomImageList_Count(AObj: TCustomImageList): Integer; extdecl;
begin
  {$define handleExceptionID := 8259}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TCustomImageList_DrawingStyle(ASet: LongBool; AObj: TCustomImageList; AValue: TDrawingStyle): TDrawingStyle; extdecl;
begin
  {$define handleExceptionID := 8260}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawingStyle := AValue
  end else
    Result := AObj.DrawingStyle;
  handleExceptionEnd
end;

// property
function TCustomImageList_Handle(AObj: TCustomImageList): TLCLHandle; extdecl;
begin
  {$define handleExceptionID := 8261}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TCustomImageList_Height(ASet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8262}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCustomImageList_HeightForPPI(AObj: TCustomImageList; AImageWidth: Integer; APPI: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8263}
  handleExceptionBegin
  Result := AObj.HeightForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

// property
function TCustomImageList_HeightForWidth(AObj: TCustomImageList; AWidth: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8264}
  handleExceptionBegin
  Result := AObj.HeightForWidth[AWidth];
  handleExceptionEnd
end;

// property
function TCustomImageList_Width(ASet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8265}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TCustomImageList_WidthForPPI(AObj: TCustomImageList; AImageWidth: Integer; APPI: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8266}
  handleExceptionBegin
  Result := AObj.WidthForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

// property
procedure TCustomImageList_SizeForPPI(AObj: TCustomImageList; AImageWidth: Integer; APPI: Integer; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 8267}
  handleExceptionBegin
  Result := AObj.SizeForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

// property
function TCustomImageList_Masked(ASet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8268}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Masked := AValue
  end else
    Result := AObj.Masked;
  handleExceptionEnd
end;

// property
function TCustomImageList_ResolutionWithIntToCustomImageListResolution(AObj: TCustomImageList; AImageWidth: Integer): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionID := 8269}
  handleExceptionBegin
  Result := AObj.Resolution[AImageWidth];
  handleExceptionEnd
end;

// property
function TCustomImageList_ResolutionByIndex(AObj: TCustomImageList; AIndex: Integer): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionID := 8270}
  handleExceptionBegin
  Result := AObj.ResolutionByIndex[AIndex];
  handleExceptionEnd
end;

// property
function TCustomImageList_ResolutionForPPI(AObj: TCustomImageList; AImageWidth: Integer; APPI: Integer; var ACanvasScaleFactor: Double): TScaledImageListResolutionWrap; extdecl;
begin
  {$define handleExceptionID := 8271}
  handleExceptionBegin
  Result := TScaledImageListResolutionWrap.Create(AObj.ResolutionForPPI[AImageWidth, APPI, ACanvasScaleFactor]);
  handleExceptionEnd
end;

// property
function TCustomImageList_ResolutionCount(AObj: TCustomImageList): Integer; extdecl;
begin
  {$define handleExceptionID := 8272}
  handleExceptionBegin
  Result := AObj.ResolutionCount;
  handleExceptionEnd
end;

// property
function TCustomImageList_Scaled(ASet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8273}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scaled := AValue
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

// property
function TCustomImageList_ShareImages(ASet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8274}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShareImages := AValue
  end else
    Result := AObj.ShareImages;
  handleExceptionEnd
end;

// property
function TCustomImageList_ImageType(ASet: LongBool; AObj: TCustomImageList; AValue: TImageType): TImageType; extdecl;
begin
  {$define handleExceptionID := 8275}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageType := AValue
  end else
    Result := AObj.ImageType;
  handleExceptionEnd
end;

// event
procedure TCustomImageList_OnChange(AObj: TCustomImageList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCustomImageList_OnGetWidthForPPI(AObj: TCustomImageList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomImageListGetWidthForPPI}
  {$DEFINE EventName := OnGetWidthForPPI}
  LCLEventMethodCode
end;

function TCustomImageList_TClass(): TClass; extdecl;
begin
  Result := TCustomImageList;
end;

exports
  TCustomImageList_Create,
  TCustomImageList_CreateSize,
  TCustomImageList_Add,
  TCustomImageList_AddSliced,
  TCustomImageList_AddSlice,
  TCustomImageList_AddSliceCentered,
  TCustomImageList_AddIcon,
  TCustomImageList_AddMasked,
  TCustomImageList_AddLazarusResource,
  TCustomImageList_AddResourceName,
  TCustomImageList_GetHotSpot,
  TCustomImageList_FindResolution,
  TCustomImageList_Resolutions,
  TCustomImageList_ResolutionsDesc,
  TCustomImageList_ScaleImageWithCBitmapX2IntX2RGBAQArray,
  TCustomImageList_ScaleImageWithCBitmapX2RectIntX2RGBAQArray,
  TCustomImageList_ScaleImageWithHBITMAPX2RectIntX2RGBAQArray,
  TCustomImageList_AssignTo,
  TCustomImageList_WriteData,
  TCustomImageList_ReadData,
  TCustomImageList_WriteAdvData,
  TCustomImageList_ReadAdvData,
  TCustomImageList_BeginUpdate,
  TCustomImageList_EndUpdate,
  TCustomImageList_AddImages,
  TCustomImageList_Change,
  TCustomImageList_Clear,
  TCustomImageList_Delete,
  TCustomImageList_DrawWithCanvasIntX3Bool,
  TCustomImageList_DrawWithCanvasIntX3GDEffect,
  TCustomImageList_DrawWithCanvasIntX3DStyleITypeBool,
  TCustomImageList_DrawWithCanvasIntX3DStyleITypeGDEffect,
  TCustomImageList_DrawForPPIWithCanvasIntX5DoubleBool,
  TCustomImageList_DrawForPPIWithCanvasIntX5DoubleGDEffect,
  TCustomImageList_DrawOverlayWithCanvasIntX3OverlayBool,
  TCustomImageList_DrawOverlayWithCanvasIntX3OverlayGDEffect,
  TCustomImageList_DrawOverlayWithCanvasIntX3OverlayDStyleITypeGDEffect,
  TCustomImageList_GetBitmapWithIntCustomBitmap,
  TCustomImageList_GetBitmapWithIntCBitmapGDEffect,
  TCustomImageList_GetFullBitmap,
  TCustomImageList_GetFullRawImage,
  TCustomImageList_GetIconWithIntIconGDEffect,
  TCustomImageList_GetIconWithIntIcon,
  TCustomImageList_GetRawImage,
  TCustomImageList_Insert,
  TCustomImageList_InsertIcon,
  TCustomImageList_InsertMasked,
  TCustomImageList_Move,
  TCustomImageList_Overlay,
  TCustomImageList_Replace,
  TCustomImageList_ReplaceSlice,
  TCustomImageList_ReplaceSliceCentered,
  TCustomImageList_ReplaceIcon,
  TCustomImageList_ReplaceMasked,
  TCustomImageList_RegisterChanges,
  TCustomImageList_StretchDraw,
  TCustomImageList_UnRegisterChanges,
  TCustomImageList_DeleteResolution,
  TCustomImageList_HasOverlays,
  TCustomImageList_AllocBy,
  TCustomImageList_BlendColor,
  TCustomImageList_BkColor,
  TCustomImageList_Count,
  TCustomImageList_DrawingStyle,
  TCustomImageList_Handle,
  TCustomImageList_Height,
  TCustomImageList_HeightForPPI,
  TCustomImageList_HeightForWidth,
  TCustomImageList_Width,
  TCustomImageList_WidthForPPI,
  TCustomImageList_SizeForPPI,
  TCustomImageList_Masked,
  TCustomImageList_ResolutionWithIntToCustomImageListResolution,
  TCustomImageList_ResolutionByIndex,
  TCustomImageList_ResolutionForPPI,
  TCustomImageList_ResolutionCount,
  TCustomImageList_Scaled,
  TCustomImageList_ShareImages,
  TCustomImageList_ImageType,
  TCustomImageList_OnChange,
  TCustomImageList_OnGetWidthForPPI,
  TCustomImageList_TClass;