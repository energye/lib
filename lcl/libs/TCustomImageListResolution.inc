// constructor
function TCustomImageListResolution_Create(AOwner: TComponent): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionID := 24800}
  handleExceptionBegin
  Result := TCustomImageListResolution.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TCustomImageListResolution_GetHotSpot(AObj: TCustomImageListResolution; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 24801}
  handleExceptionBegin
  Result := AObj.GetHotSpot();
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_FillDescription(AObj: TCustomImageListResolution; var ADesc: TRawImageDescriptionWrap); extdecl;
var
  OutADesc: TRawImageDescription;
begin
  {$define handleExceptionID := 24802}
  handleExceptionBegin
  AObj.FillDescription(OutADesc);
  ADesc := TRawImageDescriptionWrap.Create(OutADesc);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetBitmapWithIntCustomBitmap(AObj: TCustomImageListResolution; Index: Integer; Image: TCustomBitmap); extdecl;
begin
  {$define handleExceptionID := 24803}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetBitmapWithIntCBitmapGDEffect(AObj: TCustomImageListResolution; Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24804}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetIconWithIntIconGDEffect(AObj: TCustomImageListResolution; Index: Integer; Image: TIcon; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24805}
  handleExceptionBegin
  AObj.GetIcon(Index, Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetIconWithIntIcon(AObj: TCustomImageListResolution; Index: Integer; Image: TIcon); extdecl;
begin
  {$define handleExceptionID := 24806}
  handleExceptionBegin
  AObj.GetIcon(Index, Image);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetFullBitmap(AObj: TCustomImageListResolution; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24807}
  handleExceptionBegin
  AObj.GetFullBitmap(Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_GetRawImage(AObj: TCustomImageListResolution; Index: Integer; var Image: TRawImageWrap); extdecl;
var
  OutImage: TRawImage;
begin
  {$define handleExceptionID := 24808}
  handleExceptionBegin
  AObj.GetRawImage(Index, OutImage);
  Image := TRawImageWrap.Create(OutImage);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawWithCanvasIntX3Bool(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 24809}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawWithCanvasIntX3GDEffect(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24810}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawWithCanvasIntX3DStyleITypeBool(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 24811}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawWithCanvasIntX3DStyleITypeGDEffect(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24812}
  handleExceptionBegin
  AObj.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_StretchDraw(AObj: TCustomImageListResolution; Canvas: TCanvas; Index: Integer; var ARect: TRect; Enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 24813}
  handleExceptionBegin
  AObj.StretchDraw(Canvas, Index, ARect, Enabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayBool(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 24814}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayGDEffect(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24815}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayDStyleITypeGDEffect(AObj: TCustomImageListResolution; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 24816}
  handleExceptionBegin
  AObj.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

// property
function TCustomImageListResolution_ImageList(AObj: TCustomImageListResolution): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 24817}
  handleExceptionBegin
  Result := AObj.ImageList;
  handleExceptionEnd
end;

// property
function TCustomImageListResolution_Width(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionID := 24818}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TCustomImageListResolution_Height(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionID := 24819}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCustomImageListResolution_Count(AObj: TCustomImageListResolution): Integer; extdecl;
begin
  {$define handleExceptionID := 24820}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TCustomImageListResolution_AutoCreatedInDesignTime(ASet: LongBool; AObj: TCustomImageListResolution; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCreatedInDesignTime := AValue
  end else
    Result := AObj.AutoCreatedInDesignTime;
  handleExceptionEnd
end;

function TCustomImageListResolution_TClass(): TClass; extdecl;
begin
  Result := TCustomImageListResolution;
end;

exports
  TCustomImageListResolution_Create,
  TCustomImageListResolution_GetHotSpot,
  TCustomImageListResolution_FillDescription,
  TCustomImageListResolution_GetBitmapWithIntCustomBitmap,
  TCustomImageListResolution_GetBitmapWithIntCBitmapGDEffect,
  TCustomImageListResolution_GetIconWithIntIconGDEffect,
  TCustomImageListResolution_GetIconWithIntIcon,
  TCustomImageListResolution_GetFullBitmap,
  TCustomImageListResolution_GetRawImage,
  TCustomImageListResolution_DrawWithCanvasIntX3Bool,
  TCustomImageListResolution_DrawWithCanvasIntX3GDEffect,
  TCustomImageListResolution_DrawWithCanvasIntX3DStyleITypeBool,
  TCustomImageListResolution_DrawWithCanvasIntX3DStyleITypeGDEffect,
  TCustomImageListResolution_StretchDraw,
  TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayBool,
  TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayGDEffect,
  TCustomImageListResolution_DrawOverlayWithCanvasIntX3OverlayDStyleITypeGDEffect,
  TCustomImageListResolution_ImageList,
  TCustomImageListResolution_Width,
  TCustomImageListResolution_Height,
  TCustomImageListResolution_Count,
  TCustomImageListResolution_AutoCreatedInDesignTime,
  TCustomImageListResolution_TClass;