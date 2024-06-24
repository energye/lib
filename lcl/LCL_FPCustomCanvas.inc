
//property
function FPCustomCanvas_LockCount(AObj: TFPCustomCanvas): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LockCount;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Font(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomFont): TFPCustomFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Pen(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomPen): TFPCustomPen; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pen := AValue;
  end else
    Result := AObj.Pen;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Brush(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomBrush): TFPCustomBrush; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Brush := AValue;
  end else
    Result := AObj.Brush;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Colors(AIsSet: LongBool; AObj: TFPCustomCanvas; x, y: integer; AValue: TFPColor): TFPColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Colors[x, y] := AValue;
  end else
    Result := AObj.Colors[x, y];
  handleExceptionEnd
end;

//property
procedure FPCustomCanvas_ClipRect(AIsSet: LongBool; AObj: TFPCustomCanvas; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClipRect := AValue;
  end else
    Result := AObj.ClipRect;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_ClipRegion(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: TFPCustomRegion): TFPCustomRegion; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClipRegion := AValue;
  end else
    Result := AObj.ClipRegion;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Clipping(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Clipping := AValue;
  end else
    Result := AObj.Clipping;
  handleExceptionEnd
end;

//property
procedure FPCustomCanvas_PenPos(AIsSet: LongBool; AObj: TFPCustomCanvas; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenPos := AValue;
  end else
    Result := AObj.PenPos;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_Height(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: integer): integer; extdecl;
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
function FPCustomCanvas_Width(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: integer): integer; extdecl;
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
function FPCustomCanvas_ManageResources(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ManageResources := AValue;
  end else
    Result := AObj.ManageResources;
  handleExceptionEnd
end;

//property
function FPCustomCanvas_DrawingMode(AIsSet: LongBool; AObj: TFPCustomCanvas; AValue: TFPDrawingMode): TFPDrawingMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DrawingMode := AValue;
  end else
    Result := AObj.DrawingMode;
  handleExceptionEnd
end;

//function
function FPCustomCanvas_Locked(AObj: TFPCustomCanvas): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Locked();
  handleExceptionEnd
end;

//function
function FPCustomCanvas_CreateFont(AObj: TFPCustomCanvas): TFPCustomFont; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateFont();
  handleExceptionEnd
end;

//function
function FPCustomCanvas_CreatePen(AObj: TFPCustomCanvas): TFPCustomPen; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreatePen();
  handleExceptionEnd
end;

//function
function FPCustomCanvas_CreateBrush(AObj: TFPCustomCanvas): TFPCustomBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateBrush();
  handleExceptionEnd
end;

//function
function FPCustomCanvas_GetTextHeight(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextHeight(text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_GetTextWidth(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextWidth(text);
  handleExceptionEnd
end;

//function
procedure FPCustomCanvas_TextExtent(AObj: TFPCustomCanvas; const Text: PChar; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextExtent(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_TextHeight(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextHeight(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_TextWidth(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextWidth(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_GetTextHeight1(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextHeight(text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_GetTextWidth1(AObj: TFPCustomCanvas; text: PChar): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextWidth(text);
  handleExceptionEnd
end;

//function
procedure FPCustomCanvas_TextExtent1(AObj: TFPCustomCanvas; const Text: PChar; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextExtent(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_TextHeight1(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextHeight(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_TextWidth1(AObj: TFPCustomCanvas; const Text: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextWidth(Text);
  handleExceptionEnd
end;

//function
function FPCustomCanvas_Class(): TClass; extdecl;
begin
  Result := TFPCustomCanvas;
end;

//procedure
procedure FPCustomCanvas_LockCanvas(AObj: TFPCustomCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.LockCanvas();
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_UnlockCanvas(AObj: TFPCustomCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.UnlockCanvas();
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_TextOut(AObj: TFPCustomCanvas; x, y: integer; text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.TextOut(x, y, text);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_GetTextSize(AObj: TFPCustomCanvas; text: PChar; var w, h: integer); extdecl;
var
  Retw: integer;
  Reth: integer;
begin
  handleExceptionBegin
  Retw := w;
  Reth := h;
  AObj.GetTextSize(text, Retw, Reth);
  w := Retw;
  h := Reth;
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_TextOut1(AObj: TFPCustomCanvas; x, y: integer; text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.TextOut(x, y, text);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_GetTextSize1(AObj: TFPCustomCanvas; text: PChar; var w, h: integer); extdecl;
var
  Retw: integer;
  Reth: integer;
begin
  handleExceptionBegin
  Retw := w;
  Reth := h;
  AObj.GetTextSize(text, Retw, Reth);
  w := Retw;
  h := Reth;
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Arc(AObj: TFPCustomCanvas; ALeft, ATop, ARight, ABottom, Angle16Deg, Angle16DegLength: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, Angle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Arc1(AObj: TFPCustomCanvas; ALeft, ATop, ARight, ABottom, SX, SY, EX, EY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Arc(ALeft, ATop, ARight, ABottom, SX, SY, EX, EY);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Ellipse(AObj: TFPCustomCanvas; var Bounds: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Ellipse(Bounds);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Ellipse1(AObj: TFPCustomCanvas; left, top, right, bottom: integer); extdecl;
begin
  handleExceptionBegin
  AObj.Ellipse(left, top, right, bottom);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_EllipseC(AObj: TFPCustomCanvas; x, y: integer; rx, ry: longword); extdecl;
begin
  handleExceptionBegin
  AObj.EllipseC(x, y, rx, ry);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_RadialPie(AObj: TFPCustomCanvas; x1, y1, x2, y2, StartAngle16Deg, Angle16DegLength: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.RadialPie(x1, y1, x2, y2, StartAngle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_PolyBezier(AObj: TFPCustomCanvas; Points: PPoint; NumPts: Integer; Filled: LongBool; Continuous: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.PolyBezier(Points, NumPts, Filled, Continuous);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Rectangle(AObj: TFPCustomCanvas; var Bounds: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Rectangle(Bounds);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Rectangle1(AObj: TFPCustomCanvas; left, top, right, bottom: integer); extdecl;
begin
  handleExceptionBegin
  AObj.Rectangle(left, top, right, bottom);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_FillRect(AObj: TFPCustomCanvas; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.FillRect(ARect);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_FillRect1(AObj: TFPCustomCanvas; X1, Y1, X2, Y2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FillRect(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_FloodFill(AObj: TFPCustomCanvas; x, y: integer); extdecl;
begin
  handleExceptionBegin
  AObj.FloodFill(x, y);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Clear(AObj: TFPCustomCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_MoveTo(AObj: TFPCustomCanvas; x, y: integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveTo(x, y);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_MoveTo1(AObj: TFPCustomCanvas; var p: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.MoveTo(p);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_LineTo(AObj: TFPCustomCanvas; x, y: integer); extdecl;
begin
  handleExceptionBegin
  AObj.LineTo(x, y);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_LineTo1(AObj: TFPCustomCanvas; var p: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.LineTo(p);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Line(AObj: TFPCustomCanvas; x1, y1, x2, y2: integer); extdecl;
begin
  handleExceptionBegin
  AObj.Line(x1, y1, x2, y2);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Line1(AObj: TFPCustomCanvas; var p1, p2: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.Line(p1, p2);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Line2(AObj: TFPCustomCanvas; var points: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Line(points);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_CopyRect(AObj: TFPCustomCanvas; x, y: integer; canvas: TFPCustomCanvas; var SourceRect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.CopyRect(x, y, canvas, SourceRect);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Draw(AObj: TFPCustomCanvas; x, y: integer; image: TFPCustomImage); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(x, y, image);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_StretchDraw(AObj: TFPCustomCanvas; x, y, w, h: integer; source: TFPCustomImage); extdecl;
begin
  handleExceptionBegin
  AObj.StretchDraw(x, y, w, h, source);
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_Erase(AObj: TFPCustomCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Erase();
  handleExceptionEnd
end;

//procedure
procedure FPCustomCanvas_DrawPixel(AObj: TFPCustomCanvas; const x, y: integer; const newcolor: TFPColor); extdecl;
begin
  handleExceptionBegin
  AObj.DrawPixel(x, y, newcolor);
  handleExceptionEnd
end;

//property event
procedure FPCustomCanvas_SetOnCombineColors(AObj: TFPCustomCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPCanvasCombineColors}
  {$DEFINE EventName := OnCombineColors}
  EventMethodCode
end;


exports
  FPCustomCanvas_LockCount,
  FPCustomCanvas_Font,
  FPCustomCanvas_Pen,
  FPCustomCanvas_Brush,
  FPCustomCanvas_Colors,
  FPCustomCanvas_ClipRect,
  FPCustomCanvas_ClipRegion,
  FPCustomCanvas_Clipping,
  FPCustomCanvas_PenPos,
  FPCustomCanvas_Height,
  FPCustomCanvas_Width,
  FPCustomCanvas_ManageResources,
  FPCustomCanvas_DrawingMode,
  FPCustomCanvas_Locked,
  FPCustomCanvas_CreateFont,
  FPCustomCanvas_CreatePen,
  FPCustomCanvas_CreateBrush,
  FPCustomCanvas_GetTextHeight,
  FPCustomCanvas_GetTextWidth,
  FPCustomCanvas_TextExtent,
  FPCustomCanvas_TextHeight,
  FPCustomCanvas_TextWidth,
  FPCustomCanvas_GetTextHeight1,
  FPCustomCanvas_GetTextWidth1,
  FPCustomCanvas_TextExtent1,
  FPCustomCanvas_TextHeight1,
  FPCustomCanvas_TextWidth1,
  FPCustomCanvas_Class,
  FPCustomCanvas_LockCanvas,
  FPCustomCanvas_UnlockCanvas,
  FPCustomCanvas_TextOut,
  FPCustomCanvas_GetTextSize,
  FPCustomCanvas_TextOut1,
  FPCustomCanvas_GetTextSize1,
  FPCustomCanvas_Arc,
  FPCustomCanvas_Arc1,
  FPCustomCanvas_Ellipse,
  FPCustomCanvas_Ellipse1,
  FPCustomCanvas_EllipseC,
  FPCustomCanvas_RadialPie,
  FPCustomCanvas_PolyBezier,
  FPCustomCanvas_Rectangle,
  FPCustomCanvas_Rectangle1,
  FPCustomCanvas_FillRect,
  FPCustomCanvas_FillRect1,
  FPCustomCanvas_FloodFill,
  FPCustomCanvas_Clear,
  FPCustomCanvas_MoveTo,
  FPCustomCanvas_MoveTo1,
  FPCustomCanvas_LineTo,
  FPCustomCanvas_LineTo1,
  FPCustomCanvas_Line,
  FPCustomCanvas_Line1,
  FPCustomCanvas_Line2,
  FPCustomCanvas_CopyRect,
  FPCustomCanvas_Draw,
  FPCustomCanvas_StretchDraw,
  FPCustomCanvas_Erase,
  FPCustomCanvas_DrawPixel,
  FPCustomCanvas_SetOnCombineColors;