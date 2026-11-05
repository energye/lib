// constructor
function TCustomCoolBar_Create(AOwner: TComponent): TCustomCoolBar; extdecl;
begin
  {$define handleExceptionID := 20000}
  handleExceptionBegin
  Result := TCustomCoolBar.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomCoolBar_AutosizeBands(AObj: TCustomCoolBar); extdecl;
begin
  {$define handleExceptionID := 20001}
  handleExceptionBegin
  AObj.AutosizeBands();
  handleExceptionEnd
end;

// procedure
procedure TCustomCoolBar_MouseToBandPos(AObj: TCustomCoolBar; X: Integer; Y: Integer; var ABand: Integer; var AGrabber: LongBool); extdecl;
var
  OutABand: Integer;
  OutAGrabber: Boolean;
begin
  {$define handleExceptionID := 20002}
  handleExceptionBegin
  AObj.MouseToBandPos(X, Y, OutABand, OutAGrabber);
  ABand := OutABand;
  AGrabber := OutAGrabber;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_BandBorderStyle(ASet: LongBool; AObj: TCustomCoolBar; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 20003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BandBorderStyle := AValue
  end else
    Result := AObj.BandBorderStyle;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_BandMaximize(ASet: LongBool; AObj: TCustomCoolBar; AValue: TCoolBandMaximize): TCoolBandMaximize; extdecl;
begin
  {$define handleExceptionID := 20004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BandMaximize := AValue
  end else
    Result := AObj.BandMaximize;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_Bands(ASet: LongBool; AObj: TCustomCoolBar; AValue: TCoolBands): TCoolBands; extdecl;
begin
  {$define handleExceptionID := 20005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bands := AValue
  end else
    Result := AObj.Bands;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_Bitmap(ASet: LongBool; AObj: TCustomCoolBar; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 20006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bitmap := AValue
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_FixedSize(ASet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedSize := AValue
  end else
    Result := AObj.FixedSize;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_FixedOrder(ASet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedOrder := AValue
  end else
    Result := AObj.FixedOrder;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_GrabStyle(ASet: LongBool; AObj: TCustomCoolBar; AValue: TGrabStyle): TGrabStyle; extdecl;
begin
  {$define handleExceptionID := 20009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GrabStyle := AValue
  end else
    Result := AObj.GrabStyle;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_GrabWidth(ASet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GrabWidth := AValue
  end else
    Result := AObj.GrabWidth;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_HorizontalSpacing(ASet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorizontalSpacing := AValue
  end else
    Result := AObj.HorizontalSpacing;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_Images(ASet: LongBool; AObj: TCustomCoolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 20012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_ImagesWidth(ASet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_ShowText(ASet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowText := AValue
  end else
    Result := AObj.ShowText;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_Themed(ASet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Themed := AValue
  end else
    Result := AObj.Themed;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_Vertical(ASet: LongBool; AObj: TCustomCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Vertical := AValue
  end else
    Result := AObj.Vertical;
  handleExceptionEnd
end;

// property
function TCustomCoolBar_VerticalSpacing(ASet: LongBool; AObj: TCustomCoolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerticalSpacing := AValue
  end else
    Result := AObj.VerticalSpacing;
  handleExceptionEnd
end;

// event
procedure TCustomCoolBar_OnChange(AObj: TCustomCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCustomCoolBar_TClass(): TClass; extdecl;
begin
  Result := TCustomCoolBar;
end;

exports
  TCustomCoolBar_Create,
  TCustomCoolBar_AutosizeBands,
  TCustomCoolBar_MouseToBandPos,
  TCustomCoolBar_BandBorderStyle,
  TCustomCoolBar_BandMaximize,
  TCustomCoolBar_Bands,
  TCustomCoolBar_Bitmap,
  TCustomCoolBar_FixedSize,
  TCustomCoolBar_FixedOrder,
  TCustomCoolBar_GrabStyle,
  TCustomCoolBar_GrabWidth,
  TCustomCoolBar_HorizontalSpacing,
  TCustomCoolBar_Images,
  TCustomCoolBar_ImagesWidth,
  TCustomCoolBar_ShowText,
  TCustomCoolBar_Themed,
  TCustomCoolBar_Vertical,
  TCustomCoolBar_VerticalSpacing,
  TCustomCoolBar_OnChange,
  TCustomCoolBar_TClass;