// constructor
function TCanvas_Create(): TCanvas; extdecl;
begin
  {$define handleExceptionID := 14800}
  handleExceptionBegin
  Result := TCanvas.Create();
  handleExceptionEnd
end;

// function
function TCanvas_TryLock(AObj: TCanvas): LongBool; extdecl;
begin
  {$define handleExceptionID := 14801}
  handleExceptionBegin
  Result := AObj.TryLock();
  handleExceptionEnd
end;

// function
function TCanvas_GetTextMetrics(AObj: TCanvas; var TM: TLCLTextMetricPtr): LongBool; extdecl;
var
  OutTM: TLCLTextMetric;
begin
  {$define handleExceptionID := 14802}
  handleExceptionBegin
  Result := AObj.GetTextMetrics(OutTM);
  TM := TLCLTextMetricToGo(OutTM);
  handleExceptionEnd
end;

// function
procedure TCanvas_TextExtentWithStr(AObj: TCanvas; const Text: PChar; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 14803}
  handleExceptionBegin
  Result := AObj.TextExtent(Text);
  handleExceptionEnd
end;

// function
function TCanvas_TextHeightWithStr(AObj: TCanvas; const Text: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 14804}
  handleExceptionBegin
  Result := AObj.TextHeight(Text);
  handleExceptionEnd
end;

// function
function TCanvas_TextWidthWithStr(AObj: TCanvas; const Text: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 14805}
  handleExceptionBegin
  Result := AObj.TextWidth(Text);
  handleExceptionEnd
end;

// function
function TCanvas_TextFitInfo(AObj: TCanvas; const Text: PChar; MaxWidth: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14806}
  handleExceptionBegin
  Result := AObj.TextFitInfo(Text, MaxWidth);
  handleExceptionEnd
end;

// function
function TCanvas_HandleAllocated(AObj: TCanvas): LongBool; extdecl;
begin
  {$define handleExceptionID := 14807}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TCanvas_GetUpdatedHandle(AObj: TCanvas; ReqState: TCanvasState): HDC; extdecl;
begin
  {$define handleExceptionID := 14808}
  handleExceptionBegin
  Result := AObj.GetUpdatedHandle(ReqState);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Lock(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14809}
  handleExceptionBegin
  AObj.Lock();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Unlock(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14810}
  handleExceptionBegin
  AObj.Unlock();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Refresh(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14811}
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Changing(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14812}
  handleExceptionBegin
  AObj.Changing();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Changed(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14813}
  handleExceptionBegin
  AObj.Changed();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_SaveHandleState(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14814}
  handleExceptionBegin
  AObj.SaveHandleState();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RestoreHandleState(AObj: TCanvas); extdecl;
begin
  {$define handleExceptionID := 14815}
  handleExceptionBegin
  AObj.RestoreHandleState();
  handleExceptionEnd
end;

// procedure
procedure TCanvas_ArcWithIntX6(AObj: TCanvas; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer; Angle16Deg: Integer; Angle16DegLength: Integer); extdecl;
begin
  {$define handleExceptionID := 14816}
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, Angle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_ArcWithIntX8(AObj: TCanvas; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer; SX: Integer; SY: Integer; EX: Integer; EY: Integer); extdecl;
begin
  {$define handleExceptionID := 14817}
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, SX, SY, EX, EY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_ArcTo(AObj: TCanvas; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer; SX: Integer; SY: Integer; EX: Integer; EY: Integer); extdecl;
begin
  {$define handleExceptionID := 14818}
  handleExceptionBegin
  AObj.ArcTo(ALeft, ATop, ARight, ABottom, SX, SY, EX, EY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_AngleArc(AObj: TCanvas; X: Integer; Y: Integer; Radius: Longword; var StartAngle: Single; var SweepAngle: Single); extdecl;
begin
  {$define handleExceptionID := 14819}
  handleExceptionBegin
  AObj.AngleArc(X, Y, Radius, StartAngle, SweepAngle);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_BrushCopy(AObj: TCanvas; var ADestRect: TRect; ABitmap: TBitmap; var ASourceRect: TRect; ATransparentColor: TColor); extdecl;
begin
  {$define handleExceptionID := 14820}
  handleExceptionBegin
  AObj.BrushCopy(ADestRect, ABitmap, ASourceRect, ATransparentColor);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_ChordWithIntX6(AObj: TCanvas; x1: Integer; y1: Integer; x2: Integer; y2: Integer; Angle16Deg: Integer; Angle16DegLength: Integer); extdecl;
begin
  {$define handleExceptionID := 14821}
  handleExceptionBegin
  AObj.Chord(x1, y1, x2, y2, Angle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_ChordWithIntX8(AObj: TCanvas; x1: Integer; y1: Integer; x2: Integer; y2: Integer; SX: Integer; SY: Integer; EX: Integer; EY: Integer); extdecl;
begin
  {$define handleExceptionID := 14822}
  handleExceptionBegin
  AObj.Chord(x1, y1, x2, y2, SX, SY, EX, EY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_CopyRectWithRectX2Canvas(AObj: TCanvas; var Dest: TRect; SrcCanvas: TCanvas; var Source: TRect); extdecl;
begin
  {$define handleExceptionID := 14823}
  handleExceptionBegin
  AObj.CopyRect(Dest, SrcCanvas, Source);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_DrawWithIntX2Graphic(AObj: TCanvas; X: Integer; Y: Integer; SrcGraphic: TGraphic); extdecl;
begin
  {$define handleExceptionID := 14824}
  handleExceptionBegin
  AObj.Draw(X, Y, SrcGraphic);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_DrawFocusRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14825}
  handleExceptionBegin
  AObj.DrawFocusRect(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_StretchDrawWithRectGraphic(AObj: TCanvas; var DestRect: TRect; SrcGraphic: TGraphic); extdecl;
begin
  {$define handleExceptionID := 14826}
  handleExceptionBegin
  AObj.StretchDraw(DestRect, SrcGraphic);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_EllipseWithRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14827}
  handleExceptionBegin
  AObj.Ellipse(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_EllipseWithIntX4(AObj: TCanvas; x1: Integer; y1: Integer; x2: Integer; y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14828}
  handleExceptionBegin
  AObj.Ellipse(x1, y1, x2, y2);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FillRectWithRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14829}
  handleExceptionBegin
  AObj.FillRect(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FillRectWithIntX4(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14830}
  handleExceptionBegin
  AObj.FillRect(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FloodFillWithIntX2ColorFStyle(AObj: TCanvas; X: Integer; Y: Integer; FillColor: TColor; FillStyle: TFillStyle); extdecl;
begin
  {$define handleExceptionID := 14831}
  handleExceptionBegin
  AObj.FloodFill(X, Y, FillColor, FillStyle);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Frame3dWithRectIntGBCut(AObj: TCanvas; var ARect: TRect; const FrameWidth: integer; const Style: TGraphicsBevelCut); extdecl;
var
  OutARect: TRect;
begin
  {$define handleExceptionID := 14832}
  handleExceptionBegin
  OutARect := ARect;
  AObj.Frame3d(OutARect, FrameWidth, Style);
  ARect := OutARect;
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Frame3DWithRectColorX2Int(AObj: TCanvas; var ARect: TRect; TopColor: TColor; BottomColor: TColor; const FrameWidth: integer); extdecl;
var
  OutARect: TRect;
begin
  {$define handleExceptionID := 14833}
  handleExceptionBegin
  OutARect := ARect;
  AObj.Frame3D(OutARect, TopColor, BottomColor, FrameWidth);
  ARect := OutARect;
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FrameWithRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14834}
  handleExceptionBegin
  AObj.Frame(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FrameWithIntX4(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14835}
  handleExceptionBegin
  AObj.Frame(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FrameRectWithRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14836}
  handleExceptionBegin
  AObj.FrameRect(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_FrameRectWithIntX4(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14837}
  handleExceptionBegin
  AObj.FrameRect(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_GradientFill(AObj: TCanvas; var ARect: TRect; AStart: TColor; AStop: TColor; ADirection: TGradientDirection); extdecl;
begin
  {$define handleExceptionID := 14838}
  handleExceptionBegin
  AObj.GradientFill(ARect, AStart, AStop, ADirection);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RadialPieWithIntX6(AObj: TCanvas; x1: Integer; y1: Integer; x2: Integer; y2: Integer; StartAngle16Deg: Integer; Angle16DegLength: Integer); extdecl;
begin
  {$define handleExceptionID := 14839}
  handleExceptionBegin
  AObj.RadialPie(x1, y1, x2, y2, StartAngle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Pie(AObj: TCanvas; EllipseX1: Integer; EllipseY1: Integer; EllipseX2: Integer; EllipseY2: Integer; StartX: Integer; StartY: Integer; EndX: Integer; EndY: Integer); extdecl;
begin
  {$define handleExceptionID := 14840}
  handleExceptionBegin
  AObj.Pie(EllipseX1, EllipseY1, EllipseX2, EllipseY2, StartX, StartY, EndX, EndY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_PolyBezierWithPointIntBoolX2(AObj: TCanvas; Points: PPoint; NumPts: Integer; Filled: LongBool; Continuous: LongBool); extdecl;
begin
  {$define handleExceptionID := 14841}
  handleExceptionBegin
  AObj.PolyBezier(Points, NumPts, Filled, Continuous);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Polygon(AObj: TCanvas; Points: PPoint; NumPts: Integer; Winding: LongBool); extdecl;
begin
  {$define handleExceptionID := 14842}
  handleExceptionBegin
  AObj.Polygon(Points, NumPts, Winding);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_Polyline(AObj: TCanvas; Points: PPoint; NumPts: Integer); extdecl;
begin
  {$define handleExceptionID := 14843}
  handleExceptionBegin
  AObj.Polyline(Points, NumPts);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RectangleWithIntX4(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14844}
  handleExceptionBegin
  AObj.Rectangle(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RectangleWithRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14845}
  handleExceptionBegin
  AObj.Rectangle(ARect);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RoundRectWithIntX6(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; RX: Integer; RY: Integer); extdecl;
begin
  {$define handleExceptionID := 14846}
  handleExceptionBegin
  AObj.RoundRect(X1, Y1, X2, Y2, RX, RY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_RoundRectWithRectIntX2(AObj: TCanvas; var Rect: TRect; RX: Integer; RY: Integer); extdecl;
begin
  {$define handleExceptionID := 14847}
  handleExceptionBegin
  AObj.RoundRect(Rect, RX, RY);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_TextOutWithIntX2Str(AObj: TCanvas; X: Integer; Y: Integer; const Text: PChar); extdecl;
begin
  {$define handleExceptionID := 14848}
  handleExceptionBegin
  AObj.TextOut(X, Y, Text);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_TextRectWithRectIntX2Str(AObj: TCanvas; var ARect: TRect; X: integer; Y: integer; const Text: PChar); extdecl;
begin
  {$define handleExceptionID := 14849}
  handleExceptionBegin
  AObj.TextRect(ARect, X, Y, Text);
  handleExceptionEnd
end;

// procedure
procedure TCanvas_TextRectWithRectIntX2StrTStyle(AObj: TCanvas; var ARect: TRect; X: integer; Y: integer; const Text: PChar; var Style: TTextStylePtr); extdecl;
var
  InStyle: TTextStyle;
begin
  {$define handleExceptionID := 14850}
  handleExceptionBegin
  InStyle := TTextStyleToPas(Style);
  AObj.TextRect(ARect, X, Y, Text, InStyle);
  handleExceptionEnd
end;

// property
function TCanvas_Pixels(ASet: LongBool; AObj: TCanvas; X: Integer; Y: Integer; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 14851}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pixels[X, Y] := AValue
  end else
    Result := AObj.Pixels[X, Y];
  handleExceptionEnd
end;

// property
function TCanvas_Handle(ASet: LongBool; AObj: TCanvas; AValue: HDC): HDC; extdecl;
begin
  {$define handleExceptionID := 14852}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
procedure TCanvas_TextStyle(ASet: LongBool; AObj: TCanvas; var AValue: TTextStylePtr; var Result: TTextStylePtr); extdecl;
begin
  {$define handleExceptionID := 14853}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextStyle := TTextStyleToPas(AValue)
  end else
    Result := TTextStyleToGo(AObj.TextStyle);
  handleExceptionEnd
end;

// property
function TCanvas_AntialiasingMode(ASet: LongBool; AObj: TCanvas; AValue: TAntialiasingMode): TAntialiasingMode; extdecl;
begin
  {$define handleExceptionID := 14854}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AntialiasingMode := AValue
  end else
    Result := AObj.AntialiasingMode;
  handleExceptionEnd
end;

// property
function TCanvas_AutoRedraw(ASet: LongBool; AObj: TCanvas; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14855}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoRedraw := AValue
  end else
    Result := AObj.AutoRedraw;
  handleExceptionEnd
end;

// property
function TCanvas_BrushToBrush(ASet: LongBool; AObj: TCanvas; AValue: TBrush): TBrush; extdecl;
begin
  {$define handleExceptionID := 14856}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Brush := AValue
  end else
    Result := AObj.Brush;
  handleExceptionEnd
end;

// property
function TCanvas_CopyMode(ASet: LongBool; AObj: TCanvas; AValue: TCopyMode): TCopyMode; extdecl;
begin
  {$define handleExceptionID := 14857}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CopyMode := AValue
  end else
    Result := AObj.CopyMode;
  handleExceptionEnd
end;

// property
function TCanvas_FontToFont(ASet: LongBool; AObj: TCanvas; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 14858}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TCanvas_PenToPen(ASet: LongBool; AObj: TCanvas; AValue: TPen): TPen; extdecl;
begin
  {$define handleExceptionID := 14859}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pen := AValue
  end else
    Result := AObj.Pen;
  handleExceptionEnd
end;

// property
function TCanvas_Region(ASet: LongBool; AObj: TCanvas; AValue: TRegion): TRegion; extdecl;
begin
  {$define handleExceptionID := 14860}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Region := AValue
  end else
    Result := AObj.Region;
  handleExceptionEnd
end;

// event
procedure TCanvas_OnChange(AObj: TCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCanvas_OnChanging(AObj: TCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

exports
  TCanvas_Create,
  TCanvas_TryLock,
  TCanvas_GetTextMetrics,
  TCanvas_TextExtentWithStr,
  TCanvas_TextHeightWithStr,
  TCanvas_TextWidthWithStr,
  TCanvas_TextFitInfo,
  TCanvas_HandleAllocated,
  TCanvas_GetUpdatedHandle,
  TCanvas_Lock,
  TCanvas_Unlock,
  TCanvas_Refresh,
  TCanvas_Changing,
  TCanvas_Changed,
  TCanvas_SaveHandleState,
  TCanvas_RestoreHandleState,
  TCanvas_ArcWithIntX6,
  TCanvas_ArcWithIntX8,
  TCanvas_ArcTo,
  TCanvas_AngleArc,
  TCanvas_BrushCopy,
  TCanvas_ChordWithIntX6,
  TCanvas_ChordWithIntX8,
  TCanvas_CopyRectWithRectX2Canvas,
  TCanvas_DrawWithIntX2Graphic,
  TCanvas_DrawFocusRect,
  TCanvas_StretchDrawWithRectGraphic,
  TCanvas_EllipseWithRect,
  TCanvas_EllipseWithIntX4,
  TCanvas_FillRectWithRect,
  TCanvas_FillRectWithIntX4,
  TCanvas_FloodFillWithIntX2ColorFStyle,
  TCanvas_Frame3dWithRectIntGBCut,
  TCanvas_Frame3DWithRectColorX2Int,
  TCanvas_FrameWithRect,
  TCanvas_FrameWithIntX4,
  TCanvas_FrameRectWithRect,
  TCanvas_FrameRectWithIntX4,
  TCanvas_GradientFill,
  TCanvas_RadialPieWithIntX6,
  TCanvas_Pie,
  TCanvas_PolyBezierWithPointIntBoolX2,
  TCanvas_Polygon,
  TCanvas_Polyline,
  TCanvas_RectangleWithIntX4,
  TCanvas_RectangleWithRect,
  TCanvas_RoundRectWithIntX6,
  TCanvas_RoundRectWithRectIntX2,
  TCanvas_TextOutWithIntX2Str,
  TCanvas_TextRectWithRectIntX2Str,
  TCanvas_TextRectWithRectIntX2StrTStyle,
  TCanvas_Pixels,
  TCanvas_Handle,
  TCanvas_TextStyle,
  TCanvas_AntialiasingMode,
  TCanvas_AutoRedraw,
  TCanvas_BrushToBrush,
  TCanvas_CopyMode,
  TCanvas_FontToFont,
  TCanvas_PenToPen,
  TCanvas_Region,
  TCanvas_OnChange,
  TCanvas_OnChanging;