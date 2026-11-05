// constructor
function TCoreWebView2PointerInfo_Create(const aBaseIntf: ICoreWebView2PointerInfo): TCoreWebView2PointerInfo; extdecl;
begin
  {$define handleExceptionID := 6100}
  handleExceptionBegin
  Result := TCoreWebView2PointerInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_Initialized(AObj: TCoreWebView2PointerInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 6101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_BaseIntf(AObj: TCoreWebView2PointerInfo; var Result: ICoreWebView2PointerInfo); extdecl;
begin
  {$define handleExceptionID := 6102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PointerKind(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PointerKind := AValue
  end else
    Result := AObj.PointerKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PointerId(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PointerId := AValue
  end else
    Result := AObj.PointerId;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_FrameId(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameId := AValue
  end else
    Result := AObj.FrameId;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PointerFlags(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PointerFlags := AValue
  end else
    Result := AObj.PointerFlags;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_PointerDeviceRect(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 6107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PointerDeviceRect := AValue
  end else
    Result := AObj.PointerDeviceRect;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_DisplayRect(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 6108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplayRect := AValue
  end else
    Result := AObj.DisplayRect;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_PixelLocation(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 6109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PixelLocation := AValue
  end else
    Result := AObj.PixelLocation;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_HimetricLocation(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 6110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HimetricLocation := AValue
  end else
    Result := AObj.HimetricLocation;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_PixelLocationRaw(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 6111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PixelLocationRaw := AValue
  end else
    Result := AObj.PixelLocationRaw;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_HimetricLocationRaw(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 6112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HimetricLocationRaw := AValue
  end else
    Result := AObj.HimetricLocationRaw;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_Time(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Time := AValue
  end else
    Result := AObj.Time;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_HistoryCount(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HistoryCount := AValue
  end else
    Result := AObj.HistoryCount;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_InputData(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InputData := AValue
  end else
    Result := AObj.InputData;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_KeyStates(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyStates := AValue
  end else
    Result := AObj.KeyStates;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_PerformanceCount(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: uint64; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 6117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PerformanceCount := AValue
  end else
    Result := AObj.PerformanceCount;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_ButtonChangeKind(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonChangeKind := AValue
  end else
    Result := AObj.ButtonChangeKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenFlags(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenFlags := AValue
  end else
    Result := AObj.PenFlags;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenMask(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenMask := AValue
  end else
    Result := AObj.PenMask;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenPressure(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenPressure := AValue
  end else
    Result := AObj.PenPressure;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenRotation(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenRotation := AValue
  end else
    Result := AObj.PenRotation;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenTiltX(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenTiltX := AValue
  end else
    Result := AObj.PenTiltX;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_PenTiltY(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PenTiltY := AValue
  end else
    Result := AObj.PenTiltY;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_TouchFlags(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchFlags := AValue
  end else
    Result := AObj.TouchFlags;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_TouchMask(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchMask := AValue
  end else
    Result := AObj.TouchMask;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_TouchContact(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 6127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchContact := AValue
  end else
    Result := AObj.TouchContact;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PointerInfo_TouchContactRaw(ASet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 6128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchContactRaw := AValue
  end else
    Result := AObj.TouchContactRaw;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_TouchOrientation(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6129}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchOrientation := AValue
  end else
    Result := AObj.TouchOrientation;
  handleExceptionEnd
end;

// property
function TCoreWebView2PointerInfo_TouchPressure(ASet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6130}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TouchPressure := AValue
  end else
    Result := AObj.TouchPressure;
  handleExceptionEnd
end;

exports
  TCoreWebView2PointerInfo_Create,
  TCoreWebView2PointerInfo_Initialized,
  TCoreWebView2PointerInfo_BaseIntf,
  TCoreWebView2PointerInfo_PointerKind,
  TCoreWebView2PointerInfo_PointerId,
  TCoreWebView2PointerInfo_FrameId,
  TCoreWebView2PointerInfo_PointerFlags,
  TCoreWebView2PointerInfo_PointerDeviceRect,
  TCoreWebView2PointerInfo_DisplayRect,
  TCoreWebView2PointerInfo_PixelLocation,
  TCoreWebView2PointerInfo_HimetricLocation,
  TCoreWebView2PointerInfo_PixelLocationRaw,
  TCoreWebView2PointerInfo_HimetricLocationRaw,
  TCoreWebView2PointerInfo_Time,
  TCoreWebView2PointerInfo_HistoryCount,
  TCoreWebView2PointerInfo_InputData,
  TCoreWebView2PointerInfo_KeyStates,
  TCoreWebView2PointerInfo_PerformanceCount,
  TCoreWebView2PointerInfo_ButtonChangeKind,
  TCoreWebView2PointerInfo_PenFlags,
  TCoreWebView2PointerInfo_PenMask,
  TCoreWebView2PointerInfo_PenPressure,
  TCoreWebView2PointerInfo_PenRotation,
  TCoreWebView2PointerInfo_PenTiltX,
  TCoreWebView2PointerInfo_PenTiltY,
  TCoreWebView2PointerInfo_TouchFlags,
  TCoreWebView2PointerInfo_TouchMask,
  TCoreWebView2PointerInfo_TouchContact,
  TCoreWebView2PointerInfo_TouchContactRaw,
  TCoreWebView2PointerInfo_TouchOrientation,
  TCoreWebView2PointerInfo_TouchPressure;