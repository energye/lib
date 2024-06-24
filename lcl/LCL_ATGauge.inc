
//constructor
function ATGauge_Create(AOwner: TComponent): TATGauge; extdecl;
begin
  handleExceptionBegin
  Result := TATGauge.Create(AOwner);
  handleExceptionEnd
end;

//property
function ATGauge_PercentDone(AObj: TATGauge): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PercentDone;
  handleExceptionEnd
end;

//property
function ATGauge_Theme(AIsSet: LongBool; AObj: TATGauge; AValue: PATFlatTheme): PATFlatTheme; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Theme := AValue;
  end else
    Result := AObj.Theme;
  handleExceptionEnd
end;

//property
function ATGauge_BorderStyle(AIsSet: LongBool; AObj: TATGauge; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function ATGauge_DoubleBuffered(AIsSet: LongBool; AObj: TATGauge; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DoubleBuffered := AValue;
  end else
    Result := AObj.DoubleBuffered;
  handleExceptionEnd
end;

//property
function ATGauge_ParentColor(AIsSet: LongBool; AObj: TATGauge; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function ATGauge_ParentShowHint(AIsSet: LongBool; AObj: TATGauge; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function ATGauge_Kind(AIsSet: LongBool; AObj: TATGauge; AValue: TATGaugeKind): TATGaugeKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Kind := AValue;
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function ATGauge_Progress(AIsSet: LongBool; AObj: TATGauge; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Progress := AValue;
  end else
    Result := AObj.Progress;
  handleExceptionEnd
end;

//property
function ATGauge_MinValue(AIsSet: LongBool; AObj: TATGauge; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinValue := AValue;
  end else
    Result := AObj.MinValue;
  handleExceptionEnd
end;

//property
function ATGauge_MaxValue(AIsSet: LongBool; AObj: TATGauge; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxValue := AValue;
  end else
    Result := AObj.MaxValue;
  handleExceptionEnd
end;

//property
function ATGauge_ShowText(AIsSet: LongBool; AObj: TATGauge; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowText := AValue;
  end else
    Result := AObj.ShowText;
  handleExceptionEnd
end;

//property
function ATGauge_ShowTextInverted(AIsSet: LongBool; AObj: TATGauge; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowTextInverted := AValue;
  end else
    Result := AObj.ShowTextInverted;
  handleExceptionEnd
end;

//function
function ATGauge_Class(): TClass; extdecl;
begin
  Result := TATGauge;
end;

//procedure
procedure ATGauge_AddProgress(AObj: TATGauge; AValue: integer); extdecl;
begin
  handleExceptionBegin
  AObj.AddProgress(AValue);
  handleExceptionEnd
end;

//property event
procedure ATGauge_SetOnDblClick(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnContextPopup(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseDown(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseUp(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseMove(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseEnter(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseLeave(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseWheel(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseWheelDown(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ATGauge_SetOnMouseWheelUp(AObj: TATGauge; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;


exports
  ATGauge_Create,
  ATGauge_PercentDone,
  ATGauge_Theme,
  ATGauge_BorderStyle,
  ATGauge_DoubleBuffered,
  ATGauge_ParentColor,
  ATGauge_ParentShowHint,
  ATGauge_Kind,
  ATGauge_Progress,
  ATGauge_MinValue,
  ATGauge_MaxValue,
  ATGauge_ShowText,
  ATGauge_ShowTextInverted,
  ATGauge_Class,
  ATGauge_AddProgress,
  ATGauge_SetOnDblClick,
  ATGauge_SetOnContextPopup,
  ATGauge_SetOnMouseDown,
  ATGauge_SetOnMouseUp,
  ATGauge_SetOnMouseMove,
  ATGauge_SetOnMouseEnter,
  ATGauge_SetOnMouseLeave,
  ATGauge_SetOnMouseWheel,
  ATGauge_SetOnMouseWheelDown,
  ATGauge_SetOnMouseWheelUp;