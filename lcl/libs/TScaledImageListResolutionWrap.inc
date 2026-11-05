// constructor
function TScaledImageListResolutionWrap_CreateWithCustomImageListResolutionDouble(AResolution: TCustomImageListResolution; var AScaleFactor: Double): TScaledImageListResolutionWrap; extdecl;
begin
  {$define handleExceptionID := 31400}
  handleExceptionBegin
  Result := TScaledImageListResolutionWrap.Create(AResolution, AScaleFactor);
  handleExceptionEnd
end;

// function
function TScaledImageListResolutionWrap_Width(AObj: TScaledImageListResolutionWrap): Integer; extdecl;
begin
  {$define handleExceptionID := 31401}
  handleExceptionBegin
  Result := AObj.Width();
  handleExceptionEnd
end;

// function
function TScaledImageListResolutionWrap_Height(AObj: TScaledImageListResolutionWrap): Integer; extdecl;
begin
  {$define handleExceptionID := 31402}
  handleExceptionBegin
  Result := AObj.Height();
  handleExceptionEnd
end;

// function
procedure TScaledImageListResolutionWrap_Size(AObj: TScaledImageListResolutionWrap; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 31403}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TScaledImageListResolutionWrap_Resolution(AObj: TScaledImageListResolutionWrap): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionID := 31404}
  handleExceptionBegin
  Result := AObj.Resolution();
  handleExceptionEnd
end;

// function
function TScaledImageListResolutionWrap_Count(AObj: TScaledImageListResolutionWrap): Integer; extdecl;
begin
  {$define handleExceptionID := 31405}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// function
function TScaledImageListResolutionWrap_Valid(AObj: TScaledImageListResolutionWrap): LongBool; extdecl;
begin
  {$define handleExceptionID := 31406}
  handleExceptionBegin
  Result := AObj.Valid();
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_GetBitmapWithIntCustomBitmap(AObj: TScaledImageListResolutionWrap; Index: Integer; Image: TCustomBitmap); extdecl;
begin
  {$define handleExceptionID := 31407}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_GetBitmapWithIntCBitmapGDEffect(AObj: TScaledImageListResolutionWrap; Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 31408}
  handleExceptionBegin
  AObj.GetBitmap(Index, Image, AEffect);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawXY(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 31409}
  handleExceptionBegin
  AObj.DrawXY(ACanvas, AX, AY, AIndex, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawXYEffect(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 31410}
  handleExceptionBegin
  AObj.DrawXYEffect(ACanvas, AX, AY, AIndex, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawXYStyleType(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 31411}
  handleExceptionBegin
  AObj.DrawXYStyleType(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawXYStyleTypeEffect(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 31412}
  handleExceptionBegin
  AObj.DrawXYStyleTypeEffect(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_StretchDraw(AObj: TScaledImageListResolutionWrap; Canvas: TCanvas; Index: Integer; var ARect: TRect; Enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 31413}
  handleExceptionBegin
  AObj.StretchDraw(Canvas, Index, ARect, Enabled);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawOverlayXYOverlay(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 31414}
  handleExceptionBegin
  AObj.DrawOverlayXYOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawOverlayXYOverlayEffect(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 31415}
  handleExceptionBegin
  AObj.DrawOverlayXYOverlayEffect(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
  handleExceptionEnd
end;

// procedure
procedure TScaledImageListResolutionWrap_DrawOverlayXYOverlayTypeEffect(AObj: TScaledImageListResolutionWrap; ACanvas: TCanvas; AX: Integer; AY: Integer; AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect); extdecl;
begin
  {$define handleExceptionID := 31416}
  handleExceptionBegin
  AObj.DrawOverlayXYOverlayTypeEffect(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
  handleExceptionEnd
end;

exports
  TScaledImageListResolutionWrap_CreateWithCustomImageListResolutionDouble,
  TScaledImageListResolutionWrap_Width,
  TScaledImageListResolutionWrap_Height,
  TScaledImageListResolutionWrap_Size,
  TScaledImageListResolutionWrap_Resolution,
  TScaledImageListResolutionWrap_Count,
  TScaledImageListResolutionWrap_Valid,
  TScaledImageListResolutionWrap_GetBitmapWithIntCustomBitmap,
  TScaledImageListResolutionWrap_GetBitmapWithIntCBitmapGDEffect,
  TScaledImageListResolutionWrap_DrawXY,
  TScaledImageListResolutionWrap_DrawXYEffect,
  TScaledImageListResolutionWrap_DrawXYStyleType,
  TScaledImageListResolutionWrap_DrawXYStyleTypeEffect,
  TScaledImageListResolutionWrap_StretchDraw,
  TScaledImageListResolutionWrap_DrawOverlayXYOverlay,
  TScaledImageListResolutionWrap_DrawOverlayXYOverlayEffect,
  TScaledImageListResolutionWrap_DrawOverlayXYOverlayTypeEffect;