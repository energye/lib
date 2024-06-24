
//constructor
function CoreWebView2PointerInfo_Create(const aBaseIntf: ICoreWebView2PointerInfo): TCoreWebView2PointerInfo; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2PointerInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_Initialized(AObj: TCoreWebView2PointerInfo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_BaseIntf(AObj: TCoreWebView2PointerInfo; var Result: ICoreWebView2PointerInfo); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PointerKind(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PointerKind := AValue;
  end else
    Result := AObj.PointerKind;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PointerId(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PointerId := AValue;
  end else
    Result := AObj.PointerId;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_FrameId(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FrameId := AValue;
  end else
    Result := AObj.FrameId;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PointerFlags(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PointerFlags := AValue;
  end else
    Result := AObj.PointerFlags;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_PointerDeviceRect(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PointerDeviceRect := AValue;
  end else
    Result := AObj.PointerDeviceRect;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_DisplayRect(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisplayRect := AValue;
  end else
    Result := AObj.DisplayRect;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_PixelLocation(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PixelLocation := AValue;
  end else
    Result := AObj.PixelLocation;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_HimetricLocation(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HimetricLocation := AValue;
  end else
    Result := AObj.HimetricLocation;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_PixelLocationRaw(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PixelLocationRaw := AValue;
  end else
    Result := AObj.PixelLocationRaw;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_HimetricLocationRaw(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HimetricLocationRaw := AValue;
  end else
    Result := AObj.HimetricLocationRaw;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_Time(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Time := AValue;
  end else
    Result := AObj.Time;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_HistoryCount(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HistoryCount := AValue;
  end else
    Result := AObj.HistoryCount;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_InputData(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InputData := AValue;
  end else
    Result := AObj.InputData;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_KeyStates(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeyStates := AValue;
  end else
    Result := AObj.KeyStates;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_PerformanceCount(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: uint64; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PerformanceCount := AValue;
  end else
    Result := AObj.PerformanceCount;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_ButtonChangeKind(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonChangeKind := AValue;
  end else
    Result := AObj.ButtonChangeKind;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenFlags(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenFlags := AValue;
  end else
    Result := AObj.PenFlags;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenMask(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenMask := AValue;
  end else
    Result := AObj.PenMask;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenPressure(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenPressure := AValue;
  end else
    Result := AObj.PenPressure;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenRotation(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenRotation := AValue;
  end else
    Result := AObj.PenRotation;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenTiltX(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenTiltX := AValue;
  end else
    Result := AObj.PenTiltX;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_PenTiltY(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PenTiltY := AValue;
  end else
    Result := AObj.PenTiltY;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_TouchFlags(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchFlags := AValue;
  end else
    Result := AObj.TouchFlags;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_TouchMask(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchMask := AValue;
  end else
    Result := AObj.TouchMask;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_TouchContact(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchContact := AValue;
  end else
    Result := AObj.TouchContact;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PointerInfo_TouchContactRaw(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchContactRaw := AValue;
  end else
    Result := AObj.TouchContactRaw;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_TouchOrientation(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchOrientation := AValue;
  end else
    Result := AObj.TouchOrientation;
  handleExceptionEnd
end;

//property
function CoreWebView2PointerInfo_TouchPressure(AIsSet: LongBool; AObj: TCoreWebView2PointerInfo; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TouchPressure := AValue;
  end else
    Result := AObj.TouchPressure;
  handleExceptionEnd
end;


exports
  CoreWebView2PointerInfo_Create,
  CoreWebView2PointerInfo_Initialized,
  CoreWebView2PointerInfo_BaseIntf,
  CoreWebView2PointerInfo_PointerKind,
  CoreWebView2PointerInfo_PointerId,
  CoreWebView2PointerInfo_FrameId,
  CoreWebView2PointerInfo_PointerFlags,
  CoreWebView2PointerInfo_PointerDeviceRect,
  CoreWebView2PointerInfo_DisplayRect,
  CoreWebView2PointerInfo_PixelLocation,
  CoreWebView2PointerInfo_HimetricLocation,
  CoreWebView2PointerInfo_PixelLocationRaw,
  CoreWebView2PointerInfo_HimetricLocationRaw,
  CoreWebView2PointerInfo_Time,
  CoreWebView2PointerInfo_HistoryCount,
  CoreWebView2PointerInfo_InputData,
  CoreWebView2PointerInfo_KeyStates,
  CoreWebView2PointerInfo_PerformanceCount,
  CoreWebView2PointerInfo_ButtonChangeKind,
  CoreWebView2PointerInfo_PenFlags,
  CoreWebView2PointerInfo_PenMask,
  CoreWebView2PointerInfo_PenPressure,
  CoreWebView2PointerInfo_PenRotation,
  CoreWebView2PointerInfo_PenTiltX,
  CoreWebView2PointerInfo_PenTiltY,
  CoreWebView2PointerInfo_TouchFlags,
  CoreWebView2PointerInfo_TouchMask,
  CoreWebView2PointerInfo_TouchContact,
  CoreWebView2PointerInfo_TouchContactRaw,
  CoreWebView2PointerInfo_TouchOrientation,
  CoreWebView2PointerInfo_TouchPressure;