
//constructor
function CustomImageListResolution_Create(TheOwner: TComponent): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomImageListResolution.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomImageListResolution_ImageList(AObj: TCustomImageListResolution): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='ImageList'}
  handleExceptionBegin
  Result := AObj.ImageList;
  handleExceptionEnd
end;

//property
function CustomImageListResolution_Width(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
function CustomImageListResolution_Height(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function CustomImageListResolution_Count(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function CustomImageListResolution_AutoCreatedInDesignTime(AIsSet: LongBool; AObj: TCustomImageListResolution; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoCreatedInDesignTime'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoCreatedInDesignTime := AValue;
  end else
    Result := AObj.AutoCreatedInDesignTime;
  handleExceptionEnd
end;

//function
procedure CustomImageListResolution_GetHotSpot(AObj: TCustomImageListResolution; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='GetHotSpot'}
  handleExceptionBegin
  Result := AObj.GetHotSpot();
  handleExceptionEnd
end;

//function
function CustomImageListResolution_Class(): TClass; extdecl;
begin
  Result := TCustomImageListResolution;
end;

//procedure
procedure CustomImageListResolution_GetBitmap(AObj: TCustomImageListResolution; Index: Integer; Image: TCustomBitmap); extdecl;
begin
  {$define handleExceptionFuncName :='GetBitmap'}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_GetBitmap1(AObj: TCustomImageListResolution; Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBitmap1'}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_GetIcon(AObj: TCustomImageListResolution; Index: Integer; Image: TIcon; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='GetIcon'}
  handleExceptionBegin
  AObj.GetIcon(Index, Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_GetIcon1(AObj: TCustomImageListResolution; Index: Integer; Image: TIcon); extdecl;
begin
  {$define handleExceptionFuncName :='GetIcon1'}
  handleExceptionBegin
  AObj.GetIcon(Index, Image);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_GetFullBitmap(AObj: TCustomImageListResolution; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='GetFullBitmap'}
  handleExceptionBegin
  AObj.GetFullBitmap(Image, AEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_GetRawImage(AObj: TCustomImageListResolution; Index: Integer; out OutImage: TRawImage); extdecl;
var
  RetOutImage: TRawImage;
begin
  {$define handleExceptionFuncName :='GetRawImage'}
  handleExceptionBegin
  RetOutImage := OutImage;
  AObj.GetRawImage(Index, RetOutImage);
  OutImage := RetOutImage;
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_Draw(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Draw'}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_Draw1(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='Draw1'}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_Draw2(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Draw2'}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_Draw3(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='Draw3'}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_StretchDraw(AObj: TCustomImageListResolution; Canvas: TCanvas; Index: Integer; var ARect: TRect; Enabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='StretchDraw'}
  handleExceptionBegin
  AObj.StretchDraw(Canvas, Index, ARect, Enabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_DrawOverlay(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='DrawOverlay'}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_DrawOverlay1(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='DrawOverlay1'}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
  handleExceptionEnd
end;

//procedure
procedure CustomImageListResolution_DrawOverlay2(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionFuncName :='DrawOverlay2'}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;


exports
  CustomImageListResolution_Create,
  CustomImageListResolution_ImageList,
  CustomImageListResolution_Width,
  CustomImageListResolution_Height,
  CustomImageListResolution_Count,
  CustomImageListResolution_AutoCreatedInDesignTime,
  CustomImageListResolution_GetHotSpot,
  CustomImageListResolution_Class,
  CustomImageListResolution_GetBitmap,
  CustomImageListResolution_GetBitmap1,
  CustomImageListResolution_GetIcon,
  CustomImageListResolution_GetIcon1,
  CustomImageListResolution_GetFullBitmap,
  CustomImageListResolution_GetRawImage,
  CustomImageListResolution_Draw,
  CustomImageListResolution_Draw1,
  CustomImageListResolution_Draw2,
  CustomImageListResolution_Draw3,
  CustomImageListResolution_StretchDraw,
  CustomImageListResolution_DrawOverlay,
  CustomImageListResolution_DrawOverlay1,
  CustomImageListResolution_DrawOverlay2;