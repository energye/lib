// constructor
function TCustomImage_Create(AOwner: TComponent): TCustomImage; extdecl;
begin
  {$define handleExceptionID := 4600}
  handleExceptionBegin
  Result := TCustomImage.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TCustomImage_DestRect(AObj: TCustomImage; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 4601}
  handleExceptionBegin
  Result := AObj.DestRect();
  handleExceptionEnd
end;

// property
function TCustomImage_HasGraphic(AObj: TCustomImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 4602}
  handleExceptionBegin
  Result := AObj.HasGraphic;
  handleExceptionEnd
end;

// property
function TCustomImage_AntialiasingMode(ASet: LongBool; AObj: TCustomImage; AValue: TAntialiasingMode): TAntialiasingMode; extdecl;
begin
  {$define handleExceptionID := 4603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AntialiasingMode := AValue
  end else
    Result := AObj.AntialiasingMode;
  handleExceptionEnd
end;

// property
function TCustomImage_Center(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Center := AValue
  end else
    Result := AObj.Center;
  handleExceptionEnd
end;

// property
function TCustomImage_KeepOriginXWhenClipped(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepOriginXWhenClipped := AValue
  end else
    Result := AObj.KeepOriginXWhenClipped;
  handleExceptionEnd
end;

// property
function TCustomImage_KeepOriginYWhenClipped(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeepOriginYWhenClipped := AValue
  end else
    Result := AObj.KeepOriginYWhenClipped;
  handleExceptionEnd
end;

// property
function TCustomImage_ImageIndex(ASet: LongBool; AObj: TCustomImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCustomImage_ImageWidth(ASet: LongBool; AObj: TCustomImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TCustomImage_Images(ASet: LongBool; AObj: TCustomImage; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 4609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomImage_Picture(ASet: LongBool; AObj: TCustomImage; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 4610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Picture := AValue
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

// property
function TCustomImage_Stretch(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Stretch := AValue
  end else
    Result := AObj.Stretch;
  handleExceptionEnd
end;

// property
function TCustomImage_StretchOutEnabled(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StretchOutEnabled := AValue
  end else
    Result := AObj.StretchOutEnabled;
  handleExceptionEnd
end;

// property
function TCustomImage_StretchInEnabled(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StretchInEnabled := AValue
  end else
    Result := AObj.StretchInEnabled;
  handleExceptionEnd
end;

// property
function TCustomImage_Transparent(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// property
function TCustomImage_Proportional(ASet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Proportional := AValue
  end else
    Result := AObj.Proportional;
  handleExceptionEnd
end;

// event
procedure TCustomImage_OnMouseDown(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseEnter(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseLeave(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseMove(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseUp(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseWheel(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseWheelDown(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnMouseWheelUp(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnPictureChanged(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPictureChanged}
  LCLEventMethodCode
end;

// event
procedure TCustomImage_OnPaintBackground(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTImagePaintBackgroundEvent}
  {$DEFINE EventName := OnPaintBackground}
  LCLEventMethodCode
end;

function TCustomImage_TClass(): TClass; extdecl;
begin
  Result := TCustomImage;
end;

exports
  TCustomImage_Create,
  TCustomImage_DestRect,
  TCustomImage_HasGraphic,
  TCustomImage_AntialiasingMode,
  TCustomImage_Center,
  TCustomImage_KeepOriginXWhenClipped,
  TCustomImage_KeepOriginYWhenClipped,
  TCustomImage_ImageIndex,
  TCustomImage_ImageWidth,
  TCustomImage_Images,
  TCustomImage_Picture,
  TCustomImage_Stretch,
  TCustomImage_StretchOutEnabled,
  TCustomImage_StretchInEnabled,
  TCustomImage_Transparent,
  TCustomImage_Proportional,
  TCustomImage_OnMouseDown,
  TCustomImage_OnMouseEnter,
  TCustomImage_OnMouseLeave,
  TCustomImage_OnMouseMove,
  TCustomImage_OnMouseUp,
  TCustomImage_OnMouseWheel,
  TCustomImage_OnMouseWheelDown,
  TCustomImage_OnMouseWheelUp,
  TCustomImage_OnPictureChanged,
  TCustomImage_OnPaintBackground,
  TCustomImage_TClass;