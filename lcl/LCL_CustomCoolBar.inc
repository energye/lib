
//constructor
function CustomCoolBar_Create(AOwner: TComponent): TCustomCoolBar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCoolBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomCoolBar_BandBorderStyle(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BandBorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BandBorderStyle := AValue;
  end else
    Result := AObj.BandBorderStyle;
  handleExceptionEnd
end;

//property
function CustomCoolBar_BandMaximize(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TCoolBandMaximize): TCoolBandMaximize; extdecl;
begin
  {$define handleExceptionFuncName :='BandMaximize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BandMaximize := AValue;
  end else
    Result := AObj.BandMaximize;
  handleExceptionEnd
end;

//property
function CustomCoolBar_Bands(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TCoolBands): TCoolBands; extdecl;
begin
  {$define handleExceptionFuncName :='Bands'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bands := AValue;
  end else
    Result := AObj.Bands;
  handleExceptionEnd
end;

//property
function CustomCoolBar_Bitmap(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionFuncName :='Bitmap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bitmap := AValue;
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

//property
function CustomCoolBar_FixedSize(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FixedSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedSize := AValue;
  end else
    Result := AObj.FixedSize;
  handleExceptionEnd
end;

//property
function CustomCoolBar_FixedOrder(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FixedOrder'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedOrder := AValue;
  end else
    Result := AObj.FixedOrder;
  handleExceptionEnd
end;

//property
function CustomCoolBar_GrabStyle(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TGrabStyle): TGrabStyle; extdecl;
begin
  {$define handleExceptionFuncName :='GrabStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GrabStyle := AValue;
  end else
    Result := AObj.GrabStyle;
  handleExceptionEnd
end;

//property
function CustomCoolBar_GrabWidth(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GrabWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GrabWidth := AValue;
  end else
    Result := AObj.GrabWidth;
  handleExceptionEnd
end;

//property
function CustomCoolBar_HorizontalSpacing(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HorizontalSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HorizontalSpacing := AValue;
  end else
    Result := AObj.HorizontalSpacing;
  handleExceptionEnd
end;

//property
function CustomCoolBar_Images(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
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
function CustomCoolBar_ImagesWidth(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function CustomCoolBar_ShowText(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowText := AValue;
  end else
    Result := AObj.ShowText;
  handleExceptionEnd
end;

//property
function CustomCoolBar_Themed(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Themed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Themed := AValue;
  end else
    Result := AObj.Themed;
  handleExceptionEnd
end;

//property
function CustomCoolBar_Vertical(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Vertical'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Vertical := AValue;
  end else
    Result := AObj.Vertical;
  handleExceptionEnd
end;

//property
function CustomCoolBar_VerticalSpacing(AIsSet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VerticalSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerticalSpacing := AValue;
  end else
    Result := AObj.VerticalSpacing;
  handleExceptionEnd
end;

//function
function CustomCoolBar_Class(): TClass; extdecl;
begin
  Result := TCustomCoolBar;
end;

//procedure
procedure CustomCoolBar_AutosizeBands(AObj: TCustomCoolBar); extdecl;
begin
  {$define handleExceptionFuncName :='AutosizeBands'}
  handleExceptionBegin
  AObj.AutosizeBands();
  handleExceptionEnd
end;

//procedure
procedure CustomCoolBar_MouseToBandPos(AObj: TCustomCoolBar; X, Y: Integer; out OutBand: Integer; out OutGrabber: LongBool); extdecl;
var
  RetOutBand: Integer;
  RetOutGrabber: boolean;
begin
  {$define handleExceptionFuncName :='MouseToBandPos'}
  handleExceptionBegin
  RetOutBand := OutBand;
  RetOutGrabber := OutGrabber;
  AObj.MouseToBandPos(X, Y, RetOutBand, RetOutGrabber);
  OutBand := RetOutBand;
  OutGrabber := LongBool(RetOutGrabber);
  handleExceptionEnd
end;

//property event
procedure CustomCoolBar_SetOnChange(AObj: TCustomCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  CustomCoolBar_Create,
  CustomCoolBar_BandBorderStyle,
  CustomCoolBar_BandMaximize,
  CustomCoolBar_Bands,
  CustomCoolBar_Bitmap,
  CustomCoolBar_FixedSize,
  CustomCoolBar_FixedOrder,
  CustomCoolBar_GrabStyle,
  CustomCoolBar_GrabWidth,
  CustomCoolBar_HorizontalSpacing,
  CustomCoolBar_Images,
  CustomCoolBar_ImagesWidth,
  CustomCoolBar_ShowText,
  CustomCoolBar_Themed,
  CustomCoolBar_Vertical,
  CustomCoolBar_VerticalSpacing,
  CustomCoolBar_Class,
  CustomCoolBar_AutosizeBands,
  CustomCoolBar_MouseToBandPos,
  CustomCoolBar_SetOnChange;