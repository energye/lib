
//constructor
function CustomImageList_Create(AOwner: TComponent): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  Result := TCustomImageList.Create(AOwner);
  handleExceptionEnd
end;

//constructor
function CustomImageList_CreateSize(AWidth, AHeight: Integer): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  Result := TCustomImageList.CreateSize(AWidth, AHeight);
  handleExceptionEnd
end;

//property
function CustomImageList_HasOverlays(AObj: TCustomImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasOverlays;
  handleExceptionEnd
end;

//property
function CustomImageList_AllocBy(AIsSet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllocBy := AValue;
  end else
    Result := AObj.AllocBy;
  handleExceptionEnd
end;

//property
function CustomImageList_BlendColor(AIsSet: LongBool; AObj: TCustomImageList; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BlendColor := AValue;
  end else
    Result := AObj.BlendColor;
  handleExceptionEnd
end;

//property
function CustomImageList_BkColor(AIsSet: LongBool; AObj: TCustomImageList; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BkColor := AValue;
  end else
    Result := AObj.BkColor;
  handleExceptionEnd
end;

//property
function CustomImageList_Count(AObj: TCustomImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function CustomImageList_DrawingStyle(AIsSet: LongBool; AObj: TCustomImageList; AValue: TDrawingStyle): TDrawingStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DrawingStyle := AValue;
  end else
    Result := AObj.DrawingStyle;
  handleExceptionEnd
end;

//property
function CustomImageList_Height(AIsSet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
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
function CustomImageList_HeightForPPI(AObj: TCustomImageList; AImageWidth, APPI: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HeightForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

//property
function CustomImageList_HeightForWidth(AObj: TCustomImageList; AWidth: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HeightForWidth[AWidth];
  handleExceptionEnd
end;

//property
function CustomImageList_Width(AIsSet: LongBool; AObj: TCustomImageList; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function CustomImageList_WidthForPPI(AObj: TCustomImageList; AImageWidth, APPI: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WidthForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

//property
procedure CustomImageList_SizeForPPI(AObj: TCustomImageList; AImageWidth, APPI: Integer; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.SizeForPPI[AImageWidth, APPI];
  handleExceptionEnd
end;

//property
function CustomImageList_Masked(AIsSet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Masked := AValue;
  end else
    Result := AObj.Masked;
  handleExceptionEnd
end;

//property
function CustomImageList_Resolution(AObj: TCustomImageList; AImageWidth: Integer): TCustomImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Resolution[AImageWidth];
  handleExceptionEnd
end;

//property
function CustomImageList_ResolutionByIndex(AObj: TCustomImageList; AIndex: Integer): TCustomImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResolutionByIndex[AIndex];
  handleExceptionEnd
end;

//property
function CustomImageList_ResolutionForPPI(AObj: TCustomImageList; AImageWidth, APPI: Integer; var ACanvasScaleFactor: Double): TScaledImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResolutionForPPI[AImageWidth, APPI, ACanvasScaleFactor];
  handleExceptionEnd
end;

//property
function CustomImageList_ResolutionCount(AObj: TCustomImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResolutionCount;
  handleExceptionEnd
end;

//property
function CustomImageList_Scaled(AIsSet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Scaled := AValue;
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

//property
function CustomImageList_ShareImages(AIsSet: LongBool; AObj: TCustomImageList; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShareImages := AValue;
  end else
    Result := AObj.ShareImages;
  handleExceptionEnd
end;

//property
function CustomImageList_ImageType(AIsSet: LongBool; AObj: TCustomImageList; AValue: TImageType): TImageType; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageType := AValue;
  end else
    Result := AObj.ImageType;
  handleExceptionEnd
end;

//function
function CustomImageList_Add(AObj: TCustomImageList; Image, Mask: TCustomBitmap): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(Image, Mask);
  handleExceptionEnd
end;

//function
function CustomImageList_AddSliced(AObj: TCustomImageList; Image: TCustomBitmap; AHorizontalCount, AVerticalCount: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddSliced(Image, AHorizontalCount, AVerticalCount);
  handleExceptionEnd
end;

//function
function CustomImageList_AddSlice(AObj: TCustomImageList; Image: TCustomBitmap; var AImageRect: TRect): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddSlice(Image, AImageRect);
  handleExceptionEnd
end;

//function
function CustomImageList_AddSliceCentered(AObj: TCustomImageList; Image: TCustomBitmap): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddSliceCentered(Image);
  handleExceptionEnd
end;

//function
function CustomImageList_AddIcon(AObj: TCustomImageList; Image: TCustomIcon): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddIcon(Image);
  handleExceptionEnd
end;

//function
function CustomImageList_AddMasked(AObj: TCustomImageList; Image: TBitmap; MaskColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddMasked(Image, MaskColor);
  handleExceptionEnd
end;

//function
function CustomImageList_AddLazarusResource(AObj: TCustomImageList; const ResourceName: PChar; MaskColor: TColor): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddLazarusResource(ResourceName, MaskColor);
  handleExceptionEnd
end;

//function
function CustomImageList_AddResourceName(AObj: TCustomImageList; Instance: THandle; const ResourceName: PChar; MaskColor: TColor): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddResourceName(Instance, ResourceName, MaskColor);
  handleExceptionEnd
end;

//function
procedure CustomImageList_GetHotSpot(AObj: TCustomImageList; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHotSpot();
  handleExceptionEnd
end;

//function
function CustomImageList_FindResolution(AObj: TCustomImageList; AImageWidth: Integer; out OutResolution: TCustomImageListResolution): LongBool; extdecl;
var
  RetOutResolution: TCustomImageListResolution;
begin
  handleExceptionBegin
  RetOutResolution := OutResolution;
  Result := AObj.FindResolution(AImageWidth, RetOutResolution);
  OutResolution := RetOutResolution;
  handleExceptionEnd
end;

//function
function CustomImageList_Resolutions(AObj: TCustomImageList): TCustomImageListResolutionEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Resolutions();
  handleExceptionEnd
end;

//function
function CustomImageList_ResolutionsDesc(AObj: TCustomImageList): TCustomImageListResolutionEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResolutionsDesc();
  handleExceptionEnd
end;

//function
function CustomImageList_Class(): TClass; extdecl;
begin
  Result := TCustomImageList;
end;

//procedure
procedure CustomImageList_AssignTo(AObj: TCustomImageList; Dest: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_WriteData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.WriteData(AStream);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReadData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.ReadData(AStream);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_WriteAdvData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.WriteAdvData(AStream);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReadAdvData(AObj: TCustomImageList; AStream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.ReadAdvData(AStream);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_BeginUpdate(AObj: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_EndUpdate(AObj: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_AddImages(AObj: TCustomImageList; AValue: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.AddImages(AValue);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Change(AObj: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Change();
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Clear(AObj: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Delete(AObj: TCustomImageList; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Draw(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AEnabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Draw1(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Draw2(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Draw3(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DrawForPPI(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AImageWidthAt96PPI, ATargetPPI: Integer; var ACanvasFactor: Double; AEnabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DrawForPPI(ACanvas, AX, AY, AIndex, AImageWidthAt96PPI, ATargetPPI, ACanvasFactor, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DrawForPPI1(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AImageWidthAt96PPI, ATargetPPI: Integer; var ACanvasFactor: Double; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawForPPI(ACanvas, AX, AY, AIndex, AImageWidthAt96PPI, ATargetPPI, ACanvasFactor, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DrawOverlay(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; AEnabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DrawOverlay1(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DrawOverlay2(AObj: TCustomImageList; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetBitmap(AObj: TCustomImageList; Index: Integer; Image: TCustomBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.GetBitmap(Index, Image);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetBitmap1(AObj: TCustomImageList; Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.GetBitmap(Index, Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetFullBitmap(AObj: TCustomImageList; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.GetFullBitmap(Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetFullRawImage(AObj: TCustomImageList; out OutImage: TRawImage); extdecl;
var
  RetOutImage: TRawImage;
begin
  handleExceptionBegin
  RetOutImage := OutImage;
  AObj.GetFullRawImage(RetOutImage);
  OutImage := RetOutImage;
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetIcon(AObj: TCustomImageList; Index: Integer; Image: TIcon; AEffect: TGraphicsDrawEffect); extdecl;
begin
  handleExceptionBegin
  AObj.GetIcon(Index, Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetIcon1(AObj: TCustomImageList; Index: Integer; Image: TIcon); extdecl;
begin
  handleExceptionBegin
  AObj.GetIcon(Index, Image);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_GetRawImage(AObj: TCustomImageList; Index: Integer; out OutImage: TRawImage); extdecl;
var
  RetOutImage: TRawImage;
begin
  handleExceptionBegin
  RetOutImage := OutImage;
  AObj.GetRawImage(Index, RetOutImage);
  OutImage := RetOutImage;
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Insert(AObj: TCustomImageList; AIndex: Integer; AImage, AMask: TCustomBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(AIndex, AImage, AMask);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_InsertIcon(AObj: TCustomImageList; AIndex: Integer; AIcon: TCustomIcon); extdecl;
begin
  handleExceptionBegin
  AObj.InsertIcon(AIndex, AIcon);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_InsertMasked(AObj: TCustomImageList; Index: Integer; AImage: TCustomBitmap; MaskColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.InsertMasked(Index, AImage, MaskColor);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Move(AObj: TCustomImageList; ACurIndex, ANewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(ACurIndex, ANewIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Overlay(AObj: TCustomImageList; AIndex: Integer; Overlay: TOverlay); extdecl;
begin
  handleExceptionBegin
  AObj.Overlay(AIndex, Overlay);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_Replace(AObj: TCustomImageList; AIndex: Integer; AImage, AMask: TCustomBitmap; const AllResolutions: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Replace(AIndex, AImage, AMask, AllResolutions);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReplaceSlice(AObj: TCustomImageList; AIndex: Integer; Image: TCustomBitmap; var AImageRect: TRect; const AllResolutions: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceSlice(AIndex, Image, AImageRect, AllResolutions);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReplaceSliceCentered(AObj: TCustomImageList; AIndex, AImageWidth: Integer; Image: TCustomBitmap; const AllResolutions: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceSliceCentered(AIndex, AImageWidth, Image, AllResolutions);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReplaceIcon(AObj: TCustomImageList; AIndex: Integer; AIcon: TCustomIcon); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceIcon(AIndex, AIcon);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_ReplaceMasked(AObj: TCustomImageList; Index: Integer; NewImage: TCustomBitmap; MaskColor: TColor; const AllResolutions: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceMasked(Index, NewImage, MaskColor, AllResolutions);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_RegisterChanges(AObj: TCustomImageList; Value: TChangeLink); extdecl;
begin
  handleExceptionBegin
  AObj.RegisterChanges(Value);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_StretchDraw(AObj: TCustomImageList; Canvas: TCanvas; Index: Integer; var ARect: TRect; Enabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.StretchDraw(Canvas, Index, ARect, Enabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_UnRegisterChanges(AObj: TCustomImageList; Value: TChangeLink); extdecl;
begin
  handleExceptionBegin
  AObj.UnRegisterChanges(Value);
  handleExceptionEnd
end;

//procedure
procedure CustomImageList_DeleteResolution(AObj: TCustomImageList; const AWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteResolution(AWidth);
  handleExceptionEnd
end;

//property event
procedure CustomImageList_SetOnChange(AObj: TCustomImageList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure CustomImageList_SetOnGetWidthForPPI(AObj: TCustomImageList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomImageListGetWidthForPPI}
  {$DEFINE EventName := OnGetWidthForPPI}
  EventMethodCode
end;


exports
  CustomImageList_Create,
  CustomImageList_CreateSize,
  CustomImageList_HasOverlays,
  CustomImageList_AllocBy,
  CustomImageList_BlendColor,
  CustomImageList_BkColor,
  CustomImageList_Count,
  CustomImageList_DrawingStyle,
  CustomImageList_Height,
  CustomImageList_HeightForPPI,
  CustomImageList_HeightForWidth,
  CustomImageList_Width,
  CustomImageList_WidthForPPI,
  CustomImageList_SizeForPPI,
  CustomImageList_Masked,
  CustomImageList_Resolution,
  CustomImageList_ResolutionByIndex,
  CustomImageList_ResolutionForPPI,
  CustomImageList_ResolutionCount,
  CustomImageList_Scaled,
  CustomImageList_ShareImages,
  CustomImageList_ImageType,
  CustomImageList_Add,
  CustomImageList_AddSliced,
  CustomImageList_AddSlice,
  CustomImageList_AddSliceCentered,
  CustomImageList_AddIcon,
  CustomImageList_AddMasked,
  CustomImageList_AddLazarusResource,
  CustomImageList_AddResourceName,
  CustomImageList_GetHotSpot,
  CustomImageList_FindResolution,
  CustomImageList_Resolutions,
  CustomImageList_ResolutionsDesc,
  CustomImageList_Class,
  CustomImageList_AssignTo,
  CustomImageList_WriteData,
  CustomImageList_ReadData,
  CustomImageList_WriteAdvData,
  CustomImageList_ReadAdvData,
  CustomImageList_BeginUpdate,
  CustomImageList_EndUpdate,
  CustomImageList_AddImages,
  CustomImageList_Change,
  CustomImageList_Clear,
  CustomImageList_Delete,
  CustomImageList_Draw,
  CustomImageList_Draw1,
  CustomImageList_Draw2,
  CustomImageList_Draw3,
  CustomImageList_DrawForPPI,
  CustomImageList_DrawForPPI1,
  CustomImageList_DrawOverlay,
  CustomImageList_DrawOverlay1,
  CustomImageList_DrawOverlay2,
  CustomImageList_GetBitmap,
  CustomImageList_GetBitmap1,
  CustomImageList_GetFullBitmap,
  CustomImageList_GetFullRawImage,
  CustomImageList_GetIcon,
  CustomImageList_GetIcon1,
  CustomImageList_GetRawImage,
  CustomImageList_Insert,
  CustomImageList_InsertIcon,
  CustomImageList_InsertMasked,
  CustomImageList_Move,
  CustomImageList_Overlay,
  CustomImageList_Replace,
  CustomImageList_ReplaceSlice,
  CustomImageList_ReplaceSliceCentered,
  CustomImageList_ReplaceIcon,
  CustomImageList_ReplaceMasked,
  CustomImageList_RegisterChanges,
  CustomImageList_StretchDraw,
  CustomImageList_UnRegisterChanges,
  CustomImageList_DeleteResolution,
  CustomImageList_SetOnChange,
  CustomImageList_SetOnGetWidthForPPI;