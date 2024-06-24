
//constructor
function Canvas_Create(): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := TCanvas.Create();
  handleExceptionEnd
end;

//property
function Canvas_Pixels(AIsSet: LongBool; AObj: TCanvas; X, Y: Integer; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pixels[X, Y] := AValue;
  end else
    Result := AObj.Pixels[X, Y];
  handleExceptionEnd
end;

//property
function Canvas_Handle(AIsSet: LongBool; AObj: TCanvas; AValue: HDC): HDC; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
procedure Canvas_TextStyle(AIsSet: LongBool; AObj: TCanvas; var AValue: TTextStyle; var Result: TTextStyle); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextStyle := AValue;
  end else
    Result := AObj.TextStyle;
  handleExceptionEnd
end;

//property
function Canvas_AntialiasingMode(AIsSet: LongBool; AObj: TCanvas; AValue: TAntialiasingMode): TAntialiasingMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AntialiasingMode := AValue;
  end else
    Result := AObj.AntialiasingMode;
  handleExceptionEnd
end;

//property
function Canvas_AutoRedraw(AIsSet: LongBool; AObj: TCanvas; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoRedraw := AValue;
  end else
    Result := AObj.AutoRedraw;
  handleExceptionEnd
end;

//property
function Canvas_BrushForBrush(AIsSet: LongBool; AObj: TCanvas; AValue: TBrush): TBrush; extdecl;
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
function Canvas_CopyMode(AIsSet: LongBool; AObj: TCanvas; AValue: TCopyMode): TCopyMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CopyMode := AValue;
  end else
    Result := AObj.CopyMode;
  handleExceptionEnd
end;

//property
function Canvas_FontForFont(AIsSet: LongBool; AObj: TCanvas; AValue: TFont): TFont; extdecl;
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
function Canvas_PenForPen(AIsSet: LongBool; AObj: TCanvas; AValue: TPen): TPen; extdecl;
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
function Canvas_Region(AIsSet: LongBool; AObj: TCanvas; AValue: TRegion): TRegion; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Region := AValue;
  end else
    Result := AObj.Region;
  handleExceptionEnd
end;

//function
function Canvas_TryLock(AObj: TCanvas): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TryLock();
  handleExceptionEnd
end;

//function
function Canvas_GetTextMetrics(AObj: TCanvas; out OutTM: TLCLTextMetric): LongBool; extdecl;
var
  RetOutTM: TLCLTextMetric;
begin
  handleExceptionBegin
  RetOutTM := OutTM;
  Result := AObj.GetTextMetrics(RetOutTM);
  OutTM := RetOutTM;
  handleExceptionEnd
end;

//function
function Canvas_TextFitInfo(AObj: TCanvas; const Text: PChar; MaxWidth: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TextFitInfo(Text, MaxWidth);
  handleExceptionEnd
end;

//function
function Canvas_HandleAllocated(AObj: TCanvas): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function Canvas_GetUpdatedHandle(AObj: TCanvas; ReqState: TCanvasState): HDC; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetUpdatedHandle(ReqState);
  handleExceptionEnd
end;

//function
function Canvas_Class(): TClass; extdecl;
begin
  Result := TCanvas;
end;

//procedure
procedure Canvas_Lock(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Lock();
  handleExceptionEnd
end;

//procedure
procedure Canvas_Unlock(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Unlock();
  handleExceptionEnd
end;

//procedure
procedure Canvas_Refresh(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

//procedure
procedure Canvas_Changing(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Changing();
  handleExceptionEnd
end;

//procedure
procedure Canvas_Changed(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.Changed();
  handleExceptionEnd
end;

//procedure
procedure Canvas_SaveHandleState(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.SaveHandleState();
  handleExceptionEnd
end;

//procedure
procedure Canvas_RestoreHandleState(AObj: TCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.RestoreHandleState();
  handleExceptionEnd
end;

//procedure
procedure Canvas_ArcTo(AObj: TCanvas; ALeft, ATop, ARight, ABottom, SX, SY, EX, EY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ArcTo(ALeft, ATop, ARight, ABottom, SX, SY, EX, EY);
  handleExceptionEnd
end;

//procedure
procedure Canvas_AngleArc(AObj: TCanvas; X, Y: Integer; Radius: Longword; StartAngle, SweepAngle: Single); extdecl;
begin
  handleExceptionBegin
  AObj.AngleArc(X, Y, Radius, StartAngle, SweepAngle);
  handleExceptionEnd
end;

//procedure
procedure Canvas_BrushCopy(AObj: TCanvas; var ADestRect: TRect; ABitmap: TBitmap; var ASourceRect: TRect; ATransparentColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BrushCopy(ADestRect, ABitmap, ASourceRect, ATransparentColor);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Chord(AObj: TCanvas; x1, y1, x2, y2, Angle16Deg, Angle16DegLength: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Chord(x1, y1, x2, y2, Angle16Deg, Angle16DegLength);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Chord1(AObj: TCanvas; x1, y1, x2, y2, SX, SY, EX, EY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Chord(x1, y1, x2, y2, SX, SY, EX, EY);
  handleExceptionEnd
end;

//procedure
procedure Canvas_CopyRectForCanvas(AObj: TCanvas; var Dest: TRect; SrcCanvas: TCanvas; var Source: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.CopyRect(Dest, SrcCanvas, Source);
  handleExceptionEnd
end;

//procedure
procedure Canvas_DrawForGraphic(AObj: TCanvas; X, Y: Integer; SrcGraphic: TGraphic); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(X, Y, SrcGraphic);
  handleExceptionEnd
end;

//procedure
procedure Canvas_DrawFocusRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawFocusRect(ARect);
  handleExceptionEnd
end;

//procedure
procedure Canvas_StretchDrawForGraphic(AObj: TCanvas; var DestRect: TRect; SrcGraphic: TGraphic); extdecl;
begin
  handleExceptionBegin
  AObj.StretchDraw(DestRect, SrcGraphic);
  handleExceptionEnd
end;

//procedure
procedure Canvas_FloodFillForInteger(AObj: TCanvas; X, Y: Integer; FillColor: TColor; FillStyle: TFillStyle); extdecl;
begin
  handleExceptionBegin
  AObj.FloodFill(X, Y, FillColor, FillStyle);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Frame3d(AObj: TCanvas; var ARect: TRect; const FrameWidth: integer; const Style: TGraphicsBevelCut); extdecl;
var
  RetARect: TRect;
begin
  handleExceptionBegin
  RetARect := ARect;
  AObj.Frame3d(RetARect, FrameWidth, Style);
  ARect := RetARect;
  handleExceptionEnd
end;

//procedure
procedure Canvas_Frame3D1(AObj: TCanvas; var ARect: TRect; TopColor, BottomColor: TColor; const FrameWidth: integer); extdecl;
var
  RetARect: TRect;
begin
  handleExceptionBegin
  RetARect := ARect;
  AObj.Frame3D(RetARect, TopColor, BottomColor, FrameWidth);
  ARect := RetARect;
  handleExceptionEnd
end;

//procedure
procedure Canvas_Frame(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Frame(ARect);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Frame1(AObj: TCanvas; X1, Y1, X2, Y2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Frame(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

//procedure
procedure Canvas_FrameRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.FrameRect(ARect);
  handleExceptionEnd
end;

//procedure
procedure Canvas_FrameRect1(AObj: TCanvas; X1, Y1, X2, Y2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FrameRect(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

//procedure
procedure Canvas_GradientFill(AObj: TCanvas; var ARect: TRect; AStart, AStop: TColor; ADirection: TGradientDirection); extdecl;
begin
  handleExceptionBegin
  AObj.GradientFill(ARect, AStart, AStop, ADirection);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Pie(AObj: TCanvas; EllipseX1, EllipseY1, EllipseX2, EllipseY2, StartX, StartY, EndX, EndY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Pie(EllipseX1, EllipseY1, EllipseX2, EllipseY2, StartX, StartY, EndX, EndY);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Polygon(AObj: TCanvas; Points: PPoint; NumPts: Integer; Winding: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Polygon(Points, NumPts, Winding);
  handleExceptionEnd
end;

//procedure
procedure Canvas_Polyline(AObj: TCanvas; Points: PPoint; NumPts: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Polyline(Points, NumPts);
  handleExceptionEnd
end;

//procedure
procedure Canvas_RoundRect(AObj: TCanvas; X1, Y1, X2, Y2: Integer; RX, RY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.RoundRect(X1, Y1, X2, Y2, RX, RY);
  handleExceptionEnd
end;

//procedure
procedure Canvas_RoundRect1(AObj: TCanvas; var Rect: TRect; RX, RY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.RoundRect(Rect, RX, RY);
  handleExceptionEnd
end;

//procedure
procedure Canvas_TextRect(AObj: TCanvas; var ARect: TRect; X, Y: integer; const Text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.TextRect(ARect, X, Y, Text);
  handleExceptionEnd
end;

//procedure
procedure Canvas_TextRect1(AObj: TCanvas; var ARect: TRect; X, Y: integer; const Text: PChar; var Style: TTextStyle); extdecl;
begin
  handleExceptionBegin
  AObj.TextRect(ARect, X, Y, Text, Style);
  handleExceptionEnd
end;

//property event
procedure Canvas_SetOnChange(AObj: TCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure Canvas_SetOnChanging(AObj: TCanvas; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;


exports
  Canvas_Create,
  Canvas_Pixels,
  Canvas_Handle,
  Canvas_TextStyle,
  Canvas_AntialiasingMode,
  Canvas_AutoRedraw,
  Canvas_BrushForBrush,
  Canvas_CopyMode,
  Canvas_FontForFont,
  Canvas_PenForPen,
  Canvas_Region,
  Canvas_TryLock,
  Canvas_GetTextMetrics,
  Canvas_TextFitInfo,
  Canvas_HandleAllocated,
  Canvas_GetUpdatedHandle,
  Canvas_Class,
  Canvas_Lock,
  Canvas_Unlock,
  Canvas_Refresh,
  Canvas_Changing,
  Canvas_Changed,
  Canvas_SaveHandleState,
  Canvas_RestoreHandleState,
  Canvas_ArcTo,
  Canvas_AngleArc,
  Canvas_BrushCopy,
  Canvas_Chord,
  Canvas_Chord1,
  Canvas_CopyRectForCanvas,
  Canvas_DrawForGraphic,
  Canvas_DrawFocusRect,
  Canvas_StretchDrawForGraphic,
  Canvas_FloodFillForInteger,
  Canvas_Frame3d,
  Canvas_Frame3D1,
  Canvas_Frame,
  Canvas_Frame1,
  Canvas_FrameRect,
  Canvas_FrameRect1,
  Canvas_GradientFill,
  Canvas_Pie,
  Canvas_Polygon,
  Canvas_Polyline,
  Canvas_RoundRect,
  Canvas_RoundRect1,
  Canvas_TextRect,
  Canvas_TextRect1,
  Canvas_SetOnChange,
  Canvas_SetOnChanging;