// function
function TFPCustomCanvas_Locked(AObj: TFPCustomCanvas): LongBool; extdecl;
begin
  {$define handleExceptionID := 14700}
  handleExceptionBegin
  Result := AObj.Locked();
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_CreateFont(AObj: TFPCustomCanvas): TFPCustomFont; extdecl;
begin
  {$define handleExceptionID := 14701}
  handleExceptionBegin
  Result := AObj.CreateFont();
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_CreatePen(AObj: TFPCustomCanvas): TFPCustomPen; extdecl;
begin
  {$define handleExceptionID := 14702}
  handleExceptionBegin
  Result := AObj.CreatePen();
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_CreateBrush(AObj: TFPCustomCanvas): TFPCustomBrush; extdecl;
begin
  {$define handleExceptionID := 14703}
  handleExceptionBegin
  Result := AObj.CreateBrush();
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_GetTextHeight(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  {$define handleExceptionID := 14704}
  handleExceptionBegin
  Result := AObj.GetTextHeight(text);
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_GetTextWidth(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  {$define handleExceptionID := 14705}
  handleExceptionBegin
  Result := AObj.GetTextWidth(text);
  handleExceptionEnd
end;

// function
procedure TFPCustomCanvas_TextExtentWithStr(AObj: TFPCustomCanvas; const Text: PChar; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 14706}
  handleExceptionBegin
  Result := AObj.TextExtent(Text);
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_TextHeightWithStr(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 14707}
  handleExceptionBegin
  Result := AObj.TextHeight(Text);
  handleExceptionEnd
end;

// function
function TFPCustomCanvas_TextWidthWithStr(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 14708}
  handleExceptionBegin
  Result := AObj.TextWidth(Text);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LockCanvas(AObj: TFPCustomCanvas); extdecl;
begin
  {$define handleExceptionID := 14709}
  handleExceptionBegin
  AObj.LockCanvas();
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_UnlockCanvas(AObj: TFPCustomCanvas); extdecl;
begin
  {$define handleExceptionID := 14710}
  handleExceptionBegin
  AObj.UnlockCanvas();
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_TextOutWithIntX2Str(AObj: TFPCustomCanvas; x: integer; y: integer; text: PChar); extdecl;
begin
  {$define handleExceptionID := 14711}
  handleExceptionBegin
  AObj.TextOut(x, y, text);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_GetTextSize(AObj: TFPCustomCanvas; text: PChar; var w: integer; var h: integer); extdecl;
var
  Outw: integer;
  Outh: integer;
begin
  {$define handleExceptionID := 14712}
  handleExceptionBegin
  Outw := w;
  Outh := h;
  AObj.GetTextSize(text, Outw, Outh);
  w := Outw;
  h := Outh;
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_ArcWithIntX6(AObj: TFPCustomCanvas; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer; Angle16Deg: Integer; Angle16DegLength: Integer); extdecl;
begin
  {$define handleExceptionID := 14713}
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, Angle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_ArcWithIntX8(AObj: TFPCustomCanvas; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer; SX: Integer; SY: Integer; EX: Integer; EY: Integer); extdecl;
begin
  {$define handleExceptionID := 14714}
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, SX, SY, EX, EY);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_EllipseWithRect(AObj: TFPCustomCanvas; var Bounds: TRect); extdecl;
begin
  {$define handleExceptionID := 14715}
  handleExceptionBegin
  AObj.Ellipse(Bounds);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_EllipseWithIntX4(AObj: TFPCustomCanvas; left: integer; top: integer; right: integer; bottom: integer); extdecl;
begin
  {$define handleExceptionID := 14716}
  handleExceptionBegin
  AObj.Ellipse(left, top, right, bottom);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_EllipseC(AObj: TFPCustomCanvas; x: integer; y: integer; rx: longword; ry: longword); extdecl;
begin
  {$define handleExceptionID := 14717}
  handleExceptionBegin
  AObj.EllipseC(x, y, rx, ry);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_RadialPieWithIntX6(AObj: TFPCustomCanvas; x1: Integer; y1: Integer; x2: Integer; y2: Integer; StartAngle16Deg: Integer; Angle16DegLength: Integer); extdecl;
begin
  {$define handleExceptionID := 14718}
  handleExceptionBegin
  AObj.RadialPie(x1, y1, x2, y2, StartAngle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_PolyBezierWithPointIntBoolX2(AObj: TFPCustomCanvas; Points: PPoint; NumPts: Integer; Filled: LongBool; Continuous: LongBool); extdecl;
begin
  {$define handleExceptionID := 14719}
  handleExceptionBegin
  AObj.PolyBezier(Points, NumPts, Filled, Continuous);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_RectangleWithRect(AObj: TFPCustomCanvas; var Bounds: TRect); extdecl;
begin
  {$define handleExceptionID := 14720}
  handleExceptionBegin
  AObj.Rectangle(Bounds);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_RectangleWithIntX4(AObj: TFPCustomCanvas; left: integer; top: integer; right: integer; bottom: integer); extdecl;
begin
  {$define handleExceptionID := 14721}
  handleExceptionBegin
  AObj.Rectangle(left, top, right, bottom);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_FillRectWithRect(AObj: TFPCustomCanvas; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 14722}
  handleExceptionBegin
  AObj.FillRect(ARect);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_FillRectWithIntX4(AObj: TFPCustomCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 14723}
  handleExceptionBegin
  AObj.FillRect(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_FloodFillWithIntX2(AObj: TFPCustomCanvas; x: integer; y: integer); extdecl;
begin
  {$define handleExceptionID := 14724}
  handleExceptionBegin
  AObj.FloodFill(x, y);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_Clear(AObj: TFPCustomCanvas); extdecl;
begin
  {$define handleExceptionID := 14725}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_MoveToWithIntX2(AObj: TFPCustomCanvas; x: integer; y: integer); extdecl;
begin
  {$define handleExceptionID := 14726}
  handleExceptionBegin
  AObj.MoveTo(x, y);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_MoveToWithPoint(AObj: TFPCustomCanvas; var p: TPoint); extdecl;
begin
  {$define handleExceptionID := 14727}
  handleExceptionBegin
  AObj.MoveTo(p);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LineToWithIntX2(AObj: TFPCustomCanvas; x: integer; y: integer); extdecl;
begin
  {$define handleExceptionID := 14728}
  handleExceptionBegin
  AObj.LineTo(x, y);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LineToWithPoint(AObj: TFPCustomCanvas; var p: TPoint); extdecl;
begin
  {$define handleExceptionID := 14729}
  handleExceptionBegin
  AObj.LineTo(p);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LineWithIntX4(AObj: TFPCustomCanvas; x1: integer; y1: integer; x2: integer; y2: integer); extdecl;
begin
  {$define handleExceptionID := 14730}
  handleExceptionBegin
  AObj.Line(x1, y1, x2, y2);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LineWithPointX2(AObj: TFPCustomCanvas; var p1: TPoint; var p2: TPoint); extdecl;
begin
  {$define handleExceptionID := 14731}
  handleExceptionBegin
  AObj.Line(p1, p2);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_LineWithRect(AObj: TFPCustomCanvas; var points: TRect); extdecl;
begin
  {$define handleExceptionID := 14732}
  handleExceptionBegin
  AObj.Line(points);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_CopyRectWithIntX2FPCCanvasRect(AObj: TFPCustomCanvas; x: integer; y: integer; canvas: TFPCustomCanvas; var SourceRect: TRect); extdecl;
begin
  {$define handleExceptionID := 14733}
  handleExceptionBegin
  AObj.CopyRect(x, y, canvas, SourceRect);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_DrawWithIntX2FPCImage(AObj: TFPCustomCanvas; x: integer; y: integer; image: TFPCustomImage); extdecl;
begin
  {$define handleExceptionID := 14734}
  handleExceptionBegin
  AObj.Draw(x, y, image);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_StretchDrawWithIntX4FPCImage(AObj: TFPCustomCanvas; x: integer; y: integer; w: integer; h: integer; source: TFPCustomImage); extdecl;
begin
  {$define handleExceptionID := 14735}
  handleExceptionBegin
  AObj.StretchDraw(x, y, w, h, source);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_Erase(AObj: TFPCustomCanvas); extdecl;
begin
  {$define handleExceptionID := 14736}
  handleExceptionBegin
  AObj.Erase();
  handleExceptionEnd
end;

// procedure
procedure TFPCustomCanvas_DrawPixel(AObj: TFPCustomCanvas; const x: integer; const y: integer; var newcolor: TFPColorPtr); extdecl;
var
  Innewcolor: TFPColor;
begin
  {$define handleExceptionID := 14737}
  handleExceptionBegin
  Innewcolor := TFPColorToPas(newcolor);
  AObj.DrawPixel(x, y, Innewcolor);
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_LockCount(AObj: TFPCustomCanvas): Integer; extdecl;
begin
  {$define handleExceptionID := 14738}
  handleExceptionBegin
  Result := AObj.LockCount;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_FontToFPCustomFont(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomFont): TFPCustomFont; extdecl;
begin
  {$define handleExceptionID := 14739}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_PenToFPCustomPen(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomPen): TFPCustomPen; extdecl;
begin
  {$define handleExceptionID := 14740}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pen := AValue
  end else
    Result := AObj.Pen;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_BrushToFPCustomBrush(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomBrush): TFPCustomBrush; extdecl;
begin
  {$define handleExceptionID := 14741}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Brush := AValue
  end else
    Result := AObj.Brush;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_Interpolation(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomInterpolation): TFPCustomInterpolation; extdecl;
begin
  {$define handleExceptionID := 14742}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Interpolation := AValue
  end else
    Result := AObj.Interpolation;
  handleExceptionEnd
end;

// property
procedure TFPCustomCanvas_Colors(ASet: LongBool; AObj: TFPCustomCanvas; x: integer; y: integer; var AValue: TFPColorPtr; var Result: TFPColorPtr); extdecl;
begin
  {$define handleExceptionID := 14743}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Colors[x, y] := TFPColorToPas(AValue)
  end else
    Result := TFPColorToGo(AObj.Colors[x, y]);
  handleExceptionEnd
end;

// property
procedure TFPCustomCanvas_ClipRect(ASet: LongBool; AObj: TFPCustomCanvas; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 14744}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClipRect := AValue
  end else
    Result := AObj.ClipRect;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_ClipRegion(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomRegion): TFPCustomRegion; extdecl;
begin
  {$define handleExceptionID := 14745}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClipRegion := AValue
  end else
    Result := AObj.ClipRegion;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_Clipping(ASet: LongBool; AObj: TFPCustomCanvas; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14746}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Clipping := AValue
  end else
    Result := AObj.Clipping;
  handleExceptionEnd
end;

// property
procedure TFPCustomCanvas_PenPos(ASet: LongBool; AObj: TFPCustomCanvas; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 14747}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenPos := AValue
  end else
    Result := AObj.PenPos;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_Height(ASet: LongBool; AObj: TFPCustomCanvas; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 14748}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_Width(ASet: LongBool; AObj: TFPCustomCanvas; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 14749}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_ManageResources(ASet: LongBool; AObj: TFPCustomCanvas; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14750}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ManageResources := AValue
  end else
    Result := AObj.ManageResources;
  handleExceptionEnd
end;

// property
function TFPCustomCanvas_DrawingMode(ASet: LongBool; AObj: TFPCustomCanvas; AValue: TFPDrawingMode): TFPDrawingMode; extdecl;
begin
  {$define handleExceptionID := 14751}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawingMode := AValue
  end else
    Result := AObj.DrawingMode;
  handleExceptionEnd
end;

// event
procedure TFPCustomCanvas_OnCombineColors(AObj: TFPCustomCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPCanvasCombineColors}
  {$DEFINE EventName := OnCombineColors}
  LCLEventMethodCode
end;

exports
  TFPCustomCanvas_Locked,
  TFPCustomCanvas_CreateFont,
  TFPCustomCanvas_CreatePen,
  TFPCustomCanvas_CreateBrush,
  TFPCustomCanvas_GetTextHeight,
  TFPCustomCanvas_GetTextWidth,
  TFPCustomCanvas_TextExtentWithStr,
  TFPCustomCanvas_TextHeightWithStr,
  TFPCustomCanvas_TextWidthWithStr,
  TFPCustomCanvas_LockCanvas,
  TFPCustomCanvas_UnlockCanvas,
  TFPCustomCanvas_TextOutWithIntX2Str,
  TFPCustomCanvas_GetTextSize,
  TFPCustomCanvas_ArcWithIntX6,
  TFPCustomCanvas_ArcWithIntX8,
  TFPCustomCanvas_EllipseWithRect,
  TFPCustomCanvas_EllipseWithIntX4,
  TFPCustomCanvas_EllipseC,
  TFPCustomCanvas_RadialPieWithIntX6,
  TFPCustomCanvas_PolyBezierWithPointIntBoolX2,
  TFPCustomCanvas_RectangleWithRect,
  TFPCustomCanvas_RectangleWithIntX4,
  TFPCustomCanvas_FillRectWithRect,
  TFPCustomCanvas_FillRectWithIntX4,
  TFPCustomCanvas_FloodFillWithIntX2,
  TFPCustomCanvas_Clear,
  TFPCustomCanvas_MoveToWithIntX2,
  TFPCustomCanvas_MoveToWithPoint,
  TFPCustomCanvas_LineToWithIntX2,
  TFPCustomCanvas_LineToWithPoint,
  TFPCustomCanvas_LineWithIntX4,
  TFPCustomCanvas_LineWithPointX2,
  TFPCustomCanvas_LineWithRect,
  TFPCustomCanvas_CopyRectWithIntX2FPCCanvasRect,
  TFPCustomCanvas_DrawWithIntX2FPCImage,
  TFPCustomCanvas_StretchDrawWithIntX4FPCImage,
  TFPCustomCanvas_Erase,
  TFPCustomCanvas_DrawPixel,
  TFPCustomCanvas_LockCount,
  TFPCustomCanvas_FontToFPCustomFont,
  TFPCustomCanvas_PenToFPCustomPen,
  TFPCustomCanvas_BrushToFPCustomBrush,
  TFPCustomCanvas_Interpolation,
  TFPCustomCanvas_Colors,
  TFPCustomCanvas_ClipRect,
  TFPCustomCanvas_ClipRegion,
  TFPCustomCanvas_Clipping,
  TFPCustomCanvas_PenPos,
  TFPCustomCanvas_Height,
  TFPCustomCanvas_Width,
  TFPCustomCanvas_ManageResources,
  TFPCustomCanvas_DrawingMode,
  TFPCustomCanvas_OnCombineColors;