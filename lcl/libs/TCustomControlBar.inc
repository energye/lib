// constructor
function TCustomControlBar_Create(AOwner: TComponent): TCustomControlBar; extdecl;
begin
  {$define handleExceptionID := 33300}
  handleExceptionBegin
  Result := TCustomControlBar.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomControlBar_HitTest(AObj: TCustomControlBar; X: Integer; Y: Integer): TControl; extdecl;
begin
  {$define handleExceptionID := 33301}
  handleExceptionBegin
  Result := AObj.HitTest(X, Y);
  handleExceptionEnd
end;

// function
function TCustomControlBar_MouseToBandPos(AObj: TCustomControlBar; X: Integer; Y: Integer; var AGrabber: LongBool): TCtrlBand; extdecl;
var
  OutAGrabber: Boolean;
begin
  {$define handleExceptionID := 33302}
  handleExceptionBegin
  Result := AObj.MouseToBandPos(X, Y, OutAGrabber);
  AGrabber := OutAGrabber;
  handleExceptionEnd
end;

// procedure
procedure TCustomControlBar_BeginUpdate(AObj: TCustomControlBar); extdecl;
begin
  {$define handleExceptionID := 33303}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomControlBar_EndUpdate(AObj: TCustomControlBar); extdecl;
begin
  {$define handleExceptionID := 33304}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomControlBar_StickControls(AObj: TCustomControlBar); extdecl;
begin
  {$define handleExceptionID := 33305}
  handleExceptionBegin
  AObj.StickControls();
  handleExceptionEnd
end;

// property
function TCustomControlBar_AutoDock(ASet: LongBool; AObj: TCustomControlBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoDock := AValue
  end else
    Result := AObj.AutoDock;
  handleExceptionEnd
end;

// property
function TCustomControlBar_AutoDrag(ASet: LongBool; AObj: TCustomControlBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoDrag := AValue
  end else
    Result := AObj.AutoDrag;
  handleExceptionEnd
end;

// property
function TCustomControlBar_DrawingStyle(ASet: LongBool; AObj: TCustomControlBar; AValue: TBandDrawingStyle): TBandDrawingStyle; extdecl;
begin
  {$define handleExceptionID := 33308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawingStyle := AValue
  end else
    Result := AObj.DrawingStyle;
  handleExceptionEnd
end;

// property
function TCustomControlBar_GradientDirection(ASet: LongBool; AObj: TCustomControlBar; AValue: TGradientDirection): TGradientDirection; extdecl;
begin
  {$define handleExceptionID := 33309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GradientDirection := AValue
  end else
    Result := AObj.GradientDirection;
  handleExceptionEnd
end;

// property
function TCustomControlBar_GradientStartColor(ASet: LongBool; AObj: TCustomControlBar; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 33310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GradientStartColor := AValue
  end else
    Result := AObj.GradientStartColor;
  handleExceptionEnd
end;

// property
function TCustomControlBar_GradientEndColor(ASet: LongBool; AObj: TCustomControlBar; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 33311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GradientEndColor := AValue
  end else
    Result := AObj.GradientEndColor;
  handleExceptionEnd
end;

// property
function TCustomControlBar_Picture(ASet: LongBool; AObj: TCustomControlBar; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 33312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Picture := AValue
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

// property
function TCustomControlBar_RowSize(ASet: LongBool; AObj: TCustomControlBar; AValue: TRowSize): TRowSize; extdecl;
begin
  {$define handleExceptionID := 33313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSize := AValue
  end else
    Result := AObj.RowSize;
  handleExceptionEnd
end;

// property
function TCustomControlBar_RowSnap(ASet: LongBool; AObj: TCustomControlBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RowSnap := AValue
  end else
    Result := AObj.RowSnap;
  handleExceptionEnd
end;

// event
procedure TCustomControlBar_OnBandDrag(AObj: TCustomControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTBandDragEvent}
  {$DEFINE EventName := OnBandDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomControlBar_OnBandInfo(AObj: TCustomControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTBandInfoEvent}
  {$DEFINE EventName := OnBandInfo}
  LCLEventMethodCode
end;

// event
procedure TCustomControlBar_OnBandMove(AObj: TCustomControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTBandMoveEvent}
  {$DEFINE EventName := OnBandMove}
  LCLEventMethodCode
end;

// event
procedure TCustomControlBar_OnBandPaint(AObj: TCustomControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTBandPaintEvent}
  {$DEFINE EventName := OnBandPaint}
  LCLEventMethodCode
end;

// event
procedure TCustomControlBar_OnCanResize(AObj: TCustomControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCanResizeEvent}
  {$DEFINE EventName := OnCanResize}
  LCLEventMethodCode
end;

function TCustomControlBar_TClass(): TClass; extdecl;
begin
  Result := TCustomControlBar;
end;

exports
  TCustomControlBar_Create,
  TCustomControlBar_HitTest,
  TCustomControlBar_MouseToBandPos,
  TCustomControlBar_BeginUpdate,
  TCustomControlBar_EndUpdate,
  TCustomControlBar_StickControls,
  TCustomControlBar_AutoDock,
  TCustomControlBar_AutoDrag,
  TCustomControlBar_DrawingStyle,
  TCustomControlBar_GradientDirection,
  TCustomControlBar_GradientStartColor,
  TCustomControlBar_GradientEndColor,
  TCustomControlBar_Picture,
  TCustomControlBar_RowSize,
  TCustomControlBar_RowSnap,
  TCustomControlBar_OnBandDrag,
  TCustomControlBar_OnBandInfo,
  TCustomControlBar_OnBandMove,
  TCustomControlBar_OnBandPaint,
  TCustomControlBar_OnCanResize,
  TCustomControlBar_TClass;