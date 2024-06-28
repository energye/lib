
//constructor
function CustomImage_Create(AOwner: TComponent): TCustomImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomImage.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomImage_HasGraphic(AObj: TCustomImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasGraphic'}
  handleExceptionBegin
  Result := AObj.HasGraphic;
  handleExceptionEnd
end;

//property
function CustomImage_AntialiasingMode(AIsSet: LongBool; AObj: TCustomImage; AValue: TAntialiasingMode): TAntialiasingMode; extdecl;
begin
  {$define handleExceptionFuncName :='AntialiasingMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AntialiasingMode := AValue;
  end else
    Result := AObj.AntialiasingMode;
  handleExceptionEnd
end;

//property
function CustomImage_Center(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Center'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Center := AValue;
  end else
    Result := AObj.Center;
  handleExceptionEnd
end;

//property
function CustomImage_KeepOriginXWhenClipped(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='KeepOriginXWhenClipped'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeepOriginXWhenClipped := AValue;
  end else
    Result := AObj.KeepOriginXWhenClipped;
  handleExceptionEnd
end;

//property
function CustomImage_KeepOriginYWhenClipped(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='KeepOriginYWhenClipped'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeepOriginYWhenClipped := AValue;
  end else
    Result := AObj.KeepOriginYWhenClipped;
  handleExceptionEnd
end;

//property
function CustomImage_ImageIndex(AIsSet: LongBool; AObj: TCustomImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function CustomImage_ImageWidth(AIsSet: LongBool; AObj: TCustomImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImageWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageWidth := AValue;
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

//property
function CustomImage_Images(AIsSet: LongBool; AObj: TCustomImage; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomImage_Picture(AIsSet: LongBool; AObj: TCustomImage; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionFuncName :='Picture'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Picture := AValue;
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

//property
function CustomImage_Stretch(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Stretch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Stretch := AValue;
  end else
    Result := AObj.Stretch;
  handleExceptionEnd
end;

//property
function CustomImage_StretchOutEnabled(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StretchOutEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StretchOutEnabled := AValue;
  end else
    Result := AObj.StretchOutEnabled;
  handleExceptionEnd
end;

//property
function CustomImage_StretchInEnabled(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StretchInEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StretchInEnabled := AValue;
  end else
    Result := AObj.StretchInEnabled;
  handleExceptionEnd
end;

//property
function CustomImage_Transparent(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Transparent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//property
function CustomImage_Proportional(AIsSet: LongBool; AObj: TCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Proportional'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Proportional := AValue;
  end else
    Result := AObj.Proportional;
  handleExceptionEnd
end;

//function
procedure CustomImage_DestRect(AObj: TCustomImage; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DestRect'}
  handleExceptionBegin
  Result := AObj.DestRect();
  handleExceptionEnd
end;

//function
function CustomImage_Class(): TClass; extdecl;
begin
  Result := TCustomImage;
end;

//property event
procedure CustomImage_SetOnMouseDown(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseEnter(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseLeave(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseMove(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseUp(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseWheel(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseWheelDown(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnMouseWheelUp(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnPictureChanged(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPictureChanged}
  EventMethodCode
end;

//property event
procedure CustomImage_SetOnPaintBackground(AObj: TCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTImagePaintBackgroundEvent}
  {$DEFINE EventName := OnPaintBackground}
  EventMethodCode
end;


exports
  CustomImage_Create,
  CustomImage_HasGraphic,
  CustomImage_AntialiasingMode,
  CustomImage_Center,
  CustomImage_KeepOriginXWhenClipped,
  CustomImage_KeepOriginYWhenClipped,
  CustomImage_ImageIndex,
  CustomImage_ImageWidth,
  CustomImage_Images,
  CustomImage_Picture,
  CustomImage_Stretch,
  CustomImage_StretchOutEnabled,
  CustomImage_StretchInEnabled,
  CustomImage_Transparent,
  CustomImage_Proportional,
  CustomImage_DestRect,
  CustomImage_Class,
  CustomImage_SetOnMouseDown,
  CustomImage_SetOnMouseEnter,
  CustomImage_SetOnMouseLeave,
  CustomImage_SetOnMouseMove,
  CustomImage_SetOnMouseUp,
  CustomImage_SetOnMouseWheel,
  CustomImage_SetOnMouseWheelDown,
  CustomImage_SetOnMouseWheelUp,
  CustomImage_SetOnPictureChanged,
  CustomImage_SetOnPaintBackground;